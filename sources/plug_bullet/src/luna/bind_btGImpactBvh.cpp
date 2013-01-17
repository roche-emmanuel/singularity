#include <plug_common.h>

class luna_wrapper_btGImpactBvh {
public:
	typedef Luna< btGImpactBvh > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28787205) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btGImpactBvh*)");
		}

		btGImpactBvh* rhs =(Luna< btGImpactBvh >::check(L,2));
		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
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

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btGImpactBvh");
		
		return luna_dynamicCast(L,converters,"btGImpactBvh",name);
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

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeBound(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNodeBound(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLeftNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRightNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEscapeNodeIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeTriangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,79712881) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_node_pointer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// btGImpactBvh::btGImpactBvh()
	static btGImpactBvh* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactBvh::btGImpactBvh() function, expected prototype:\nbtGImpactBvh::btGImpactBvh()\nClass arguments details:\n");
		}


		return new btGImpactBvh();
	}

	// btGImpactBvh::btGImpactBvh(btPrimitiveManagerBase * primitive_manager)
	static btGImpactBvh* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactBvh::btGImpactBvh(btPrimitiveManagerBase * primitive_manager) function, expected prototype:\nbtGImpactBvh::btGImpactBvh(btPrimitiveManagerBase * primitive_manager)\nClass arguments details:\narg 1 ID = 85935800\n");
		}

		btPrimitiveManagerBase* primitive_manager=(Luna< btPrimitiveManagerBase >::check(L,1));

		return new btGImpactBvh(primitive_manager);
	}

	// Overload binder for btGImpactBvh::btGImpactBvh
	static btGImpactBvh* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btGImpactBvh, cannot match any of the overloads for function btGImpactBvh:\n  btGImpactBvh()\n  btGImpactBvh(btPrimitiveManagerBase *)\n");
		return NULL;
	}


	// Function binds:
	// void btGImpactBvh::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactBvh::update() function, expected prototype:\nvoid btGImpactBvh::update()\nClass arguments details:\n");
		}


		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactBvh::update(). Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		self->update();

		return 0;
	}

	// void btGImpactBvh::buildSet()
	static int _bind_buildSet(lua_State *L) {
		if (!_lg_typecheck_buildSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactBvh::buildSet() function, expected prototype:\nvoid btGImpactBvh::buildSet()\nClass arguments details:\n");
		}


		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactBvh::buildSet(). Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		self->buildSet();

		return 0;
	}

	// bool btGImpactBvh::boxQuery(const btAABB & box, btAlignedObjectArray< int > & collided_results) const
	static int _bind_boxQuery(lua_State *L) {
		if (!_lg_typecheck_boxQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactBvh::boxQuery(const btAABB & box, btAlignedObjectArray< int > & collided_results) const function, expected prototype:\nbool btGImpactBvh::boxQuery(const btAABB & box, btAlignedObjectArray< int > & collided_results) const\nClass arguments details:\narg 1 ID = 14786052\narg 2 ID = [unknown]\n");
		}

		const btAABB* box_ptr=(Luna< btAABB >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in btGImpactBvh::boxQuery function");
		}
		const btAABB & box=*box_ptr;
		btAlignedObjectArray< int >* collided_results_ptr=(Luna< btAlignedObjectArray< int > >::check(L,3));
		if( !collided_results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg collided_results in btGImpactBvh::boxQuery function");
		}
		btAlignedObjectArray< int > & collided_results=*collided_results_ptr;

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactBvh::boxQuery(const btAABB &, btAlignedObjectArray< int > &) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		bool lret = self->boxQuery(box, collided_results);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactBvh::boxQueryTrans(const btAABB & box, const btTransform & transform, btAlignedObjectArray< int > & collided_results) const
	static int _bind_boxQueryTrans(lua_State *L) {
		if (!_lg_typecheck_boxQueryTrans(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactBvh::boxQueryTrans(const btAABB & box, const btTransform & transform, btAlignedObjectArray< int > & collided_results) const function, expected prototype:\nbool btGImpactBvh::boxQueryTrans(const btAABB & box, const btTransform & transform, btAlignedObjectArray< int > & collided_results) const\nClass arguments details:\narg 1 ID = 14786052\narg 2 ID = 13247377\narg 3 ID = [unknown]\n");
		}

		const btAABB* box_ptr=(Luna< btAABB >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in btGImpactBvh::boxQueryTrans function");
		}
		const btAABB & box=*box_ptr;
		const btTransform* transform_ptr=(Luna< btTransform >::check(L,3));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in btGImpactBvh::boxQueryTrans function");
		}
		const btTransform & transform=*transform_ptr;
		btAlignedObjectArray< int >* collided_results_ptr=(Luna< btAlignedObjectArray< int > >::check(L,4));
		if( !collided_results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg collided_results in btGImpactBvh::boxQueryTrans function");
		}
		btAlignedObjectArray< int > & collided_results=*collided_results_ptr;

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactBvh::boxQueryTrans(const btAABB &, const btTransform &, btAlignedObjectArray< int > &) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		bool lret = self->boxQueryTrans(box, transform, collided_results);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactBvh::rayQuery(const btVector3 & ray_dir, const btVector3 & ray_origin, btAlignedObjectArray< int > & collided_results) const
	static int _bind_rayQuery(lua_State *L) {
		if (!_lg_typecheck_rayQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactBvh::rayQuery(const btVector3 & ray_dir, const btVector3 & ray_origin, btAlignedObjectArray< int > & collided_results) const function, expected prototype:\nbool btGImpactBvh::rayQuery(const btVector3 & ray_dir, const btVector3 & ray_origin, btAlignedObjectArray< int > & collided_results) const\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\narg 3 ID = [unknown]\n");
		}

		const btVector3* ray_dir_ptr=(Luna< btVector3 >::check(L,2));
		if( !ray_dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ray_dir in btGImpactBvh::rayQuery function");
		}
		const btVector3 & ray_dir=*ray_dir_ptr;
		const btVector3* ray_origin_ptr=(Luna< btVector3 >::check(L,3));
		if( !ray_origin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ray_origin in btGImpactBvh::rayQuery function");
		}
		const btVector3 & ray_origin=*ray_origin_ptr;
		btAlignedObjectArray< int >* collided_results_ptr=(Luna< btAlignedObjectArray< int > >::check(L,4));
		if( !collided_results_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg collided_results in btGImpactBvh::rayQuery function");
		}
		btAlignedObjectArray< int > & collided_results=*collided_results_ptr;

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactBvh::rayQuery(const btVector3 &, const btVector3 &, btAlignedObjectArray< int > &) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		bool lret = self->rayQuery(ray_dir, ray_origin, collided_results);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactBvh::hasHierarchy() const
	static int _bind_hasHierarchy(lua_State *L) {
		if (!_lg_typecheck_hasHierarchy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactBvh::hasHierarchy() const function, expected prototype:\nbool btGImpactBvh::hasHierarchy() const\nClass arguments details:\n");
		}


		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactBvh::hasHierarchy() const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		bool lret = self->hasHierarchy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btGImpactBvh::isTrimesh() const
	static int _bind_isTrimesh(lua_State *L) {
		if (!_lg_typecheck_isTrimesh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactBvh::isTrimesh() const function, expected prototype:\nbool btGImpactBvh::isTrimesh() const\nClass arguments details:\n");
		}


		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactBvh::isTrimesh() const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		bool lret = self->isTrimesh();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btGImpactBvh::getNodeCount() const
	static int _bind_getNodeCount(lua_State *L) {
		if (!_lg_typecheck_getNodeCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactBvh::getNodeCount() const function, expected prototype:\nint btGImpactBvh::getNodeCount() const\nClass arguments details:\n");
		}


		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactBvh::getNodeCount() const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		int lret = self->getNodeCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool btGImpactBvh::isLeafNode(int nodeindex) const
	static int _bind_isLeafNode(lua_State *L) {
		if (!_lg_typecheck_isLeafNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactBvh::isLeafNode(int nodeindex) const function, expected prototype:\nbool btGImpactBvh::isLeafNode(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactBvh::isLeafNode(int) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		bool lret = self->isLeafNode(nodeindex);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btGImpactBvh::getNodeData(int nodeindex) const
	static int _bind_getNodeData(lua_State *L) {
		if (!_lg_typecheck_getNodeData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactBvh::getNodeData(int nodeindex) const function, expected prototype:\nint btGImpactBvh::getNodeData(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactBvh::getNodeData(int) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		int lret = self->getNodeData(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactBvh::getNodeBound(int nodeindex, btAABB & bound) const
	static int _bind_getNodeBound(lua_State *L) {
		if (!_lg_typecheck_getNodeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactBvh::getNodeBound(int nodeindex, btAABB & bound) const function, expected prototype:\nvoid btGImpactBvh::getNodeBound(int nodeindex, btAABB & bound) const\nClass arguments details:\narg 2 ID = 14786052\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);
		btAABB* bound_ptr=(Luna< btAABB >::check(L,3));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in btGImpactBvh::getNodeBound function");
		}
		btAABB & bound=*bound_ptr;

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactBvh::getNodeBound(int, btAABB &) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		self->getNodeBound(nodeindex, bound);

		return 0;
	}

	// void btGImpactBvh::setNodeBound(int nodeindex, const btAABB & bound)
	static int _bind_setNodeBound(lua_State *L) {
		if (!_lg_typecheck_setNodeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactBvh::setNodeBound(int nodeindex, const btAABB & bound) function, expected prototype:\nvoid btGImpactBvh::setNodeBound(int nodeindex, const btAABB & bound)\nClass arguments details:\narg 2 ID = 14786052\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);
		const btAABB* bound_ptr=(Luna< btAABB >::check(L,3));
		if( !bound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bound in btGImpactBvh::setNodeBound function");
		}
		const btAABB & bound=*bound_ptr;

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactBvh::setNodeBound(int, const btAABB &). Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		self->setNodeBound(nodeindex, bound);

		return 0;
	}

	// int btGImpactBvh::getLeftNode(int nodeindex) const
	static int _bind_getLeftNode(lua_State *L) {
		if (!_lg_typecheck_getLeftNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactBvh::getLeftNode(int nodeindex) const function, expected prototype:\nint btGImpactBvh::getLeftNode(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactBvh::getLeftNode(int) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		int lret = self->getLeftNode(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactBvh::getRightNode(int nodeindex) const
	static int _bind_getRightNode(lua_State *L) {
		if (!_lg_typecheck_getRightNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactBvh::getRightNode(int nodeindex) const function, expected prototype:\nint btGImpactBvh::getRightNode(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactBvh::getRightNode(int) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		int lret = self->getRightNode(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btGImpactBvh::getEscapeNodeIndex(int nodeindex) const
	static int _bind_getEscapeNodeIndex(lua_State *L) {
		if (!_lg_typecheck_getEscapeNodeIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactBvh::getEscapeNodeIndex(int nodeindex) const function, expected prototype:\nint btGImpactBvh::getEscapeNodeIndex(int nodeindex) const\nClass arguments details:\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactBvh::getEscapeNodeIndex(int) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		int lret = self->getEscapeNodeIndex(nodeindex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactBvh::getNodeTriangle(int nodeindex, btPrimitiveTriangle & triangle) const
	static int _bind_getNodeTriangle(lua_State *L) {
		if (!_lg_typecheck_getNodeTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactBvh::getNodeTriangle(int nodeindex, btPrimitiveTriangle & triangle) const function, expected prototype:\nvoid btGImpactBvh::getNodeTriangle(int nodeindex, btPrimitiveTriangle & triangle) const\nClass arguments details:\narg 2 ID = 79712881\n");
		}

		int nodeindex=(int)lua_tointeger(L,2);
		btPrimitiveTriangle* triangle_ptr=(Luna< btPrimitiveTriangle >::check(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactBvh::getNodeTriangle function");
		}
		btPrimitiveTriangle & triangle=*triangle_ptr;

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactBvh::getNodeTriangle(int, btPrimitiveTriangle &) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		self->getNodeTriangle(nodeindex, triangle);

		return 0;
	}

	// const GIM_BVH_TREE_NODE * btGImpactBvh::get_node_pointer(int index = 0) const
	static int _bind_get_node_pointer(lua_State *L) {
		if (!_lg_typecheck_get_node_pointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const GIM_BVH_TREE_NODE * btGImpactBvh::get_node_pointer(int index = 0) const function, expected prototype:\nconst GIM_BVH_TREE_NODE * btGImpactBvh::get_node_pointer(int index = 0) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int index=luatop>1 ? (int)lua_tointeger(L,2) : 0;

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const GIM_BVH_TREE_NODE * btGImpactBvh::get_node_pointer(int) const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		const GIM_BVH_TREE_NODE * lret = self->get_node_pointer(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< GIM_BVH_TREE_NODE >::push(L,lret,false);

		return 1;
	}

	// btAABB btGImpactBvh::getGlobalBox() const
	static int _bind_getGlobalBox(lua_State *L) {
		if (!_lg_typecheck_getGlobalBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAABB btGImpactBvh::getGlobalBox() const function, expected prototype:\nbtAABB btGImpactBvh::getGlobalBox() const\nClass arguments details:\n");
		}


		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAABB btGImpactBvh::getGlobalBox() const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		btAABB stack_lret = self->getGlobalBox();
		btAABB* lret = new btAABB(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAABB >::push(L,lret,true);

		return 1;
	}

	// void btGImpactBvh::setPrimitiveManager(btPrimitiveManagerBase * primitive_manager)
	static int _bind_setPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactBvh::setPrimitiveManager(btPrimitiveManagerBase * primitive_manager) function, expected prototype:\nvoid btGImpactBvh::setPrimitiveManager(btPrimitiveManagerBase * primitive_manager)\nClass arguments details:\narg 1 ID = 85935800\n");
		}

		btPrimitiveManagerBase* primitive_manager=(Luna< btPrimitiveManagerBase >::check(L,2));

		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactBvh::setPrimitiveManager(btPrimitiveManagerBase *). Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		self->setPrimitiveManager(primitive_manager);

		return 0;
	}

	// btPrimitiveManagerBase * btGImpactBvh::getPrimitiveManager() const
	static int _bind_getPrimitiveManager(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveManager(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPrimitiveManagerBase * btGImpactBvh::getPrimitiveManager() const function, expected prototype:\nbtPrimitiveManagerBase * btGImpactBvh::getPrimitiveManager() const\nClass arguments details:\n");
		}


		btGImpactBvh* self=(Luna< btGImpactBvh >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btPrimitiveManagerBase * btGImpactBvh::getPrimitiveManager() const. Got : '%s'",typeid(Luna< btGImpactBvh >::check(L,1)).name());
		}
		btPrimitiveManagerBase * lret = self->getPrimitiveManager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btPrimitiveManagerBase >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

btGImpactBvh* LunaTraits< btGImpactBvh >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGImpactBvh::_bind_ctor(L);
}

void LunaTraits< btGImpactBvh >::_bind_dtor(btGImpactBvh* obj) {
	delete obj;
}

const char LunaTraits< btGImpactBvh >::className[] = "btGImpactBvh";
const char LunaTraits< btGImpactBvh >::fullName[] = "btGImpactBvh";
const char LunaTraits< btGImpactBvh >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactBvh >::parents[] = {0};
const int LunaTraits< btGImpactBvh >::hash = 28787205;
const int LunaTraits< btGImpactBvh >::uniqueIDs[] = {28787205,0};

luna_RegType LunaTraits< btGImpactBvh >::methods[] = {
	{"update", &luna_wrapper_btGImpactBvh::_bind_update},
	{"buildSet", &luna_wrapper_btGImpactBvh::_bind_buildSet},
	{"boxQuery", &luna_wrapper_btGImpactBvh::_bind_boxQuery},
	{"boxQueryTrans", &luna_wrapper_btGImpactBvh::_bind_boxQueryTrans},
	{"rayQuery", &luna_wrapper_btGImpactBvh::_bind_rayQuery},
	{"hasHierarchy", &luna_wrapper_btGImpactBvh::_bind_hasHierarchy},
	{"isTrimesh", &luna_wrapper_btGImpactBvh::_bind_isTrimesh},
	{"getNodeCount", &luna_wrapper_btGImpactBvh::_bind_getNodeCount},
	{"isLeafNode", &luna_wrapper_btGImpactBvh::_bind_isLeafNode},
	{"getNodeData", &luna_wrapper_btGImpactBvh::_bind_getNodeData},
	{"getNodeBound", &luna_wrapper_btGImpactBvh::_bind_getNodeBound},
	{"setNodeBound", &luna_wrapper_btGImpactBvh::_bind_setNodeBound},
	{"getLeftNode", &luna_wrapper_btGImpactBvh::_bind_getLeftNode},
	{"getRightNode", &luna_wrapper_btGImpactBvh::_bind_getRightNode},
	{"getEscapeNodeIndex", &luna_wrapper_btGImpactBvh::_bind_getEscapeNodeIndex},
	{"getNodeTriangle", &luna_wrapper_btGImpactBvh::_bind_getNodeTriangle},
	{"get_node_pointer", &luna_wrapper_btGImpactBvh::_bind_get_node_pointer},
	{"getGlobalBox", &luna_wrapper_btGImpactBvh::_bind_getGlobalBox},
	{"setPrimitiveManager", &luna_wrapper_btGImpactBvh::_bind_setPrimitiveManager},
	{"getPrimitiveManager", &luna_wrapper_btGImpactBvh::_bind_getPrimitiveManager},
	{"dynCast", &luna_wrapper_btGImpactBvh::_bind_dynCast},
	{"__eq", &luna_wrapper_btGImpactBvh::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactBvh >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactBvh >::enumValues[] = {
	{0,0}
};


