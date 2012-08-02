#include <plug_common.h>

class luna_wrapper_osg_ProxyNode {
public:
	typedef Luna< osg::ProxyNode > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ProxyNode* ptr= dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ProxyNode >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDatabaseOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseOptions_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabaseOptions_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFileName(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumFileNames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLoadingExternalReferenceMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLoadingExternalReferenceMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ProxyNode::ProxyNode()
	static osg::ProxyNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ProxyNode::ProxyNode() function, expected prototype:\nosg::ProxyNode::ProxyNode()\nClass arguments details:\n");
		}


		return new osg::ProxyNode();
	}

	// osg::ProxyNode::ProxyNode(const osg::ProxyNode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ProxyNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ProxyNode::ProxyNode(const osg::ProxyNode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ProxyNode::ProxyNode(const osg::ProxyNode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ProxyNode* _arg1_ptr=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ProxyNode::ProxyNode function");
		}
		const osg::ProxyNode & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ProxyNode::ProxyNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ProxyNode(_arg1, copyop);
	}

	// Overload binder for osg::ProxyNode::ProxyNode
	static osg::ProxyNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ProxyNode, cannot match any of the overloads for function ProxyNode:\n  ProxyNode()\n  ProxyNode(const osg::ProxyNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ProxyNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ProxyNode::cloneType() const function, expected prototype:\nosg::Object * osg::ProxyNode::cloneType() const\nClass arguments details:\n");
		}


		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ProxyNode::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ProxyNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ProxyNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::ProxyNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ProxyNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ProxyNode::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ProxyNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ProxyNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ProxyNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ProxyNode::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ProxyNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ProxyNode::className() const function, expected prototype:\nconst char * osg::ProxyNode::className() const\nClass arguments details:\n");
		}


		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ProxyNode::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ProxyNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ProxyNode::libraryName() const function, expected prototype:\nconst char * osg::ProxyNode::libraryName() const\nClass arguments details:\n");
		}


		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ProxyNode::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ProxyNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ProxyNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::ProxyNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::ProxyNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ProxyNode::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::ProxyNode::traverse(osg::NodeVisitor & )
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ProxyNode::traverse(osg::NodeVisitor & ) function, expected prototype:\nvoid osg::ProxyNode::traverse(osg::NodeVisitor & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ProxyNode::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ProxyNode::traverse(osg::NodeVisitor &)");
		}
		self->traverse(_arg1);

		return 0;
	}

	// bool osg::ProxyNode::addChild(osg::Node * child)
	static int _bind_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ProxyNode::addChild(osg::Node * child) function, expected prototype:\nbool osg::ProxyNode::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ProxyNode::addChild(osg::Node *)");
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ProxyNode::addChild(osg::Node * child, const std::string & filename)
	static int _bind_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ProxyNode::addChild(osg::Node * child, const std::string & filename) function, expected prototype:\nbool osg::ProxyNode::addChild(osg::Node * child, const std::string & filename)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		std::string filename(lua_tostring(L,3),lua_objlen(L,3));

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ProxyNode::addChild(osg::Node *, const std::string &)");
		}
		bool lret = self->addChild(child, filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::ProxyNode::addChild
	static int _bind_addChild(lua_State *L) {
		if (_lg_typecheck_addChild_overload_1(L)) return _bind_addChild_overload_1(L);
		if (_lg_typecheck_addChild_overload_2(L)) return _bind_addChild_overload_2(L);

		luaL_error(L, "error in function addChild, cannot match any of the overloads for function addChild:\n  addChild(osg::Node *)\n  addChild(osg::Node *, const std::string &)\n");
		return 0;
	}

	// bool osg::ProxyNode::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ProxyNode::removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::ProxyNode::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ProxyNode::removeChildren(unsigned int, unsigned int)");
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ProxyNode::setDatabaseOptions(osg::Referenced * options)
	static int _bind_setDatabaseOptions(lua_State *L) {
		if (!_lg_typecheck_setDatabaseOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ProxyNode::setDatabaseOptions(osg::Referenced * options) function, expected prototype:\nvoid osg::ProxyNode::setDatabaseOptions(osg::Referenced * options)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* options=(Luna< osg::Referenced >::check(L,2));

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ProxyNode::setDatabaseOptions(osg::Referenced *)");
		}
		self->setDatabaseOptions(options);

		return 0;
	}

	// osg::Referenced * osg::ProxyNode::getDatabaseOptions()
	static int _bind_getDatabaseOptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabaseOptions_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ProxyNode::getDatabaseOptions() function, expected prototype:\nosg::Referenced * osg::ProxyNode::getDatabaseOptions()\nClass arguments details:\n");
		}


		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ProxyNode::getDatabaseOptions()");
		}
		osg::Referenced * lret = self->getDatabaseOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ProxyNode::getDatabaseOptions() const
	static int _bind_getDatabaseOptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabaseOptions_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ProxyNode::getDatabaseOptions() const function, expected prototype:\nconst osg::Referenced * osg::ProxyNode::getDatabaseOptions() const\nClass arguments details:\n");
		}


		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ProxyNode::getDatabaseOptions() const");
		}
		const osg::Referenced * lret = self->getDatabaseOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ProxyNode::getDatabaseOptions
	static int _bind_getDatabaseOptions(lua_State *L) {
		if (_lg_typecheck_getDatabaseOptions_overload_1(L)) return _bind_getDatabaseOptions_overload_1(L);
		if (_lg_typecheck_getDatabaseOptions_overload_2(L)) return _bind_getDatabaseOptions_overload_2(L);

		luaL_error(L, "error in function getDatabaseOptions, cannot match any of the overloads for function getDatabaseOptions:\n  getDatabaseOptions()\n  getDatabaseOptions()\n");
		return 0;
	}

	// void osg::ProxyNode::setDatabasePath(const std::string & path)
	static int _bind_setDatabasePath(lua_State *L) {
		if (!_lg_typecheck_setDatabasePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ProxyNode::setDatabasePath(const std::string & path) function, expected prototype:\nvoid osg::ProxyNode::setDatabasePath(const std::string & path)\nClass arguments details:\n");
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ProxyNode::setDatabasePath(const std::string &)");
		}
		self->setDatabasePath(path);

		return 0;
	}

	// const std::string & osg::ProxyNode::getDatabasePath() const
	static int _bind_getDatabasePath(lua_State *L) {
		if (!_lg_typecheck_getDatabasePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::ProxyNode::getDatabasePath() const function, expected prototype:\nconst std::string & osg::ProxyNode::getDatabasePath() const\nClass arguments details:\n");
		}


		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::ProxyNode::getDatabasePath() const");
		}
		const std::string & lret = self->getDatabasePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::ProxyNode::setFileName(unsigned int childNo, const std::string & filename)
	static int _bind_setFileName(lua_State *L) {
		if (!_lg_typecheck_setFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ProxyNode::setFileName(unsigned int childNo, const std::string & filename) function, expected prototype:\nvoid osg::ProxyNode::setFileName(unsigned int childNo, const std::string & filename)\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		std::string filename(lua_tostring(L,3),lua_objlen(L,3));

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ProxyNode::setFileName(unsigned int, const std::string &)");
		}
		self->setFileName(childNo, filename);

		return 0;
	}

	// const std::string & osg::ProxyNode::getFileName(unsigned int childNo) const
	static int _bind_getFileName(lua_State *L) {
		if (!_lg_typecheck_getFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::ProxyNode::getFileName(unsigned int childNo) const function, expected prototype:\nconst std::string & osg::ProxyNode::getFileName(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::ProxyNode::getFileName(unsigned int) const");
		}
		const std::string & lret = self->getFileName(childNo);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// unsigned int osg::ProxyNode::getNumFileNames() const
	static int _bind_getNumFileNames(lua_State *L) {
		if (!_lg_typecheck_getNumFileNames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ProxyNode::getNumFileNames() const function, expected prototype:\nunsigned int osg::ProxyNode::getNumFileNames() const\nClass arguments details:\n");
		}


		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ProxyNode::getNumFileNames() const");
		}
		unsigned int lret = self->getNumFileNames();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ref_ptr< osg::Referenced > & osg::ProxyNode::getDatabaseRequest(unsigned int childNo)
	static int _bind_getDatabaseRequest_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequest_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Referenced > & osg::ProxyNode::getDatabaseRequest(unsigned int childNo) function, expected prototype:\nosg::ref_ptr< osg::Referenced > & osg::ProxyNode::getDatabaseRequest(unsigned int childNo)\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Referenced > & osg::ProxyNode::getDatabaseRequest(unsigned int)");
		}
		osg::ref_ptr< osg::Referenced > & lret = self->getDatabaseRequest(childNo);
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// const osg::ref_ptr< osg::Referenced > & osg::ProxyNode::getDatabaseRequest(unsigned int childNo) const
	static int _bind_getDatabaseRequest_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequest_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ref_ptr< osg::Referenced > & osg::ProxyNode::getDatabaseRequest(unsigned int childNo) const function, expected prototype:\nconst osg::ref_ptr< osg::Referenced > & osg::ProxyNode::getDatabaseRequest(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ref_ptr< osg::Referenced > & osg::ProxyNode::getDatabaseRequest(unsigned int) const");
		}
		const osg::ref_ptr< osg::Referenced > & lret = self->getDatabaseRequest(childNo);
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// Overload binder for osg::ProxyNode::getDatabaseRequest
	static int _bind_getDatabaseRequest(lua_State *L) {
		if (_lg_typecheck_getDatabaseRequest_overload_1(L)) return _bind_getDatabaseRequest_overload_1(L);
		if (_lg_typecheck_getDatabaseRequest_overload_2(L)) return _bind_getDatabaseRequest_overload_2(L);

		luaL_error(L, "error in function getDatabaseRequest, cannot match any of the overloads for function getDatabaseRequest:\n  getDatabaseRequest(unsigned int)\n  getDatabaseRequest(unsigned int)\n");
		return 0;
	}

	// void osg::ProxyNode::setLoadingExternalReferenceMode(osg::ProxyNode::LoadingExternalReferenceMode mode)
	static int _bind_setLoadingExternalReferenceMode(lua_State *L) {
		if (!_lg_typecheck_setLoadingExternalReferenceMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ProxyNode::setLoadingExternalReferenceMode(osg::ProxyNode::LoadingExternalReferenceMode mode) function, expected prototype:\nvoid osg::ProxyNode::setLoadingExternalReferenceMode(osg::ProxyNode::LoadingExternalReferenceMode mode)\nClass arguments details:\n");
		}

		osg::ProxyNode::LoadingExternalReferenceMode mode=(osg::ProxyNode::LoadingExternalReferenceMode)lua_tointeger(L,2);

		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ProxyNode::setLoadingExternalReferenceMode(osg::ProxyNode::LoadingExternalReferenceMode)");
		}
		self->setLoadingExternalReferenceMode(mode);

		return 0;
	}

	// osg::ProxyNode::LoadingExternalReferenceMode osg::ProxyNode::getLoadingExternalReferenceMode() const
	static int _bind_getLoadingExternalReferenceMode(lua_State *L) {
		if (!_lg_typecheck_getLoadingExternalReferenceMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ProxyNode::LoadingExternalReferenceMode osg::ProxyNode::getLoadingExternalReferenceMode() const function, expected prototype:\nosg::ProxyNode::LoadingExternalReferenceMode osg::ProxyNode::getLoadingExternalReferenceMode() const\nClass arguments details:\n");
		}


		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ProxyNode::LoadingExternalReferenceMode osg::ProxyNode::getLoadingExternalReferenceMode() const");
		}
		osg::ProxyNode::LoadingExternalReferenceMode lret = self->getLoadingExternalReferenceMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::BoundingSpheref osg::ProxyNode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSpheref osg::ProxyNode::computeBound() const function, expected prototype:\nosg::BoundingSpheref osg::ProxyNode::computeBound() const\nClass arguments details:\n");
		}


		osg::ProxyNode* self=dynamic_cast< osg::ProxyNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSpheref osg::ProxyNode::computeBound() const");
		}
		osg::BoundingSpheref stack_lret = self->computeBound();
		osg::BoundingSpheref* lret = new osg::BoundingSpheref(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSpheref >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::ProxyNode* LunaTraits< osg::ProxyNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ProxyNode::_bind_ctor(L);
}

