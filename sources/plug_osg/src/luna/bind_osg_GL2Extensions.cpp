#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GL2Extensions.h>

class luna_wrapper_osg_GL2Extensions {
public:
	typedef Luna< osg::GL2Extensions > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::GL2Extensions* ptr= dynamic_cast< osg::GL2Extensions* >(Luna< osg::Referenced >::check(L,1));
		osg::GL2Extensions* ptr= luna_caster< osg::Referenced, osg::GL2Extensions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GL2Extensions >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setupGL2Extensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isGlslSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLanguageVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShaderObjectsSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isShaderObjectsSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexShaderSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isVertexShaderSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFragmentShaderSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isFragmentShaderSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLanguage100Supported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isLanguage100Supported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGeometryShader4Supported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isGeometryShader4Supported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTessellationShadersSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_areTessellationShadersSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGpuShader4Supported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isGpuShader4Supported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUniformBufferObjectSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isUniformBufferObjectSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGetProgramBinarySupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isGetProgramBinarySupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glBlendEquationSeparate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDrawBuffers(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glStencilOpSeparate(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glStencilFuncSeparate(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glStencilMaskSeparate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glAttachShader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBindAttribLocation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glCompileShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glCreateProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glCreateShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDeleteProgram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDeleteShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDetachShader(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDisableVertexAttribArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glEnableVertexAttribArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetActiveAttrib(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetActiveUniform(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetAttachedShaders(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetAttribLocation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetProgramiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetProgramInfoLog(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetShaderiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetShaderInfoLog(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetShaderSource(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetUniformLocation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetUniformfv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetUniformiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetVertexAttribdv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetVertexAttribfv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetVertexAttribiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glIsProgram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glIsShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glLinkProgram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUseProgram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform1f(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform2f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform3f(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform4f(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform1i(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform2i(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform3i(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform4i(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform1fv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform2fv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform3fv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform4fv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform1iv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform2iv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform3iv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform4iv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformMatrix2fv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformMatrix3fv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformMatrix4fv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glValidateProgram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib1d(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib1dv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib1f(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib1fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib1s(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib1sv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib2d(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib2dv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib2f(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib2fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib2s(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib2sv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib3d(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib3dv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib3f(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib3fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib3s(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib3sv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4Nbv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4Niv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4Nsv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4Nub(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4Nubv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4Nuiv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4Nusv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4bv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4d(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4dv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4f(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4iv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4s(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4sv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4ubv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4uiv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4usv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttribPointer(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProgramInfoLog(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShaderInfoLog(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttribLocation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFragDataLocation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformMatrix2x3fv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformMatrix3x2fv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformMatrix2x4fv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformMatrix4x2fv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformMatrix3x4fv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformMatrix4x3fv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glProgramParameteri(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glFramebufferTexture(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glFramebufferTextureLayer(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glFramebufferTextureFace(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glPatchParameteri(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glPatchParameterfv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetUniformuiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBindFragDataLocation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetFragDataLocation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform1ui(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform2ui(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform3ui(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform4ui(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform1uiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform2uiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform3uiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniform4uiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetActiveUniformsiv(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetActiveUniformName(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetUniformBlockIndex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetActiveUniformBlockiv(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetActiveUniformBlockName(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUniformBlockBinding(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetProgramBinary(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glProgramBinary(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GL2Extensions::GL2Extensions(unsigned int contextID)
	static osg::GL2Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GL2Extensions::GL2Extensions(unsigned int contextID) function, expected prototype:\nosg::GL2Extensions::GL2Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::GL2Extensions(contextID);
	}

	// osg::GL2Extensions::GL2Extensions(lua_Table * data, unsigned int contextID)
	static osg::GL2Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GL2Extensions::GL2Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::GL2Extensions::GL2Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_GL2Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::GL2Extensions::GL2Extensions
	static osg::GL2Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GL2Extensions, cannot match any of the overloads for function GL2Extensions:\n  GL2Extensions(unsigned int)\n  GL2Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::GL2Extensions::setupGL2Extensions(unsigned int contextID)
	static int _bind_setupGL2Extensions(lua_State *L) {
		if (!_lg_typecheck_setupGL2Extensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setupGL2Extensions(unsigned int contextID) function, expected prototype:\nvoid osg::GL2Extensions::setupGL2Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setupGL2Extensions(unsigned int)");
		}
		self->setupGL2Extensions(contextID);

		return 0;
	}

	// bool osg::GL2Extensions::isGlslSupported() const
	static int _bind_isGlslSupported(lua_State *L) {
		if (!_lg_typecheck_isGlslSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::isGlslSupported() const function, expected prototype:\nbool osg::GL2Extensions::isGlslSupported() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::isGlslSupported() const");
		}
		bool lret = self->isGlslSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float osg::GL2Extensions::getGlVersion() const
	static int _bind_getGlVersion(lua_State *L) {
		if (!_lg_typecheck_getGlVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::GL2Extensions::getGlVersion() const function, expected prototype:\nfloat osg::GL2Extensions::getGlVersion() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::GL2Extensions::getGlVersion() const");
		}
		float lret = self->getGlVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::GL2Extensions::getLanguageVersion() const
	static int _bind_getLanguageVersion(lua_State *L) {
		if (!_lg_typecheck_getLanguageVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::GL2Extensions::getLanguageVersion() const function, expected prototype:\nfloat osg::GL2Extensions::getLanguageVersion() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::GL2Extensions::getLanguageVersion() const");
		}
		float lret = self->getLanguageVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GL2Extensions::setShaderObjectsSupported(bool flag)
	static int _bind_setShaderObjectsSupported(lua_State *L) {
		if (!_lg_typecheck_setShaderObjectsSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setShaderObjectsSupported(bool flag) function, expected prototype:\nvoid osg::GL2Extensions::setShaderObjectsSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setShaderObjectsSupported(bool)");
		}
		self->setShaderObjectsSupported(flag);

		return 0;
	}

	// bool osg::GL2Extensions::isShaderObjectsSupported() const
	static int _bind_isShaderObjectsSupported(lua_State *L) {
		if (!_lg_typecheck_isShaderObjectsSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::isShaderObjectsSupported() const function, expected prototype:\nbool osg::GL2Extensions::isShaderObjectsSupported() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::isShaderObjectsSupported() const");
		}
		bool lret = self->isShaderObjectsSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::setVertexShaderSupported(bool flag)
	static int _bind_setVertexShaderSupported(lua_State *L) {
		if (!_lg_typecheck_setVertexShaderSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setVertexShaderSupported(bool flag) function, expected prototype:\nvoid osg::GL2Extensions::setVertexShaderSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setVertexShaderSupported(bool)");
		}
		self->setVertexShaderSupported(flag);

		return 0;
	}

	// bool osg::GL2Extensions::isVertexShaderSupported() const
	static int _bind_isVertexShaderSupported(lua_State *L) {
		if (!_lg_typecheck_isVertexShaderSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::isVertexShaderSupported() const function, expected prototype:\nbool osg::GL2Extensions::isVertexShaderSupported() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::isVertexShaderSupported() const");
		}
		bool lret = self->isVertexShaderSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::setFragmentShaderSupported(bool flag)
	static int _bind_setFragmentShaderSupported(lua_State *L) {
		if (!_lg_typecheck_setFragmentShaderSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setFragmentShaderSupported(bool flag) function, expected prototype:\nvoid osg::GL2Extensions::setFragmentShaderSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setFragmentShaderSupported(bool)");
		}
		self->setFragmentShaderSupported(flag);

		return 0;
	}

	// bool osg::GL2Extensions::isFragmentShaderSupported() const
	static int _bind_isFragmentShaderSupported(lua_State *L) {
		if (!_lg_typecheck_isFragmentShaderSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::isFragmentShaderSupported() const function, expected prototype:\nbool osg::GL2Extensions::isFragmentShaderSupported() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::isFragmentShaderSupported() const");
		}
		bool lret = self->isFragmentShaderSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::setLanguage100Supported(bool flag)
	static int _bind_setLanguage100Supported(lua_State *L) {
		if (!_lg_typecheck_setLanguage100Supported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setLanguage100Supported(bool flag) function, expected prototype:\nvoid osg::GL2Extensions::setLanguage100Supported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setLanguage100Supported(bool)");
		}
		self->setLanguage100Supported(flag);

		return 0;
	}

	// bool osg::GL2Extensions::isLanguage100Supported() const
	static int _bind_isLanguage100Supported(lua_State *L) {
		if (!_lg_typecheck_isLanguage100Supported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::isLanguage100Supported() const function, expected prototype:\nbool osg::GL2Extensions::isLanguage100Supported() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::isLanguage100Supported() const");
		}
		bool lret = self->isLanguage100Supported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::setGeometryShader4Supported(bool flag)
	static int _bind_setGeometryShader4Supported(lua_State *L) {
		if (!_lg_typecheck_setGeometryShader4Supported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setGeometryShader4Supported(bool flag) function, expected prototype:\nvoid osg::GL2Extensions::setGeometryShader4Supported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setGeometryShader4Supported(bool)");
		}
		self->setGeometryShader4Supported(flag);

		return 0;
	}

	// bool osg::GL2Extensions::isGeometryShader4Supported() const
	static int _bind_isGeometryShader4Supported(lua_State *L) {
		if (!_lg_typecheck_isGeometryShader4Supported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::isGeometryShader4Supported() const function, expected prototype:\nbool osg::GL2Extensions::isGeometryShader4Supported() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::isGeometryShader4Supported() const");
		}
		bool lret = self->isGeometryShader4Supported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::setTessellationShadersSupported(bool flag)
	static int _bind_setTessellationShadersSupported(lua_State *L) {
		if (!_lg_typecheck_setTessellationShadersSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setTessellationShadersSupported(bool flag) function, expected prototype:\nvoid osg::GL2Extensions::setTessellationShadersSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setTessellationShadersSupported(bool)");
		}
		self->setTessellationShadersSupported(flag);

		return 0;
	}

	// bool osg::GL2Extensions::areTessellationShadersSupported() const
	static int _bind_areTessellationShadersSupported(lua_State *L) {
		if (!_lg_typecheck_areTessellationShadersSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::areTessellationShadersSupported() const function, expected prototype:\nbool osg::GL2Extensions::areTessellationShadersSupported() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::areTessellationShadersSupported() const");
		}
		bool lret = self->areTessellationShadersSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::setGpuShader4Supported(bool flag)
	static int _bind_setGpuShader4Supported(lua_State *L) {
		if (!_lg_typecheck_setGpuShader4Supported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setGpuShader4Supported(bool flag) function, expected prototype:\nvoid osg::GL2Extensions::setGpuShader4Supported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setGpuShader4Supported(bool)");
		}
		self->setGpuShader4Supported(flag);

		return 0;
	}

	// bool osg::GL2Extensions::isGpuShader4Supported() const
	static int _bind_isGpuShader4Supported(lua_State *L) {
		if (!_lg_typecheck_isGpuShader4Supported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::isGpuShader4Supported() const function, expected prototype:\nbool osg::GL2Extensions::isGpuShader4Supported() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::isGpuShader4Supported() const");
		}
		bool lret = self->isGpuShader4Supported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::setUniformBufferObjectSupported(bool flag)
	static int _bind_setUniformBufferObjectSupported(lua_State *L) {
		if (!_lg_typecheck_setUniformBufferObjectSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setUniformBufferObjectSupported(bool flag) function, expected prototype:\nvoid osg::GL2Extensions::setUniformBufferObjectSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setUniformBufferObjectSupported(bool)");
		}
		self->setUniformBufferObjectSupported(flag);

		return 0;
	}

	// bool osg::GL2Extensions::isUniformBufferObjectSupported()
	static int _bind_isUniformBufferObjectSupported(lua_State *L) {
		if (!_lg_typecheck_isUniformBufferObjectSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::isUniformBufferObjectSupported() function, expected prototype:\nbool osg::GL2Extensions::isUniformBufferObjectSupported()\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::isUniformBufferObjectSupported()");
		}
		bool lret = self->isUniformBufferObjectSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::setGetProgramBinarySupported(bool flag)
	static int _bind_setGetProgramBinarySupported(lua_State *L) {
		if (!_lg_typecheck_setGetProgramBinarySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::setGetProgramBinarySupported(bool flag) function, expected prototype:\nvoid osg::GL2Extensions::setGetProgramBinarySupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::setGetProgramBinarySupported(bool)");
		}
		self->setGetProgramBinarySupported(flag);

		return 0;
	}

	// bool osg::GL2Extensions::isGetProgramBinarySupported()
	static int _bind_isGetProgramBinarySupported(lua_State *L) {
		if (!_lg_typecheck_isGetProgramBinarySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::isGetProgramBinarySupported() function, expected prototype:\nbool osg::GL2Extensions::isGetProgramBinarySupported()\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::isGetProgramBinarySupported()");
		}
		bool lret = self->isGetProgramBinarySupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) const
	static int _bind_glBlendEquationSeparate(lua_State *L) {
		if (!_lg_typecheck_glBlendEquationSeparate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) const function, expected prototype:\nvoid osg::GL2Extensions::glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha) const\nClass arguments details:\n");
		}

		unsigned int modeRGB=(unsigned int)lua_tointeger(L,2);
		unsigned int modeAlpha=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glBlendEquationSeparate(unsigned int, unsigned int) const");
		}
		self->glBlendEquationSeparate(modeRGB, modeAlpha);

		return 0;
	}

	// void osg::GL2Extensions::glDrawBuffers(int n, const unsigned int * bufs) const
	static int _bind_glDrawBuffers(lua_State *L) {
		if (!_lg_typecheck_glDrawBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glDrawBuffers(int n, const unsigned int * bufs) const function, expected prototype:\nvoid osg::GL2Extensions::glDrawBuffers(int n, const unsigned int * bufs) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int bufs=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glDrawBuffers(int, const unsigned int *) const");
		}
		self->glDrawBuffers(n, &bufs);

		return 0;
	}

	// void osg::GL2Extensions::glStencilOpSeparate(unsigned int face, unsigned int sfail, unsigned int dpfail, unsigned int dppass) const
	static int _bind_glStencilOpSeparate(lua_State *L) {
		if (!_lg_typecheck_glStencilOpSeparate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glStencilOpSeparate(unsigned int face, unsigned int sfail, unsigned int dpfail, unsigned int dppass) const function, expected prototype:\nvoid osg::GL2Extensions::glStencilOpSeparate(unsigned int face, unsigned int sfail, unsigned int dpfail, unsigned int dppass) const\nClass arguments details:\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		unsigned int sfail=(unsigned int)lua_tointeger(L,3);
		unsigned int dpfail=(unsigned int)lua_tointeger(L,4);
		unsigned int dppass=(unsigned int)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glStencilOpSeparate(unsigned int, unsigned int, unsigned int, unsigned int) const");
		}
		self->glStencilOpSeparate(face, sfail, dpfail, dppass);

		return 0;
	}

	// void osg::GL2Extensions::glStencilFuncSeparate(unsigned int frontfunc, unsigned int backfunc, int ref, unsigned int mask) const
	static int _bind_glStencilFuncSeparate(lua_State *L) {
		if (!_lg_typecheck_glStencilFuncSeparate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glStencilFuncSeparate(unsigned int frontfunc, unsigned int backfunc, int ref, unsigned int mask) const function, expected prototype:\nvoid osg::GL2Extensions::glStencilFuncSeparate(unsigned int frontfunc, unsigned int backfunc, int ref, unsigned int mask) const\nClass arguments details:\n");
		}

		unsigned int frontfunc=(unsigned int)lua_tointeger(L,2);
		unsigned int backfunc=(unsigned int)lua_tointeger(L,3);
		int ref=(int)lua_tointeger(L,4);
		unsigned int mask=(unsigned int)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glStencilFuncSeparate(unsigned int, unsigned int, int, unsigned int) const");
		}
		self->glStencilFuncSeparate(frontfunc, backfunc, ref, mask);

		return 0;
	}

	// void osg::GL2Extensions::glStencilMaskSeparate(unsigned int face, unsigned int mask) const
	static int _bind_glStencilMaskSeparate(lua_State *L) {
		if (!_lg_typecheck_glStencilMaskSeparate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glStencilMaskSeparate(unsigned int face, unsigned int mask) const function, expected prototype:\nvoid osg::GL2Extensions::glStencilMaskSeparate(unsigned int face, unsigned int mask) const\nClass arguments details:\n");
		}

		unsigned int face=(unsigned int)lua_tointeger(L,2);
		unsigned int mask=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glStencilMaskSeparate(unsigned int, unsigned int) const");
		}
		self->glStencilMaskSeparate(face, mask);

		return 0;
	}

	// void osg::GL2Extensions::glAttachShader(unsigned int program, unsigned int shader) const
	static int _bind_glAttachShader(lua_State *L) {
		if (!_lg_typecheck_glAttachShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glAttachShader(unsigned int program, unsigned int shader) const function, expected prototype:\nvoid osg::GL2Extensions::glAttachShader(unsigned int program, unsigned int shader) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int shader=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glAttachShader(unsigned int, unsigned int) const");
		}
		self->glAttachShader(program, shader);

		return 0;
	}

	// void osg::GL2Extensions::glBindAttribLocation(unsigned int program, unsigned int index, const char * name) const
	static int _bind_glBindAttribLocation(lua_State *L) {
		if (!_lg_typecheck_glBindAttribLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glBindAttribLocation(unsigned int program, unsigned int index, const char * name) const function, expected prototype:\nvoid osg::GL2Extensions::glBindAttribLocation(unsigned int program, unsigned int index, const char * name) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int index=(unsigned int)lua_tointeger(L,3);
		const char * name=(const char *)lua_tostring(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glBindAttribLocation(unsigned int, unsigned int, const char *) const");
		}
		self->glBindAttribLocation(program, index, name);

		return 0;
	}

	// void osg::GL2Extensions::glCompileShader(unsigned int shader) const
	static int _bind_glCompileShader(lua_State *L) {
		if (!_lg_typecheck_glCompileShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glCompileShader(unsigned int shader) const function, expected prototype:\nvoid osg::GL2Extensions::glCompileShader(unsigned int shader) const\nClass arguments details:\n");
		}

		unsigned int shader=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glCompileShader(unsigned int) const");
		}
		self->glCompileShader(shader);

		return 0;
	}

	// unsigned int osg::GL2Extensions::glCreateProgram() const
	static int _bind_glCreateProgram(lua_State *L) {
		if (!_lg_typecheck_glCreateProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GL2Extensions::glCreateProgram() const function, expected prototype:\nunsigned int osg::GL2Extensions::glCreateProgram() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GL2Extensions::glCreateProgram() const");
		}
		unsigned int lret = self->glCreateProgram();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GL2Extensions::glCreateShader(unsigned int type) const
	static int _bind_glCreateShader(lua_State *L) {
		if (!_lg_typecheck_glCreateShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GL2Extensions::glCreateShader(unsigned int type) const function, expected prototype:\nunsigned int osg::GL2Extensions::glCreateShader(unsigned int type) const\nClass arguments details:\n");
		}

		unsigned int type=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GL2Extensions::glCreateShader(unsigned int) const");
		}
		unsigned int lret = self->glCreateShader(type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GL2Extensions::glDeleteProgram(unsigned int program) const
	static int _bind_glDeleteProgram(lua_State *L) {
		if (!_lg_typecheck_glDeleteProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glDeleteProgram(unsigned int program) const function, expected prototype:\nvoid osg::GL2Extensions::glDeleteProgram(unsigned int program) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glDeleteProgram(unsigned int) const");
		}
		self->glDeleteProgram(program);

		return 0;
	}

	// void osg::GL2Extensions::glDeleteShader(unsigned int shader) const
	static int _bind_glDeleteShader(lua_State *L) {
		if (!_lg_typecheck_glDeleteShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glDeleteShader(unsigned int shader) const function, expected prototype:\nvoid osg::GL2Extensions::glDeleteShader(unsigned int shader) const\nClass arguments details:\n");
		}

		unsigned int shader=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glDeleteShader(unsigned int) const");
		}
		self->glDeleteShader(shader);

		return 0;
	}

	// void osg::GL2Extensions::glDetachShader(unsigned int program, unsigned int shader) const
	static int _bind_glDetachShader(lua_State *L) {
		if (!_lg_typecheck_glDetachShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glDetachShader(unsigned int program, unsigned int shader) const function, expected prototype:\nvoid osg::GL2Extensions::glDetachShader(unsigned int program, unsigned int shader) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int shader=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glDetachShader(unsigned int, unsigned int) const");
		}
		self->glDetachShader(program, shader);

		return 0;
	}

	// void osg::GL2Extensions::glDisableVertexAttribArray(unsigned int index) const
	static int _bind_glDisableVertexAttribArray(lua_State *L) {
		if (!_lg_typecheck_glDisableVertexAttribArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glDisableVertexAttribArray(unsigned int index) const function, expected prototype:\nvoid osg::GL2Extensions::glDisableVertexAttribArray(unsigned int index) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glDisableVertexAttribArray(unsigned int) const");
		}
		self->glDisableVertexAttribArray(index);

		return 0;
	}

	// void osg::GL2Extensions::glEnableVertexAttribArray(unsigned int index) const
	static int _bind_glEnableVertexAttribArray(lua_State *L) {
		if (!_lg_typecheck_glEnableVertexAttribArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glEnableVertexAttribArray(unsigned int index) const function, expected prototype:\nvoid osg::GL2Extensions::glEnableVertexAttribArray(unsigned int index) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glEnableVertexAttribArray(unsigned int) const");
		}
		self->glEnableVertexAttribArray(index);

		return 0;
	}

	// void osg::GL2Extensions::glGetActiveAttrib(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) const
	static int _bind_glGetActiveAttrib(lua_State *L) {
		if (!_lg_typecheck_glGetActiveAttrib(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetActiveAttrib(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) const function, expected prototype:\nvoid osg::GL2Extensions::glGetActiveAttrib(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int index=(unsigned int)lua_tointeger(L,3);
		int bufSize=(int)lua_tointeger(L,4);
		int length=(int)lua_tointeger(L,5);
		int size=(int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		char name=(char)lua_tointeger(L,8);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetActiveAttrib(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *) const");
		}
		self->glGetActiveAttrib(program, index, bufSize, &length, &size, &type, &name);

		return 0;
	}

	// void osg::GL2Extensions::glGetActiveUniform(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) const
	static int _bind_glGetActiveUniform(lua_State *L) {
		if (!_lg_typecheck_glGetActiveUniform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetActiveUniform(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) const function, expected prototype:\nvoid osg::GL2Extensions::glGetActiveUniform(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type, char * name) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int index=(unsigned int)lua_tointeger(L,3);
		int bufSize=(int)lua_tointeger(L,4);
		int length=(int)lua_tointeger(L,5);
		int size=(int)lua_tointeger(L,6);
		unsigned int type=(unsigned int)lua_tointeger(L,7);
		char name=(char)lua_tointeger(L,8);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetActiveUniform(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *) const");
		}
		self->glGetActiveUniform(program, index, bufSize, &length, &size, &type, &name);

		return 0;
	}

	// void osg::GL2Extensions::glGetAttachedShaders(unsigned int program, int maxCount, int * count, unsigned int * obj) const
	static int _bind_glGetAttachedShaders(lua_State *L) {
		if (!_lg_typecheck_glGetAttachedShaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetAttachedShaders(unsigned int program, int maxCount, int * count, unsigned int * obj) const function, expected prototype:\nvoid osg::GL2Extensions::glGetAttachedShaders(unsigned int program, int maxCount, int * count, unsigned int * obj) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		int maxCount=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);
		unsigned int obj=(unsigned int)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetAttachedShaders(unsigned int, int, int *, unsigned int *) const");
		}
		self->glGetAttachedShaders(program, maxCount, &count, &obj);

		return 0;
	}

	// int osg::GL2Extensions::glGetAttribLocation(unsigned int program, const char * name) const
	static int _bind_glGetAttribLocation(lua_State *L) {
		if (!_lg_typecheck_glGetAttribLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::GL2Extensions::glGetAttribLocation(unsigned int program, const char * name) const function, expected prototype:\nint osg::GL2Extensions::glGetAttribLocation(unsigned int program, const char * name) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		const char * name=(const char *)lua_tostring(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::GL2Extensions::glGetAttribLocation(unsigned int, const char *) const");
		}
		int lret = self->glGetAttribLocation(program, name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GL2Extensions::glGetProgramiv(unsigned int program, unsigned int pname, int * params) const
	static int _bind_glGetProgramiv(lua_State *L) {
		if (!_lg_typecheck_glGetProgramiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetProgramiv(unsigned int program, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetProgramiv(unsigned int program, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int params=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetProgramiv(unsigned int, unsigned int, int *) const");
		}
		self->glGetProgramiv(program, pname, &params);

		return 0;
	}

	// void osg::GL2Extensions::glGetProgramInfoLog(unsigned int program, int bufSize, int * length, char * infoLog) const
	static int _bind_glGetProgramInfoLog(lua_State *L) {
		if (!_lg_typecheck_glGetProgramInfoLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetProgramInfoLog(unsigned int program, int bufSize, int * length, char * infoLog) const function, expected prototype:\nvoid osg::GL2Extensions::glGetProgramInfoLog(unsigned int program, int bufSize, int * length, char * infoLog) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		int bufSize=(int)lua_tointeger(L,3);
		int length=(int)lua_tointeger(L,4);
		char infoLog=(char)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetProgramInfoLog(unsigned int, int, int *, char *) const");
		}
		self->glGetProgramInfoLog(program, bufSize, &length, &infoLog);

		return 0;
	}

	// void osg::GL2Extensions::glGetShaderiv(unsigned int shader, unsigned int pname, int * params) const
	static int _bind_glGetShaderiv(lua_State *L) {
		if (!_lg_typecheck_glGetShaderiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetShaderiv(unsigned int shader, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetShaderiv(unsigned int shader, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int shader=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int params=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetShaderiv(unsigned int, unsigned int, int *) const");
		}
		self->glGetShaderiv(shader, pname, &params);

		return 0;
	}

	// void osg::GL2Extensions::glGetShaderInfoLog(unsigned int shader, int bufSize, int * length, char * infoLog) const
	static int _bind_glGetShaderInfoLog(lua_State *L) {
		if (!_lg_typecheck_glGetShaderInfoLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetShaderInfoLog(unsigned int shader, int bufSize, int * length, char * infoLog) const function, expected prototype:\nvoid osg::GL2Extensions::glGetShaderInfoLog(unsigned int shader, int bufSize, int * length, char * infoLog) const\nClass arguments details:\n");
		}

		unsigned int shader=(unsigned int)lua_tointeger(L,2);
		int bufSize=(int)lua_tointeger(L,3);
		int length=(int)lua_tointeger(L,4);
		char infoLog=(char)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetShaderInfoLog(unsigned int, int, int *, char *) const");
		}
		self->glGetShaderInfoLog(shader, bufSize, &length, &infoLog);

		return 0;
	}

	// void osg::GL2Extensions::glGetShaderSource(unsigned int shader, int bufSize, int * length, char * source) const
	static int _bind_glGetShaderSource(lua_State *L) {
		if (!_lg_typecheck_glGetShaderSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetShaderSource(unsigned int shader, int bufSize, int * length, char * source) const function, expected prototype:\nvoid osg::GL2Extensions::glGetShaderSource(unsigned int shader, int bufSize, int * length, char * source) const\nClass arguments details:\n");
		}

		unsigned int shader=(unsigned int)lua_tointeger(L,2);
		int bufSize=(int)lua_tointeger(L,3);
		int length=(int)lua_tointeger(L,4);
		char source=(char)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetShaderSource(unsigned int, int, int *, char *) const");
		}
		self->glGetShaderSource(shader, bufSize, &length, &source);

		return 0;
	}

	// int osg::GL2Extensions::glGetUniformLocation(unsigned int program, const char * name) const
	static int _bind_glGetUniformLocation(lua_State *L) {
		if (!_lg_typecheck_glGetUniformLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::GL2Extensions::glGetUniformLocation(unsigned int program, const char * name) const function, expected prototype:\nint osg::GL2Extensions::glGetUniformLocation(unsigned int program, const char * name) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		const char * name=(const char *)lua_tostring(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::GL2Extensions::glGetUniformLocation(unsigned int, const char *) const");
		}
		int lret = self->glGetUniformLocation(program, name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GL2Extensions::glGetUniformfv(unsigned int program, int location, float * params) const
	static int _bind_glGetUniformfv(lua_State *L) {
		if (!_lg_typecheck_glGetUniformfv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetUniformfv(unsigned int program, int location, float * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetUniformfv(unsigned int program, int location, float * params) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		int location=(int)lua_tointeger(L,3);
		float params=(float)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetUniformfv(unsigned int, int, float *) const");
		}
		self->glGetUniformfv(program, location, &params);

		return 0;
	}

	// void osg::GL2Extensions::glGetUniformiv(unsigned int program, int location, int * params) const
	static int _bind_glGetUniformiv(lua_State *L) {
		if (!_lg_typecheck_glGetUniformiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetUniformiv(unsigned int program, int location, int * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetUniformiv(unsigned int program, int location, int * params) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		int location=(int)lua_tointeger(L,3);
		int params=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetUniformiv(unsigned int, int, int *) const");
		}
		self->glGetUniformiv(program, location, &params);

		return 0;
	}

	// void osg::GL2Extensions::glGetVertexAttribdv(unsigned int index, unsigned int pname, double * params) const
	static int _bind_glGetVertexAttribdv(lua_State *L) {
		if (!_lg_typecheck_glGetVertexAttribdv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetVertexAttribdv(unsigned int index, unsigned int pname, double * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetVertexAttribdv(unsigned int index, unsigned int pname, double * params) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		double params=(double)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetVertexAttribdv(unsigned int, unsigned int, double *) const");
		}
		self->glGetVertexAttribdv(index, pname, &params);

		return 0;
	}

	// void osg::GL2Extensions::glGetVertexAttribfv(unsigned int index, unsigned int pname, float * params) const
	static int _bind_glGetVertexAttribfv(lua_State *L) {
		if (!_lg_typecheck_glGetVertexAttribfv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetVertexAttribfv(unsigned int index, unsigned int pname, float * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetVertexAttribfv(unsigned int index, unsigned int pname, float * params) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		float params=(float)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetVertexAttribfv(unsigned int, unsigned int, float *) const");
		}
		self->glGetVertexAttribfv(index, pname, &params);

		return 0;
	}

	// void osg::GL2Extensions::glGetVertexAttribiv(unsigned int index, unsigned int pname, int * params) const
	static int _bind_glGetVertexAttribiv(lua_State *L) {
		if (!_lg_typecheck_glGetVertexAttribiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetVertexAttribiv(unsigned int index, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetVertexAttribiv(unsigned int index, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int params=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetVertexAttribiv(unsigned int, unsigned int, int *) const");
		}
		self->glGetVertexAttribiv(index, pname, &params);

		return 0;
	}

	// unsigned char osg::GL2Extensions::glIsProgram(unsigned int program) const
	static int _bind_glIsProgram(lua_State *L) {
		if (!_lg_typecheck_glIsProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char osg::GL2Extensions::glIsProgram(unsigned int program) const function, expected prototype:\nunsigned char osg::GL2Extensions::glIsProgram(unsigned int program) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char osg::GL2Extensions::glIsProgram(unsigned int) const");
		}
		unsigned char lret = self->glIsProgram(program);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char osg::GL2Extensions::glIsShader(unsigned int shader) const
	static int _bind_glIsShader(lua_State *L) {
		if (!_lg_typecheck_glIsShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char osg::GL2Extensions::glIsShader(unsigned int shader) const function, expected prototype:\nunsigned char osg::GL2Extensions::glIsShader(unsigned int shader) const\nClass arguments details:\n");
		}

		unsigned int shader=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char osg::GL2Extensions::glIsShader(unsigned int) const");
		}
		unsigned char lret = self->glIsShader(shader);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void osg::GL2Extensions::glLinkProgram(unsigned int program) const
	static int _bind_glLinkProgram(lua_State *L) {
		if (!_lg_typecheck_glLinkProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glLinkProgram(unsigned int program) const function, expected prototype:\nvoid osg::GL2Extensions::glLinkProgram(unsigned int program) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glLinkProgram(unsigned int) const");
		}
		self->glLinkProgram(program);

		return 0;
	}

	// void osg::GL2Extensions::glUseProgram(unsigned int program) const
	static int _bind_glUseProgram(lua_State *L) {
		if (!_lg_typecheck_glUseProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUseProgram(unsigned int program) const function, expected prototype:\nvoid osg::GL2Extensions::glUseProgram(unsigned int program) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUseProgram(unsigned int) const");
		}
		self->glUseProgram(program);

		return 0;
	}

	// void osg::GL2Extensions::glUniform1f(int location, float v0) const
	static int _bind_glUniform1f(lua_State *L) {
		if (!_lg_typecheck_glUniform1f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform1f(int location, float v0) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform1f(int location, float v0) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		float v0=(float)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform1f(int, float) const");
		}
		self->glUniform1f(location, v0);

		return 0;
	}

	// void osg::GL2Extensions::glUniform2f(int location, float v0, float v1) const
	static int _bind_glUniform2f(lua_State *L) {
		if (!_lg_typecheck_glUniform2f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform2f(int location, float v0, float v1) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform2f(int location, float v0, float v1) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		float v0=(float)lua_tonumber(L,3);
		float v1=(float)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform2f(int, float, float) const");
		}
		self->glUniform2f(location, v0, v1);

		return 0;
	}

	// void osg::GL2Extensions::glUniform3f(int location, float v0, float v1, float v2) const
	static int _bind_glUniform3f(lua_State *L) {
		if (!_lg_typecheck_glUniform3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform3f(int location, float v0, float v1, float v2) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform3f(int location, float v0, float v1, float v2) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		float v0=(float)lua_tonumber(L,3);
		float v1=(float)lua_tonumber(L,4);
		float v2=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform3f(int, float, float, float) const");
		}
		self->glUniform3f(location, v0, v1, v2);

		return 0;
	}

	// void osg::GL2Extensions::glUniform4f(int location, float v0, float v1, float v2, float v3) const
	static int _bind_glUniform4f(lua_State *L) {
		if (!_lg_typecheck_glUniform4f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform4f(int location, float v0, float v1, float v2, float v3) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform4f(int location, float v0, float v1, float v2, float v3) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		float v0=(float)lua_tonumber(L,3);
		float v1=(float)lua_tonumber(L,4);
		float v2=(float)lua_tonumber(L,5);
		float v3=(float)lua_tonumber(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform4f(int, float, float, float, float) const");
		}
		self->glUniform4f(location, v0, v1, v2, v3);

		return 0;
	}

	// void osg::GL2Extensions::glUniform1i(int location, int v0) const
	static int _bind_glUniform1i(lua_State *L) {
		if (!_lg_typecheck_glUniform1i(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform1i(int location, int v0) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform1i(int location, int v0) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int v0=(int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform1i(int, int) const");
		}
		self->glUniform1i(location, v0);

		return 0;
	}

	// void osg::GL2Extensions::glUniform2i(int location, int v0, int v1) const
	static int _bind_glUniform2i(lua_State *L) {
		if (!_lg_typecheck_glUniform2i(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform2i(int location, int v0, int v1) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform2i(int location, int v0, int v1) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int v0=(int)lua_tointeger(L,3);
		int v1=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform2i(int, int, int) const");
		}
		self->glUniform2i(location, v0, v1);

		return 0;
	}

	// void osg::GL2Extensions::glUniform3i(int location, int v0, int v1, int v2) const
	static int _bind_glUniform3i(lua_State *L) {
		if (!_lg_typecheck_glUniform3i(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform3i(int location, int v0, int v1, int v2) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform3i(int location, int v0, int v1, int v2) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int v0=(int)lua_tointeger(L,3);
		int v1=(int)lua_tointeger(L,4);
		int v2=(int)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform3i(int, int, int, int) const");
		}
		self->glUniform3i(location, v0, v1, v2);

		return 0;
	}

	// void osg::GL2Extensions::glUniform4i(int location, int v0, int v1, int v2, int v3) const
	static int _bind_glUniform4i(lua_State *L) {
		if (!_lg_typecheck_glUniform4i(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform4i(int location, int v0, int v1, int v2, int v3) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform4i(int location, int v0, int v1, int v2, int v3) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int v0=(int)lua_tointeger(L,3);
		int v1=(int)lua_tointeger(L,4);
		int v2=(int)lua_tointeger(L,5);
		int v3=(int)lua_tointeger(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform4i(int, int, int, int, int) const");
		}
		self->glUniform4i(location, v0, v1, v2, v3);

		return 0;
	}

	// void osg::GL2Extensions::glUniform1fv(int location, int count, const float * value) const
	static int _bind_glUniform1fv(lua_State *L) {
		if (!_lg_typecheck_glUniform1fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform1fv(int location, int count, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform1fv(int location, int count, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		float value=(float)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform1fv(int, int, const float *) const");
		}
		self->glUniform1fv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform2fv(int location, int count, const float * value) const
	static int _bind_glUniform2fv(lua_State *L) {
		if (!_lg_typecheck_glUniform2fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform2fv(int location, int count, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform2fv(int location, int count, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		float value=(float)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform2fv(int, int, const float *) const");
		}
		self->glUniform2fv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform3fv(int location, int count, const float * value) const
	static int _bind_glUniform3fv(lua_State *L) {
		if (!_lg_typecheck_glUniform3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform3fv(int location, int count, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform3fv(int location, int count, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		float value=(float)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform3fv(int, int, const float *) const");
		}
		self->glUniform3fv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform4fv(int location, int count, const float * value) const
	static int _bind_glUniform4fv(lua_State *L) {
		if (!_lg_typecheck_glUniform4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform4fv(int location, int count, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform4fv(int location, int count, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		float value=(float)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform4fv(int, int, const float *) const");
		}
		self->glUniform4fv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform1iv(int location, int count, const int * value) const
	static int _bind_glUniform1iv(lua_State *L) {
		if (!_lg_typecheck_glUniform1iv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform1iv(int location, int count, const int * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform1iv(int location, int count, const int * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		int value=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform1iv(int, int, const int *) const");
		}
		self->glUniform1iv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform2iv(int location, int count, const int * value) const
	static int _bind_glUniform2iv(lua_State *L) {
		if (!_lg_typecheck_glUniform2iv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform2iv(int location, int count, const int * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform2iv(int location, int count, const int * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		int value=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform2iv(int, int, const int *) const");
		}
		self->glUniform2iv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform3iv(int location, int count, const int * value) const
	static int _bind_glUniform3iv(lua_State *L) {
		if (!_lg_typecheck_glUniform3iv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform3iv(int location, int count, const int * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform3iv(int location, int count, const int * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		int value=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform3iv(int, int, const int *) const");
		}
		self->glUniform3iv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform4iv(int location, int count, const int * value) const
	static int _bind_glUniform4iv(lua_State *L) {
		if (!_lg_typecheck_glUniform4iv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform4iv(int location, int count, const int * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform4iv(int location, int count, const int * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		int value=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform4iv(int, int, const int *) const");
		}
		self->glUniform4iv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniformMatrix2fv(int location, int count, unsigned char transpose, const float * value) const
	static int _bind_glUniformMatrix2fv(lua_State *L) {
		if (!_lg_typecheck_glUniformMatrix2fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformMatrix2fv(int location, int count, unsigned char transpose, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformMatrix2fv(int location, int count, unsigned char transpose, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
		float value=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformMatrix2fv(int, int, unsigned char, const float *) const");
		}
		self->glUniformMatrix2fv(location, count, transpose, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniformMatrix3fv(int location, int count, unsigned char transpose, const float * value) const
	static int _bind_glUniformMatrix3fv(lua_State *L) {
		if (!_lg_typecheck_glUniformMatrix3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformMatrix3fv(int location, int count, unsigned char transpose, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformMatrix3fv(int location, int count, unsigned char transpose, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
		float value=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformMatrix3fv(int, int, unsigned char, const float *) const");
		}
		self->glUniformMatrix3fv(location, count, transpose, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniformMatrix4fv(int location, int count, unsigned char transpose, const float * value) const
	static int _bind_glUniformMatrix4fv(lua_State *L) {
		if (!_lg_typecheck_glUniformMatrix4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformMatrix4fv(int location, int count, unsigned char transpose, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformMatrix4fv(int location, int count, unsigned char transpose, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
		float value=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformMatrix4fv(int, int, unsigned char, const float *) const");
		}
		self->glUniformMatrix4fv(location, count, transpose, &value);

		return 0;
	}

	// void osg::GL2Extensions::glValidateProgram(unsigned int program) const
	static int _bind_glValidateProgram(lua_State *L) {
		if (!_lg_typecheck_glValidateProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glValidateProgram(unsigned int program) const function, expected prototype:\nvoid osg::GL2Extensions::glValidateProgram(unsigned int program) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glValidateProgram(unsigned int) const");
		}
		self->glValidateProgram(program);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib1d(unsigned int index, double x) const
	static int _bind_glVertexAttrib1d(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib1d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib1d(unsigned int index, double x) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib1d(unsigned int index, double x) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double x=(double)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib1d(unsigned int, double) const");
		}
		self->glVertexAttrib1d(index, x);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib1dv(unsigned int index, const double * v) const
	static int _bind_glVertexAttrib1dv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib1dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib1dv(unsigned int index, const double * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib1dv(unsigned int index, const double * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double v=(double)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib1dv(unsigned int, const double *) const");
		}
		self->glVertexAttrib1dv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib1f(unsigned int index, float x) const
	static int _bind_glVertexAttrib1f(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib1f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib1f(unsigned int index, float x) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib1f(unsigned int index, float x) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib1f(unsigned int, float) const");
		}
		self->glVertexAttrib1f(index, x);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib1fv(unsigned int index, const float * v) const
	static int _bind_glVertexAttrib1fv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib1fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib1fv(unsigned int index, const float * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib1fv(unsigned int index, const float * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float v=(float)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib1fv(unsigned int, const float *) const");
		}
		self->glVertexAttrib1fv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib1s(unsigned int index, short x) const
	static int _bind_glVertexAttrib1s(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib1s(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib1s(unsigned int index, short x) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib1s(unsigned int index, short x) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short x=(short)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib1s(unsigned int, short) const");
		}
		self->glVertexAttrib1s(index, x);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib1sv(unsigned int index, const short * v) const
	static int _bind_glVertexAttrib1sv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib1sv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib1sv(unsigned int index, const short * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib1sv(unsigned int index, const short * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short v=(short)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib1sv(unsigned int, const short *) const");
		}
		self->glVertexAttrib1sv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib2d(unsigned int index, double x, double y) const
	static int _bind_glVertexAttrib2d(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib2d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib2d(unsigned int index, double x, double y) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib2d(unsigned int index, double x, double y) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib2d(unsigned int, double, double) const");
		}
		self->glVertexAttrib2d(index, x, y);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib2dv(unsigned int index, const double * v) const
	static int _bind_glVertexAttrib2dv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib2dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib2dv(unsigned int index, const double * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib2dv(unsigned int index, const double * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double v=(double)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib2dv(unsigned int, const double *) const");
		}
		self->glVertexAttrib2dv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib2f(unsigned int index, float x, float y) const
	static int _bind_glVertexAttrib2f(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib2f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib2f(unsigned int index, float x, float y) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib2f(unsigned int index, float x, float y) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib2f(unsigned int, float, float) const");
		}
		self->glVertexAttrib2f(index, x, y);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib2fv(unsigned int index, const float * v) const
	static int _bind_glVertexAttrib2fv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib2fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib2fv(unsigned int index, const float * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib2fv(unsigned int index, const float * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float v=(float)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib2fv(unsigned int, const float *) const");
		}
		self->glVertexAttrib2fv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib2s(unsigned int index, short x, short y) const
	static int _bind_glVertexAttrib2s(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib2s(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib2s(unsigned int index, short x, short y) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib2s(unsigned int index, short x, short y) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short x=(short)lua_tointeger(L,3);
		short y=(short)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib2s(unsigned int, short, short) const");
		}
		self->glVertexAttrib2s(index, x, y);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib2sv(unsigned int index, const short * v) const
	static int _bind_glVertexAttrib2sv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib2sv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib2sv(unsigned int index, const short * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib2sv(unsigned int index, const short * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short v=(short)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib2sv(unsigned int, const short *) const");
		}
		self->glVertexAttrib2sv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib3d(unsigned int index, double x, double y, double z) const
	static int _bind_glVertexAttrib3d(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib3d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib3d(unsigned int index, double x, double y, double z) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib3d(unsigned int index, double x, double y, double z) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib3d(unsigned int, double, double, double) const");
		}
		self->glVertexAttrib3d(index, x, y, z);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib3dv(unsigned int index, const double * v) const
	static int _bind_glVertexAttrib3dv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib3dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib3dv(unsigned int index, const double * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib3dv(unsigned int index, const double * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double v=(double)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib3dv(unsigned int, const double *) const");
		}
		self->glVertexAttrib3dv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib3f(unsigned int index, float x, float y, float z) const
	static int _bind_glVertexAttrib3f(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib3f(unsigned int index, float x, float y, float z) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib3f(unsigned int index, float x, float y, float z) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);
		float z=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib3f(unsigned int, float, float, float) const");
		}
		self->glVertexAttrib3f(index, x, y, z);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib3fv(unsigned int index, const float * v) const
	static int _bind_glVertexAttrib3fv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib3fv(unsigned int index, const float * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib3fv(unsigned int index, const float * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float v=(float)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib3fv(unsigned int, const float *) const");
		}
		self->glVertexAttrib3fv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib3s(unsigned int index, short x, short y, short z) const
	static int _bind_glVertexAttrib3s(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib3s(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib3s(unsigned int index, short x, short y, short z) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib3s(unsigned int index, short x, short y, short z) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short x=(short)lua_tointeger(L,3);
		short y=(short)lua_tointeger(L,4);
		short z=(short)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib3s(unsigned int, short, short, short) const");
		}
		self->glVertexAttrib3s(index, x, y, z);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib3sv(unsigned int index, const short * v) const
	static int _bind_glVertexAttrib3sv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib3sv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib3sv(unsigned int index, const short * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib3sv(unsigned int index, const short * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short v=(short)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib3sv(unsigned int, const short *) const");
		}
		self->glVertexAttrib3sv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4Nbv(unsigned int index, const signed char * v) const
	static int _bind_glVertexAttrib4Nbv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4Nbv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4Nbv(unsigned int index, const signed char * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4Nbv(unsigned int index, const signed char * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		signed char v=(signed char)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4Nbv(unsigned int, const signed char *) const");
		}
		self->glVertexAttrib4Nbv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4Niv(unsigned int index, const int * v) const
	static int _bind_glVertexAttrib4Niv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4Niv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4Niv(unsigned int index, const int * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4Niv(unsigned int index, const int * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int v=(int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4Niv(unsigned int, const int *) const");
		}
		self->glVertexAttrib4Niv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4Nsv(unsigned int index, const short * v) const
	static int _bind_glVertexAttrib4Nsv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4Nsv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4Nsv(unsigned int index, const short * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4Nsv(unsigned int index, const short * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short v=(short)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4Nsv(unsigned int, const short *) const");
		}
		self->glVertexAttrib4Nsv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4Nub(unsigned int index, unsigned char x, unsigned char y, unsigned char z, unsigned char w) const
	static int _bind_glVertexAttrib4Nub(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4Nub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4Nub(unsigned int index, unsigned char x, unsigned char y, unsigned char z, unsigned char w) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4Nub(unsigned int index, unsigned char x, unsigned char y, unsigned char z, unsigned char w) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned char x = (unsigned char)(lua_tointeger(L,3));
		unsigned char y = (unsigned char)(lua_tointeger(L,4));
		unsigned char z = (unsigned char)(lua_tointeger(L,5));
		unsigned char w = (unsigned char)(lua_tointeger(L,6));

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4Nub(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char) const");
		}
		self->glVertexAttrib4Nub(index, x, y, z, w);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4Nubv(unsigned int index, const unsigned char * v) const
	static int _bind_glVertexAttrib4Nubv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4Nubv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4Nubv(unsigned int index, const unsigned char * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4Nubv(unsigned int index, const unsigned char * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned char v = (unsigned char)(lua_tointeger(L,3));

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4Nubv(unsigned int, const unsigned char *) const");
		}
		self->glVertexAttrib4Nubv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4Nuiv(unsigned int index, const unsigned int * v) const
	static int _bind_glVertexAttrib4Nuiv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4Nuiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4Nuiv(unsigned int index, const unsigned int * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4Nuiv(unsigned int index, const unsigned int * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int v=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4Nuiv(unsigned int, const unsigned int *) const");
		}
		self->glVertexAttrib4Nuiv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4Nusv(unsigned int index, const unsigned short * v) const
	static int _bind_glVertexAttrib4Nusv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4Nusv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4Nusv(unsigned int index, const unsigned short * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4Nusv(unsigned int index, const unsigned short * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned short v=(unsigned short)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4Nusv(unsigned int, const unsigned short *) const");
		}
		self->glVertexAttrib4Nusv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4bv(unsigned int index, const signed char * v) const
	static int _bind_glVertexAttrib4bv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4bv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4bv(unsigned int index, const signed char * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4bv(unsigned int index, const signed char * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		signed char v=(signed char)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4bv(unsigned int, const signed char *) const");
		}
		self->glVertexAttrib4bv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4d(unsigned int index, double x, double y, double z, double w) const
	static int _bind_glVertexAttrib4d(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4d(unsigned int index, double x, double y, double z, double w) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4d(unsigned int index, double x, double y, double z, double w) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);
		double w=(double)lua_tonumber(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4d(unsigned int, double, double, double, double) const");
		}
		self->glVertexAttrib4d(index, x, y, z, w);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4dv(unsigned int index, const double * v) const
	static int _bind_glVertexAttrib4dv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4dv(unsigned int index, const double * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4dv(unsigned int index, const double * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double v=(double)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4dv(unsigned int, const double *) const");
		}
		self->glVertexAttrib4dv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4f(unsigned int index, float x, float y, float z, float w) const
	static int _bind_glVertexAttrib4f(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4f(unsigned int index, float x, float y, float z, float w) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4f(unsigned int index, float x, float y, float z, float w) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float x=(float)lua_tonumber(L,3);
		float y=(float)lua_tonumber(L,4);
		float z=(float)lua_tonumber(L,5);
		float w=(float)lua_tonumber(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4f(unsigned int, float, float, float, float) const");
		}
		self->glVertexAttrib4f(index, x, y, z, w);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4fv(unsigned int index, const float * v) const
	static int _bind_glVertexAttrib4fv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4fv(unsigned int index, const float * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4fv(unsigned int index, const float * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float v=(float)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4fv(unsigned int, const float *) const");
		}
		self->glVertexAttrib4fv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4iv(unsigned int index, const int * v) const
	static int _bind_glVertexAttrib4iv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4iv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4iv(unsigned int index, const int * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4iv(unsigned int index, const int * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int v=(int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4iv(unsigned int, const int *) const");
		}
		self->glVertexAttrib4iv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4s(unsigned int index, short x, short y, short z, short w) const
	static int _bind_glVertexAttrib4s(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4s(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4s(unsigned int index, short x, short y, short z, short w) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4s(unsigned int index, short x, short y, short z, short w) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short x=(short)lua_tointeger(L,3);
		short y=(short)lua_tointeger(L,4);
		short z=(short)lua_tointeger(L,5);
		short w=(short)lua_tointeger(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4s(unsigned int, short, short, short, short) const");
		}
		self->glVertexAttrib4s(index, x, y, z, w);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4sv(unsigned int index, const short * v) const
	static int _bind_glVertexAttrib4sv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4sv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4sv(unsigned int index, const short * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4sv(unsigned int index, const short * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short v=(short)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4sv(unsigned int, const short *) const");
		}
		self->glVertexAttrib4sv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4ubv(unsigned int index, const unsigned char * v) const
	static int _bind_glVertexAttrib4ubv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4ubv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4ubv(unsigned int index, const unsigned char * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4ubv(unsigned int index, const unsigned char * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned char v = (unsigned char)(lua_tointeger(L,3));

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4ubv(unsigned int, const unsigned char *) const");
		}
		self->glVertexAttrib4ubv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4uiv(unsigned int index, const unsigned int * v) const
	static int _bind_glVertexAttrib4uiv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4uiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4uiv(unsigned int index, const unsigned int * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4uiv(unsigned int index, const unsigned int * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned int v=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4uiv(unsigned int, const unsigned int *) const");
		}
		self->glVertexAttrib4uiv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttrib4usv(unsigned int index, const unsigned short * v) const
	static int _bind_glVertexAttrib4usv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4usv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttrib4usv(unsigned int index, const unsigned short * v) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttrib4usv(unsigned int index, const unsigned short * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned short v=(unsigned short)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttrib4usv(unsigned int, const unsigned short *) const");
		}
		self->glVertexAttrib4usv(index, &v);

		return 0;
	}

	// void osg::GL2Extensions::glVertexAttribPointer(unsigned int index, int size, unsigned int type, unsigned char normalized, int stride, const void * pointer) const
	static int _bind_glVertexAttribPointer(lua_State *L) {
		if (!_lg_typecheck_glVertexAttribPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glVertexAttribPointer(unsigned int index, int size, unsigned int type, unsigned char normalized, int stride, const void * pointer) const function, expected prototype:\nvoid osg::GL2Extensions::glVertexAttribPointer(unsigned int index, int size, unsigned int type, unsigned char normalized, int stride, const void * pointer) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		unsigned int type=(unsigned int)lua_tointeger(L,4);
		unsigned char normalized = (unsigned char)(lua_tointeger(L,5));
		int stride=(int)lua_tointeger(L,6);
		void* pointer=(Luna< void >::check(L,7));

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glVertexAttribPointer(unsigned int, int, unsigned int, unsigned char, int, const void *) const");
		}
		self->glVertexAttribPointer(index, size, type, normalized, stride, pointer);

		return 0;
	}

	// unsigned int osg::GL2Extensions::getCurrentProgram() const
	static int _bind_getCurrentProgram(lua_State *L) {
		if (!_lg_typecheck_getCurrentProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GL2Extensions::getCurrentProgram() const function, expected prototype:\nunsigned int osg::GL2Extensions::getCurrentProgram() const\nClass arguments details:\n");
		}


		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GL2Extensions::getCurrentProgram() const");
		}
		unsigned int lret = self->getCurrentProgram();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GL2Extensions::getProgramInfoLog(unsigned int program, std::string & result) const
	static int _bind_getProgramInfoLog(lua_State *L) {
		if (!_lg_typecheck_getProgramInfoLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::getProgramInfoLog(unsigned int program, std::string & result) const function, expected prototype:\nbool osg::GL2Extensions::getProgramInfoLog(unsigned int program, std::string & result) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		std::string result(lua_tostring(L,3),lua_objlen(L,3));

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::getProgramInfoLog(unsigned int, std::string &) const");
		}
		bool lret = self->getProgramInfoLog(program, result);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GL2Extensions::getShaderInfoLog(unsigned int shader, std::string & result) const
	static int _bind_getShaderInfoLog(lua_State *L) {
		if (!_lg_typecheck_getShaderInfoLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::getShaderInfoLog(unsigned int shader, std::string & result) const function, expected prototype:\nbool osg::GL2Extensions::getShaderInfoLog(unsigned int shader, std::string & result) const\nClass arguments details:\n");
		}

		unsigned int shader=(unsigned int)lua_tointeger(L,2);
		std::string result(lua_tostring(L,3),lua_objlen(L,3));

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::getShaderInfoLog(unsigned int, std::string &) const");
		}
		bool lret = self->getShaderInfoLog(shader, result);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GL2Extensions::getAttribLocation(const char * attribName, unsigned int & slot) const
	static int _bind_getAttribLocation(lua_State *L) {
		if (!_lg_typecheck_getAttribLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::getAttribLocation(const char * attribName, unsigned int & slot) const function, expected prototype:\nbool osg::GL2Extensions::getAttribLocation(const char * attribName, unsigned int & slot) const\nClass arguments details:\n");
		}

		const char * attribName=(const char *)lua_tostring(L,2);
		unsigned int slot=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::getAttribLocation(const char *, unsigned int &) const");
		}
		bool lret = self->getAttribLocation(attribName, slot);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GL2Extensions::getFragDataLocation(const char * fragDataName, unsigned int & slot) const
	static int _bind_getFragDataLocation(lua_State *L) {
		if (!_lg_typecheck_getFragDataLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::GL2Extensions::getFragDataLocation(const char * fragDataName, unsigned int & slot) const function, expected prototype:\nbool osg::GL2Extensions::getFragDataLocation(const char * fragDataName, unsigned int & slot) const\nClass arguments details:\n");
		}

		const char * fragDataName=(const char *)lua_tostring(L,2);
		unsigned int slot=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::GL2Extensions::getFragDataLocation(const char *, unsigned int &) const");
		}
		bool lret = self->getFragDataLocation(fragDataName, slot);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::GL2Extensions::glUniformMatrix2x3fv(int location, int count, unsigned char transpose, const float * value) const
	static int _bind_glUniformMatrix2x3fv(lua_State *L) {
		if (!_lg_typecheck_glUniformMatrix2x3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformMatrix2x3fv(int location, int count, unsigned char transpose, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformMatrix2x3fv(int location, int count, unsigned char transpose, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
		float value=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformMatrix2x3fv(int, int, unsigned char, const float *) const");
		}
		self->glUniformMatrix2x3fv(location, count, transpose, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniformMatrix3x2fv(int location, int count, unsigned char transpose, const float * value) const
	static int _bind_glUniformMatrix3x2fv(lua_State *L) {
		if (!_lg_typecheck_glUniformMatrix3x2fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformMatrix3x2fv(int location, int count, unsigned char transpose, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformMatrix3x2fv(int location, int count, unsigned char transpose, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
		float value=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformMatrix3x2fv(int, int, unsigned char, const float *) const");
		}
		self->glUniformMatrix3x2fv(location, count, transpose, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniformMatrix2x4fv(int location, int count, unsigned char transpose, const float * value) const
	static int _bind_glUniformMatrix2x4fv(lua_State *L) {
		if (!_lg_typecheck_glUniformMatrix2x4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformMatrix2x4fv(int location, int count, unsigned char transpose, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformMatrix2x4fv(int location, int count, unsigned char transpose, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
		float value=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformMatrix2x4fv(int, int, unsigned char, const float *) const");
		}
		self->glUniformMatrix2x4fv(location, count, transpose, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniformMatrix4x2fv(int location, int count, unsigned char transpose, const float * value) const
	static int _bind_glUniformMatrix4x2fv(lua_State *L) {
		if (!_lg_typecheck_glUniformMatrix4x2fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformMatrix4x2fv(int location, int count, unsigned char transpose, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformMatrix4x2fv(int location, int count, unsigned char transpose, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
		float value=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformMatrix4x2fv(int, int, unsigned char, const float *) const");
		}
		self->glUniformMatrix4x2fv(location, count, transpose, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniformMatrix3x4fv(int location, int count, unsigned char transpose, const float * value) const
	static int _bind_glUniformMatrix3x4fv(lua_State *L) {
		if (!_lg_typecheck_glUniformMatrix3x4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformMatrix3x4fv(int location, int count, unsigned char transpose, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformMatrix3x4fv(int location, int count, unsigned char transpose, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
		float value=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformMatrix3x4fv(int, int, unsigned char, const float *) const");
		}
		self->glUniformMatrix3x4fv(location, count, transpose, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniformMatrix4x3fv(int location, int count, unsigned char transpose, const float * value) const
	static int _bind_glUniformMatrix4x3fv(lua_State *L) {
		if (!_lg_typecheck_glUniformMatrix4x3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformMatrix4x3fv(int location, int count, unsigned char transpose, const float * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformMatrix4x3fv(int location, int count, unsigned char transpose, const float * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char transpose = (unsigned char)(lua_tointeger(L,4));
		float value=(float)lua_tonumber(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformMatrix4x3fv(int, int, unsigned char, const float *) const");
		}
		self->glUniformMatrix4x3fv(location, count, transpose, &value);

		return 0;
	}

	// void osg::GL2Extensions::glProgramParameteri(unsigned int program, unsigned int pname, int value) const
	static int _bind_glProgramParameteri(lua_State *L) {
		if (!_lg_typecheck_glProgramParameteri(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glProgramParameteri(unsigned int program, unsigned int pname, int value) const function, expected prototype:\nvoid osg::GL2Extensions::glProgramParameteri(unsigned int program, unsigned int pname, int value) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int value=(int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glProgramParameteri(unsigned int, unsigned int, int) const");
		}
		self->glProgramParameteri(program, pname, value);

		return 0;
	}

	// void osg::GL2Extensions::glFramebufferTexture(unsigned int target, unsigned int attachment, unsigned int texture, int level) const
	static int _bind_glFramebufferTexture(lua_State *L) {
		if (!_lg_typecheck_glFramebufferTexture(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glFramebufferTexture(unsigned int target, unsigned int attachment, unsigned int texture, int level) const function, expected prototype:\nvoid osg::GL2Extensions::glFramebufferTexture(unsigned int target, unsigned int attachment, unsigned int texture, int level) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int attachment=(unsigned int)lua_tointeger(L,3);
		unsigned int texture=(unsigned int)lua_tointeger(L,4);
		int level=(int)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glFramebufferTexture(unsigned int, unsigned int, unsigned int, int) const");
		}
		self->glFramebufferTexture(target, attachment, texture, level);

		return 0;
	}

	// void osg::GL2Extensions::glFramebufferTextureLayer(unsigned int target, unsigned int attachment, unsigned int texture, int level, int layer) const
	static int _bind_glFramebufferTextureLayer(lua_State *L) {
		if (!_lg_typecheck_glFramebufferTextureLayer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glFramebufferTextureLayer(unsigned int target, unsigned int attachment, unsigned int texture, int level, int layer) const function, expected prototype:\nvoid osg::GL2Extensions::glFramebufferTextureLayer(unsigned int target, unsigned int attachment, unsigned int texture, int level, int layer) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int attachment=(unsigned int)lua_tointeger(L,3);
		unsigned int texture=(unsigned int)lua_tointeger(L,4);
		int level=(int)lua_tointeger(L,5);
		int layer=(int)lua_tointeger(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glFramebufferTextureLayer(unsigned int, unsigned int, unsigned int, int, int) const");
		}
		self->glFramebufferTextureLayer(target, attachment, texture, level, layer);

		return 0;
	}

	// void osg::GL2Extensions::glFramebufferTextureFace(unsigned int target, unsigned int attachment, unsigned int texture, int level, unsigned int face) const
	static int _bind_glFramebufferTextureFace(lua_State *L) {
		if (!_lg_typecheck_glFramebufferTextureFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glFramebufferTextureFace(unsigned int target, unsigned int attachment, unsigned int texture, int level, unsigned int face) const function, expected prototype:\nvoid osg::GL2Extensions::glFramebufferTextureFace(unsigned int target, unsigned int attachment, unsigned int texture, int level, unsigned int face) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int attachment=(unsigned int)lua_tointeger(L,3);
		unsigned int texture=(unsigned int)lua_tointeger(L,4);
		int level=(int)lua_tointeger(L,5);
		unsigned int face=(unsigned int)lua_tointeger(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glFramebufferTextureFace(unsigned int, unsigned int, unsigned int, int, unsigned int) const");
		}
		self->glFramebufferTextureFace(target, attachment, texture, level, face);

		return 0;
	}

	// void osg::GL2Extensions::glPatchParameteri(unsigned int pname, int value) const
	static int _bind_glPatchParameteri(lua_State *L) {
		if (!_lg_typecheck_glPatchParameteri(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glPatchParameteri(unsigned int pname, int value) const function, expected prototype:\nvoid osg::GL2Extensions::glPatchParameteri(unsigned int pname, int value) const\nClass arguments details:\n");
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		int value=(int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glPatchParameteri(unsigned int, int) const");
		}
		self->glPatchParameteri(pname, value);

		return 0;
	}

	// void osg::GL2Extensions::glPatchParameterfv(unsigned int pname, const float * values) const
	static int _bind_glPatchParameterfv(lua_State *L) {
		if (!_lg_typecheck_glPatchParameterfv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glPatchParameterfv(unsigned int pname, const float * values) const function, expected prototype:\nvoid osg::GL2Extensions::glPatchParameterfv(unsigned int pname, const float * values) const\nClass arguments details:\n");
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		float values=(float)lua_tonumber(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glPatchParameterfv(unsigned int, const float *) const");
		}
		self->glPatchParameterfv(pname, &values);

		return 0;
	}

	// void osg::GL2Extensions::glGetUniformuiv(unsigned int program, int location, unsigned int * params) const
	static int _bind_glGetUniformuiv(lua_State *L) {
		if (!_lg_typecheck_glGetUniformuiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetUniformuiv(unsigned int program, int location, unsigned int * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetUniformuiv(unsigned int program, int location, unsigned int * params) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		int location=(int)lua_tointeger(L,3);
		unsigned int params=(unsigned int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetUniformuiv(unsigned int, int, unsigned int *) const");
		}
		self->glGetUniformuiv(program, location, &params);

		return 0;
	}

	// void osg::GL2Extensions::glBindFragDataLocation(unsigned int program, unsigned int color, const char * name) const
	static int _bind_glBindFragDataLocation(lua_State *L) {
		if (!_lg_typecheck_glBindFragDataLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glBindFragDataLocation(unsigned int program, unsigned int color, const char * name) const function, expected prototype:\nvoid osg::GL2Extensions::glBindFragDataLocation(unsigned int program, unsigned int color, const char * name) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int color=(unsigned int)lua_tointeger(L,3);
		const char * name=(const char *)lua_tostring(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glBindFragDataLocation(unsigned int, unsigned int, const char *) const");
		}
		self->glBindFragDataLocation(program, color, name);

		return 0;
	}

	// int osg::GL2Extensions::glGetFragDataLocation(unsigned int program, const char * name) const
	static int _bind_glGetFragDataLocation(lua_State *L) {
		if (!_lg_typecheck_glGetFragDataLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::GL2Extensions::glGetFragDataLocation(unsigned int program, const char * name) const function, expected prototype:\nint osg::GL2Extensions::glGetFragDataLocation(unsigned int program, const char * name) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		const char * name=(const char *)lua_tostring(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::GL2Extensions::glGetFragDataLocation(unsigned int, const char *) const");
		}
		int lret = self->glGetFragDataLocation(program, name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GL2Extensions::glUniform1ui(int location, unsigned int v0) const
	static int _bind_glUniform1ui(lua_State *L) {
		if (!_lg_typecheck_glUniform1ui(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform1ui(int location, unsigned int v0) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform1ui(int location, unsigned int v0) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		unsigned int v0=(unsigned int)lua_tointeger(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform1ui(int, unsigned int) const");
		}
		self->glUniform1ui(location, v0);

		return 0;
	}

	// void osg::GL2Extensions::glUniform2ui(int location, unsigned int v0, unsigned int v1) const
	static int _bind_glUniform2ui(lua_State *L) {
		if (!_lg_typecheck_glUniform2ui(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform2ui(int location, unsigned int v0, unsigned int v1) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform2ui(int location, unsigned int v0, unsigned int v1) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		unsigned int v0=(unsigned int)lua_tointeger(L,3);
		unsigned int v1=(unsigned int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform2ui(int, unsigned int, unsigned int) const");
		}
		self->glUniform2ui(location, v0, v1);

		return 0;
	}

	// void osg::GL2Extensions::glUniform3ui(int location, unsigned int v0, unsigned int v1, unsigned int v2) const
	static int _bind_glUniform3ui(lua_State *L) {
		if (!_lg_typecheck_glUniform3ui(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform3ui(int location, unsigned int v0, unsigned int v1, unsigned int v2) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform3ui(int location, unsigned int v0, unsigned int v1, unsigned int v2) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		unsigned int v0=(unsigned int)lua_tointeger(L,3);
		unsigned int v1=(unsigned int)lua_tointeger(L,4);
		unsigned int v2=(unsigned int)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform3ui(int, unsigned int, unsigned int, unsigned int) const");
		}
		self->glUniform3ui(location, v0, v1, v2);

		return 0;
	}

	// void osg::GL2Extensions::glUniform4ui(int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3) const
	static int _bind_glUniform4ui(lua_State *L) {
		if (!_lg_typecheck_glUniform4ui(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform4ui(int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform4ui(int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		unsigned int v0=(unsigned int)lua_tointeger(L,3);
		unsigned int v1=(unsigned int)lua_tointeger(L,4);
		unsigned int v2=(unsigned int)lua_tointeger(L,5);
		unsigned int v3=(unsigned int)lua_tointeger(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform4ui(int, unsigned int, unsigned int, unsigned int, unsigned int) const");
		}
		self->glUniform4ui(location, v0, v1, v2, v3);

		return 0;
	}

	// void osg::GL2Extensions::glUniform1uiv(int location, int count, const unsigned int * value) const
	static int _bind_glUniform1uiv(lua_State *L) {
		if (!_lg_typecheck_glUniform1uiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform1uiv(int location, int count, const unsigned int * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform1uiv(int location, int count, const unsigned int * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned int value=(unsigned int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform1uiv(int, int, const unsigned int *) const");
		}
		self->glUniform1uiv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform2uiv(int location, int count, const unsigned int * value) const
	static int _bind_glUniform2uiv(lua_State *L) {
		if (!_lg_typecheck_glUniform2uiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform2uiv(int location, int count, const unsigned int * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform2uiv(int location, int count, const unsigned int * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned int value=(unsigned int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform2uiv(int, int, const unsigned int *) const");
		}
		self->glUniform2uiv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform3uiv(int location, int count, const unsigned int * value) const
	static int _bind_glUniform3uiv(lua_State *L) {
		if (!_lg_typecheck_glUniform3uiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform3uiv(int location, int count, const unsigned int * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform3uiv(int location, int count, const unsigned int * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned int value=(unsigned int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform3uiv(int, int, const unsigned int *) const");
		}
		self->glUniform3uiv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glUniform4uiv(int location, int count, const unsigned int * value) const
	static int _bind_glUniform4uiv(lua_State *L) {
		if (!_lg_typecheck_glUniform4uiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniform4uiv(int location, int count, const unsigned int * value) const function, expected prototype:\nvoid osg::GL2Extensions::glUniform4uiv(int location, int count, const unsigned int * value) const\nClass arguments details:\n");
		}

		int location=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned int value=(unsigned int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniform4uiv(int, int, const unsigned int *) const");
		}
		self->glUniform4uiv(location, count, &value);

		return 0;
	}

	// void osg::GL2Extensions::glGetActiveUniformsiv(unsigned int program, int uniformCount, const unsigned int * uniformIndices, unsigned int pname, int * params) const
	static int _bind_glGetActiveUniformsiv(lua_State *L) {
		if (!_lg_typecheck_glGetActiveUniformsiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetActiveUniformsiv(unsigned int program, int uniformCount, const unsigned int * uniformIndices, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetActiveUniformsiv(unsigned int program, int uniformCount, const unsigned int * uniformIndices, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		int uniformCount=(int)lua_tointeger(L,3);
		unsigned int uniformIndices=(unsigned int)lua_tointeger(L,4);
		unsigned int pname=(unsigned int)lua_tointeger(L,5);
		int params=(int)lua_tointeger(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetActiveUniformsiv(unsigned int, int, const unsigned int *, unsigned int, int *) const");
		}
		self->glGetActiveUniformsiv(program, uniformCount, &uniformIndices, pname, &params);

		return 0;
	}

	// void osg::GL2Extensions::glGetActiveUniformName(unsigned int program, unsigned int uniformIndex, int bufSize, int * length, char * uniformName) const
	static int _bind_glGetActiveUniformName(lua_State *L) {
		if (!_lg_typecheck_glGetActiveUniformName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetActiveUniformName(unsigned int program, unsigned int uniformIndex, int bufSize, int * length, char * uniformName) const function, expected prototype:\nvoid osg::GL2Extensions::glGetActiveUniformName(unsigned int program, unsigned int uniformIndex, int bufSize, int * length, char * uniformName) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int uniformIndex=(unsigned int)lua_tointeger(L,3);
		int bufSize=(int)lua_tointeger(L,4);
		int length=(int)lua_tointeger(L,5);
		char uniformName=(char)lua_tointeger(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetActiveUniformName(unsigned int, unsigned int, int, int *, char *) const");
		}
		self->glGetActiveUniformName(program, uniformIndex, bufSize, &length, &uniformName);

		return 0;
	}

	// unsigned int osg::GL2Extensions::glGetUniformBlockIndex(unsigned int program, const char * uniformBlockName) const
	static int _bind_glGetUniformBlockIndex(lua_State *L) {
		if (!_lg_typecheck_glGetUniformBlockIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::GL2Extensions::glGetUniformBlockIndex(unsigned int program, const char * uniformBlockName) const function, expected prototype:\nunsigned int osg::GL2Extensions::glGetUniformBlockIndex(unsigned int program, const char * uniformBlockName) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		const char * uniformBlockName=(const char *)lua_tostring(L,3);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::GL2Extensions::glGetUniformBlockIndex(unsigned int, const char *) const");
		}
		unsigned int lret = self->glGetUniformBlockIndex(program, uniformBlockName);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GL2Extensions::glGetActiveUniformBlockiv(unsigned int program, unsigned int uniformBlockIndex, unsigned int pname, int * params) const
	static int _bind_glGetActiveUniformBlockiv(lua_State *L) {
		if (!_lg_typecheck_glGetActiveUniformBlockiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetActiveUniformBlockiv(unsigned int program, unsigned int uniformBlockIndex, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::GL2Extensions::glGetActiveUniformBlockiv(unsigned int program, unsigned int uniformBlockIndex, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int uniformBlockIndex=(unsigned int)lua_tointeger(L,3);
		unsigned int pname=(unsigned int)lua_tointeger(L,4);
		int params=(int)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetActiveUniformBlockiv(unsigned int, unsigned int, unsigned int, int *) const");
		}
		self->glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, &params);

		return 0;
	}

	// void osg::GL2Extensions::glGetActiveUniformBlockName(unsigned int program, unsigned int uniformBlockIndex, int bufSize, int * length, char * uniformBlockName) const
	static int _bind_glGetActiveUniformBlockName(lua_State *L) {
		if (!_lg_typecheck_glGetActiveUniformBlockName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetActiveUniformBlockName(unsigned int program, unsigned int uniformBlockIndex, int bufSize, int * length, char * uniformBlockName) const function, expected prototype:\nvoid osg::GL2Extensions::glGetActiveUniformBlockName(unsigned int program, unsigned int uniformBlockIndex, int bufSize, int * length, char * uniformBlockName) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int uniformBlockIndex=(unsigned int)lua_tointeger(L,3);
		int bufSize=(int)lua_tointeger(L,4);
		int length=(int)lua_tointeger(L,5);
		char uniformBlockName=(char)lua_tointeger(L,6);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetActiveUniformBlockName(unsigned int, unsigned int, int, int *, char *) const");
		}
		self->glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, &length, &uniformBlockName);

		return 0;
	}

	// void osg::GL2Extensions::glUniformBlockBinding(unsigned int program, unsigned int uniformBlockIndex, unsigned int uniformBlockBinding) const
	static int _bind_glUniformBlockBinding(lua_State *L) {
		if (!_lg_typecheck_glUniformBlockBinding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glUniformBlockBinding(unsigned int program, unsigned int uniformBlockIndex, unsigned int uniformBlockBinding) const function, expected prototype:\nvoid osg::GL2Extensions::glUniformBlockBinding(unsigned int program, unsigned int uniformBlockIndex, unsigned int uniformBlockBinding) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int uniformBlockIndex=(unsigned int)lua_tointeger(L,3);
		unsigned int uniformBlockBinding=(unsigned int)lua_tointeger(L,4);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glUniformBlockBinding(unsigned int, unsigned int, unsigned int) const");
		}
		self->glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);

		return 0;
	}

	// void osg::GL2Extensions::glGetProgramBinary(unsigned int program, int bufSize, int * length, unsigned int * binaryFormat, void * binary) const
	static int _bind_glGetProgramBinary(lua_State *L) {
		if (!_lg_typecheck_glGetProgramBinary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glGetProgramBinary(unsigned int program, int bufSize, int * length, unsigned int * binaryFormat, void * binary) const function, expected prototype:\nvoid osg::GL2Extensions::glGetProgramBinary(unsigned int program, int bufSize, int * length, unsigned int * binaryFormat, void * binary) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		int bufSize=(int)lua_tointeger(L,3);
		int length=(int)lua_tointeger(L,4);
		unsigned int binaryFormat=(unsigned int)lua_tointeger(L,5);
		void* binary=(Luna< void >::check(L,6));

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glGetProgramBinary(unsigned int, int, int *, unsigned int *, void *) const");
		}
		self->glGetProgramBinary(program, bufSize, &length, &binaryFormat, binary);

		return 0;
	}

	// void osg::GL2Extensions::glProgramBinary(unsigned int program, unsigned int binaryFormat, const void * binary, int length) const
	static int _bind_glProgramBinary(lua_State *L) {
		if (!_lg_typecheck_glProgramBinary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GL2Extensions::glProgramBinary(unsigned int program, unsigned int binaryFormat, const void * binary, int length) const function, expected prototype:\nvoid osg::GL2Extensions::glProgramBinary(unsigned int program, unsigned int binaryFormat, const void * binary, int length) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);
		unsigned int binaryFormat=(unsigned int)lua_tointeger(L,3);
		void* binary=(Luna< void >::check(L,4));
		int length=(int)lua_tointeger(L,5);

		osg::GL2Extensions* self=Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GL2Extensions::glProgramBinary(unsigned int, unsigned int, const void *, int) const");
		}
		self->glProgramBinary(program, binaryFormat, binary, length);

		return 0;
	}

	// static osg::GL2Extensions * osg::GL2Extensions::Get(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::GL2Extensions * osg::GL2Extensions::Get(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::GL2Extensions * osg::GL2Extensions::Get(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::GL2Extensions * lret = osg::GL2Extensions::Get(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GL2Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::GL2Extensions::Set(unsigned int contextID, osg::GL2Extensions * extensions)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::GL2Extensions::Set(unsigned int contextID, osg::GL2Extensions * extensions) function, expected prototype:\nstatic void osg::GL2Extensions::Set(unsigned int contextID, osg::GL2Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::GL2Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::GL2Extensions >(L,2));

		osg::GL2Extensions::Set(contextID, extensions);

		return 0;
	}


	// Operator binds:

};

osg::GL2Extensions* LunaTraits< osg::GL2Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GL2Extensions::_bind_ctor(L);
}

void LunaTraits< osg::GL2Extensions >::_bind_dtor(osg::GL2Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GL2Extensions >::className[] = "GL2Extensions";
const char LunaTraits< osg::GL2Extensions >::fullName[] = "osg::GL2Extensions";
const char LunaTraits< osg::GL2Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::GL2Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GL2Extensions >::hash = 36355438;
const int LunaTraits< osg::GL2Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GL2Extensions >::methods[] = {
	{"setupGL2Extensions", &luna_wrapper_osg_GL2Extensions::_bind_setupGL2Extensions},
	{"isGlslSupported", &luna_wrapper_osg_GL2Extensions::_bind_isGlslSupported},
	{"getGlVersion", &luna_wrapper_osg_GL2Extensions::_bind_getGlVersion},
	{"getLanguageVersion", &luna_wrapper_osg_GL2Extensions::_bind_getLanguageVersion},
	{"setShaderObjectsSupported", &luna_wrapper_osg_GL2Extensions::_bind_setShaderObjectsSupported},
	{"isShaderObjectsSupported", &luna_wrapper_osg_GL2Extensions::_bind_isShaderObjectsSupported},
	{"setVertexShaderSupported", &luna_wrapper_osg_GL2Extensions::_bind_setVertexShaderSupported},
	{"isVertexShaderSupported", &luna_wrapper_osg_GL2Extensions::_bind_isVertexShaderSupported},
	{"setFragmentShaderSupported", &luna_wrapper_osg_GL2Extensions::_bind_setFragmentShaderSupported},
	{"isFragmentShaderSupported", &luna_wrapper_osg_GL2Extensions::_bind_isFragmentShaderSupported},
	{"setLanguage100Supported", &luna_wrapper_osg_GL2Extensions::_bind_setLanguage100Supported},
	{"isLanguage100Supported", &luna_wrapper_osg_GL2Extensions::_bind_isLanguage100Supported},
	{"setGeometryShader4Supported", &luna_wrapper_osg_GL2Extensions::_bind_setGeometryShader4Supported},
	{"isGeometryShader4Supported", &luna_wrapper_osg_GL2Extensions::_bind_isGeometryShader4Supported},
	{"setTessellationShadersSupported", &luna_wrapper_osg_GL2Extensions::_bind_setTessellationShadersSupported},
	{"areTessellationShadersSupported", &luna_wrapper_osg_GL2Extensions::_bind_areTessellationShadersSupported},
	{"setGpuShader4Supported", &luna_wrapper_osg_GL2Extensions::_bind_setGpuShader4Supported},
	{"isGpuShader4Supported", &luna_wrapper_osg_GL2Extensions::_bind_isGpuShader4Supported},
	{"setUniformBufferObjectSupported", &luna_wrapper_osg_GL2Extensions::_bind_setUniformBufferObjectSupported},
	{"isUniformBufferObjectSupported", &luna_wrapper_osg_GL2Extensions::_bind_isUniformBufferObjectSupported},
	{"setGetProgramBinarySupported", &luna_wrapper_osg_GL2Extensions::_bind_setGetProgramBinarySupported},
	{"isGetProgramBinarySupported", &luna_wrapper_osg_GL2Extensions::_bind_isGetProgramBinarySupported},
	{"glBlendEquationSeparate", &luna_wrapper_osg_GL2Extensions::_bind_glBlendEquationSeparate},
	{"glDrawBuffers", &luna_wrapper_osg_GL2Extensions::_bind_glDrawBuffers},
	{"glStencilOpSeparate", &luna_wrapper_osg_GL2Extensions::_bind_glStencilOpSeparate},
	{"glStencilFuncSeparate", &luna_wrapper_osg_GL2Extensions::_bind_glStencilFuncSeparate},
	{"glStencilMaskSeparate", &luna_wrapper_osg_GL2Extensions::_bind_glStencilMaskSeparate},
	{"glAttachShader", &luna_wrapper_osg_GL2Extensions::_bind_glAttachShader},
	{"glBindAttribLocation", &luna_wrapper_osg_GL2Extensions::_bind_glBindAttribLocation},
	{"glCompileShader", &luna_wrapper_osg_GL2Extensions::_bind_glCompileShader},
	{"glCreateProgram", &luna_wrapper_osg_GL2Extensions::_bind_glCreateProgram},
	{"glCreateShader", &luna_wrapper_osg_GL2Extensions::_bind_glCreateShader},
	{"glDeleteProgram", &luna_wrapper_osg_GL2Extensions::_bind_glDeleteProgram},
	{"glDeleteShader", &luna_wrapper_osg_GL2Extensions::_bind_glDeleteShader},
	{"glDetachShader", &luna_wrapper_osg_GL2Extensions::_bind_glDetachShader},
	{"glDisableVertexAttribArray", &luna_wrapper_osg_GL2Extensions::_bind_glDisableVertexAttribArray},
	{"glEnableVertexAttribArray", &luna_wrapper_osg_GL2Extensions::_bind_glEnableVertexAttribArray},
	{"glGetActiveAttrib", &luna_wrapper_osg_GL2Extensions::_bind_glGetActiveAttrib},
	{"glGetActiveUniform", &luna_wrapper_osg_GL2Extensions::_bind_glGetActiveUniform},
	{"glGetAttachedShaders", &luna_wrapper_osg_GL2Extensions::_bind_glGetAttachedShaders},
	{"glGetAttribLocation", &luna_wrapper_osg_GL2Extensions::_bind_glGetAttribLocation},
	{"glGetProgramiv", &luna_wrapper_osg_GL2Extensions::_bind_glGetProgramiv},
	{"glGetProgramInfoLog", &luna_wrapper_osg_GL2Extensions::_bind_glGetProgramInfoLog},
	{"glGetShaderiv", &luna_wrapper_osg_GL2Extensions::_bind_glGetShaderiv},
	{"glGetShaderInfoLog", &luna_wrapper_osg_GL2Extensions::_bind_glGetShaderInfoLog},
	{"glGetShaderSource", &luna_wrapper_osg_GL2Extensions::_bind_glGetShaderSource},
	{"glGetUniformLocation", &luna_wrapper_osg_GL2Extensions::_bind_glGetUniformLocation},
	{"glGetUniformfv", &luna_wrapper_osg_GL2Extensions::_bind_glGetUniformfv},
	{"glGetUniformiv", &luna_wrapper_osg_GL2Extensions::_bind_glGetUniformiv},
	{"glGetVertexAttribdv", &luna_wrapper_osg_GL2Extensions::_bind_glGetVertexAttribdv},
	{"glGetVertexAttribfv", &luna_wrapper_osg_GL2Extensions::_bind_glGetVertexAttribfv},
	{"glGetVertexAttribiv", &luna_wrapper_osg_GL2Extensions::_bind_glGetVertexAttribiv},
	{"glIsProgram", &luna_wrapper_osg_GL2Extensions::_bind_glIsProgram},
	{"glIsShader", &luna_wrapper_osg_GL2Extensions::_bind_glIsShader},
	{"glLinkProgram", &luna_wrapper_osg_GL2Extensions::_bind_glLinkProgram},
	{"glUseProgram", &luna_wrapper_osg_GL2Extensions::_bind_glUseProgram},
	{"glUniform1f", &luna_wrapper_osg_GL2Extensions::_bind_glUniform1f},
	{"glUniform2f", &luna_wrapper_osg_GL2Extensions::_bind_glUniform2f},
	{"glUniform3f", &luna_wrapper_osg_GL2Extensions::_bind_glUniform3f},
	{"glUniform4f", &luna_wrapper_osg_GL2Extensions::_bind_glUniform4f},
	{"glUniform1i", &luna_wrapper_osg_GL2Extensions::_bind_glUniform1i},
	{"glUniform2i", &luna_wrapper_osg_GL2Extensions::_bind_glUniform2i},
	{"glUniform3i", &luna_wrapper_osg_GL2Extensions::_bind_glUniform3i},
	{"glUniform4i", &luna_wrapper_osg_GL2Extensions::_bind_glUniform4i},
	{"glUniform1fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform1fv},
	{"glUniform2fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform2fv},
	{"glUniform3fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform3fv},
	{"glUniform4fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform4fv},
	{"glUniform1iv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform1iv},
	{"glUniform2iv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform2iv},
	{"glUniform3iv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform3iv},
	{"glUniform4iv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform4iv},
	{"glUniformMatrix2fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniformMatrix2fv},
	{"glUniformMatrix3fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniformMatrix3fv},
	{"glUniformMatrix4fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniformMatrix4fv},
	{"glValidateProgram", &luna_wrapper_osg_GL2Extensions::_bind_glValidateProgram},
	{"glVertexAttrib1d", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib1d},
	{"glVertexAttrib1dv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib1dv},
	{"glVertexAttrib1f", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib1f},
	{"glVertexAttrib1fv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib1fv},
	{"glVertexAttrib1s", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib1s},
	{"glVertexAttrib1sv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib1sv},
	{"glVertexAttrib2d", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib2d},
	{"glVertexAttrib2dv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib2dv},
	{"glVertexAttrib2f", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib2f},
	{"glVertexAttrib2fv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib2fv},
	{"glVertexAttrib2s", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib2s},
	{"glVertexAttrib2sv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib2sv},
	{"glVertexAttrib3d", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib3d},
	{"glVertexAttrib3dv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib3dv},
	{"glVertexAttrib3f", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib3f},
	{"glVertexAttrib3fv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib3fv},
	{"glVertexAttrib3s", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib3s},
	{"glVertexAttrib3sv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib3sv},
	{"glVertexAttrib4Nbv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4Nbv},
	{"glVertexAttrib4Niv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4Niv},
	{"glVertexAttrib4Nsv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4Nsv},
	{"glVertexAttrib4Nub", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4Nub},
	{"glVertexAttrib4Nubv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4Nubv},
	{"glVertexAttrib4Nuiv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4Nuiv},
	{"glVertexAttrib4Nusv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4Nusv},
	{"glVertexAttrib4bv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4bv},
	{"glVertexAttrib4d", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4d},
	{"glVertexAttrib4dv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4dv},
	{"glVertexAttrib4f", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4f},
	{"glVertexAttrib4fv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4fv},
	{"glVertexAttrib4iv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4iv},
	{"glVertexAttrib4s", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4s},
	{"glVertexAttrib4sv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4sv},
	{"glVertexAttrib4ubv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4ubv},
	{"glVertexAttrib4uiv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4uiv},
	{"glVertexAttrib4usv", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttrib4usv},
	{"glVertexAttribPointer", &luna_wrapper_osg_GL2Extensions::_bind_glVertexAttribPointer},
	{"getCurrentProgram", &luna_wrapper_osg_GL2Extensions::_bind_getCurrentProgram},
	{"getProgramInfoLog", &luna_wrapper_osg_GL2Extensions::_bind_getProgramInfoLog},
	{"getShaderInfoLog", &luna_wrapper_osg_GL2Extensions::_bind_getShaderInfoLog},
	{"getAttribLocation", &luna_wrapper_osg_GL2Extensions::_bind_getAttribLocation},
	{"getFragDataLocation", &luna_wrapper_osg_GL2Extensions::_bind_getFragDataLocation},
	{"glUniformMatrix2x3fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniformMatrix2x3fv},
	{"glUniformMatrix3x2fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniformMatrix3x2fv},
	{"glUniformMatrix2x4fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniformMatrix2x4fv},
	{"glUniformMatrix4x2fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniformMatrix4x2fv},
	{"glUniformMatrix3x4fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniformMatrix3x4fv},
	{"glUniformMatrix4x3fv", &luna_wrapper_osg_GL2Extensions::_bind_glUniformMatrix4x3fv},
	{"glProgramParameteri", &luna_wrapper_osg_GL2Extensions::_bind_glProgramParameteri},
	{"glFramebufferTexture", &luna_wrapper_osg_GL2Extensions::_bind_glFramebufferTexture},
	{"glFramebufferTextureLayer", &luna_wrapper_osg_GL2Extensions::_bind_glFramebufferTextureLayer},
	{"glFramebufferTextureFace", &luna_wrapper_osg_GL2Extensions::_bind_glFramebufferTextureFace},
	{"glPatchParameteri", &luna_wrapper_osg_GL2Extensions::_bind_glPatchParameteri},
	{"glPatchParameterfv", &luna_wrapper_osg_GL2Extensions::_bind_glPatchParameterfv},
	{"glGetUniformuiv", &luna_wrapper_osg_GL2Extensions::_bind_glGetUniformuiv},
	{"glBindFragDataLocation", &luna_wrapper_osg_GL2Extensions::_bind_glBindFragDataLocation},
	{"glGetFragDataLocation", &luna_wrapper_osg_GL2Extensions::_bind_glGetFragDataLocation},
	{"glUniform1ui", &luna_wrapper_osg_GL2Extensions::_bind_glUniform1ui},
	{"glUniform2ui", &luna_wrapper_osg_GL2Extensions::_bind_glUniform2ui},
	{"glUniform3ui", &luna_wrapper_osg_GL2Extensions::_bind_glUniform3ui},
	{"glUniform4ui", &luna_wrapper_osg_GL2Extensions::_bind_glUniform4ui},
	{"glUniform1uiv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform1uiv},
	{"glUniform2uiv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform2uiv},
	{"glUniform3uiv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform3uiv},
	{"glUniform4uiv", &luna_wrapper_osg_GL2Extensions::_bind_glUniform4uiv},
	{"glGetActiveUniformsiv", &luna_wrapper_osg_GL2Extensions::_bind_glGetActiveUniformsiv},
	{"glGetActiveUniformName", &luna_wrapper_osg_GL2Extensions::_bind_glGetActiveUniformName},
	{"glGetUniformBlockIndex", &luna_wrapper_osg_GL2Extensions::_bind_glGetUniformBlockIndex},
	{"glGetActiveUniformBlockiv", &luna_wrapper_osg_GL2Extensions::_bind_glGetActiveUniformBlockiv},
	{"glGetActiveUniformBlockName", &luna_wrapper_osg_GL2Extensions::_bind_glGetActiveUniformBlockName},
	{"glUniformBlockBinding", &luna_wrapper_osg_GL2Extensions::_bind_glUniformBlockBinding},
	{"glGetProgramBinary", &luna_wrapper_osg_GL2Extensions::_bind_glGetProgramBinary},
	{"glProgramBinary", &luna_wrapper_osg_GL2Extensions::_bind_glProgramBinary},
	{"Get", &luna_wrapper_osg_GL2Extensions::_bind_Get},
	{"Set", &luna_wrapper_osg_GL2Extensions::_bind_Set},
	{"__eq", &luna_wrapper_osg_GL2Extensions::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GL2Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GL2Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GL2Extensions >::enumValues[] = {
	{0,0}
};


