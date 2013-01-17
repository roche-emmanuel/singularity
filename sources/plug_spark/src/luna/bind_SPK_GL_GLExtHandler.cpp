#include <plug_common.h>

class luna_wrapper_SPK_GL_GLExtHandler {
public:
	typedef Luna< SPK::GL::GLExtHandler > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94742166) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::GL::GLExtHandler*)");
		}

		SPK::GL::GLExtHandler* rhs =(Luna< SPK::GL::GLExtHandler >::check(L,2));
		SPK::GL::GLExtHandler* self=(Luna< SPK::GL::GLExtHandler >::check(L,1));
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

		SPK::GL::GLExtHandler* self=(Luna< SPK::GL::GLExtHandler >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::GL::GLExtHandler");
		
		return luna_dynamicCast(L,converters,"SPK::GL::GLExtHandler",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_loadGLExtPointSprite(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_loadGLExtPointParameter(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPixelPerUnit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadGLExtTexture3D(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glTexImage3D(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnil(L,10)==0 && !Luna<void>::has_uniqueid(L,10,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadGLExtShader(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static bool SPK::GL::GLExtHandler::loadGLExtPointSprite()
	static int _bind_loadGLExtPointSprite(lua_State *L) {
		if (!_lg_typecheck_loadGLExtPointSprite(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool SPK::GL::GLExtHandler::loadGLExtPointSprite() function, expected prototype:\nstatic bool SPK::GL::GLExtHandler::loadGLExtPointSprite()\nClass arguments details:\n");
		}


		bool lret = SPK::GL::GLExtHandler::loadGLExtPointSprite();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool SPK::GL::GLExtHandler::loadGLExtPointParameter()
	static int _bind_loadGLExtPointParameter(lua_State *L) {
		if (!_lg_typecheck_loadGLExtPointParameter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool SPK::GL::GLExtHandler::loadGLExtPointParameter() function, expected prototype:\nstatic bool SPK::GL::GLExtHandler::loadGLExtPointParameter()\nClass arguments details:\n");
		}


		bool lret = SPK::GL::GLExtHandler::loadGLExtPointParameter();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void SPK::GL::GLExtHandler::setPixelPerUnit(float fovy, int screenHeight)
	static int _bind_setPixelPerUnit(lua_State *L) {
		if (!_lg_typecheck_setPixelPerUnit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::GL::GLExtHandler::setPixelPerUnit(float fovy, int screenHeight) function, expected prototype:\nstatic void SPK::GL::GLExtHandler::setPixelPerUnit(float fovy, int screenHeight)\nClass arguments details:\n");
		}

		float fovy=(float)lua_tonumber(L,1);
		int screenHeight=(int)lua_tointeger(L,2);

		SPK::GL::GLExtHandler::setPixelPerUnit(fovy, screenHeight);

		return 0;
	}

	// static bool SPK::GL::GLExtHandler::loadGLExtTexture3D()
	static int _bind_loadGLExtTexture3D(lua_State *L) {
		if (!_lg_typecheck_loadGLExtTexture3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool SPK::GL::GLExtHandler::loadGLExtTexture3D() function, expected prototype:\nstatic bool SPK::GL::GLExtHandler::loadGLExtTexture3D()\nClass arguments details:\n");
		}


		bool lret = SPK::GL::GLExtHandler::loadGLExtTexture3D();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void SPK::GL::GLExtHandler::glTexImage3D(unsigned int target, int level, unsigned int internalFormat, int width, int height, int depth, int border, unsigned int format, unsigned int type, const void * pixels)
	static int _bind_glTexImage3D(lua_State *L) {
		if (!_lg_typecheck_glTexImage3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::GL::GLExtHandler::glTexImage3D(unsigned int target, int level, unsigned int internalFormat, int width, int height, int depth, int border, unsigned int format, unsigned int type, const void * pixels) function, expected prototype:\nstatic void SPK::GL::GLExtHandler::glTexImage3D(unsigned int target, int level, unsigned int internalFormat, int width, int height, int depth, int border, unsigned int format, unsigned int type, const void * pixels)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,1);
		int level=(int)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int depth=(int)lua_tointeger(L,6);
		int border=(int)lua_tointeger(L,7);
		unsigned int format=(unsigned int)lua_tointeger(L,8);
		unsigned int type=(unsigned int)lua_tointeger(L,9);
		void* pixels=(Luna< void >::check(L,10));

		SPK::GL::GLExtHandler::glTexImage3D(target, level, internalFormat, width, height, depth, border, format, type, pixels);

		return 0;
	}

	// static bool SPK::GL::GLExtHandler::loadGLExtShader()
	static int _bind_loadGLExtShader(lua_State *L) {
		if (!_lg_typecheck_loadGLExtShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool SPK::GL::GLExtHandler::loadGLExtShader() function, expected prototype:\nstatic bool SPK::GL::GLExtHandler::loadGLExtShader()\nClass arguments details:\n");
		}


		bool lret = SPK::GL::GLExtHandler::loadGLExtShader();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

SPK::GL::GLExtHandler* LunaTraits< SPK::GL::GLExtHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SPK::GL::GLExtHandler >::_bind_dtor(SPK::GL::GLExtHandler* obj) {
	delete obj;
}

const char LunaTraits< SPK::GL::GLExtHandler >::className[] = "GLExtHandler";
const char LunaTraits< SPK::GL::GLExtHandler >::fullName[] = "SPK::GL::GLExtHandler";
const char LunaTraits< SPK::GL::GLExtHandler >::moduleName[] = "spark";
const char* LunaTraits< SPK::GL::GLExtHandler >::parents[] = {0};
const int LunaTraits< SPK::GL::GLExtHandler >::hash = 94742166;
const int LunaTraits< SPK::GL::GLExtHandler >::uniqueIDs[] = {94742166,0};

luna_RegType LunaTraits< SPK::GL::GLExtHandler >::methods[] = {
	{"loadGLExtPointSprite", &luna_wrapper_SPK_GL_GLExtHandler::_bind_loadGLExtPointSprite},
	{"loadGLExtPointParameter", &luna_wrapper_SPK_GL_GLExtHandler::_bind_loadGLExtPointParameter},
	{"setPixelPerUnit", &luna_wrapper_SPK_GL_GLExtHandler::_bind_setPixelPerUnit},
	{"loadGLExtTexture3D", &luna_wrapper_SPK_GL_GLExtHandler::_bind_loadGLExtTexture3D},
	{"glTexImage3D", &luna_wrapper_SPK_GL_GLExtHandler::_bind_glTexImage3D},
	{"loadGLExtShader", &luna_wrapper_SPK_GL_GLExtHandler::_bind_loadGLExtShader},
	{"dynCast", &luna_wrapper_SPK_GL_GLExtHandler::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_GL_GLExtHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::GL::GLExtHandler >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::GL::GLExtHandler >::enumValues[] = {
	{0,0}
};

