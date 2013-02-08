#include <plug_common.h>

#include <luna/wrappers/wrapper_btTriangleIndexVertexMaterialArray.h>

class luna_wrapper_btTriangleIndexVertexMaterialArray {
public:
	typedef Luna< btTriangleIndexVertexMaterialArray > luna_t;

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

		btTriangleIndexVertexMaterialArray* self= (btTriangleIndexVertexMaterialArray*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btTriangleIndexVertexMaterialArray >::push(L,self,false);
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
		//btTriangleIndexVertexMaterialArray* ptr= dynamic_cast< btTriangleIndexVertexMaterialArray* >(Luna< btStridingMeshInterface >::check(L,1));
		btTriangleIndexVertexMaterialArray* ptr= luna_caster< btStridingMeshInterface, btTriangleIndexVertexMaterialArray >::cast(Luna< btStridingMeshInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btTriangleIndexVertexMaterialArray >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( (lua_isnumber(L,11)==0 || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=12 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_isnumber(L,10)==0 || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( (lua_isnumber(L,11)==0 || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		if( (lua_isnumber(L,12)==0 || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addMaterialProperties(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,67602617) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	// btTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray()
	static btTriangleIndexVertexMaterialArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray() function, expected prototype:\nbtTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray()\nClass arguments details:\n");
		}


		return new btTriangleIndexVertexMaterialArray();
	}

	// btTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray(int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride, int numMaterials, unsigned char * materialBase, int materialStride, int * triangleMaterialsBase, int materialIndexStride)
	static btTriangleIndexVertexMaterialArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray(int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride, int numMaterials, unsigned char * materialBase, int materialStride, int * triangleMaterialsBase, int materialIndexStride) function, expected prototype:\nbtTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray(int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride, int numMaterials, unsigned char * materialBase, int materialStride, int * triangleMaterialsBase, int materialIndexStride)\nClass arguments details:\n");
		}

		int numTriangles=(int)lua_tointeger(L,1);
		int triangleIndexBase=(int)lua_tointeger(L,2);
		int triangleIndexStride=(int)lua_tointeger(L,3);
		int numVertices=(int)lua_tointeger(L,4);
		float vertexBase=(float)lua_tonumber(L,5);
		int vertexStride=(int)lua_tointeger(L,6);
		int numMaterials=(int)lua_tointeger(L,7);
		unsigned char materialBase = (unsigned char)(lua_tointeger(L,8));
		int materialStride=(int)lua_tointeger(L,9);
		int triangleMaterialsBase=(int)lua_tointeger(L,10);
		int materialIndexStride=(int)lua_tointeger(L,11);

		return new btTriangleIndexVertexMaterialArray(numTriangles, &triangleIndexBase, triangleIndexStride, numVertices, &vertexBase, vertexStride, numMaterials, &materialBase, materialStride, &triangleMaterialsBase, materialIndexStride);
	}

	// btTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray(lua_Table * data)
	static btTriangleIndexVertexMaterialArray* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray(lua_Table * data) function, expected prototype:\nbtTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btTriangleIndexVertexMaterialArray(L,NULL);
	}

	// btTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray(lua_Table * data, int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride, int numMaterials, unsigned char * materialBase, int materialStride, int * triangleMaterialsBase, int materialIndexStride)
	static btTriangleIndexVertexMaterialArray* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray(lua_Table * data, int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride, int numMaterials, unsigned char * materialBase, int materialStride, int * triangleMaterialsBase, int materialIndexStride) function, expected prototype:\nbtTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray(lua_Table * data, int numTriangles, int * triangleIndexBase, int triangleIndexStride, int numVertices, float * vertexBase, int vertexStride, int numMaterials, unsigned char * materialBase, int materialStride, int * triangleMaterialsBase, int materialIndexStride)\nClass arguments details:\n");
		}

		int numTriangles=(int)lua_tointeger(L,2);
		int triangleIndexBase=(int)lua_tointeger(L,3);
		int triangleIndexStride=(int)lua_tointeger(L,4);
		int numVertices=(int)lua_tointeger(L,5);
		float vertexBase=(float)lua_tonumber(L,6);
		int vertexStride=(int)lua_tointeger(L,7);
		int numMaterials=(int)lua_tointeger(L,8);
		unsigned char materialBase = (unsigned char)(lua_tointeger(L,9));
		int materialStride=(int)lua_tointeger(L,10);
		int triangleMaterialsBase=(int)lua_tointeger(L,11);
		int materialIndexStride=(int)lua_tointeger(L,12);

		return new wrapper_btTriangleIndexVertexMaterialArray(L,NULL, numTriangles, &triangleIndexBase, triangleIndexStride, numVertices, &vertexBase, vertexStride, numMaterials, &materialBase, materialStride, &triangleMaterialsBase, materialIndexStride);
	}

	// Overload binder for btTriangleIndexVertexMaterialArray::btTriangleIndexVertexMaterialArray
	static btTriangleIndexVertexMaterialArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function btTriangleIndexVertexMaterialArray, cannot match any of the overloads for function btTriangleIndexVertexMaterialArray:\n  btTriangleIndexVertexMaterialArray()\n  btTriangleIndexVertexMaterialArray(int, int *, int, int, float *, int, int, unsigned char *, int, int *, int)\n  btTriangleIndexVertexMaterialArray(lua_Table *)\n  btTriangleIndexVertexMaterialArray(lua_Table *, int, int *, int, int, float *, int, int, unsigned char *, int, int *, int)\n");
		return NULL;
	}


