#include <plug_common.h>

class luna_wrapper_btGeometryUtil {
public:
	typedef Luna< btGeometryUtil > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18233367) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGeometryUtil*)");
		}

		btGeometryUtil* rhs =(Luna< btGeometryUtil >::check(L,2));
		btGeometryUtil* self=(Luna< btGeometryUtil >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btGeometryUtil* self= (btGeometryUtil*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGeometryUtil >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18233367) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btGeometryUtil >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		btGeometryUtil* self=(Luna< btGeometryUtil >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGeometryUtil");
		
		return luna_dynamicCast(L,converters,"btGeometryUtil",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPlaneEquationsFromVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89770050) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVerticesFromPlaneEquations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89770050) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isPointInsidePlanes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89770050) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_areVerticesBehindPlane(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static void btGeometryUtil::getPlaneEquationsFromVertices(btAlignedObjectArray< btVector3 > & vertices, btAlignedObjectArray< btVector3 > & planeEquationsOut)
	static int _bind_getPlaneEquationsFromVertices(lua_State *L) {
		if (!_lg_typecheck_getPlaneEquationsFromVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btGeometryUtil::getPlaneEquationsFromVertices(btAlignedObjectArray< btVector3 > & vertices, btAlignedObjectArray< btVector3 > & planeEquationsOut) function, expected prototype:\nstatic void btGeometryUtil::getPlaneEquationsFromVertices(btAlignedObjectArray< btVector3 > & vertices, btAlignedObjectArray< btVector3 > & planeEquationsOut)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n");
		}

		btAlignedObjectArray< btVector3 >* vertices_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,1));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in btGeometryUtil::getPlaneEquationsFromVertices function");
		}
		btAlignedObjectArray< btVector3 > & vertices=*vertices_ptr;
		btAlignedObjectArray< btVector3 >* planeEquationsOut_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !planeEquationsOut_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeEquationsOut in btGeometryUtil::getPlaneEquationsFromVertices function");
		}
		btAlignedObjectArray< btVector3 > & planeEquationsOut=*planeEquationsOut_ptr;

		btGeometryUtil::getPlaneEquationsFromVertices(vertices, planeEquationsOut);

		return 0;
	}

	// static void btGeometryUtil::getVerticesFromPlaneEquations(const btAlignedObjectArray< btVector3 > & planeEquations, btAlignedObjectArray< btVector3 > & verticesOut)
	static int _bind_getVerticesFromPlaneEquations(lua_State *L) {
		if (!_lg_typecheck_getVerticesFromPlaneEquations(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btGeometryUtil::getVerticesFromPlaneEquations(const btAlignedObjectArray< btVector3 > & planeEquations, btAlignedObjectArray< btVector3 > & verticesOut) function, expected prototype:\nstatic void btGeometryUtil::getVerticesFromPlaneEquations(const btAlignedObjectArray< btVector3 > & planeEquations, btAlignedObjectArray< btVector3 > & verticesOut)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n");
		}

		const btAlignedObjectArray< btVector3 >* planeEquations_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,1));
		if( !planeEquations_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeEquations in btGeometryUtil::getVerticesFromPlaneEquations function");
		}
		const btAlignedObjectArray< btVector3 > & planeEquations=*planeEquations_ptr;
		btAlignedObjectArray< btVector3 >* verticesOut_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !verticesOut_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg verticesOut in btGeometryUtil::getVerticesFromPlaneEquations function");
		}
		btAlignedObjectArray< btVector3 > & verticesOut=*verticesOut_ptr;

		btGeometryUtil::getVerticesFromPlaneEquations(planeEquations, verticesOut);

		return 0;
	}

	// static bool btGeometryUtil::isPointInsidePlanes(const btAlignedObjectArray< btVector3 > & planeEquations, const btVector3 & point, float margin)
	static int _bind_isPointInsidePlanes(lua_State *L) {
		if (!_lg_typecheck_isPointInsidePlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btGeometryUtil::isPointInsidePlanes(const btAlignedObjectArray< btVector3 > & planeEquations, const btVector3 & point, float margin) function, expected prototype:\nstatic bool btGeometryUtil::isPointInsidePlanes(const btAlignedObjectArray< btVector3 > & planeEquations, const btVector3 & point, float margin)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 91544891\n");
		}

		const btAlignedObjectArray< btVector3 >* planeEquations_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,1));
		if( !planeEquations_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeEquations in btGeometryUtil::isPointInsidePlanes function");
		}
		const btAlignedObjectArray< btVector3 > & planeEquations=*planeEquations_ptr;
		const btVector3* point_ptr=(Luna< btVector3 >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in btGeometryUtil::isPointInsidePlanes function");
		}
		const btVector3 & point=*point_ptr;
		float margin=(float)lua_tonumber(L,3);

		bool lret = btGeometryUtil::isPointInsidePlanes(planeEquations, point, margin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool btGeometryUtil::areVerticesBehindPlane(const btVector3 & planeNormal, const btAlignedObjectArray< btVector3 > & vertices, float margin)
	static int _bind_areVerticesBehindPlane(lua_State *L) {
		if (!_lg_typecheck_areVerticesBehindPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btGeometryUtil::areVerticesBehindPlane(const btVector3 & planeNormal, const btAlignedObjectArray< btVector3 > & vertices, float margin) function, expected prototype:\nstatic bool btGeometryUtil::areVerticesBehindPlane(const btVector3 & planeNormal, const btAlignedObjectArray< btVector3 > & vertices, float margin)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = [unknown]\n");
		}

		const btVector3* planeNormal_ptr=(Luna< btVector3 >::check(L,1));
		if( !planeNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormal in btGeometryUtil::areVerticesBehindPlane function");
		}
		const btVector3 & planeNormal=*planeNormal_ptr;
		const btAlignedObjectArray< btVector3 >* vertices_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in btGeometryUtil::areVerticesBehindPlane function");
		}
		const btAlignedObjectArray< btVector3 > & vertices=*vertices_ptr;
		float margin=(float)lua_tonumber(L,3);

		bool lret = btGeometryUtil::areVerticesBehindPlane(planeNormal, vertices, margin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btGeometryUtil* LunaTraits< btGeometryUtil >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btGeometryUtil >::_bind_dtor(btGeometryUtil* obj) {
	delete obj;
}

const char LunaTraits< btGeometryUtil >::className[] = "btGeometryUtil";
const char LunaTraits< btGeometryUtil >::fullName[] = "btGeometryUtil";
const char LunaTraits< btGeometryUtil >::moduleName[] = "bullet";
const char* LunaTraits< btGeometryUtil >::parents[] = {0};
const int LunaTraits< btGeometryUtil >::hash = 18233367;
const int LunaTraits< btGeometryUtil >::uniqueIDs[] = {18233367,0};

luna_RegType LunaTraits< btGeometryUtil >::methods[] = {
	{"getPlaneEquationsFromVertices", &luna_wrapper_btGeometryUtil::_bind_getPlaneEquationsFromVertices},
	{"getVerticesFromPlaneEquations", &luna_wrapper_btGeometryUtil::_bind_getVerticesFromPlaneEquations},
	{"isPointInsidePlanes", &luna_wrapper_btGeometryUtil::_bind_isPointInsidePlanes},
	{"areVerticesBehindPlane", &luna_wrapper_btGeometryUtil::_bind_areVerticesBehindPlane},
	{"dynCast", &luna_wrapper_btGeometryUtil::_bind_dynCast},
	{"__eq", &luna_wrapper_btGeometryUtil::_bind___eq},
	{"fromVoid", &luna_wrapper_btGeometryUtil::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGeometryUtil::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btGeometryUtil >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGeometryUtil >::enumValues[] = {
	{0,0}
};


