#include <plug_common.h>

class luna_wrapper_btPolyhedralContactClipping {
public:
	typedef Luna< btPolyhedralContactClipping > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48512951) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPolyhedralContactClipping*)");
		}

		btPolyhedralContactClipping* rhs =(Luna< btPolyhedralContactClipping >::check(L,2));
		btPolyhedralContactClipping* self=(Luna< btPolyhedralContactClipping >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		btPolyhedralContactClipping* self= (btPolyhedralContactClipping*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btPolyhedralContactClipping >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48512951) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btPolyhedralContactClipping >::check(L,1));
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

		btPolyhedralContactClipping* self=(Luna< btPolyhedralContactClipping >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPolyhedralContactClipping");
		
		return luna_dynamicCast(L,converters,"btPolyhedralContactClipping",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_clipHullAgainstHull(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,75798226) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,75798226) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,13247377) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,8,25324514) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clipFaceAgainstHull(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,75798226) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,89770050) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,7,25324514) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findSeparatingAxis(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75798226) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,75798226) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,25324514) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clipFace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89770050) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static void btPolyhedralContactClipping::clipHullAgainstHull(const btVector3 & separatingNormal, const btConvexPolyhedron & hullA, const btConvexPolyhedron & hullB, const btTransform & transA, const btTransform & transB, const float minDist, float maxDist, btDiscreteCollisionDetectorInterface::Result & resultOut)
	static int _bind_clipHullAgainstHull(lua_State *L) {
		if (!_lg_typecheck_clipHullAgainstHull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btPolyhedralContactClipping::clipHullAgainstHull(const btVector3 & separatingNormal, const btConvexPolyhedron & hullA, const btConvexPolyhedron & hullB, const btTransform & transA, const btTransform & transB, const float minDist, float maxDist, btDiscreteCollisionDetectorInterface::Result & resultOut) function, expected prototype:\nstatic void btPolyhedralContactClipping::clipHullAgainstHull(const btVector3 & separatingNormal, const btConvexPolyhedron & hullA, const btConvexPolyhedron & hullB, const btTransform & transA, const btTransform & transB, const float minDist, float maxDist, btDiscreteCollisionDetectorInterface::Result & resultOut)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 75798226\narg 3 ID = 75798226\narg 4 ID = 13247377\narg 5 ID = 13247377\narg 8 ID = 25324514\n");
		}

		const btVector3* separatingNormal_ptr=(Luna< btVector3 >::check(L,1));
		if( !separatingNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg separatingNormal in btPolyhedralContactClipping::clipHullAgainstHull function");
		}
		const btVector3 & separatingNormal=*separatingNormal_ptr;
		const btConvexPolyhedron* hullA_ptr=(Luna< btConvexPolyhedron >::check(L,2));
		if( !hullA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hullA in btPolyhedralContactClipping::clipHullAgainstHull function");
		}
		const btConvexPolyhedron & hullA=*hullA_ptr;
		const btConvexPolyhedron* hullB_ptr=(Luna< btConvexPolyhedron >::check(L,3));
		if( !hullB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hullB in btPolyhedralContactClipping::clipHullAgainstHull function");
		}
		const btConvexPolyhedron & hullB=*hullB_ptr;
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,4));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btPolyhedralContactClipping::clipHullAgainstHull function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,5));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btPolyhedralContactClipping::clipHullAgainstHull function");
		}
		const btTransform & transB=*transB_ptr;
		const float minDist=(const float)lua_tonumber(L,6);
		float maxDist=(float)lua_tonumber(L,7);
		btDiscreteCollisionDetectorInterface::Result* resultOut_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,8));
		if( !resultOut_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultOut in btPolyhedralContactClipping::clipHullAgainstHull function");
		}
		btDiscreteCollisionDetectorInterface::Result & resultOut=*resultOut_ptr;

		btPolyhedralContactClipping::clipHullAgainstHull(separatingNormal, hullA, hullB, transA, transB, minDist, maxDist, resultOut);

		return 0;
	}

	// static void btPolyhedralContactClipping::clipFaceAgainstHull(const btVector3 & separatingNormal, const btConvexPolyhedron & hullA, const btTransform & transA, btVertexArray & worldVertsB1, const float minDist, float maxDist, btDiscreteCollisionDetectorInterface::Result & resultOut)
	static int _bind_clipFaceAgainstHull(lua_State *L) {
		if (!_lg_typecheck_clipFaceAgainstHull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btPolyhedralContactClipping::clipFaceAgainstHull(const btVector3 & separatingNormal, const btConvexPolyhedron & hullA, const btTransform & transA, btVertexArray & worldVertsB1, const float minDist, float maxDist, btDiscreteCollisionDetectorInterface::Result & resultOut) function, expected prototype:\nstatic void btPolyhedralContactClipping::clipFaceAgainstHull(const btVector3 & separatingNormal, const btConvexPolyhedron & hullA, const btTransform & transA, btVertexArray & worldVertsB1, const float minDist, float maxDist, btDiscreteCollisionDetectorInterface::Result & resultOut)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 75798226\narg 3 ID = 13247377\narg 4 ID = 99189047\narg 7 ID = 25324514\n");
		}

		const btVector3* separatingNormal_ptr=(Luna< btVector3 >::check(L,1));
		if( !separatingNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg separatingNormal in btPolyhedralContactClipping::clipFaceAgainstHull function");
		}
		const btVector3 & separatingNormal=*separatingNormal_ptr;
		const btConvexPolyhedron* hullA_ptr=(Luna< btConvexPolyhedron >::check(L,2));
		if( !hullA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hullA in btPolyhedralContactClipping::clipFaceAgainstHull function");
		}
		const btConvexPolyhedron & hullA=*hullA_ptr;
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,3));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btPolyhedralContactClipping::clipFaceAgainstHull function");
		}
		const btTransform & transA=*transA_ptr;
		btVertexArray* worldVertsB1_ptr=(Luna< btAlignedObjectArray< btVector3 > >::checkSubType< btVertexArray >(L,4));
		if( !worldVertsB1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldVertsB1 in btPolyhedralContactClipping::clipFaceAgainstHull function");
		}
		btVertexArray & worldVertsB1=*worldVertsB1_ptr;
		const float minDist=(const float)lua_tonumber(L,5);
		float maxDist=(float)lua_tonumber(L,6);
		btDiscreteCollisionDetectorInterface::Result* resultOut_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,7));
		if( !resultOut_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultOut in btPolyhedralContactClipping::clipFaceAgainstHull function");
		}
		btDiscreteCollisionDetectorInterface::Result & resultOut=*resultOut_ptr;

		btPolyhedralContactClipping::clipFaceAgainstHull(separatingNormal, hullA, transA, worldVertsB1, minDist, maxDist, resultOut);

		return 0;
	}

	// static bool btPolyhedralContactClipping::findSeparatingAxis(const btConvexPolyhedron & hullA, const btConvexPolyhedron & hullB, const btTransform & transA, const btTransform & transB, btVector3 & sep, btDiscreteCollisionDetectorInterface::Result & resultOut)
	static int _bind_findSeparatingAxis(lua_State *L) {
		if (!_lg_typecheck_findSeparatingAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool btPolyhedralContactClipping::findSeparatingAxis(const btConvexPolyhedron & hullA, const btConvexPolyhedron & hullB, const btTransform & transA, const btTransform & transB, btVector3 & sep, btDiscreteCollisionDetectorInterface::Result & resultOut) function, expected prototype:\nstatic bool btPolyhedralContactClipping::findSeparatingAxis(const btConvexPolyhedron & hullA, const btConvexPolyhedron & hullB, const btTransform & transA, const btTransform & transB, btVector3 & sep, btDiscreteCollisionDetectorInterface::Result & resultOut)\nClass arguments details:\narg 1 ID = 75798226\narg 2 ID = 75798226\narg 3 ID = 13247377\narg 4 ID = 13247377\narg 5 ID = 91544891\narg 6 ID = 25324514\n");
		}

		const btConvexPolyhedron* hullA_ptr=(Luna< btConvexPolyhedron >::check(L,1));
		if( !hullA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hullA in btPolyhedralContactClipping::findSeparatingAxis function");
		}
		const btConvexPolyhedron & hullA=*hullA_ptr;
		const btConvexPolyhedron* hullB_ptr=(Luna< btConvexPolyhedron >::check(L,2));
		if( !hullB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hullB in btPolyhedralContactClipping::findSeparatingAxis function");
		}
		const btConvexPolyhedron & hullB=*hullB_ptr;
		const btTransform* transA_ptr=(Luna< btTransform >::check(L,3));
		if( !transA_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transA in btPolyhedralContactClipping::findSeparatingAxis function");
		}
		const btTransform & transA=*transA_ptr;
		const btTransform* transB_ptr=(Luna< btTransform >::check(L,4));
		if( !transB_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transB in btPolyhedralContactClipping::findSeparatingAxis function");
		}
		const btTransform & transB=*transB_ptr;
		btVector3* sep_ptr=(Luna< btVector3 >::check(L,5));
		if( !sep_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sep in btPolyhedralContactClipping::findSeparatingAxis function");
		}
		btVector3 & sep=*sep_ptr;
		btDiscreteCollisionDetectorInterface::Result* resultOut_ptr=(Luna< btDiscreteCollisionDetectorInterface::Result >::check(L,6));
		if( !resultOut_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg resultOut in btPolyhedralContactClipping::findSeparatingAxis function");
		}
		btDiscreteCollisionDetectorInterface::Result & resultOut=*resultOut_ptr;

		bool lret = btPolyhedralContactClipping::findSeparatingAxis(hullA, hullB, transA, transB, sep, resultOut);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void btPolyhedralContactClipping::clipFace(const btVertexArray & pVtxIn, btVertexArray & ppVtxOut, const btVector3 & planeNormalWS, float planeEqWS)
	static int _bind_clipFace(lua_State *L) {
		if (!_lg_typecheck_clipFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btPolyhedralContactClipping::clipFace(const btVertexArray & pVtxIn, btVertexArray & ppVtxOut, const btVector3 & planeNormalWS, float planeEqWS) function, expected prototype:\nstatic void btPolyhedralContactClipping::clipFace(const btVertexArray & pVtxIn, btVertexArray & ppVtxOut, const btVector3 & planeNormalWS, float planeEqWS)\nClass arguments details:\narg 1 ID = 99189047\narg 2 ID = 99189047\narg 3 ID = 91544891\n");
		}

		const btVertexArray* pVtxIn_ptr=(Luna< btAlignedObjectArray< btVector3 > >::checkSubType< btVertexArray >(L,1));
		if( !pVtxIn_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pVtxIn in btPolyhedralContactClipping::clipFace function");
		}
		const btVertexArray & pVtxIn=*pVtxIn_ptr;
		btVertexArray* ppVtxOut_ptr=(Luna< btAlignedObjectArray< btVector3 > >::checkSubType< btVertexArray >(L,2));
		if( !ppVtxOut_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ppVtxOut in btPolyhedralContactClipping::clipFace function");
		}
		btVertexArray & ppVtxOut=*ppVtxOut_ptr;
		const btVector3* planeNormalWS_ptr=(Luna< btVector3 >::check(L,3));
		if( !planeNormalWS_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg planeNormalWS in btPolyhedralContactClipping::clipFace function");
		}
		const btVector3 & planeNormalWS=*planeNormalWS_ptr;
		float planeEqWS=(float)lua_tonumber(L,4);

		btPolyhedralContactClipping::clipFace(pVtxIn, ppVtxOut, planeNormalWS, planeEqWS);

		return 0;
	}


	// Operator binds:

};

