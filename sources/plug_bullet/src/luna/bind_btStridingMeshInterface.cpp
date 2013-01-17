#include <plug_common.h>

#include <luna/wrappers/wrapper_btStridingMeshInterface.h>

class luna_wrapper_btStridingMeshInterface {
public:
	typedef Luna< btStridingMeshInterface > luna_t;

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

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btStridingMeshInterface");
		
		return luna_dynamicCast(L,converters,"btStridingMeshInterface",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_InternalProcessAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,59503577)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateAabbBruteForce(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
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

	inline static bool _lg_typecheck_getScaling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScaling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InternalProcessAllTriangles(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,59503577)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
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

	inline static bool _lg_typecheck_base_calculateSerializeBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btStridingMeshInterface::btStridingMeshInterface(lua_Table * data)
	static btStridingMeshInterface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btStridingMeshInterface::btStridingMeshInterface(lua_Table * data) function, expected prototype:\nbtStridingMeshInterface::btStridingMeshInterface(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btStridingMeshInterface(L,NULL);
	}


	// Function binds:
	// void btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_InternalProcessAllTriangles(lua_State *L) {
		if (!_lg_typecheck_InternalProcessAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 59503577\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btInternalTriangleIndexCallback* callback=(Luna< btInternalTriangleIndexCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btStridingMeshInterface::InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btStridingMeshInterface::InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::InternalProcessAllTriangles(btInternalTriangleIndexCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->InternalProcessAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// void btStridingMeshInterface::calculateAabbBruteForce(btVector3 & aabbMin, btVector3 & aabbMax)
	static int _bind_calculateAabbBruteForce(lua_State *L) {
		if (!_lg_typecheck_calculateAabbBruteForce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::calculateAabbBruteForce(btVector3 & aabbMin, btVector3 & aabbMax) function, expected prototype:\nvoid btStridingMeshInterface::calculateAabbBruteForce(btVector3 & aabbMin, btVector3 & aabbMax)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btStridingMeshInterface::calculateAabbBruteForce function");
		}
		btVector3 & aabbMin=*aabbMin_ptr;
		btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btStridingMeshInterface::calculateAabbBruteForce function");
		}
		btVector3 & aabbMax=*aabbMax_ptr;

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::calculateAabbBruteForce(btVector3 &, btVector3 &). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->calculateAabbBruteForce(aabbMin, aabbMax);

		return 0;
	}

	// void btStridingMeshInterface::unLockVertexBase(int subpart)
	static int _bind_unLockVertexBase(lua_State *L) {
		if (!_lg_typecheck_unLockVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::unLockVertexBase(int subpart) function, expected prototype:\nvoid btStridingMeshInterface::unLockVertexBase(int subpart)\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::unLockVertexBase(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->unLockVertexBase(subpart);

		return 0;
	}

	// void btStridingMeshInterface::unLockReadOnlyVertexBase(int subpart) const
	static int _bind_unLockReadOnlyVertexBase(lua_State *L) {
		if (!_lg_typecheck_unLockReadOnlyVertexBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::unLockReadOnlyVertexBase(int subpart) const function, expected prototype:\nvoid btStridingMeshInterface::unLockReadOnlyVertexBase(int subpart) const\nClass arguments details:\n");
		}

		int subpart=(int)lua_tointeger(L,2);

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::unLockReadOnlyVertexBase(int) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->unLockReadOnlyVertexBase(subpart);

		return 0;
	}

	// int btStridingMeshInterface::getNumSubParts() const
	static int _bind_getNumSubParts(lua_State *L) {
		if (!_lg_typecheck_getNumSubParts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btStridingMeshInterface::getNumSubParts() const function, expected prototype:\nint btStridingMeshInterface::getNumSubParts() const\nClass arguments details:\n");
		}


		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btStridingMeshInterface::getNumSubParts() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->getNumSubParts();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btStridingMeshInterface::preallocateVertices(int numverts)
	static int _bind_preallocateVertices(lua_State *L) {
		if (!_lg_typecheck_preallocateVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::preallocateVertices(int numverts) function, expected prototype:\nvoid btStridingMeshInterface::preallocateVertices(int numverts)\nClass arguments details:\n");
		}

		int numverts=(int)lua_tointeger(L,2);

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::preallocateVertices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->preallocateVertices(numverts);

		return 0;
	}

	// void btStridingMeshInterface::preallocateIndices(int numindices)
	static int _bind_preallocateIndices(lua_State *L) {
		if (!_lg_typecheck_preallocateIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::preallocateIndices(int numindices) function, expected prototype:\nvoid btStridingMeshInterface::preallocateIndices(int numindices)\nClass arguments details:\n");
		}

		int numindices=(int)lua_tointeger(L,2);

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::preallocateIndices(int). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->preallocateIndices(numindices);

		return 0;
	}

	// bool btStridingMeshInterface::hasPremadeAabb() const
	static int _bind_hasPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_hasPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btStridingMeshInterface::hasPremadeAabb() const function, expected prototype:\nbool btStridingMeshInterface::hasPremadeAabb() const\nClass arguments details:\n");
		}


		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btStridingMeshInterface::hasPremadeAabb() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		bool lret = self->hasPremadeAabb();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btStridingMeshInterface::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_setPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_setPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btStridingMeshInterface::setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btStridingMeshInterface::setPremadeAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btStridingMeshInterface::setPremadeAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::setPremadeAabb(const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->setPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btStridingMeshInterface::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	static int _bind_getPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_getPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const function, expected prototype:\nvoid btStridingMeshInterface::getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin=(Luna< btVector3 >::check(L,2));
		btVector3* aabbMax=(Luna< btVector3 >::check(L,3));

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::getPremadeAabb(btVector3 *, btVector3 *) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->getPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// const btVector3 & btStridingMeshInterface::getScaling() const
	static int _bind_getScaling(lua_State *L) {
		if (!_lg_typecheck_getScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const btVector3 & btStridingMeshInterface::getScaling() const function, expected prototype:\nconst btVector3 & btStridingMeshInterface::getScaling() const\nClass arguments details:\n");
		}


		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const btVector3 & btStridingMeshInterface::getScaling() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		const btVector3* lret = &self->getScaling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btStridingMeshInterface::setScaling(const btVector3 & scaling)
	static int _bind_setScaling(lua_State *L) {
		if (!_lg_typecheck_setScaling(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::setScaling(const btVector3 & scaling) function, expected prototype:\nvoid btStridingMeshInterface::setScaling(const btVector3 & scaling)\nClass arguments details:\narg 1 ID = 91544891\n");
		}

		const btVector3* scaling_ptr=(Luna< btVector3 >::check(L,2));
		if( !scaling_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scaling in btStridingMeshInterface::setScaling function");
		}
		const btVector3 & scaling=*scaling_ptr;

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::setScaling(const btVector3 &). Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->setScaling(scaling);

		return 0;
	}

	// int btStridingMeshInterface::calculateSerializeBufferSize() const
	static int _bind_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btStridingMeshInterface::calculateSerializeBufferSize() const function, expected prototype:\nint btStridingMeshInterface::calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btStridingMeshInterface::calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btStridingMeshInterface::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_InternalProcessAllTriangles(lua_State *L) {
		if (!_lg_typecheck_base_InternalProcessAllTriangles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btStridingMeshInterface::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback * callback, const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 59503577\narg 2 ID = 91544891\narg 3 ID = 91544891\n");
		}

		btInternalTriangleIndexCallback* callback=(Luna< btInternalTriangleIndexCallback >::check(L,2));
		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btStridingMeshInterface::base_InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,4));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btStridingMeshInterface::base_InternalProcessAllTriangles function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::base_InternalProcessAllTriangles(btInternalTriangleIndexCallback *, const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btStridingMeshInterface::InternalProcessAllTriangles(callback, aabbMin, aabbMax);

		return 0;
	}

	// bool btStridingMeshInterface::base_hasPremadeAabb() const
	static int _bind_base_hasPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_hasPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btStridingMeshInterface::base_hasPremadeAabb() const function, expected prototype:\nbool btStridingMeshInterface::base_hasPremadeAabb() const\nClass arguments details:\n");
		}


		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btStridingMeshInterface::base_hasPremadeAabb() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		bool lret = self->btStridingMeshInterface::hasPremadeAabb();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btStridingMeshInterface::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const
	static int _bind_base_setPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_setPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const function, expected prototype:\nvoid btStridingMeshInterface::base_setPremadeAabb(const btVector3 & aabbMin, const btVector3 & aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		const btVector3* aabbMin_ptr=(Luna< btVector3 >::check(L,2));
		if( !aabbMin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMin in btStridingMeshInterface::base_setPremadeAabb function");
		}
		const btVector3 & aabbMin=*aabbMin_ptr;
		const btVector3* aabbMax_ptr=(Luna< btVector3 >::check(L,3));
		if( !aabbMax_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aabbMax in btStridingMeshInterface::base_setPremadeAabb function");
		}
		const btVector3 & aabbMax=*aabbMax_ptr;

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::base_setPremadeAabb(const btVector3 &, const btVector3 &) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btStridingMeshInterface::setPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// void btStridingMeshInterface::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const
	static int _bind_base_getPremadeAabb(lua_State *L) {
		if (!_lg_typecheck_base_getPremadeAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btStridingMeshInterface::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const function, expected prototype:\nvoid btStridingMeshInterface::base_getPremadeAabb(btVector3 * aabbMin, btVector3 * aabbMax) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n");
		}

		btVector3* aabbMin=(Luna< btVector3 >::check(L,2));
		btVector3* aabbMax=(Luna< btVector3 >::check(L,3));

		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btStridingMeshInterface::base_getPremadeAabb(btVector3 *, btVector3 *) const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		self->btStridingMeshInterface::getPremadeAabb(aabbMin, aabbMax);

		return 0;
	}

	// int btStridingMeshInterface::base_calculateSerializeBufferSize() const
	static int _bind_base_calculateSerializeBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_calculateSerializeBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btStridingMeshInterface::base_calculateSerializeBufferSize() const function, expected prototype:\nint btStridingMeshInterface::base_calculateSerializeBufferSize() const\nClass arguments details:\n");
		}


		btStridingMeshInterface* self=(Luna< btStridingMeshInterface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btStridingMeshInterface::base_calculateSerializeBufferSize() const. Got : '%s'",typeid(Luna< btStridingMeshInterface >::check(L,1)).name());
		}
		int lret = self->btStridingMeshInterface::calculateSerializeBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

btStridingMeshInterface* LunaTraits< btStridingMeshInterface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btStridingMeshInterface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btStridingMeshInterface::getLockedVertexIndexBase(unsigned char ** vertexbase, int & numverts, PHY_ScalarType & type, int & stride, unsigned char ** indexbase, int & indexstride, int & numfaces, PHY_ScalarType & indicestype, int subpart = 0)
	// void btStridingMeshInterface::getLockedReadOnlyVertexIndexBase(const unsigned char ** vertexbase, int & numverts, PHY_ScalarType & type, int & stride, const unsigned char ** indexbase, int & indexstride, int & numfaces, PHY_ScalarType & indicestype, int subpart = 0) const
	// void btStridingMeshInterface::unLockVertexBase(int subpart)
	// void btStridingMeshInterface::unLockReadOnlyVertexBase(int subpart) const
	// int btStridingMeshInterface::getNumSubParts() const
	// void btStridingMeshInterface::preallocateVertices(int numverts)
	// void btStridingMeshInterface::preallocateIndices(int numindices)
}

void LunaTraits< btStridingMeshInterface >::_bind_dtor(btStridingMeshInterface* obj) {
	delete obj;
}

const char LunaTraits< btStridingMeshInterface >::className[] = "btStridingMeshInterface";
const char LunaTraits< btStridingMeshInterface >::fullName[] = "btStridingMeshInterface";
const char LunaTraits< btStridingMeshInterface >::moduleName[] = "bullet";
const char* LunaTraits< btStridingMeshInterface >::parents[] = {0};
const int LunaTraits< btStridingMeshInterface >::hash = 56402633;
const int LunaTraits< btStridingMeshInterface >::uniqueIDs[] = {56402633,0};

luna_RegType LunaTraits< btStridingMeshInterface >::methods[] = {
	{"InternalProcessAllTriangles", &luna_wrapper_btStridingMeshInterface::_bind_InternalProcessAllTriangles},
	{"calculateAabbBruteForce", &luna_wrapper_btStridingMeshInterface::_bind_calculateAabbBruteForce},
	{"unLockVertexBase", &luna_wrapper_btStridingMeshInterface::_bind_unLockVertexBase},
	{"unLockReadOnlyVertexBase", &luna_wrapper_btStridingMeshInterface::_bind_unLockReadOnlyVertexBase},
	{"getNumSubParts", &luna_wrapper_btStridingMeshInterface::_bind_getNumSubParts},
	{"preallocateVertices", &luna_wrapper_btStridingMeshInterface::_bind_preallocateVertices},
	{"preallocateIndices", &luna_wrapper_btStridingMeshInterface::_bind_preallocateIndices},
	{"hasPremadeAabb", &luna_wrapper_btStridingMeshInterface::_bind_hasPremadeAabb},
	{"setPremadeAabb", &luna_wrapper_btStridingMeshInterface::_bind_setPremadeAabb},
	{"getPremadeAabb", &luna_wrapper_btStridingMeshInterface::_bind_getPremadeAabb},
	{"getScaling", &luna_wrapper_btStridingMeshInterface::_bind_getScaling},
	{"setScaling", &luna_wrapper_btStridingMeshInterface::_bind_setScaling},
	{"calculateSerializeBufferSize", &luna_wrapper_btStridingMeshInterface::_bind_calculateSerializeBufferSize},
	{"base_InternalProcessAllTriangles", &luna_wrapper_btStridingMeshInterface::_bind_base_InternalProcessAllTriangles},
	{"base_hasPremadeAabb", &luna_wrapper_btStridingMeshInterface::_bind_base_hasPremadeAabb},
	{"base_setPremadeAabb", &luna_wrapper_btStridingMeshInterface::_bind_base_setPremadeAabb},
	{"base_getPremadeAabb", &luna_wrapper_btStridingMeshInterface::_bind_base_getPremadeAabb},
	{"base_calculateSerializeBufferSize", &luna_wrapper_btStridingMeshInterface::_bind_base_calculateSerializeBufferSize},
	{"dynCast", &luna_wrapper_btStridingMeshInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_btStridingMeshInterface::_bind___eq},
	{"getTable", &luna_wrapper_btStridingMeshInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btStridingMeshInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btStridingMeshInterface >::enumValues[] = {
	{0,0}
};


