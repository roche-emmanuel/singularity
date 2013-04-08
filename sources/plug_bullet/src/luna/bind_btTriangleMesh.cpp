#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleMesh.h>

class luna_wrapper_btTriangleMesh {
public:
	typedef Luna< btTriangleMesh > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btStridingMeshInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56402633) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btStridingMeshInterface*)");
		}

		btStridingMeshInterface* rhs =(Luna< btStridingMeshInterface >::check(L,2));
		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
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

		btTriangleMesh* self= (btTriangleMesh*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleMesh >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56402633) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btStridingMeshInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btTriangleMesh* ptr= dynamic_cast< btTriangleMesh* >(Luna< btStridingMeshInterface >::check(L,1));
		btTriangleMesh* ptr= luna_caster< btStridingMeshInterface, btTriangleMesh >::cast(Luna< btStridingMeshInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTriangleMesh >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getUse32bitIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUse4componentVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addTriangle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_preallocateVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_preallocateIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findOrAddVertex(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWeldingThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWeldingThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InternalProcessAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,59503577)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_unLockVertexBase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_unLockReadOnlyVertexBase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getNumSubParts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_hasPremadeAabb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setPremadeAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getPremadeAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_preallocateVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_preallocateIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTriangleMesh::btTriangleMesh(bool use32bitIndices = true, bool use4componentVertices = true)
	static btTriangleMesh* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleMesh::btTriangleMesh(bool use32bitIndices = true, bool use4componentVertices = true) function, expected prototype:\nbtTriangleMesh::btTriangleMesh(bool use32bitIndices = true, bool use4componentVertices = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool use32bitIndices=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;
		bool use4componentVertices=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new btTriangleMesh(use32bitIndices, use4componentVertices);
	}

	// btTriangleMesh::btTriangleMesh(lua_Table * data, bool use32bitIndices = true, bool use4componentVertices = true)
	static btTriangleMesh* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleMesh::btTriangleMesh(lua_Table * data, bool use32bitIndices = true, bool use4componentVertices = true) function, expected prototype:\nbtTriangleMesh::btTriangleMesh(lua_Table * data, bool use32bitIndices = true, bool use4componentVertices = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool use32bitIndices=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool use4componentVertices=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new wrapper_btTriangleMesh(L,NULL, use32bitIndices, use4componentVertices);
	}

	// Overload binder for btTriangleMesh::btTriangleMesh
	static btTriangleMesh* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btTriangleMesh, cannot match any of the overloads for function btTriangleMesh:\n  btTriangleMesh(bool, bool)\n  btTriangleMesh(lua_Table *, bool, bool)\n");
		return NULL;
	}


	// Function binds:
	// bool btTriangleMesh::getUse32bitIndices() const
	static int _bind_getUse32bitIndices(lua_State *L) {
		if (!_lg_typecheck_getUse32bitIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTriangleMesh::getUse32bitIndices() const function, expected prototype:\nbool btTriangleMesh::getUse32bitIndices() const\nClass arguments details:\n");
		}


		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTriangleMesh::getUse32bitIndices() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		bool lret = self->getUse32bitIndices();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btTriangleMesh::getUse4componentVertices() const
	static int _bind_getUse4componentVertices(lua_State *L) {
		if (!_lg_typecheck_getUse4componentVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTriangleMesh::getUse4componentVertices() const function, expected prototype:\nbool btTriangleMesh::getUse4componentVertices() const\nClass arguments details:\n");
		}


		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTriangleMesh::getUse4componentVertices() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		bool lret = self->getUse4componentVertices();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btTriangleMesh::addTriangle(const btVector3 & vertex0, const btVector3 & vertex1, const btVector3 & vertex2, bool removeDuplicateVertices = false)
	static int _bind_addTriangle(lua_State *L) {
		if (!_lg_typecheck_addTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::addTriangle(const btVector3 & vertex0, const btVector3 & vertex1, const btVector3 & vertex2, bool removeDuplicateVertices = false) function, expected prototype:\nvoid btTriangleMesh::addTriangle(const btVector3 & vertex0, const btVector3 & vertex1, const btVector3 & vertex2, bool removeDuplicateVertices = false)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		int luatop = lua_gettop(L);

		const btVector3* vertex0_ptr=(Luna< btVector3 >::check(L,2));
		if( !vertex0_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex0 in btTriangleMesh::addTriangle function");
		}
		const btVector3 & vertex0=*vertex0_ptr;
		const btVector3* vertex1_ptr=(Luna< btVector3 >::check(L,3));
		if( !vertex1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex1 in btTriangleMesh::addTriangle function");
		}
		const btVector3 & vertex1=*vertex1_ptr;
		const btVector3* vertex2_ptr=(Luna< btVector3 >::check(L,4));
		if( !vertex2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex2 in btTriangleMesh::addTriangle function");
		}
		const btVector3 & vertex2=*vertex2_ptr;
		bool removeDuplicateVertices=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::addTriangle(const btVector3 &, const btVector3 &, const btVector3 &, bool). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->addTriangle(vertex0, vertex1, vertex2, removeDuplicateVertices);

		return 0;
	}

	// int btTriangleMesh::getNumTriangles() const
	static int _bind_getNumTriangles(lua_State *L) {
		if (!_lg_typecheck_getNumTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleMesh::getNumTriangles() const function, expected prototype:\nint btTriangleMesh::getNumTriangles() const\nClass arguments details:\n");
		}


		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleMesh::getNumTriangles() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->getNumTriangles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleMesh::preallocateVertices(int numverts)
	static int _bind_preallocateVertices(lua_State *L) {
		if (!_lg_typecheck_preallocateVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::preallocateVertices(int numverts) function, expected prototype:\nvoid btTriangleMesh::preallocateVertices(int numverts)\nClass arguments details:\n");
		}

		int numverts=(int)lua_tointeger(L,2);

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::preallocateVertices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->preallocateVertices(numverts);

		return 0;
	}

	// void btTriangleMesh::preallocateIndices(int numindices)
	static int _bind_preallocateIndices(lua_State *L) {
		if (!_lg_typecheck_preallocateIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::preallocateIndices(int numindices) function, expected prototype:\nvoid btTriangleMesh::preallocateIndices(int numindices)\nClass arguments details:\n");
		}

		int numindices=(int)lua_tointeger(L,2);

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::preallocateIndices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->preallocateIndices(numindices);

		return 0;
	}

	// int btTriangleMesh::findOrAddVertex(const btVector3 & vertex, bool removeDuplicateVertices)
	static int _bind_findOrAddVertex(lua_State *L) {
		if (!_lg_typecheck_findOrAddVertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleMesh::findOrAddVertex(const btVector3 & vertex, bool removeDuplicateVertices) function, expected prototype:\nint btTriangleMesh::findOrAddVertex(const btVector3 & vertex, bool removeDuplicateVertices)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* vertex_ptr=(Luna< btVector3 >::check(L,2));
		if( !vertex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex in btTriangleMesh::findOrAddVertex function");
		}
		const btVector3 & vertex=*vertex_ptr;
		bool removeDuplicateVertices=(bool)(lua_toboolean(L,3)==1);

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleMesh::findOrAddVertex(const btVector3 &, bool). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->findOrAddVertex(vertex, removeDuplicateVertices);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleMesh::addIndex(int index)
	static int _bind_addIndex(lua_State *L) {
		if (!_lg_typecheck_addIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::addIndex(int index) function, expected prototype:\nvoid btTriangleMesh::addIndex(int index)\nClass arguments details:\n");
		}

		int index=(int)lua_tointeger(L,2);

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::addIndex(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->addIndex(index);

		return 0;
	}

	// float btTriangleMesh::m_weldingThreshold()
	static int _bind_getWeldingThreshold(lua_State *L) {
		if (!_lg_typecheck_getWeldingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float btTriangleMesh::m_weldingThreshold() function, expected prototype:\nfloat btTriangleMesh::m_weldingThreshold()\nClass arguments details:\n");
		}


		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float btTriangleMesh::m_weldingThreshold(). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		float lret = self->m_weldingThreshold;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleMesh::m_weldingThreshold(float value)
	static int _bind_setWeldingThreshold(lua_State *L) {
		if (!_lg_typecheck_setWeldingThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::m_weldingThreshold(float value) function, expected prototype:\nvoid btTriangleMesh::m_weldingThreshold(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::m_weldingThreshold(float). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->m_weldingThreshold = value;

		return 0;
	}

	// void btTriangleMesh::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_InternalProcessAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_InternalProcessAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleMesh::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 59503577\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btInternalTriangleIndexCallback* callback=(Luna< btInternalTriangleIndexCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleMesh::base_InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleMesh::base_InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleMesh::InternalProcessAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// int btTriangleMesh::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleMesh::base_calculateSerializeBufferSize() const function, expected prototype:\nint btTriangleMesh::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleMesh::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->btTriangleMesh::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleMesh::base_unLockVertexBase(int subpart)
	static int _bind_base_unLockVertexBase(lua_State *L) {
		if (!_lg_typecheck_base_unLockVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::base_unLockVertexBase(int subpart) function, expected prototype:\nvoid btTriangleMesh::base_unLockVertexBase(int subpart)\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::base_unLockVertexBase(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleMesh::unLockVertexBase(subpart);

		return 0;
	}

	// void btTriangleMesh::base_unLockReadOnlyVertexBase(int subpart) const
	static int _bind_base_unLockReadOnlyVertexBase(lua_State *L) {
		if (!_lg_typecheck_base_unLockReadOnlyVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::base_unLockReadOnlyVertexBase(int subpart) const function, expected prototype:\nvoid btTriangleMesh::base_unLockReadOnlyVertexBase(int subpart) const\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::base_unLockReadOnlyVertexBase(int) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleMesh::unLockReadOnlyVertexBase(subpart);

		return 0;
	}

	// int btTriangleMesh::base_getNumSubParts() const
	static int _bind_base_getNumSubParts(lua_State *L) {
		if (!_lg_typecheck_base_getNumSubParts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleMesh::base_getNumSubParts() const function, expected prototype:\nint btTriangleMesh::base_getNumSubParts() const\nClass arguments details:\n");
		}


		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleMesh::base_getNumSubParts() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->btTriangleMesh::getNumSubParts();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btTriangleMesh::base_hasPremadeAabb() const
	static int _bind_base_hasPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_hasPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTriangleMesh::base_hasPremadeAabb() const function, expected prototype:\nbool btTriangleMesh::base_hasPremadeAabb() const\nClass arguments details:\n");
		}


		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTriangleMesh::base_hasPremadeAabb() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		bool lret = self->btTriangleMesh::hasPremadeAabb();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btTriangleMesh::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_setPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_setPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleMesh::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleMesh::base_setPremadeAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleMesh::base_setPremadeAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::base_setPremadeAabb(const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleMesh::setPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleMesh::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	static int _bind_base_getPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_getPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const function, expected prototype:\nvoid btTriangleMesh::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin=(Luna< btVector3 >::check(L,2));
		btVector3* aabbMax=(Luna< btVector3 >::check(L,3));

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::base_getPremadeAabb(btVector3 *, btVector3 *) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleMesh::getPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleMesh::base_preallocateVertices(int numverts)
	static int _bind_base_preallocateVertices(lua_State *L) {
		if (!_lg_typecheck_base_preallocateVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::base_preallocateVertices(int numverts) function, expected prototype:\nvoid btTriangleMesh::base_preallocateVertices(int numverts)\nClass arguments details:\n");
		}

		int numverts=(int)lua_tointeger(L,2);

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::base_preallocateVertices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleMesh::preallocateVertices(numverts);

		return 0;
	}

	// void btTriangleMesh::base_preallocateIndices(int numindices)
	static int _bind_base_preallocateIndices(lua_State *L) {
		if (!_lg_typecheck_base_preallocateIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleMesh::base_preallocateIndices(int numindices) function, expected prototype:\nvoid btTriangleMesh::base_preallocateIndices(int numindices)\nClass arguments details:\n");
		}

		int numindices=(int)lua_tointeger(L,2);

		btTriangleMesh* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleMesh >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleMesh::base_preallocateIndices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleMesh::preallocateIndices(numindices);

		return 0;
	}


	// Operator binds:

};

btTriangleMesh* LunaTraits< btTriangleMesh >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleMesh::_bind_ctor(L);
}

void LunaTraits< btTriangleMesh >::_bind_dtor(btTriangleMesh* obj) {
	delete obj;
}

const char LunaTraits< btTriangleMesh >::className[] = "btTriangleMesh";
const char LunaTraits< btTriangleMesh >::fullName[] = "btTriangleMesh";
const char LunaTraits< btTriangleMesh >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleMesh >::parents[] = {"bullet.btTriangleIndexVertexArray", 0};
const int LunaTraits< btTriangleMesh >::hash = 52777927;
const int LunaTraits< btTriangleMesh >::uniqueIDs[] = {56402633,0};

luna_RegType LunaTraits< btTriangleMesh >::methods[] = {
	{"getUse32bitIndices", &luna_wrapper_btTriangleMesh::_bind_getUse32bitIndices},
	{"getUse4componentVertices", &luna_wrapper_btTriangleMesh::_bind_getUse4componentVertices},
	{"addTriangle", &luna_wrapper_btTriangleMesh::_bind_addTriangle},
	{"getNumTriangles", &luna_wrapper_btTriangleMesh::_bind_getNumTriangles},
	{"preallocateVertices", &luna_wrapper_btTriangleMesh::_bind_preallocateVertices},
	{"preallocateIndices", &luna_wrapper_btTriangleMesh::_bind_preallocateIndices},
	{"findOrAddVertex", &luna_wrapper_btTriangleMesh::_bind_findOrAddVertex},
	{"addIndex", &luna_wrapper_btTriangleMesh::_bind_addIndex},
	{"getWeldingThreshold", &luna_wrapper_btTriangleMesh::_bind_getWeldingThreshold},
	{"setWeldingThreshold", &luna_wrapper_btTriangleMesh::_bind_setWeldingThreshold},
	{"base_InternalProcessAllTriangles", &luna_wrapper_btTriangleMesh::_bind_base_InternalProcessAllTriangles},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btTriangleMesh::_bind_base_calculateSerializeBufferSize},
	{"base_unLockVertexBase", &luna_wrapper_btTriangleMesh::_bind_base_unLockVertexBase},
	{"base_unLockReadOnlyVertexBase", &luna_wrapper_btTriangleMesh::_bind_base_unLockReadOnlyVertexBase},
	{"base_getNumSubParts", &luna_wrapper_btTriangleMesh::_bind_base_getNumSubParts},
	{"base_hasPremadeAabb", &luna_wrapper_btTriangleMesh::_bind_base_hasPremadeAabb},
	{"base_setPremadeAabb", &luna_wrapper_btTriangleMesh::_bind_base_setPremadeAabb},
	{"base_getPremadeAabb", &luna_wrapper_btTriangleMesh::_bind_base_getPremadeAabb},
	{"base_preallocateVertices", &luna_wrapper_btTriangleMesh::_bind_base_preallocateVertices},
	{"base_preallocateIndices", &luna_wrapper_btTriangleMesh::_bind_base_preallocateIndices},
	{"__eq", &luna_wrapper_btTriangleMesh::_bind___eq},
	{"fromVoid", &luna_wrapper_btTriangleMesh::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleMesh::_bind_asVoid},
	{"getTable", &luna_wrapper_btTriangleMesh::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleMesh >::converters[] = {
	{"btStridingMeshInterface", &luna_wrapper_btTriangleMesh::_cast_from_btStridingMeshInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleMesh >::enumValues[] = {
	{0,0}
};


