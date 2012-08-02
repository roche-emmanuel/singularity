#include <plug_common.h>

class luna_wrapper_osg_Program_UniformBlockInfo {
public:
	typedef Luna< osg::Program::UniformBlockInfo > luna_t;

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

		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::UniformBlockInfo");
		
		return luna_dynamicCast(L,converters,"osg::Program::UniformBlockInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Program::UniformBlockInfo::UniformBlockInfo()
	static osg::Program::UniformBlockInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::UniformBlockInfo::UniformBlockInfo() function, expected prototype:\nosg::Program::UniformBlockInfo::UniformBlockInfo()\nClass arguments details:\n");
		}


		return new osg::Program::UniformBlockInfo();
	}

	// osg::Program::UniformBlockInfo::UniformBlockInfo(unsigned int index, int size)
	static osg::Program::UniformBlockInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::UniformBlockInfo::UniformBlockInfo(unsigned int index, int size) function, expected prototype:\nosg::Program::UniformBlockInfo::UniformBlockInfo(unsigned int index, int size)\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		int size=(int)lua_tointeger(L,2);

		return new osg::Program::UniformBlockInfo(index, size);
	}

	// Overload binder for osg::Program::UniformBlockInfo::UniformBlockInfo
	static osg::Program::UniformBlockInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function UniformBlockInfo, cannot match any of the overloads for function UniformBlockInfo:\n  UniformBlockInfo()\n  UniformBlockInfo(unsigned int, int)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::Program::UniformBlockInfo* LunaTraits< osg::Program::UniformBlockInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program_UniformBlockInfo::_bind_ctor(L);
}

void LunaTraits< osg::Program::UniformBlockInfo >::_bind_dtor(osg::Program::UniformBlockInfo* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::UniformBlockInfo >::className[] = "UniformBlockInfo";
const char LunaTraits< osg::Program::UniformBlockInfo >::fullName[] = "osg::Program::UniformBlockInfo";
const char LunaTraits< osg::Program::UniformBlockInfo >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::UniformBlockInfo >::parents[] = {0};
const int LunaTraits< osg::Program::UniformBlockInfo >::hash = 92598171;
const int LunaTraits< osg::Program::UniformBlockInfo >::uniqueIDs[] = {92598171,0};

luna_RegType LunaTraits< osg::Program::UniformBlockInfo >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::UniformBlockInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::UniformBlockInfo >::enumValues[] = {
	{0,0}
};


