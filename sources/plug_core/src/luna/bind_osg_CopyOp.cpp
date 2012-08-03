#include <plug_common.h>

class luna_wrapper_osg_CopyOp {
public:
	typedef Luna< osg::CopyOp > luna_t;

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

		osg::CopyOp* self=(Luna< osg::CopyOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::CopyOp");
		
		return luna_dynamicCast(L,converters,"osg::CopyOp",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CopyOp::CopyOp(unsigned int flags = osg::CopyOp::SHALLOW_COPY)
	static osg::CopyOp* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CopyOp::CopyOp(unsigned int flags = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CopyOp::CopyOp(unsigned int flags = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>0 ? (unsigned int)lua_tointeger(L,1) : osg::CopyOp::SHALLOW_COPY;

		return new osg::CopyOp(flags);
	}


	// Function binds:

	// Operator binds:

};

osg::CopyOp* LunaTraits< osg::CopyOp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CopyOp::_bind_ctor(L);
}

void LunaTraits< osg::CopyOp >::_bind_dtor(osg::CopyOp* obj) {
	delete obj;
}

const char LunaTraits< osg::CopyOp >::className[] = "CopyOp";
const char LunaTraits< osg::CopyOp >::fullName[] = "osg::CopyOp";
const char LunaTraits< osg::CopyOp >::moduleName[] = "core";
const char* LunaTraits< osg::CopyOp >::parents[] = {0};
const int LunaTraits< osg::CopyOp >::hash = 27134364;
const int LunaTraits< osg::CopyOp >::uniqueIDs[] = {27134364,0};

luna_RegType LunaTraits< osg::CopyOp >::methods[] = {
	{"dynCast", &luna_wrapper_osg_CopyOp::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CopyOp >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CopyOp >::enumValues[] = {
	{"SHALLOW_COPY", osg::CopyOp::SHALLOW_COPY},
	{"DEEP_COPY_OBJECTS", osg::CopyOp::DEEP_COPY_OBJECTS},
	{"DEEP_COPY_NODES", osg::CopyOp::DEEP_COPY_NODES},
	{"DEEP_COPY_DRAWABLES", osg::CopyOp::DEEP_COPY_DRAWABLES},
	{"DEEP_COPY_STATESETS", osg::CopyOp::DEEP_COPY_STATESETS},
	{"DEEP_COPY_STATEATTRIBUTES", osg::CopyOp::DEEP_COPY_STATEATTRIBUTES},
	{"DEEP_COPY_TEXTURES", osg::CopyOp::DEEP_COPY_TEXTURES},
	{"DEEP_COPY_IMAGES", osg::CopyOp::DEEP_COPY_IMAGES},
	{"DEEP_COPY_ARRAYS", osg::CopyOp::DEEP_COPY_ARRAYS},
	{"DEEP_COPY_PRIMITIVES", osg::CopyOp::DEEP_COPY_PRIMITIVES},
	{"DEEP_COPY_SHAPES", osg::CopyOp::DEEP_COPY_SHAPES},
	{"DEEP_COPY_UNIFORMS", osg::CopyOp::DEEP_COPY_UNIFORMS},
	{"DEEP_COPY_CALLBACKS", osg::CopyOp::DEEP_COPY_CALLBACKS},
	{"DEEP_COPY_USERDATA", osg::CopyOp::DEEP_COPY_USERDATA},
	{"DEEP_COPY_ALL", osg::CopyOp::DEEP_COPY_ALL},
	{0,0}
};


