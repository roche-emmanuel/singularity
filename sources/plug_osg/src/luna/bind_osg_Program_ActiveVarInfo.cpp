#include <plug_common.h>

class luna_wrapper_osg_Program_ActiveVarInfo {
public:
	typedef Luna< osg::Program::ActiveVarInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71916305) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Program::ActiveVarInfo*)");
		}

		osg::Program::ActiveVarInfo* rhs =(Luna< osg::Program::ActiveVarInfo >::check(L,2));
		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

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

		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::ActiveVarInfo");
		
		return luna_dynamicCast(L,converters,"osg::Program::ActiveVarInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Program::ActiveVarInfo::ActiveVarInfo()
	static osg::Program::ActiveVarInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::ActiveVarInfo::ActiveVarInfo() function, expected prototype:\nosg::Program::ActiveVarInfo::ActiveVarInfo()\nClass arguments details:\n");
		}


		return new osg::Program::ActiveVarInfo();
	}

	// osg::Program::ActiveVarInfo::ActiveVarInfo(int loc, unsigned int type, int size)
	static osg::Program::ActiveVarInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::ActiveVarInfo::ActiveVarInfo(int loc, unsigned int type, int size) function, expected prototype:\nosg::Program::ActiveVarInfo::ActiveVarInfo(int loc, unsigned int type, int size)\nClass arguments details:\n");
		}

		int loc=(int)lua_tointeger(L,1);
		unsigned int type=(unsigned int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);

		return new osg::Program::ActiveVarInfo(loc, type, size);
	}

	// Overload binder for osg::Program::ActiveVarInfo::ActiveVarInfo
	static osg::Program::ActiveVarInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ActiveVarInfo, cannot match any of the overloads for function ActiveVarInfo:\n  ActiveVarInfo()\n  ActiveVarInfo(int, unsigned int, int)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::Program::ActiveVarInfo* LunaTraits< osg::Program::ActiveVarInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program_ActiveVarInfo::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Program::ActiveVarInfo >::_bind_dtor(osg::Program::ActiveVarInfo* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::ActiveVarInfo >::className[] = "Program_ActiveVarInfo";
const char LunaTraits< osg::Program::ActiveVarInfo >::fullName[] = "osg::Program::ActiveVarInfo";
const char LunaTraits< osg::Program::ActiveVarInfo >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::ActiveVarInfo >::parents[] = {0};
const int LunaTraits< osg::Program::ActiveVarInfo >::hash = 71916305;
const int LunaTraits< osg::Program::ActiveVarInfo >::uniqueIDs[] = {71916305,0};

luna_RegType LunaTraits< osg::Program::ActiveVarInfo >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Program_ActiveVarInfo::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::ActiveVarInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::ActiveVarInfo >::enumValues[] = {
	{0,0}
};


