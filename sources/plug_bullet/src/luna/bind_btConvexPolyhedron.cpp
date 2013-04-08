#include <plug_common.h>

#include <luna/wrappers/wrapper_btConvexPolyhedron.h>

class luna_wrapper_btConvexPolyhedron {
public:
	typedef Luna< btConvexPolyhedron > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btConvexPolyhedron,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75798226) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btConvexPolyhedron*)");
		}

		btConvexPolyhedron* rhs =(Luna< btConvexPolyhedron >::check(L,2));
		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
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

		btConvexPolyhedron* self= (btConvexPolyhedron*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btConvexPolyhedron >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75798226) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btConvexPolyhedron >::check(L,1));
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

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btConvexPolyhedron");
		
		return luna_dynamicCast(L,converters,"btConvexPolyhedron",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_testContainment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_project(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,6,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFaces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniqueEdges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalCenter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getExtents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getE(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFaces(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27702431) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniqueEdges(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89770050) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalCenter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setE(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btConvexPolyhedron::btConvexPolyhedron()
	static btConvexPolyhedron* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexPolyhedron::btConvexPolyhedron() function, expected prototype:\nbtConvexPolyhedron::btConvexPolyhedron()\nClass arguments details:\n");
		}


		return new btConvexPolyhedron();
	}

	// btConvexPolyhedron::btConvexPolyhedron(lua_Table * data)
	static btConvexPolyhedron* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btConvexPolyhedron::btConvexPolyhedron(lua_Table * data) function, expected prototype:\nbtConvexPolyhedron::btConvexPolyhedron(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btConvexPolyhedron(L,NULL);
	}

	// Overload binder for btConvexPolyhedron::btConvexPolyhedron
	static btConvexPolyhedron* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btConvexPolyhedron, cannot match any of the overloads for function btConvexPolyhedron:\n  btConvexPolyhedron()\n  btConvexPolyhedron(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btConvexPolyhedron::initialize()
	static int _bind_initialize(lua_State *L) {
		if (!_lg_typecheck_initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::initialize() function, expected prototype:\nvoid btConvexPolyhedron::initialize()\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::initialize(). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->initialize();

		return 0;
	}

	// bool btConvexPolyhedron::testContainment() const
	static int _bind_testContainment(lua_State *L) {
		if (!_lg_typecheck_testContainment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btConvexPolyhedron::testContainment() const function, expected prototype:\nbool btConvexPolyhedron::testContainment() const\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btConvexPolyhedron::testContainment() const. Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		bool lret = self->testContainment();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btConvexPolyhedron::project(const btTransform & trans, const btVector3 & dir, float & minProj, float & maxProj, btVector3 & witnesPtMin, btVector3 & witnesPtMax) const
	static int _bind_project(lua_State *L) {
		if (!_lg_typecheck_project(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::project(const btTransform & trans, const btVector3 & dir, float & minProj, float & maxProj, btVector3 & witnesPtMin, btVector3 & witnesPtMax) const function, expected prototype:\nvoid btConvexPolyhedron::project(const btTransform & trans, const btVector3 & dir, float & minProj, float & maxProj, btVector3 & witnesPtMin, btVector3 & witnesPtMax) const\nClass arguments details:\narg 1 ID = 13247377\narg 2 ID = 91544891\narg 5 ID = 91544891\narg 6 ID = 91544891\n");
		}

		const btTransform* trans_ptr=(Luna< btTransform >::check(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in btConvexPolyhedron::project function");
		}
		const btTransform & trans=*trans_ptr;
		const btVector3* dir_ptr=(Luna< btVector3 >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in btConvexPolyhedron::project function");
		}
		const btVector3 & dir=*dir_ptr;
		float minProj=(float)lua_tonumber(L,4);
		float maxProj=(float)lua_tonumber(L,5);
		btVector3* witnesPtMin_ptr=(Luna< btVector3 >::check(L,6));
		if( !witnesPtMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg witnesPtMin in btConvexPolyhedron::project function");
		}
		btVector3 & witnesPtMin=*witnesPtMin_ptr;
		btVector3* witnesPtMax_ptr=(Luna< btVector3 >::check(L,7));
		if( !witnesPtMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg witnesPtMax in btConvexPolyhedron::project function");
		}
		btVector3 & witnesPtMax=*witnesPtMax_ptr;

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::project(const btTransform &, const btVector3 &, float &, float &, btVector3 &, btVector3 &) const. Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->project(trans, dir, minProj, maxProj, witnesPtMin, witnesPtMax);

		return 0;
	}

	// btAlignedObjectArray< btVector3 > btConvexPolyhedron::m_vertices()
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btVector3 > btConvexPolyhedron::m_vertices() function, expected prototype:\nbtAlignedObjectArray< btVector3 > btConvexPolyhedron::m_vertices()\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btVector3 > btConvexPolyhedron::m_vertices(). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		const btAlignedObjectArray< btVector3 >* lret = &self->m_vertices;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btVector3 > >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< btFace > btConvexPolyhedron::m_faces()
	static int _bind_getFaces(lua_State *L) {
		if (!_lg_typecheck_getFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btFace > btConvexPolyhedron::m_faces() function, expected prototype:\nbtAlignedObjectArray< btFace > btConvexPolyhedron::m_faces()\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btFace > btConvexPolyhedron::m_faces(). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		const btAlignedObjectArray< btFace >* lret = &self->m_faces;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btFace > >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< btVector3 > btConvexPolyhedron::m_uniqueEdges()
	static int _bind_getUniqueEdges(lua_State *L) {
		if (!_lg_typecheck_getUniqueEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btVector3 > btConvexPolyhedron::m_uniqueEdges() function, expected prototype:\nbtAlignedObjectArray< btVector3 > btConvexPolyhedron::m_uniqueEdges()\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btVector3 > btConvexPolyhedron::m_uniqueEdges(). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		const btAlignedObjectArray< btVector3 >* lret = &self->m_uniqueEdges;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btVector3 > >::push(L,lret,false);

		return 1;
	}

	// btVector3 btConvexPolyhedron::m_localCenter()
	static int _bind_getLocalCenter(lua_State *L) {
		if (!_lg_typecheck_getLocalCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPolyhedron::m_localCenter() function, expected prototype:\nbtVector3 btConvexPolyhedron::m_localCenter()\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexPolyhedron::m_localCenter(). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_localCenter;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btConvexPolyhedron::m_extents()
	static int _bind_getExtents(lua_State *L) {
		if (!_lg_typecheck_getExtents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPolyhedron::m_extents() function, expected prototype:\nbtVector3 btConvexPolyhedron::m_extents()\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexPolyhedron::m_extents(). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		const btVector3* lret = &self->m_extents;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// float btConvexPolyhedron::m_radius()
	static int _bind_getRadius(lua_State *L) {
		if (!_lg_typecheck_getRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btConvexPolyhedron::m_radius() function, expected prototype:\nfloat btConvexPolyhedron::m_radius()\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btConvexPolyhedron::m_radius(). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		float lret = self->m_radius;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 btConvexPolyhedron::mC()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPolyhedron::mC() function, expected prototype:\nbtVector3 btConvexPolyhedron::mC()\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexPolyhedron::mC(). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		const btVector3* lret = &self->mC;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 btConvexPolyhedron::mE()
	static int _bind_getE(lua_State *L) {
		if (!_lg_typecheck_getE(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btVector3 btConvexPolyhedron::mE() function, expected prototype:\nbtVector3 btConvexPolyhedron::mE()\nClass arguments details:\n");
		}


		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btVector3 btConvexPolyhedron::mE(). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		const btVector3* lret = &self->mE;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btConvexPolyhedron::m_vertices(btAlignedObjectArray< btVector3 > value)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::m_vertices(btAlignedObjectArray< btVector3 > value) function, expected prototype:\nvoid btConvexPolyhedron::m_vertices(btAlignedObjectArray< btVector3 > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btVector3 >* value_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexPolyhedron::m_vertices function");
		}
		btAlignedObjectArray< btVector3 > value=*value_ptr;

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::m_vertices(btAlignedObjectArray< btVector3 >). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->m_vertices = value;

		return 0;
	}

	// void btConvexPolyhedron::m_faces(btAlignedObjectArray< btFace > value)
	static int _bind_setFaces(lua_State *L) {
		if (!_lg_typecheck_setFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::m_faces(btAlignedObjectArray< btFace > value) function, expected prototype:\nvoid btConvexPolyhedron::m_faces(btAlignedObjectArray< btFace > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btFace >* value_ptr=(Luna< btAlignedObjectArray< btFace > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexPolyhedron::m_faces function");
		}
		btAlignedObjectArray< btFace > value=*value_ptr;

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::m_faces(btAlignedObjectArray< btFace >). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->m_faces = value;

		return 0;
	}

	// void btConvexPolyhedron::m_uniqueEdges(btAlignedObjectArray< btVector3 > value)
	static int _bind_setUniqueEdges(lua_State *L) {
		if (!_lg_typecheck_setUniqueEdges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::m_uniqueEdges(btAlignedObjectArray< btVector3 > value) function, expected prototype:\nvoid btConvexPolyhedron::m_uniqueEdges(btAlignedObjectArray< btVector3 > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btVector3 >* value_ptr=(Luna< btAlignedObjectArray< btVector3 > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexPolyhedron::m_uniqueEdges function");
		}
		btAlignedObjectArray< btVector3 > value=*value_ptr;

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::m_uniqueEdges(btAlignedObjectArray< btVector3 >). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->m_uniqueEdges = value;

		return 0;
	}

	// void btConvexPolyhedron::m_localCenter(btVector3 value)
	static int _bind_setLocalCenter(lua_State *L) {
		if (!_lg_typecheck_setLocalCenter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::m_localCenter(btVector3 value) function, expected prototype:\nvoid btConvexPolyhedron::m_localCenter(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexPolyhedron::m_localCenter function");
		}
		btVector3 value=*value_ptr;

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::m_localCenter(btVector3). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->m_localCenter = value;

		return 0;
	}

	// void btConvexPolyhedron::m_extents(btVector3 value)
	static int _bind_setExtents(lua_State *L) {
		if (!_lg_typecheck_setExtents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::m_extents(btVector3 value) function, expected prototype:\nvoid btConvexPolyhedron::m_extents(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexPolyhedron::m_extents function");
		}
		btVector3 value=*value_ptr;

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::m_extents(btVector3). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->m_extents = value;

		return 0;
	}

	// void btConvexPolyhedron::m_radius(float value)
	static int _bind_setRadius(lua_State *L) {
		if (!_lg_typecheck_setRadius(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::m_radius(float value) function, expected prototype:\nvoid btConvexPolyhedron::m_radius(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::m_radius(float). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->m_radius = value;

		return 0;
	}

	// void btConvexPolyhedron::mC(btVector3 value)
	static int _bind_setC(lua_State *L) {
		if (!_lg_typecheck_setC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::mC(btVector3 value) function, expected prototype:\nvoid btConvexPolyhedron::mC(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexPolyhedron::mC function");
		}
		btVector3 value=*value_ptr;

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::mC(btVector3). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->mC = value;

		return 0;
	}

	// void btConvexPolyhedron::mE(btVector3 value)
	static int _bind_setE(lua_State *L) {
		if (!_lg_typecheck_setE(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btConvexPolyhedron::mE(btVector3 value) function, expected prototype:\nvoid btConvexPolyhedron::mE(btVector3 value)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		btVector3* value_ptr=(Luna< btVector3 >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btConvexPolyhedron::mE function");
		}
		btVector3 value=*value_ptr;

		btConvexPolyhedron* self=(Luna< btConvexPolyhedron >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btConvexPolyhedron::mE(btVector3). Got : '%s'",typeid(Luna< btConvexPolyhedron >::check(L,1)).name());
		}
		self->mE = value;

		return 0;
	}


	// Operator binds:

};

btConvexPolyhedron* LunaTraits< btConvexPolyhedron >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btConvexPolyhedron::_bind_ctor(L);
}

void LunaTraits< btConvexPolyhedron >::_bind_dtor(btConvexPolyhedron* obj) {
	delete obj;
}

const char LunaTraits< btConvexPolyhedron >::className[] = "btConvexPolyhedron";
const char LunaTraits< btConvexPolyhedron >::fullName[] = "btConvexPolyhedron";
const char LunaTraits< btConvexPolyhedron >::moduleName[] = "bullet";
const char* LunaTraits< btConvexPolyhedron >::parents[] = {0};
const int LunaTraits< btConvexPolyhedron >::hash = 75798226;
const int LunaTraits< btConvexPolyhedron >::uniqueIDs[] = {75798226,0};

luna_RegType LunaTraits< btConvexPolyhedron >::methods[] = {
	{"initialize", &luna_wrapper_btConvexPolyhedron::_bind_initialize},
	{"testContainment", &luna_wrapper_btConvexPolyhedron::_bind_testContainment},
	{"project", &luna_wrapper_btConvexPolyhedron::_bind_project},
	{"getVertices", &luna_wrapper_btConvexPolyhedron::_bind_getVertices},
	{"getFaces", &luna_wrapper_btConvexPolyhedron::_bind_getFaces},
	{"getUniqueEdges", &luna_wrapper_btConvexPolyhedron::_bind_getUniqueEdges},
	{"getLocalCenter", &luna_wrapper_btConvexPolyhedron::_bind_getLocalCenter},
	{"getExtents", &luna_wrapper_btConvexPolyhedron::_bind_getExtents},
	{"getRadius", &luna_wrapper_btConvexPolyhedron::_bind_getRadius},
	{"getC", &luna_wrapper_btConvexPolyhedron::_bind_getC},
	{"getE", &luna_wrapper_btConvexPolyhedron::_bind_getE},
	{"setVertices", &luna_wrapper_btConvexPolyhedron::_bind_setVertices},
	{"setFaces", &luna_wrapper_btConvexPolyhedron::_bind_setFaces},
	{"setUniqueEdges", &luna_wrapper_btConvexPolyhedron::_bind_setUniqueEdges},
	{"setLocalCenter", &luna_wrapper_btConvexPolyhedron::_bind_setLocalCenter},
	{"setExtents", &luna_wrapper_btConvexPolyhedron::_bind_setExtents},
	{"setRadius", &luna_wrapper_btConvexPolyhedron::_bind_setRadius},
	{"setC", &luna_wrapper_btConvexPolyhedron::_bind_setC},
	{"setE", &luna_wrapper_btConvexPolyhedron::_bind_setE},
	{"dynCast", &luna_wrapper_btConvexPolyhedron::_bind_dynCast},
	{"__eq", &luna_wrapper_btConvexPolyhedron::_bind___eq},
	{"fromVoid", &luna_wrapper_btConvexPolyhedron::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btConvexPolyhedron::_bind_asVoid},
	{"getTable", &luna_wrapper_btConvexPolyhedron::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btConvexPolyhedron >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btConvexPolyhedron >::enumValues[] = {
	{0,0}
};


