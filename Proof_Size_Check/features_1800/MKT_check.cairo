
%builtins output pedersen
from starkware.cairo.common.cairo_builtins import HashBuiltin
from starkware.cairo.common.hash import hash2
from starkware.cairo.common.alloc import alloc
from starkware.cairo.common.serialize import serialize_word

const MERKLE_TREE_ROOT = 1280224048157097320499986606897225581989093068073305772797408297230281296692;

func matrix_flattening( m : felt ** , step : felt , row : felt , col : felt , cols : felt , res : felt *){
	alloc_locals;
	if (step == 0){
		return ();
	}
	local i;
	local j;
	if (col == cols - 1){
		assert i = row + 1;
		assert j = 0;
	
	} else {
		assert i = row;
		assert j = col + 1;
	}
	assert [ res ] = [[ m + row ] + col ];
	return matrix_flattening( m =m , step = step - 1 , row =i , col =j , cols = cols , res = res + 1);
}

func build_merkle_tree_level { hash_ptr : HashBuiltin *}( array : felt * , index : felt , res : felt *){
	alloc_locals;
	if (index == 0) {
		return();
	}
	
	
	let ( hash ) = hash2{hash_ptr=hash_ptr}([ array ] , [ array + 1]);
	assert [ res ] = hash;
	return build_merkle_tree_level( array = array + 2 , index = index - 2 , res = res + 1);
}


func build_merkle_root{ hash_ptr : HashBuiltin *}( counter : felt , res : felt **) -> ( merkle_root : felt ){
	alloc_locals;

	
	
	if (counter == 1) {
		return ( merkle_root =[[ res - 1]]);
	}
	
	let ( local newRow : felt *) = alloc();

	
	assert [ res ] = newRow;
	
	build_merkle_tree_level{hash_ptr=hash_ptr}( array =[ res - 1] , index = counter , res = newRow );
	
	let ( merkle_root ) = build_merkle_root ( counter = counter /2 , res = res +1);
	return ( merkle_root = merkle_root );
}

func main{output_ptr: felt *, pedersen_ptr: HashBuiltin*}(){
	alloc_locals;
	let X_without_precision : felt ** = alloc();
	let ( local r1 : felt *) = alloc();
	let ( local r2 : felt *) = alloc();
	assert [ X_without_precision ] = r1;
	assert [ X_without_precision + 1 ] = r2;
	
	
	%{
index=0
for x in program_input["X_without_precision"][0]:
    memory[ids.r1 + index] = x
    index += 1
index = 0
for x in program_input["X_without_precision"][1]:
    memory[ids.r2+index] = x
    index += 1
	%}
	
	
	let ( local Y_without_precision : felt **) = alloc();
	let ( local r1 : felt *) = alloc();
	assert [ Y_without_precision ] = r1;
	
	%{
index = 0
for y in program_input["Y_without_precision"][0]:
    memory[ids.r1+index] = y
    index += 1

	%}
		
	let ( local flattened_array : felt *) = alloc();
	matrix_flattening(m = X_without_precision, step =8 , row =0 , col =0 , cols =4 , res = flattened_array);
	matrix_flattening ( m = Y_without_precision , step =4 , row =0 , col =0 , cols =4 , res =flattened_array + 8);
	assert [ flattened_array + 12] = 0;
	assert [ flattened_array + 13] = 0;
	assert [ flattened_array + 14] = 0;
	assert [ flattened_array + 15] = 0;
   	assert [ flattened_array + 16] = 0;
	assert [ flattened_array + 17] = 0;
	assert [ flattened_array + 18] = 0;
	assert [ flattened_array + 19] = 0;
	assert [ flattened_array + 20] = 0;
	assert [ flattened_array + 21] = 0;
	assert [ flattened_array + 22] = 0;
	assert [ flattened_array + 23] = 0;
   	assert [ flattened_array + 24] = 0;
	assert [ flattened_array + 25] = 0;
	assert [ flattened_array + 26] = 0;
	assert [ flattened_array + 27] = 0;
	assert [ flattened_array + 28] = 0;
	assert [ flattened_array + 29] = 0;
	assert [ flattened_array + 30] = 0;
	assert [ flattened_array + 31] = 0;
   	assert [ flattened_array + 32] = 0;
	assert [ flattened_array + 33] = 0;
	assert [ flattened_array + 34] = 0;
	assert [ flattened_array + 35] = 0;
	assert [ flattened_array + 36] = 0;
	assert [ flattened_array + 37] = 0;
	assert [ flattened_array + 38] = 0;
	assert [ flattened_array + 39] = 0;
   	assert [ flattened_array + 40] = 0;
	assert [ flattened_array + 41] = 0;
	assert [ flattened_array + 42] = 0;
	assert [ flattened_array + 43] = 0;
	assert [ flattened_array + 44] = 0;
	assert [ flattened_array + 45] = 0;
	assert [ flattened_array + 46] = 0;
	assert [ flattened_array + 47] = 0;
   	assert [ flattened_array + 48] = 0;
	assert [ flattened_array + 49] = 0;
	assert [ flattened_array + 50] = 0;
	assert [ flattened_array + 51] = 0;
	assert [ flattened_array + 52] = 0;
	assert [ flattened_array + 53] = 0;
	assert [ flattened_array + 54] = 0;
	assert [ flattened_array + 55] = 0;
   	assert [ flattened_array + 56] = 0;
	assert [ flattened_array + 57] = 0;
	assert [ flattened_array + 58] = 0;
	assert [ flattened_array + 59] = 0;
	assert [ flattened_array + 60] = 0;
	assert [ flattened_array + 61] = 0;
	assert [ flattened_array + 62] = 0;
	assert [ flattened_array + 63] = 0;
   	assert [ flattened_array + 64] = 0;
	assert [ flattened_array + 65] = 0;
	assert [ flattened_array + 66] = 0;
	assert [ flattened_array + 67] = 0;
	assert [ flattened_array + 68] = 0;
	assert [ flattened_array + 69] = 0;
	assert [ flattened_array + 70] = 0;
	assert [ flattened_array + 71] = 0;
   	assert [ flattened_array + 72] = 0;
	assert [ flattened_array + 73] = 0;
	assert [ flattened_array + 74] = 0;
	assert [ flattened_array + 75] = 0;


	
	let ( local merkle_tree : felt **) = alloc();
	assert [ merkle_tree ] = flattened_array;
	
	
	

	let ( merkle_root ) = build_merkle_root { hash_ptr = pedersen_ptr }( counter =16 , res = merkle_tree + 1 );
	
	//assert MERKLE_TREE_ROOT = merkle_root;

	%{
print("output: ", ids.merkle_root)
	%}
	let result = MERKLE_TREE_ROOT - merkle_root;
        //result = result - merkle_root;
        serialize_word(result);

	return();		
}







