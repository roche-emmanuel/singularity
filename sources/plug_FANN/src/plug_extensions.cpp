#include "plug_extensions.h"

int create_standard(FANN::neural_net* nn, lua_Table* dum, lua_State* L) {
	/* table is in the stack at index 't' */
	lua_pushnil(L);  /* first key */
	std::vector<unsigned int> sizes;
	while (lua_next(L, 2) != 0) {
		/* uses 'key' (at index -2) and 'value' (at index -1) */
		sizes.push_back(luaL_checkinteger(L,-1));

		/* removes 'value'; keeps 'key' for next iteration */
		lua_pop(L, 1);
	}	

	bool result = nn->create_standard_array(sizes.size(),&sizes[0]);
	lua_pushboolean(L,result?1:0);
	return 1;
}

int nn_run(FANN::neural_net* nn, lua_Table* dum, lua_State* L) {
	/* table is in the stack at index 't' */
	lua_pushnil(L);  /* first key */
	std::vector<float> values;
	while (lua_next(L, 2) != 0) {
		/* uses 'key' (at index -2) and 'value' (at index -1) */
		values.push_back(luaL_checknumber(L,-1));

		/* removes 'value'; keeps 'key' for next iteration */
		lua_pop(L, 1);
	}	

	float* result = nn->run(&values[0]);
	if(result) {
		lua_pushnumber(L,*result);
		return 1;
	}
	else {
		return 0;
	}
}
