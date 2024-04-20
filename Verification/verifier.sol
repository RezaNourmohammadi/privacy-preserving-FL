// This file is MIT Licensed.
//
// Copyright 2017 Christian Reitwiessner
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
pragma solidity ^0.8.0;
library Pairing {
    struct G1Point {
        uint X;
        uint Y;
    }
    // Encoding of field elements is: X[0] * z + X[1]
    struct G2Point {
        uint[2] X;
        uint[2] Y;
    }
    /// @return the generator of G1
    function P1() pure internal returns (G1Point memory) {
        return G1Point(1, 2);
    }
    /// @return the generator of G2
    function P2() pure internal returns (G2Point memory) {
        return G2Point(
            [10857046999023057135944570762232829481370756359578518086990519993285655852781,
             11559732032986387107991004021392285783925812861821192530917403151452391805634],
            [8495653923123431417604973247489272438418190587263600148770280649306958101930,
             4082367875863433681332203403145435568316851327593401208105741076214120093531]
        );
    }
    /// @return the negation of p, i.e. p.addition(p.negate()) should be zero.
    function negate(G1Point memory p) pure internal returns (G1Point memory) {
        // The prime q in the base field F_q for G1
        uint q = 21888242871839275222246405745257275088696311157297823662689037894645226208583;
        if (p.X == 0 && p.Y == 0)
            return G1Point(0, 0);
        return G1Point(p.X, q - (p.Y % q));
    }
    /// @return r the sum of two points of G1
    function addition(G1Point memory p1, G1Point memory p2) internal view returns (G1Point memory r) {
        uint[4] memory input;
        input[0] = p1.X;
        input[1] = p1.Y;
        input[2] = p2.X;
        input[3] = p2.Y;
        bool success;
        assembly {
            success := staticcall(sub(gas(), 2000), 6, input, 0xc0, r, 0x60)
            // Use "invalid" to make gas estimation work
            switch success case 0 { invalid() }
        }
        require(success);
    }


    /// @return r the product of a point on G1 and a scalar, i.e.
    /// p == p.scalar_mul(1) and p.addition(p) == p.scalar_mul(2) for all points p.
    function scalar_mul(G1Point memory p, uint s) internal view returns (G1Point memory r) {
        uint[3] memory input;
        input[0] = p.X;
        input[1] = p.Y;
        input[2] = s;
        bool success;
        assembly {
            success := staticcall(sub(gas(), 2000), 7, input, 0x80, r, 0x60)
            // Use "invalid" to make gas estimation work
            switch success case 0 { invalid() }
        }
        require (success);
    }
    /// @return the result of computing the pairing check
    /// e(p1[0], p2[0]) *  .... * e(p1[n], p2[n]) == 1
    /// For example pairing([P1(), P1().negate()], [P2(), P2()]) should
    /// return true.
    function pairing(G1Point[] memory p1, G2Point[] memory p2) internal view returns (bool) {
        require(p1.length == p2.length);
        uint elements = p1.length;
        uint inputSize = elements * 6;
        uint[] memory input = new uint[](inputSize);
        for (uint i = 0; i < elements; i++)
        {
            input[i * 6 + 0] = p1[i].X;
            input[i * 6 + 1] = p1[i].Y;
            input[i * 6 + 2] = p2[i].X[1];
            input[i * 6 + 3] = p2[i].X[0];
            input[i * 6 + 4] = p2[i].Y[1];
            input[i * 6 + 5] = p2[i].Y[0];
        }
        uint[1] memory out;
        bool success;
        assembly {
            success := staticcall(sub(gas(), 2000), 8, add(input, 0x20), mul(inputSize, 0x20), out, 0x20)
            // Use "invalid" to make gas estimation work
            switch success case 0 { invalid() }
        }
        require(success);
        return out[0] != 0;
    }
    /// Convenience method for a pairing check for two pairs.
    function pairingProd2(G1Point memory a1, G2Point memory a2, G1Point memory b1, G2Point memory b2) internal view returns (bool) {
        G1Point[] memory p1 = new G1Point[](2);
        G2Point[] memory p2 = new G2Point[](2);
        p1[0] = a1;
        p1[1] = b1;
        p2[0] = a2;
        p2[1] = b2;
        return pairing(p1, p2);
    }
    /// Convenience method for a pairing check for three pairs.
    function pairingProd3(
            G1Point memory a1, G2Point memory a2,
            G1Point memory b1, G2Point memory b2,
            G1Point memory c1, G2Point memory c2
    ) internal view returns (bool) {
        G1Point[] memory p1 = new G1Point[](3);
        G2Point[] memory p2 = new G2Point[](3);
        p1[0] = a1;
        p1[1] = b1;
        p1[2] = c1;
        p2[0] = a2;
        p2[1] = b2;
        p2[2] = c2;
        return pairing(p1, p2);
    }
    /// Convenience method for a pairing check for four pairs.
    function pairingProd4(
            G1Point memory a1, G2Point memory a2,
            G1Point memory b1, G2Point memory b2,
            G1Point memory c1, G2Point memory c2,
            G1Point memory d1, G2Point memory d2
    ) internal view returns (bool) {
        G1Point[] memory p1 = new G1Point[](4);
        G2Point[] memory p2 = new G2Point[](4);
        p1[0] = a1;
        p1[1] = b1;
        p1[2] = c1;
        p1[3] = d1;
        p2[0] = a2;
        p2[1] = b2;
        p2[2] = c2;
        p2[3] = d2;
        return pairing(p1, p2);
    }
}

