#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ClipNode.h>

class luna_wrapper_osg_ClipNode {
public:
	typedef Luna< osg::ClipNode > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ClipNode* ptr= dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClipNode >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_setReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_createClipBox(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82744897) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addClipPlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeClipPlane_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeClipPlane_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumClipPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClipPlane_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClipPlane_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipPlaneList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73670266) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClipPlaneList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClipPlaneList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateSetModes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalStateSetModes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ClipNode::ClipNode()
	static osg::ClipNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipNode() function, expected prototype:\nosg::ClipNode::ClipNode()\nClass arguments details:\n");
		}


		return new osg::ClipNode();
	}

	// osg::ClipNode::ClipNode(const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClipNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipNode(const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClipNode::ClipNode(const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ClipNode* es_ptr=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if( !es_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg es in osg::ClipNode::ClipNode function");
		}
		const osg::ClipNode & es=*es_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipNode::ClipNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ClipNode(es, copyop);
	}

	// osg::ClipNode::ClipNode(lua_Table * data)
	static osg::ClipNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipNode(lua_Table * data) function, expected prototype:\nosg::ClipNode::ClipNode(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_ClipNode(L,NULL);
	}

	// osg::ClipNode::ClipNode(lua_Table * data, const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClipNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipNode(lua_Table * data, const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClipNode::ClipNode(lua_Table * data, const osg::ClipNode & es, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ClipNode* es_ptr=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,2));
		if( !es_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg es in osg::ClipNode::ClipNode function");
		}
		const osg::ClipNode & es=*es_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipNode::ClipNode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ClipNode(L,NULL, es, copyop);
	}

	// Overload binder for osg::ClipNode::ClipNode
	static osg::ClipNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ClipNode, cannot match any of the overloads for function ClipNode:\n  ClipNode()\n  ClipNode(const osg::ClipNode &, const osg::CopyOp &)\n  ClipNode(lua_Table *)\n  ClipNode(lua_Table *, const osg::ClipNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ClipNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipNode::cloneType() const function, expected prototype:\nosg::Object * osg::ClipNode::cloneType() const\nClass arguments details:\n");
		}


		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipNode::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClipNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClipNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::ClipNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClipNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClipNode::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClipNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClipNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClipNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClipNode::className() const function, expected prototype:\nconst char * osg::ClipNode::className() const\nClass arguments details:\n");
		}


		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClipNode::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClipNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClipNode::libraryName() const function, expected prototype:\nconst char * osg::ClipNode::libraryName() const\nClass arguments details:\n");
		}


		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClipNode::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ClipNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::ClipNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::ClipNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipNode::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::ClipNode::setReferenceFrame(osg::ClipNode::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::setReferenceFrame(osg::ClipNode::ReferenceFrame rf) function, expected prototype:\nvoid osg::ClipNode::setReferenceFrame(osg::ClipNode::ReferenceFrame rf)\nClass arguments details:\n");
		}

		osg::ClipNode::ReferenceFrame rf=(osg::ClipNode::ReferenceFrame)lua_tointeger(L,2);

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipNode::setReferenceFrame(osg::ClipNode::ReferenceFrame)");
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// osg::ClipNode::ReferenceFrame osg::ClipNode::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ReferenceFrame osg::ClipNode::getReferenceFrame() const function, expected prototype:\nosg::ClipNode::ReferenceFrame osg::ClipNode::getReferenceFrame() const\nClass arguments details:\n");
		}


		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ClipNode::ReferenceFrame osg::ClipNode::getReferenceFrame() const");
		}
		osg::ClipNode::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClipNode::createClipBox(const osg::BoundingBoxd & bb, unsigned int clipPlaneNumberBase = 0)
	static int _bind_createClipBox(lua_State *L) {
		if (!_lg_typecheck_createClipBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::createClipBox(const osg::BoundingBoxd & bb, unsigned int clipPlaneNumberBase = 0) function, expected prototype:\nvoid osg::ClipNode::createClipBox(const osg::BoundingBoxd & bb, unsigned int clipPlaneNumberBase = 0)\nClass arguments details:\narg 1 ID = 82744897\n");
		}

		int luatop = lua_gettop(L);

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxd >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::ClipNode::createClipBox function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;
		unsigned int clipPlaneNumberBase=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 0;

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipNode::createClipBox(const osg::BoundingBoxd &, unsigned int)");
		}
		self->createClipBox(bb, clipPlaneNumberBase);

		return 0;
	}

	// bool osg::ClipNode::addClipPlane(osg::ClipPlane * clipplane)
	static int _bind_addClipPlane(lua_State *L) {
		if (!_lg_typecheck_addClipPlane(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::addClipPlane(osg::ClipPlane * clipplane) function, expected prototype:\nbool osg::ClipNode::addClipPlane(osg::ClipPlane * clipplane)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ClipPlane* clipplane=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,2));

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::addClipPlane(osg::ClipPlane *)");
		}
		bool lret = self->addClipPlane(clipplane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ClipNode::removeClipPlane(osg::ClipPlane * clipplane)
	static int _bind_removeClipPlane_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeClipPlane_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::removeClipPlane(osg::ClipPlane * clipplane) function, expected prototype:\nbool osg::ClipNode::removeClipPlane(osg::ClipPlane * clipplane)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ClipPlane* clipplane=dynamic_cast< osg::ClipPlane* >(Luna< osg::Referenced >::check(L,2));

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::removeClipPlane(osg::ClipPlane *)");
		}
		bool lret = self->removeClipPlane(clipplane);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ClipNode::removeClipPlane(unsigned int pos)
	static int _bind_removeClipPlane_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeClipPlane_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClipNode::removeClipPlane(unsigned int pos) function, expected prototype:\nbool osg::ClipNode::removeClipPlane(unsigned int pos)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClipNode::removeClipPlane(unsigned int)");
		}
		bool lret = self->removeClipPlane(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::ClipNode::removeClipPlane
	static int _bind_removeClipPlane(lua_State *L) {
		if (_lg_typecheck_removeClipPlane_overload_1(L)) return _bind_removeClipPlane_overload_1(L);
		if (_lg_typecheck_removeClipPlane_overload_2(L)) return _bind_removeClipPlane_overload_2(L);

		luaL_error(L, "error in function removeClipPlane, cannot match any of the overloads for function removeClipPlane:\n  removeClipPlane(osg::ClipPlane *)\n  removeClipPlane(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::ClipNode::getNumClipPlanes() const
	static int _bind_getNumClipPlanes(lua_State *L) {
		if (!_lg_typecheck_getNumClipPlanes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClipNode::getNumClipPlanes() const function, expected prototype:\nunsigned int osg::ClipNode::getNumClipPlanes() const\nClass arguments details:\n");
		}


		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClipNode::getNumClipPlanes() const");
		}
		unsigned int lret = self->getNumClipPlanes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos)
	static int _bind_getClipPlane_overload_1(lua_State *L) {
		if (!_lg_typecheck_getClipPlane_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos) function, expected prototype:\nosg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int)");
		}
		osg::ClipPlane * lret = self->getClipPlane(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ClipPlane >::push(L,lret,false);

		return 1;
	}

	// const osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos) const
	static int _bind_getClipPlane_overload_2(lua_State *L) {
		if (!_lg_typecheck_getClipPlane_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos) const function, expected prototype:\nconst osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ClipPlane * osg::ClipNode::getClipPlane(unsigned int) const");
		}
		const osg::ClipPlane * lret = self->getClipPlane(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ClipPlane >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::getClipPlane
	static int _bind_getClipPlane(lua_State *L) {
		if (_lg_typecheck_getClipPlane_overload_1(L)) return _bind_getClipPlane_overload_1(L);
		if (_lg_typecheck_getClipPlane_overload_2(L)) return _bind_getClipPlane_overload_2(L);

		luaL_error(L, "error in function getClipPlane, cannot match any of the overloads for function getClipPlane:\n  getClipPlane(unsigned int)\n  getClipPlane(unsigned int)\n");
		return 0;
	}

	// void osg::ClipNode::setClipPlaneList(const osg::ClipNode::ClipPlaneList & cpl)
	static int _bind_setClipPlaneList(lua_State *L) {
		if (!_lg_typecheck_setClipPlaneList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::setClipPlaneList(const osg::ClipNode::ClipPlaneList & cpl) function, expected prototype:\nvoid osg::ClipNode::setClipPlaneList(const osg::ClipNode::ClipPlaneList & cpl)\nClass arguments details:\narg 1 ID = 73670266\n");
		}

		const osg::ClipNode::ClipPlaneList* cpl_ptr=(Luna< osg::ClipNode::ClipPlaneList >::check(L,2));
		if( !cpl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cpl in osg::ClipNode::setClipPlaneList function");
		}
		const osg::ClipNode::ClipPlaneList & cpl=*cpl_ptr;

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipNode::setClipPlaneList(const osg::ClipNode::ClipPlaneList &)");
		}
		self->setClipPlaneList(cpl);

		return 0;
	}

	// osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList()
	static int _bind_getClipPlaneList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getClipPlaneList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() function, expected prototype:\nosg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList()\nClass arguments details:\n");
		}


		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList()");
		}
		const osg::ClipNode::ClipPlaneList* lret = &self->getClipPlaneList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ClipNode::ClipPlaneList >::push(L,lret,false);

		return 1;
	}

	// const osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() const
	static int _bind_getClipPlaneList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getClipPlaneList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() const function, expected prototype:\nconst osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() const\nClass arguments details:\n");
		}


		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ClipNode::ClipPlaneList & osg::ClipNode::getClipPlaneList() const");
		}
		const osg::ClipNode::ClipPlaneList* lret = &self->getClipPlaneList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ClipNode::ClipPlaneList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ClipNode::getClipPlaneList
	static int _bind_getClipPlaneList(lua_State *L) {
		if (_lg_typecheck_getClipPlaneList_overload_1(L)) return _bind_getClipPlaneList_overload_1(L);
		if (_lg_typecheck_getClipPlaneList_overload_2(L)) return _bind_getClipPlaneList_overload_2(L);

		luaL_error(L, "error in function getClipPlaneList, cannot match any of the overloads for function getClipPlaneList:\n  getClipPlaneList()\n  getClipPlaneList()\n");
		return 0;
	}

	// void osg::ClipNode::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const
	static int _bind_setStateSetModes(lua_State *L) {
		if (!_lg_typecheck_setStateSetModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const function, expected prototype:\nvoid osg::ClipNode::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* _arg1_ptr=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ClipNode::setStateSetModes function");
		}
		osg::StateSet & _arg1=*_arg1_ptr;
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipNode::setStateSetModes(osg::StateSet &, unsigned int) const");
		}
		self->setStateSetModes(_arg1, _arg2);

		return 0;
	}

	// void osg::ClipNode::setLocalStateSetModes(unsigned int arg1 = osg::StateAttribute::ON)
	static int _bind_setLocalStateSetModes(lua_State *L) {
		if (!_lg_typecheck_setLocalStateSetModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClipNode::setLocalStateSetModes(unsigned int arg1 = osg::StateAttribute::ON) function, expected prototype:\nvoid osg::ClipNode::setLocalStateSetModes(unsigned int arg1 = osg::StateAttribute::ON)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int _arg1=luatop>1 ? (unsigned int)lua_tointeger(L,2) : osg::StateAttribute::ON;

		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClipNode::setLocalStateSetModes(unsigned int)");
		}
		self->setLocalStateSetModes(_arg1);

		return 0;
	}

	// osg::BoundingSphered osg::ClipNode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::ClipNode::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::ClipNode::computeBound() const\nClass arguments details:\n");
		}


		osg::ClipNode* self=dynamic_cast< osg::ClipNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::ClipNode::computeBound() const");
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::ClipNode* LunaTraits< osg::ClipNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClipNode::_bind_ctor(L);
}

