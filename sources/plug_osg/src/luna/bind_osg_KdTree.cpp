#include <plug_common.h>

class luna_wrapper_osg_KdTree {
public:
	typedef Luna< osg::KdTree > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::KdTree* ptr= dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::KdTree >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91252552) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72782769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodes_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodes_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7204710)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addTriangle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,43117328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTriangle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTriangle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTriangles_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangles_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::KdTree::KdTree()
	static osg::KdTree* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdTree() function, expected prototype:\nosg::KdTree::KdTree()\nClass arguments details:\n");
		}


		return new osg::KdTree();
	}

	// osg::KdTree::KdTree(const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::KdTree* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdTree(const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::KdTree::KdTree(const osg::KdTree & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::KdTree* rhs_ptr=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTree::KdTree function");
		}
		const osg::KdTree & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::KdTree::KdTree function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::KdTree(rhs, copyop);
	}

	// Overload binder for osg::KdTree::KdTree
	static osg::KdTree* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function KdTree, cannot match any of the overloads for function KdTree:\n  KdTree()\n  KdTree(const osg::KdTree &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::KdTree::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::KdTree::cloneType() const function, expected prototype:\nosg::Object * osg::KdTree::cloneType() const\nClass arguments details:\n");
		}


		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::KdTree::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::KdTree::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::KdTree::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::KdTree::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTree::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::KdTree::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::KdTree::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::KdTree::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::KdTree::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::KdTree::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::KdTree::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTree::libraryName() const function, expected prototype:\nconst char * osg::KdTree::libraryName() const\nClass arguments details:\n");
		}


		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTree::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::KdTree::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTree::className() const function, expected prototype:\nconst char * osg::KdTree::className() const\nClass arguments details:\n");
		}


		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTree::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::KdTree::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTree::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::KdTree::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTree::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTree::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::KdTree::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTree::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::KdTree::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTree::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTree::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::KdTree::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// bool osg::KdTree::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::KdTree::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const function, expected prototype:\nbool osg::KdTree::intersect(const osg::Vec3d & start, const osg::Vec3d & end, osg::KdTree::LineSegmentIntersections & intersections) const\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 91252552\n");
		}

		const osg::Vec3d* start_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in osg::KdTree::intersect function");
		}
		const osg::Vec3d & start=*start_ptr;
		const osg::Vec3d* end_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in osg::KdTree::intersect function");
		}
		const osg::Vec3d & end=*end_ptr;
		osg::KdTree::LineSegmentIntersections* intersections_ptr=(Luna< osg::KdTree::LineSegmentIntersections >::check(L,4));
		if( !intersections_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersections in osg::KdTree::intersect function");
		}
		osg::KdTree::LineSegmentIntersections & intersections=*intersections_ptr;

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::KdTree::intersect(const osg::Vec3d &, const osg::Vec3d &, osg::KdTree::LineSegmentIntersections &) const");
		}
		bool lret = self->intersect(start, end, intersections);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::KdTree::addNode(const osg::KdTree::KdNode & node)
	static int _bind_addNode(lua_State *L) {
		if (!_lg_typecheck_addNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::KdTree::addNode(const osg::KdTree::KdNode & node) function, expected prototype:\nint osg::KdTree::addNode(const osg::KdTree::KdNode & node)\nClass arguments details:\narg 1 ID = 72782769\n");
		}

		const osg::KdTree::KdNode* node_ptr=(Luna< osg::KdTree::KdNode >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::KdTree::addNode function");
		}
		const osg::KdTree::KdNode & node=*node_ptr;

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::KdTree::addNode(const osg::KdTree::KdNode &)");
		}
		int lret = self->addNode(node);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum)
	static int _bind_getNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum) function, expected prototype:\nosg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum)\nClass arguments details:\n");
		}

		int nodeNum=(int)lua_tointeger(L,2);

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTree::KdNode & osg::KdTree::getNode(int)");
		}
		const osg::KdTree::KdNode* lret = &self->getNode(nodeNum);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::KdNode >::push(L,lret,false);

		return 1;
	}

	// const osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum) const
	static int _bind_getNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum) const function, expected prototype:\nconst osg::KdTree::KdNode & osg::KdTree::getNode(int nodeNum) const\nClass arguments details:\n");
		}

		int nodeNum=(int)lua_tointeger(L,2);

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::KdTree::KdNode & osg::KdTree::getNode(int) const");
		}
		const osg::KdTree::KdNode* lret = &self->getNode(nodeNum);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::KdNode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::KdTree::getNode
	static int _bind_getNode(lua_State *L) {
		if (_lg_typecheck_getNode_overload_1(L)) return _bind_getNode_overload_1(L);
		if (_lg_typecheck_getNode_overload_2(L)) return _bind_getNode_overload_2(L);

		luaL_error(L, "error in function getNode, cannot match any of the overloads for function getNode:\n  getNode(int)\n  getNode(int)\n");
		return 0;
	}

	// osg::KdTree::KdNodeList & osg::KdTree::getNodes()
	static int _bind_getNodes_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNodes_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::KdNodeList & osg::KdTree::getNodes() function, expected prototype:\nosg::KdTree::KdNodeList & osg::KdTree::getNodes()\nClass arguments details:\n");
		}


		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTree::KdNodeList & osg::KdTree::getNodes()");
		}
		const osg::KdTree::KdNodeList* lret = &self->getNodes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::KdNodeList >::push(L,lret,false);

		return 1;
	}

	// const osg::KdTree::KdNodeList & osg::KdTree::getNodes() const
	static int _bind_getNodes_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNodes_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::KdTree::KdNodeList & osg::KdTree::getNodes() const function, expected prototype:\nconst osg::KdTree::KdNodeList & osg::KdTree::getNodes() const\nClass arguments details:\n");
		}


		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::KdTree::KdNodeList & osg::KdTree::getNodes() const");
		}
		const osg::KdTree::KdNodeList* lret = &self->getNodes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::KdNodeList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::KdTree::getNodes
	static int _bind_getNodes(lua_State *L) {
		if (_lg_typecheck_getNodes_overload_1(L)) return _bind_getNodes_overload_1(L);
		if (_lg_typecheck_getNodes_overload_2(L)) return _bind_getNodes_overload_2(L);

		luaL_error(L, "error in function getNodes, cannot match any of the overloads for function getNodes:\n  getNodes()\n  getNodes()\n");
		return 0;
	}

	// void osg::KdTree::setVertices(osg::Vec3Array * vertices)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTree::setVertices(osg::Vec3Array * vertices) function, expected prototype:\nvoid osg::KdTree::setVertices(osg::Vec3Array * vertices)\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		osg::Vec3Array* vertices=(Luna< osg::Vec3Array >::check(L,2));

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTree::setVertices(osg::Vec3Array *)");
		}
		self->setVertices(vertices);

		return 0;
	}

	// const osg::Vec3Array * osg::KdTree::getVertices() const
	static int _bind_getVertices(lua_State *L) {
		if (!_lg_typecheck_getVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3Array * osg::KdTree::getVertices() const function, expected prototype:\nconst osg::Vec3Array * osg::KdTree::getVertices() const\nClass arguments details:\n");
		}


		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3Array * osg::KdTree::getVertices() const");
		}
		const osg::Vec3Array * lret = self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::KdTree::addTriangle(const osg::KdTree::Triangle & tri)
	static int _bind_addTriangle(lua_State *L) {
		if (!_lg_typecheck_addTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::addTriangle(const osg::KdTree::Triangle & tri) function, expected prototype:\nunsigned int osg::KdTree::addTriangle(const osg::KdTree::Triangle & tri)\nClass arguments details:\narg 1 ID = 43117328\n");
		}

		const osg::KdTree::Triangle* tri_ptr=(Luna< osg::KdTree::Triangle >::check(L,2));
		if( !tri_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tri in osg::KdTree::addTriangle function");
		}
		const osg::KdTree::Triangle & tri=*tri_ptr;

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::addTriangle(const osg::KdTree::Triangle &)");
		}
		unsigned int lret = self->addTriangle(tri);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i)
	static int _bind_getTriangle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTriangle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i) function, expected prototype:\nosg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int)");
		}
		const osg::KdTree::Triangle* lret = &self->getTriangle(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::Triangle >::push(L,lret,false);

		return 1;
	}

	// const osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i) const
	static int _bind_getTriangle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTriangle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i) const function, expected prototype:\nconst osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::KdTree::Triangle & osg::KdTree::getTriangle(unsigned int) const");
		}
		const osg::KdTree::Triangle* lret = &self->getTriangle(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::Triangle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::KdTree::getTriangle
	static int _bind_getTriangle(lua_State *L) {
		if (_lg_typecheck_getTriangle_overload_1(L)) return _bind_getTriangle_overload_1(L);
		if (_lg_typecheck_getTriangle_overload_2(L)) return _bind_getTriangle_overload_2(L);

		luaL_error(L, "error in function getTriangle, cannot match any of the overloads for function getTriangle:\n  getTriangle(unsigned int)\n  getTriangle(unsigned int)\n");
		return 0;
	}

	// osg::KdTree::TriangleList & osg::KdTree::getTriangles()
	static int _bind_getTriangles_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTree::TriangleList & osg::KdTree::getTriangles() function, expected prototype:\nosg::KdTree::TriangleList & osg::KdTree::getTriangles()\nClass arguments details:\n");
		}


		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTree::TriangleList & osg::KdTree::getTriangles()");
		}
		const osg::KdTree::TriangleList* lret = &self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::TriangleList >::push(L,lret,false);

		return 1;
	}

	// const osg::KdTree::TriangleList & osg::KdTree::getTriangles() const
	static int _bind_getTriangles_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::KdTree::TriangleList & osg::KdTree::getTriangles() const function, expected prototype:\nconst osg::KdTree::TriangleList & osg::KdTree::getTriangles() const\nClass arguments details:\n");
		}


		osg::KdTree* self=dynamic_cast< osg::KdTree* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::KdTree::TriangleList & osg::KdTree::getTriangles() const");
		}
		const osg::KdTree::TriangleList* lret = &self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTree::TriangleList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::KdTree::getTriangles
	static int _bind_getTriangles(lua_State *L) {
		if (_lg_typecheck_getTriangles_overload_1(L)) return _bind_getTriangles_overload_1(L);
		if (_lg_typecheck_getTriangles_overload_2(L)) return _bind_getTriangles_overload_2(L);

		luaL_error(L, "error in function getTriangles, cannot match any of the overloads for function getTriangles:\n  getTriangles()\n  getTriangles()\n");
		return 0;
	}


	// Operator binds:

};