	// Function binds:
	// void btTriangleIndexVertexMaterialArray::addMaterialProperties(const btMaterialProperties & mat, PHY_ScalarType triangleType = ::PHY_INTEGER)
	static int _bind_addMaterialProperties(lua_State *L) {
		if (!_lg_typecheck_addMaterialProperties(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexMaterialArray::addMaterialProperties(const btMaterialProperties & mat, PHY_ScalarType triangleType = ::PHY_INTEGER) function, expected prototype:\nvoid btTriangleIndexVertexMaterialArray::addMaterialProperties(const btMaterialProperties & mat, PHY_ScalarType triangleType = ::PHY_INTEGER)\nClass arguments details:\narg 1 ID = 67602617\n");
		}

		int luatop = lua_gettop(L);

		const btMaterialProperties* mat_ptr=(Luna< btMaterialProperties >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in btTriangleIndexVertexMaterialArray::addMaterialProperties function");
		}
		const btMaterialProperties & mat=*mat_ptr;
		PHY_ScalarType triangleType=luatop>2 ? (PHY_ScalarType)lua_tointeger(L,3) : ::PHY_INTEGER;

		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexMaterialArray::addMaterialProperties(const btMaterialProperties &, PHY_ScalarType). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->addMaterialProperties(mat, triangleType);

		return 0;
	}

	// void btTriangleIndexVertexMaterialArray::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_InternalProcessAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_InternalProcessAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexMaterialArray::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleIndexVertexMaterialArray::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 59503577\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btInternalTriangleIndexCallback* callback=(Luna< btInternalTriangleIndexCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleIndexVertexMaterialArray::base_InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleIndexVertexMaterialArray::base_InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexMaterialArray::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexMaterialArray::InternalProcessAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// int btTriangleIndexVertexMaterialArray::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleIndexVertexMaterialArray::base_calculateSerializeBufferSize() const function, expected prototype:\nint btTriangleIndexVertexMaterialArray::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleIndexVertexMaterialArray::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->btTriangleIndexVertexMaterialArray::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleIndexVertexMaterialArray::base_unLockVertexBase(int subpart)
	static int _bind_base_unLockVertexBase(lua_State *L) {
		if (!_lg_typecheck_base_unLockVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexMaterialArray::base_unLockVertexBase(int subpart) function, expected prototype:\nvoid btTriangleIndexVertexMaterialArray::base_unLockVertexBase(int subpart)\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexMaterialArray::base_unLockVertexBase(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexMaterialArray::unLockVertexBase(subpart);

		return 0;
	}

	// void btTriangleIndexVertexMaterialArray::base_unLockReadOnlyVertexBase(int subpart) const
	static int _bind_base_unLockReadOnlyVertexBase(lua_State *L) {
		if (!_lg_typecheck_base_unLockReadOnlyVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexMaterialArray::base_unLockReadOnlyVertexBase(int subpart) const function, expected prototype:\nvoid btTriangleIndexVertexMaterialArray::base_unLockReadOnlyVertexBase(int subpart) const\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexMaterialArray::base_unLockReadOnlyVertexBase(int) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexMaterialArray::unLockReadOnlyVertexBase(subpart);

		return 0;
	}

	// int btTriangleIndexVertexMaterialArray::base_getNumSubParts() const
	static int _bind_base_getNumSubParts(lua_State *L) {
		if (!_lg_typecheck_base_getNumSubParts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btTriangleIndexVertexMaterialArray::base_getNumSubParts() const function, expected prototype:\nint btTriangleIndexVertexMaterialArray::base_getNumSubParts() const\nClass arguments details:\n");
		}


		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btTriangleIndexVertexMaterialArray::base_getNumSubParts() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->btTriangleIndexVertexMaterialArray::getNumSubParts();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btTriangleIndexVertexMaterialArray::base_preallocateVertices(int numverts)
	static int _bind_base_preallocateVertices(lua_State *L) {
		if (!_lg_typecheck_base_preallocateVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexMaterialArray::base_preallocateVertices(int numverts) function, expected prototype:\nvoid btTriangleIndexVertexMaterialArray::base_preallocateVertices(int numverts)\nClass arguments details:\n");
		}

		int numverts=(int)lua_tointeger(L,2);

		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexMaterialArray::base_preallocateVertices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexMaterialArray::preallocateVertices(numverts);

		return 0;
	}

	// void btTriangleIndexVertexMaterialArray::base_preallocateIndices(int numindices)
	static int _bind_base_preallocateIndices(lua_State *L) {
		if (!_lg_typecheck_base_preallocateIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexMaterialArray::base_preallocateIndices(int numindices) function, expected prototype:\nvoid btTriangleIndexVertexMaterialArray::base_preallocateIndices(int numindices)\nClass arguments details:\n");
		}

		int numindices=(int)lua_tointeger(L,2);

		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexMaterialArray::base_preallocateIndices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexMaterialArray::preallocateIndices(numindices);

		return 0;
	}

	// bool btTriangleIndexVertexMaterialArray::base_hasPremadeAabb() const
	static int _bind_base_hasPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_hasPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btTriangleIndexVertexMaterialArray::base_hasPremadeAabb() const function, expected prototype:\nbool btTriangleIndexVertexMaterialArray::base_hasPremadeAabb() const\nClass arguments details:\n");
		}


		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btTriangleIndexVertexMaterialArray::base_hasPremadeAabb() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		bool lret = self->btTriangleIndexVertexMaterialArray::hasPremadeAabb();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btTriangleIndexVertexMaterialArray::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_setPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_setPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexMaterialArray::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btTriangleIndexVertexMaterialArray::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btTriangleIndexVertexMaterialArray::base_setPremadeAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btTriangleIndexVertexMaterialArray::base_setPremadeAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexMaterialArray::base_setPremadeAabb(const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexMaterialArray::setPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btTriangleIndexVertexMaterialArray::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	static int _bind_base_getPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_getPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btTriangleIndexVertexMaterialArray::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const function, expected prototype:\nvoid btTriangleIndexVertexMaterialArray::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin=(Luna< btVector3 >::check(L,2));
		btVector3* aabbMax=(Luna< btVector3 >::check(L,3));

		btTriangleIndexVertexMaterialArray* self=Luna< btStridingMeshInterface >::checkSubType< btTriangleIndexVertexMaterialArray >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btTriangleIndexVertexMaterialArray::base_getPremadeAabb(btVector3 *, btVector3 *) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btTriangleIndexVertexMaterialArray::getPremadeAabb(aabbMin, aabbMax);

		return 0;
	}


	// Operator binds:

};

btTriangleIndexVertexMaterialArray* LunaTraits< btTriangleIndexVertexMaterialArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_ctor(L);
}

void LunaTraits< btTriangleIndexVertexMaterialArray >::_bind_dtor(btTriangleIndexVertexMaterialArray* obj) {
	delete obj;
}

const char LunaTraits< btTriangleIndexVertexMaterialArray >::className[] = "btTriangleIndexVertexMaterialArray";
const char LunaTraits< btTriangleIndexVertexMaterialArray >::fullName[] = "btTriangleIndexVertexMaterialArray";
const char LunaTraits< btTriangleIndexVertexMaterialArray >::moduleName[] = "bullet";
const char* LunaTraits< btTriangleIndexVertexMaterialArray >::parents[] = {"bullet.btTriangleIndexVertexArray", 0};
const int LunaTraits< btTriangleIndexVertexMaterialArray >::hash = 30987141;
const int LunaTraits< btTriangleIndexVertexMaterialArray >::uniqueIDs[] = {56402633,0};

luna_RegType LunaTraits< btTriangleIndexVertexMaterialArray >::methods[] = {
	{"addMaterialProperties", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_addMaterialProperties},
	{"base_InternalProcessAllTriangles", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_InternalProcessAllTriangles},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_calculateSerializeBufferSize},
	{"base_unLockVertexBase", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_unLockVertexBase},
	{"base_unLockReadOnlyVertexBase", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_unLockReadOnlyVertexBase},
	{"base_getNumSubParts", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_getNumSubParts},
	{"base_preallocateVertices", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_preallocateVertices},
	{"base_preallocateIndices", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_preallocateIndices},
	{"base_hasPremadeAabb", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_hasPremadeAabb},
	{"base_setPremadeAabb", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_setPremadeAabb},
	{"base_getPremadeAabb", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_base_getPremadeAabb},
	{"__eq", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind___eq},
	{"fromVoid", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_asVoid},
	{"getTable", &luna_wrapper_btTriangleIndexVertexMaterialArray::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btTriangleIndexVertexMaterialArray >::converters[] = {
	{"btStridingMeshInterface", &luna_wrapper_btTriangleIndexVertexMaterialArray::_cast_from_btStridingMeshInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< btTriangleIndexVertexMaterialArray >::enumValues[] = {
	{0,0}
};


