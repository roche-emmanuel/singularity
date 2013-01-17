#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleIndexVertexArray.h>

class luna_wrapper_btTriangleIndexVertexArray {
public:
	typedef Luna< btTriangleIndexVertexArray > luna_t;

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
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btStridingMeshInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btTriangleIndexVertexArray* ptr= dynamic_cast< btTriangleIndexVertexArray* >(Luna< btStridingMeshInterface >::check(L,1));
		btTriangleIndexVertexArray* ptr= luna_caster< btStridingMeshInterface, btTriangleIndexVertexArray >::cast(Luna< btStridingMeshInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTriangleIndexVertexArray >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addIndexedMesh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,78051397) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unLockVertexBase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unLockReadOnlyVertexBase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumSubParts(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexedMeshArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexedMeshArray_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_hasPremadeAabb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPremadeAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPremadeAabb(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91544891)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btTriangleIndexVertexArray::btTriangleIndexVertexArray()
	static btTriangleIndexVertexArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleIndexVertexArray::btTriangleIndexVertexArray() function, expected prototype:\nbtTriangleIndexVertexArray::btTriangleIndexVertexArray()\nClass arguments details:\n");
		}


		return new btTriangleIndexVertexArray();
	}

	// btTriangleIndexVertexArray::btTriangleIndexVertexArray(int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride)
	static btTriangleIndexVertexArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleIndexVertexArray::btTriangleIndexVertexArray(int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride) function, expected prototype:\nbtTriangleIndexVertexArray::btTriangleIndexVertexArray(int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride)\nClass arguments details:\n");
		}

		int numTriangles=(int)lua_tointeger(L,1);
		int triangleIndexBase=(int)lua_tointeger(L,2);
		int triangleIndexStride=(int)lua_tointeger(L,3);
		int numVertices=(int)lua_tointeger(L,4);
		float vertexBase=(float)lua_tonumber(L,5);
		int vertexStride=(int)lua_tointeger(L,6);

		return new btTriangleIndexVertexArray(numTriangles, &triangleIndexBase, triangleIndexStride, numVertices, &vertexBase, vertexStride);
	}

	// btTriangleIndexVertexArray::btTriangleIndexVertexArray(lua_Table * data)
	static btTriangleIndexVertexArray* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleIndexVertexArray::btTriangleIndexVertexArray(lua_Table * data) function, expected prototype:\nbtTriangleIndexVertexArray::btTriangleIndexVertexArray(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btTriangleIndexVertexArray(L,NULL);
	}

	// btTriangleIndexVertexArray::btTriangleIndexVertexArray(lua_Table * data, int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride)
	static btTriangleIndexVertexArray* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleIndexVertexArray::btTriangleIndexVertexArray(lua_Table * data, int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride) function, expected prototype:\nbtTriangleIndexVertexArray::btTriangleIndexVertexArray(lua_Table * data, int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride)\nClass arguments details:\n");
		}

		int numTriangles=(int)lua_tointeger(L,2);
		int triangleIndexBase=(int)lua_tointeger(L,3);
		int triangleIndexStride=(int)lua_tointeger(L,4);
		int numVertices=(int)lua_tointeger(L,5);
		float vertexBase=(float)lua_tonumber(L,6);
		int vertexStride=(int)lua_tointeger(L,7);

		return new wrapper_btTriangleIndexVertexArray(L,NULL, numTriangles, &triangleIndexBase, triangleIndexStride, numVertices, &vertexBase, vertexStride);
	}

	// Overload binder for btTriangleIndexVertexArray::btTriangleIndexVertexArray
	static btTriangleIndexVertexArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btTriangleIndexVertexArray, cannot match any of the overloads for function btTriangleIndexVertexArray:\n  btTriangleIndexVertexArray()\n  btTriangleIndexVertexArray(int, int *, int, int, float *, int)\n  btTriangleIndexVertexArray(lua_Table *)\n  btTriangleIndexVertexArray(lua_Table *, int, int *, int, int, float *, int)\n");
		return NULL;
	}


	// Function binds:
	// void btTriangleIndexVertexArray::addIndexedMesh(const btIndexedMesh & mesh, PHY_ScalarType indexType = ::PHY_INTEGER)
	static int _bind_addIndexedMesh(lua_State *L) {
		if (!_lg_typecheck_addIndexedMesh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::addIndexedMesh(const btIndexedMesh & mesh, PHY_ScalarType indexType = ::PHY_INTEGER) function, expected prototype:\nvoid btTriangleIndexVertexArray::addIndexedMesh(const btIndexedMesh & mesh, PHY_ScalarType indexType = ::PHY_INTEGER)\nClass arguments details:\narg 1 ID = 78051397\n");
		}

		int luatop = lua_gettop(L);

		const btIndexedMesh* mesh_ptr=(Luna< btIndexedMesh >::check(L,2));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in btTriangleIndexVertexArray::addIndexedMesh function");
		}
		const btIndexedMesh & mesh=*mesh_ptr;
		PHY_ScalarType indexType=luatop>2 ? (PHY_ScalarType)lua_tointeger(L,3) : ::PHY_INTEGER;

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::addIndexedMesh(const btIndexedMesh &, PHY_ScalarType). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->addIndexedMesh(mesh, indexType);

		return 0;
	}

	// void btTriangleIndexVertexArray::unLockVertexBase(int subpart)
	static int _bind_unLockVertexBase(lua_State *L) {
		if (!_lg_typecheck_unLockVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::unLockVertexBase(int subpart) function, expected prototype:\nvoid btTriangleIndexVertexArray::unLockVertexBase(int subpart)\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::unLockVertexBase(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->unLockVertexBase(subpart);

		return 0;
	}

	// void btTriangleIndexVertexArray::unLockReadOnlyVertexBase(int subpart) const
	static int _bind_unLockReadOnlyVertexBase(lua_State *L) {
		if (!_lg_typecheck_unLockReadOnlyVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::unLockReadOnlyVertexBase(int subpart) const function, expected prototype:\nvoid btTriangleIndexVertexArray::unLockReadOnlyVertexBase(int subpart) const\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::unLockReadOnlyVertexBase(int) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->unLockReadOnlyVertexBase(subpart);

		return 0;
	}

	// int btTriangleIndexVertexArray::getNumSubParts() const
	static int _bind_getNumSubParts(lua_State *L) {
		if (!_lg_typecheck_getNumSubParts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleIndexVertexArray::getNumSubParts() const function, expected prototype:\nint btTriangleIndexVertexArray::getNumSubParts() const\nClass arguments details:\n");
		}


		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleIndexVertexArray::getNumSubParts() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->getNumSubParts();
		lua_pushnumber(L,lret);

		return 1;
	}

	// IndexedMeshArray & btTriangleIndexVertexArray::getIndexedMeshArray()
	static int _bind_getIndexedMeshArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_getIndexedMeshArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IndexedMeshArray & btTriangleIndexVertexArray::getIndexedMeshArray() function, expected prototype:\nIndexedMeshArray & btTriangleIndexVertexArray::getIndexedMeshArray()\nClass arguments details:\n");
		}


		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call IndexedMeshArray & btTriangleIndexVertexArray::getIndexedMeshArray(). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		const IndexedMeshArray* lret = &self->getIndexedMeshArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IndexedMeshArray >::push(L,lret,false);

		return 1;
	}

	// const IndexedMeshArray & btTriangleIndexVertexArray::getIndexedMeshArray() const
	static int _bind_getIndexedMeshArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_getIndexedMeshArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const IndexedMeshArray & btTriangleIndexVertexArray::getIndexedMeshArray() const function, expected prototype:\nconst IndexedMeshArray & btTriangleIndexVertexArray::getIndexedMeshArray() const\nClass arguments details:\n");
		}


		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const IndexedMeshArray & btTriangleIndexVertexArray::getIndexedMeshArray() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		const IndexedMeshArray* lret = &self->getIndexedMeshArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IndexedMeshArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for btTriangleIndexVertexArray::getIndexedMeshArray
	static int _bind_getIndexedMeshArray(lua_State *L) {
		if (_lg_typecheck_getIndexedMeshArray_overload_1(L)) return _bind_getIndexedMeshArray_overload_1(L);
		if (_lg_typecheck_getIndexedMeshArray_overload_2(L)) return _bind_getIndexedMeshArray_overload_2(L);

		luaL_error(L, "error in function getIndexedMeshArray, cannot match any of the overloads for function getIndexedMeshArray:\n  getIndexedMeshArray()\n  getIndexedMeshArray()\n");
		return 0;
	}

	// void btTriangleIndexVertexArray::preallocateVertices(int numverts)
	static int _bind_preallocateVertices(lua_State *L) {
		if (!_lg_typecheck_preallocateVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::preallocateVertices(int numverts) function, expected prototype:\nvoid btTriangleIndexVertexArray::preallocateVertices(int numverts)\nClass arguments details:\n");
		}

		int numverts=(int)lua_tointeger(L,2);

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::preallocateVertices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->preallocateVertices(numverts);

		return 0;
	}

	// void btTriangleIndexVertexArray::preallocateIndices(int numindices)
	static int _bind_preallocateIndices(lua_State *L) {
		if (!_lg_typecheck_preallocateIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::preallocateIndices(int numindices) function, expected prototype:\nvoid btTriangleIndexVertexArray::preallocateIndices(int numindices)\nClass arguments details:\n");
		}

		int numindices=(int)lua_tointeger(L,2);

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::preallocateIndices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->preallocateIndices(numindices);

		return 0;
	}

	// bool btTriangleIndexVertexArray::hasPremadeAabb() const
	static int _bind_hasPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_hasPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTriangleIndexVertexArray::hasPremadeAabb() const function, expected prototype:\nbool btTriangleIndexVertexArray::hasPremadeAabb() const\nClass arguments details:\n");
		}


		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTriangleIndexVertexArray::hasPremadeAabb() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		bool lret = self->hasPremadeAabb();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btTriangleIndexVertexArray::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_setPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_setPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleIndexVertexArray::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleIndexVertexArray::setPremadeAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleIndexVertexArray::setPremadeAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::setPremadeAabb(const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->setPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleIndexVertexArray::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	static int _bind_getPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_getPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const function, expected prototype:\nvoid btTriangleIndexVertexArray::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin=(Luna< btVector3 >::check(L,2));
		btVector3* aabbMax=(Luna< btVector3 >::check(L,3));

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::getPremadeAabb(btVector3 *, btVector3 *) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->getPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleIndexVertexArray::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_InternalProcessAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_InternalProcessAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleIndexVertexArray::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 59503577\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btInternalTriangleIndexCallback* callback=(Luna< btInternalTriangleIndexCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleIndexVertexArray::base_InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleIndexVertexArray::base_InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexArray::InternalProcessAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// int btTriangleIndexVertexArray::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleIndexVertexArray::base_calculateSerializeBufferSize() const function, expected prototype:\nint btTriangleIndexVertexArray::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleIndexVertexArray::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->btTriangleIndexVertexArray::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleIndexVertexArray::base_unLockVertexBase(int subpart)
	static int _bind_base_unLockVertexBase(lua_State *L) {
		if (!_lg_typecheck_base_unLockVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::base_unLockVertexBase(int subpart) function, expected prototype:\nvoid btTriangleIndexVertexArray::base_unLockVertexBase(int subpart)\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::base_unLockVertexBase(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexArray::unLockVertexBase(subpart);

		return 0;
	}

	// void btTriangleIndexVertexArray::base_unLockReadOnlyVertexBase(int subpart) const
	static int _bind_base_unLockReadOnlyVertexBase(lua_State *L) {
		if (!_lg_typecheck_base_unLockReadOnlyVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::base_unLockReadOnlyVertexBase(int subpart) const function, expected prototype:\nvoid btTriangleIndexVertexArray::base_unLockReadOnlyVertexBase(int subpart) const\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::base_unLockReadOnlyVertexBase(int) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexArray::unLockReadOnlyVertexBase(subpart);

		return 0;
	}

	// int btTriangleIndexVertexArray::base_getNumSubParts() const
	static int _bind_base_getNumSubParts(lua_State *L) {
		if (!_lg_typecheck_base_getNumSubParts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleIndexVertexArray::base_getNumSubParts() const function, expected prototype:\nint btTriangleIndexVertexArray::base_getNumSubParts() const\nClass arguments details:\n");
		}


		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleIndexVertexArray::base_getNumSubParts() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->btTriangleIndexVertexArray::getNumSubParts();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleIndexVertexArray::base_preallocateVertices(int numverts)
	static int _bind_base_preallocateVertices(lua_State *L) {
		if (!_lg_typecheck_base_preallocateVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::base_preallocateVertices(int numverts) function, expected prototype:\nvoid btTriangleIndexVertexArray::base_preallocateVertices(int numverts)\nClass arguments details:\n");
		}

		int numverts=(int)lua_tointeger(L,2);

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::base_preallocateVertices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexArray::preallocateVertices(numverts);

		return 0;
	}

	// void btTriangleIndexVertexArray::base_preallocateIndices(int numindices)
	static int _bind_base_preallocateIndices(lua_State *L) {
		if (!_lg_typecheck_base_preallocateIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::base_preallocateIndices(int numindices) function, expected prototype:\nvoid btTriangleIndexVertexArray::base_preallocateIndices(int numindices)\nClass arguments details:\n");
		}

		int numindices=(int)lua_tointeger(L,2);

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::base_preallocateIndices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexArray::preallocateIndices(numindices);

		return 0;
	}

	// bool btTriangleIndexVertexArray::base_hasPremadeAabb() const
	static int _bind_base_hasPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_hasPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTriangleIndexVertexArray::base_hasPremadeAabb() const function, expected prototype:\nbool btTriangleIndexVertexArray::base_hasPremadeAabb() const\nClass arguments details:\n");
		}


		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTriangleIndexVertexArray::base_hasPremadeAabb() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		bool lret = self->btTriangleIndexVertexArray::hasPremadeAabb();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btTriangleIndexVertexArray::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_setPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_setPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleIndexVertexArray::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleIndexVertexArray::base_setPremadeAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleIndexVertexArray::base_setPremadeAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::base_setPremadeAabb(const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexArray::setPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleIndexVertexArray::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	static int _bind_base_getPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_getPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexArray::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const function, expected prototype:\nvoid btTriangleIndexVertexArray::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin=(Luna< btVector3 >::check(L,2));
		btVector3* aabbMax=(Luna< btVector3 >::check(L,3));

		btTriangleIndexVertexArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexArray::base_getPremadeAabb(btVector3 *, btVector3 *) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexArray::getPremadeAabb(aabbMin, aabbMax);

		return 0;
	}


	// Operator binds:

};

btTriangleIndexVertexArray* LunaTraits< btTriangleIndexVertexArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleIndexVertexArray::_bind_ctor(L);
}

void LunaTraits< btTriangleIndexVertexArray >::_bind_dtor(btTriangleIndexVertexArray* obj) {
	delete obj;
}

const char LunaTraits< btTriangleIndexVertexArray >::className[] = "btTriangleIndexVertexArray";
const char LunaTraits< btTriangleIndexVertexArray >::fullName[] = "btTriangleIndexVertexArray";
const char LunaTraits< btTriangleIndexVertexArray >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleIndexVertexArray >::parents[] = {"bullet.btStridingMeshInterface", 0};
const int LunaTraits< btTriangleIndexVertexArray >::hash = 22682826;
const int LunaTraits< btTriangleIndexVertexArray >::uniqueIDs[] = {56402633,0};

luna_RegType LunaTraits< btTriangleIndexVertexArray >::methods[] = {
	{"addIndexedMesh", &luna_wrapper_btTriangleIndexVertexArray::_bind_addIndexedMesh},
	{"unLockVertexBase", &luna_wrapper_btTriangleIndexVertexArray::_bind_unLockVertexBase},
	{"unLockReadOnlyVertexBase", &luna_wrapper_btTriangleIndexVertexArray::_bind_unLockReadOnlyVertexBase},
	{"getNumSubParts", &luna_wrapper_btTriangleIndexVertexArray::_bind_getNumSubParts},
	{"getIndexedMeshArray", &luna_wrapper_btTriangleIndexVertexArray::_bind_getIndexedMeshArray},
	{"preallocateVertices", &luna_wrapper_btTriangleIndexVertexArray::_bind_preallocateVertices},
	{"preallocateIndices", &luna_wrapper_btTriangleIndexVertexArray::_bind_preallocateIndices},
	{"hasPremadeAabb", &luna_wrapper_btTriangleIndexVertexArray::_bind_hasPremadeAabb},
	{"setPremadeAabb", &luna_wrapper_btTriangleIndexVertexArray::_bind_setPremadeAabb},
	{"getPremadeAabb", &luna_wrapper_btTriangleIndexVertexArray::_bind_getPremadeAabb},
	{"base_InternalProcessAllTriangles", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_InternalProcessAllTriangles},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_calculateSerializeBufferSize},
	{"base_unLockVertexBase", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_unLockVertexBase},
	{"base_unLockReadOnlyVertexBase", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_unLockReadOnlyVertexBase},
	{"base_getNumSubParts", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_getNumSubParts},
	{"base_preallocateVertices", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_preallocateVertices},
	{"base_preallocateIndices", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_preallocateIndices},
	{"base_hasPremadeAabb", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_hasPremadeAabb},
	{"base_setPremadeAabb", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_setPremadeAabb},
	{"base_getPremadeAabb", &luna_wrapper_btTriangleIndexVertexArray::_bind_base_getPremadeAabb},
	{"__eq", &luna_wrapper_btTriangleIndexVertexArray::_bind___eq},
	{"getTable", &luna_wrapper_btTriangleIndexVertexArray::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleIndexVertexArray >::converters[] = {
	{"btStridingMeshInterface", &luna_wrapper_btTriangleIndexVertexArray::_cast_from_btStridingMeshInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleIndexVertexArray >::enumValues[] = {
	{0,0}
};


