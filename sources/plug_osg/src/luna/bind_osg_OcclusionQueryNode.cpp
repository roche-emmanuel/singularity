#include <plug_common.h>

class luna_wrapper_osg_OcclusionQueryNode {
public:
	typedef Luna< osg::OcclusionQueryNode > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::OcclusionQueryNode* ptr= dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::OcclusionQueryNode >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setQueriesEnabled(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQueriesEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVisibilityThreshold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibilityThreshold(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setQueryFrameCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQueryFrameCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDebugDisplay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDebugDisplay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setQueryStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getQueryStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getQueryStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDebugStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDebugStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDebugStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPassed_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPassed_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverseQuery(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverseDebug(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedQueryObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedQueryObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::OcclusionQueryNode::OcclusionQueryNode()
	static osg::OcclusionQueryNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::OcclusionQueryNode::OcclusionQueryNode() function, expected prototype:\nosg::OcclusionQueryNode::OcclusionQueryNode()\nClass arguments details:\n");
		}


		return new osg::OcclusionQueryNode();
	}

	// osg::OcclusionQueryNode::OcclusionQueryNode(const osg::OcclusionQueryNode & oqn, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::OcclusionQueryNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::OcclusionQueryNode::OcclusionQueryNode(const osg::OcclusionQueryNode & oqn, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::OcclusionQueryNode::OcclusionQueryNode(const osg::OcclusionQueryNode & oqn, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::OcclusionQueryNode* oqn_ptr=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if( !oqn_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oqn in osg::OcclusionQueryNode::OcclusionQueryNode function");
		}
		const osg::OcclusionQueryNode & oqn=*oqn_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OcclusionQueryNode::OcclusionQueryNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::OcclusionQueryNode(oqn, copyop);
	}

	// Overload binder for osg::OcclusionQueryNode::OcclusionQueryNode
	static osg::OcclusionQueryNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function OcclusionQueryNode, cannot match any of the overloads for function OcclusionQueryNode:\n  OcclusionQueryNode()\n  OcclusionQueryNode(const osg::OcclusionQueryNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::OcclusionQueryNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OcclusionQueryNode::cloneType() const function, expected prototype:\nosg::Object * osg::OcclusionQueryNode::cloneType() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::OcclusionQueryNode::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::OcclusionQueryNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OcclusionQueryNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::OcclusionQueryNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OcclusionQueryNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::OcclusionQueryNode::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::OcclusionQueryNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::OcclusionQueryNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::OcclusionQueryNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::OcclusionQueryNode::className() const function, expected prototype:\nconst char * osg::OcclusionQueryNode::className() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::OcclusionQueryNode::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::OcclusionQueryNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::OcclusionQueryNode::libraryName() const function, expected prototype:\nconst char * osg::OcclusionQueryNode::libraryName() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::OcclusionQueryNode::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::OcclusionQueryNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OcclusionQueryNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// osg::BoundingSpheref osg::OcclusionQueryNode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSpheref osg::OcclusionQueryNode::computeBound() const function, expected prototype:\nosg::BoundingSpheref osg::OcclusionQueryNode::computeBound() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSpheref osg::OcclusionQueryNode::computeBound() const");
		}
		osg::BoundingSpheref stack_lret = self->computeBound();
		osg::BoundingSpheref* lret = new osg::BoundingSpheref(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSpheref >::push(L,lret,true);

		return 1;
	}

