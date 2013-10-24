#include <plug_common.h>

class luna_wrapper_btGImpactQuantizedBvh {
public:
	typedef Luna< btGImpactQuantizedBvh > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38624328) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGImpactQuantizedBvh*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btGImpactQuantizedBvh* rhs =(Luna< btGImpactQuantizedBvh >::check(L,2));
		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btGImpactQuantizedBvh* self= (btGImpactQuantizedBvh*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btGImpactQuantizedBvh >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38624328) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGImpactQuantizedBvh");
		
		return luna_dynamicCast(L,converters,"btGImpactQuantizedBvh",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85935800)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btPrimitiveManagerBase >::check(L,1)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_buildSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_boxQuery(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,41950488) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_boxQueryTrans(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14786052) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13247377) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,41950488) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rayQuery(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,41950488) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasHierarchy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isTrimesh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodeCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLeafNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeBound(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNodeBound(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLeftNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRightNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEscapeNodeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeTriangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,79712881) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_node_pointer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlobalBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85935800)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGImpactQuantizedBvh::btGImpactQuantizedBvh()
	static btGImpactQuantizedBvh* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactQuantizedBvh::btGImpactQuantizedBvh() function, expected prototype:\nbtGImpactQuantizedBvh::btGImpactQuantizedBvh()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btGImpactQuantizedBvh();
	}

	// btGImpactQuantizedBvh::btGImpactQuantizedBvh(btPrimitiveManagerBase * primitive_manager)
	static btGImpactQuantizedBvh* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btGImpactQuantizedBvh::btGImpactQuantizedBvh(btPrimitiveManagerBase * primitive_manager) function, expected prototype:\nbtGImpactQuantizedBvh::btGImpactQuantizedBvh(btPrimitiveManagerBase * primitive_manager)\nClass arguments details:\narg 1 ID = 85935800\n\n%s",luna_dumpStack(L).c_str());
		}

		btPrimitiveManagerBase* primitive_manager=(Luna< btPrimitiveManagerBase >::check(L,1));

		return new btGImpactQuantizedBvh(primitive_manager);
	}

	// Overload binder for btGImpactQuantizedBvh::btGImpactQuantizedBvh
	static btGImpactQuantizedBvh* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGImpactQuantizedBvh, cannot match any of the overloads for function btGImpactQuantizedBvh:\n  btGImpactQuantizedBvh()\n  btGImpactQuantizedBvh(btPrimitiveManagerBase *)\n");
		return NULL;
	}


	// Function binds:
	// void btGImpactQuantizedBvh::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactQuantizedBvh::update() function, expected prototype:\nvoid btGImpactQuantizedBvh::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactQuantizedBvh::update(). Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// void btGImpactQuantizedBvh::buildSet()
	static int _bind_buildSet(lua_State *L) {
		if (!_lg_typecheck_buildSet(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactQuantizedBvh::buildSet() function, expected prototype:\nvoid btGImpactQuantizedBvh::buildSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactQuantizedBvh::buildSet(). Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buildSet();

		return 0;
	}

	// bool btGImpactQuantizedBvh::boxQuery(const btAABB & box, btAlignedObjectArray< int > & collided_results) const
	static int _bind_boxQuery(lua_State *L) {
		if (!_lg_typecheck_boxQuery(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactQuantizedBvh::boxQuery(const btAABB & box, btAlignedObjectArray< int > & collided_results) const function, expected prototype:\nbool btGImpactQuantizedBvh::boxQuery(const btAABB & box, btAlignedObjectArray< int > & collided_results) const\nClass arguments details:\narg 1 ID = 14786052\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const btAABB* box_ptr=(Luna< btAABB >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in btGImpactQuantizedBvh::boxQuery function");
		}
		const btAABB & box=*box_ptr;
		btAlignedObjectArray< int >* collided_results_ptr=(Luna< btAlignedObjectArray< int > >::check(L,3));
		if( !collided_results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg collided_results in btGImpactQuantizedBvh::boxQuery function");
		}
		btAlignedObjectArray< int > & collided_results=*collided_results_ptr;

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactQuantizedBvh::boxQuery(const btAABB &, btAlignedObjectArray< int > &) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->boxQuery(box, collided_results);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactQuantizedBvh::boxQueryTrans(const btAABB & box, const btTransform & transform, btAlignedObjectArray< int > & collided_results) const
	static int _bind_boxQueryTrans(lua_State *L) {
		if (!_lg_typecheck_boxQueryTrans(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactQuantizedBvh::boxQueryTrans(const btAABB & box, const btTransform & transform, btAlignedObjectArray< int > & collided_results) const function, expected prototype:\nbool btGImpactQuantizedBvh::boxQueryTrans(const btAABB & box, const btTransform & transform, btAlignedObjectArray< int > & collided_results) const\nClass arguments details:\narg 1 ID = 14786052\narg 2 ID = 13247377\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const btAABB* box_ptr=(Luna< btAABB >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in btGImpactQuantizedBvh::boxQueryTrans function");
		}
		const btAABB & box=*box_ptr;
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btGImpactQuantizedBvh::boxQueryTrans function");
		}
		const btTransform & transform=*transform_ptr;
		btAlignedObjectArray< int >* collided_results_ptr=(Luna< btAlignedObjectArray< int > >::check(L,4));
		if( !collided_results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg collided_results in btGImpactQuantizedBvh::boxQueryTrans function");
		}
		btAlignedObjectArray< int > & collided_results=*collided_results_ptr;

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactQuantizedBvh::boxQueryTrans(const btAABB &, const btTransform &, btAlignedObjectArray< int > &) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->boxQueryTrans(box, transform, collided_results);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactQuantizedBvh::rayQuery(const btVector3 & ray_dir, const btVector3 & ray_origin, btAlignedObjectArray< int > & collided_results) const
	static int _bind_rayQuery(lua_State *L) {
		if (!_lg_typecheck_rayQuery(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactQuantizedBvh::rayQuery(const btVector3 & ray_dir, const btVector3 & ray_origin, btAlignedObjectArray< int > & collided_results) const function, expected prototype:\nbool btGImpactQuantizedBvh::rayQuery(const btVector3 & ray_dir, const btVector3 & ray_origin, btAlignedObjectArray< int > & collided_results) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* ray_dir_ptr=(Luna< btVector3 >::check(L,2));
		if( !ray_dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ray_dir in btGImpactQuantizedBvh::rayQuery function");
		}
		const btVector3 & ray_dir=*ray_dir_ptr;
		const btVector3* ray_origin_ptr=(Luna< btVector3 >::check(L,3));
		if( !ray_origin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ray_origin in btGImpactQuantizedBvh::rayQuery function");
		}
		const btVector3 & ray_origin=*ray_origin_ptr;
		btAlignedObjectArray< int >* collided_results_ptr=(Luna< btAlignedObjectArray< int > >::check(L,4));
		if( !collided_results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg collided_results in btGImpactQuantizedBvh::rayQuery function");
		}
		btAlignedObjectArray< int > & collided_results=*collided_results_ptr;

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactQuantizedBvh::rayQuery(const btVector3 &, const btVector3 &, btAlignedObjectArray< int > &) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->rayQuery(ray_dir, ray_origin, collided_results);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactQuantizedBvh::hasHierarchy() const
	static int _bind_hasHierarchy(lua_State *L) {
		if (!_lg_typecheck_hasHierarchy(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactQuantizedBvh::hasHierarchy() const function, expected prototype:\nbool btGImpactQuantizedBvh::hasHierarchy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactQuantizedBvh::hasHierarchy() const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasHierarchy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactQuantizedBvh::isTrimesh() const
	static int _bind_isTrimesh(lua_State *L) {
		if (!_lg_typecheck_isTrimesh(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactQuantizedBvh::isTrimesh() const function, expected prototype:\nbool btGImpactQuantizedBvh::isTrimesh() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactQuantizedBvh::isTrimesh() const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isTrimesh();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btGImpactQuantizedBvh::getNodeCount() const
	static int _bind_getNodeCount(lua_State *L) {
		if (!_lg_typecheck_getNodeCount(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactQuantizedBvh::getNodeCount() const function, expected prototype:\nint btGImpactQuantizedBvh::getNodeCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactQuantizedBvh::getNodeCount() const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNodeCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btGImpactQuantizedBvh::isLeafNode(int nodeindex) const
	static int _bind_isLeafNode(lua_State *L) {
		if (!_lg_typecheck_isLeafNode(L)) {
			luaL_error(L, "luna typecheck failed in bool btGImpactQuantizedBvh::isLeafNode(int nodeindex) const function, expected prototype:\nbool btGImpactQuantizedBvh::isLeafNode(int nodeindex) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btGImpactQuantizedBvh::isLeafNode(int) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isLeafNode(nodeindex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btGImpactQuantizedBvh::getNodeData(int nodeindex) const
	static int _bind_getNodeData(lua_State *L) {
		if (!_lg_typecheck_getNodeData(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactQuantizedBvh::getNodeData(int nodeindex) const function, expected prototype:\nint btGImpactQuantizedBvh::getNodeData(int nodeindex) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactQuantizedBvh::getNodeData(int) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getNodeData(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactQuantizedBvh::getNodeBound(int nodeindex, btAABB & bound) const
	static int _bind_getNodeBound(lua_State *L) {
		if (!_lg_typecheck_getNodeBound(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactQuantizedBvh::getNodeBound(int nodeindex, btAABB & bound) const function, expected prototype:\nvoid btGImpactQuantizedBvh::getNodeBound(int nodeindex, btAABB & bound) const\nClass arguments details:\narg 2 ID = 14786052\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeindex=(int)lua_tointeger(L,2);
		btAABB* bound_ptr=(Luna< btAABB >::check(L,3));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in btGImpactQuantizedBvh::getNodeBound function");
		}
		btAABB & bound=*bound_ptr;

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactQuantizedBvh::getNodeBound(int, btAABB &) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getNodeBound(nodeindex, bound);

		return 0;
	}

	// void btGImpactQuantizedBvh::setNodeBound(int nodeindex, const btAABB & bound)
	static int _bind_setNodeBound(lua_State *L) {
		if (!_lg_typecheck_setNodeBound(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactQuantizedBvh::setNodeBound(int nodeindex, const btAABB & bound) function, expected prototype:\nvoid btGImpactQuantizedBvh::setNodeBound(int nodeindex, const btAABB & bound)\nClass arguments details:\narg 2 ID = 14786052\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeindex=(int)lua_tointeger(L,2);
		const btAABB* bound_ptr=(Luna< btAABB >::check(L,3));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in btGImpactQuantizedBvh::setNodeBound function");
		}
		const btAABB & bound=*bound_ptr;

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactQuantizedBvh::setNodeBound(int, const btAABB &). Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNodeBound(nodeindex, bound);

		return 0;
	}

	// int btGImpactQuantizedBvh::getLeftNode(int nodeindex) const
	static int _bind_getLeftNode(lua_State *L) {
		if (!_lg_typecheck_getLeftNode(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactQuantizedBvh::getLeftNode(int nodeindex) const function, expected prototype:\nint btGImpactQuantizedBvh::getLeftNode(int nodeindex) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactQuantizedBvh::getLeftNode(int) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getLeftNode(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactQuantizedBvh::getRightNode(int nodeindex) const
	static int _bind_getRightNode(lua_State *L) {
		if (!_lg_typecheck_getRightNode(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactQuantizedBvh::getRightNode(int nodeindex) const function, expected prototype:\nint btGImpactQuantizedBvh::getRightNode(int nodeindex) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactQuantizedBvh::getRightNode(int) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getRightNode(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactQuantizedBvh::getEscapeNodeIndex(int nodeindex) const
	static int _bind_getEscapeNodeIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeNodeIndex(L)) {
			luaL_error(L, "luna typecheck failed in int btGImpactQuantizedBvh::getEscapeNodeIndex(int nodeindex) const function, expected prototype:\nint btGImpactQuantizedBvh::getEscapeNodeIndex(int nodeindex) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btGImpactQuantizedBvh::getEscapeNodeIndex(int) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getEscapeNodeIndex(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactQuantizedBvh::getNodeTriangle(int nodeindex, btPrimitiveTriangle & triangle) const
	static int _bind_getNodeTriangle(lua_State *L) {
		if (!_lg_typecheck_getNodeTriangle(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactQuantizedBvh::getNodeTriangle(int nodeindex, btPrimitiveTriangle & triangle) const function, expected prototype:\nvoid btGImpactQuantizedBvh::getNodeTriangle(int nodeindex, btPrimitiveTriangle & triangle) const\nClass arguments details:\narg 2 ID = 79712881\n\n%s",luna_dumpStack(L).c_str());
		}

		int nodeindex=(int)lua_tointeger(L,2);
		btPrimitiveTriangle* triangle_ptr=(Luna< btPrimitiveTriangle >::check(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactQuantizedBvh::getNodeTriangle function");
		}
		btPrimitiveTriangle & triangle=*triangle_ptr;

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactQuantizedBvh::getNodeTriangle(int, btPrimitiveTriangle &) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getNodeTriangle(nodeindex, triangle);

		return 0;
	}

	// const BT_QUANTIZED_BVH_NODE * btGImpactQuantizedBvh::get_node_pointer(int index = 0) const
	static int _bind_get_node_pointer(lua_State *L) {
		if (!_lg_typecheck_get_node_pointer(L)) {
			luaL_error(L, "luna typecheck failed in const BT_QUANTIZED_BVH_NODE * btGImpactQuantizedBvh::get_node_pointer(int index = 0) const function, expected prototype:\nconst BT_QUANTIZED_BVH_NODE * btGImpactQuantizedBvh::get_node_pointer(int index = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const BT_QUANTIZED_BVH_NODE * btGImpactQuantizedBvh::get_node_pointer(int) const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const BT_QUANTIZED_BVH_NODE * lret = self->get_node_pointer(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< BT_QUANTIZED_BVH_NODE >::push(L,lret,false);

		return 1;
	}

	// btAABB btGImpactQuantizedBvh::getGlobalBox() const
	static int _bind_getGlobalBox(lua_State *L) {
		if (!_lg_typecheck_getGlobalBox(L)) {
			luaL_error(L, "luna typecheck failed in btAABB btGImpactQuantizedBvh::getGlobalBox() const function, expected prototype:\nbtAABB btGImpactQuantizedBvh::getGlobalBox() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btAABB btGImpactQuantizedBvh::getGlobalBox() const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btAABB stack_lret = self->getGlobalBox();
		btAABB* lret = new btAABB(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAABB >::push(L,lret,true);

		return 1;
	}

	// void btGImpactQuantizedBvh::setPrimitiveManager(btPrimitiveManagerBase * primitive_manager)
	static int _bind_setPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveManager(L)) {
			luaL_error(L, "luna typecheck failed in void btGImpactQuantizedBvh::setPrimitiveManager(btPrimitiveManagerBase * primitive_manager) function, expected prototype:\nvoid btGImpactQuantizedBvh::setPrimitiveManager(btPrimitiveManagerBase * primitive_manager)\nClass arguments details:\narg 1 ID = 85935800\n\n%s",luna_dumpStack(L).c_str());
		}

		btPrimitiveManagerBase* primitive_manager=(Luna< btPrimitiveManagerBase >::check(L,2));

		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btGImpactQuantizedBvh::setPrimitiveManager(btPrimitiveManagerBase *). Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPrimitiveManager(primitive_manager);

		return 0;
	}

	// btPrimitiveManagerBase * btGImpactQuantizedBvh::getPrimitiveManager() const
	static int _bind_getPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveManager(L)) {
			luaL_error(L, "luna typecheck failed in btPrimitiveManagerBase * btGImpactQuantizedBvh::getPrimitiveManager() const function, expected prototype:\nbtPrimitiveManagerBase * btGImpactQuantizedBvh::getPrimitiveManager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btGImpactQuantizedBvh* self=(Luna< btGImpactQuantizedBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btPrimitiveManagerBase * btGImpactQuantizedBvh::getPrimitiveManager() const. Got : '%s'\n%s",typeid(Luna< btGImpactQuantizedBvh >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btPrimitiveManagerBase * lret = self->getPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPrimitiveManagerBase >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btGImpactQuantizedBvh* LunaTraits< btGImpactQuantizedBvh >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGImpactQuantizedBvh::_bind_ctor(L);
}

void LunaTraits< btGImpactQuantizedBvh >::_bind_dtor(btGImpactQuantizedBvh* obj) {
	delete obj;
}

const char LunaTraits< btGImpactQuantizedBvh >::className[] = "btGImpactQuantizedBvh";
const char LunaTraits< btGImpactQuantizedBvh >::fullName[] = "btGImpactQuantizedBvh";
const char LunaTraits< btGImpactQuantizedBvh >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactQuantizedBvh >::parents[] = {0};
const int LunaTraits< btGImpactQuantizedBvh >::hash = 38624328;
const int LunaTraits< btGImpactQuantizedBvh >::uniqueIDs[] = {38624328,0};

luna_RegType LunaTraits< btGImpactQuantizedBvh >::methods[] = {
	{"update", &luna_wrapper_btGImpactQuantizedBvh::_bind_update},
	{"buildSet", &luna_wrapper_btGImpactQuantizedBvh::_bind_buildSet},
	{"boxQuery", &luna_wrapper_btGImpactQuantizedBvh::_bind_boxQuery},
	{"boxQueryTrans", &luna_wrapper_btGImpactQuantizedBvh::_bind_boxQueryTrans},
	{"rayQuery", &luna_wrapper_btGImpactQuantizedBvh::_bind_rayQuery},
	{"hasHierarchy", &luna_wrapper_btGImpactQuantizedBvh::_bind_hasHierarchy},
	{"isTrimesh", &luna_wrapper_btGImpactQuantizedBvh::_bind_isTrimesh},
	{"getNodeCount", &luna_wrapper_btGImpactQuantizedBvh::_bind_getNodeCount},
	{"isLeafNode", &luna_wrapper_btGImpactQuantizedBvh::_bind_isLeafNode},
	{"getNodeData", &luna_wrapper_btGImpactQuantizedBvh::_bind_getNodeData},
	{"getNodeBound", &luna_wrapper_btGImpactQuantizedBvh::_bind_getNodeBound},
	{"setNodeBound", &luna_wrapper_btGImpactQuantizedBvh::_bind_setNodeBound},
	{"getLeftNode", &luna_wrapper_btGImpactQuantizedBvh::_bind_getLeftNode},
	{"getRightNode", &luna_wrapper_btGImpactQuantizedBvh::_bind_getRightNode},
	{"getEscapeNodeIndex", &luna_wrapper_btGImpactQuantizedBvh::_bind_getEscapeNodeIndex},
	{"getNodeTriangle", &luna_wrapper_btGImpactQuantizedBvh::_bind_getNodeTriangle},
	{"get_node_pointer", &luna_wrapper_btGImpactQuantizedBvh::_bind_get_node_pointer},
	{"getGlobalBox", &luna_wrapper_btGImpactQuantizedBvh::_bind_getGlobalBox},
	{"setPrimitiveManager", &luna_wrapper_btGImpactQuantizedBvh::_bind_setPrimitiveManager},
	{"getPrimitiveManager", &luna_wrapper_btGImpactQuantizedBvh::_bind_getPrimitiveManager},
	{"dynCast", &luna_wrapper_btGImpactQuantizedBvh::_bind_dynCast},
	{"__eq", &luna_wrapper_btGImpactQuantizedBvh::_bind___eq},
	{"fromVoid", &luna_wrapper_btGImpactQuantizedBvh::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btGImpactQuantizedBvh::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactQuantizedBvh >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactQuantizedBvh >::enumValues[] = {
	{0,0}
};