void LunaTraits< osg::ProxyNode >::_bind_dtor(osg::ProxyNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ProxyNode >::className[] = "ProxyNode";
const char LunaTraits< osg::ProxyNode >::fullName[] = "osg::ProxyNode";
const char LunaTraits< osg::ProxyNode >::moduleName[] = "osg";
const char* LunaTraits< osg::ProxyNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::ProxyNode >::hash = 1600235;
const int LunaTraits< osg::ProxyNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ProxyNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ProxyNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ProxyNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ProxyNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_ProxyNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_ProxyNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_ProxyNode::_bind_accept},
	{"traverse", &luna_wrapper_osg_ProxyNode::_bind_traverse},
	{"addChild", &luna_wrapper_osg_ProxyNode::_bind_addChild},
	{"removeChildren", &luna_wrapper_osg_ProxyNode::_bind_removeChildren},
	{"setDatabaseOptions", &luna_wrapper_osg_ProxyNode::_bind_setDatabaseOptions},
	{"getDatabaseOptions", &luna_wrapper_osg_ProxyNode::_bind_getDatabaseOptions},
	{"setDatabasePath", &luna_wrapper_osg_ProxyNode::_bind_setDatabasePath},
	{"getDatabasePath", &luna_wrapper_osg_ProxyNode::_bind_getDatabasePath},
	{"setFileName", &luna_wrapper_osg_ProxyNode::_bind_setFileName},
	{"getFileName", &luna_wrapper_osg_ProxyNode::_bind_getFileName},
	{"getNumFileNames", &luna_wrapper_osg_ProxyNode::_bind_getNumFileNames},
	{"getDatabaseRequest", &luna_wrapper_osg_ProxyNode::_bind_getDatabaseRequest},
	{"setLoadingExternalReferenceMode", &luna_wrapper_osg_ProxyNode::_bind_setLoadingExternalReferenceMode},
	{"getLoadingExternalReferenceMode", &luna_wrapper_osg_ProxyNode::_bind_getLoadingExternalReferenceMode},
	{"computeBound", &luna_wrapper_osg_ProxyNode::_bind_computeBound},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ProxyNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ProxyNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ProxyNode >::enumValues[] = {
	{"USE_BOUNDING_SPHERE_CENTER", osg::ProxyNode::USE_BOUNDING_SPHERE_CENTER},
	{"USER_DEFINED_CENTER", osg::ProxyNode::USER_DEFINED_CENTER},
	{"LOAD_IMMEDIATELY", osg::ProxyNode::LOAD_IMMEDIATELY},
	{"DEFER_LOADING_TO_DATABASE_PAGER", osg::ProxyNode::DEFER_LOADING_TO_DATABASE_PAGER},
	{"NO_AUTOMATIC_LOADING", osg::ProxyNode::NO_AUTOMATIC_LOADING},
	{0,0}
};