btPolyhedralContactClipping* LunaTraits< btPolyhedralContactClipping >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btPolyhedralContactClipping >::_bind_dtor(btPolyhedralContactClipping* obj) {
	delete obj;
}

const char LunaTraits< btPolyhedralContactClipping >::className[] = "btPolyhedralContactClipping";
const char LunaTraits< btPolyhedralContactClipping >::fullName[] = "btPolyhedralContactClipping";
const char LunaTraits< btPolyhedralContactClipping >::moduleName[] = "bullet";
const char* LunaTraits< btPolyhedralContactClipping >::parents[] = {0};
const int LunaTraits< btPolyhedralContactClipping >::hash = 48512951;
const int LunaTraits< btPolyhedralContactClipping >::uniqueIDs[] = {48512951,0};

luna_RegType LunaTraits< btPolyhedralContactClipping >::methods[] = {
	{"clipHullAgainstHull", &luna_wrapper_btPolyhedralContactClipping::_bind_clipHullAgainstHull},
	{"clipFaceAgainstHull", &luna_wrapper_btPolyhedralContactClipping::_bind_clipFaceAgainstHull},
	{"findSeparatingAxis", &luna_wrapper_btPolyhedralContactClipping::_bind_findSeparatingAxis},
	{"clipFace", &luna_wrapper_btPolyhedralContactClipping::_bind_clipFace},
	{"dynCast", &luna_wrapper_btPolyhedralContactClipping::_bind_dynCast},
	{"__eq", &luna_wrapper_btPolyhedralContactClipping::_bind___eq},
	{"fromVoid", &luna_wrapper_btPolyhedralContactClipping::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btPolyhedralContactClipping::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btPolyhedralContactClipping >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPolyhedralContactClipping >::enumValues[] = {
	{0,0}
};


