#include <plug_common.h>

class luna_wrapper_osgDB_ParameterOutput {
public:
	typedef Luna< osgDB::ParameterOutput > luna_t;

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

		osgDB::ParameterOutput* self=(Luna< osgDB::ParameterOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ParameterOutput");
		
		return luna_dynamicCast(L,converters,"osgDB::ParameterOutput",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78216342) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78216342) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_begin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_newLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ParameterOutput::ParameterOutput(osgDB::Output & fw)
	static osgDB::ParameterOutput* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ParameterOutput::ParameterOutput(osgDB::Output & fw) function, expected prototype:\nosgDB::ParameterOutput::ParameterOutput(osgDB::Output & fw)\nClass arguments details:\narg 1 ID = 78216342\n");
		}

		osgDB::Output* fw_ptr=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if( !fw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fw in osgDB::ParameterOutput::ParameterOutput function");
		}
		osgDB::Output & fw=*fw_ptr;

		return new osgDB::ParameterOutput(fw);
	}

	// osgDB::ParameterOutput::ParameterOutput(osgDB::Output & fw, int numItemsPerLine)
	static osgDB::ParameterOutput* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ParameterOutput::ParameterOutput(osgDB::Output & fw, int numItemsPerLine) function, expected prototype:\nosgDB::ParameterOutput::ParameterOutput(osgDB::Output & fw, int numItemsPerLine)\nClass arguments details:\narg 1 ID = 78216342\n");
		}

		osgDB::Output* fw_ptr=dynamic_cast< osgDB::Output* >(Luna< osgDB::ofstream >::check(L,1));
		if( !fw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fw in osgDB::ParameterOutput::ParameterOutput function");
		}
		osgDB::Output & fw=*fw_ptr;
		int numItemsPerLine=(int)lua_tointeger(L,2);

		return new osgDB::ParameterOutput(fw, numItemsPerLine);
	}

	// Overload binder for osgDB::ParameterOutput::ParameterOutput
	static osgDB::ParameterOutput* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ParameterOutput, cannot match any of the overloads for function ParameterOutput:\n  ParameterOutput(osgDB::Output &)\n  ParameterOutput(osgDB::Output &, int)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::ParameterOutput::begin()
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ParameterOutput::begin() function, expected prototype:\nvoid osgDB::ParameterOutput::begin()\nClass arguments details:\n");
		}


		osgDB::ParameterOutput* self=(Luna< osgDB::ParameterOutput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ParameterOutput::begin()");
		}
		self->begin();

		return 0;
	}

	// void osgDB::ParameterOutput::newLine()
	static int _bind_newLine(lua_State *L) {
		if (!_lg_typecheck_newLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ParameterOutput::newLine() function, expected prototype:\nvoid osgDB::ParameterOutput::newLine()\nClass arguments details:\n");
		}


		osgDB::ParameterOutput* self=(Luna< osgDB::ParameterOutput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ParameterOutput::newLine()");
		}
		self->newLine();

		return 0;
	}

	// void osgDB::ParameterOutput::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ParameterOutput::end() function, expected prototype:\nvoid osgDB::ParameterOutput::end()\nClass arguments details:\n");
		}


		osgDB::ParameterOutput* self=(Luna< osgDB::ParameterOutput >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ParameterOutput::end()");
		}
		self->end();

		return 0;
	}


	// Operator binds:

};

osgDB::ParameterOutput* LunaTraits< osgDB::ParameterOutput >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ParameterOutput::_bind_ctor(L);
}

void LunaTraits< osgDB::ParameterOutput >::_bind_dtor(osgDB::ParameterOutput* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ParameterOutput >::className[] = "ParameterOutput";
const char LunaTraits< osgDB::ParameterOutput >::fullName[] = "osgDB::ParameterOutput";
const char LunaTraits< osgDB::ParameterOutput >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ParameterOutput >::parents[] = {0};
const int LunaTraits< osgDB::ParameterOutput >::hash = 76529504;
const int LunaTraits< osgDB::ParameterOutput >::uniqueIDs[] = {76529504,0};

luna_RegType LunaTraits< osgDB::ParameterOutput >::methods[] = {
	{"begin", &luna_wrapper_osgDB_ParameterOutput::_bind_begin},
	{"newLine", &luna_wrapper_osgDB_ParameterOutput::_bind_newLine},
	{"end", &luna_wrapper_osgDB_ParameterOutput::_bind_end},
	{"dynCast", &luna_wrapper_osgDB_ParameterOutput::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ParameterOutput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ParameterOutput >::enumValues[] = {
	{0,0}
};


