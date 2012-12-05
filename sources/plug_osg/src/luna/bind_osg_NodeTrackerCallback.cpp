#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_NodeTrackerCallback.h>

class luna_wrapper_osg_NodeTrackerCallback {
public:
	typedef Luna< osg::NodeTrackerCallback > luna_t;

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
		osg::NodeTrackerCallback* ptr= dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NodeTrackerCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_setTrackNodePath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		if( (!dynamic_cast< osg::NodePath* >(Luna< osg::NodePath >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTrackNodePath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,5626651) ) return false;
		if( (!dynamic_cast< osg::ObserverNodePath* >(Luna< osg::ObserverNodePath >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrackNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTrackNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrackNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTrackNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	// void osg::NodeTrackerCallback::setTrackNodePath(const osg::NodePath & nodePath)
	static int _bind_setTrackNodePath_overload_1(lua_State *L) {
		if (!_lg_typecheck_setTrackNodePath_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::setTrackNodePath(const osg::NodePath & nodePath) function, expected prototype:\nvoid osg::NodeTrackerCallback::setTrackNodePath(const osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n");
		}

		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::NodeTrackerCallback::setTrackNodePath function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;

		osg::NodeTrackerCallback* self=dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::setTrackNodePath(const osg::NodePath &)");
		}
		self->setTrackNodePath(nodePath);

		return 0;
	}

	// void osg::NodeTrackerCallback::setTrackNodePath(const osg::ObserverNodePath & nodePath)
	static int _bind_setTrackNodePath_overload_2(lua_State *L) {
		if (!_lg_typecheck_setTrackNodePath_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::setTrackNodePath(const osg::ObserverNodePath & nodePath) function, expected prototype:\nvoid osg::NodeTrackerCallback::setTrackNodePath(const osg::ObserverNodePath & nodePath)\nClass arguments details:\narg 1 ID = 5626651\n");
		}

		const osg::ObserverNodePath* nodePath_ptr=(Luna< osg::ObserverNodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::NodeTrackerCallback::setTrackNodePath function");
		}
		const osg::ObserverNodePath & nodePath=*nodePath_ptr;

		osg::NodeTrackerCallback* self=dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::setTrackNodePath(const osg::ObserverNodePath &)");
		}
		self->setTrackNodePath(nodePath);

		return 0;
	}

	// Overload binder for osg::NodeTrackerCallback::setTrackNodePath
	static int _bind_setTrackNodePath(lua_State *L) {
		if (_lg_typecheck_setTrackNodePath_overload_1(L)) return _bind_setTrackNodePath_overload_1(L);
		if (_lg_typecheck_setTrackNodePath_overload_2(L)) return _bind_setTrackNodePath_overload_2(L);

		luaL_error(L, "error in function setTrackNodePath, cannot match any of the overloads for function setTrackNodePath:\n  setTrackNodePath(const osg::NodePath &)\n  setTrackNodePath(const osg::ObserverNodePath &)\n");
		return 0;
	}

	// osg::ObserverNodePath & osg::NodeTrackerCallback::getTrackNodePath()
	static int _bind_getTrackNodePath(lua_State *L) {
		if (!_lg_typecheck_getTrackNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ObserverNodePath & osg::NodeTrackerCallback::getTrackNodePath() function, expected prototype:\nosg::ObserverNodePath & osg::NodeTrackerCallback::getTrackNodePath()\nClass arguments details:\n");
		}


		osg::NodeTrackerCallback* self=dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ObserverNodePath & osg::NodeTrackerCallback::getTrackNodePath()");
		}
		const osg::ObserverNodePath* lret = &self->getTrackNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ObserverNodePath >::push(L,lret,false);

		return 1;
	}

	// void osg::NodeTrackerCallback::setTrackNode(osg::Node * node)
	static int _bind_setTrackNode(lua_State *L) {
		if (!_lg_typecheck_setTrackNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::setTrackNode(osg::Node * node) function, expected prototype:\nvoid osg::NodeTrackerCallback::setTrackNode(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeTrackerCallback* self=dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::setTrackNode(osg::Node *)");
		}
		self->setTrackNode(node);

		return 0;
	}

	// osg::Node * osg::NodeTrackerCallback::getTrackNode()
	static int _bind_getTrackNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTrackNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osg::NodeTrackerCallback::getTrackNode() function, expected prototype:\nosg::Node * osg::NodeTrackerCallback::getTrackNode()\nClass arguments details:\n");
		}


		osg::NodeTrackerCallback* self=dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osg::NodeTrackerCallback::getTrackNode()");
		}
		osg::Node * lret = self->getTrackNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osg::NodeTrackerCallback::getTrackNode() const
	static int _bind_getTrackNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTrackNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osg::NodeTrackerCallback::getTrackNode() const function, expected prototype:\nconst osg::Node * osg::NodeTrackerCallback::getTrackNode() const\nClass arguments details:\n");
		}