void LunaTraits< osg::ClipNode >::_bind_dtor(osg::ClipNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClipNode >::className[] = "ClipNode";
const char LunaTraits< osg::ClipNode >::fullName[] = "osg::ClipNode";
const char LunaTraits< osg::ClipNode >::moduleName[] = "osg";
const char* LunaTraits< osg::ClipNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::ClipNode >::hash = 4866665;
const int LunaTraits< osg::ClipNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClipNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ClipNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ClipNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ClipNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_ClipNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_ClipNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_ClipNode::_bind_accept},
	{"setReferenceFrame", &luna_wrapper_osg_ClipNode::_bind_setReferenceFrame},
	{"getReferenceFrame", &luna_wrapper_osg_ClipNode::_bind_getReferenceFrame},
	{"createClipBox", &luna_wrapper_osg_ClipNode::_bind_createClipBox},
	{"addClipPlane", &luna_wrapper_osg_ClipNode::_bind_addClipPlane},
	{"removeClipPlane", &luna_wrapper_osg_ClipNode::_bind_removeClipPlane},
	{"getNumClipPlanes", &luna_wrapper_osg_ClipNode::_bind_getNumClipPlanes},
	{"getClipPlane", &luna_wrapper_osg_ClipNode::_bind_getClipPlane},
	{"setClipPlaneList", &luna_wrapper_osg_ClipNode::_bind_setClipPlaneList},
	{"getClipPlaneList", &luna_wrapper_osg_ClipNode::_bind_getClipPlaneList},
	{"setStateSetModes", &luna_wrapper_osg_ClipNode::_bind_setStateSetModes},
	{"setLocalStateSetModes", &luna_wrapper_osg_ClipNode::_bind_setLocalStateSetModes},
	{"computeBound", &luna_wrapper_osg_ClipNode::_bind_computeBound},
	{"__eq", &luna_wrapper_osg_ClipNode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClipNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClipNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClipNode >::enumValues[] = {
	{"RELATIVE_RF", osg::ClipNode::RELATIVE_RF},
	{"ABSOLUTE_RF", osg::ClipNode::ABSOLUTE_RF},
	{0,0}
};