contract Verifier {
    using Pairing for *;
    struct VerifyingKey {
        Pairing.G1Point alpha;
        Pairing.G2Point beta;
        Pairing.G2Point gamma;
        Pairing.G2Point delta;
        Pairing.G1Point[] gamma_abc;
    }
    struct Proof {
        Pairing.G1Point a;
        Pairing.G2Point b;
        Pairing.G1Point c;
    }
    function verifyingKey() pure internal returns (VerifyingKey memory vk) {
        vk.alpha = Pairing.G1Point(uint256(0x093e65d422888d869feaf3314208e8c721aa3e36457a17724b645b29308af9bb), uint256(0x1172f1143dba6b5dd9d7cf2c7aa9f1bbd6cfcaf56c74d790bf4f4e7eb60ed8b9));
        vk.beta = Pairing.G2Point([uint256(0x1d1863b42ba5010a0197faf64b6796ce9bf7d7241667bcc38c6aa0da87778879), uint256(0x20dc80edb910d6f8a172ab68befc13799c8a6785d656314cd8be84d33291c99a)], [uint256(0x2c2134a316d90f9a5305d787d079e007357922c9775fb316ffc034d10d2b5080), uint256(0x02891cf39787092a2c58322f34526ca43279e8aafa9869068428f9a00d9ac134)]);
        vk.gamma = Pairing.G2Point([uint256(0x1633b2ed82bdcc1d4c103d8d2df4953ab8d9e2604c0819eafa97c4ed8ee9a01f), uint256(0x2d00084872f3eb4178599765582e85f897e5f9f47a413ef8fcf43f794d9b2b0b)], [uint256(0x0808fdd35bffa4a531ee746f88e6202a55cbd35afaacc24a8cbc5fa6bad45a25), uint256(0x24244d0fbcbc0d47df6d5d6abc3dd8eee895f47aa58a5daec199e7bf1a8e9eaa)]);
        vk.delta = Pairing.G2Point([uint256(0x26d2d88d25d06f71212f8a493eb38bc91a3051f3e031dc5a53675c52088b40d1), uint256(0x200542d27cfb8b434bdfdcecd0651e35446e215055a02b9ad03d05d23521d30b)], [uint256(0x272fdfcb2a4541bbd7fc7e5a459e091236695f8ebd306f5ecd4c30e4522e4c3c), uint256(0x197f2168619c874f34a5b0ef3911b8405e67832d137ab652b3dd189d8cbd50fa)]);
        vk.gamma_abc = new Pairing.G1Point[](65);
        vk.gamma_abc[0] = Pairing.G1Point(uint256(0x1f81693c74a5c467823076803ae3dc847f4108b46d6a59a23239084c8e712ee2), uint256(0x2d99dbe12a5d58bee3c60001145201576f3e4b5ec62050533f719e5297d189f8));
        vk.gamma_abc[1] = Pairing.G1Point(uint256(0x1b8fa70d5d33cb6cf82cd6e76c2cb02792fa08700bc5279b0c881826ab1ea4a3), uint256(0x0cfc12ec608471ea1824308bfdcb19ebcdce777798042d68a5bbe524549469f7));
        vk.gamma_abc[2] = Pairing.G1Point(uint256(0x29ba2698b741eccaa7c5ae6199865df454df269aa05861ee4722d9e225039bbb), uint256(0x1eba2af6f6d80fa9172b3a17338bab186cafa5d68df60725dc66729e399d680c));
        vk.gamma_abc[3] = Pairing.G1Point(uint256(0x2cdd127a1c7ecd3ab0aaee0585b803436b37f1410506c4a217214e31f3fea0b2), uint256(0x0bf85c39e2190bfb91a549ad10d0f84f781f221da13cb55a5ceb74402d9c061f));
        vk.gamma_abc[4] = Pairing.G1Point(uint256(0x22cf47626077bb76edb154712f5aa88fcd6337dcb0beb7d1943053cebd3aaff8), uint256(0x0b54cecd2b3cf5f8fc0dd67863e7eb89ddb3512523d3b58d63f0ce65060a28a5));
        vk.gamma_abc[5] = Pairing.G1Point(uint256(0x2832c16212b0e1dc8e0f711859c456b7196fcbb7fa3b65564cd42da627e82297), uint256(0x285cbcfd6e7ef4b9f27161936a2429fd90ae9ec5810f4d1f7f6db1c8d0157375));
        vk.gamma_abc[6] = Pairing.G1Point(uint256(0x229958d9bdb55e7cf71ed5a41f292616082e462b517e191e7a93c48af71580fa), uint256(0x2b19f5ae4dfba6c4b6f101c466e459516f1bff74964e972666ff2ab417123e26));
        vk.gamma_abc[7] = Pairing.G1Point(uint256(0x1b3e21f971fe45e8d5f46e4af5eff65ac66edc1a8aa3d96b0dc2e7025ac2698b), uint256(0x00f40c77445f5d458b6b55588a07c723bd83ab9107ca5db796659cff23360459));
        vk.gamma_abc[8] = Pairing.G1Point(uint256(0x26a7c49db5ab80f368fd6a99330a9fd7c2347f3a5d808e28349bfd3c6c1d8374), uint256(0x09ef9fb5810d1b24349bb446467d141b4928595a4d9ef65c25ae804ced93b644));
        vk.gamma_abc[9] = Pairing.G1Point(uint256(0x224024c1ef1ff47bfd56f2d62c2e084f977e7c8426f8761be3bea28dd3bab0ee), uint256(0x01a8decc91d0f9f479e57f41f1cdfaa1004ca708dcbad99227776b0d189d312f));
        vk.gamma_abc[10] = Pairing.G1Point(uint256(0x192f26efd7966a6a0ba2bddb1f8ea530212cfcf293d39686db8189d8c9339c7d), uint256(0x2e9419dce899425bebbefb39f5789665b836af92625a38322690f418dcdc14be));
        vk.gamma_abc[11] = Pairing.G1Point(uint256(0x05826e6cd3846dda05ffaeb99b8e07f7414d93c7d7b4b4180035dc41eec1da02), uint256(0x13029886a6ac04d3e5664402a562cd1f7863ba076c8b8d5951d960c0dbef1e79));
        vk.gamma_abc[12] = Pairing.G1Point(uint256(0x2583457186ed353e4c0a5998078a6d45185d166f89b264f156a99b9a44d1aedc), uint256(0x0b6e44b4ca058dfffbc94e8a9c0afb5b196ed84a879e88d1b836236e928d78d4));
        vk.gamma_abc[13] = Pairing.G1Point(uint256(0x2dbc619c564a10cf9da7f90a9471476c44067296d5d5606bb1ced27718d4b2c4), uint256(0x2ea0abbd7bd4fde370f10df18f8b89fd1886560a27bf6342267516055bb2faa7));
        vk.gamma_abc[14] = Pairing.G1Point(uint256(0x17f16dbd9a84c6a0e2d16a07817cc01b47db56f328def952a6285aeafaf10d60), uint256(0x1e55df253085ae9a1944b464e9c9d31d19c7bcc14c47d2b010ff13a136efbf6f));
        vk.gamma_abc[15] = Pairing.G1Point(uint256(0x2caaef273e1fa53834c05c18cd3cb55887989af163fca2351229627df7aec697), uint256(0x2f06e4cbb955e561d601a1454d3b8abfb11d27ed8b813460a22d9d3d7fda2276));
        vk.gamma_abc[16] = Pairing.G1Point(uint256(0x13acb96398f33f1a8d1830cd7f28a6b528ce82dc38efc2bedd3307a36f7d3fcc), uint256(0x1f0ed5a50bd7f5af27f6b7c7cb4799cb5447b7fb8faaee681e21de05686ff82b));
        vk.gamma_abc[17] = Pairing.G1Point(uint256(0x0295ad8f555fa52c49cb99e9bfc92cac525f74071a4c529059d9e34c3a9a7dfd), uint256(0x0098418c2608f70c47d5b2072bbaafe5837471cc3281754bf7021278b88d336a));
        vk.gamma_abc[18] = Pairing.G1Point(uint256(0x20c42b68c2472e4d4b354ea751ee11a41f7b9c1616fe51ee93841c82413da097), uint256(0x04b61319376102f74ba6884695d5238f1a6110e2fb2a76b000436a10bfb5a3d4));
        vk.gamma_abc[19] = Pairing.G1Point(uint256(0x0b8b3d03225824f4a5ceb70faf077a9a7c499ee25e51d2e9213bd21f2b8d2d11), uint256(0x1fc542a0a82ee1991b28ca764d3f7dd0b3aff67c2dc0df94008119ddcf89e8d6));
        vk.gamma_abc[20] = Pairing.G1Point(uint256(0x2ad19728ebae7763b7b078dcce13ffc574b65f592eb2caff27ff717b1bcf2048), uint256(0x040de192ee945c4e09affa32e47b6662a946a20c6750f30667b03ed7530a9220));
        vk.gamma_abc[21] = Pairing.G1Point(uint256(0x244ab2b3dfc5b817648be295ad8173e3f5164429586fe476567e71609638b784), uint256(0x12b92916364ddcca7100840076f621b2a05b51c28720460d7f2d508e7cb20151));
        vk.gamma_abc[22] = Pairing.G1Point(uint256(0x1261b1115853fbcda89aa7c06011d2e86a14f80fdeb11e1c54721da320b54807), uint256(0x049e721af4b92bd212ccc1013dfb6c7093f04bc953ed36f024bcf757063bc08e));
        vk.gamma_abc[23] = Pairing.G1Point(uint256(0x1a0a9aab40b80e3f80d38b0e647052c0621dbe9266a0a8b5f9f5adb9798dd7fe), uint256(0x0ffdb62abf3f2c266b50a10ae02c1cbacc801930b6193d829d05fdc87456477e));
        vk.gamma_abc[24] = Pairing.G1Point(uint256(0x21d971487e3459f6e1d1ff45d90b886203aa63dacf9d55b921c9dbf2d1fac2d3), uint256(0x018db65cbe361e73da9027ccc6d97bdeef66a825d20f8b46a025e5cf6413d03a));
        vk.gamma_abc[25] = Pairing.G1Point(uint256(0x23a8f6e5a1df20ab01731f87cdeae4dd27519df1f68384a96fdf972cc6b3f31f), uint256(0x03785027abe5c562a48ea45c3f047da6becf9f288913b3e592e4d4ffb5b7dbdc));
        vk.gamma_abc[26] = Pairing.G1Point(uint256(0x28dc78e79941327cffe3fc7626c89f4bf9b387f1f6d6a5db88d2e034b14203fc), uint256(0x13173e94ac5c67ad6608334ff6820bd5fc4fc50eae0eb53e62ccd0c87c437f91));
        vk.gamma_abc[27] = Pairing.G1Point(uint256(0x24c4617add5bbaa71fe59ef9bdb92234da72d628e8b6c00e3b30bd3af285452b), uint256(0x0422d39ebfccb62d234d3779776d77a6ee13e021034a22f7e3974f98000e9ae0));
        vk.gamma_abc[28] = Pairing.G1Point(uint256(0x06fb61c024f8c1d0ddf05d425a7c37e3fb280be09f7f2ebc96b58aab549a5019), uint256(0x26d1ae968c09453fb5c5926cad3adf840436c03f70e35e97169d84c2aa503996));
        vk.gamma_abc[29] = Pairing.G1Point(uint256(0x065c58981668fc366405a2bed89b0d53f8fc62f1be66be59d28ce56b0482f9b2), uint256(0x097406fa80e606533b5ae0186221929c2efa4d8227fa56bc08eccb8cea375432));
        vk.gamma_abc[30] = Pairing.G1Point(uint256(0x152f6282edf92fcda5896e7fe5d523ae61742072cb8cb09411cc96136c062514), uint256(0x133ba66eec10f2df1c102f70479ae59d3d5d145190be7495d491bdb1c6710909));
        vk.gamma_abc[31] = Pairing.G1Point(uint256(0x027f73f0def0e5ad01500c9ec658a8b788a17a05b0b86a3ece0d3733a39de43d), uint256(0x12fcb9bcaeba48caecb0073ceeee818c0121d743102d75d24589708e9ad25d11));
        vk.gamma_abc[32] = Pairing.G1Point(uint256(0x285d317376334d5647dd064fc4ed4c4dfc828c38ee2f5741b0a53bbb9543a5ab), uint256(0x2ceb3561456541d54834740c3bca9af038021886fe9e4da27f94e9c60dd250ad));
        vk.gamma_abc[33] = Pairing.G1Point(uint256(0x066488ab47fd036d522e3b3dd9c70cfb52be30bfeb2928b4e937d29ed7270271), uint256(0x1dfd463c763dafe1c9d1477ff3ce6f0d40002d22da8d6c70a87319735ae3ff84));
        vk.gamma_abc[34] = Pairing.G1Point(uint256(0x2c3179b9ca6f8acb857ae83a0eb5c1375d21a1a4dd459f637da675c2723b2d3f), uint256(0x2375e7ad882b33b2ce7cf03f74db363a86a08f5d18d4d850c95bafcbbadfd469));
        vk.gamma_abc[35] = Pairing.G1Point(uint256(0x05acc080e0e971688ff7980f3139cdd8d9d792cfef49f53fca6c57b3f881e854), uint256(0x0cadd694bf96ab72c49e1894fac91a95a91e7abf59cee4c4d9aca9941d7b113b));
        vk.gamma_abc[36] = Pairing.G1Point(uint256(0x2354dbfe181fe9628af248aeb0ec95c13c04dfe1accfdfe8a4e3731bbbb4d30d), uint256(0x02d07d836979e2cf723e4748d822f8d230a1a87f4eb5587a3968661518baf1a6));
        vk.gamma_abc[37] = Pairing.G1Point(uint256(0x1b9452918a2143cfacf9b5d1a1aaf733d9a0cee3c23d816244d04d6c02d55e16), uint256(0x23aafa542630d68f27355ce351938df4d0a56ba09ab6a983e7ae2fa21bcbaf63));
        vk.gamma_abc[38] = Pairing.G1Point(uint256(0x1d27b7bdd1590ce7fa8cd840bb8c5467b791d0b1a7d0878ab0bd6ce59ab9813c), uint256(0x1c8bc2e4942fdda1252454c361d4435473ff0a010e9b94740a4f48fe892c5819));
        vk.gamma_abc[39] = Pairing.G1Point(uint256(0x1e3bec771a9dae43bf6d52c3e34aad854236bcc3a9406f1d80721e75b780aa5d), uint256(0x27ce876b34dfbed6609d097563055f10a7fb20518d0f9af5223f3d33a8d61a1e));
        vk.gamma_abc[40] = Pairing.G1Point(uint256(0x0cf1385389671a3e17f65c4206a6fff1ead1ca628b66308bbd9ec3debedc3d33), uint256(0x2fafcc3621f24e0afb3b816cd24fbbbefd37a3e2a2850b6df5dfc1ffa4d97daa));
        vk.gamma_abc[41] = Pairing.G1Point(uint256(0x01e1cf19289b1b6fc7729f513284dbd4fa7c97d3abb55702ebc56f136b05dadc), uint256(0x068b1e30ece72073d778584357534536229c9b1666f9e2a2c8aa105ca1fefc6e));
        vk.gamma_abc[42] = Pairing.G1Point(uint256(0x02e08c226357779d091fb9823254b2f3e0a6f4573bbc2d06120182bae6014037), uint256(0x144192c9ddb9c63eb89aba6755ed9e4538dde82eeb5d2f6cc547c7d11c7ec801));
        vk.gamma_abc[43] = Pairing.G1Point(uint256(0x2dfc5ab0a405f27618153645360116377fecfe244510d1d33a668c1007a5ac4e), uint256(0x2c879717599e37e572ab5daa81439312175b507decd609533e78159099dfe8b1));
        vk.gamma_abc[44] = Pairing.G1Point(uint256(0x24228c62897ec2e1184eb06012251309651c647b1a77ab8a821f1d2b3262272c), uint256(0x066010da2e1df8294f6b37ee26cbcb65c5c1a11f13086a38794bae3a2136dc20));
        vk.gamma_abc[45] = Pairing.G1Point(uint256(0x15c027ca063cf4ae1995eb9c203ae604bd731f9c04a109940d2e39a7e7facc4d), uint256(0x1cc10986decfaeeb5debd7290ea8a414ed7fcc2e2b30a3e4a9ecdf8ac5fd0f3d));
        vk.gamma_abc[46] = Pairing.G1Point(uint256(0x1102dde0a2f81c0be6bdd2eb10b8669438d9ea77eef067bf2eb85ac7caf7d394), uint256(0x0bb0cd7daaf62f984bffa9f29484a215b39cfbbbb4f6eb60d66de0c7de09efb7));
        vk.gamma_abc[47] = Pairing.G1Point(uint256(0x0f970bd41c4385d8b813d3e3698f23e37c286d7891f34afed2686ec053241b00), uint256(0x02f8858095c99e65f5493a4f79a2ded29421916fd45952fa27c21dea8120adfe));
        vk.gamma_abc[48] = Pairing.G1Point(uint256(0x06f246ab89dd77a01641eac0c93ad2feeb534594f43cdb06fa031065f04714f3), uint256(0x0106495a75962c96c4795a9d35578e8efac778294f62d6f3a4f5e130099887f4));
        vk.gamma_abc[49] = Pairing.G1Point(uint256(0x11af38e4d43d244df051e9b75a6cbe163d0cf2b8740e1fabde48992b0247992c), uint256(0x06610ba4d2ea4678d4664d3798822a8875e82709f9c5962d7cce56589c6ed50c));
        vk.gamma_abc[50] = Pairing.G1Point(uint256(0x01492225d4564d13cff9ac7b04277e07b030713f65c3dcbf18159d6732d44f3b), uint256(0x216979e746991ddf051767f8812b69ff145032cca22920b3df62f9997a72a141));
        vk.gamma_abc[51] = Pairing.G1Point(uint256(0x1b1a2a7e9f00b1e20940b29392e2e01d1e1d680906d31a4fca35e428e3f78696), uint256(0x2b40b4b610ad7891d2bb36db45c69681534ae1d6cfc452d1135bea3c9f6354a1));
        vk.gamma_abc[52] = Pairing.G1Point(uint256(0x2f66eaa685264197887158fa9d595a7b3e5d0f7ea7108ff723b1df5446a8c4ae), uint256(0x1bee64a3aa3b524eec7ab541ab981859ac73a7758ca063d0475bc14a835528bc));
        vk.gamma_abc[53] = Pairing.G1Point(uint256(0x264a7dd8c156a060cb88baa7d32b270a1be70bcd6d3c9b97c06f2ab896781910), uint256(0x1b9d04242e9d7d1a9da3d60fd4bdbe56b7fb4a9bf8eba364fac539f8dcdfbe81));
        vk.gamma_abc[54] = Pairing.G1Point(uint256(0x251168d21c4f8410b50882eb969b580a55bf610e2001c1718b43d37809057a36), uint256(0x1182fed76a59f358cd6fdedddd1898966ac8f6aae7a5e88cb7dcf8ad19495ccc));
        vk.gamma_abc[55] = Pairing.G1Point(uint256(0x2f37131773cfb676809bb508cefd2339b94aeab81b5621854b2caa85eb9d5a4a), uint256(0x28fe405e6db39d042f92efd89d79fbcda0cf7ad8eb275701e9dc4c39524ed072));
        vk.gamma_abc[56] = Pairing.G1Point(uint256(0x01c9aaaddeb76a9fb9aa2fa26d342522b7754bd9843723409bc9f4062934a35d), uint256(0x027ddeca60176a5d30599da3d6c7d05ba1eb4bf3f47ae4ba9dc5b3e890f3e43d));
        vk.gamma_abc[57] = Pairing.G1Point(uint256(0x04f6a3d3e3f910bf24f916ae18f58bb064965c3328a3f1adde843d8ea6dee5d7), uint256(0x138f08c46f77b7afe2ed8e4e56a467c56928d5ab491a061f34f1e8617d0537ac));
        vk.gamma_abc[58] = Pairing.G1Point(uint256(0x1af640cf50cdc6fa20a8dc05e1aa819bc711d440929ad05f196944017ef0794e), uint256(0x2ec4235f60e4aba023ff6c3dc199f6e9d4e3bddfc1a3d0ed1a227a131b638ea2));
        vk.gamma_abc[59] = Pairing.G1Point(uint256(0x06ebac6b01ac06f83a13bfba6c262d12e753e4266d74a7a27824ad4a443891b1), uint256(0x017f8f40cfcf9222fdc17479ffc48c324c4c9ae8d25d7a4aeaab8916fc547adc));
        vk.gamma_abc[60] = Pairing.G1Point(uint256(0x1eee538a49b2c3b21524e84b7297dee50c9a60d7f5e4d8f9671109da7c9cc148), uint256(0x121a1ad0c94109eb29087c4e8e22c1be2f72a5552c224f72c3e74ce7d97efaab));
        vk.gamma_abc[61] = Pairing.G1Point(uint256(0x29398fdcf049144043f8ce7ab38dfbec8c32ba998b24878783036975bce71745), uint256(0x1ebe9012533aadca18b92fcc0b0da0c74ce478ec145bebd15d05443896059bb1));
        vk.gamma_abc[62] = Pairing.G1Point(uint256(0x3005b595837251951bc396f06c7dd650b4ce664db2e45f8e67c871c542305c79), uint256(0x1c09cfad92ec27ce3a8c81fc55895da6ca5f76e0c93b8b0f76cf861941e571ab));
        vk.gamma_abc[63] = Pairing.G1Point(uint256(0x07cc466f7ad314a8eae2a684502e5e48abaaf37070b32f1c8bd03f03bda1e451), uint256(0x0a5dce50133f766fb8dcac47589648cc32f3a8138b5e4769ff4d637933e49465));
        vk.gamma_abc[64] = Pairing.G1Point(uint256(0x1880e578e1e1a1f166c2704d54649ab35787949bd737ef390db32ff660afb835), uint256(0x2180e49473fb87b7e5989459ffe7eb83f43f19493df5cbd85066e519b150c36f));
    }
    function verify(uint[] memory input, Proof memory proof) internal view returns (uint) {
        uint256 snark_scalar_field = 21888242871839275222246405745257275088548364400416034343698204186575808495617;
        VerifyingKey memory vk = verifyingKey();
        require(input.length + 1 == vk.gamma_abc.length);
        // Compute the linear combination vk_x
        Pairing.G1Point memory vk_x = Pairing.G1Point(0, 0);
        for (uint i = 0; i < input.length; i++) {
            require(input[i] < snark_scalar_field);
            vk_x = Pairing.addition(vk_x, Pairing.scalar_mul(vk.gamma_abc[i + 1], input[i]));
        }
        vk_x = Pairing.addition(vk_x, vk.gamma_abc[0]);
        if(!Pairing.pairingProd4(
             proof.a, proof.b,
             Pairing.negate(vk_x), vk.gamma,
             Pairing.negate(proof.c), vk.delta,
             Pairing.negate(vk.alpha), vk.beta)) return 1;
        return 0;
    }
    function verifyTx(
            Proof memory proof, uint[64] memory input
        ) public view returns (bool r) {
        uint[] memory inputValues = new uint[](64);
        
        for(uint i = 0; i < input.length; i++){
            inputValues[i] = input[i];
        }
        if (verify(inputValues, proof) == 0) {
            return true;
        } else {
            return false;
        }
    }
}