		osg::NodeTrackerCallback* self=dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osg::NodeTrackerCallback::getTrackNode() const");
		}
		const osg::Node * lret = self->getTrackNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeTrackerCallback::getTrackNode
	static int _bind_getTrackNode(lua_State *L) {
		if (_lg_typecheck_getTrackNode_overload_1(L)) return _bind_getTrackNode_overload_1(L);
		if (_lg_typecheck_getTrackNode_overload_2(L)) return _bind_getTrackNode_overload_2(L);

		luaL_error(L, "error in function getTrackNode, cannot match any of the overloads for function getTrackNode:\n  getTrackNode()\n  getTrackNode()\n");
		return 0;
	}

	// void osg::NodeTrackerCallback::update(osg::Node & node)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::update(osg::Node & node) function, expected prototype:\nvoid osg::NodeTrackerCallback::update(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeTrackerCallback::update function");
		}
		osg::Node & node=*node_ptr;

		osg::NodeTrackerCallback* self=dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::update(osg::Node &)");
		}
		self->update(node);

		return 0;
	}


	// Operator binds:
	// void osg::NodeTrackerCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::NodeTrackerCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::NodeTrackerCallback* self=dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::operator()(osg::Node *, osg::NodeVisitor *)");
		}
		self->operator()(node, nv);

		return 0;
	}


};

osg::NodeTrackerCallback* LunaTraits< osg::NodeTrackerCallback >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::NodeTrackerCallback >::_bind_dtor(osg::NodeTrackerCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NodeTrackerCallback >::className[] = "NodeTrackerCallback";
const char LunaTraits< osg::NodeTrackerCallback >::fullName[] = "osg::NodeTrackerCallback";
const char LunaTraits< osg::NodeTrackerCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeTrackerCallback >::parents[] = {"osg.NodeCallback", 0};
const int LunaTraits< osg::NodeTrackerCallback >::hash = 18241815;
const int LunaTraits< osg::NodeTrackerCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NodeTrackerCallback >::methods[] = {
	{"setTrackNodePath", &luna_wrapper_osg_NodeTrackerCallback::_bind_setTrackNodePath},
	{"getTrackNodePath", &luna_wrapper_osg_NodeTrackerCallback::_bind_getTrackNodePath},
	{"setTrackNode", &luna_wrapper_osg_NodeTrackerCallback::_bind_setTrackNode},
	{"getTrackNode", &luna_wrapper_osg_NodeTrackerCallback::_bind_getTrackNode},
	{"update", &luna_wrapper_osg_NodeTrackerCallback::_bind_update},
	{"op_call", &luna_wrapper_osg_NodeTrackerCallback::_bind_op_call},
	{"__eq", &luna_wrapper_osg_NodeTrackerCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeTrackerCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NodeTrackerCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeTrackerCallback >::enumValues[] = {
	{0,0}
};


