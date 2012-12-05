#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Drawable_Extensions.h>

class luna_wrapper_osg_Drawable_Extensions {
public:
	typedef Luna< osg::Drawable::Extensions > luna_t;

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
		osg::Drawable::Extensions* ptr= dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Drawable::Extensions >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_setupGLExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexProgramSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isVertexProgramSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSecondaryColorSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSecondaryColorSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFogCoordSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isFogCoordSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMultiTexSupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isMultiTexSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOcclusionQuerySupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOcclusionQuerySupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setARBOcclusionQuerySupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isARBOcclusionQuerySupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimerQuerySupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTimerQuerySupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setARBTimerQuerySupported(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isARBTimerQuerySupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glSecondaryColor3ubv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glSecondaryColor3fv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glFogCoordfv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMultiTexCoord1f(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMultiTexCoord2fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMultiTexCoord3fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMultiTexCoord4fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMultiTexCoord1d(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMultiTexCoord2dv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMultiTexCoord3dv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMultiTexCoord4dv(lua_State *L) {
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

	inline static bool _lg_typecheck_glVertexAttrib1f(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib1d(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib2fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib3fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4fv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib2dv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib3dv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4dv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4ubv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glVertexAttrib4Nubv(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGenBuffers(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBindBuffer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBufferData(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBufferSubData(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDeleteBuffers(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glIsBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetBufferSubData(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glMapBuffer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glUnmapBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetBufferParameteriv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGenOcclusionQueries(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDeleteOcclusionQueries(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glIsOcclusionQuery(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBeginOcclusionQuery(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glEndOcclusionQuery(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_glGetOcclusionQueryiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetOcclusionQueryuiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetQueryiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGenQueries(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glBeginQuery(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glEndQuery(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glQueryCounter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glIsQuery(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glDeleteQueries(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetQueryObjectiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetQueryObjectuiv(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetQueryObjectui64v(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_glGetInteger64v(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Drawable::Extensions::Extensions(unsigned int contextID)
	static osg::Drawable::Extensions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::Extensions::Extensions(unsigned int contextID) function, expected prototype:\nosg::Drawable::Extensions::Extensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::Drawable::Extensions(contextID);
	}

	// osg::Drawable::Extensions::Extensions(lua_Table * data, unsigned int contextID)
	static osg::Drawable::Extensions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::Extensions::Extensions(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::Drawable::Extensions::Extensions(lua_Table * data, unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_Drawable_Extensions(L,NULL, contextID);
	}

	// Overload binder for osg::Drawable::Extensions::Extensions
	static osg::Drawable::Extensions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Extensions, cannot match any of the overloads for function Extensions:\n  Extensions(unsigned int)\n  Extensions(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Drawable::Extensions::setupGLExtensions(unsigned int contextID)
	static int _bind_setupGLExtensions(lua_State *L) {
		if (!_lg_typecheck_setupGLExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::setupGLExtensions(unsigned int contextID) function, expected prototype:\nvoid osg::Drawable::Extensions::setupGLExtensions(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::setupGLExtensions(unsigned int)");
		}
		self->setupGLExtensions(contextID);

		return 0;
	}

	// void osg::Drawable::Extensions::setVertexProgramSupported(bool flag)
	static int _bind_setVertexProgramSupported(lua_State *L) {
		if (!_lg_typecheck_setVertexProgramSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::setVertexProgramSupported(bool flag) function, expected prototype:\nvoid osg::Drawable::Extensions::setVertexProgramSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::setVertexProgramSupported(bool)");
		}
		self->setVertexProgramSupported(flag);

		return 0;
	}

	// bool osg::Drawable::Extensions::isVertexProgramSupported() const
	static int _bind_isVertexProgramSupported(lua_State *L) {
		if (!_lg_typecheck_isVertexProgramSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::Extensions::isVertexProgramSupported() const function, expected prototype:\nbool osg::Drawable::Extensions::isVertexProgramSupported() const\nClass arguments details:\n");
		}


		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::Extensions::isVertexProgramSupported() const");
		}
		bool lret = self->isVertexProgramSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::Extensions::setSecondaryColorSupported(bool flag)
	static int _bind_setSecondaryColorSupported(lua_State *L) {
		if (!_lg_typecheck_setSecondaryColorSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::setSecondaryColorSupported(bool flag) function, expected prototype:\nvoid osg::Drawable::Extensions::setSecondaryColorSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::setSecondaryColorSupported(bool)");
		}
		self->setSecondaryColorSupported(flag);

		return 0;
	}

	// bool osg::Drawable::Extensions::isSecondaryColorSupported() const
	static int _bind_isSecondaryColorSupported(lua_State *L) {
		if (!_lg_typecheck_isSecondaryColorSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::Extensions::isSecondaryColorSupported() const function, expected prototype:\nbool osg::Drawable::Extensions::isSecondaryColorSupported() const\nClass arguments details:\n");
		}


		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::Extensions::isSecondaryColorSupported() const");
		}
		bool lret = self->isSecondaryColorSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::Extensions::setFogCoordSupported(bool flag)
	static int _bind_setFogCoordSupported(lua_State *L) {
		if (!_lg_typecheck_setFogCoordSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::setFogCoordSupported(bool flag) function, expected prototype:\nvoid osg::Drawable::Extensions::setFogCoordSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::setFogCoordSupported(bool)");
		}
		self->setFogCoordSupported(flag);

		return 0;
	}

	// bool osg::Drawable::Extensions::isFogCoordSupported() const
	static int _bind_isFogCoordSupported(lua_State *L) {
		if (!_lg_typecheck_isFogCoordSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::Extensions::isFogCoordSupported() const function, expected prototype:\nbool osg::Drawable::Extensions::isFogCoordSupported() const\nClass arguments details:\n");
		}


		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::Extensions::isFogCoordSupported() const");
		}
		bool lret = self->isFogCoordSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::Extensions::setMultiTexSupported(bool flag)
	static int _bind_setMultiTexSupported(lua_State *L) {
		if (!_lg_typecheck_setMultiTexSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::setMultiTexSupported(bool flag) function, expected prototype:\nvoid osg::Drawable::Extensions::setMultiTexSupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::setMultiTexSupported(bool)");
		}
		self->setMultiTexSupported(flag);

		return 0;
	}

	// bool osg::Drawable::Extensions::isMultiTexSupported() const
	static int _bind_isMultiTexSupported(lua_State *L) {
		if (!_lg_typecheck_isMultiTexSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::Extensions::isMultiTexSupported() const function, expected prototype:\nbool osg::Drawable::Extensions::isMultiTexSupported() const\nClass arguments details:\n");
		}


		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::Extensions::isMultiTexSupported() const");
		}
		bool lret = self->isMultiTexSupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::Extensions::setOcclusionQuerySupported(bool flag)
	static int _bind_setOcclusionQuerySupported(lua_State *L) {
		if (!_lg_typecheck_setOcclusionQuerySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::setOcclusionQuerySupported(bool flag) function, expected prototype:\nvoid osg::Drawable::Extensions::setOcclusionQuerySupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::setOcclusionQuerySupported(bool)");
		}
		self->setOcclusionQuerySupported(flag);

		return 0;
	}

	// bool osg::Drawable::Extensions::isOcclusionQuerySupported() const
	static int _bind_isOcclusionQuerySupported(lua_State *L) {
		if (!_lg_typecheck_isOcclusionQuerySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::Extensions::isOcclusionQuerySupported() const function, expected prototype:\nbool osg::Drawable::Extensions::isOcclusionQuerySupported() const\nClass arguments details:\n");
		}


		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::Extensions::isOcclusionQuerySupported() const");
		}
		bool lret = self->isOcclusionQuerySupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::Extensions::setARBOcclusionQuerySupported(bool flag)
	static int _bind_setARBOcclusionQuerySupported(lua_State *L) {
		if (!_lg_typecheck_setARBOcclusionQuerySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::setARBOcclusionQuerySupported(bool flag) function, expected prototype:\nvoid osg::Drawable::Extensions::setARBOcclusionQuerySupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::setARBOcclusionQuerySupported(bool)");
		}
		self->setARBOcclusionQuerySupported(flag);

		return 0;
	}

	// bool osg::Drawable::Extensions::isARBOcclusionQuerySupported() const
	static int _bind_isARBOcclusionQuerySupported(lua_State *L) {
		if (!_lg_typecheck_isARBOcclusionQuerySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::Extensions::isARBOcclusionQuerySupported() const function, expected prototype:\nbool osg::Drawable::Extensions::isARBOcclusionQuerySupported() const\nClass arguments details:\n");
		}


		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::Extensions::isARBOcclusionQuerySupported() const");
		}
		bool lret = self->isARBOcclusionQuerySupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::Extensions::setTimerQuerySupported(bool flag)
	static int _bind_setTimerQuerySupported(lua_State *L) {
		if (!_lg_typecheck_setTimerQuerySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::setTimerQuerySupported(bool flag) function, expected prototype:\nvoid osg::Drawable::Extensions::setTimerQuerySupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::setTimerQuerySupported(bool)");
		}
		self->setTimerQuerySupported(flag);

		return 0;
	}

	// bool osg::Drawable::Extensions::isTimerQuerySupported() const
	static int _bind_isTimerQuerySupported(lua_State *L) {
		if (!_lg_typecheck_isTimerQuerySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::Extensions::isTimerQuerySupported() const function, expected prototype:\nbool osg::Drawable::Extensions::isTimerQuerySupported() const\nClass arguments details:\n");
		}


		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::Extensions::isTimerQuerySupported() const");
		}
		bool lret = self->isTimerQuerySupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::Extensions::setARBTimerQuerySupported(bool flag)
	static int _bind_setARBTimerQuerySupported(lua_State *L) {
		if (!_lg_typecheck_setARBTimerQuerySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::setARBTimerQuerySupported(bool flag) function, expected prototype:\nvoid osg::Drawable::Extensions::setARBTimerQuerySupported(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::setARBTimerQuerySupported(bool)");
		}
		self->setARBTimerQuerySupported(flag);

		return 0;
	}

	// bool osg::Drawable::Extensions::isARBTimerQuerySupported() const
	static int _bind_isARBTimerQuerySupported(lua_State *L) {
		if (!_lg_typecheck_isARBTimerQuerySupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::Extensions::isARBTimerQuerySupported() const function, expected prototype:\nbool osg::Drawable::Extensions::isARBTimerQuerySupported() const\nClass arguments details:\n");
		}


		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::Extensions::isARBTimerQuerySupported() const");
		}
		bool lret = self->isARBTimerQuerySupported();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Drawable::Extensions::glSecondaryColor3ubv(const unsigned char * coord) const
	static int _bind_glSecondaryColor3ubv(lua_State *L) {
		if (!_lg_typecheck_glSecondaryColor3ubv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glSecondaryColor3ubv(const unsigned char * coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glSecondaryColor3ubv(const unsigned char * coord) const\nClass arguments details:\n");
		}

		unsigned char coord = (unsigned char)(lua_tointeger(L,2));

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glSecondaryColor3ubv(const unsigned char *) const");
		}
		self->glSecondaryColor3ubv(&coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glSecondaryColor3fv(const float * coord) const
	static int _bind_glSecondaryColor3fv(lua_State *L) {
		if (!_lg_typecheck_glSecondaryColor3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glSecondaryColor3fv(const float * coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glSecondaryColor3fv(const float * coord) const\nClass arguments details:\n");
		}

		float coord=(float)lua_tonumber(L,2);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glSecondaryColor3fv(const float *) const");
		}
		self->glSecondaryColor3fv(&coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glFogCoordfv(const float * coord) const
	static int _bind_glFogCoordfv(lua_State *L) {
		if (!_lg_typecheck_glFogCoordfv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glFogCoordfv(const float * coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glFogCoordfv(const float * coord) const\nClass arguments details:\n");
		}

		float coord=(float)lua_tonumber(L,2);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glFogCoordfv(const float *) const");
		}
		self->glFogCoordfv(&coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glMultiTexCoord1f(unsigned int target, float coord) const
	static int _bind_glMultiTexCoord1f(lua_State *L) {
		if (!_lg_typecheck_glMultiTexCoord1f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glMultiTexCoord1f(unsigned int target, float coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glMultiTexCoord1f(unsigned int target, float coord) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		float coord=(float)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glMultiTexCoord1f(unsigned int, float) const");
		}
		self->glMultiTexCoord1f(target, coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glMultiTexCoord2fv(unsigned int target, const float * coord) const
	static int _bind_glMultiTexCoord2fv(lua_State *L) {
		if (!_lg_typecheck_glMultiTexCoord2fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glMultiTexCoord2fv(unsigned int target, const float * coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glMultiTexCoord2fv(unsigned int target, const float * coord) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		float coord=(float)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glMultiTexCoord2fv(unsigned int, const float *) const");
		}
		self->glMultiTexCoord2fv(target, &coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glMultiTexCoord3fv(unsigned int target, const float * coord) const
	static int _bind_glMultiTexCoord3fv(lua_State *L) {
		if (!_lg_typecheck_glMultiTexCoord3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glMultiTexCoord3fv(unsigned int target, const float * coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glMultiTexCoord3fv(unsigned int target, const float * coord) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		float coord=(float)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glMultiTexCoord3fv(unsigned int, const float *) const");
		}
		self->glMultiTexCoord3fv(target, &coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glMultiTexCoord4fv(unsigned int target, const float * coord) const
	static int _bind_glMultiTexCoord4fv(lua_State *L) {
		if (!_lg_typecheck_glMultiTexCoord4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glMultiTexCoord4fv(unsigned int target, const float * coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glMultiTexCoord4fv(unsigned int target, const float * coord) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		float coord=(float)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glMultiTexCoord4fv(unsigned int, const float *) const");
		}
		self->glMultiTexCoord4fv(target, &coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glMultiTexCoord1d(unsigned int target, double coord) const
	static int _bind_glMultiTexCoord1d(lua_State *L) {
		if (!_lg_typecheck_glMultiTexCoord1d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glMultiTexCoord1d(unsigned int target, double coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glMultiTexCoord1d(unsigned int target, double coord) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		double coord=(double)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glMultiTexCoord1d(unsigned int, double) const");
		}
		self->glMultiTexCoord1d(target, coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glMultiTexCoord2dv(unsigned int target, const double * coord) const
	static int _bind_glMultiTexCoord2dv(lua_State *L) {
		if (!_lg_typecheck_glMultiTexCoord2dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glMultiTexCoord2dv(unsigned int target, const double * coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glMultiTexCoord2dv(unsigned int target, const double * coord) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		double coord=(double)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glMultiTexCoord2dv(unsigned int, const double *) const");
		}
		self->glMultiTexCoord2dv(target, &coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glMultiTexCoord3dv(unsigned int target, const double * coord) const
	static int _bind_glMultiTexCoord3dv(lua_State *L) {
		if (!_lg_typecheck_glMultiTexCoord3dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glMultiTexCoord3dv(unsigned int target, const double * coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glMultiTexCoord3dv(unsigned int target, const double * coord) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		double coord=(double)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glMultiTexCoord3dv(unsigned int, const double *) const");
		}
		self->glMultiTexCoord3dv(target, &coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glMultiTexCoord4dv(unsigned int target, const double * coord) const
	static int _bind_glMultiTexCoord4dv(lua_State *L) {
		if (!_lg_typecheck_glMultiTexCoord4dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glMultiTexCoord4dv(unsigned int target, const double * coord) const function, expected prototype:\nvoid osg::Drawable::Extensions::glMultiTexCoord4dv(unsigned int target, const double * coord) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		double coord=(double)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glMultiTexCoord4dv(unsigned int, const double *) const");
		}
		self->glMultiTexCoord4dv(target, &coord);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib1s(unsigned int index, short s) const
	static int _bind_glVertexAttrib1s(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib1s(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib1s(unsigned int index, short s) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib1s(unsigned int index, short s) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		short s=(short)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib1s(unsigned int, short) const");
		}
		self->glVertexAttrib1s(index, s);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib1f(unsigned int index, float f) const
	static int _bind_glVertexAttrib1f(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib1f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib1f(unsigned int index, float f) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib1f(unsigned int index, float f) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float f=(float)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib1f(unsigned int, float) const");
		}
		self->glVertexAttrib1f(index, f);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib1d(unsigned int index, double f) const
	static int _bind_glVertexAttrib1d(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib1d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib1d(unsigned int index, double f) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib1d(unsigned int index, double f) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double f=(double)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib1d(unsigned int, double) const");
		}
		self->glVertexAttrib1d(index, f);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib2fv(unsigned int index, const float * v) const
	static int _bind_glVertexAttrib2fv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib2fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib2fv(unsigned int index, const float * v) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib2fv(unsigned int index, const float * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float v=(float)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib2fv(unsigned int, const float *) const");
		}
		self->glVertexAttrib2fv(index, &v);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib3fv(unsigned int index, const float * v) const
	static int _bind_glVertexAttrib3fv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib3fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib3fv(unsigned int index, const float * v) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib3fv(unsigned int index, const float * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float v=(float)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib3fv(unsigned int, const float *) const");
		}
		self->glVertexAttrib3fv(index, &v);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib4fv(unsigned int index, const float * v) const
	static int _bind_glVertexAttrib4fv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4fv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib4fv(unsigned int index, const float * v) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib4fv(unsigned int index, const float * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		float v=(float)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib4fv(unsigned int, const float *) const");
		}
		self->glVertexAttrib4fv(index, &v);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib2dv(unsigned int index, const double * v) const
	static int _bind_glVertexAttrib2dv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib2dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib2dv(unsigned int index, const double * v) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib2dv(unsigned int index, const double * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double v=(double)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib2dv(unsigned int, const double *) const");
		}
		self->glVertexAttrib2dv(index, &v);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib3dv(unsigned int index, const double * v) const
	static int _bind_glVertexAttrib3dv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib3dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib3dv(unsigned int index, const double * v) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib3dv(unsigned int index, const double * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double v=(double)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib3dv(unsigned int, const double *) const");
		}
		self->glVertexAttrib3dv(index, &v);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib4dv(unsigned int index, const double * v) const
	static int _bind_glVertexAttrib4dv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4dv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib4dv(unsigned int index, const double * v) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib4dv(unsigned int index, const double * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		double v=(double)lua_tonumber(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib4dv(unsigned int, const double *) const");
		}
		self->glVertexAttrib4dv(index, &v);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib4ubv(unsigned int index, const unsigned char * v) const
	static int _bind_glVertexAttrib4ubv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4ubv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib4ubv(unsigned int index, const unsigned char * v) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib4ubv(unsigned int index, const unsigned char * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned char v = (unsigned char)(lua_tointeger(L,3));

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib4ubv(unsigned int, const unsigned char *) const");
		}
		self->glVertexAttrib4ubv(index, &v);

		return 0;
	}

	// void osg::Drawable::Extensions::glVertexAttrib4Nubv(unsigned int index, const unsigned char * v) const
	static int _bind_glVertexAttrib4Nubv(lua_State *L) {
		if (!_lg_typecheck_glVertexAttrib4Nubv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glVertexAttrib4Nubv(unsigned int index, const unsigned char * v) const function, expected prototype:\nvoid osg::Drawable::Extensions::glVertexAttrib4Nubv(unsigned int index, const unsigned char * v) const\nClass arguments details:\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		unsigned char v = (unsigned char)(lua_tointeger(L,3));

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glVertexAttrib4Nubv(unsigned int, const unsigned char *) const");
		}
		self->glVertexAttrib4Nubv(index, &v);

		return 0;
	}

	// void osg::Drawable::Extensions::glGenBuffers(int n, unsigned int * buffers) const
	static int _bind_glGenBuffers(lua_State *L) {
		if (!_lg_typecheck_glGenBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGenBuffers(int n, unsigned int * buffers) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGenBuffers(int n, unsigned int * buffers) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int buffers=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGenBuffers(int, unsigned int *) const");
		}
		self->glGenBuffers(n, &buffers);

		return 0;
	}

	// void osg::Drawable::Extensions::glBindBuffer(unsigned int target, unsigned int buffer) const
	static int _bind_glBindBuffer(lua_State *L) {
		if (!_lg_typecheck_glBindBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glBindBuffer(unsigned int target, unsigned int buffer) const function, expected prototype:\nvoid osg::Drawable::Extensions::glBindBuffer(unsigned int target, unsigned int buffer) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int buffer=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glBindBuffer(unsigned int, unsigned int) const");
		}
		self->glBindBuffer(target, buffer);

		return 0;
	}

	// void osg::Drawable::Extensions::glBufferData(unsigned int target, int size, const void * data, unsigned int usage) const
	static int _bind_glBufferData(lua_State *L) {
		if (!_lg_typecheck_glBufferData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glBufferData(unsigned int target, int size, const void * data, unsigned int usage) const function, expected prototype:\nvoid osg::Drawable::Extensions::glBufferData(unsigned int target, int size, const void * data, unsigned int usage) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		void* data=(Luna< void >::check(L,4));
		unsigned int usage=(unsigned int)lua_tointeger(L,5);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glBufferData(unsigned int, int, const void *, unsigned int) const");
		}
		self->glBufferData(target, size, data, usage);

		return 0;
	}

	// void osg::Drawable::Extensions::glBufferSubData(unsigned int target, int offset, int size, const void * data) const
	static int _bind_glBufferSubData(lua_State *L) {
		if (!_lg_typecheck_glBufferSubData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glBufferSubData(unsigned int target, int offset, int size, const void * data) const function, expected prototype:\nvoid osg::Drawable::Extensions::glBufferSubData(unsigned int target, int offset, int size, const void * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int offset=(int)lua_tointeger(L,3);
		int size=(int)lua_tointeger(L,4);
		void* data=(Luna< void >::check(L,5));

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glBufferSubData(unsigned int, int, int, const void *) const");
		}
		self->glBufferSubData(target, offset, size, data);

		return 0;
	}

	// void osg::Drawable::Extensions::glDeleteBuffers(int n, const unsigned int * buffers) const
	static int _bind_glDeleteBuffers(lua_State *L) {
		if (!_lg_typecheck_glDeleteBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glDeleteBuffers(int n, const unsigned int * buffers) const function, expected prototype:\nvoid osg::Drawable::Extensions::glDeleteBuffers(int n, const unsigned int * buffers) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int buffers=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glDeleteBuffers(int, const unsigned int *) const");
		}
		self->glDeleteBuffers(n, &buffers);

		return 0;
	}

	// unsigned char osg::Drawable::Extensions::glIsBuffer(unsigned int buffer) const
	static int _bind_glIsBuffer(lua_State *L) {
		if (!_lg_typecheck_glIsBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char osg::Drawable::Extensions::glIsBuffer(unsigned int buffer) const function, expected prototype:\nunsigned char osg::Drawable::Extensions::glIsBuffer(unsigned int buffer) const\nClass arguments details:\n");
		}

		unsigned int buffer=(unsigned int)lua_tointeger(L,2);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char osg::Drawable::Extensions::glIsBuffer(unsigned int) const");
		}
		unsigned char lret = self->glIsBuffer(buffer);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void osg::Drawable::Extensions::glGetBufferSubData(unsigned int target, int offset, int size, void * data) const
	static int _bind_glGetBufferSubData(lua_State *L) {
		if (!_lg_typecheck_glGetBufferSubData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGetBufferSubData(unsigned int target, int offset, int size, void * data) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGetBufferSubData(unsigned int target, int offset, int size, void * data) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int offset=(int)lua_tointeger(L,3);
		int size=(int)lua_tointeger(L,4);
		void* data=(Luna< void >::check(L,5));

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGetBufferSubData(unsigned int, int, int, void *) const");
		}
		self->glGetBufferSubData(target, offset, size, data);

		return 0;
	}

	// void * osg::Drawable::Extensions::glMapBuffer(unsigned int target, unsigned int access) const
	static int _bind_glMapBuffer(lua_State *L) {
		if (!_lg_typecheck_glMapBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * osg::Drawable::Extensions::glMapBuffer(unsigned int target, unsigned int access) const function, expected prototype:\nvoid * osg::Drawable::Extensions::glMapBuffer(unsigned int target, unsigned int access) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int access=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * osg::Drawable::Extensions::glMapBuffer(unsigned int, unsigned int) const");
		}
		void * lret = self->glMapBuffer(target, access);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned char osg::Drawable::Extensions::glUnmapBuffer(unsigned int target) const
	static int _bind_glUnmapBuffer(lua_State *L) {
		if (!_lg_typecheck_glUnmapBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char osg::Drawable::Extensions::glUnmapBuffer(unsigned int target) const function, expected prototype:\nunsigned char osg::Drawable::Extensions::glUnmapBuffer(unsigned int target) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char osg::Drawable::Extensions::glUnmapBuffer(unsigned int) const");
		}
		unsigned char lret = self->glUnmapBuffer(target);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void osg::Drawable::Extensions::glGetBufferParameteriv(unsigned int target, unsigned int pname, int * params) const
	static int _bind_glGetBufferParameteriv(lua_State *L) {
		if (!_lg_typecheck_glGetBufferParameteriv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGetBufferParameteriv(unsigned int target, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGetBufferParameteriv(unsigned int target, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int params=(int)lua_tointeger(L,4);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGetBufferParameteriv(unsigned int, unsigned int, int *) const");
		}
		self->glGetBufferParameteriv(target, pname, &params);

		return 0;
	}

	// void osg::Drawable::Extensions::glGenOcclusionQueries(int n, unsigned int * ids) const
	static int _bind_glGenOcclusionQueries(lua_State *L) {
		if (!_lg_typecheck_glGenOcclusionQueries(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGenOcclusionQueries(int n, unsigned int * ids) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGenOcclusionQueries(int n, unsigned int * ids) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int ids=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGenOcclusionQueries(int, unsigned int *) const");
		}
		self->glGenOcclusionQueries(n, &ids);

		return 0;
	}

	// void osg::Drawable::Extensions::glDeleteOcclusionQueries(int n, const unsigned int * ids) const
	static int _bind_glDeleteOcclusionQueries(lua_State *L) {
		if (!_lg_typecheck_glDeleteOcclusionQueries(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glDeleteOcclusionQueries(int n, const unsigned int * ids) const function, expected prototype:\nvoid osg::Drawable::Extensions::glDeleteOcclusionQueries(int n, const unsigned int * ids) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int ids=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glDeleteOcclusionQueries(int, const unsigned int *) const");
		}
		self->glDeleteOcclusionQueries(n, &ids);

		return 0;
	}

	// unsigned char osg::Drawable::Extensions::glIsOcclusionQuery(unsigned int id) const
	static int _bind_glIsOcclusionQuery(lua_State *L) {
		if (!_lg_typecheck_glIsOcclusionQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char osg::Drawable::Extensions::glIsOcclusionQuery(unsigned int id) const function, expected prototype:\nunsigned char osg::Drawable::Extensions::glIsOcclusionQuery(unsigned int id) const\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char osg::Drawable::Extensions::glIsOcclusionQuery(unsigned int) const");
		}
		unsigned char lret = self->glIsOcclusionQuery(id);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void osg::Drawable::Extensions::glBeginOcclusionQuery(unsigned int id) const
	static int _bind_glBeginOcclusionQuery(lua_State *L) {
		if (!_lg_typecheck_glBeginOcclusionQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glBeginOcclusionQuery(unsigned int id) const function, expected prototype:\nvoid osg::Drawable::Extensions::glBeginOcclusionQuery(unsigned int id) const\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glBeginOcclusionQuery(unsigned int) const");
		}
		self->glBeginOcclusionQuery(id);

		return 0;
	}

	// void osg::Drawable::Extensions::glEndOcclusionQuery() const
	static int _bind_glEndOcclusionQuery(lua_State *L) {
		if (!_lg_typecheck_glEndOcclusionQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glEndOcclusionQuery() const function, expected prototype:\nvoid osg::Drawable::Extensions::glEndOcclusionQuery() const\nClass arguments details:\n");
		}


		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glEndOcclusionQuery() const");
		}
		self->glEndOcclusionQuery();

		return 0;
	}

	// void osg::Drawable::Extensions::glGetOcclusionQueryiv(unsigned int id, unsigned int pname, int * params) const
	static int _bind_glGetOcclusionQueryiv(lua_State *L) {
		if (!_lg_typecheck_glGetOcclusionQueryiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGetOcclusionQueryiv(unsigned int id, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGetOcclusionQueryiv(unsigned int id, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int params=(int)lua_tointeger(L,4);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGetOcclusionQueryiv(unsigned int, unsigned int, int *) const");
		}
		self->glGetOcclusionQueryiv(id, pname, &params);

		return 0;
	}

	// void osg::Drawable::Extensions::glGetOcclusionQueryuiv(unsigned int id, unsigned int pname, unsigned int * params) const
	static int _bind_glGetOcclusionQueryuiv(lua_State *L) {
		if (!_lg_typecheck_glGetOcclusionQueryuiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGetOcclusionQueryuiv(unsigned int id, unsigned int pname, unsigned int * params) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGetOcclusionQueryuiv(unsigned int id, unsigned int pname, unsigned int * params) const\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		unsigned int params=(unsigned int)lua_tointeger(L,4);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGetOcclusionQueryuiv(unsigned int, unsigned int, unsigned int *) const");
		}
		self->glGetOcclusionQueryuiv(id, pname, &params);

		return 0;
	}

	// void osg::Drawable::Extensions::glGetQueryiv(unsigned int target, unsigned int pname, int * params) const
	static int _bind_glGetQueryiv(lua_State *L) {
		if (!_lg_typecheck_glGetQueryiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGetQueryiv(unsigned int target, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGetQueryiv(unsigned int target, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int params=(int)lua_tointeger(L,4);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGetQueryiv(unsigned int, unsigned int, int *) const");
		}
		self->glGetQueryiv(target, pname, &params);

		return 0;
	}

	// void osg::Drawable::Extensions::glGenQueries(int n, unsigned int * ids) const
	static int _bind_glGenQueries(lua_State *L) {
		if (!_lg_typecheck_glGenQueries(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGenQueries(int n, unsigned int * ids) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGenQueries(int n, unsigned int * ids) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int ids=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGenQueries(int, unsigned int *) const");
		}
		self->glGenQueries(n, &ids);

		return 0;
	}

	// void osg::Drawable::Extensions::glBeginQuery(unsigned int target, unsigned int id) const
	static int _bind_glBeginQuery(lua_State *L) {
		if (!_lg_typecheck_glBeginQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glBeginQuery(unsigned int target, unsigned int id) const function, expected prototype:\nvoid osg::Drawable::Extensions::glBeginQuery(unsigned int target, unsigned int id) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int id=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glBeginQuery(unsigned int, unsigned int) const");
		}
		self->glBeginQuery(target, id);

		return 0;
	}

	// void osg::Drawable::Extensions::glEndQuery(unsigned int target) const
	static int _bind_glEndQuery(lua_State *L) {
		if (!_lg_typecheck_glEndQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glEndQuery(unsigned int target) const function, expected prototype:\nvoid osg::Drawable::Extensions::glEndQuery(unsigned int target) const\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glEndQuery(unsigned int) const");
		}
		self->glEndQuery(target);

		return 0;
	}

	// void osg::Drawable::Extensions::glQueryCounter(unsigned int id, unsigned int target) const
	static int _bind_glQueryCounter(lua_State *L) {
		if (!_lg_typecheck_glQueryCounter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glQueryCounter(unsigned int id, unsigned int target) const function, expected prototype:\nvoid osg::Drawable::Extensions::glQueryCounter(unsigned int id, unsigned int target) const\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int target=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glQueryCounter(unsigned int, unsigned int) const");
		}
		self->glQueryCounter(id, target);

		return 0;
	}

	// unsigned char osg::Drawable::Extensions::glIsQuery(unsigned int id) const
	static int _bind_glIsQuery(lua_State *L) {
		if (!_lg_typecheck_glIsQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char osg::Drawable::Extensions::glIsQuery(unsigned int id) const function, expected prototype:\nunsigned char osg::Drawable::Extensions::glIsQuery(unsigned int id) const\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char osg::Drawable::Extensions::glIsQuery(unsigned int) const");
		}
		unsigned char lret = self->glIsQuery(id);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void osg::Drawable::Extensions::glDeleteQueries(int n, const unsigned int * ids) const
	static int _bind_glDeleteQueries(lua_State *L) {
		if (!_lg_typecheck_glDeleteQueries(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glDeleteQueries(int n, const unsigned int * ids) const function, expected prototype:\nvoid osg::Drawable::Extensions::glDeleteQueries(int n, const unsigned int * ids) const\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		unsigned int ids=(unsigned int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glDeleteQueries(int, const unsigned int *) const");
		}
		self->glDeleteQueries(n, &ids);

		return 0;
	}

	// void osg::Drawable::Extensions::glGetQueryObjectiv(unsigned int id, unsigned int pname, int * params) const
	static int _bind_glGetQueryObjectiv(lua_State *L) {
		if (!_lg_typecheck_glGetQueryObjectiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGetQueryObjectiv(unsigned int id, unsigned int pname, int * params) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGetQueryObjectiv(unsigned int id, unsigned int pname, int * params) const\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		int params=(int)lua_tointeger(L,4);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGetQueryObjectiv(unsigned int, unsigned int, int *) const");
		}
		self->glGetQueryObjectiv(id, pname, &params);

		return 0;
	}

	// void osg::Drawable::Extensions::glGetQueryObjectuiv(unsigned int id, unsigned int pname, unsigned int * params) const
	static int _bind_glGetQueryObjectuiv(lua_State *L) {
		if (!_lg_typecheck_glGetQueryObjectuiv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGetQueryObjectuiv(unsigned int id, unsigned int pname, unsigned int * params) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGetQueryObjectuiv(unsigned int id, unsigned int pname, unsigned int * params) const\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		unsigned int params=(unsigned int)lua_tointeger(L,4);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGetQueryObjectuiv(unsigned int, unsigned int, unsigned int *) const");
		}
		self->glGetQueryObjectuiv(id, pname, &params);

		return 0;
	}

	// void osg::Drawable::Extensions::glGetQueryObjectui64v(unsigned int id, unsigned int pname, unsigned long long int * params) const
	static int _bind_glGetQueryObjectui64v(lua_State *L) {
		if (!_lg_typecheck_glGetQueryObjectui64v(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGetQueryObjectui64v(unsigned int id, unsigned int pname, unsigned long long int * params) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGetQueryObjectui64v(unsigned int id, unsigned int pname, unsigned long long int * params) const\nClass arguments details:\n");
		}

		unsigned int id=(unsigned int)lua_tointeger(L,2);
		unsigned int pname=(unsigned int)lua_tointeger(L,3);
		unsigned long long int params=(unsigned long long int)lua_tointeger(L,4);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGetQueryObjectui64v(unsigned int, unsigned int, unsigned long long int *) const");
		}
		self->glGetQueryObjectui64v(id, pname, &params);

		return 0;
	}

	// void osg::Drawable::Extensions::glGetInteger64v(unsigned int pname, long long int * params) const
	static int _bind_glGetInteger64v(lua_State *L) {
		if (!_lg_typecheck_glGetInteger64v(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::Extensions::glGetInteger64v(unsigned int pname, long long int * params) const function, expected prototype:\nvoid osg::Drawable::Extensions::glGetInteger64v(unsigned int pname, long long int * params) const\nClass arguments details:\n");
		}

		unsigned int pname=(unsigned int)lua_tointeger(L,2);
		long long int params=(long long int)lua_tointeger(L,3);

		osg::Drawable::Extensions* self=dynamic_cast< osg::Drawable::Extensions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::Extensions::glGetInteger64v(unsigned int, long long int *) const");
		}
		self->glGetInteger64v(pname, &params);

		return 0;
	}


	// Operator binds:

};

osg::Drawable::Extensions* LunaTraits< osg::Drawable::Extensions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Drawable_Extensions::_bind_ctor(L);
}

void LunaTraits< osg::Drawable::Extensions >::_bind_dtor(osg::Drawable::Extensions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Drawable::Extensions >::className[] = "Extensions";
const char LunaTraits< osg::Drawable::Extensions >::fullName[] = "osg::Drawable::Extensions";
const char LunaTraits< osg::Drawable::Extensions >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::Extensions >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Drawable::Extensions >::hash = 19275952;
const int LunaTraits< osg::Drawable::Extensions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Drawable::Extensions >::methods[] = {
	{"setupGLExtensions", &luna_wrapper_osg_Drawable_Extensions::_bind_setupGLExtensions},
	{"setVertexProgramSupported", &luna_wrapper_osg_Drawable_Extensions::_bind_setVertexProgramSupported},
	{"isVertexProgramSupported", &luna_wrapper_osg_Drawable_Extensions::_bind_isVertexProgramSupported},
	{"setSecondaryColorSupported", &luna_wrapper_osg_Drawable_Extensions::_bind_setSecondaryColorSupported},
	{"isSecondaryColorSupported", &luna_wrapper_osg_Drawable_Extensions::_bind_isSecondaryColorSupported},
	{"setFogCoordSupported", &luna_wrapper_osg_Drawable_Extensions::_bind_setFogCoordSupported},
	{"isFogCoordSupported", &luna_wrapper_osg_Drawable_Extensions::_bind_isFogCoordSupported},
	{"setMultiTexSupported", &luna_wrapper_osg_Drawable_Extensions::_bind_setMultiTexSupported},
	{"isMultiTexSupported", &luna_wrapper_osg_Drawable_Extensions::_bind_isMultiTexSupported},
	{"setOcclusionQuerySupported", &luna_wrapper_osg_Drawable_Extensions::_bind_setOcclusionQuerySupported},
	{"isOcclusionQuerySupported", &luna_wrapper_osg_Drawable_Extensions::_bind_isOcclusionQuerySupported},
	{"setARBOcclusionQuerySupported", &luna_wrapper_osg_Drawable_Extensions::_bind_setARBOcclusionQuerySupported},
	{"isARBOcclusionQuerySupported", &luna_wrapper_osg_Drawable_Extensions::_bind_isARBOcclusionQuerySupported},
	{"setTimerQuerySupported", &luna_wrapper_osg_Drawable_Extensions::_bind_setTimerQuerySupported},
	{"isTimerQuerySupported", &luna_wrapper_osg_Drawable_Extensions::_bind_isTimerQuerySupported},
	{"setARBTimerQuerySupported", &luna_wrapper_osg_Drawable_Extensions::_bind_setARBTimerQuerySupported},
	{"isARBTimerQuerySupported", &luna_wrapper_osg_Drawable_Extensions::_bind_isARBTimerQuerySupported},
	{"glSecondaryColor3ubv", &luna_wrapper_osg_Drawable_Extensions::_bind_glSecondaryColor3ubv},
	{"glSecondaryColor3fv", &luna_wrapper_osg_Drawable_Extensions::_bind_glSecondaryColor3fv},
	{"glFogCoordfv", &luna_wrapper_osg_Drawable_Extensions::_bind_glFogCoordfv},
	{"glMultiTexCoord1f", &luna_wrapper_osg_Drawable_Extensions::_bind_glMultiTexCoord1f},
	{"glMultiTexCoord2fv", &luna_wrapper_osg_Drawable_Extensions::_bind_glMultiTexCoord2fv},
	{"glMultiTexCoord3fv", &luna_wrapper_osg_Drawable_Extensions::_bind_glMultiTexCoord3fv},
	{"glMultiTexCoord4fv", &luna_wrapper_osg_Drawable_Extensions::_bind_glMultiTexCoord4fv},
	{"glMultiTexCoord1d", &luna_wrapper_osg_Drawable_Extensions::_bind_glMultiTexCoord1d},
	{"glMultiTexCoord2dv", &luna_wrapper_osg_Drawable_Extensions::_bind_glMultiTexCoord2dv},
	{"glMultiTexCoord3dv", &luna_wrapper_osg_Drawable_Extensions::_bind_glMultiTexCoord3dv},
	{"glMultiTexCoord4dv", &luna_wrapper_osg_Drawable_Extensions::_bind_glMultiTexCoord4dv},
	{"glVertexAttrib1s", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib1s},
	{"glVertexAttrib1f", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib1f},
	{"glVertexAttrib1d", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib1d},
	{"glVertexAttrib2fv", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib2fv},
	{"glVertexAttrib3fv", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib3fv},
	{"glVertexAttrib4fv", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib4fv},
	{"glVertexAttrib2dv", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib2dv},
	{"glVertexAttrib3dv", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib3dv},
	{"glVertexAttrib4dv", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib4dv},
	{"glVertexAttrib4ubv", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib4ubv},
	{"glVertexAttrib4Nubv", &luna_wrapper_osg_Drawable_Extensions::_bind_glVertexAttrib4Nubv},
	{"glGenBuffers", &luna_wrapper_osg_Drawable_Extensions::_bind_glGenBuffers},
	{"glBindBuffer", &luna_wrapper_osg_Drawable_Extensions::_bind_glBindBuffer},
	{"glBufferData", &luna_wrapper_osg_Drawable_Extensions::_bind_glBufferData},
	{"glBufferSubData", &luna_wrapper_osg_Drawable_Extensions::_bind_glBufferSubData},
	{"glDeleteBuffers", &luna_wrapper_osg_Drawable_Extensions::_bind_glDeleteBuffers},
	{"glIsBuffer", &luna_wrapper_osg_Drawable_Extensions::_bind_glIsBuffer},
	{"glGetBufferSubData", &luna_wrapper_osg_Drawable_Extensions::_bind_glGetBufferSubData},
	{"glMapBuffer", &luna_wrapper_osg_Drawable_Extensions::_bind_glMapBuffer},
	{"glUnmapBuffer", &luna_wrapper_osg_Drawable_Extensions::_bind_glUnmapBuffer},
	{"glGetBufferParameteriv", &luna_wrapper_osg_Drawable_Extensions::_bind_glGetBufferParameteriv},
	{"glGenOcclusionQueries", &luna_wrapper_osg_Drawable_Extensions::_bind_glGenOcclusionQueries},
	{"glDeleteOcclusionQueries", &luna_wrapper_osg_Drawable_Extensions::_bind_glDeleteOcclusionQueries},
	{"glIsOcclusionQuery", &luna_wrapper_osg_Drawable_Extensions::_bind_glIsOcclusionQuery},
	{"glBeginOcclusionQuery", &luna_wrapper_osg_Drawable_Extensions::_bind_glBeginOcclusionQuery},
	{"glEndOcclusionQuery", &luna_wrapper_osg_Drawable_Extensions::_bind_glEndOcclusionQuery},
	{"glGetOcclusionQueryiv", &luna_wrapper_osg_Drawable_Extensions::_bind_glGetOcclusionQueryiv},
	{"glGetOcclusionQueryuiv", &luna_wrapper_osg_Drawable_Extensions::_bind_glGetOcclusionQueryuiv},
	{"glGetQueryiv", &luna_wrapper_osg_Drawable_Extensions::_bind_glGetQueryiv},
	{"glGenQueries", &luna_wrapper_osg_Drawable_Extensions::_bind_glGenQueries},
	{"glBeginQuery", &luna_wrapper_osg_Drawable_Extensions::_bind_glBeginQuery},
	{"glEndQuery", &luna_wrapper_osg_Drawable_Extensions::_bind_glEndQuery},
	{"glQueryCounter", &luna_wrapper_osg_Drawable_Extensions::_bind_glQueryCounter},
	{"glIsQuery", &luna_wrapper_osg_Drawable_Extensions::_bind_glIsQuery},
	{"glDeleteQueries", &luna_wrapper_osg_Drawable_Extensions::_bind_glDeleteQueries},
	{"glGetQueryObjectiv", &luna_wrapper_osg_Drawable_Extensions::_bind_glGetQueryObjectiv},
	{"glGetQueryObjectuiv", &luna_wrapper_osg_Drawable_Extensions::_bind_glGetQueryObjectuiv},
	{"glGetQueryObjectui64v", &luna_wrapper_osg_Drawable_Extensions::_bind_glGetQueryObjectui64v},
	{"glGetInteger64v", &luna_wrapper_osg_Drawable_Extensions::_bind_glGetInteger64v},
	{"__eq", &luna_wrapper_osg_Drawable_Extensions::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::Extensions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Drawable_Extensions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::Extensions >::enumValues[] = {
	{0,0}
};


