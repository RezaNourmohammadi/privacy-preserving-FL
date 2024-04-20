#include "circom.hpp"
#include "calcwit.hpp"
#define NSignals 15957
#define NComponents 2031
#define NOutputs 1
#define NInputs 914
#define NVars 2117
#define NPublic 415
#define __P__ "21888242871839275222246405745257275088548364400416034343698204186575808495617"

/*
learningIteration
*/
void learningIteration_4bbf9e3fcf2e9eea(Circom_CalcWit *ctx, int __cIdx) {
    FrElement _sigValue[1];
    FrElement _tmp_5[1];
    FrElement j[1];
    FrElement _sigValue_1[1];
    FrElement _tmp_7[1];
    FrElement _tmp_6[1];
    FrElement _tmp_8[1];
    FrElement _sigValue_2[1];
    FrElement _tmp_11[1];
    FrElement i[1];
    FrElement _num_9[1];
    FrElement _tmp_12[1];
    FrElement _sigValue_3[1];
    FrElement _tmp_14[1];
    FrElement _tmp_13[1];
    FrElement _tmp_15[1];
    FrElement _sigValue_4[1];
    FrElement _tmp_17[1];
    FrElement _tmp_16[1];
    FrElement _tmp_18[1];
    FrElement _sigValue_5[1];
    FrElement _tmp_22[1];
    FrElement i_1[1];
    FrElement _sigValue_6[1];
    FrElement _tmp_24[1];
    FrElement _tmp_23[1];
    FrElement _tmp_25[1];
    FrElement _sigValue_7[1];
    FrElement _tmp_29[1];
    FrElement i_2[1];
    FrElement _sigValue_8[1];
    FrElement _tmp_31[1];
    FrElement _tmp_30[1];
    FrElement _tmp_32[1];
    FrElement _sigValue_9[1];
    FrElement _sigValue_10[1];
    FrElement _tmp_36[1];
    FrElement i_3[1];
    FrElement _sigValue_11[1];
    FrElement _sigValue_12[1];
    FrElement _tmp_38[1];
    FrElement _tmp_37[1];
    FrElement _tmp_39[1];
    FrElement _sigValue_13[1];
    FrElement _tmp_43[1];
    FrElement i_4[1];
    FrElement _sigValue_14[1];
    FrElement _tmp_45[1];
    FrElement _tmp_44[1];
    FrElement _tmp_46[1];
    FrElement _sigValue_15[1];
    FrElement _tmp_51[1];
    FrElement j_1[1];
    FrElement _sigValue_16[1];
    FrElement _tmp_53[1];
    FrElement _tmp_52[1];
    FrElement _tmp_54[1];
    FrElement _tmp_57[1];
    FrElement i_5[1];
    FrElement _num_16[1];
    FrElement _tmp_58[1];
    FrElement _sigValue_17[1];
    FrElement _tmp_60[1];
    FrElement _tmp_59[1];
    FrElement _tmp_61[1];
    FrElement _tmp_63[1];
    FrElement _tmp_62[1];
    FrElement _tmp_64[1];
    FrElement _sigValue_18[1];
    FrElement _tmp_68[1];
    FrElement i_6[1];
    FrElement _sigValue_19[1];
    FrElement _tmp_70[1];
    FrElement _tmp_69[1];
    FrElement _tmp_71[1];
    FrElement _sigValue_20[1];
    FrElement _tmp_75[1];
    FrElement i_7[1];
    FrElement _sigValue_21[1];
    FrElement _tmp_77[1];
    FrElement _tmp_76[1];
    FrElement _tmp_78[1];
    FrElement _sigValue_22[1];
    FrElement _tmp_82[1];
    FrElement i_8[1];
    FrElement _sigValue_23[1];
    FrElement _tmp_84[1];
    FrElement _tmp_83[1];
    FrElement _tmp_85[1];
    FrElement _sigValue_24[1];
    FrElement _tmp_90[1];
    FrElement j_2[1];
    FrElement _sigValue_25[1];
    FrElement _tmp_92[1];
    FrElement _tmp_91[1];
    FrElement _tmp_93[1];
    FrElement _tmp_96[1];
    FrElement i_9[1];
    FrElement _num_22[1];
    FrElement _tmp_97[1];
    FrElement _sigValue_26[1];
    FrElement _tmp_99[1];
    FrElement _tmp_98[1];
    FrElement _tmp_100[1];
    FrElement _tmp_102[1];
    FrElement _tmp_101[1];
    FrElement _tmp_103[1];
    FrElement _sigValue_27[1];
    FrElement _tmp_107[1];
    FrElement i_10[1];
    FrElement _sigValue_28[1];
    FrElement _tmp_109[1];
    FrElement _tmp_108[1];
    FrElement _tmp_110[1];
    FrElement _tmp_113[1];
    FrElement batchIndex[1];
    FrElement _num_24[1];
    FrElement _tmp_114[1];
    FrElement _num_25[1];
    FrElement _tmp_115[1];
    FrElement _sigValue_29[1];
    FrElement _tmp_117[1];
    FrElement _tmp_116[1];
    FrElement _tmp_118[1];
    FrElement _sigValue_30[1];
    FrElement _tmp_120[1];
    FrElement _tmp_119[1];
    FrElement _tmp_121[1];
    FrElement _num_26[1];
    FrElement _tmp_122[1];
    FrElement _sigValue_31[1];
    FrElement _tmp_124[1];
    FrElement _tmp_123[1];
    FrElement _tmp_125[1];
    FrElement _num_27[1];
    FrElement _tmp_126[1];
    FrElement _sigValue_32[1];
    FrElement _tmp_128[1];
    FrElement _tmp_127[1];
    FrElement _tmp_129[1];
    FrElement _num_28[1];
    FrElement _tmp_130[1];
    FrElement _sigValue_33[1];
    FrElement _sigValue_34[1];
    FrElement _tmp_132[1];
    FrElement _tmp_131[1];
    FrElement _tmp_133[1];
    FrElement _num_29[1];
    FrElement _tmp_134[1];
    FrElement _sigValue_35[1];
    FrElement _tmp_136[1];
    FrElement _tmp_135[1];
    FrElement _tmp_137[1];
    FrElement _num_30[1];
    FrElement _tmp_138[1];
    FrElement _num_31[1];
    FrElement _tmp_139[1];
    FrElement _sigValue_36[1];
    FrElement _tmp_141[1];
    FrElement _tmp_140[1];
    FrElement _tmp_142[1];
    FrElement _tmp_144[1];
    FrElement _tmp_143[1];
    FrElement _tmp_145[1];
    FrElement _num_32[1];
    FrElement _tmp_146[1];
    FrElement _sigValue_37[1];
    FrElement _tmp_148[1];
    FrElement _tmp_147[1];
    FrElement _tmp_149[1];
    FrElement _num_33[1];
    FrElement _tmp_150[1];
    FrElement _sigValue_38[1];
    FrElement _tmp_152[1];
    FrElement _tmp_151[1];
    FrElement _tmp_153[1];
    FrElement _num_34[1];
    FrElement _tmp_154[1];
    FrElement _sigValue_39[1];
    FrElement _tmp_156[1];
    FrElement _tmp_155[1];
    FrElement _tmp_157[1];
    FrElement _num_35[1];
    FrElement _tmp_158[1];
    FrElement _num_36[1];
    FrElement _tmp_159[1];
    FrElement _sigValue_40[1];
    FrElement _tmp_161[1];
    FrElement _tmp_160[1];
    FrElement _tmp_162[1];
    FrElement _tmp_164[1];
    FrElement _tmp_163[1];
    FrElement _tmp_165[1];
    FrElement _num_37[1];
    FrElement _tmp_166[1];
    FrElement _sigValue_41[1];
    FrElement _tmp_168[1];
    FrElement _tmp_167[1];
    FrElement _tmp_169[1];
    FrElement _tmp_171[1];
    FrElement _tmp_170[1];
    FrElement _tmp_172[1];
    FrElement _sigValue_42[1];
    FrElement _sigValue_43[1];
    FrElement _tmp_175[1];
    FrElement count[1];
    FrElement _tmp_176[1];
    FrElement _tmp_179[1];
    FrElement j_3[1];
    FrElement _sigValue_44[1];
    FrElement _sigValue_45[1];
    FrElement _tmp_180[1];
    FrElement _tmp_181[1];
    FrElement _tmp_183[1];
    FrElement _tmp_182[1];
    FrElement _tmp_184[1];
    FrElement _tmp_187[1];
    FrElement i_11[1];
    FrElement _num_42[1];
    FrElement _tmp_188[1];
    FrElement _sigValue_46[1];
    FrElement _sigValue_47[1];
    FrElement _tmp_189[1];
    FrElement _tmp_190[1];
    FrElement _tmp_192[1];
    FrElement _tmp_191[1];
    FrElement _tmp_193[1];
    FrElement _tmp_195[1];
    FrElement _tmp_194[1];
    FrElement _tmp_196[1];
    FrElement _sigValue_48[1];
    FrElement _sigValue_49[1];
    FrElement _tmp_198[1];
    FrElement _tmp_199[1];
    FrElement _tmp_202[1];
    FrElement i_12[1];
    FrElement _sigValue_50[1];
    FrElement _sigValue_51[1];
    FrElement _tmp_203[1];
    FrElement _tmp_204[1];
    FrElement _tmp_206[1];
    FrElement _tmp_205[1];
    FrElement _tmp_207[1];
    FrElement _tmp_210[1];
    int _compIdx;
    int _weights_sigIdx_;
    int _offset_35;
    int _netweights_sigIdx_;
    int _offset_38;
    int _compIdx_1;
    int _weights_sigIdx__1;
    int _offset_45;
    int _offset_48;
    int _compIdx_2;
    int _bias_sigIdx_;
    int _offset_54;
    int _bias_sigIdx__1;
    int _offset_56;
    int _compIdx_3;
    int _weights_sigIdx__2;
    int _offset_66;
    int _offset_69;
    int _compIdx_4;
    int _bias_sigIdx__2;
    int _offset_75;
    int _offset_77;
    int _compIdx_5;
    int _trainData_sigIdx_;
    int _offset_86;
    int _trainDataset_sigIdx_;
    int _offset_89;
    int _compIdx_6;
    int _trainData_sigIdx__1;
    int _offset_95;
    int _offset_98;
    int _compIdx_7;
    int _y_sigIdx_;
    int _offset_107;
    int _predictedTargets_sigIdx_;
    int _offset_109;
    int _compIdx_8;
    int _y_sigIdx__1;
    int _offset_115;
    int _offset_117;
    int _compIdx_9;
    int _y_true_sigIdx_;
    int _offset_126;
    int _realTargets_sigIdx_;
    int _offset_129;
    int _compIdx_10;
    int _y_predicted_sigIdx_;
    int _offset_131;
    int _offset_133;
    int _compIdx_11;
    int _y_true_sigIdx__1;
    int _offset_139;
    int _offset_142;
    int _compIdx_12;
    int _y_predicted_sigIdx__1;
    int _offset_144;
    int _offset_146;
    int _compIdx_13;
    int _error_sigIdx_;
    int _offset_155;
    int _Error_sigIdx_;
    int _offset_157;
    int _compIdx_14;
    int _error_sigIdx__1;
    int _offset_163;
    int _offset_165;
    int _compIdx_15;
    int _weights_sigIdx__3;
    int _offset_178;
    int _offset_181;
    int _compIdx_16;
    int _weights_sigIdx__4;
    int _offset_188;
    int _offset_191;
    int _compIdx_17;
    int _weights_sigIdx__5;
    int _offset_205;
    int _offset_208;
    int _compIdx_18;
    int _bias_sigIdx__3;
    int _offset_221;
    int _offset_223;
    int _compIdx_19;
    int _bias_sigIdx__4;
    int _offset_229;
    int _offset_231;
    int _compIdx_20;
    int _sample_sigIdx_;
    int _offset_240;
    int _offset_243;
    int _compIdx_21;
    int _sample_sigIdx__1;
    int _offset_249;
    int _offset_252;
    int _compIdx_22;
    int _error_sigIdx__2;
    int _offset_261;
    int _offset_263;
    int _compIdx_23;
    int _error_sigIdx__3;
    int _offset_269;
    int _offset_271;
    int _compIdx_24;
    int _updatedWeights_sigIdx_;
    int _offset_284;
    int _updatedWeights_sigIdx__1;
    int _offset_287;
    int _compIdx_25;
    int _updatedWeights_sigIdx__2;
    int _offset_294;
    int _offset_297;
    int _compIdx_26;
    int _updatedWeights_sigIdx__3;
    int _offset_311;
    int _offset_314;
    int _compIdx_27;
    int _updatedBias_sigIdx_;
    int _offset_327;
    int _updatedBias_sigIdx__1;
    int _offset_329;
    int _compIdx_28;
    int _updatedBias_sigIdx__2;
    int _offset_335;
    int _offset_337;
    int _compIdx_29;
    int _weights_sigIdx__6;
    int _offset_354;
    int _offset_357;
    int _compIdx_30;
    int _bias_sigIdx__5;
    int _offset_363;
    int _offset_365;
    int _compIdx_31;
    int _trainData_sigIdx__2;
    int _offset_374;
    int _offset_377;
    int _compIdx_32;
    int _y_sigIdx__2;
    int _offset_386;
    int _offset_388;
    int _compIdx_33;
    int _y_true_sigIdx__2;
    int _offset_397;
    int _offset_400;
    int _compIdx_34;
    int _y_predicted_sigIdx__2;
    int _offset_402;
    int _offset_404;
    int _compIdx_35;
    int _error_sigIdx__4;
    int _offset_413;
    int _offset_415;
    int _compIdx_36;
    int _weights_sigIdx__7;
    int _offset_428;
    int _offset_431;
    int _compIdx_37;
    int _bias_sigIdx__6;
    int _offset_444;
    int _offset_446;
    int _compIdx_38;
    int _sample_sigIdx__2;
    int _offset_455;
    int _offset_458;
    int _compIdx_39;
    int _error_sigIdx__5;
    int _offset_467;
    int _offset_469;
    int _compIdx_40;
    int _updatedWeights_sigIdx__4;
    int _offset_482;
    int _offset_485;
    int _compIdx_41;
    int _updatedBias_sigIdx__3;
    int _offset_498;
    int _offset_500;
    int _newWeights_sigIdx_;
    int _offset_517;
    int _offset_520;
    int _offset_529;
    int _offset_532;
    int _offset_548;
    int _offset_551;
    int _newBias_sigIdx_;
    int _offset_566;
    int _offset_568;
    int _offset_576;
    int _offset_578;
    int _finalCheck_sigIdx_;
    Circom_Sizes _sigSizes_weights;
    Circom_Sizes _sigSizes_netweights;
    Circom_Sizes _sigSizes_weights_1;
    Circom_Sizes _sigSizes_bias;
    Circom_Sizes _sigSizes_bias_1;
    Circom_Sizes _sigSizes_weights_2;
    Circom_Sizes _sigSizes_bias_2;
    Circom_Sizes _sigSizes_trainData;
    Circom_Sizes _sigSizes_trainDataset;
    Circom_Sizes _sigSizes_trainData_1;
    Circom_Sizes _sigSizes_y;
    Circom_Sizes _sigSizes_predictedTargets;
    Circom_Sizes _sigSizes_y_1;
    Circom_Sizes _sigSizes_y_true;
    Circom_Sizes _sigSizes_realTargets;
    Circom_Sizes _sigSizes_y_predicted;
    Circom_Sizes _sigSizes_y_true_1;
    Circom_Sizes _sigSizes_y_predicted_1;
    Circom_Sizes _sigSizes_error;
    Circom_Sizes _sigSizes_Error;
    Circom_Sizes _sigSizes_error_1;
    Circom_Sizes _sigSizes_weights_3;
    Circom_Sizes _sigSizes_weights_4;
    Circom_Sizes _sigSizes_weights_5;
    Circom_Sizes _sigSizes_bias_3;
    Circom_Sizes _sigSizes_bias_4;
    Circom_Sizes _sigSizes_sample;
    Circom_Sizes _sigSizes_sample_1;
    Circom_Sizes _sigSizes_error_2;
    Circom_Sizes _sigSizes_error_3;
    Circom_Sizes _sigSizes_updatedWeights;
    Circom_Sizes _sigSizes_updatedWeights_1;
    Circom_Sizes _sigSizes_updatedWeights_2;
    Circom_Sizes _sigSizes_updatedWeights_3;
    Circom_Sizes _sigSizes_updatedBias;
    Circom_Sizes _sigSizes_updatedBias_1;
    Circom_Sizes _sigSizes_updatedBias_2;
    Circom_Sizes _sigSizes_weights_6;
    Circom_Sizes _sigSizes_bias_5;
    Circom_Sizes _sigSizes_trainData_2;
    Circom_Sizes _sigSizes_y_2;
    Circom_Sizes _sigSizes_y_true_2;
    Circom_Sizes _sigSizes_y_predicted_2;
    Circom_Sizes _sigSizes_error_4;
    Circom_Sizes _sigSizes_weights_7;
    Circom_Sizes _sigSizes_bias_6;
    Circom_Sizes _sigSizes_sample_2;
    Circom_Sizes _sigSizes_error_5;
    Circom_Sizes _sigSizes_updatedWeights_4;
    Circom_Sizes _sigSizes_updatedBias_3;
    Circom_Sizes _sigSizes_newWeights;
    Circom_Sizes _sigSizes_newBias;
    PFrElement _loopCond;
    PFrElement _loopCond_1;
    PFrElement _loopCond_2;
    PFrElement _loopCond_3;
    PFrElement _loopCond_4;
    PFrElement _loopCond_5;
    PFrElement _loopCond_6;
    PFrElement _loopCond_7;
    PFrElement _loopCond_8;
    PFrElement _loopCond_9;
    PFrElement _loopCond_10;
    PFrElement _loopCond_11;
    PFrElement _loopCond_12;
    PFrElement _loopCond_13;
    PFrElement _loopCond_14;
    PFrElement _loopCond_15;
    PFrElement _loopCond_16;
    PFrElement _loopCond_17;
    PFrElement _loopCond_18;
    PFrElement _loopCond_19;
    PFrElement _loopCond_20;
    PFrElement _loopCond_21;
    PFrElement _loopCond_22;
    PFrElement _loopCond_23;
    PFrElement _loopCond_24;
    PFrElement _loopCond_25;
    PFrElement _loopCond_26;
    PFrElement _loopCond_27;
    PFrElement _loopCond_28;
    PFrElement _loopCond_29;
    PFrElement _loopCond_30;
    PFrElement _loopCond_31;
    PFrElement _loopCond_32;
    PFrElement _loopCond_33;
    PFrElement _loopCond_34;
    PFrElement _loopCond_35;
    Fr_copy(&(_tmp_5[0]), ctx->circuit->constants +1);
    Fr_copy(&(j[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_11[0]), ctx->circuit->constants +1);
    Fr_copy(&(i[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_9[0]), ctx->circuit->constants +0);
    Fr_copy(&(_tmp_22[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_1[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_29[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_2[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_36[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_3[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_43[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_4[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_51[0]), ctx->circuit->constants +1);
    Fr_copy(&(j_1[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_57[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_5[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_16[0]), ctx->circuit->constants +0);
    Fr_copy(&(_tmp_68[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_6[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_75[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_7[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_82[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_8[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_90[0]), ctx->circuit->constants +1);
    Fr_copy(&(j_2[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_96[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_9[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_22[0]), ctx->circuit->constants +0);
    Fr_copy(&(_tmp_107[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_10[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_113[0]), ctx->circuit->constants +1);
    Fr_copy(&(batchIndex[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_24[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_25[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_26[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_27[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_28[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_29[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_30[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_31[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_32[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_33[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_34[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_35[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_36[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_37[0]), ctx->circuit->constants +0);
    Fr_copy(&(count[0]), ctx->circuit->constants +0);
    Fr_copy(&(_tmp_179[0]), ctx->circuit->constants +1);
    Fr_copy(&(j_3[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_187[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_11[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_42[0]), ctx->circuit->constants +0);
    Fr_copy(&(_tmp_202[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_12[0]), ctx->circuit->constants +1);
    _netweights_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x488f3f5139ece391LL /* netweights */);
    _bias_sigIdx__1 = ctx->getSignalOffset(__cIdx, 0xdeb23f9bd0a849a4LL /* bias */);
    _trainDataset_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xbf11095af058cc2fLL /* trainDataset */);
    _predictedTargets_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x2fba8af078f5d457LL /* predictedTargets */);
    _realTargets_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xd9b9becda354dc49LL /* realTargets */);
    _Error_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x5f343a43e7ea9f91LL /* Error */);
    _updatedWeights_sigIdx__1 = ctx->getSignalOffset(__cIdx, 0x288b1eb62a6e7b99LL /* updatedWeights */);
    _updatedBias_sigIdx__1 = ctx->getSignalOffset(__cIdx, 0xb30254661e3a4a35LL /* updatedBias */);
    _newWeights_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xdedd20e9169b42a2LL /* newWeights */);
    _newBias_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xb85b1e7f52e0a3e0LL /* newBias */);
    _finalCheck_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xff3e710015567419LL /* finalCheck */);
    _sigSizes_netweights = ctx->getSignalSizes(__cIdx, 0x488f3f5139ece391LL /* netweights */);
    _sigSizes_bias_1 = ctx->getSignalSizes(__cIdx, 0xdeb23f9bd0a849a4LL /* bias */);
    _sigSizes_trainDataset = ctx->getSignalSizes(__cIdx, 0xbf11095af058cc2fLL /* trainDataset */);
    _sigSizes_predictedTargets = ctx->getSignalSizes(__cIdx, 0x2fba8af078f5d457LL /* predictedTargets */);
    _sigSizes_realTargets = ctx->getSignalSizes(__cIdx, 0xd9b9becda354dc49LL /* realTargets */);
    _sigSizes_Error = ctx->getSignalSizes(__cIdx, 0x5f343a43e7ea9f91LL /* Error */);
    _sigSizes_updatedWeights_1 = ctx->getSignalSizes(__cIdx, 0x288b1eb62a6e7b99LL /* updatedWeights */);
    _sigSizes_updatedBias_1 = ctx->getSignalSizes(__cIdx, 0xb30254661e3a4a35LL /* updatedBias */);
    _sigSizes_newWeights = ctx->getSignalSizes(__cIdx, 0xdedd20e9169b42a2LL /* newWeights */);
    _sigSizes_newBias = ctx->getSignalSizes(__cIdx, 0xb85b1e7f52e0a3e0LL /* newBias */);
    /* var inputDim = 100 */
    /* var outputDim = 2 */
    /* var batchsize = 5 */
    /* var learningRate = 10 */
    /* var precision = 10000 */
    /* var count = 0 */
    /* signal input netweights[outputDim][inputDim] */
    /* signal input newWeights[outputDim][inputDim] */
    /* signal transposedWeights[inputDim][outputDim] */
    /* signal input bias[outputDim] */
    /* signal input newBias[outputDim] */
    /* signal input realTargets[batchsize][outputDim] */
    /* signal private input trainDataset[batchsize][inputDim] */
    /* signal predictedTargets[outputDim] */
    /* signal Error[outputDim] */
    /* signal updatedWeights[inputDim][outputDim] */
    /* signal updatedBias[outputDim] */
    /* signal output finalCheck */
    /* var trainSample[inputDim] */
    /* for (var batchIndex = 0;batchIndex < batchsize;batchIndex ++) */
    /* component forwardProcess = forward(inputDim, outputDim) */
    /* for (var i = 0;i < outputDim;i++) */
    /* for (var j =0;j < inputDim;j++) */
    /* forwardProcess.weights[i][j] <== netweights[i][j] */
    _compIdx = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
    _weights_sigIdx_ = ctx->getSignalOffset(_compIdx, 0xb1494b6ef08a411eLL /* weights */);
    _sigSizes_weights = ctx->getSignalSizes(_compIdx, 0xb1494b6ef08a411eLL /* weights */);
    _offset_35 = _weights_sigIdx_;
    _offset_38 = _netweights_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_38, _sigValue, 1);
    ctx->setSignal(__cIdx, _compIdx, _offset_35, _sigValue);
    _loopCond = _tmp_5;
    while (Fr_isTrue(_loopCond)) {
        /* forwardProcess.weights[i][j] <== netweights[i][j] */
        _compIdx_1 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
        _weights_sigIdx__1 = ctx->getSignalOffset(_compIdx_1, 0xb1494b6ef08a411eLL /* weights */);
        _sigSizes_weights_1 = ctx->getSignalSizes(_compIdx_1, 0xb1494b6ef08a411eLL /* weights */);
        _offset_45 = _weights_sigIdx__1 + Fr_toInt(j)*_sigSizes_weights_1[2];
        _offset_48 = _netweights_sigIdx_ + Fr_toInt(j)*_sigSizes_netweights[2];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_48, _sigValue_1, 1);
        ctx->setSignal(__cIdx, _compIdx_1, _offset_45, _sigValue_1);
        Fr_copyn(_tmp_7, j, 1);
        Fr_add(_tmp_6, j, (ctx->circuit->constants + 1));
        Fr_copyn(j, _tmp_6, 1);
        Fr_lt(_tmp_8, j, (ctx->circuit->constants + 2));
        _loopCond = _tmp_8;
    }
    /* forwardProcess.bias[i] <== bias[i] */
    _compIdx_2 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
    _bias_sigIdx_ = ctx->getSignalOffset(_compIdx_2, 0xdeb23f9bd0a849a4LL /* bias */);
    _sigSizes_bias = ctx->getSignalSizes(_compIdx_2, 0xdeb23f9bd0a849a4LL /* bias */);
    _offset_54 = _bias_sigIdx_;
    _offset_56 = _bias_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_56, _sigValue_2, 1);
    ctx->setSignal(__cIdx, _compIdx_2, _offset_54, _sigValue_2);
    _loopCond_1 = _tmp_11;
    while (Fr_isTrue(_loopCond_1)) {
        /* for (var j =0;j < inputDim;j++) */
        Fr_copyn(j, _num_9, 1);
        Fr_lt(_tmp_12, j, (ctx->circuit->constants + 2));
        _loopCond_2 = _tmp_12;
        while (Fr_isTrue(_loopCond_2)) {
            /* forwardProcess.weights[i][j] <== netweights[i][j] */
            _compIdx_3 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
            _weights_sigIdx__2 = ctx->getSignalOffset(_compIdx_3, 0xb1494b6ef08a411eLL /* weights */);
            _sigSizes_weights_2 = ctx->getSignalSizes(_compIdx_3, 0xb1494b6ef08a411eLL /* weights */);
            _offset_66 = _weights_sigIdx__2 + Fr_toInt(i)*_sigSizes_weights_2[1] + Fr_toInt(j)*_sigSizes_weights_2[2];
            _offset_69 = _netweights_sigIdx_ + Fr_toInt(i)*_sigSizes_netweights[1] + Fr_toInt(j)*_sigSizes_netweights[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_69, _sigValue_3, 1);
            ctx->setSignal(__cIdx, _compIdx_3, _offset_66, _sigValue_3);
            Fr_copyn(_tmp_14, j, 1);
            Fr_add(_tmp_13, j, (ctx->circuit->constants + 1));
            Fr_copyn(j, _tmp_13, 1);
            Fr_lt(_tmp_15, j, (ctx->circuit->constants + 2));
            _loopCond_2 = _tmp_15;
        }
        /* forwardProcess.bias[i] <== bias[i] */
        _compIdx_4 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
        _bias_sigIdx__2 = ctx->getSignalOffset(_compIdx_4, 0xdeb23f9bd0a849a4LL /* bias */);
        _sigSizes_bias_2 = ctx->getSignalSizes(_compIdx_4, 0xdeb23f9bd0a849a4LL /* bias */);
        _offset_75 = _bias_sigIdx__2 + Fr_toInt(i)*_sigSizes_bias_2[1];
        _offset_77 = _bias_sigIdx__1 + Fr_toInt(i)*_sigSizes_bias_1[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_77, _sigValue_4, 1);
        ctx->setSignal(__cIdx, _compIdx_4, _offset_75, _sigValue_4);
        Fr_copyn(_tmp_17, i, 1);
        Fr_add(_tmp_16, i, (ctx->circuit->constants + 1));
        Fr_copyn(i, _tmp_16, 1);
        Fr_lt(_tmp_18, i, (ctx->circuit->constants + 3));
        _loopCond_1 = _tmp_18;
    }
    /* for (var i = 0;i < inputDim;i ++) */
    /* forwardProcess.trainData[i] <== trainDataset[batchIndex][i] */
    _compIdx_5 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
    _trainData_sigIdx_ = ctx->getSignalOffset(_compIdx_5, 0x7e0969b4b39f9af9LL /* trainData */);
    _sigSizes_trainData = ctx->getSignalSizes(_compIdx_5, 0x7e0969b4b39f9af9LL /* trainData */);
    _offset_86 = _trainData_sigIdx_;
    _offset_89 = _trainDataset_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_89, _sigValue_5, 1);
    ctx->setSignal(__cIdx, _compIdx_5, _offset_86, _sigValue_5);
    _loopCond_3 = _tmp_22;
    while (Fr_isTrue(_loopCond_3)) {
        /* forwardProcess.trainData[i] <== trainDataset[batchIndex][i] */
        _compIdx_6 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
        _trainData_sigIdx__1 = ctx->getSignalOffset(_compIdx_6, 0x7e0969b4b39f9af9LL /* trainData */);
        _sigSizes_trainData_1 = ctx->getSignalSizes(_compIdx_6, 0x7e0969b4b39f9af9LL /* trainData */);
        _offset_95 = _trainData_sigIdx__1 + Fr_toInt(i_1)*_sigSizes_trainData_1[1];
        _offset_98 = _trainDataset_sigIdx_ + Fr_toInt(i_1)*_sigSizes_trainDataset[2];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_98, _sigValue_6, 1);
        ctx->setSignal(__cIdx, _compIdx_6, _offset_95, _sigValue_6);
        Fr_copyn(_tmp_24, i_1, 1);
        Fr_add(_tmp_23, i_1, (ctx->circuit->constants + 1));
        Fr_copyn(i_1, _tmp_23, 1);
        Fr_lt(_tmp_25, i_1, (ctx->circuit->constants + 2));
        _loopCond_3 = _tmp_25;
    }
    /* for (var i = 0;i < outputDim;i++) */
    /* predictedTargets[i] <== forwardProcess.y[i] */
    _compIdx_7 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
    _y_sigIdx_ = ctx->getSignalOffset(_compIdx_7, 0xaf63f44c86021554LL /* y */);
    _sigSizes_y = ctx->getSignalSizes(_compIdx_7, 0xaf63f44c86021554LL /* y */);
    _offset_107 = _y_sigIdx_;
    ctx->multiGetSignal(__cIdx, _compIdx_7, _offset_107, _sigValue_7, 1);
    _offset_109 = _predictedTargets_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_109, _sigValue_7);
    _loopCond_4 = _tmp_29;
    while (Fr_isTrue(_loopCond_4)) {
        /* predictedTargets[i] <== forwardProcess.y[i] */
        _compIdx_8 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
        _y_sigIdx__1 = ctx->getSignalOffset(_compIdx_8, 0xaf63f44c86021554LL /* y */);
        _sigSizes_y_1 = ctx->getSignalSizes(_compIdx_8, 0xaf63f44c86021554LL /* y */);
        _offset_115 = _y_sigIdx__1 + Fr_toInt(i_2)*_sigSizes_y_1[1];
        ctx->multiGetSignal(__cIdx, _compIdx_8, _offset_115, _sigValue_8, 1);
        _offset_117 = _predictedTargets_sigIdx_ + Fr_toInt(i_2)*_sigSizes_predictedTargets[1];
        ctx->setSignal(__cIdx, __cIdx, _offset_117, _sigValue_8);
        Fr_copyn(_tmp_31, i_2, 1);
        Fr_add(_tmp_30, i_2, (ctx->circuit->constants + 1));
        Fr_copyn(i_2, _tmp_30, 1);
        Fr_lt(_tmp_32, i_2, (ctx->circuit->constants + 3));
        _loopCond_4 = _tmp_32;
    }
    /* component MSEprimeCalc = MSEPrime(outputDim) */
    /* for (var i = 0;i < outputDim;i ++) */
    /* MSEprimeCalc.y_true[i] <== realTargets[batchIndex][i] */
    _compIdx_9 = ctx->getSubComponentOffset(__cIdx, 0x176594482c0a1b6aLL /* MSEprimeCalc */);
    _y_true_sigIdx_ = ctx->getSignalOffset(_compIdx_9, 0x967ba6748d3316f9LL /* y_true */);
    _sigSizes_y_true = ctx->getSignalSizes(_compIdx_9, 0x967ba6748d3316f9LL /* y_true */);
    _offset_126 = _y_true_sigIdx_;
    _offset_129 = _realTargets_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_129, _sigValue_9, 1);
    ctx->setSignal(__cIdx, _compIdx_9, _offset_126, _sigValue_9);
    /* MSEprimeCalc.y_predicted[i] <== predictedTargets[i] */
    _compIdx_10 = ctx->getSubComponentOffset(__cIdx, 0x176594482c0a1b6aLL /* MSEprimeCalc */);
    _y_predicted_sigIdx_ = ctx->getSignalOffset(_compIdx_10, 0x1fd3698593e7c097LL /* y_predicted */);
    _sigSizes_y_predicted = ctx->getSignalSizes(_compIdx_10, 0x1fd3698593e7c097LL /* y_predicted */);
    _offset_131 = _y_predicted_sigIdx_;
    _offset_133 = _predictedTargets_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_133, _sigValue_10, 1);
    ctx->setSignal(__cIdx, _compIdx_10, _offset_131, _sigValue_10);
    _loopCond_5 = _tmp_36;
    while (Fr_isTrue(_loopCond_5)) {
        /* MSEprimeCalc.y_true[i] <== realTargets[batchIndex][i] */
        _compIdx_11 = ctx->getSubComponentOffset(__cIdx, 0x176594482c0a1b6aLL /* MSEprimeCalc */);
        _y_true_sigIdx__1 = ctx->getSignalOffset(_compIdx_11, 0x967ba6748d3316f9LL /* y_true */);
        _sigSizes_y_true_1 = ctx->getSignalSizes(_compIdx_11, 0x967ba6748d3316f9LL /* y_true */);
        _offset_139 = _y_true_sigIdx__1 + Fr_toInt(i_3)*_sigSizes_y_true_1[1];
        _offset_142 = _realTargets_sigIdx_ + Fr_toInt(i_3)*_sigSizes_realTargets[2];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_142, _sigValue_11, 1);
        ctx->setSignal(__cIdx, _compIdx_11, _offset_139, _sigValue_11);
        /* MSEprimeCalc.y_predicted[i] <== predictedTargets[i] */
        _compIdx_12 = ctx->getSubComponentOffset(__cIdx, 0x176594482c0a1b6aLL /* MSEprimeCalc */);
        _y_predicted_sigIdx__1 = ctx->getSignalOffset(_compIdx_12, 0x1fd3698593e7c097LL /* y_predicted */);
        _sigSizes_y_predicted_1 = ctx->getSignalSizes(_compIdx_12, 0x1fd3698593e7c097LL /* y_predicted */);
        _offset_144 = _y_predicted_sigIdx__1 + Fr_toInt(i_3)*_sigSizes_y_predicted_1[1];
        _offset_146 = _predictedTargets_sigIdx_ + Fr_toInt(i_3)*_sigSizes_predictedTargets[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_146, _sigValue_12, 1);
        ctx->setSignal(__cIdx, _compIdx_12, _offset_144, _sigValue_12);
        Fr_copyn(_tmp_38, i_3, 1);
        Fr_add(_tmp_37, i_3, (ctx->circuit->constants + 1));
        Fr_copyn(i_3, _tmp_37, 1);
        Fr_lt(_tmp_39, i_3, (ctx->circuit->constants + 3));
        _loopCond_5 = _tmp_39;
    }
    /* for (var i = 0;i < outputDim;i++) */
    /* Error[i] <== MSEprimeCalc.error[i] */
    _compIdx_13 = ctx->getSubComponentOffset(__cIdx, 0x176594482c0a1b6aLL /* MSEprimeCalc */);
    _error_sigIdx_ = ctx->getSignalOffset(_compIdx_13, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_error = ctx->getSignalSizes(_compIdx_13, 0x9f7452dd75d54d31LL /* error */);
    _offset_155 = _error_sigIdx_;
    ctx->multiGetSignal(__cIdx, _compIdx_13, _offset_155, _sigValue_13, 1);
    _offset_157 = _Error_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_157, _sigValue_13);
    _loopCond_6 = _tmp_43;
    while (Fr_isTrue(_loopCond_6)) {
        /* Error[i] <== MSEprimeCalc.error[i] */
        _compIdx_14 = ctx->getSubComponentOffset(__cIdx, 0x176594482c0a1b6aLL /* MSEprimeCalc */);
        _error_sigIdx__1 = ctx->getSignalOffset(_compIdx_14, 0x9f7452dd75d54d31LL /* error */);
        _sigSizes_error_1 = ctx->getSignalSizes(_compIdx_14, 0x9f7452dd75d54d31LL /* error */);
        _offset_163 = _error_sigIdx__1 + Fr_toInt(i_4)*_sigSizes_error_1[1];
        ctx->multiGetSignal(__cIdx, _compIdx_14, _offset_163, _sigValue_14, 1);
        _offset_165 = _Error_sigIdx_ + Fr_toInt(i_4)*_sigSizes_Error[1];
        ctx->setSignal(__cIdx, __cIdx, _offset_165, _sigValue_14);
        Fr_copyn(_tmp_45, i_4, 1);
        Fr_add(_tmp_44, i_4, (ctx->circuit->constants + 1));
        Fr_copyn(i_4, _tmp_44, 1);
        Fr_lt(_tmp_46, i_4, (ctx->circuit->constants + 3));
        _loopCond_6 = _tmp_46;
    }
    /* component backwardOperation = backward(inputDim, outputDim, precision, learningRate) */
    /* for (var i = 0;i < inputDim;i ++) */
    /* for (var j = 0;j < outputDim;j ++) */
    /* backwardOperation.weights[i][j] <== netweights[j][i] */
    _compIdx_15 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
    _weights_sigIdx__3 = ctx->getSignalOffset(_compIdx_15, 0xb1494b6ef08a411eLL /* weights */);
    _sigSizes_weights_3 = ctx->getSignalSizes(_compIdx_15, 0xb1494b6ef08a411eLL /* weights */);
    _offset_178 = _weights_sigIdx__3;
    _offset_181 = _netweights_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_181, _sigValue_15, 1);
    ctx->setSignal(__cIdx, _compIdx_15, _offset_178, _sigValue_15);
    _loopCond_7 = _tmp_51;
    while (Fr_isTrue(_loopCond_7)) {
        /* backwardOperation.weights[i][j] <== netweights[j][i] */
        _compIdx_16 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
        _weights_sigIdx__4 = ctx->getSignalOffset(_compIdx_16, 0xb1494b6ef08a411eLL /* weights */);
        _sigSizes_weights_4 = ctx->getSignalSizes(_compIdx_16, 0xb1494b6ef08a411eLL /* weights */);
        _offset_188 = _weights_sigIdx__4 + Fr_toInt(j_1)*_sigSizes_weights_4[2];
        _offset_191 = _netweights_sigIdx_ + Fr_toInt(j_1)*_sigSizes_netweights[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_191, _sigValue_16, 1);
        ctx->setSignal(__cIdx, _compIdx_16, _offset_188, _sigValue_16);
        Fr_copyn(_tmp_53, j_1, 1);
        Fr_add(_tmp_52, j_1, (ctx->circuit->constants + 1));
        Fr_copyn(j_1, _tmp_52, 1);
        Fr_lt(_tmp_54, j_1, (ctx->circuit->constants + 3));
        _loopCond_7 = _tmp_54;
    }
    _loopCond_8 = _tmp_57;
    while (Fr_isTrue(_loopCond_8)) {
        /* for (var j = 0;j < outputDim;j ++) */
        Fr_copyn(j_1, _num_16, 1);
        Fr_lt(_tmp_58, j_1, (ctx->circuit->constants + 3));
        _loopCond_9 = _tmp_58;
        while (Fr_isTrue(_loopCond_9)) {
            /* backwardOperation.weights[i][j] <== netweights[j][i] */
            _compIdx_17 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
            _weights_sigIdx__5 = ctx->getSignalOffset(_compIdx_17, 0xb1494b6ef08a411eLL /* weights */);
            _sigSizes_weights_5 = ctx->getSignalSizes(_compIdx_17, 0xb1494b6ef08a411eLL /* weights */);
            _offset_205 = _weights_sigIdx__5 + Fr_toInt(i_5)*_sigSizes_weights_5[1] + Fr_toInt(j_1)*_sigSizes_weights_5[2];
            _offset_208 = _netweights_sigIdx_ + Fr_toInt(j_1)*_sigSizes_netweights[1] + Fr_toInt(i_5)*_sigSizes_netweights[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_208, _sigValue_17, 1);
            ctx->setSignal(__cIdx, _compIdx_17, _offset_205, _sigValue_17);
            Fr_copyn(_tmp_60, j_1, 1);
            Fr_add(_tmp_59, j_1, (ctx->circuit->constants + 1));
            Fr_copyn(j_1, _tmp_59, 1);
            Fr_lt(_tmp_61, j_1, (ctx->circuit->constants + 3));
            _loopCond_9 = _tmp_61;
        }
        Fr_copyn(_tmp_63, i_5, 1);
        Fr_add(_tmp_62, i_5, (ctx->circuit->constants + 1));
        Fr_copyn(i_5, _tmp_62, 1);
        Fr_lt(_tmp_64, i_5, (ctx->circuit->constants + 2));
        _loopCond_8 = _tmp_64;
    }
    /* for (var i = 0;i < outputDim;i ++) */
    /* backwardOperation.bias[i] <== bias[i] */
    _compIdx_18 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
    _bias_sigIdx__3 = ctx->getSignalOffset(_compIdx_18, 0xdeb23f9bd0a849a4LL /* bias */);
    _sigSizes_bias_3 = ctx->getSignalSizes(_compIdx_18, 0xdeb23f9bd0a849a4LL /* bias */);
    _offset_221 = _bias_sigIdx__3;
    _offset_223 = _bias_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_223, _sigValue_18, 1);
    ctx->setSignal(__cIdx, _compIdx_18, _offset_221, _sigValue_18);
    _loopCond_10 = _tmp_68;
    while (Fr_isTrue(_loopCond_10)) {
        /* backwardOperation.bias[i] <== bias[i] */
        _compIdx_19 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
        _bias_sigIdx__4 = ctx->getSignalOffset(_compIdx_19, 0xdeb23f9bd0a849a4LL /* bias */);
        _sigSizes_bias_4 = ctx->getSignalSizes(_compIdx_19, 0xdeb23f9bd0a849a4LL /* bias */);
        _offset_229 = _bias_sigIdx__4 + Fr_toInt(i_6)*_sigSizes_bias_4[1];
        _offset_231 = _bias_sigIdx__1 + Fr_toInt(i_6)*_sigSizes_bias_1[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_231, _sigValue_19, 1);
        ctx->setSignal(__cIdx, _compIdx_19, _offset_229, _sigValue_19);
        Fr_copyn(_tmp_70, i_6, 1);
        Fr_add(_tmp_69, i_6, (ctx->circuit->constants + 1));
        Fr_copyn(i_6, _tmp_69, 1);
        Fr_lt(_tmp_71, i_6, (ctx->circuit->constants + 3));
        _loopCond_10 = _tmp_71;
    }
    /* for (var i = 0;i < inputDim;i ++) */
    /* backwardOperation.sample[i] <== trainDataset[batchIndex][i] */
    _compIdx_20 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
    _sample_sigIdx_ = ctx->getSignalOffset(_compIdx_20, 0xf3d802fe7a8ba4c7LL /* sample */);
    _sigSizes_sample = ctx->getSignalSizes(_compIdx_20, 0xf3d802fe7a8ba4c7LL /* sample */);
    _offset_240 = _sample_sigIdx_;
    _offset_243 = _trainDataset_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_243, _sigValue_20, 1);
    ctx->setSignal(__cIdx, _compIdx_20, _offset_240, _sigValue_20);
    _loopCond_11 = _tmp_75;
    while (Fr_isTrue(_loopCond_11)) {
        /* backwardOperation.sample[i] <== trainDataset[batchIndex][i] */
        _compIdx_21 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
        _sample_sigIdx__1 = ctx->getSignalOffset(_compIdx_21, 0xf3d802fe7a8ba4c7LL /* sample */);
        _sigSizes_sample_1 = ctx->getSignalSizes(_compIdx_21, 0xf3d802fe7a8ba4c7LL /* sample */);
        _offset_249 = _sample_sigIdx__1 + Fr_toInt(i_7)*_sigSizes_sample_1[1];
        _offset_252 = _trainDataset_sigIdx_ + Fr_toInt(i_7)*_sigSizes_trainDataset[2];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_252, _sigValue_21, 1);
        ctx->setSignal(__cIdx, _compIdx_21, _offset_249, _sigValue_21);
        Fr_copyn(_tmp_77, i_7, 1);
        Fr_add(_tmp_76, i_7, (ctx->circuit->constants + 1));
        Fr_copyn(i_7, _tmp_76, 1);
        Fr_lt(_tmp_78, i_7, (ctx->circuit->constants + 2));
        _loopCond_11 = _tmp_78;
    }
    /* for (var i = 0;i < outputDim;i ++) */
    /* backwardOperation.error[i] <== Error[i] */
    _compIdx_22 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
    _error_sigIdx__2 = ctx->getSignalOffset(_compIdx_22, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_error_2 = ctx->getSignalSizes(_compIdx_22, 0x9f7452dd75d54d31LL /* error */);
    _offset_261 = _error_sigIdx__2;
    _offset_263 = _Error_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_263, _sigValue_22, 1);
    ctx->setSignal(__cIdx, _compIdx_22, _offset_261, _sigValue_22);
    _loopCond_12 = _tmp_82;
    while (Fr_isTrue(_loopCond_12)) {
        /* backwardOperation.error[i] <== Error[i] */
        _compIdx_23 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
        _error_sigIdx__3 = ctx->getSignalOffset(_compIdx_23, 0x9f7452dd75d54d31LL /* error */);
        _sigSizes_error_3 = ctx->getSignalSizes(_compIdx_23, 0x9f7452dd75d54d31LL /* error */);
        _offset_269 = _error_sigIdx__3 + Fr_toInt(i_8)*_sigSizes_error_3[1];
        _offset_271 = _Error_sigIdx_ + Fr_toInt(i_8)*_sigSizes_Error[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_271, _sigValue_23, 1);
        ctx->setSignal(__cIdx, _compIdx_23, _offset_269, _sigValue_23);
        Fr_copyn(_tmp_84, i_8, 1);
        Fr_add(_tmp_83, i_8, (ctx->circuit->constants + 1));
        Fr_copyn(i_8, _tmp_83, 1);
        Fr_lt(_tmp_85, i_8, (ctx->circuit->constants + 3));
        _loopCond_12 = _tmp_85;
    }
    /* for (var i = 0;i < inputDim;i ++) */
    /* for (var j = 0;j < outputDim;j ++) */
    /* updatedWeights[i][j] <== backwardOperation.updatedWeights[i][j] */
    _compIdx_24 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
    _updatedWeights_sigIdx_ = ctx->getSignalOffset(_compIdx_24, 0x288b1eb62a6e7b99LL /* updatedWeights */);
    _sigSizes_updatedWeights = ctx->getSignalSizes(_compIdx_24, 0x288b1eb62a6e7b99LL /* updatedWeights */);
    _offset_284 = _updatedWeights_sigIdx_;
    ctx->multiGetSignal(__cIdx, _compIdx_24, _offset_284, _sigValue_24, 1);
    _offset_287 = _updatedWeights_sigIdx__1;
    ctx->setSignal(__cIdx, __cIdx, _offset_287, _sigValue_24);
    _loopCond_13 = _tmp_90;
    while (Fr_isTrue(_loopCond_13)) {
        /* updatedWeights[i][j] <== backwardOperation.updatedWeights[i][j] */
        _compIdx_25 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
        _updatedWeights_sigIdx__2 = ctx->getSignalOffset(_compIdx_25, 0x288b1eb62a6e7b99LL /* updatedWeights */);
        _sigSizes_updatedWeights_2 = ctx->getSignalSizes(_compIdx_25, 0x288b1eb62a6e7b99LL /* updatedWeights */);
        _offset_294 = _updatedWeights_sigIdx__2 + Fr_toInt(j_2)*_sigSizes_updatedWeights_2[2];
        ctx->multiGetSignal(__cIdx, _compIdx_25, _offset_294, _sigValue_25, 1);
        _offset_297 = _updatedWeights_sigIdx__1 + Fr_toInt(j_2)*_sigSizes_updatedWeights_1[2];
        ctx->setSignal(__cIdx, __cIdx, _offset_297, _sigValue_25);
        Fr_copyn(_tmp_92, j_2, 1);
        Fr_add(_tmp_91, j_2, (ctx->circuit->constants + 1));
        Fr_copyn(j_2, _tmp_91, 1);
        Fr_lt(_tmp_93, j_2, (ctx->circuit->constants + 3));
        _loopCond_13 = _tmp_93;
    }
    _loopCond_14 = _tmp_96;
    while (Fr_isTrue(_loopCond_14)) {
        /* for (var j = 0;j < outputDim;j ++) */
        Fr_copyn(j_2, _num_22, 1);
        Fr_lt(_tmp_97, j_2, (ctx->circuit->constants + 3));
        _loopCond_15 = _tmp_97;
        while (Fr_isTrue(_loopCond_15)) {
            /* updatedWeights[i][j] <== backwardOperation.updatedWeights[i][j] */
            _compIdx_26 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
            _updatedWeights_sigIdx__3 = ctx->getSignalOffset(_compIdx_26, 0x288b1eb62a6e7b99LL /* updatedWeights */);
            _sigSizes_updatedWeights_3 = ctx->getSignalSizes(_compIdx_26, 0x288b1eb62a6e7b99LL /* updatedWeights */);
            _offset_311 = _updatedWeights_sigIdx__3 + Fr_toInt(i_9)*_sigSizes_updatedWeights_3[1] + Fr_toInt(j_2)*_sigSizes_updatedWeights_3[2];
            ctx->multiGetSignal(__cIdx, _compIdx_26, _offset_311, _sigValue_26, 1);
            _offset_314 = _updatedWeights_sigIdx__1 + Fr_toInt(i_9)*_sigSizes_updatedWeights_1[1] + Fr_toInt(j_2)*_sigSizes_updatedWeights_1[2];
            ctx->setSignal(__cIdx, __cIdx, _offset_314, _sigValue_26);
            Fr_copyn(_tmp_99, j_2, 1);
            Fr_add(_tmp_98, j_2, (ctx->circuit->constants + 1));
            Fr_copyn(j_2, _tmp_98, 1);
            Fr_lt(_tmp_100, j_2, (ctx->circuit->constants + 3));
            _loopCond_15 = _tmp_100;
        }
        Fr_copyn(_tmp_102, i_9, 1);
        Fr_add(_tmp_101, i_9, (ctx->circuit->constants + 1));
        Fr_copyn(i_9, _tmp_101, 1);
        Fr_lt(_tmp_103, i_9, (ctx->circuit->constants + 2));
        _loopCond_14 = _tmp_103;
    }
    /* for (var i = 0;i < outputDim;i ++) */
    /* updatedBias[i] <== backwardOperation.updatedBias[i] */
    _compIdx_27 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
    _updatedBias_sigIdx_ = ctx->getSignalOffset(_compIdx_27, 0xb30254661e3a4a35LL /* updatedBias */);
    _sigSizes_updatedBias = ctx->getSignalSizes(_compIdx_27, 0xb30254661e3a4a35LL /* updatedBias */);
    _offset_327 = _updatedBias_sigIdx_;
    ctx->multiGetSignal(__cIdx, _compIdx_27, _offset_327, _sigValue_27, 1);
    _offset_329 = _updatedBias_sigIdx__1;
    ctx->setSignal(__cIdx, __cIdx, _offset_329, _sigValue_27);
    _loopCond_16 = _tmp_107;
    while (Fr_isTrue(_loopCond_16)) {
        /* updatedBias[i] <== backwardOperation.updatedBias[i] */
        _compIdx_28 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
        _updatedBias_sigIdx__2 = ctx->getSignalOffset(_compIdx_28, 0xb30254661e3a4a35LL /* updatedBias */);
        _sigSizes_updatedBias_2 = ctx->getSignalSizes(_compIdx_28, 0xb30254661e3a4a35LL /* updatedBias */);
        _offset_335 = _updatedBias_sigIdx__2 + Fr_toInt(i_10)*_sigSizes_updatedBias_2[1];
        ctx->multiGetSignal(__cIdx, _compIdx_28, _offset_335, _sigValue_28, 1);
        _offset_337 = _updatedBias_sigIdx__1 + Fr_toInt(i_10)*_sigSizes_updatedBias_1[1];
        ctx->setSignal(__cIdx, __cIdx, _offset_337, _sigValue_28);
        Fr_copyn(_tmp_109, i_10, 1);
        Fr_add(_tmp_108, i_10, (ctx->circuit->constants + 1));
        Fr_copyn(i_10, _tmp_108, 1);
        Fr_lt(_tmp_110, i_10, (ctx->circuit->constants + 3));
        _loopCond_16 = _tmp_110;
    }
    _loopCond_17 = _tmp_113;
    while (Fr_isTrue(_loopCond_17)) {
        /* component forwardProcess = forward(inputDim, outputDim) */
        /* for (var i = 0;i < outputDim;i++) */
        Fr_copyn(i, _num_24, 1);
        Fr_lt(_tmp_114, i, (ctx->circuit->constants + 3));
        _loopCond_18 = _tmp_114;
        while (Fr_isTrue(_loopCond_18)) {
            /* for (var j =0;j < inputDim;j++) */
            Fr_copyn(j, _num_25, 1);
            Fr_lt(_tmp_115, j, (ctx->circuit->constants + 2));
            _loopCond_19 = _tmp_115;
            while (Fr_isTrue(_loopCond_19)) {
                /* forwardProcess.weights[i][j] <== netweights[i][j] */
                _compIdx_29 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
                _weights_sigIdx__6 = ctx->getSignalOffset(_compIdx_29, 0xb1494b6ef08a411eLL /* weights */);
                _sigSizes_weights_6 = ctx->getSignalSizes(_compIdx_29, 0xb1494b6ef08a411eLL /* weights */);
                _offset_354 = _weights_sigIdx__6 + Fr_toInt(i)*_sigSizes_weights_6[1] + Fr_toInt(j)*_sigSizes_weights_6[2];
                _offset_357 = _netweights_sigIdx_ + Fr_toInt(i)*_sigSizes_netweights[1] + Fr_toInt(j)*_sigSizes_netweights[2];
                ctx->multiGetSignal(__cIdx, __cIdx, _offset_357, _sigValue_29, 1);
                ctx->setSignal(__cIdx, _compIdx_29, _offset_354, _sigValue_29);
                Fr_copyn(_tmp_117, j, 1);
                Fr_add(_tmp_116, j, (ctx->circuit->constants + 1));
                Fr_copyn(j, _tmp_116, 1);
                Fr_lt(_tmp_118, j, (ctx->circuit->constants + 2));
                _loopCond_19 = _tmp_118;
            }
            /* forwardProcess.bias[i] <== bias[i] */
            _compIdx_30 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
            _bias_sigIdx__5 = ctx->getSignalOffset(_compIdx_30, 0xdeb23f9bd0a849a4LL /* bias */);
            _sigSizes_bias_5 = ctx->getSignalSizes(_compIdx_30, 0xdeb23f9bd0a849a4LL /* bias */);
            _offset_363 = _bias_sigIdx__5 + Fr_toInt(i)*_sigSizes_bias_5[1];
            _offset_365 = _bias_sigIdx__1 + Fr_toInt(i)*_sigSizes_bias_1[1];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_365, _sigValue_30, 1);
            ctx->setSignal(__cIdx, _compIdx_30, _offset_363, _sigValue_30);
            Fr_copyn(_tmp_120, i, 1);
            Fr_add(_tmp_119, i, (ctx->circuit->constants + 1));
            Fr_copyn(i, _tmp_119, 1);
            Fr_lt(_tmp_121, i, (ctx->circuit->constants + 3));
            _loopCond_18 = _tmp_121;
        }
        /* for (var i = 0;i < inputDim;i ++) */
        Fr_copyn(i_1, _num_26, 1);
        Fr_lt(_tmp_122, i_1, (ctx->circuit->constants + 2));
        _loopCond_20 = _tmp_122;
        while (Fr_isTrue(_loopCond_20)) {
            /* forwardProcess.trainData[i] <== trainDataset[batchIndex][i] */
            _compIdx_31 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
            _trainData_sigIdx__2 = ctx->getSignalOffset(_compIdx_31, 0x7e0969b4b39f9af9LL /* trainData */);
            _sigSizes_trainData_2 = ctx->getSignalSizes(_compIdx_31, 0x7e0969b4b39f9af9LL /* trainData */);
            _offset_374 = _trainData_sigIdx__2 + Fr_toInt(i_1)*_sigSizes_trainData_2[1];
            _offset_377 = _trainDataset_sigIdx_ + Fr_toInt(batchIndex)*_sigSizes_trainDataset[1] + Fr_toInt(i_1)*_sigSizes_trainDataset[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_377, _sigValue_31, 1);
            ctx->setSignal(__cIdx, _compIdx_31, _offset_374, _sigValue_31);
            Fr_copyn(_tmp_124, i_1, 1);
            Fr_add(_tmp_123, i_1, (ctx->circuit->constants + 1));
            Fr_copyn(i_1, _tmp_123, 1);
            Fr_lt(_tmp_125, i_1, (ctx->circuit->constants + 2));
            _loopCond_20 = _tmp_125;
        }
        /* for (var i = 0;i < outputDim;i++) */
        Fr_copyn(i_2, _num_27, 1);
        Fr_lt(_tmp_126, i_2, (ctx->circuit->constants + 3));
        _loopCond_21 = _tmp_126;
        while (Fr_isTrue(_loopCond_21)) {
            /* predictedTargets[i] <== forwardProcess.y[i] */
            _compIdx_32 = ctx->getSubComponentOffset(__cIdx, 0x12b783e645f786a7LL /* forwardProcess */);
            _y_sigIdx__2 = ctx->getSignalOffset(_compIdx_32, 0xaf63f44c86021554LL /* y */);
            _sigSizes_y_2 = ctx->getSignalSizes(_compIdx_32, 0xaf63f44c86021554LL /* y */);
            _offset_386 = _y_sigIdx__2 + Fr_toInt(i_2)*_sigSizes_y_2[1];
            ctx->multiGetSignal(__cIdx, _compIdx_32, _offset_386, _sigValue_32, 1);
            _offset_388 = _predictedTargets_sigIdx_ + Fr_toInt(i_2)*_sigSizes_predictedTargets[1];
            ctx->setSignal(__cIdx, __cIdx, _offset_388, _sigValue_32);
            Fr_copyn(_tmp_128, i_2, 1);
            Fr_add(_tmp_127, i_2, (ctx->circuit->constants + 1));
            Fr_copyn(i_2, _tmp_127, 1);
            Fr_lt(_tmp_129, i_2, (ctx->circuit->constants + 3));
            _loopCond_21 = _tmp_129;
        }
        /* component MSEprimeCalc = MSEPrime(outputDim) */
        /* for (var i = 0;i < outputDim;i ++) */
        Fr_copyn(i_3, _num_28, 1);
        Fr_lt(_tmp_130, i_3, (ctx->circuit->constants + 3));
        _loopCond_22 = _tmp_130;
        while (Fr_isTrue(_loopCond_22)) {
            /* MSEprimeCalc.y_true[i] <== realTargets[batchIndex][i] */
            _compIdx_33 = ctx->getSubComponentOffset(__cIdx, 0x176594482c0a1b6aLL /* MSEprimeCalc */);
            _y_true_sigIdx__2 = ctx->getSignalOffset(_compIdx_33, 0x967ba6748d3316f9LL /* y_true */);
            _sigSizes_y_true_2 = ctx->getSignalSizes(_compIdx_33, 0x967ba6748d3316f9LL /* y_true */);
            _offset_397 = _y_true_sigIdx__2 + Fr_toInt(i_3)*_sigSizes_y_true_2[1];
            _offset_400 = _realTargets_sigIdx_ + Fr_toInt(batchIndex)*_sigSizes_realTargets[1] + Fr_toInt(i_3)*_sigSizes_realTargets[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_400, _sigValue_33, 1);
            ctx->setSignal(__cIdx, _compIdx_33, _offset_397, _sigValue_33);
            /* MSEprimeCalc.y_predicted[i] <== predictedTargets[i] */
            _compIdx_34 = ctx->getSubComponentOffset(__cIdx, 0x176594482c0a1b6aLL /* MSEprimeCalc */);
            _y_predicted_sigIdx__2 = ctx->getSignalOffset(_compIdx_34, 0x1fd3698593e7c097LL /* y_predicted */);
            _sigSizes_y_predicted_2 = ctx->getSignalSizes(_compIdx_34, 0x1fd3698593e7c097LL /* y_predicted */);
            _offset_402 = _y_predicted_sigIdx__2 + Fr_toInt(i_3)*_sigSizes_y_predicted_2[1];
            _offset_404 = _predictedTargets_sigIdx_ + Fr_toInt(i_3)*_sigSizes_predictedTargets[1];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_404, _sigValue_34, 1);
            ctx->setSignal(__cIdx, _compIdx_34, _offset_402, _sigValue_34);
            Fr_copyn(_tmp_132, i_3, 1);
            Fr_add(_tmp_131, i_3, (ctx->circuit->constants + 1));
            Fr_copyn(i_3, _tmp_131, 1);
            Fr_lt(_tmp_133, i_3, (ctx->circuit->constants + 3));
            _loopCond_22 = _tmp_133;
        }
        /* for (var i = 0;i < outputDim;i++) */
        Fr_copyn(i_4, _num_29, 1);
        Fr_lt(_tmp_134, i_4, (ctx->circuit->constants + 3));
        _loopCond_23 = _tmp_134;
        while (Fr_isTrue(_loopCond_23)) {
            /* Error[i] <== MSEprimeCalc.error[i] */
            _compIdx_35 = ctx->getSubComponentOffset(__cIdx, 0x176594482c0a1b6aLL /* MSEprimeCalc */);
            _error_sigIdx__4 = ctx->getSignalOffset(_compIdx_35, 0x9f7452dd75d54d31LL /* error */);
            _sigSizes_error_4 = ctx->getSignalSizes(_compIdx_35, 0x9f7452dd75d54d31LL /* error */);
            _offset_413 = _error_sigIdx__4 + Fr_toInt(i_4)*_sigSizes_error_4[1];
            ctx->multiGetSignal(__cIdx, _compIdx_35, _offset_413, _sigValue_35, 1);
            _offset_415 = _Error_sigIdx_ + Fr_toInt(i_4)*_sigSizes_Error[1];
            ctx->setSignal(__cIdx, __cIdx, _offset_415, _sigValue_35);
            Fr_copyn(_tmp_136, i_4, 1);
            Fr_add(_tmp_135, i_4, (ctx->circuit->constants + 1));
            Fr_copyn(i_4, _tmp_135, 1);
            Fr_lt(_tmp_137, i_4, (ctx->circuit->constants + 3));
            _loopCond_23 = _tmp_137;
        }
        /* component backwardOperation = backward(inputDim, outputDim, precision, learningRate) */
        /* for (var i = 0;i < inputDim;i ++) */
        Fr_copyn(i_5, _num_30, 1);
        Fr_lt(_tmp_138, i_5, (ctx->circuit->constants + 2));
        _loopCond_24 = _tmp_138;
        while (Fr_isTrue(_loopCond_24)) {
            /* for (var j = 0;j < outputDim;j ++) */
            Fr_copyn(j_1, _num_31, 1);
            Fr_lt(_tmp_139, j_1, (ctx->circuit->constants + 3));
            _loopCond_25 = _tmp_139;
            while (Fr_isTrue(_loopCond_25)) {
                /* backwardOperation.weights[i][j] <== netweights[j][i] */
                _compIdx_36 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
                _weights_sigIdx__7 = ctx->getSignalOffset(_compIdx_36, 0xb1494b6ef08a411eLL /* weights */);
                _sigSizes_weights_7 = ctx->getSignalSizes(_compIdx_36, 0xb1494b6ef08a411eLL /* weights */);
                _offset_428 = _weights_sigIdx__7 + Fr_toInt(i_5)*_sigSizes_weights_7[1] + Fr_toInt(j_1)*_sigSizes_weights_7[2];
                _offset_431 = _netweights_sigIdx_ + Fr_toInt(j_1)*_sigSizes_netweights[1] + Fr_toInt(i_5)*_sigSizes_netweights[2];
                ctx->multiGetSignal(__cIdx, __cIdx, _offset_431, _sigValue_36, 1);
                ctx->setSignal(__cIdx, _compIdx_36, _offset_428, _sigValue_36);
                Fr_copyn(_tmp_141, j_1, 1);
                Fr_add(_tmp_140, j_1, (ctx->circuit->constants + 1));
                Fr_copyn(j_1, _tmp_140, 1);
                Fr_lt(_tmp_142, j_1, (ctx->circuit->constants + 3));
                _loopCond_25 = _tmp_142;
            }
            Fr_copyn(_tmp_144, i_5, 1);
            Fr_add(_tmp_143, i_5, (ctx->circuit->constants + 1));
            Fr_copyn(i_5, _tmp_143, 1);
            Fr_lt(_tmp_145, i_5, (ctx->circuit->constants + 2));
            _loopCond_24 = _tmp_145;
        }
        /* for (var i = 0;i < outputDim;i ++) */
        Fr_copyn(i_6, _num_32, 1);
        Fr_lt(_tmp_146, i_6, (ctx->circuit->constants + 3));
        _loopCond_26 = _tmp_146;
        while (Fr_isTrue(_loopCond_26)) {
            /* backwardOperation.bias[i] <== bias[i] */
            _compIdx_37 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
            _bias_sigIdx__6 = ctx->getSignalOffset(_compIdx_37, 0xdeb23f9bd0a849a4LL /* bias */);
            _sigSizes_bias_6 = ctx->getSignalSizes(_compIdx_37, 0xdeb23f9bd0a849a4LL /* bias */);
            _offset_444 = _bias_sigIdx__6 + Fr_toInt(i_6)*_sigSizes_bias_6[1];
            _offset_446 = _bias_sigIdx__1 + Fr_toInt(i_6)*_sigSizes_bias_1[1];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_446, _sigValue_37, 1);
            ctx->setSignal(__cIdx, _compIdx_37, _offset_444, _sigValue_37);
            Fr_copyn(_tmp_148, i_6, 1);
            Fr_add(_tmp_147, i_6, (ctx->circuit->constants + 1));
            Fr_copyn(i_6, _tmp_147, 1);
            Fr_lt(_tmp_149, i_6, (ctx->circuit->constants + 3));
            _loopCond_26 = _tmp_149;
        }
        /* for (var i = 0;i < inputDim;i ++) */
        Fr_copyn(i_7, _num_33, 1);
        Fr_lt(_tmp_150, i_7, (ctx->circuit->constants + 2));
        _loopCond_27 = _tmp_150;
        while (Fr_isTrue(_loopCond_27)) {
            /* backwardOperation.sample[i] <== trainDataset[batchIndex][i] */
            _compIdx_38 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
            _sample_sigIdx__2 = ctx->getSignalOffset(_compIdx_38, 0xf3d802fe7a8ba4c7LL /* sample */);
            _sigSizes_sample_2 = ctx->getSignalSizes(_compIdx_38, 0xf3d802fe7a8ba4c7LL /* sample */);
            _offset_455 = _sample_sigIdx__2 + Fr_toInt(i_7)*_sigSizes_sample_2[1];
            _offset_458 = _trainDataset_sigIdx_ + Fr_toInt(batchIndex)*_sigSizes_trainDataset[1] + Fr_toInt(i_7)*_sigSizes_trainDataset[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_458, _sigValue_38, 1);
            ctx->setSignal(__cIdx, _compIdx_38, _offset_455, _sigValue_38);
            Fr_copyn(_tmp_152, i_7, 1);
            Fr_add(_tmp_151, i_7, (ctx->circuit->constants + 1));
            Fr_copyn(i_7, _tmp_151, 1);
            Fr_lt(_tmp_153, i_7, (ctx->circuit->constants + 2));
            _loopCond_27 = _tmp_153;
        }
        /* for (var i = 0;i < outputDim;i ++) */
        Fr_copyn(i_8, _num_34, 1);
        Fr_lt(_tmp_154, i_8, (ctx->circuit->constants + 3));
        _loopCond_28 = _tmp_154;
        while (Fr_isTrue(_loopCond_28)) {
            /* backwardOperation.error[i] <== Error[i] */
            _compIdx_39 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
            _error_sigIdx__5 = ctx->getSignalOffset(_compIdx_39, 0x9f7452dd75d54d31LL /* error */);
            _sigSizes_error_5 = ctx->getSignalSizes(_compIdx_39, 0x9f7452dd75d54d31LL /* error */);
            _offset_467 = _error_sigIdx__5 + Fr_toInt(i_8)*_sigSizes_error_5[1];
            _offset_469 = _Error_sigIdx_ + Fr_toInt(i_8)*_sigSizes_Error[1];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_469, _sigValue_39, 1);
            ctx->setSignal(__cIdx, _compIdx_39, _offset_467, _sigValue_39);
            Fr_copyn(_tmp_156, i_8, 1);
            Fr_add(_tmp_155, i_8, (ctx->circuit->constants + 1));
            Fr_copyn(i_8, _tmp_155, 1);
            Fr_lt(_tmp_157, i_8, (ctx->circuit->constants + 3));
            _loopCond_28 = _tmp_157;
        }
        /* for (var i = 0;i < inputDim;i ++) */
        Fr_copyn(i_9, _num_35, 1);
        Fr_lt(_tmp_158, i_9, (ctx->circuit->constants + 2));
        _loopCond_29 = _tmp_158;
        while (Fr_isTrue(_loopCond_29)) {
            /* for (var j = 0;j < outputDim;j ++) */
            Fr_copyn(j_2, _num_36, 1);
            Fr_lt(_tmp_159, j_2, (ctx->circuit->constants + 3));
            _loopCond_30 = _tmp_159;
            while (Fr_isTrue(_loopCond_30)) {
                /* updatedWeights[i][j] <== backwardOperation.updatedWeights[i][j] */
                _compIdx_40 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
                _updatedWeights_sigIdx__4 = ctx->getSignalOffset(_compIdx_40, 0x288b1eb62a6e7b99LL /* updatedWeights */);
                _sigSizes_updatedWeights_4 = ctx->getSignalSizes(_compIdx_40, 0x288b1eb62a6e7b99LL /* updatedWeights */);
                _offset_482 = _updatedWeights_sigIdx__4 + Fr_toInt(i_9)*_sigSizes_updatedWeights_4[1] + Fr_toInt(j_2)*_sigSizes_updatedWeights_4[2];
                ctx->multiGetSignal(__cIdx, _compIdx_40, _offset_482, _sigValue_40, 1);
                _offset_485 = _updatedWeights_sigIdx__1 + Fr_toInt(i_9)*_sigSizes_updatedWeights_1[1] + Fr_toInt(j_2)*_sigSizes_updatedWeights_1[2];
                ctx->setSignal(__cIdx, __cIdx, _offset_485, _sigValue_40);
                Fr_copyn(_tmp_161, j_2, 1);
                Fr_add(_tmp_160, j_2, (ctx->circuit->constants + 1));
                Fr_copyn(j_2, _tmp_160, 1);
                Fr_lt(_tmp_162, j_2, (ctx->circuit->constants + 3));
                _loopCond_30 = _tmp_162;
            }
            Fr_copyn(_tmp_164, i_9, 1);
            Fr_add(_tmp_163, i_9, (ctx->circuit->constants + 1));
            Fr_copyn(i_9, _tmp_163, 1);
            Fr_lt(_tmp_165, i_9, (ctx->circuit->constants + 2));
            _loopCond_29 = _tmp_165;
        }
        /* for (var i = 0;i < outputDim;i ++) */
        Fr_copyn(i_10, _num_37, 1);
        Fr_lt(_tmp_166, i_10, (ctx->circuit->constants + 3));
        _loopCond_31 = _tmp_166;
        while (Fr_isTrue(_loopCond_31)) {
            /* updatedBias[i] <== backwardOperation.updatedBias[i] */
            _compIdx_41 = ctx->getSubComponentOffset(__cIdx, 0x9c70c0017f70903dLL /* backwardOperation */);
            _updatedBias_sigIdx__3 = ctx->getSignalOffset(_compIdx_41, 0xb30254661e3a4a35LL /* updatedBias */);
            _sigSizes_updatedBias_3 = ctx->getSignalSizes(_compIdx_41, 0xb30254661e3a4a35LL /* updatedBias */);
            _offset_498 = _updatedBias_sigIdx__3 + Fr_toInt(i_10)*_sigSizes_updatedBias_3[1];
            ctx->multiGetSignal(__cIdx, _compIdx_41, _offset_498, _sigValue_41, 1);
            _offset_500 = _updatedBias_sigIdx__1 + Fr_toInt(i_10)*_sigSizes_updatedBias_1[1];
            ctx->setSignal(__cIdx, __cIdx, _offset_500, _sigValue_41);
            Fr_copyn(_tmp_168, i_10, 1);
            Fr_add(_tmp_167, i_10, (ctx->circuit->constants + 1));
            Fr_copyn(i_10, _tmp_167, 1);
            Fr_lt(_tmp_169, i_10, (ctx->circuit->constants + 3));
            _loopCond_31 = _tmp_169;
        }
        Fr_copyn(_tmp_171, batchIndex, 1);
        Fr_add(_tmp_170, batchIndex, (ctx->circuit->constants + 1));
        Fr_copyn(batchIndex, _tmp_170, 1);
        Fr_lt(_tmp_172, batchIndex, (ctx->circuit->constants + 4));
        _loopCond_17 = _tmp_172;
    }
    /* for (var i = 0;i < outputDim;i ++) */
    /* for (var j = 0;j < inputDim;j ++) */
    /* if (newWeights[i][j] == updatedWeights[j][i]) */
    _offset_517 = _newWeights_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_517, _sigValue_42, 1);
    _offset_520 = _updatedWeights_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_520, _sigValue_43, 1);
    Fr_eq(_tmp_175, _sigValue_42, _sigValue_43);
    if (Fr_isTrue(_tmp_175)) {
        /* count = count + 1 */
        Fr_add(_tmp_176, count, (ctx->circuit->constants + 1));
        Fr_copyn(count, _tmp_176, 1);
    }
    _loopCond_32 = _tmp_179;
    while (Fr_isTrue(_loopCond_32)) {
        /* if (newWeights[i][j] == updatedWeights[j][i]) */
        _offset_529 = _newWeights_sigIdx_ + Fr_toInt(j_3)*_sigSizes_newWeights[2];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_529, _sigValue_44, 1);
        _offset_532 = _updatedWeights_sigIdx__1 + Fr_toInt(j_3)*_sigSizes_updatedWeights_1[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_532, _sigValue_45, 1);
        Fr_eq(_tmp_180, _sigValue_44, _sigValue_45);
        if (Fr_isTrue(_tmp_180)) {
            /* count = count + 1 */
            Fr_add(_tmp_181, count, (ctx->circuit->constants + 1));
            Fr_copyn(count, _tmp_181, 1);
        }
        Fr_copyn(_tmp_183, j_3, 1);
        Fr_add(_tmp_182, j_3, (ctx->circuit->constants + 1));
        Fr_copyn(j_3, _tmp_182, 1);
        Fr_lt(_tmp_184, j_3, (ctx->circuit->constants + 2));
        _loopCond_32 = _tmp_184;
    }
    _loopCond_33 = _tmp_187;
    while (Fr_isTrue(_loopCond_33)) {
        /* for (var j = 0;j < inputDim;j ++) */
        Fr_copyn(j_3, _num_42, 1);
        Fr_lt(_tmp_188, j_3, (ctx->circuit->constants + 2));
        _loopCond_34 = _tmp_188;
        while (Fr_isTrue(_loopCond_34)) {
            /* if (newWeights[i][j] == updatedWeights[j][i]) */
            _offset_548 = _newWeights_sigIdx_ + Fr_toInt(i_11)*_sigSizes_newWeights[1] + Fr_toInt(j_3)*_sigSizes_newWeights[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_548, _sigValue_46, 1);
            _offset_551 = _updatedWeights_sigIdx__1 + Fr_toInt(j_3)*_sigSizes_updatedWeights_1[1] + Fr_toInt(i_11)*_sigSizes_updatedWeights_1[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_551, _sigValue_47, 1);
            Fr_eq(_tmp_189, _sigValue_46, _sigValue_47);
            if (Fr_isTrue(_tmp_189)) {
                /* count = count + 1 */
                Fr_add(_tmp_190, count, (ctx->circuit->constants + 1));
                Fr_copyn(count, _tmp_190, 1);
            }
            Fr_copyn(_tmp_192, j_3, 1);
            Fr_add(_tmp_191, j_3, (ctx->circuit->constants + 1));
            Fr_copyn(j_3, _tmp_191, 1);
            Fr_lt(_tmp_193, j_3, (ctx->circuit->constants + 2));
            _loopCond_34 = _tmp_193;
        }
        Fr_copyn(_tmp_195, i_11, 1);
        Fr_add(_tmp_194, i_11, (ctx->circuit->constants + 1));
        Fr_copyn(i_11, _tmp_194, 1);
        Fr_lt(_tmp_196, i_11, (ctx->circuit->constants + 3));
        _loopCond_33 = _tmp_196;
    }
    /* for (var i = 0;i < outputDim;i ++) */
    /* if (newBias[i] == updatedBias[i]) */
    _offset_566 = _newBias_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_566, _sigValue_48, 1);
    _offset_568 = _updatedBias_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_568, _sigValue_49, 1);
    Fr_eq(_tmp_198, _sigValue_48, _sigValue_49);
    if (Fr_isTrue(_tmp_198)) {
        /* count = count + 1 */
        Fr_add(_tmp_199, count, (ctx->circuit->constants + 1));
        Fr_copyn(count, _tmp_199, 1);
    }
    _loopCond_35 = _tmp_202;
    while (Fr_isTrue(_loopCond_35)) {
        /* if (newBias[i] == updatedBias[i]) */
        _offset_576 = _newBias_sigIdx_ + Fr_toInt(i_12)*_sigSizes_newBias[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_576, _sigValue_50, 1);
        _offset_578 = _updatedBias_sigIdx__1 + Fr_toInt(i_12)*_sigSizes_updatedBias_1[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_578, _sigValue_51, 1);
        Fr_eq(_tmp_203, _sigValue_50, _sigValue_51);
        if (Fr_isTrue(_tmp_203)) {
            /* count = count + 1 */
            Fr_add(_tmp_204, count, (ctx->circuit->constants + 1));
            Fr_copyn(count, _tmp_204, 1);
        }
        Fr_copyn(_tmp_206, i_12, 1);
        Fr_add(_tmp_205, i_12, (ctx->circuit->constants + 1));
        Fr_copyn(i_12, _tmp_205, 1);
        Fr_lt(_tmp_207, i_12, (ctx->circuit->constants + 3));
        _loopCond_35 = _tmp_207;
    }
    /* if (count == outputDim * inputDim + outputDim) */
    Fr_eq(_tmp_210, count, (ctx->circuit->constants + 5));
    if (Fr_isTrue(_tmp_210)) {
        /* finalCheck <== 1 */
        ctx->setSignal(__cIdx, __cIdx, _finalCheck_sigIdx_, (ctx->circuit->constants + 1));
    } else {
        /* finalCheck <== 0 */
        ctx->setSignal(__cIdx, __cIdx, _finalCheck_sigIdx_, (ctx->circuit->constants + 0));
    }
    ctx->finished(__cIdx);
}
/*
forward
inputDim=100
outputDim=2
*/
void forward_121ebc6982f01b58(Circom_CalcWit *ctx, int __cIdx) {
    FrElement _sigValue[1];
    FrElement _sigValue_1[1];
    FrElement _sigValue_2[1];
    FrElement _sigValue_3[1];
    FrElement _tmp_2[1];
    FrElement s[1];
    FrElement _tmp_5[1];
    FrElement k[1];
    FrElement _sigValue_4[1];
    FrElement _sigValue_5[1];
    FrElement _sigValue_6[1];
    FrElement _sigValue_7[1];
    FrElement _tmp_6[1];
    FrElement _tmp_8[1];
    FrElement _tmp_7[1];
    FrElement _tmp_9[1];
    FrElement _sigValue_8[1];
    FrElement _tmp_10[1];
    FrElement _tmp_13[1];
    FrElement j[1];
    FrElement _num_3[1];
    FrElement _num_4[1];
    FrElement _tmp_14[1];
    FrElement _sigValue_9[1];
    FrElement _sigValue_10[1];
    FrElement _sigValue_11[1];
    FrElement _sigValue_12[1];
    FrElement _tmp_15[1];
    FrElement _tmp_17[1];
    FrElement _tmp_16[1];
    FrElement _tmp_18[1];
    FrElement _sigValue_13[1];
    FrElement _tmp_19[1];
    FrElement _tmp_21[1];
    FrElement _tmp_20[1];
    FrElement _tmp_22[1];
    int _compIdx;
    int _a_sigIdx_;
    int _weights_sigIdx_;
    int _offset_14;
    int _compIdx_1;
    int _b_sigIdx_;
    int _trainData_sigIdx_;
    int _offset_16;
    int _compIdx_2;
    int _c_sigIdx_;
    int _temp_sigIdx_;
    int _compIdx_3;
    int _a_sigIdx__1;
    int _offset_25;
    int _compIdx_4;
    int _b_sigIdx__1;
    int _offset_27;
    int _compIdx_5;
    int _c_sigIdx__1;
    int _bias_sigIdx_;
    int _offset_36;
    int _y_sigIdx_;
    int _offset_40;
    int _compIdx_6;
    int _a_sigIdx__2;
    int _offset_51;
    int _compIdx_7;
    int _b_sigIdx__2;
    int _offset_53;
    int _compIdx_8;
    int _c_sigIdx__2;
    int _offset_62;
    int _offset_66;
    Circom_Sizes _sigSizes_weights;
    Circom_Sizes _sigSizes_trainData;
    Circom_Sizes _sigSizes_bias;
    Circom_Sizes _sigSizes_y;
    PFrElement _loopCond;
    PFrElement _loopCond_1;
    PFrElement _loopCond_2;
    Fr_copy(&(_tmp_5[0]), ctx->circuit->constants +1);
    Fr_copy(&(k[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_13[0]), ctx->circuit->constants +1);
    Fr_copy(&(j[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_3[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_4[0]), ctx->circuit->constants +0);
    _weights_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xb1494b6ef08a411eLL /* weights */);
    _trainData_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x7e0969b4b39f9af9LL /* trainData */);
    _temp_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xfa4cf6ef19d2f987LL /* temp */);
    _bias_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xdeb23f9bd0a849a4LL /* bias */);
    _y_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xaf63f44c86021554LL /* y */);
    _sigSizes_weights = ctx->getSignalSizes(__cIdx, 0xb1494b6ef08a411eLL /* weights */);
    _sigSizes_trainData = ctx->getSignalSizes(__cIdx, 0x7e0969b4b39f9af9LL /* trainData */);
    _sigSizes_bias = ctx->getSignalSizes(__cIdx, 0xdeb23f9bd0a849a4LL /* bias */);
    _sigSizes_y = ctx->getSignalSizes(__cIdx, 0xaf63f44c86021554LL /* y */);
    /* signal input weights[outputDim][inputDim] */
    /* signal input bias[outputDim] */
    /* signal input trainData[inputDim] */
    /* signal input temp */
    /* signal output y[outputDim] */
    /* var s */
    /* for (var j=0;j < outputDim;j++) */
    /* s = 0 */
    /* for (var k=0;k < inputDim;k++) */
    /* component mult = Multiplier() */
    /* mult.a <== weights[j][k] */
    _compIdx = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
    _a_sigIdx_ = ctx->getSignalOffset(_compIdx, 0xaf63dc4c8601ec8cLL /* a */);
    _offset_14 = _weights_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_14, _sigValue, 1);
    ctx->setSignal(__cIdx, _compIdx, _a_sigIdx_, _sigValue);
    /* mult.b <== trainData[k] */
    _compIdx_1 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
    _b_sigIdx_ = ctx->getSignalOffset(_compIdx_1, 0xaf63df4c8601f1a5LL /* b */);
    _offset_16 = _trainData_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_16, _sigValue_1, 1);
    ctx->setSignal(__cIdx, _compIdx_1, _b_sigIdx_, _sigValue_1);
    /* temp <== mult.c */
    _compIdx_2 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
    _c_sigIdx_ = ctx->getSignalOffset(_compIdx_2, 0xaf63de4c8601eff2LL /* c */);
    ctx->multiGetSignal(__cIdx, _compIdx_2, _c_sigIdx_, _sigValue_2, 1);
    ctx->setSignal(__cIdx, __cIdx, _temp_sigIdx_, _sigValue_2);
    /* s += temp */
    ctx->multiGetSignal(__cIdx, __cIdx, _temp_sigIdx_, _sigValue_3, 1);
    Fr_add(_tmp_2, (ctx->circuit->constants + 0), _sigValue_3);
    Fr_copyn(s, _tmp_2, 1);
    _loopCond = _tmp_5;
    while (Fr_isTrue(_loopCond)) {
        /* component mult = Multiplier() */
        /* mult.a <== weights[j][k] */
        _compIdx_3 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
        _a_sigIdx__1 = ctx->getSignalOffset(_compIdx_3, 0xaf63dc4c8601ec8cLL /* a */);
        _offset_25 = _weights_sigIdx_ + Fr_toInt(k)*_sigSizes_weights[2];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_25, _sigValue_4, 1);
        ctx->setSignal(__cIdx, _compIdx_3, _a_sigIdx__1, _sigValue_4);
        /* mult.b <== trainData[k] */
        _compIdx_4 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
        _b_sigIdx__1 = ctx->getSignalOffset(_compIdx_4, 0xaf63df4c8601f1a5LL /* b */);
        _offset_27 = _trainData_sigIdx_ + Fr_toInt(k)*_sigSizes_trainData[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_27, _sigValue_5, 1);
        ctx->setSignal(__cIdx, _compIdx_4, _b_sigIdx__1, _sigValue_5);
        /* temp <== mult.c */
        _compIdx_5 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
        _c_sigIdx__1 = ctx->getSignalOffset(_compIdx_5, 0xaf63de4c8601eff2LL /* c */);
        ctx->multiGetSignal(__cIdx, _compIdx_5, _c_sigIdx__1, _sigValue_6, 1);
        ctx->setSignal(__cIdx, __cIdx, _temp_sigIdx_, _sigValue_6);
        /* s += temp */
        ctx->multiGetSignal(__cIdx, __cIdx, _temp_sigIdx_, _sigValue_7, 1);
        Fr_add(_tmp_6, s, _sigValue_7);
        Fr_copyn(s, _tmp_6, 1);
        Fr_copyn(_tmp_8, k, 1);
        Fr_add(_tmp_7, k, (ctx->circuit->constants + 1));
        Fr_copyn(k, _tmp_7, 1);
        Fr_lt(_tmp_9, k, (ctx->circuit->constants + 2));
        _loopCond = _tmp_9;
    }
    /* s += bias[j] */
    _offset_36 = _bias_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_36, _sigValue_8, 1);
    Fr_add(_tmp_10, s, _sigValue_8);
    Fr_copyn(s, _tmp_10, 1);
    /* y[j] <== s */
    _offset_40 = _y_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_40, s);
    _loopCond_1 = _tmp_13;
    while (Fr_isTrue(_loopCond_1)) {
        /* s = 0 */
        Fr_copyn(s, _num_3, 1);
        /* for (var k=0;k < inputDim;k++) */
        Fr_copyn(k, _num_4, 1);
        Fr_lt(_tmp_14, k, (ctx->circuit->constants + 2));
        _loopCond_2 = _tmp_14;
        while (Fr_isTrue(_loopCond_2)) {
            /* component mult = Multiplier() */
            /* mult.a <== weights[j][k] */
            _compIdx_6 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
            _a_sigIdx__2 = ctx->getSignalOffset(_compIdx_6, 0xaf63dc4c8601ec8cLL /* a */);
            _offset_51 = _weights_sigIdx_ + Fr_toInt(j)*_sigSizes_weights[1] + Fr_toInt(k)*_sigSizes_weights[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_51, _sigValue_9, 1);
            ctx->setSignal(__cIdx, _compIdx_6, _a_sigIdx__2, _sigValue_9);
            /* mult.b <== trainData[k] */
            _compIdx_7 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
            _b_sigIdx__2 = ctx->getSignalOffset(_compIdx_7, 0xaf63df4c8601f1a5LL /* b */);
            _offset_53 = _trainData_sigIdx_ + Fr_toInt(k)*_sigSizes_trainData[1];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_53, _sigValue_10, 1);
            ctx->setSignal(__cIdx, _compIdx_7, _b_sigIdx__2, _sigValue_10);
            /* temp <== mult.c */
            _compIdx_8 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
            _c_sigIdx__2 = ctx->getSignalOffset(_compIdx_8, 0xaf63de4c8601eff2LL /* c */);
            ctx->multiGetSignal(__cIdx, _compIdx_8, _c_sigIdx__2, _sigValue_11, 1);
            ctx->setSignal(__cIdx, __cIdx, _temp_sigIdx_, _sigValue_11);
            /* s += temp */
            ctx->multiGetSignal(__cIdx, __cIdx, _temp_sigIdx_, _sigValue_12, 1);
            Fr_add(_tmp_15, s, _sigValue_12);
            Fr_copyn(s, _tmp_15, 1);
            Fr_copyn(_tmp_17, k, 1);
            Fr_add(_tmp_16, k, (ctx->circuit->constants + 1));
            Fr_copyn(k, _tmp_16, 1);
            Fr_lt(_tmp_18, k, (ctx->circuit->constants + 2));
            _loopCond_2 = _tmp_18;
        }
        /* s += bias[j] */
        _offset_62 = _bias_sigIdx_ + Fr_toInt(j)*_sigSizes_bias[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_62, _sigValue_13, 1);
        Fr_add(_tmp_19, s, _sigValue_13);
        Fr_copyn(s, _tmp_19, 1);
        /* y[j] <== s */
        _offset_66 = _y_sigIdx_ + Fr_toInt(j)*_sigSizes_y[1];
        ctx->setSignal(__cIdx, __cIdx, _offset_66, s);
        Fr_copyn(_tmp_21, j, 1);
        Fr_add(_tmp_20, j, (ctx->circuit->constants + 1));
        Fr_copyn(j, _tmp_20, 1);
        Fr_lt(_tmp_22, j, (ctx->circuit->constants + 3));
        _loopCond_1 = _tmp_22;
    }
    ctx->finished(__cIdx);
}
/*
Multiplier
*/
void Multiplier_1535d858d77698a6(Circom_CalcWit *ctx, int __cIdx) {
    FrElement _sigValue[1];
    FrElement _sigValue_1[1];
    FrElement _tmp[1];
    int _a_sigIdx_;
    int _b_sigIdx_;
    int _c_sigIdx_;
    _a_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xaf63dc4c8601ec8cLL /* a */);
    _b_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xaf63df4c8601f1a5LL /* b */);
    _c_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xaf63de4c8601eff2LL /* c */);
    /* signal input a */
    /* signal input b */
    /* signal output c */
    /* c <== a*b */
    ctx->multiGetSignal(__cIdx, __cIdx, _a_sigIdx_, _sigValue, 1);
    ctx->multiGetSignal(__cIdx, __cIdx, _b_sigIdx_, _sigValue_1, 1);
    Fr_mul(_tmp, _sigValue, _sigValue_1);
    ctx->setSignal(__cIdx, __cIdx, _c_sigIdx_, _tmp);
    ctx->finished(__cIdx);
}
/*
MSEPrime
outputDim=2
*/
void MSEPrime_9ee6bfc82432c18f(Circom_CalcWit *ctx, int __cIdx) {
    FrElement _sigValue[1];
    FrElement _sigValue_1[1];
    FrElement _tmp_1[1];
    FrElement _tmp_2[1];
    FrElement err[1];
    FrElement _tmp_3[1];
    FrElement _tmp_6[1];
    FrElement i[1];
    FrElement _sigValue_2[1];
    FrElement _sigValue_3[1];
    FrElement _tmp_7[1];
    FrElement _tmp_8[1];
    FrElement _tmp_9[1];
    FrElement _tmp_11[1];
    FrElement _tmp_10[1];
    FrElement _tmp_12[1];
    int _y_true_sigIdx_;
    int _offset_7;
    int _y_predicted_sigIdx_;
    int _offset_9;
    int _error_sigIdx_;
    int _offset_14;
    int _offset_20;
    int _offset_22;
    int _offset_27;
    Circom_Sizes _sigSizes_y_true;
    Circom_Sizes _sigSizes_y_predicted;
    Circom_Sizes _sigSizes_error;
    PFrElement _loopCond;
    Fr_copy(&(_tmp_6[0]), ctx->circuit->constants +1);
    Fr_copy(&(i[0]), ctx->circuit->constants +1);
    _y_true_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x967ba6748d3316f9LL /* y_true */);
    _y_predicted_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x1fd3698593e7c097LL /* y_predicted */);
    _error_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_y_true = ctx->getSignalSizes(__cIdx, 0x967ba6748d3316f9LL /* y_true */);
    _sigSizes_y_predicted = ctx->getSignalSizes(__cIdx, 0x1fd3698593e7c097LL /* y_predicted */);
    _sigSizes_error = ctx->getSignalSizes(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    /* signal input y_true[outputDim] */
    /* signal input y_predicted[outputDim] */
    /* signal output error[outputDim] */
    /* var err */
    /* for (var i = 0;i < outputDim;i ++) */
    /* err = 2 * (y_true[i] - y_predicted[i]) */
    _offset_7 = _y_true_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_7, _sigValue, 1);
    _offset_9 = _y_predicted_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_9, _sigValue_1, 1);
    Fr_sub(_tmp_1, _sigValue, _sigValue_1);
    Fr_mul(_tmp_2, (ctx->circuit->constants + 3), _tmp_1);
    Fr_copyn(err, _tmp_2, 1);
    /* error[i] <== err/outputDim */
    Fr_div(_tmp_3, err, (ctx->circuit->constants + 3));
    _offset_14 = _error_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_14, _tmp_3);
    _loopCond = _tmp_6;
    while (Fr_isTrue(_loopCond)) {
        /* err = 2 * (y_true[i] - y_predicted[i]) */
        _offset_20 = _y_true_sigIdx_ + Fr_toInt(i)*_sigSizes_y_true[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_20, _sigValue_2, 1);
        _offset_22 = _y_predicted_sigIdx_ + Fr_toInt(i)*_sigSizes_y_predicted[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_22, _sigValue_3, 1);
        Fr_sub(_tmp_7, _sigValue_2, _sigValue_3);
        Fr_mul(_tmp_8, (ctx->circuit->constants + 3), _tmp_7);
        Fr_copyn(err, _tmp_8, 1);
        /* error[i] <== err/outputDim */
        Fr_div(_tmp_9, err, (ctx->circuit->constants + 3));
        _offset_27 = _error_sigIdx_ + Fr_toInt(i)*_sigSizes_error[1];
        ctx->setSignal(__cIdx, __cIdx, _offset_27, _tmp_9);
        Fr_copyn(_tmp_11, i, 1);
        Fr_add(_tmp_10, i, (ctx->circuit->constants + 1));
        Fr_copyn(i, _tmp_10, 1);
        Fr_lt(_tmp_12, i, (ctx->circuit->constants + 3));
        _loopCond = _tmp_12;
    }
    ctx->finished(__cIdx);
}
/*
backward
inputDim=100
learningRate=10
outputDim=2
precision=10000
*/
void backward_34ba949691bcf6d2(Circom_CalcWit *ctx, int __cIdx) {
    FrElement _sigValue[1];
    FrElement _tmp_4[1];
    FrElement j[1];
    FrElement _sigValue_1[1];
    FrElement _tmp_6[1];
    FrElement _tmp_5[1];
    FrElement _tmp_7[1];
    FrElement _tmp_10[1];
    FrElement i[1];
    FrElement _num_2[1];
    FrElement _tmp_11[1];
    FrElement _sigValue_2[1];
    FrElement _tmp_13[1];
    FrElement _tmp_12[1];
    FrElement _tmp_14[1];
    FrElement _tmp_16[1];
    FrElement _tmp_15[1];
    FrElement _tmp_17[1];
    FrElement _sigValue_3[1];
    FrElement _tmp_21[1];
    FrElement i_1[1];
    FrElement _sigValue_4[1];
    FrElement _tmp_23[1];
    FrElement _tmp_22[1];
    FrElement _tmp_24[1];
    FrElement _sigValue_5[1];
    FrElement _tmp_28[1];
    FrElement i_2[1];
    FrElement _sigValue_6[1];
    FrElement _tmp_30[1];
    FrElement _tmp_29[1];
    FrElement _tmp_31[1];
    FrElement _sigValue_7[1];
    FrElement _tmp_35[1];
    FrElement i_3[1];
    FrElement _sigValue_8[1];
    FrElement _tmp_37[1];
    FrElement _tmp_36[1];
    FrElement _tmp_38[1];
    FrElement _sigValue_9[1];
    FrElement _tmp_42[1];
    FrElement i_4[1];
    FrElement _sigValue_10[1];
    FrElement _tmp_44[1];
    FrElement _tmp_43[1];
    FrElement _tmp_45[1];
    FrElement _sigValue_11[1];
    FrElement _tmp_50[1];
    FrElement j_1[1];
    FrElement _sigValue_12[1];
    FrElement _tmp_52[1];
    FrElement _tmp_51[1];
    FrElement _tmp_53[1];
    FrElement _tmp_56[1];
    FrElement i_5[1];
    FrElement _num_9[1];
    FrElement _tmp_57[1];
    FrElement _sigValue_13[1];
    FrElement _tmp_59[1];
    FrElement _tmp_58[1];
    FrElement _tmp_60[1];
    FrElement _tmp_62[1];
    FrElement _tmp_61[1];
    FrElement _tmp_63[1];
    FrElement _sigValue_14[1];
    FrElement _sigValue_15[1];
    FrElement _tmp_66[1];
    FrElement _tmp_67[1];
    FrElement _tmp_70[1];
    FrElement j_2[1];
    FrElement _sigValue_16[1];
    FrElement _sigValue_17[1];
    FrElement _tmp_71[1];
    FrElement _tmp_72[1];
    FrElement _tmp_74[1];
    FrElement _tmp_73[1];
    FrElement _tmp_75[1];
    FrElement _tmp_78[1];
    FrElement i_6[1];
    FrElement _num_12[1];
    FrElement _tmp_79[1];
    FrElement _sigValue_18[1];
    FrElement _sigValue_19[1];
    FrElement _tmp_80[1];
    FrElement _tmp_81[1];
    FrElement _tmp_83[1];
    FrElement _tmp_82[1];
    FrElement _tmp_84[1];
    FrElement _tmp_86[1];
    FrElement _tmp_85[1];
    FrElement _tmp_87[1];
    FrElement _sigValue_20[1];
    FrElement _sigValue_21[1];
    FrElement _tmp_91[1];
    FrElement i_7[1];
    FrElement _sigValue_22[1];
    FrElement _sigValue_23[1];
    FrElement _tmp_93[1];
    FrElement _tmp_92[1];
    FrElement _tmp_94[1];
    FrElement _sigValue_24[1];
    FrElement _tmp_98[1];
    FrElement i_8[1];
    FrElement _sigValue_25[1];
    FrElement _tmp_100[1];
    FrElement _tmp_99[1];
    FrElement _tmp_101[1];
    int _compIdx;
    int _weights_sigIdx_;
    int _offset_19;
    int _weights_sigIdx__1;
    int _offset_22;
    int _compIdx_1;
    int _weights_sigIdx__2;
    int _offset_29;
    int _offset_32;
    int _compIdx_2;
    int _weights_sigIdx__3;
    int _offset_46;
    int _offset_49;
    int _compIdx_3;
    int _error_sigIdx_;
    int _offset_62;
    int _error_sigIdx__1;
    int _offset_64;
    int _compIdx_4;
    int _error_sigIdx__2;
    int _offset_70;
    int _offset_72;
    int _compIdx_5;
    int _dotProdOut_sigIdx_;
    int _offset_81;
    int _inputError_sigIdx_;
    int _offset_83;
    int _compIdx_6;
    int _dotProdOut_sigIdx__1;
    int _offset_89;
    int _offset_91;
    int _compIdx_7;
    int _trainSample_sigIdx_;
    int _offset_100;
    int _sample_sigIdx_;
    int _offset_102;
    int _compIdx_8;
    int _trainSample_sigIdx__1;
    int _offset_108;
    int _offset_110;
    int _compIdx_9;
    int _error_sigIdx__3;
    int _offset_119;
    int _offset_121;
    int _compIdx_10;
    int _error_sigIdx__4;
    int _offset_127;
    int _offset_129;
    int _compIdx_11;
    int _outerProdOut_sigIdx_;
    int _offset_142;
    int _weightsError_sigIdx_;
    int _offset_145;
    int _compIdx_12;
    int _outerProdOut_sigIdx__1;
    int _offset_152;
    int _offset_155;
    int _compIdx_13;
    int _outerProdOut_sigIdx__2;
    int _offset_169;
    int _offset_172;
    int _offset_189;
    int _offset_192;
    int _updatedWeights_sigIdx_;
    int _offset_196;
    int _offset_203;
    int _offset_206;
    int _offset_210;
    int _offset_224;
    int _offset_227;
    int _offset_231;
    int _compIdx_14;
    int _bias_sigIdx_;
    int _offset_244;
    int _bias_sigIdx__1;
    int _offset_246;
    int _compIdx_15;
    int _error_sigIdx__5;
    int _offset_248;
    int _offset_250;
    int _compIdx_16;
    int _bias_sigIdx__2;
    int _offset_256;
    int _offset_258;
    int _compIdx_17;
    int _error_sigIdx__6;
    int _offset_260;
    int _offset_262;
    int _compIdx_18;
    int _updatedBias_sigIdx_;
    int _offset_271;
    int _updatedBias_sigIdx__1;
    int _offset_273;
    int _compIdx_19;
    int _updatedBias_sigIdx__2;
    int _offset_279;
    int _offset_281;
    Circom_Sizes _sigSizes_weights;
    Circom_Sizes _sigSizes_weights_1;
    Circom_Sizes _sigSizes_weights_2;
    Circom_Sizes _sigSizes_weights_3;
    Circom_Sizes _sigSizes_error;
    Circom_Sizes _sigSizes_error_1;
    Circom_Sizes _sigSizes_error_2;
    Circom_Sizes _sigSizes_dotProdOut;
    Circom_Sizes _sigSizes_inputError;
    Circom_Sizes _sigSizes_dotProdOut_1;
    Circom_Sizes _sigSizes_trainSample;
    Circom_Sizes _sigSizes_sample;
    Circom_Sizes _sigSizes_trainSample_1;
    Circom_Sizes _sigSizes_error_3;
    Circom_Sizes _sigSizes_error_4;
    Circom_Sizes _sigSizes_outerProdOut;
    Circom_Sizes _sigSizes_weightsError;
    Circom_Sizes _sigSizes_outerProdOut_1;
    Circom_Sizes _sigSizes_outerProdOut_2;
    Circom_Sizes _sigSizes_updatedWeights;
    Circom_Sizes _sigSizes_bias;
    Circom_Sizes _sigSizes_bias_1;
    Circom_Sizes _sigSizes_error_5;
    Circom_Sizes _sigSizes_bias_2;
    Circom_Sizes _sigSizes_error_6;
    Circom_Sizes _sigSizes_updatedBias;
    Circom_Sizes _sigSizes_updatedBias_1;
    Circom_Sizes _sigSizes_updatedBias_2;
    PFrElement _loopCond;
    PFrElement _loopCond_1;
    PFrElement _loopCond_2;
    PFrElement _loopCond_3;
    PFrElement _loopCond_4;
    PFrElement _loopCond_5;
    PFrElement _loopCond_6;
    PFrElement _loopCond_7;
    PFrElement _loopCond_8;
    PFrElement _loopCond_9;
    PFrElement _loopCond_10;
    PFrElement _loopCond_11;
    PFrElement _loopCond_12;
    PFrElement _loopCond_13;
    PFrElement _loopCond_14;
    Fr_copy(&(_tmp_4[0]), ctx->circuit->constants +1);
    Fr_copy(&(j[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_10[0]), ctx->circuit->constants +1);
    Fr_copy(&(i[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_2[0]), ctx->circuit->constants +0);
    Fr_copy(&(_tmp_21[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_1[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_28[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_2[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_35[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_3[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_42[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_4[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_50[0]), ctx->circuit->constants +1);
    Fr_copy(&(j_1[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_56[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_5[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_9[0]), ctx->circuit->constants +0);
    Fr_copy(&(_tmp_70[0]), ctx->circuit->constants +1);
    Fr_copy(&(j_2[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_78[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_6[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_12[0]), ctx->circuit->constants +0);
    Fr_copy(&(_tmp_91[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_7[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_98[0]), ctx->circuit->constants +1);
    Fr_copy(&(i_8[0]), ctx->circuit->constants +1);
    _weights_sigIdx__1 = ctx->getSignalOffset(__cIdx, 0xb1494b6ef08a411eLL /* weights */);
    _error_sigIdx__1 = ctx->getSignalOffset(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    _inputError_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x7379f7320272d503LL /* inputError */);
    _sample_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xf3d802fe7a8ba4c7LL /* sample */);
    _weightsError_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x35a0bda4e5a45dc8LL /* weightsError */);
    _updatedWeights_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x288b1eb62a6e7b99LL /* updatedWeights */);
    _bias_sigIdx__1 = ctx->getSignalOffset(__cIdx, 0xdeb23f9bd0a849a4LL /* bias */);
    _updatedBias_sigIdx__1 = ctx->getSignalOffset(__cIdx, 0xb30254661e3a4a35LL /* updatedBias */);
    _sigSizes_weights_1 = ctx->getSignalSizes(__cIdx, 0xb1494b6ef08a411eLL /* weights */);
    _sigSizes_error_1 = ctx->getSignalSizes(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_inputError = ctx->getSignalSizes(__cIdx, 0x7379f7320272d503LL /* inputError */);
    _sigSizes_sample = ctx->getSignalSizes(__cIdx, 0xf3d802fe7a8ba4c7LL /* sample */);
    _sigSizes_weightsError = ctx->getSignalSizes(__cIdx, 0x35a0bda4e5a45dc8LL /* weightsError */);
    _sigSizes_updatedWeights = ctx->getSignalSizes(__cIdx, 0x288b1eb62a6e7b99LL /* updatedWeights */);
    _sigSizes_bias_1 = ctx->getSignalSizes(__cIdx, 0xdeb23f9bd0a849a4LL /* bias */);
    _sigSizes_updatedBias_1 = ctx->getSignalSizes(__cIdx, 0xb30254661e3a4a35LL /* updatedBias */);
    /* signal input weights[inputDim][outputDim] */
    /* signal input bias[outputDim] */
    /* signal input sample[inputDim] */
    /* signal input error[outputDim] */
    /* signal inputError[inputDim] */
    /* signal weightsError[inputDim][outputDim] */
    /* signal output updatedWeights[inputDim][outputDim] */
    /* signal output updatedBias[outputDim] */
    /* component dotProd = dotProduct(inputDim, outputDim) */
    /* for (var i = 0;i < inputDim;i ++) */
    /* for (var j = 0;j < outputDim;j ++) */
    /* dotProd.weights[i][j] <== weights[i][j] */
    _compIdx = ctx->getSubComponentOffset(__cIdx, 0x48df3f1e0ee35ebdLL /* dotProd */);
    _weights_sigIdx_ = ctx->getSignalOffset(_compIdx, 0xb1494b6ef08a411eLL /* weights */);
    _sigSizes_weights = ctx->getSignalSizes(_compIdx, 0xb1494b6ef08a411eLL /* weights */);
    _offset_19 = _weights_sigIdx_;
    _offset_22 = _weights_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_22, _sigValue, 1);
    ctx->setSignal(__cIdx, _compIdx, _offset_19, _sigValue);
    _loopCond = _tmp_4;
    while (Fr_isTrue(_loopCond)) {
        /* dotProd.weights[i][j] <== weights[i][j] */
        _compIdx_1 = ctx->getSubComponentOffset(__cIdx, 0x48df3f1e0ee35ebdLL /* dotProd */);
        _weights_sigIdx__2 = ctx->getSignalOffset(_compIdx_1, 0xb1494b6ef08a411eLL /* weights */);
        _sigSizes_weights_2 = ctx->getSignalSizes(_compIdx_1, 0xb1494b6ef08a411eLL /* weights */);
        _offset_29 = _weights_sigIdx__2 + Fr_toInt(j)*_sigSizes_weights_2[2];
        _offset_32 = _weights_sigIdx__1 + Fr_toInt(j)*_sigSizes_weights_1[2];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_32, _sigValue_1, 1);
        ctx->setSignal(__cIdx, _compIdx_1, _offset_29, _sigValue_1);
        Fr_copyn(_tmp_6, j, 1);
        Fr_add(_tmp_5, j, (ctx->circuit->constants + 1));
        Fr_copyn(j, _tmp_5, 1);
        Fr_lt(_tmp_7, j, (ctx->circuit->constants + 3));
        _loopCond = _tmp_7;
    }
    _loopCond_1 = _tmp_10;
    while (Fr_isTrue(_loopCond_1)) {
        /* for (var j = 0;j < outputDim;j ++) */
        Fr_copyn(j, _num_2, 1);
        Fr_lt(_tmp_11, j, (ctx->circuit->constants + 3));
        _loopCond_2 = _tmp_11;
        while (Fr_isTrue(_loopCond_2)) {
            /* dotProd.weights[i][j] <== weights[i][j] */
            _compIdx_2 = ctx->getSubComponentOffset(__cIdx, 0x48df3f1e0ee35ebdLL /* dotProd */);
            _weights_sigIdx__3 = ctx->getSignalOffset(_compIdx_2, 0xb1494b6ef08a411eLL /* weights */);
            _sigSizes_weights_3 = ctx->getSignalSizes(_compIdx_2, 0xb1494b6ef08a411eLL /* weights */);
            _offset_46 = _weights_sigIdx__3 + Fr_toInt(i)*_sigSizes_weights_3[1] + Fr_toInt(j)*_sigSizes_weights_3[2];
            _offset_49 = _weights_sigIdx__1 + Fr_toInt(i)*_sigSizes_weights_1[1] + Fr_toInt(j)*_sigSizes_weights_1[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_49, _sigValue_2, 1);
            ctx->setSignal(__cIdx, _compIdx_2, _offset_46, _sigValue_2);
            Fr_copyn(_tmp_13, j, 1);
            Fr_add(_tmp_12, j, (ctx->circuit->constants + 1));
            Fr_copyn(j, _tmp_12, 1);
            Fr_lt(_tmp_14, j, (ctx->circuit->constants + 3));
            _loopCond_2 = _tmp_14;
        }
        Fr_copyn(_tmp_16, i, 1);
        Fr_add(_tmp_15, i, (ctx->circuit->constants + 1));
        Fr_copyn(i, _tmp_15, 1);
        Fr_lt(_tmp_17, i, (ctx->circuit->constants + 2));
        _loopCond_1 = _tmp_17;
    }
    /* for (var i = 0;i < outputDim;i ++) */
    /* dotProd.error[i] <== error[i] */
    _compIdx_3 = ctx->getSubComponentOffset(__cIdx, 0x48df3f1e0ee35ebdLL /* dotProd */);
    _error_sigIdx_ = ctx->getSignalOffset(_compIdx_3, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_error = ctx->getSignalSizes(_compIdx_3, 0x9f7452dd75d54d31LL /* error */);
    _offset_62 = _error_sigIdx_;
    _offset_64 = _error_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_64, _sigValue_3, 1);
    ctx->setSignal(__cIdx, _compIdx_3, _offset_62, _sigValue_3);
    _loopCond_3 = _tmp_21;
    while (Fr_isTrue(_loopCond_3)) {
        /* dotProd.error[i] <== error[i] */
        _compIdx_4 = ctx->getSubComponentOffset(__cIdx, 0x48df3f1e0ee35ebdLL /* dotProd */);
        _error_sigIdx__2 = ctx->getSignalOffset(_compIdx_4, 0x9f7452dd75d54d31LL /* error */);
        _sigSizes_error_2 = ctx->getSignalSizes(_compIdx_4, 0x9f7452dd75d54d31LL /* error */);
        _offset_70 = _error_sigIdx__2 + Fr_toInt(i_1)*_sigSizes_error_2[1];
        _offset_72 = _error_sigIdx__1 + Fr_toInt(i_1)*_sigSizes_error_1[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_72, _sigValue_4, 1);
        ctx->setSignal(__cIdx, _compIdx_4, _offset_70, _sigValue_4);
        Fr_copyn(_tmp_23, i_1, 1);
        Fr_add(_tmp_22, i_1, (ctx->circuit->constants + 1));
        Fr_copyn(i_1, _tmp_22, 1);
        Fr_lt(_tmp_24, i_1, (ctx->circuit->constants + 3));
        _loopCond_3 = _tmp_24;
    }
    /* for (var i = 0;i < outputDim;i ++) */
    /* inputError[i] <== dotProd.dotProdOut[i] */
    _compIdx_5 = ctx->getSubComponentOffset(__cIdx, 0x48df3f1e0ee35ebdLL /* dotProd */);
    _dotProdOut_sigIdx_ = ctx->getSignalOffset(_compIdx_5, 0x16a6407ffe97c5f7LL /* dotProdOut */);
    _sigSizes_dotProdOut = ctx->getSignalSizes(_compIdx_5, 0x16a6407ffe97c5f7LL /* dotProdOut */);
    _offset_81 = _dotProdOut_sigIdx_;
    ctx->multiGetSignal(__cIdx, _compIdx_5, _offset_81, _sigValue_5, 1);
    _offset_83 = _inputError_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_83, _sigValue_5);
    _loopCond_4 = _tmp_28;
    while (Fr_isTrue(_loopCond_4)) {
        /* inputError[i] <== dotProd.dotProdOut[i] */
        _compIdx_6 = ctx->getSubComponentOffset(__cIdx, 0x48df3f1e0ee35ebdLL /* dotProd */);
        _dotProdOut_sigIdx__1 = ctx->getSignalOffset(_compIdx_6, 0x16a6407ffe97c5f7LL /* dotProdOut */);
        _sigSizes_dotProdOut_1 = ctx->getSignalSizes(_compIdx_6, 0x16a6407ffe97c5f7LL /* dotProdOut */);
        _offset_89 = _dotProdOut_sigIdx__1 + Fr_toInt(i_2)*_sigSizes_dotProdOut_1[1];
        ctx->multiGetSignal(__cIdx, _compIdx_6, _offset_89, _sigValue_6, 1);
        _offset_91 = _inputError_sigIdx_ + Fr_toInt(i_2)*_sigSizes_inputError[1];
        ctx->setSignal(__cIdx, __cIdx, _offset_91, _sigValue_6);
        Fr_copyn(_tmp_30, i_2, 1);
        Fr_add(_tmp_29, i_2, (ctx->circuit->constants + 1));
        Fr_copyn(i_2, _tmp_29, 1);
        Fr_lt(_tmp_31, i_2, (ctx->circuit->constants + 3));
        _loopCond_4 = _tmp_31;
    }
    /* component outerProd = outerProduct(inputDim, outputDim) */
    /* for (var i = 0;i < inputDim;i ++) */
    /* outerProd.trainSample[i] <== sample[i] */
    _compIdx_7 = ctx->getSubComponentOffset(__cIdx, 0x505240cb15bc5fd1LL /* outerProd */);
    _trainSample_sigIdx_ = ctx->getSignalOffset(_compIdx_7, 0xde77239a78f93d93LL /* trainSample */);
    _sigSizes_trainSample = ctx->getSignalSizes(_compIdx_7, 0xde77239a78f93d93LL /* trainSample */);
    _offset_100 = _trainSample_sigIdx_;
    _offset_102 = _sample_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_102, _sigValue_7, 1);
    ctx->setSignal(__cIdx, _compIdx_7, _offset_100, _sigValue_7);
    _loopCond_5 = _tmp_35;
    while (Fr_isTrue(_loopCond_5)) {
        /* outerProd.trainSample[i] <== sample[i] */
        _compIdx_8 = ctx->getSubComponentOffset(__cIdx, 0x505240cb15bc5fd1LL /* outerProd */);
        _trainSample_sigIdx__1 = ctx->getSignalOffset(_compIdx_8, 0xde77239a78f93d93LL /* trainSample */);
        _sigSizes_trainSample_1 = ctx->getSignalSizes(_compIdx_8, 0xde77239a78f93d93LL /* trainSample */);
        _offset_108 = _trainSample_sigIdx__1 + Fr_toInt(i_3)*_sigSizes_trainSample_1[1];
        _offset_110 = _sample_sigIdx_ + Fr_toInt(i_3)*_sigSizes_sample[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_110, _sigValue_8, 1);
        ctx->setSignal(__cIdx, _compIdx_8, _offset_108, _sigValue_8);
        Fr_copyn(_tmp_37, i_3, 1);
        Fr_add(_tmp_36, i_3, (ctx->circuit->constants + 1));
        Fr_copyn(i_3, _tmp_36, 1);
        Fr_lt(_tmp_38, i_3, (ctx->circuit->constants + 2));
        _loopCond_5 = _tmp_38;
    }
    /* for (var i = 0;i < outputDim;i ++) */
    /* outerProd.error[i] <== error[i] */
    _compIdx_9 = ctx->getSubComponentOffset(__cIdx, 0x505240cb15bc5fd1LL /* outerProd */);
    _error_sigIdx__3 = ctx->getSignalOffset(_compIdx_9, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_error_3 = ctx->getSignalSizes(_compIdx_9, 0x9f7452dd75d54d31LL /* error */);
    _offset_119 = _error_sigIdx__3;
    _offset_121 = _error_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_121, _sigValue_9, 1);
    ctx->setSignal(__cIdx, _compIdx_9, _offset_119, _sigValue_9);
    _loopCond_6 = _tmp_42;
    while (Fr_isTrue(_loopCond_6)) {
        /* outerProd.error[i] <== error[i] */
        _compIdx_10 = ctx->getSubComponentOffset(__cIdx, 0x505240cb15bc5fd1LL /* outerProd */);
        _error_sigIdx__4 = ctx->getSignalOffset(_compIdx_10, 0x9f7452dd75d54d31LL /* error */);
        _sigSizes_error_4 = ctx->getSignalSizes(_compIdx_10, 0x9f7452dd75d54d31LL /* error */);
        _offset_127 = _error_sigIdx__4 + Fr_toInt(i_4)*_sigSizes_error_4[1];
        _offset_129 = _error_sigIdx__1 + Fr_toInt(i_4)*_sigSizes_error_1[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_129, _sigValue_10, 1);
        ctx->setSignal(__cIdx, _compIdx_10, _offset_127, _sigValue_10);
        Fr_copyn(_tmp_44, i_4, 1);
        Fr_add(_tmp_43, i_4, (ctx->circuit->constants + 1));
        Fr_copyn(i_4, _tmp_43, 1);
        Fr_lt(_tmp_45, i_4, (ctx->circuit->constants + 3));
        _loopCond_6 = _tmp_45;
    }
    /* for (var i = 0;i < inputDim;i++) */
    /* for (var j = 0;j < outputDim;j ++) */
    /* weightsError[i][j] <== outerProd.outerProdOut[i][j] */
    _compIdx_11 = ctx->getSubComponentOffset(__cIdx, 0x505240cb15bc5fd1LL /* outerProd */);
    _outerProdOut_sigIdx_ = ctx->getSignalOffset(_compIdx_11, 0x76a529b12a0eeb4bLL /* outerProdOut */);
    _sigSizes_outerProdOut = ctx->getSignalSizes(_compIdx_11, 0x76a529b12a0eeb4bLL /* outerProdOut */);
    _offset_142 = _outerProdOut_sigIdx_;
    ctx->multiGetSignal(__cIdx, _compIdx_11, _offset_142, _sigValue_11, 1);
    _offset_145 = _weightsError_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_145, _sigValue_11);
    _loopCond_7 = _tmp_50;
    while (Fr_isTrue(_loopCond_7)) {
        /* weightsError[i][j] <== outerProd.outerProdOut[i][j] */
        _compIdx_12 = ctx->getSubComponentOffset(__cIdx, 0x505240cb15bc5fd1LL /* outerProd */);
        _outerProdOut_sigIdx__1 = ctx->getSignalOffset(_compIdx_12, 0x76a529b12a0eeb4bLL /* outerProdOut */);
        _sigSizes_outerProdOut_1 = ctx->getSignalSizes(_compIdx_12, 0x76a529b12a0eeb4bLL /* outerProdOut */);
        _offset_152 = _outerProdOut_sigIdx__1 + Fr_toInt(j_1)*_sigSizes_outerProdOut_1[2];
        ctx->multiGetSignal(__cIdx, _compIdx_12, _offset_152, _sigValue_12, 1);
        _offset_155 = _weightsError_sigIdx_ + Fr_toInt(j_1)*_sigSizes_weightsError[2];
        ctx->setSignal(__cIdx, __cIdx, _offset_155, _sigValue_12);
        Fr_copyn(_tmp_52, j_1, 1);
        Fr_add(_tmp_51, j_1, (ctx->circuit->constants + 1));
        Fr_copyn(j_1, _tmp_51, 1);
        Fr_lt(_tmp_53, j_1, (ctx->circuit->constants + 3));
        _loopCond_7 = _tmp_53;
    }
    _loopCond_8 = _tmp_56;
    while (Fr_isTrue(_loopCond_8)) {
        /* for (var j = 0;j < outputDim;j ++) */
        Fr_copyn(j_1, _num_9, 1);
        Fr_lt(_tmp_57, j_1, (ctx->circuit->constants + 3));
        _loopCond_9 = _tmp_57;
        while (Fr_isTrue(_loopCond_9)) {
            /* weightsError[i][j] <== outerProd.outerProdOut[i][j] */
            _compIdx_13 = ctx->getSubComponentOffset(__cIdx, 0x505240cb15bc5fd1LL /* outerProd */);
            _outerProdOut_sigIdx__2 = ctx->getSignalOffset(_compIdx_13, 0x76a529b12a0eeb4bLL /* outerProdOut */);
            _sigSizes_outerProdOut_2 = ctx->getSignalSizes(_compIdx_13, 0x76a529b12a0eeb4bLL /* outerProdOut */);
            _offset_169 = _outerProdOut_sigIdx__2 + Fr_toInt(i_5)*_sigSizes_outerProdOut_2[1] + Fr_toInt(j_1)*_sigSizes_outerProdOut_2[2];
            ctx->multiGetSignal(__cIdx, _compIdx_13, _offset_169, _sigValue_13, 1);
            _offset_172 = _weightsError_sigIdx_ + Fr_toInt(i_5)*_sigSizes_weightsError[1] + Fr_toInt(j_1)*_sigSizes_weightsError[2];
            ctx->setSignal(__cIdx, __cIdx, _offset_172, _sigValue_13);
            Fr_copyn(_tmp_59, j_1, 1);
            Fr_add(_tmp_58, j_1, (ctx->circuit->constants + 1));
            Fr_copyn(j_1, _tmp_58, 1);
            Fr_lt(_tmp_60, j_1, (ctx->circuit->constants + 3));
            _loopCond_9 = _tmp_60;
        }
        Fr_copyn(_tmp_62, i_5, 1);
        Fr_add(_tmp_61, i_5, (ctx->circuit->constants + 1));
        Fr_copyn(i_5, _tmp_61, 1);
        Fr_lt(_tmp_63, i_5, (ctx->circuit->constants + 2));
        _loopCond_8 = _tmp_63;
    }
    /* for (var i = 0;i < inputDim;i++) */
    /* for (var j = 0;j < outputDim;j ++) */
    /* updatedWeights[i][j] <== weights[i][j] - weightsError[i][j]/learningRate */
    _offset_189 = _weights_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_189, _sigValue_14, 1);
    _offset_192 = _weightsError_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_192, _sigValue_15, 1);
    Fr_div(_tmp_66, _sigValue_15, (ctx->circuit->constants + 6));
    Fr_sub(_tmp_67, _sigValue_14, _tmp_66);
    _offset_196 = _updatedWeights_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_196, _tmp_67);
    _loopCond_10 = _tmp_70;
    while (Fr_isTrue(_loopCond_10)) {
        /* updatedWeights[i][j] <== weights[i][j] - weightsError[i][j]/learningRate */
        _offset_203 = _weights_sigIdx__1 + Fr_toInt(j_2)*_sigSizes_weights_1[2];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_203, _sigValue_16, 1);
        _offset_206 = _weightsError_sigIdx_ + Fr_toInt(j_2)*_sigSizes_weightsError[2];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_206, _sigValue_17, 1);
        Fr_div(_tmp_71, _sigValue_17, (ctx->circuit->constants + 6));
        Fr_sub(_tmp_72, _sigValue_16, _tmp_71);
        _offset_210 = _updatedWeights_sigIdx_ + Fr_toInt(j_2)*_sigSizes_updatedWeights[2];
        ctx->setSignal(__cIdx, __cIdx, _offset_210, _tmp_72);
        Fr_copyn(_tmp_74, j_2, 1);
        Fr_add(_tmp_73, j_2, (ctx->circuit->constants + 1));
        Fr_copyn(j_2, _tmp_73, 1);
        Fr_lt(_tmp_75, j_2, (ctx->circuit->constants + 3));
        _loopCond_10 = _tmp_75;
    }
    _loopCond_11 = _tmp_78;
    while (Fr_isTrue(_loopCond_11)) {
        /* for (var j = 0;j < outputDim;j ++) */
        Fr_copyn(j_2, _num_12, 1);
        Fr_lt(_tmp_79, j_2, (ctx->circuit->constants + 3));
        _loopCond_12 = _tmp_79;
        while (Fr_isTrue(_loopCond_12)) {
            /* updatedWeights[i][j] <== weights[i][j] - weightsError[i][j]/learningRate */
            _offset_224 = _weights_sigIdx__1 + Fr_toInt(i_6)*_sigSizes_weights_1[1] + Fr_toInt(j_2)*_sigSizes_weights_1[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_224, _sigValue_18, 1);
            _offset_227 = _weightsError_sigIdx_ + Fr_toInt(i_6)*_sigSizes_weightsError[1] + Fr_toInt(j_2)*_sigSizes_weightsError[2];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_227, _sigValue_19, 1);
            Fr_div(_tmp_80, _sigValue_19, (ctx->circuit->constants + 6));
            Fr_sub(_tmp_81, _sigValue_18, _tmp_80);
            _offset_231 = _updatedWeights_sigIdx_ + Fr_toInt(i_6)*_sigSizes_updatedWeights[1] + Fr_toInt(j_2)*_sigSizes_updatedWeights[2];
            ctx->setSignal(__cIdx, __cIdx, _offset_231, _tmp_81);
            Fr_copyn(_tmp_83, j_2, 1);
            Fr_add(_tmp_82, j_2, (ctx->circuit->constants + 1));
            Fr_copyn(j_2, _tmp_82, 1);
            Fr_lt(_tmp_84, j_2, (ctx->circuit->constants + 3));
            _loopCond_12 = _tmp_84;
        }
        Fr_copyn(_tmp_86, i_6, 1);
        Fr_add(_tmp_85, i_6, (ctx->circuit->constants + 1));
        Fr_copyn(i_6, _tmp_85, 1);
        Fr_lt(_tmp_87, i_6, (ctx->circuit->constants + 2));
        _loopCond_11 = _tmp_87;
    }
    /* component updateBias = biasUpdate(learningRate, outputDim) */
    /* for (var i = 0;i < outputDim;i ++) */
    /* updateBias.bias[i] <== bias[i] */
    _compIdx_14 = ctx->getSubComponentOffset(__cIdx, 0x780d658d4d9eb519LL /* updateBias */);
    _bias_sigIdx_ = ctx->getSignalOffset(_compIdx_14, 0xdeb23f9bd0a849a4LL /* bias */);
    _sigSizes_bias = ctx->getSignalSizes(_compIdx_14, 0xdeb23f9bd0a849a4LL /* bias */);
    _offset_244 = _bias_sigIdx_;
    _offset_246 = _bias_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_246, _sigValue_20, 1);
    ctx->setSignal(__cIdx, _compIdx_14, _offset_244, _sigValue_20);
    /* updateBias.error[i] <== error[i] */
    _compIdx_15 = ctx->getSubComponentOffset(__cIdx, 0x780d658d4d9eb519LL /* updateBias */);
    _error_sigIdx__5 = ctx->getSignalOffset(_compIdx_15, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_error_5 = ctx->getSignalSizes(_compIdx_15, 0x9f7452dd75d54d31LL /* error */);
    _offset_248 = _error_sigIdx__5;
    _offset_250 = _error_sigIdx__1;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_250, _sigValue_21, 1);
    ctx->setSignal(__cIdx, _compIdx_15, _offset_248, _sigValue_21);
    _loopCond_13 = _tmp_91;
    while (Fr_isTrue(_loopCond_13)) {
        /* updateBias.bias[i] <== bias[i] */
        _compIdx_16 = ctx->getSubComponentOffset(__cIdx, 0x780d658d4d9eb519LL /* updateBias */);
        _bias_sigIdx__2 = ctx->getSignalOffset(_compIdx_16, 0xdeb23f9bd0a849a4LL /* bias */);
        _sigSizes_bias_2 = ctx->getSignalSizes(_compIdx_16, 0xdeb23f9bd0a849a4LL /* bias */);
        _offset_256 = _bias_sigIdx__2 + Fr_toInt(i_7)*_sigSizes_bias_2[1];
        _offset_258 = _bias_sigIdx__1 + Fr_toInt(i_7)*_sigSizes_bias_1[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_258, _sigValue_22, 1);
        ctx->setSignal(__cIdx, _compIdx_16, _offset_256, _sigValue_22);
        /* updateBias.error[i] <== error[i] */
        _compIdx_17 = ctx->getSubComponentOffset(__cIdx, 0x780d658d4d9eb519LL /* updateBias */);
        _error_sigIdx__6 = ctx->getSignalOffset(_compIdx_17, 0x9f7452dd75d54d31LL /* error */);
        _sigSizes_error_6 = ctx->getSignalSizes(_compIdx_17, 0x9f7452dd75d54d31LL /* error */);
        _offset_260 = _error_sigIdx__6 + Fr_toInt(i_7)*_sigSizes_error_6[1];
        _offset_262 = _error_sigIdx__1 + Fr_toInt(i_7)*_sigSizes_error_1[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_262, _sigValue_23, 1);
        ctx->setSignal(__cIdx, _compIdx_17, _offset_260, _sigValue_23);
        Fr_copyn(_tmp_93, i_7, 1);
        Fr_add(_tmp_92, i_7, (ctx->circuit->constants + 1));
        Fr_copyn(i_7, _tmp_92, 1);
        Fr_lt(_tmp_94, i_7, (ctx->circuit->constants + 3));
        _loopCond_13 = _tmp_94;
    }
    /* for (var i = 0;i < outputDim;i ++) */
    /* updatedBias[i] <== updateBias.updatedBias[i] */
    _compIdx_18 = ctx->getSubComponentOffset(__cIdx, 0x780d658d4d9eb519LL /* updateBias */);
    _updatedBias_sigIdx_ = ctx->getSignalOffset(_compIdx_18, 0xb30254661e3a4a35LL /* updatedBias */);
    _sigSizes_updatedBias = ctx->getSignalSizes(_compIdx_18, 0xb30254661e3a4a35LL /* updatedBias */);
    _offset_271 = _updatedBias_sigIdx_;
    ctx->multiGetSignal(__cIdx, _compIdx_18, _offset_271, _sigValue_24, 1);
    _offset_273 = _updatedBias_sigIdx__1;
    ctx->setSignal(__cIdx, __cIdx, _offset_273, _sigValue_24);
    _loopCond_14 = _tmp_98;
    while (Fr_isTrue(_loopCond_14)) {
        /* updatedBias[i] <== updateBias.updatedBias[i] */
        _compIdx_19 = ctx->getSubComponentOffset(__cIdx, 0x780d658d4d9eb519LL /* updateBias */);
        _updatedBias_sigIdx__2 = ctx->getSignalOffset(_compIdx_19, 0xb30254661e3a4a35LL /* updatedBias */);
        _sigSizes_updatedBias_2 = ctx->getSignalSizes(_compIdx_19, 0xb30254661e3a4a35LL /* updatedBias */);
        _offset_279 = _updatedBias_sigIdx__2 + Fr_toInt(i_8)*_sigSizes_updatedBias_2[1];
        ctx->multiGetSignal(__cIdx, _compIdx_19, _offset_279, _sigValue_25, 1);
        _offset_281 = _updatedBias_sigIdx__1 + Fr_toInt(i_8)*_sigSizes_updatedBias_1[1];
        ctx->setSignal(__cIdx, __cIdx, _offset_281, _sigValue_25);
        Fr_copyn(_tmp_100, i_8, 1);
        Fr_add(_tmp_99, i_8, (ctx->circuit->constants + 1));
        Fr_copyn(i_8, _tmp_99, 1);
        Fr_lt(_tmp_101, i_8, (ctx->circuit->constants + 3));
        _loopCond_14 = _tmp_101;
    }
    ctx->finished(__cIdx);
}
/*
dotProduct
inputDim=100
outputDim=2
*/
void dotProduct_70d2f19a631c4783(Circom_CalcWit *ctx, int __cIdx) {
    FrElement _sigValue[2];
    FrElement w[2];
    FrElement _sigValue_1[1];
    FrElement _sigValue_2[1];
    FrElement temp[1];
    FrElement _tmp_2[1];
    FrElement s[1];
    FrElement _tmp_5[1];
    FrElement j[1];
    FrElement _sigValue_3[1];
    FrElement _sigValue_4[1];
    FrElement _tmp_6[1];
    FrElement _tmp_8[1];
    FrElement _tmp_7[1];
    FrElement _tmp_9[1];
    FrElement _tmp_12[1];
    FrElement i[1];
    FrElement _sigValue_5[2];
    FrElement _num_3[1];
    FrElement _num_4[1];
    FrElement _tmp_13[1];
    FrElement _sigValue_6[1];
    FrElement _sigValue_7[1];
    FrElement _tmp_14[1];
    FrElement _tmp_16[1];
    FrElement _tmp_15[1];
    FrElement _tmp_17[1];
    FrElement _tmp_19[1];
    FrElement _tmp_18[1];
    FrElement _tmp_20[1];
    int _weights_sigIdx_;
    int _offset_9;
    int _compIdx;
    int _a_sigIdx_;
    int _compIdx_1;
    int _b_sigIdx_;
    int _error_sigIdx_;
    int _offset_18;
    int _compIdx_2;
    int _c_sigIdx_;
    int _compIdx_3;
    int _a_sigIdx__1;
    int _offset_28;
    int _compIdx_4;
    int _b_sigIdx__1;
    int _offset_30;
    int _compIdx_5;
    int _c_sigIdx__1;
    int _dotProdOut_sigIdx_;
    int _offset_41;
    int _offset_47;
    int _compIdx_6;
    int _a_sigIdx__2;
    int _offset_54;
    int _compIdx_7;
    int _b_sigIdx__2;
    int _offset_56;
    int _compIdx_8;
    int _c_sigIdx__2;
    int _offset_67;
    Circom_Sizes _sigSizes_weights;
    Circom_Sizes _sigSizes_error;
    Circom_Sizes _sigSizes_dotProdOut;
    PFrElement _v_11;
    PFrElement _loopCond;
    PFrElement _v_17;
    PFrElement _loopCond_1;
    PFrElement _loopCond_2;
    PFrElement _v_24;
    Fr_copy(&(_tmp_5[0]), ctx->circuit->constants +1);
    Fr_copy(&(j[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_12[0]), ctx->circuit->constants +1);
    Fr_copy(&(i[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_3[0]), ctx->circuit->constants +0);
    Fr_copy(&(_num_4[0]), ctx->circuit->constants +0);
    _weights_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xb1494b6ef08a411eLL /* weights */);
    _error_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    _dotProdOut_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x16a6407ffe97c5f7LL /* dotProdOut */);
    _sigSizes_weights = ctx->getSignalSizes(__cIdx, 0xb1494b6ef08a411eLL /* weights */);
    _sigSizes_error = ctx->getSignalSizes(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_dotProdOut = ctx->getSignalSizes(__cIdx, 0x16a6407ffe97c5f7LL /* dotProdOut */);
    /* signal input weights[inputDim][outputDim] */
    /* signal input error[outputDim] */
    /* signal output dotProdOut[inputDim] */
    /* var w[outputDim] */
    /* var s */
    /* var temp */
    /* for (var i = 0;i < inputDim;i ++) */
    /* w = weights[i] */
    _offset_9 = _weights_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_9, _sigValue, 2);
    Fr_copyn(w, _sigValue, 2);
    /* s = 0 */
    /* for (var j = 0;j < outputDim;j ++) */
    /* component mult = Multiplier() */
    /* mult.a <== w[j] */
    _compIdx = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
    _a_sigIdx_ = ctx->getSignalOffset(_compIdx, 0xaf63dc4c8601ec8cLL /* a */);
    _v_11 = w;
    ctx->setSignal(__cIdx, _compIdx, _a_sigIdx_, _v_11);
    /* mult.b <== error[j] */
    _compIdx_1 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
    _b_sigIdx_ = ctx->getSignalOffset(_compIdx_1, 0xaf63df4c8601f1a5LL /* b */);
    _offset_18 = _error_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_18, _sigValue_1, 1);
    ctx->setSignal(__cIdx, _compIdx_1, _b_sigIdx_, _sigValue_1);
    /* temp = mult.c */
    _compIdx_2 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
    _c_sigIdx_ = ctx->getSignalOffset(_compIdx_2, 0xaf63de4c8601eff2LL /* c */);
    ctx->multiGetSignal(__cIdx, _compIdx_2, _c_sigIdx_, _sigValue_2, 1);
    Fr_copyn(temp, _sigValue_2, 1);
    /* s += temp */
    Fr_add(_tmp_2, (ctx->circuit->constants + 0), temp);
    Fr_copyn(s, _tmp_2, 1);
    _loopCond = _tmp_5;
    while (Fr_isTrue(_loopCond)) {
        /* component mult = Multiplier() */
        /* mult.a <== w[j] */
        _compIdx_3 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
        _a_sigIdx__1 = ctx->getSignalOffset(_compIdx_3, 0xaf63dc4c8601ec8cLL /* a */);
        _offset_28 = Fr_toInt(j);
        _v_17 = w + _offset_28;
        ctx->setSignal(__cIdx, _compIdx_3, _a_sigIdx__1, _v_17);
        /* mult.b <== error[j] */
        _compIdx_4 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
        _b_sigIdx__1 = ctx->getSignalOffset(_compIdx_4, 0xaf63df4c8601f1a5LL /* b */);
        _offset_30 = _error_sigIdx_ + Fr_toInt(j)*_sigSizes_error[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_30, _sigValue_3, 1);
        ctx->setSignal(__cIdx, _compIdx_4, _b_sigIdx__1, _sigValue_3);
        /* temp = mult.c */
        _compIdx_5 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
        _c_sigIdx__1 = ctx->getSignalOffset(_compIdx_5, 0xaf63de4c8601eff2LL /* c */);
        ctx->multiGetSignal(__cIdx, _compIdx_5, _c_sigIdx__1, _sigValue_4, 1);
        Fr_copyn(temp, _sigValue_4, 1);
        /* s += temp */
        Fr_add(_tmp_6, s, temp);
        Fr_copyn(s, _tmp_6, 1);
        Fr_copyn(_tmp_8, j, 1);
        Fr_add(_tmp_7, j, (ctx->circuit->constants + 1));
        Fr_copyn(j, _tmp_7, 1);
        Fr_lt(_tmp_9, j, (ctx->circuit->constants + 3));
        _loopCond = _tmp_9;
    }
    /* dotProdOut[i] <== s */
    _offset_41 = _dotProdOut_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_41, s);
    _loopCond_1 = _tmp_12;
    while (Fr_isTrue(_loopCond_1)) {
        /* w = weights[i] */
        _offset_47 = _weights_sigIdx_ + Fr_toInt(i)*_sigSizes_weights[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_47, _sigValue_5, 2);
        Fr_copyn(w, _sigValue_5, 2);
        /* s = 0 */
        Fr_copyn(s, _num_3, 1);
        /* for (var j = 0;j < outputDim;j ++) */
        Fr_copyn(j, _num_4, 1);
        Fr_lt(_tmp_13, j, (ctx->circuit->constants + 3));
        _loopCond_2 = _tmp_13;
        while (Fr_isTrue(_loopCond_2)) {
            /* component mult = Multiplier() */
            /* mult.a <== w[j] */
            _compIdx_6 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
            _a_sigIdx__2 = ctx->getSignalOffset(_compIdx_6, 0xaf63dc4c8601ec8cLL /* a */);
            _offset_54 = Fr_toInt(j);
            _v_24 = w + _offset_54;
            ctx->setSignal(__cIdx, _compIdx_6, _a_sigIdx__2, _v_24);
            /* mult.b <== error[j] */
            _compIdx_7 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
            _b_sigIdx__2 = ctx->getSignalOffset(_compIdx_7, 0xaf63df4c8601f1a5LL /* b */);
            _offset_56 = _error_sigIdx_ + Fr_toInt(j)*_sigSizes_error[1];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_56, _sigValue_6, 1);
            ctx->setSignal(__cIdx, _compIdx_7, _b_sigIdx__2, _sigValue_6);
            /* temp = mult.c */
            _compIdx_8 = ctx->getSubComponentOffset(__cIdx, 0xb6ba5ea29324f12fLL /* mult */);
            _c_sigIdx__2 = ctx->getSignalOffset(_compIdx_8, 0xaf63de4c8601eff2LL /* c */);
            ctx->multiGetSignal(__cIdx, _compIdx_8, _c_sigIdx__2, _sigValue_7, 1);
            Fr_copyn(temp, _sigValue_7, 1);
            /* s += temp */
            Fr_add(_tmp_14, s, temp);
            Fr_copyn(s, _tmp_14, 1);
            Fr_copyn(_tmp_16, j, 1);
            Fr_add(_tmp_15, j, (ctx->circuit->constants + 1));
            Fr_copyn(j, _tmp_15, 1);
            Fr_lt(_tmp_17, j, (ctx->circuit->constants + 3));
            _loopCond_2 = _tmp_17;
        }
        /* dotProdOut[i] <== s */
        _offset_67 = _dotProdOut_sigIdx_ + Fr_toInt(i)*_sigSizes_dotProdOut[1];
        ctx->setSignal(__cIdx, __cIdx, _offset_67, s);
        Fr_copyn(_tmp_19, i, 1);
        Fr_add(_tmp_18, i, (ctx->circuit->constants + 1));
        Fr_copyn(i, _tmp_18, 1);
        Fr_lt(_tmp_20, i, (ctx->circuit->constants + 2));
        _loopCond_1 = _tmp_20;
    }
    ctx->finished(__cIdx);
}
/*
outerProduct
inputDim=100
outputDim=2
*/
void outerProduct_ff0490f9771b98e7(Circom_CalcWit *ctx, int __cIdx) {
    FrElement _sigValue[1];
    FrElement element[1];
    FrElement _sigValue_1[1];
    FrElement _tmp_2[1];
    FrElement _tmp_5[1];
    FrElement j[1];
    FrElement _sigValue_2[1];
    FrElement _tmp_6[1];
    FrElement _tmp_8[1];
    FrElement _tmp_7[1];
    FrElement _tmp_9[1];
    FrElement _tmp_12[1];
    FrElement i[1];
    FrElement _sigValue_3[1];
    FrElement _num_2[1];
    FrElement _tmp_13[1];
    FrElement _sigValue_4[1];
    FrElement _tmp_14[1];
    FrElement _tmp_16[1];
    FrElement _tmp_15[1];
    FrElement _tmp_17[1];
    FrElement _tmp_19[1];
    FrElement _tmp_18[1];
    FrElement _tmp_20[1];
    int _trainSample_sigIdx_;
    int _offset_8;
    int _error_sigIdx_;
    int _offset_15;
    int _outerProdOut_sigIdx_;
    int _offset_18;
    int _offset_25;
    int _offset_28;
    int _offset_38;
    int _offset_45;
    int _offset_48;
    Circom_Sizes _sigSizes_trainSample;
    Circom_Sizes _sigSizes_error;
    Circom_Sizes _sigSizes_outerProdOut;
    PFrElement _loopCond;
    PFrElement _loopCond_1;
    PFrElement _loopCond_2;
    Fr_copy(&(_tmp_5[0]), ctx->circuit->constants +1);
    Fr_copy(&(j[0]), ctx->circuit->constants +1);
    Fr_copy(&(_tmp_12[0]), ctx->circuit->constants +1);
    Fr_copy(&(i[0]), ctx->circuit->constants +1);
    Fr_copy(&(_num_2[0]), ctx->circuit->constants +0);
    _trainSample_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xde77239a78f93d93LL /* trainSample */);
    _error_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    _outerProdOut_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x76a529b12a0eeb4bLL /* outerProdOut */);
    _sigSizes_trainSample = ctx->getSignalSizes(__cIdx, 0xde77239a78f93d93LL /* trainSample */);
    _sigSizes_error = ctx->getSignalSizes(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_outerProdOut = ctx->getSignalSizes(__cIdx, 0x76a529b12a0eeb4bLL /* outerProdOut */);
    /* signal input trainSample[inputDim] */
    /* signal input error[outputDim] */
    /* signal output outerProdOut[inputDim][outputDim] */
    /* var element */
    /* for (var i = 0;i < inputDim;i ++) */
    /* element = trainSample[i] */
    _offset_8 = _trainSample_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_8, _sigValue, 1);
    Fr_copyn(element, _sigValue, 1);
    /* for (var j = 0;j < outputDim;j ++) */
    /* outerProdOut[i][j] <== element * error[j] */
    _offset_15 = _error_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_15, _sigValue_1, 1);
    Fr_mul(_tmp_2, element, _sigValue_1);
    _offset_18 = _outerProdOut_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_18, _tmp_2);
    _loopCond = _tmp_5;
    while (Fr_isTrue(_loopCond)) {
        /* outerProdOut[i][j] <== element * error[j] */
        _offset_25 = _error_sigIdx_ + Fr_toInt(j)*_sigSizes_error[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_25, _sigValue_2, 1);
        Fr_mul(_tmp_6, element, _sigValue_2);
        _offset_28 = _outerProdOut_sigIdx_ + Fr_toInt(j)*_sigSizes_outerProdOut[2];
        ctx->setSignal(__cIdx, __cIdx, _offset_28, _tmp_6);
        Fr_copyn(_tmp_8, j, 1);
        Fr_add(_tmp_7, j, (ctx->circuit->constants + 1));
        Fr_copyn(j, _tmp_7, 1);
        Fr_lt(_tmp_9, j, (ctx->circuit->constants + 3));
        _loopCond = _tmp_9;
    }
    _loopCond_1 = _tmp_12;
    while (Fr_isTrue(_loopCond_1)) {
        /* element = trainSample[i] */
        _offset_38 = _trainSample_sigIdx_ + Fr_toInt(i)*_sigSizes_trainSample[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_38, _sigValue_3, 1);
        Fr_copyn(element, _sigValue_3, 1);
        /* for (var j = 0;j < outputDim;j ++) */
        Fr_copyn(j, _num_2, 1);
        Fr_lt(_tmp_13, j, (ctx->circuit->constants + 3));
        _loopCond_2 = _tmp_13;
        while (Fr_isTrue(_loopCond_2)) {
            /* outerProdOut[i][j] <== element * error[j] */
            _offset_45 = _error_sigIdx_ + Fr_toInt(j)*_sigSizes_error[1];
            ctx->multiGetSignal(__cIdx, __cIdx, _offset_45, _sigValue_4, 1);
            Fr_mul(_tmp_14, element, _sigValue_4);
            _offset_48 = _outerProdOut_sigIdx_ + Fr_toInt(i)*_sigSizes_outerProdOut[1] + Fr_toInt(j)*_sigSizes_outerProdOut[2];
            ctx->setSignal(__cIdx, __cIdx, _offset_48, _tmp_14);
            Fr_copyn(_tmp_16, j, 1);
            Fr_add(_tmp_15, j, (ctx->circuit->constants + 1));
            Fr_copyn(j, _tmp_15, 1);
            Fr_lt(_tmp_17, j, (ctx->circuit->constants + 3));
            _loopCond_2 = _tmp_17;
        }
        Fr_copyn(_tmp_19, i, 1);
        Fr_add(_tmp_18, i, (ctx->circuit->constants + 1));
        Fr_copyn(i, _tmp_18, 1);
        Fr_lt(_tmp_20, i, (ctx->circuit->constants + 2));
        _loopCond_1 = _tmp_20;
    }
    ctx->finished(__cIdx);
}
/*
biasUpdate
learningRate=10
outputDim=2
*/
void biasUpdate_ea571ba59847c0c5(Circom_CalcWit *ctx, int __cIdx) {
    FrElement _sigValue[1];
    FrElement _sigValue_1[1];
    FrElement _tmp_1[1];
    FrElement _tmp_2[1];
    FrElement _tmp_5[1];
    FrElement i[1];
    FrElement _sigValue_2[1];
    FrElement _sigValue_3[1];
    FrElement _tmp_6[1];
    FrElement _tmp_7[1];
    FrElement _tmp_9[1];
    FrElement _tmp_8[1];
    FrElement _tmp_10[1];
    int _bias_sigIdx_;
    int _offset_7;
    int _error_sigIdx_;
    int _offset_9;
    int _updatedBias_sigIdx_;
    int _offset_12;
    int _offset_18;
    int _offset_20;
    int _offset_23;
    Circom_Sizes _sigSizes_bias;
    Circom_Sizes _sigSizes_error;
    Circom_Sizes _sigSizes_updatedBias;
    PFrElement _loopCond;
    Fr_copy(&(_tmp_5[0]), ctx->circuit->constants +1);
    Fr_copy(&(i[0]), ctx->circuit->constants +1);
    _bias_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xdeb23f9bd0a849a4LL /* bias */);
    _error_sigIdx_ = ctx->getSignalOffset(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    _updatedBias_sigIdx_ = ctx->getSignalOffset(__cIdx, 0xb30254661e3a4a35LL /* updatedBias */);
    _sigSizes_bias = ctx->getSignalSizes(__cIdx, 0xdeb23f9bd0a849a4LL /* bias */);
    _sigSizes_error = ctx->getSignalSizes(__cIdx, 0x9f7452dd75d54d31LL /* error */);
    _sigSizes_updatedBias = ctx->getSignalSizes(__cIdx, 0xb30254661e3a4a35LL /* updatedBias */);
    /* signal input bias[outputDim] */
    /* signal input error[outputDim] */
    /* signal output updatedBias[outputDim] */
    /* for (var i = 0;i < outputDim;i ++) */
    /* updatedBias[i] <== bias[i] - error[i]/learningRate */
    _offset_7 = _bias_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_7, _sigValue, 1);
    _offset_9 = _error_sigIdx_;
    ctx->multiGetSignal(__cIdx, __cIdx, _offset_9, _sigValue_1, 1);
    Fr_div(_tmp_1, _sigValue_1, (ctx->circuit->constants + 6));
    Fr_sub(_tmp_2, _sigValue, _tmp_1);
    _offset_12 = _updatedBias_sigIdx_;
    ctx->setSignal(__cIdx, __cIdx, _offset_12, _tmp_2);
    _loopCond = _tmp_5;
    while (Fr_isTrue(_loopCond)) {
        /* updatedBias[i] <== bias[i] - error[i]/learningRate */
        _offset_18 = _bias_sigIdx_ + Fr_toInt(i)*_sigSizes_bias[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_18, _sigValue_2, 1);
        _offset_20 = _error_sigIdx_ + Fr_toInt(i)*_sigSizes_error[1];
        ctx->multiGetSignal(__cIdx, __cIdx, _offset_20, _sigValue_3, 1);
        Fr_div(_tmp_6, _sigValue_3, (ctx->circuit->constants + 6));
        Fr_sub(_tmp_7, _sigValue_2, _tmp_6);
        _offset_23 = _updatedBias_sigIdx_ + Fr_toInt(i)*_sigSizes_updatedBias[1];
        ctx->setSignal(__cIdx, __cIdx, _offset_23, _tmp_7);
        Fr_copyn(_tmp_9, i, 1);
        Fr_add(_tmp_8, i, (ctx->circuit->constants + 1));
        Fr_copyn(i, _tmp_8, 1);
        Fr_lt(_tmp_10, i, (ctx->circuit->constants + 3));
        _loopCond = _tmp_10;
    }
    ctx->finished(__cIdx);
}
// Function Table
Circom_ComponentFunction _functionTable[8] = {
     learningIteration_4bbf9e3fcf2e9eea
    ,forward_121ebc6982f01b58
    ,Multiplier_1535d858d77698a6
    ,MSEPrime_9ee6bfc82432c18f
    ,backward_34ba949691bcf6d2
    ,dotProduct_70d2f19a631c4783
    ,outerProduct_ff0490f9771b98e7
    ,biasUpdate_ea571ba59847c0c5
};