	// void osg::OcclusionQueryNode::releaseGLObjects(osg::State *  = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::releaseGLObjects(osg::State *  = 0) const function, expected prototype:\nvoid osg::OcclusionQueryNode::releaseGLObjects(osg::State *  = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// void osg::OcclusionQueryNode::setQueriesEnabled(bool enable = true)
	static int _bind_setQueriesEnabled(lua_State *L) {
		if (!_lg_typecheck_setQueriesEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setQueriesEnabled(bool enable = true) function, expected prototype:\nvoid osg::OcclusionQueryNode::setQueriesEnabled(bool enable = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setQueriesEnabled(bool)");
		}
		self->setQueriesEnabled(enable);

		return 0;
	}

	// bool osg::OcclusionQueryNode::getQueriesEnabled() const
	static int _bind_getQueriesEnabled(lua_State *L) {
		if (!_lg_typecheck_getQueriesEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::getQueriesEnabled() const function, expected prototype:\nbool osg::OcclusionQueryNode::getQueriesEnabled() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::getQueriesEnabled() const");
		}
		bool lret = self->getQueriesEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::OcclusionQueryNode::setVisibilityThreshold(unsigned int pixels)
	static int _bind_setVisibilityThreshold(lua_State *L) {
		if (!_lg_typecheck_setVisibilityThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setVisibilityThreshold(unsigned int pixels) function, expected prototype:\nvoid osg::OcclusionQueryNode::setVisibilityThreshold(unsigned int pixels)\nClass arguments details:\n");
		}

		unsigned int pixels=(unsigned int)lua_tointeger(L,2);

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setVisibilityThreshold(unsigned int)");
		}
		self->setVisibilityThreshold(pixels);

		return 0;
	}

	// unsigned int osg::OcclusionQueryNode::getVisibilityThreshold() const
	static int _bind_getVisibilityThreshold(lua_State *L) {
		if (!_lg_typecheck_getVisibilityThreshold(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::OcclusionQueryNode::getVisibilityThreshold() const function, expected prototype:\nunsigned int osg::OcclusionQueryNode::getVisibilityThreshold() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::OcclusionQueryNode::getVisibilityThreshold() const");
		}
		unsigned int lret = self->getVisibilityThreshold();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::OcclusionQueryNode::setQueryFrameCount(unsigned int frames)
	static int _bind_setQueryFrameCount(lua_State *L) {
		if (!_lg_typecheck_setQueryFrameCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setQueryFrameCount(unsigned int frames) function, expected prototype:\nvoid osg::OcclusionQueryNode::setQueryFrameCount(unsigned int frames)\nClass arguments details:\n");
		}

		unsigned int frames=(unsigned int)lua_tointeger(L,2);

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setQueryFrameCount(unsigned int)");
		}
		self->setQueryFrameCount(frames);

		return 0;
	}

	// unsigned int osg::OcclusionQueryNode::getQueryFrameCount() const
	static int _bind_getQueryFrameCount(lua_State *L) {
		if (!_lg_typecheck_getQueryFrameCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::OcclusionQueryNode::getQueryFrameCount() const function, expected prototype:\nunsigned int osg::OcclusionQueryNode::getQueryFrameCount() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::OcclusionQueryNode::getQueryFrameCount() const");
		}
		unsigned int lret = self->getQueryFrameCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::OcclusionQueryNode::setDebugDisplay(bool enable)
	static int _bind_setDebugDisplay(lua_State *L) {
		if (!_lg_typecheck_setDebugDisplay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setDebugDisplay(bool enable) function, expected prototype:\nvoid osg::OcclusionQueryNode::setDebugDisplay(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setDebugDisplay(bool)");
		}
		self->setDebugDisplay(enable);

		return 0;
	}

	// bool osg::OcclusionQueryNode::getDebugDisplay() const
	static int _bind_getDebugDisplay(lua_State *L) {
		if (!_lg_typecheck_getDebugDisplay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::getDebugDisplay() const function, expected prototype:\nbool osg::OcclusionQueryNode::getDebugDisplay() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::getDebugDisplay() const");
		}
		bool lret = self->getDebugDisplay();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::OcclusionQueryNode::setQueryStateSet(osg::StateSet * ss)
	static int _bind_setQueryStateSet(lua_State *L) {
		if (!_lg_typecheck_setQueryStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setQueryStateSet(osg::StateSet * ss) function, expected prototype:\nvoid osg::OcclusionQueryNode::setQueryStateSet(osg::StateSet * ss)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* ss=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setQueryStateSet(osg::StateSet *)");
		}
		self->setQueryStateSet(ss);

		return 0;
	}

	// osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet()
	static int _bind_getQueryStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getQueryStateSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() function, expected prototype:\nosg::StateSet * osg::OcclusionQueryNode::getQueryStateSet()\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet()");
		}
		osg::StateSet * lret = self->getQueryStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() const
	static int _bind_getQueryStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getQueryStateSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() const function, expected prototype:\nconst osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::StateSet * osg::OcclusionQueryNode::getQueryStateSet() const");
		}
		const osg::StateSet * lret = self->getQueryStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::getQueryStateSet
	static int _bind_getQueryStateSet(lua_State *L) {
		if (_lg_typecheck_getQueryStateSet_overload_1(L)) return _bind_getQueryStateSet_overload_1(L);
		if (_lg_typecheck_getQueryStateSet_overload_2(L)) return _bind_getQueryStateSet_overload_2(L);

		luaL_error(L, "error in function getQueryStateSet, cannot match any of the overloads for function getQueryStateSet:\n  getQueryStateSet()\n  getQueryStateSet()\n");
		return 0;
	}

	// void osg::OcclusionQueryNode::setDebugStateSet(osg::StateSet * ss)
	static int _bind_setDebugStateSet(lua_State *L) {
		if (!_lg_typecheck_setDebugStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::setDebugStateSet(osg::StateSet * ss) function, expected prototype:\nvoid osg::OcclusionQueryNode::setDebugStateSet(osg::StateSet * ss)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* ss=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::setDebugStateSet(osg::StateSet *)");
		}
		self->setDebugStateSet(ss);

		return 0;
	}

	// osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet()
	static int _bind_getDebugStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDebugStateSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() function, expected prototype:\nosg::StateSet * osg::OcclusionQueryNode::getDebugStateSet()\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet()");
		}
		osg::StateSet * lret = self->getDebugStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() const
	static int _bind_getDebugStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDebugStateSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() const function, expected prototype:\nconst osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::StateSet * osg::OcclusionQueryNode::getDebugStateSet() const");
		}
		const osg::StateSet * lret = self->getDebugStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::getDebugStateSet
	static int _bind_getDebugStateSet(lua_State *L) {
		if (_lg_typecheck_getDebugStateSet_overload_1(L)) return _bind_getDebugStateSet_overload_1(L);
		if (_lg_typecheck_getDebugStateSet_overload_2(L)) return _bind_getDebugStateSet_overload_2(L);

		luaL_error(L, "error in function getDebugStateSet, cannot match any of the overloads for function getDebugStateSet:\n  getDebugStateSet()\n  getDebugStateSet()\n");
		return 0;
	}

	// bool osg::OcclusionQueryNode::getPassed() const
	static int _bind_getPassed_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPassed_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::getPassed() const function, expected prototype:\nbool osg::OcclusionQueryNode::getPassed() const\nClass arguments details:\n");
		}


		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::getPassed() const");
		}
		bool lret = self->getPassed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::OcclusionQueryNode::getPassed(const osg::Camera * camera, osg::NodeVisitor & nv)
	static int _bind_getPassed_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPassed_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::OcclusionQueryNode::getPassed(const osg::Camera * camera, osg::NodeVisitor & nv) function, expected prototype:\nbool osg::OcclusionQueryNode::getPassed(const osg::Camera * camera, osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::Camera* camera=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::getPassed function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::OcclusionQueryNode::getPassed(const osg::Camera *, osg::NodeVisitor &)");
		}
		bool lret = self->getPassed(camera, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::OcclusionQueryNode::getPassed
	static int _bind_getPassed(lua_State *L) {
		if (_lg_typecheck_getPassed_overload_1(L)) return _bind_getPassed_overload_1(L);
		if (_lg_typecheck_getPassed_overload_2(L)) return _bind_getPassed_overload_2(L);

		luaL_error(L, "error in function getPassed, cannot match any of the overloads for function getPassed:\n  getPassed()\n  getPassed(const osg::Camera *, osg::NodeVisitor &)\n");
		return 0;
	}

	// void osg::OcclusionQueryNode::traverseQuery(const osg::Camera * camera, osg::NodeVisitor & nv)
	static int _bind_traverseQuery(lua_State *L) {
		if (!_lg_typecheck_traverseQuery(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::traverseQuery(const osg::Camera * camera, osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OcclusionQueryNode::traverseQuery(const osg::Camera * camera, osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osg::Camera* camera=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::traverseQuery function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::traverseQuery(const osg::Camera *, osg::NodeVisitor &)");
		}
		self->traverseQuery(camera, nv);

		return 0;
	}

	// void osg::OcclusionQueryNode::traverseDebug(osg::NodeVisitor & nv)
	static int _bind_traverseDebug(lua_State *L) {
		if (!_lg_typecheck_traverseDebug(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OcclusionQueryNode::traverseDebug(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OcclusionQueryNode::traverseDebug(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OcclusionQueryNode::traverseDebug function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OcclusionQueryNode* self=dynamic_cast< osg::OcclusionQueryNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OcclusionQueryNode::traverseDebug(osg::NodeVisitor &)");
		}
		self->traverseDebug(nv);

		return 0;
	}

	// static void osg::OcclusionQueryNode::flushDeletedQueryObjects(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedQueryObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedQueryObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::OcclusionQueryNode::flushDeletedQueryObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::OcclusionQueryNode::flushDeletedQueryObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::OcclusionQueryNode::flushDeletedQueryObjects(contextID, currentTime, availableTime);

		return 0;
	}

	// static void osg::OcclusionQueryNode::discardDeletedQueryObjects(unsigned int contextID)
	static int _bind_discardDeletedQueryObjects(lua_State *L) {
		if (!_lg_typecheck_discardDeletedQueryObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::OcclusionQueryNode::discardDeletedQueryObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::OcclusionQueryNode::discardDeletedQueryObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::OcclusionQueryNode::discardDeletedQueryObjects(contextID);

		return 0;
	}


	// Operator binds:

};

osg::OcclusionQueryNode* LunaTraits< osg::OcclusionQueryNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_OcclusionQueryNode::_bind_ctor(L);
}

void LunaTraits< osg::OcclusionQueryNode >::_bind_dtor(osg::OcclusionQueryNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::OcclusionQueryNode >::className[] = "OcclusionQueryNode";
const char LunaTraits< osg::OcclusionQueryNode >::fullName[] = "osg::OcclusionQueryNode";
const char LunaTraits< osg::OcclusionQueryNode >::moduleName[] = "osg";
const char* LunaTraits< osg::OcclusionQueryNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::OcclusionQueryNode >::hash = 36588064;
const int LunaTraits< osg::OcclusionQueryNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::OcclusionQueryNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_OcclusionQueryNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_OcclusionQueryNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_OcclusionQueryNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_OcclusionQueryNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_OcclusionQueryNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_OcclusionQueryNode::_bind_accept},
	{"computeBound", &luna_wrapper_osg_OcclusionQueryNode::_bind_computeBound},
	{"releaseGLObjects", &luna_wrapper_osg_OcclusionQueryNode::_bind_releaseGLObjects},
	{"setQueriesEnabled", &luna_wrapper_osg_OcclusionQueryNode::_bind_setQueriesEnabled},
	{"getQueriesEnabled", &luna_wrapper_osg_OcclusionQueryNode::_bind_getQueriesEnabled},
	{"setVisibilityThreshold", &luna_wrapper_osg_OcclusionQueryNode::_bind_setVisibilityThreshold},
	{"getVisibilityThreshold", &luna_wrapper_osg_OcclusionQueryNode::_bind_getVisibilityThreshold},
	{"setQueryFrameCount", &luna_wrapper_osg_OcclusionQueryNode::_bind_setQueryFrameCount},
	{"getQueryFrameCount", &luna_wrapper_osg_OcclusionQueryNode::_bind_getQueryFrameCount},
	{"setDebugDisplay", &luna_wrapper_osg_OcclusionQueryNode::_bind_setDebugDisplay},
	{"getDebugDisplay", &luna_wrapper_osg_OcclusionQueryNode::_bind_getDebugDisplay},
	{"setQueryStateSet", &luna_wrapper_osg_OcclusionQueryNode::_bind_setQueryStateSet},
	{"getQueryStateSet", &luna_wrapper_osg_OcclusionQueryNode::_bind_getQueryStateSet},
	{"setDebugStateSet", &luna_wrapper_osg_OcclusionQueryNode::_bind_setDebugStateSet},
	{"getDebugStateSet", &luna_wrapper_osg_OcclusionQueryNode::_bind_getDebugStateSet},
	{"getPassed", &luna_wrapper_osg_OcclusionQueryNode::_bind_getPassed},
	{"traverseQuery", &luna_wrapper_osg_OcclusionQueryNode::_bind_traverseQuery},
	{"traverseDebug", &luna_wrapper_osg_OcclusionQueryNode::_bind_traverseDebug},
	{"flushDeletedQueryObjects", &luna_wrapper_osg_OcclusionQueryNode::_bind_flushDeletedQueryObjects},
	{"discardDeletedQueryObjects", &luna_wrapper_osg_OcclusionQueryNode::_bind_discardDeletedQueryObjects},
	{0,0}
};

luna_ConverterType LunaTraits< osg::OcclusionQueryNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_OcclusionQueryNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::OcclusionQueryNode >::enumValues[] = {
	{0,0}
};


