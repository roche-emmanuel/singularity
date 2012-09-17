#include <plug_common.h>

class luna_wrapper_FANN_training_data {
public:
	typedef Luna< FANN::training_data > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("FANN::training_data");
		
		return luna_dynamicCast(L,converters,"FANN::training_data",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45173508) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_destroy_train(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_read_train_from_file(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_save_train(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_save_train_to_fixed(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_shuffle_train_data(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_merge_train_data(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45173508) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_length_train_data(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_num_input_train_data(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_num_output_train_data(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_input(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_output(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_scale_input_train_data(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_scale_output_train_data(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_scale_train_data(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_subset_train_data(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// FANN::training_data::training_data()
	static FANN::training_data* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in FANN::training_data::training_data() function, expected prototype:\nFANN::training_data::training_data()\nClass arguments details:\n");
		}


		return new FANN::training_data();
	}

	// FANN::training_data::training_data(const FANN::training_data & data)
	static FANN::training_data* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in FANN::training_data::training_data(const FANN::training_data & data) function, expected prototype:\nFANN::training_data::training_data(const FANN::training_data & data)\nClass arguments details:\narg 1 ID = 45173508\n");
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,1));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::training_data::training_data function");
		}
		const FANN::training_data & data=*data_ptr;

		return new FANN::training_data(data);
	}

	// Overload binder for FANN::training_data::training_data
	static FANN::training_data* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function training_data, cannot match any of the overloads for function training_data:\n  training_data()\n  training_data(const FANN::training_data &)\n");
		return NULL;
	}


	// Function binds:
	// void FANN::training_data::destroy_train()
	static int _bind_destroy_train(lua_State *L) {
		if (!_lg_typecheck_destroy_train(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void FANN::training_data::destroy_train() function, expected prototype:\nvoid FANN::training_data::destroy_train()\nClass arguments details:\n");
		}


		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void FANN::training_data::destroy_train()");
		}
		self->destroy_train();

		return 0;
	}

	// bool FANN::training_data::read_train_from_file(const std::string & filename)
	static int _bind_read_train_from_file(lua_State *L) {
		if (!_lg_typecheck_read_train_from_file(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool FANN::training_data::read_train_from_file(const std::string & filename) function, expected prototype:\nbool FANN::training_data::read_train_from_file(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool FANN::training_data::read_train_from_file(const std::string &)");
		}
		bool lret = self->read_train_from_file(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool FANN::training_data::save_train(const std::string & filename)
	static int _bind_save_train(lua_State *L) {
		if (!_lg_typecheck_save_train(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool FANN::training_data::save_train(const std::string & filename) function, expected prototype:\nbool FANN::training_data::save_train(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool FANN::training_data::save_train(const std::string &)");
		}
		bool lret = self->save_train(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool FANN::training_data::save_train_to_fixed(const std::string & filename, unsigned int decimal_point)
	static int _bind_save_train_to_fixed(lua_State *L) {
		if (!_lg_typecheck_save_train_to_fixed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool FANN::training_data::save_train_to_fixed(const std::string & filename, unsigned int decimal_point) function, expected prototype:\nbool FANN::training_data::save_train_to_fixed(const std::string & filename, unsigned int decimal_point)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int decimal_point=(unsigned int)lua_tointeger(L,3);

		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool FANN::training_data::save_train_to_fixed(const std::string &, unsigned int)");
		}
		bool lret = self->save_train_to_fixed(filename, decimal_point);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void FANN::training_data::shuffle_train_data()
	static int _bind_shuffle_train_data(lua_State *L) {
		if (!_lg_typecheck_shuffle_train_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void FANN::training_data::shuffle_train_data() function, expected prototype:\nvoid FANN::training_data::shuffle_train_data()\nClass arguments details:\n");
		}


		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void FANN::training_data::shuffle_train_data()");
		}
		self->shuffle_train_data();

		return 0;
	}

	// void FANN::training_data::merge_train_data(const FANN::training_data & data)
	static int _bind_merge_train_data(lua_State *L) {
		if (!_lg_typecheck_merge_train_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void FANN::training_data::merge_train_data(const FANN::training_data & data) function, expected prototype:\nvoid FANN::training_data::merge_train_data(const FANN::training_data & data)\nClass arguments details:\narg 1 ID = 45173508\n");
		}

		const FANN::training_data* data_ptr=(Luna< FANN::training_data >::check(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in FANN::training_data::merge_train_data function");
		}
		const FANN::training_data & data=*data_ptr;

		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void FANN::training_data::merge_train_data(const FANN::training_data &)");
		}
		self->merge_train_data(data);

		return 0;
	}

	// unsigned int FANN::training_data::length_train_data()
	static int _bind_length_train_data(lua_State *L) {
		if (!_lg_typecheck_length_train_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int FANN::training_data::length_train_data() function, expected prototype:\nunsigned int FANN::training_data::length_train_data()\nClass arguments details:\n");
		}


		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int FANN::training_data::length_train_data()");
		}
		unsigned int lret = self->length_train_data();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int FANN::training_data::num_input_train_data()
	static int _bind_num_input_train_data(lua_State *L) {
		if (!_lg_typecheck_num_input_train_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int FANN::training_data::num_input_train_data() function, expected prototype:\nunsigned int FANN::training_data::num_input_train_data()\nClass arguments details:\n");
		}


		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int FANN::training_data::num_input_train_data()");
		}
		unsigned int lret = self->num_input_train_data();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int FANN::training_data::num_output_train_data()
	static int _bind_num_output_train_data(lua_State *L) {
		if (!_lg_typecheck_num_output_train_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int FANN::training_data::num_output_train_data() function, expected prototype:\nunsigned int FANN::training_data::num_output_train_data()\nClass arguments details:\n");
		}


		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int FANN::training_data::num_output_train_data()");
		}
		unsigned int lret = self->num_output_train_data();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float ** FANN::training_data::get_input()
	static int _bind_get_input(lua_State *L) {
		if (!_lg_typecheck_get_input(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float ** FANN::training_data::get_input() function, expected prototype:\nfloat ** FANN::training_data::get_input()\nClass arguments details:\n");
		}


		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float ** FANN::training_data::get_input()");
		}
		float ** lret = self->get_input();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'float **'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// float ** FANN::training_data::get_output()
	static int _bind_get_output(lua_State *L) {
		if (!_lg_typecheck_get_output(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float ** FANN::training_data::get_output() function, expected prototype:\nfloat ** FANN::training_data::get_output()\nClass arguments details:\n");
		}


		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float ** FANN::training_data::get_output()");
		}
		float ** lret = self->get_output();
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'float **'
		////////////////////////////////////////////////////////////////////

		return 1;
	}

	// void FANN::training_data::scale_input_train_data(float new_min, float new_max)
	static int _bind_scale_input_train_data(lua_State *L) {
		if (!_lg_typecheck_scale_input_train_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void FANN::training_data::scale_input_train_data(float new_min, float new_max) function, expected prototype:\nvoid FANN::training_data::scale_input_train_data(float new_min, float new_max)\nClass arguments details:\n");
		}

		float new_min=(float)lua_tonumber(L,2);
		float new_max=(float)lua_tonumber(L,3);

		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void FANN::training_data::scale_input_train_data(float, float)");
		}
		self->scale_input_train_data(new_min, new_max);

		return 0;
	}

	// void FANN::training_data::scale_output_train_data(float new_min, float new_max)
	static int _bind_scale_output_train_data(lua_State *L) {
		if (!_lg_typecheck_scale_output_train_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void FANN::training_data::scale_output_train_data(float new_min, float new_max) function, expected prototype:\nvoid FANN::training_data::scale_output_train_data(float new_min, float new_max)\nClass arguments details:\n");
		}

		float new_min=(float)lua_tonumber(L,2);
		float new_max=(float)lua_tonumber(L,3);

		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void FANN::training_data::scale_output_train_data(float, float)");
		}
		self->scale_output_train_data(new_min, new_max);

		return 0;
	}

	// void FANN::training_data::scale_train_data(float new_min, float new_max)
	static int _bind_scale_train_data(lua_State *L) {
		if (!_lg_typecheck_scale_train_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void FANN::training_data::scale_train_data(float new_min, float new_max) function, expected prototype:\nvoid FANN::training_data::scale_train_data(float new_min, float new_max)\nClass arguments details:\n");
		}

		float new_min=(float)lua_tonumber(L,2);
		float new_max=(float)lua_tonumber(L,3);

		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void FANN::training_data::scale_train_data(float, float)");
		}
		self->scale_train_data(new_min, new_max);

		return 0;
	}

	// void FANN::training_data::subset_train_data(unsigned int pos, unsigned int length)
	static int _bind_subset_train_data(lua_State *L) {
		if (!_lg_typecheck_subset_train_data(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void FANN::training_data::subset_train_data(unsigned int pos, unsigned int length) function, expected prototype:\nvoid FANN::training_data::subset_train_data(unsigned int pos, unsigned int length)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int length=(unsigned int)lua_tointeger(L,3);

		FANN::training_data* self=(Luna< FANN::training_data >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void FANN::training_data::subset_train_data(unsigned int, unsigned int)");
		}
		self->subset_train_data(pos, length);

		return 0;
	}


	// Operator binds:

};

FANN::training_data* LunaTraits< FANN::training_data >::_bind_ctor(lua_State *L) {
	return luna_wrapper_FANN_training_data::_bind_ctor(L);
}

void LunaTraits< FANN::training_data >::_bind_dtor(FANN::training_data* obj) {
	delete obj;
}

const char LunaTraits< FANN::training_data >::className[] = "training_data";
const char LunaTraits< FANN::training_data >::fullName[] = "FANN::training_data";
const char LunaTraits< FANN::training_data >::moduleName[] = "FANN";
const char* LunaTraits< FANN::training_data >::parents[] = {0};
const int LunaTraits< FANN::training_data >::hash = 45173508;
const int LunaTraits< FANN::training_data >::uniqueIDs[] = {45173508,0};

luna_RegType LunaTraits< FANN::training_data >::methods[] = {
	{"destroy_train", &luna_wrapper_FANN_training_data::_bind_destroy_train},
	{"read_train_from_file", &luna_wrapper_FANN_training_data::_bind_read_train_from_file},
	{"save_train", &luna_wrapper_FANN_training_data::_bind_save_train},
	{"save_train_to_fixed", &luna_wrapper_FANN_training_data::_bind_save_train_to_fixed},
	{"shuffle_train_data", &luna_wrapper_FANN_training_data::_bind_shuffle_train_data},
	{"merge_train_data", &luna_wrapper_FANN_training_data::_bind_merge_train_data},
	{"length_train_data", &luna_wrapper_FANN_training_data::_bind_length_train_data},
	{"num_input_train_data", &luna_wrapper_FANN_training_data::_bind_num_input_train_data},
	{"num_output_train_data", &luna_wrapper_FANN_training_data::_bind_num_output_train_data},
	{"get_input", &luna_wrapper_FANN_training_data::_bind_get_input},
	{"get_output", &luna_wrapper_FANN_training_data::_bind_get_output},
	{"scale_input_train_data", &luna_wrapper_FANN_training_data::_bind_scale_input_train_data},
	{"scale_output_train_data", &luna_wrapper_FANN_training_data::_bind_scale_output_train_data},
	{"scale_train_data", &luna_wrapper_FANN_training_data::_bind_scale_train_data},
	{"subset_train_data", &luna_wrapper_FANN_training_data::_bind_subset_train_data},
	{"dynCast", &luna_wrapper_FANN_training_data::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< FANN::training_data >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< FANN::training_data >::enumValues[] = {
	{0,0}
};