osg::KdTree* LunaTraits< osg::KdTree >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree::_bind_ctor(L);
}

void LunaTraits< osg::KdTree >::_bind_dtor(osg::KdTree* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::KdTree >::className[] = "KdTree";
const char LunaTraits< osg::KdTree >::fullName[] = "osg::KdTree";
const char LunaTraits< osg::KdTree >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::KdTree >::hash = 45168615;
const int LunaTraits< osg::KdTree >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::KdTree >::methods[] = {
	{"cloneType", &luna_wrapper_osg_KdTree::_bind_cloneType},
	{"clone", &luna_wrapper_osg_KdTree::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_KdTree::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_KdTree::_bind_libraryName},
	{"className", &luna_wrapper_osg_KdTree::_bind_className},
	{"accept", &luna_wrapper_osg_KdTree::_bind_accept},
	{"intersect", &luna_wrapper_osg_KdTree::_bind_intersect},
	{"addNode", &luna_wrapper_osg_KdTree::_bind_addNode},
	{"getNode", &luna_wrapper_osg_KdTree::_bind_getNode},
	{"getNodes", &luna_wrapper_osg_KdTree::_bind_getNodes},
	{"setVertices", &luna_wrapper_osg_KdTree::_bind_setVertices},
	{"getVertices", &luna_wrapper_osg_KdTree::_bind_getVertices},
	{"addTriangle", &luna_wrapper_osg_KdTree::_bind_addTriangle},
	{"getTriangle", &luna_wrapper_osg_KdTree::_bind_getTriangle},
	{"getTriangles", &luna_wrapper_osg_KdTree::_bind_getTriangles},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_KdTree::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree >::enumValues[] = {
	{0,0}
};


