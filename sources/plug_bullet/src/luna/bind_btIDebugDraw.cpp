#include <plug_common.h>

#include <luna/wrappers/wrapper_btIDebugDraw.h>

class luna_wrapper_btIDebugDraw {
public:
	typedef Luna< btIDebugDraw > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btIDebugDraw,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63441741) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btIDebugDraw*)");
		}

		btIDebugDraw* rhs =(Luna< btIDebugDraw >::check(L,2));
		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
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

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btIDebugDraw");
		
		return luna_dynamicCast(L,converters,"btIDebugDraw",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_drawLine_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawLine_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawSphere_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawSphere_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawTriangle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,8))) ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawTriangle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawContactPoint(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reportErrorWarning(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_draw3dText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDebugMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDebugMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawArc(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<10 || luatop>11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,9,91544891) ) return false;
		if( lua_isboolean(L,10)==0 ) return false;
		if( luatop>10 && lua_isnumber(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawSpherePatch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<10 || luatop>11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,10,91544891) ) return false;
		if( luatop>10 && lua_isnumber(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawBox_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawBox_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawCapsule(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawCylinder(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawCone(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawPlane(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawLine(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawSphere_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawSphere_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawTriangle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,8))) ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawTriangle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawAabb(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawArc(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<10 || luatop>11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,9,91544891) ) return false;
		if( lua_isboolean(L,10)==0 ) return false;
		if( luatop>10 && lua_isnumber(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawSpherePatch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<10 || luatop>11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,10,91544891) ) return false;
		if( luatop>10 && lua_isnumber(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawBox_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawBox_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( (!(Luna< btTransform >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawCapsule(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawCylinder(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawCone(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawPlane(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btIDebugDraw::btIDebugDraw(lua_Table * data)
	static btIDebugDraw* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btIDebugDraw::btIDebugDraw(lua_Table * data) function, expected prototype:\nbtIDebugDraw::btIDebugDraw(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btIDebugDraw(L,NULL);
	}


	// Function binds:
	// void btIDebugDraw::drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & color)
	static int _bind_drawLine_overload_1(lua_State *L) {
		if (!_lg_typecheck_drawLine_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* from_ptr=(Luna< btVector3 >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btIDebugDraw::drawLine function");
		}
		const btVector3 & from=*from_ptr;
		const btVector3* to_ptr=(Luna< btVector3 >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btIDebugDraw::drawLine function");
		}
		const btVector3 & to=*to_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawLine function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawLine(const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawLine(from, to, color);

		return 0;
	}

	// void btIDebugDraw::drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & fromColor, const btVector3 & toColor)
	static int _bind_drawLine_overload_2(lua_State *L) {
		if (!_lg_typecheck_drawLine_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & fromColor, const btVector3 & toColor) function, expected prototype:\nvoid btIDebugDraw::drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & fromColor, const btVector3 & toColor)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* from_ptr=(Luna< btVector3 >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btIDebugDraw::drawLine function");
		}
		const btVector3 & from=*from_ptr;
		const btVector3* to_ptr=(Luna< btVector3 >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btIDebugDraw::drawLine function");
		}
		const btVector3 & to=*to_ptr;
		const btVector3* fromColor_ptr=(Luna< btVector3 >::check(L,4));
		if( !fromColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromColor in btIDebugDraw::drawLine function");
		}
		const btVector3 & fromColor=*fromColor_ptr;
		const btVector3* toColor_ptr=(Luna< btVector3 >::check(L,5));
		if( !toColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toColor in btIDebugDraw::drawLine function");
		}
		const btVector3 & toColor=*toColor_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawLine(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawLine(from, to, fromColor, toColor);

		return 0;
	}

	// Overload binder for btIDebugDraw::drawLine
	static int _bind_drawLine(lua_State *L) {
		if (_lg_typecheck_drawLine_overload_1(L)) return _bind_drawLine_overload_1(L);
		if (_lg_typecheck_drawLine_overload_2(L)) return _bind_drawLine_overload_2(L);

		luaL_error(L, "error in function drawLine, cannot match any of the overloads for function drawLine:\n  drawLine(const btVector3 &, const btVector3 &, const btVector3 &)\n  drawLine(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &)\n");
		return 0;
	}

	// void btIDebugDraw::drawSphere(float radius, const btTransform & transform, const btVector3 & color)
	static int _bind_drawSphere_overload_1(lua_State *L) {
		if (!_lg_typecheck_drawSphere_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawSphere(float radius, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawSphere(float radius, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\n");
		}

		float radius=(float)lua_tonumber(L,2);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::drawSphere function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawSphere function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawSphere(float, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawSphere(radius, transform, color);

		return 0;
	}

	// void btIDebugDraw::drawSphere(const btVector3 & p, float radius, const btVector3 & color)
	static int _bind_drawSphere_overload_2(lua_State *L) {
		if (!_lg_typecheck_drawSphere_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawSphere(const btVector3 & p, float radius, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawSphere(const btVector3 & p, float radius, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* p_ptr=(Luna< btVector3 >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in btIDebugDraw::drawSphere function");
		}
		const btVector3 & p=*p_ptr;
		float radius=(float)lua_tonumber(L,3);
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawSphere function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawSphere(const btVector3 &, float, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawSphere(p, radius, color);

		return 0;
	}

	// Overload binder for btIDebugDraw::drawSphere
	static int _bind_drawSphere(lua_State *L) {
		if (_lg_typecheck_drawSphere_overload_1(L)) return _bind_drawSphere_overload_1(L);
		if (_lg_typecheck_drawSphere_overload_2(L)) return _bind_drawSphere_overload_2(L);

		luaL_error(L, "error in function drawSphere, cannot match any of the overloads for function drawSphere:\n  drawSphere(float, const btTransform &, const btVector3 &)\n  drawSphere(const btVector3 &, float, const btVector3 &)\n");
		return 0;
	}

	// void btIDebugDraw::drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & arg4, const btVector3 & arg5, const btVector3 & arg6, const btVector3 & color, float alpha)
	static int _bind_drawTriangle_overload_1(lua_State *L) {
		if (!_lg_typecheck_drawTriangle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & arg4, const btVector3 & arg5, const btVector3 & arg6, const btVector3 & color, float alpha) function, expected prototype:\nvoid btIDebugDraw::drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & arg4, const btVector3 & arg5, const btVector3 & arg6, const btVector3 & color, float alpha)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\narg 7 ID = 91544891\n");
		}

		const btVector3* v0_ptr=(Luna< btVector3 >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & v0=*v0_ptr;
		const btVector3* v1_ptr=(Luna< btVector3 >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & v1=*v1_ptr;
		const btVector3* v2_ptr=(Luna< btVector3 >::check(L,4));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & v2=*v2_ptr;
		const btVector3* _arg4_ptr=(Luna< btVector3 >::check(L,5));
		if( !_arg4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg4 in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & _arg4=*_arg4_ptr;
		const btVector3* _arg5_ptr=(Luna< btVector3 >::check(L,6));
		if( !_arg5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg5 in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & _arg5=*_arg5_ptr;
		const btVector3* _arg6_ptr=(Luna< btVector3 >::check(L,7));
		if( !_arg6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg6 in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & _arg6=*_arg6_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,8));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & color=*color_ptr;
		float alpha=(float)lua_tonumber(L,9);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawTriangle(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawTriangle(v0, v1, v2, _arg4, _arg5, _arg6, color, alpha);

		return 0;
	}

	// void btIDebugDraw::drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & color, float arg5)
	static int _bind_drawTriangle_overload_2(lua_State *L) {
		if (!_lg_typecheck_drawTriangle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & color, float arg5) function, expected prototype:\nvoid btIDebugDraw::drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & color, float arg5)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* v0_ptr=(Luna< btVector3 >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & v0=*v0_ptr;
		const btVector3* v1_ptr=(Luna< btVector3 >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & v1=*v1_ptr;
		const btVector3* v2_ptr=(Luna< btVector3 >::check(L,4));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & v2=*v2_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawTriangle function");
		}
		const btVector3 & color=*color_ptr;
		float _arg5=(float)lua_tonumber(L,6);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawTriangle(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawTriangle(v0, v1, v2, color, _arg5);

		return 0;
	}

	// Overload binder for btIDebugDraw::drawTriangle
	static int _bind_drawTriangle(lua_State *L) {
		if (_lg_typecheck_drawTriangle_overload_1(L)) return _bind_drawTriangle_overload_1(L);
		if (_lg_typecheck_drawTriangle_overload_2(L)) return _bind_drawTriangle_overload_2(L);

		luaL_error(L, "error in function drawTriangle, cannot match any of the overloads for function drawTriangle:\n  drawTriangle(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, float)\n  drawTriangle(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, float)\n");
		return 0;
	}

	// void btIDebugDraw::drawContactPoint(const btVector3 & PointOnB, const btVector3 & normalOnB, float distance, int lifeTime, const btVector3 & color)
	static int _bind_drawContactPoint(lua_State *L) {
		if (!_lg_typecheck_drawContactPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawContactPoint(const btVector3 & PointOnB, const btVector3 & normalOnB, float distance, int lifeTime, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawContactPoint(const btVector3 & PointOnB, const btVector3 & normalOnB, float distance, int lifeTime, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 5 ID = 91544891\n");
		}

		const btVector3* PointOnB_ptr=(Luna< btVector3 >::check(L,2));
		if( !PointOnB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg PointOnB in btIDebugDraw::drawContactPoint function");
		}
		const btVector3 & PointOnB=*PointOnB_ptr;
		const btVector3* normalOnB_ptr=(Luna< btVector3 >::check(L,3));
		if( !normalOnB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normalOnB in btIDebugDraw::drawContactPoint function");
		}
		const btVector3 & normalOnB=*normalOnB_ptr;
		float distance=(float)lua_tonumber(L,4);
		int lifeTime=(int)lua_tointeger(L,5);
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,6));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawContactPoint function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawContactPoint(const btVector3 &, const btVector3 &, float, int, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawContactPoint(PointOnB, normalOnB, distance, lifeTime, color);

		return 0;
	}

	// void btIDebugDraw::reportErrorWarning(const char * warningString)
	static int _bind_reportErrorWarning(lua_State *L) {
		if (!_lg_typecheck_reportErrorWarning(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::reportErrorWarning(const char * warningString) function, expected prototype:\nvoid btIDebugDraw::reportErrorWarning(const char * warningString)\nClass arguments details:\n");
		}

		const char * warningString=(const char *)lua_tostring(L,2);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::reportErrorWarning(const char *). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->reportErrorWarning(warningString);

		return 0;
	}

	// void btIDebugDraw::draw3dText(const btVector3 & location, const char * textString)
	static int _bind_draw3dText(lua_State *L) {
		if (!_lg_typecheck_draw3dText(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::draw3dText(const btVector3 & location, const char * textString) function, expected prototype:\nvoid btIDebugDraw::draw3dText(const btVector3 & location, const char * textString)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* location_ptr=(Luna< btVector3 >::check(L,2));
		if( !location_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg location in btIDebugDraw::draw3dText function");
		}
		const btVector3 & location=*location_ptr;
		const char * textString=(const char *)lua_tostring(L,3);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::draw3dText(const btVector3 &, const char *). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->draw3dText(location, textString);

		return 0;
	}

	// void btIDebugDraw::setDebugMode(int debugMode)
	static int _bind_setDebugMode(lua_State *L) {
		if (!_lg_typecheck_setDebugMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::setDebugMode(int debugMode) function, expected prototype:\nvoid btIDebugDraw::setDebugMode(int debugMode)\nClass arguments details:\n");
		}

		int debugMode=(int)lua_tointeger(L,2);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::setDebugMode(int). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->setDebugMode(debugMode);

		return 0;
	}

	// int btIDebugDraw::getDebugMode() const
	static int _bind_getDebugMode(lua_State *L) {
		if (!_lg_typecheck_getDebugMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btIDebugDraw::getDebugMode() const function, expected prototype:\nint btIDebugDraw::getDebugMode() const\nClass arguments details:\n");
		}


		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btIDebugDraw::getDebugMode() const. Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		int lret = self->getDebugMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btIDebugDraw::drawAabb(const btVector3 & from, const btVector3 & to, const btVector3 & color)
	static int _bind_drawAabb(lua_State *L) {
		if (!_lg_typecheck_drawAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawAabb(const btVector3 & from, const btVector3 & to, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawAabb(const btVector3 & from, const btVector3 & to, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* from_ptr=(Luna< btVector3 >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btIDebugDraw::drawAabb function");
		}
		const btVector3 & from=*from_ptr;
		const btVector3* to_ptr=(Luna< btVector3 >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btIDebugDraw::drawAabb function");
		}
		const btVector3 & to=*to_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawAabb function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawAabb(const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawAabb(from, to, color);

		return 0;
	}

	// void btIDebugDraw::drawTransform(const btTransform & transform, float orthoLen)
	static int _bind_drawTransform(lua_State *L) {
		if (!_lg_typecheck_drawTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawTransform(const btTransform & transform, float orthoLen) function, expected prototype:\nvoid btIDebugDraw::drawTransform(const btTransform & transform, float orthoLen)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* transform_ptr=(Luna< btTransform >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::drawTransform function");
		}
		const btTransform & transform=*transform_ptr;
		float orthoLen=(float)lua_tonumber(L,3);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawTransform(const btTransform &, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawTransform(transform, orthoLen);

		return 0;
	}

	// void btIDebugDraw::drawArc(const btVector3 & center, const btVector3 & normal, const btVector3 & axis, float radiusA, float radiusB, float minAngle, float maxAngle, const btVector3 & color, bool drawSect, float stepDegrees = float (10.f))
	static int _bind_drawArc(lua_State *L) {
		if (!_lg_typecheck_drawArc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawArc(const btVector3 & center, const btVector3 & normal, const btVector3 & axis, float radiusA, float radiusB, float minAngle, float maxAngle, const btVector3 & color, bool drawSect, float stepDegrees = float (10.f)) function, expected prototype:\nvoid btIDebugDraw::drawArc(const btVector3 & center, const btVector3 & normal, const btVector3 & axis, float radiusA, float radiusB, float minAngle, float maxAngle, const btVector3 & color, bool drawSect, float stepDegrees = float (10.f))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 8 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btIDebugDraw::drawArc function");
		}
		const btVector3 & center=*center_ptr;
		const btVector3* normal_ptr=(Luna< btVector3 >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btIDebugDraw::drawArc function");
		}
		const btVector3 & normal=*normal_ptr;
		const btVector3* axis_ptr=(Luna< btVector3 >::check(L,4));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in btIDebugDraw::drawArc function");
		}
		const btVector3 & axis=*axis_ptr;
		float radiusA=(float)lua_tonumber(L,5);
		float radiusB=(float)lua_tonumber(L,6);
		float minAngle=(float)lua_tonumber(L,7);
		float maxAngle=(float)lua_tonumber(L,8);
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,9));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawArc function");
		}
		const btVector3 & color=*color_ptr;
		bool drawSect=(bool)(lua_toboolean(L,10)==1);
		float stepDegrees=luatop>10 ? (float)lua_tonumber(L,11) : float (10.f);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawArc(const btVector3 &, const btVector3 &, const btVector3 &, float, float, float, float, const btVector3 &, bool, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawArc(center, normal, axis, radiusA, radiusB, minAngle, maxAngle, color, drawSect, stepDegrees);

		return 0;
	}

	// void btIDebugDraw::drawSpherePatch(const btVector3 & center, const btVector3 & up, const btVector3 & axis, float radius, float minTh, float maxTh, float minPs, float maxPs, const btVector3 & color, float stepDegrees = float (10.f))
	static int _bind_drawSpherePatch(lua_State *L) {
		if (!_lg_typecheck_drawSpherePatch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawSpherePatch(const btVector3 & center, const btVector3 & up, const btVector3 & axis, float radius, float minTh, float maxTh, float minPs, float maxPs, const btVector3 & color, float stepDegrees = float (10.f)) function, expected prototype:\nvoid btIDebugDraw::drawSpherePatch(const btVector3 & center, const btVector3 & up, const btVector3 & axis, float radius, float minTh, float maxTh, float minPs, float maxPs, const btVector3 & color, float stepDegrees = float (10.f))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 9 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btIDebugDraw::drawSpherePatch function");
		}
		const btVector3 & center=*center_ptr;
		const btVector3* up_ptr=(Luna< btVector3 >::check(L,3));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in btIDebugDraw::drawSpherePatch function");
		}
		const btVector3 & up=*up_ptr;
		const btVector3* axis_ptr=(Luna< btVector3 >::check(L,4));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in btIDebugDraw::drawSpherePatch function");
		}
		const btVector3 & axis=*axis_ptr;
		float radius=(float)lua_tonumber(L,5);
		float minTh=(float)lua_tonumber(L,6);
		float maxTh=(float)lua_tonumber(L,7);
		float minPs=(float)lua_tonumber(L,8);
		float maxPs=(float)lua_tonumber(L,9);
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,10));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawSpherePatch function");
		}
		const btVector3 & color=*color_ptr;
		float stepDegrees=luatop>10 ? (float)lua_tonumber(L,11) : float (10.f);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawSpherePatch(const btVector3 &, const btVector3 &, const btVector3 &, float, float, float, float, float, const btVector3 &, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawSpherePatch(center, up, axis, radius, minTh, maxTh, minPs, maxPs, color, stepDegrees);

		return 0;
	}

	// void btIDebugDraw::drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btVector3 & color)
	static int _bind_drawBox_overload_1(lua_State *L) {
		if (!_lg_typecheck_drawBox_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* bbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !bbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbMin in btIDebugDraw::drawBox function");
		}
		const btVector3 & bbMin=*bbMin_ptr;
		const btVector3* bbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !bbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbMax in btIDebugDraw::drawBox function");
		}
		const btVector3 & bbMax=*bbMax_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawBox function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawBox(const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawBox(bbMin, bbMax, color);

		return 0;
	}

	// void btIDebugDraw::drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btTransform & trans, const btVector3 & color)
	static int _bind_drawBox_overload_2(lua_State *L) {
		if (!_lg_typecheck_drawBox_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btTransform & trans, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btTransform & trans, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 13247377\narg 4 ID = 91544891\n");
		}

		const btVector3* bbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !bbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbMin in btIDebugDraw::drawBox function");
		}
		const btVector3 & bbMin=*bbMin_ptr;
		const btVector3* bbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !bbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbMax in btIDebugDraw::drawBox function");
		}
		const btVector3 & bbMax=*bbMax_ptr;
		const btTransform* trans_ptr=(Luna< btTransform >::check(L,4));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btIDebugDraw::drawBox function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawBox function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawBox(const btVector3 &, const btVector3 &, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawBox(bbMin, bbMax, trans, color);

		return 0;
	}

	// Overload binder for btIDebugDraw::drawBox
	static int _bind_drawBox(lua_State *L) {
		if (_lg_typecheck_drawBox_overload_1(L)) return _bind_drawBox_overload_1(L);
		if (_lg_typecheck_drawBox_overload_2(L)) return _bind_drawBox_overload_2(L);

		luaL_error(L, "error in function drawBox, cannot match any of the overloads for function drawBox:\n  drawBox(const btVector3 &, const btVector3 &, const btVector3 &)\n  drawBox(const btVector3 &, const btVector3 &, const btTransform &, const btVector3 &)\n");
		return 0;
	}

	// void btIDebugDraw::drawCapsule(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)
	static int _bind_drawCapsule(lua_State *L) {
		if (!_lg_typecheck_drawCapsule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawCapsule(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawCapsule(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 4 ID = 13247377\narg 5 ID = 91544891\n");
		}

		float radius=(float)lua_tonumber(L,2);
		float halfHeight=(float)lua_tonumber(L,3);
		int upAxis=(int)lua_tointeger(L,4);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,5));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::drawCapsule function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,6));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawCapsule function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawCapsule(float, float, int, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawCapsule(radius, halfHeight, upAxis, transform, color);

		return 0;
	}

	// void btIDebugDraw::drawCylinder(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)
	static int _bind_drawCylinder(lua_State *L) {
		if (!_lg_typecheck_drawCylinder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawCylinder(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawCylinder(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 4 ID = 13247377\narg 5 ID = 91544891\n");
		}

		float radius=(float)lua_tonumber(L,2);
		float halfHeight=(float)lua_tonumber(L,3);
		int upAxis=(int)lua_tointeger(L,4);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,5));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::drawCylinder function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,6));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawCylinder function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawCylinder(float, float, int, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawCylinder(radius, halfHeight, upAxis, transform, color);

		return 0;
	}

	// void btIDebugDraw::drawCone(float radius, float height, int upAxis, const btTransform & transform, const btVector3 & color)
	static int _bind_drawCone(lua_State *L) {
		if (!_lg_typecheck_drawCone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawCone(float radius, float height, int upAxis, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawCone(float radius, float height, int upAxis, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 4 ID = 13247377\narg 5 ID = 91544891\n");
		}

		float radius=(float)lua_tonumber(L,2);
		float height=(float)lua_tonumber(L,3);
		int upAxis=(int)lua_tointeger(L,4);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,5));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::drawCone function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,6));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawCone function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawCone(float, float, int, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawCone(radius, height, upAxis, transform, color);

		return 0;
	}

	// void btIDebugDraw::drawPlane(const btVector3 & planeNormal, float planeConst, const btTransform & transform, const btVector3 & color)
	static int _bind_drawPlane(lua_State *L) {
		if (!_lg_typecheck_drawPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::drawPlane(const btVector3 & planeNormal, float planeConst, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::drawPlane(const btVector3 & planeNormal, float planeConst, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 3 ID = 13247377\narg 4 ID = 91544891\n");
		}

		const btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btIDebugDraw::drawPlane function");
		}
		const btVector3 & planeNormal=*planeNormal_ptr;
		float planeConst=(float)lua_tonumber(L,3);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,4));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::drawPlane function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::drawPlane function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::drawPlane(const btVector3 &, float, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->drawPlane(planeNormal, planeConst, transform, color);

		return 0;
	}

	// void btIDebugDraw::base_drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & fromColor, const btVector3 & toColor)
	static int _bind_base_drawLine(lua_State *L) {
		if (!_lg_typecheck_base_drawLine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & fromColor, const btVector3 & toColor) function, expected prototype:\nvoid btIDebugDraw::base_drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & fromColor, const btVector3 & toColor)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* from_ptr=(Luna< btVector3 >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btIDebugDraw::base_drawLine function");
		}
		const btVector3 & from=*from_ptr;
		const btVector3* to_ptr=(Luna< btVector3 >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btIDebugDraw::base_drawLine function");
		}
		const btVector3 & to=*to_ptr;
		const btVector3* fromColor_ptr=(Luna< btVector3 >::check(L,4));
		if( !fromColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fromColor in btIDebugDraw::base_drawLine function");
		}
		const btVector3 & fromColor=*fromColor_ptr;
		const btVector3* toColor_ptr=(Luna< btVector3 >::check(L,5));
		if( !toColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toColor in btIDebugDraw::base_drawLine function");
		}
		const btVector3 & toColor=*toColor_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawLine(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawLine(from, to, fromColor, toColor);

		return 0;
	}

	// void btIDebugDraw::base_drawSphere(float radius, const btTransform & transform, const btVector3 & color)
	static int _bind_base_drawSphere_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_drawSphere_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawSphere(float radius, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::base_drawSphere(float radius, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 2 ID = 13247377\narg 3 ID = 91544891\n");
		}

		float radius=(float)lua_tonumber(L,2);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::base_drawSphere function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawSphere function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawSphere(float, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawSphere(radius, transform, color);

		return 0;
	}

	// void btIDebugDraw::base_drawSphere(const btVector3 & p, float radius, const btVector3 & color)
	static int _bind_base_drawSphere_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_drawSphere_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawSphere(const btVector3 & p, float radius, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::base_drawSphere(const btVector3 & p, float radius, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* p_ptr=(Luna< btVector3 >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in btIDebugDraw::base_drawSphere function");
		}
		const btVector3 & p=*p_ptr;
		float radius=(float)lua_tonumber(L,3);
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawSphere function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawSphere(const btVector3 &, float, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawSphere(p, radius, color);

		return 0;
	}

	// Overload binder for btIDebugDraw::base_drawSphere
	static int _bind_base_drawSphere(lua_State *L) {
		if (_lg_typecheck_base_drawSphere_overload_1(L)) return _bind_base_drawSphere_overload_1(L);
		if (_lg_typecheck_base_drawSphere_overload_2(L)) return _bind_base_drawSphere_overload_2(L);

		luaL_error(L, "error in function base_drawSphere, cannot match any of the overloads for function base_drawSphere:\n  base_drawSphere(float, const btTransform &, const btVector3 &)\n  base_drawSphere(const btVector3 &, float, const btVector3 &)\n");
		return 0;
	}

	// void btIDebugDraw::base_drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & arg4, const btVector3 & arg5, const btVector3 & arg6, const btVector3 & color, float alpha)
	static int _bind_base_drawTriangle_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_drawTriangle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & arg4, const btVector3 & arg5, const btVector3 & arg6, const btVector3 & color, float alpha) function, expected prototype:\nvoid btIDebugDraw::base_drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & arg4, const btVector3 & arg5, const btVector3 & arg6, const btVector3 & color, float alpha)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\narg 7 ID = 91544891\n");
		}

		const btVector3* v0_ptr=(Luna< btVector3 >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & v0=*v0_ptr;
		const btVector3* v1_ptr=(Luna< btVector3 >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & v1=*v1_ptr;
		const btVector3* v2_ptr=(Luna< btVector3 >::check(L,4));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & v2=*v2_ptr;
		const btVector3* _arg4_ptr=(Luna< btVector3 >::check(L,5));
		if( !_arg4_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg4 in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & _arg4=*_arg4_ptr;
		const btVector3* _arg5_ptr=(Luna< btVector3 >::check(L,6));
		if( !_arg5_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg5 in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & _arg5=*_arg5_ptr;
		const btVector3* _arg6_ptr=(Luna< btVector3 >::check(L,7));
		if( !_arg6_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg6 in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & _arg6=*_arg6_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,8));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & color=*color_ptr;
		float alpha=(float)lua_tonumber(L,9);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawTriangle(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawTriangle(v0, v1, v2, _arg4, _arg5, _arg6, color, alpha);

		return 0;
	}

	// void btIDebugDraw::base_drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & color, float arg5)
	static int _bind_base_drawTriangle_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_drawTriangle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & color, float arg5) function, expected prototype:\nvoid btIDebugDraw::base_drawTriangle(const btVector3 & v0, const btVector3 & v1, const btVector3 & v2, const btVector3 & color, float arg5)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 91544891\n");
		}

		const btVector3* v0_ptr=(Luna< btVector3 >::check(L,2));
		if( !v0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v0 in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & v0=*v0_ptr;
		const btVector3* v1_ptr=(Luna< btVector3 >::check(L,3));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & v1=*v1_ptr;
		const btVector3* v2_ptr=(Luna< btVector3 >::check(L,4));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & v2=*v2_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawTriangle function");
		}
		const btVector3 & color=*color_ptr;
		float _arg5=(float)lua_tonumber(L,6);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawTriangle(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawTriangle(v0, v1, v2, color, _arg5);

		return 0;
	}

	// Overload binder for btIDebugDraw::base_drawTriangle
	static int _bind_base_drawTriangle(lua_State *L) {
		if (_lg_typecheck_base_drawTriangle_overload_1(L)) return _bind_base_drawTriangle_overload_1(L);
		if (_lg_typecheck_base_drawTriangle_overload_2(L)) return _bind_base_drawTriangle_overload_2(L);

		luaL_error(L, "error in function base_drawTriangle, cannot match any of the overloads for function base_drawTriangle:\n  base_drawTriangle(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, float)\n  base_drawTriangle(const btVector3 &, const btVector3 &, const btVector3 &, const btVector3 &, float)\n");
		return 0;
	}

	// void btIDebugDraw::base_drawAabb(const btVector3 & from, const btVector3 & to, const btVector3 & color)
	static int _bind_base_drawAabb(lua_State *L) {
		if (!_lg_typecheck_base_drawAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawAabb(const btVector3 & from, const btVector3 & to, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::base_drawAabb(const btVector3 & from, const btVector3 & to, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* from_ptr=(Luna< btVector3 >::check(L,2));
		if( !from_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg from in btIDebugDraw::base_drawAabb function");
		}
		const btVector3 & from=*from_ptr;
		const btVector3* to_ptr=(Luna< btVector3 >::check(L,3));
		if( !to_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg to in btIDebugDraw::base_drawAabb function");
		}
		const btVector3 & to=*to_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawAabb function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawAabb(const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawAabb(from, to, color);

		return 0;
	}

	// void btIDebugDraw::base_drawTransform(const btTransform & transform, float orthoLen)
	static int _bind_base_drawTransform(lua_State *L) {
		if (!_lg_typecheck_base_drawTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawTransform(const btTransform & transform, float orthoLen) function, expected prototype:\nvoid btIDebugDraw::base_drawTransform(const btTransform & transform, float orthoLen)\nClass arguments details:\narg 1 ID = 13247377\n");
		}

		const btTransform* transform_ptr=(Luna< btTransform >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::base_drawTransform function");
		}
		const btTransform & transform=*transform_ptr;
		float orthoLen=(float)lua_tonumber(L,3);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawTransform(const btTransform &, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawTransform(transform, orthoLen);

		return 0;
	}

	// void btIDebugDraw::base_drawArc(const btVector3 & center, const btVector3 & normal, const btVector3 & axis, float radiusA, float radiusB, float minAngle, float maxAngle, const btVector3 & color, bool drawSect, float stepDegrees = float (10.f))
	static int _bind_base_drawArc(lua_State *L) {
		if (!_lg_typecheck_base_drawArc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawArc(const btVector3 & center, const btVector3 & normal, const btVector3 & axis, float radiusA, float radiusB, float minAngle, float maxAngle, const btVector3 & color, bool drawSect, float stepDegrees = float (10.f)) function, expected prototype:\nvoid btIDebugDraw::base_drawArc(const btVector3 & center, const btVector3 & normal, const btVector3 & axis, float radiusA, float radiusB, float minAngle, float maxAngle, const btVector3 & color, bool drawSect, float stepDegrees = float (10.f))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 8 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btIDebugDraw::base_drawArc function");
		}
		const btVector3 & center=*center_ptr;
		const btVector3* normal_ptr=(Luna< btVector3 >::check(L,3));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in btIDebugDraw::base_drawArc function");
		}
		const btVector3 & normal=*normal_ptr;
		const btVector3* axis_ptr=(Luna< btVector3 >::check(L,4));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in btIDebugDraw::base_drawArc function");
		}
		const btVector3 & axis=*axis_ptr;
		float radiusA=(float)lua_tonumber(L,5);
		float radiusB=(float)lua_tonumber(L,6);
		float minAngle=(float)lua_tonumber(L,7);
		float maxAngle=(float)lua_tonumber(L,8);
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,9));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawArc function");
		}
		const btVector3 & color=*color_ptr;
		bool drawSect=(bool)(lua_toboolean(L,10)==1);
		float stepDegrees=luatop>10 ? (float)lua_tonumber(L,11) : float (10.f);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawArc(const btVector3 &, const btVector3 &, const btVector3 &, float, float, float, float, const btVector3 &, bool, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawArc(center, normal, axis, radiusA, radiusB, minAngle, maxAngle, color, drawSect, stepDegrees);

		return 0;
	}

	// void btIDebugDraw::base_drawSpherePatch(const btVector3 & center, const btVector3 & up, const btVector3 & axis, float radius, float minTh, float maxTh, float minPs, float maxPs, const btVector3 & color, float stepDegrees = float (10.f))
	static int _bind_base_drawSpherePatch(lua_State *L) {
		if (!_lg_typecheck_base_drawSpherePatch(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawSpherePatch(const btVector3 & center, const btVector3 & up, const btVector3 & axis, float radius, float minTh, float maxTh, float minPs, float maxPs, const btVector3 & color, float stepDegrees = float (10.f)) function, expected prototype:\nvoid btIDebugDraw::base_drawSpherePatch(const btVector3 & center, const btVector3 & up, const btVector3 & axis, float radius, float minTh, float maxTh, float minPs, float maxPs, const btVector3 & color, float stepDegrees = float (10.f))\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 9 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* center_ptr=(Luna< btVector3 >::check(L,2));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in btIDebugDraw::base_drawSpherePatch function");
		}
		const btVector3 & center=*center_ptr;
		const btVector3* up_ptr=(Luna< btVector3 >::check(L,3));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in btIDebugDraw::base_drawSpherePatch function");
		}
		const btVector3 & up=*up_ptr;
		const btVector3* axis_ptr=(Luna< btVector3 >::check(L,4));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in btIDebugDraw::base_drawSpherePatch function");
		}
		const btVector3 & axis=*axis_ptr;
		float radius=(float)lua_tonumber(L,5);
		float minTh=(float)lua_tonumber(L,6);
		float maxTh=(float)lua_tonumber(L,7);
		float minPs=(float)lua_tonumber(L,8);
		float maxPs=(float)lua_tonumber(L,9);
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,10));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawSpherePatch function");
		}
		const btVector3 & color=*color_ptr;
		float stepDegrees=luatop>10 ? (float)lua_tonumber(L,11) : float (10.f);

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawSpherePatch(const btVector3 &, const btVector3 &, const btVector3 &, float, float, float, float, float, const btVector3 &, float). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawSpherePatch(center, up, axis, radius, minTh, maxTh, minPs, maxPs, color, stepDegrees);

		return 0;
	}

	// void btIDebugDraw::base_drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btVector3 & color)
	static int _bind_base_drawBox_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_drawBox_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::base_drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		const btVector3* bbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !bbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbMin in btIDebugDraw::base_drawBox function");
		}
		const btVector3 & bbMin=*bbMin_ptr;
		const btVector3* bbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !bbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbMax in btIDebugDraw::base_drawBox function");
		}
		const btVector3 & bbMax=*bbMax_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,4));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawBox function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawBox(const btVector3 &, const btVector3 &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawBox(bbMin, bbMax, color);

		return 0;
	}

	// void btIDebugDraw::base_drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btTransform & trans, const btVector3 & color)
	static int _bind_base_drawBox_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_drawBox_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btTransform & trans, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::base_drawBox(const btVector3 & bbMin, const btVector3 & bbMax, const btTransform & trans, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 13247377\narg 4 ID = 91544891\n");
		}

		const btVector3* bbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !bbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbMin in btIDebugDraw::base_drawBox function");
		}
		const btVector3 & bbMin=*bbMin_ptr;
		const btVector3* bbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !bbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bbMax in btIDebugDraw::base_drawBox function");
		}
		const btVector3 & bbMax=*bbMax_ptr;
		const btTransform* trans_ptr=(Luna< btTransform >::check(L,4));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btIDebugDraw::base_drawBox function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawBox function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawBox(const btVector3 &, const btVector3 &, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawBox(bbMin, bbMax, trans, color);

		return 0;
	}

	// Overload binder for btIDebugDraw::base_drawBox
	static int _bind_base_drawBox(lua_State *L) {
		if (_lg_typecheck_base_drawBox_overload_1(L)) return _bind_base_drawBox_overload_1(L);
		if (_lg_typecheck_base_drawBox_overload_2(L)) return _bind_base_drawBox_overload_2(L);

		luaL_error(L, "error in function base_drawBox, cannot match any of the overloads for function base_drawBox:\n  base_drawBox(const btVector3 &, const btVector3 &, const btVector3 &)\n  base_drawBox(const btVector3 &, const btVector3 &, const btTransform &, const btVector3 &)\n");
		return 0;
	}

	// void btIDebugDraw::base_drawCapsule(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)
	static int _bind_base_drawCapsule(lua_State *L) {
		if (!_lg_typecheck_base_drawCapsule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawCapsule(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::base_drawCapsule(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 4 ID = 13247377\narg 5 ID = 91544891\n");
		}

		float radius=(float)lua_tonumber(L,2);
		float halfHeight=(float)lua_tonumber(L,3);
		int upAxis=(int)lua_tointeger(L,4);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,5));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::base_drawCapsule function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,6));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawCapsule function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawCapsule(float, float, int, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawCapsule(radius, halfHeight, upAxis, transform, color);

		return 0;
	}

	// void btIDebugDraw::base_drawCylinder(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)
	static int _bind_base_drawCylinder(lua_State *L) {
		if (!_lg_typecheck_base_drawCylinder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawCylinder(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::base_drawCylinder(float radius, float halfHeight, int upAxis, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 4 ID = 13247377\narg 5 ID = 91544891\n");
		}

		float radius=(float)lua_tonumber(L,2);
		float halfHeight=(float)lua_tonumber(L,3);
		int upAxis=(int)lua_tointeger(L,4);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,5));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::base_drawCylinder function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,6));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawCylinder function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawCylinder(float, float, int, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawCylinder(radius, halfHeight, upAxis, transform, color);

		return 0;
	}

	// void btIDebugDraw::base_drawCone(float radius, float height, int upAxis, const btTransform & transform, const btVector3 & color)
	static int _bind_base_drawCone(lua_State *L) {
		if (!_lg_typecheck_base_drawCone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawCone(float radius, float height, int upAxis, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::base_drawCone(float radius, float height, int upAxis, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 4 ID = 13247377\narg 5 ID = 91544891\n");
		}

		float radius=(float)lua_tonumber(L,2);
		float height=(float)lua_tonumber(L,3);
		int upAxis=(int)lua_tointeger(L,4);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,5));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::base_drawCone function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,6));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawCone function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawCone(float, float, int, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawCone(radius, height, upAxis, transform, color);

		return 0;
	}

	// void btIDebugDraw::base_drawPlane(const btVector3 & planeNormal, float planeConst, const btTransform & transform, const btVector3 & color)
	static int _bind_base_drawPlane(lua_State *L) {
		if (!_lg_typecheck_base_drawPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btIDebugDraw::base_drawPlane(const btVector3 & planeNormal, float planeConst, const btTransform & transform, const btVector3 & color) function, expected prototype:\nvoid btIDebugDraw::base_drawPlane(const btVector3 & planeNormal, float planeConst, const btTransform & transform, const btVector3 & color)\nClass arguments details:\narg 1 ID = 91544891\narg 3 ID = 13247377\narg 4 ID = 91544891\n");
		}

		const btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,2));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btIDebugDraw::base_drawPlane function");
		}
		const btVector3 & planeNormal=*planeNormal_ptr;
		float planeConst=(float)lua_tonumber(L,3);
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,4));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btIDebugDraw::base_drawPlane function");
		}
		const btTransform & transform=*transform_ptr;
		const btVector3* color_ptr=(Luna< btVector3 >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in btIDebugDraw::base_drawPlane function");
		}
		const btVector3 & color=*color_ptr;

		btIDebugDraw* self=(Luna< btIDebugDraw >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btIDebugDraw::base_drawPlane(const btVector3 &, float, const btTransform &, const btVector3 &). Got : '%s'",typeid(Luna< btIDebugDraw >::check(L,1)).name());
		}
		self->btIDebugDraw::drawPlane(planeNormal, planeConst, transform, color);

		return 0;
	}


	// Operator binds:

};

btIDebugDraw* LunaTraits< btIDebugDraw >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btIDebugDraw::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btIDebugDraw::drawLine(const btVector3 & from, const btVector3 & to, const btVector3 & color)
	// void btIDebugDraw::drawContactPoint(const btVector3 & PointOnB, const btVector3 & normalOnB, float distance, int lifeTime, const btVector3 & color)
	// void btIDebugDraw::reportErrorWarning(const char * warningString)
	// void btIDebugDraw::draw3dText(const btVector3 & location, const char * textString)
	// void btIDebugDraw::setDebugMode(int debugMode)
	// int btIDebugDraw::getDebugMode() const
}

void LunaTraits< btIDebugDraw >::_bind_dtor(btIDebugDraw* obj) {
	delete obj;
}

const char LunaTraits< btIDebugDraw >::className[] = "btIDebugDraw";
const char LunaTraits< btIDebugDraw >::fullName[] = "btIDebugDraw";
const char LunaTraits< btIDebugDraw >::moduleName[] = "bullet";
const char* LunaTraits< btIDebugDraw >::parents[] = {0};
const int LunaTraits< btIDebugDraw >::hash = 63441741;
const int LunaTraits< btIDebugDraw >::uniqueIDs[] = {63441741,0};

luna_RegType LunaTraits< btIDebugDraw >::methods[] = {
	{"drawLine", &luna_wrapper_btIDebugDraw::_bind_drawLine},
	{"drawSphere", &luna_wrapper_btIDebugDraw::_bind_drawSphere},
	{"drawTriangle", &luna_wrapper_btIDebugDraw::_bind_drawTriangle},
	{"drawContactPoint", &luna_wrapper_btIDebugDraw::_bind_drawContactPoint},
	{"reportErrorWarning", &luna_wrapper_btIDebugDraw::_bind_reportErrorWarning},
	{"draw3dText", &luna_wrapper_btIDebugDraw::_bind_draw3dText},
	{"setDebugMode", &luna_wrapper_btIDebugDraw::_bind_setDebugMode},
	{"getDebugMode", &luna_wrapper_btIDebugDraw::_bind_getDebugMode},
	{"drawAabb", &luna_wrapper_btIDebugDraw::_bind_drawAabb},
	{"drawTransform", &luna_wrapper_btIDebugDraw::_bind_drawTransform},
	{"drawArc", &luna_wrapper_btIDebugDraw::_bind_drawArc},
	{"drawSpherePatch", &luna_wrapper_btIDebugDraw::_bind_drawSpherePatch},
	{"drawBox", &luna_wrapper_btIDebugDraw::_bind_drawBox},
	{"drawCapsule", &luna_wrapper_btIDebugDraw::_bind_drawCapsule},
	{"drawCylinder", &luna_wrapper_btIDebugDraw::_bind_drawCylinder},
	{"drawCone", &luna_wrapper_btIDebugDraw::_bind_drawCone},
	{"drawPlane", &luna_wrapper_btIDebugDraw::_bind_drawPlane},
	{"base_drawLine", &luna_wrapper_btIDebugDraw::_bind_base_drawLine},
	{"base_drawSphere", &luna_wrapper_btIDebugDraw::_bind_base_drawSphere},
	{"base_drawTriangle", &luna_wrapper_btIDebugDraw::_bind_base_drawTriangle},
	{"base_drawAabb", &luna_wrapper_btIDebugDraw::_bind_base_drawAabb},
	{"base_drawTransform", &luna_wrapper_btIDebugDraw::_bind_base_drawTransform},
	{"base_drawArc", &luna_wrapper_btIDebugDraw::_bind_base_drawArc},
	{"base_drawSpherePatch", &luna_wrapper_btIDebugDraw::_bind_base_drawSpherePatch},
	{"base_drawBox", &luna_wrapper_btIDebugDraw::_bind_base_drawBox},
	{"base_drawCapsule", &luna_wrapper_btIDebugDraw::_bind_base_drawCapsule},
	{"base_drawCylinder", &luna_wrapper_btIDebugDraw::_bind_base_drawCylinder},
	{"base_drawCone", &luna_wrapper_btIDebugDraw::_bind_base_drawCone},
	{"base_drawPlane", &luna_wrapper_btIDebugDraw::_bind_base_drawPlane},
	{"dynCast", &luna_wrapper_btIDebugDraw::_bind_dynCast},
	{"__eq", &luna_wrapper_btIDebugDraw::_bind___eq},
	{"getTable", &luna_wrapper_btIDebugDraw::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btIDebugDraw >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btIDebugDraw >::enumValues[] = {
	{"DBG_NoDebug", btIDebugDraw::DBG_NoDebug},
	{"DBG_DrawWireframe", btIDebugDraw::DBG_DrawWireframe},
	{"DBG_DrawAabb", btIDebugDraw::DBG_DrawAabb},
	{"DBG_DrawFeaturesText", btIDebugDraw::DBG_DrawFeaturesText},
	{"DBG_DrawContactPoints", btIDebugDraw::DBG_DrawContactPoints},
	{"DBG_NoDeactivation", btIDebugDraw::DBG_NoDeactivation},
	{"DBG_NoHelpText", btIDebugDraw::DBG_NoHelpText},
	{"DBG_DrawText", btIDebugDraw::DBG_DrawText},
	{"DBG_ProfileTimings", btIDebugDraw::DBG_ProfileTimings},
	{"DBG_EnableSatComparison", btIDebugDraw::DBG_EnableSatComparison},
	{"DBG_DisableBulletLCP", btIDebugDraw::DBG_DisableBulletLCP},
	{"DBG_EnableCCD", btIDebugDraw::DBG_EnableCCD},
	{"DBG_DrawConstraints", btIDebugDraw::DBG_DrawConstraints},
	{"DBG_DrawConstraintLimits", btIDebugDraw::DBG_DrawConstraintLimits},
	{"DBG_FastWireframe", btIDebugDraw::DBG_FastWireframe},
	{"DBG_DrawNormals", btIDebugDraw::DBG_DrawNormals},
	{"DBG_MAX_DEBUG_DRAW_MODE", btIDebugDraw::DBG_MAX_DEBUG_DRAW_MODE},
	{0,0}
};


