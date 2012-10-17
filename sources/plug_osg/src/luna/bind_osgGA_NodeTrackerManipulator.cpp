#include <plug_common.h>

class luna_wrapper_osgGA_NodeTrackerManipulator {
public:
	typedef Luna< osgGA::NodeTrackerManipulator > luna_t;

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
		osgGA::NodeTrackerManipulator* ptr= dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::NodeTrackerManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_setTrackNodePath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTrackNodePath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,5626651) ) return false;
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

	inline static bool _lg_typecheck_setTrackerMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrackerMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotationMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotationMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setByMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInverseMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeHomePosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::NodeTrackerManipulator::NodeTrackerManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)
	static osgGA::NodeTrackerManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::NodeTrackerManipulator::NodeTrackerManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) function, expected prototype:\nosgGA::NodeTrackerManipulator::NodeTrackerManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : osgGA::StandardManipulator::DEFAULT_SETTINGS;

		return new osgGA::NodeTrackerManipulator(flags);
	}

	// osgGA::NodeTrackerManipulator::NodeTrackerManipulator(const osgGA::NodeTrackerManipulator & om, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::NodeTrackerManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::NodeTrackerManipulator::NodeTrackerManipulator(const osgGA::NodeTrackerManipulator & om, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::NodeTrackerManipulator::NodeTrackerManipulator(const osgGA::NodeTrackerManipulator & om, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgGA::NodeTrackerManipulator* om_ptr=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if( !om_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg om in osgGA::NodeTrackerManipulator::NodeTrackerManipulator function");
		}
		const osgGA::NodeTrackerManipulator & om=*om_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::NodeTrackerManipulator::NodeTrackerManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>1 ? *copyOp_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgGA::NodeTrackerManipulator(om, copyOp);
	}

	// Overload binder for osgGA::NodeTrackerManipulator::NodeTrackerManipulator
	static osgGA::NodeTrackerManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function NodeTrackerManipulator, cannot match any of the overloads for function NodeTrackerManipulator:\n  NodeTrackerManipulator(int)\n  NodeTrackerManipulator(const osgGA::NodeTrackerManipulator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::NodeTrackerManipulator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::NodeTrackerManipulator::cloneType() const function, expected prototype:\nosg::Object * osgGA::NodeTrackerManipulator::cloneType() const\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::NodeTrackerManipulator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::NodeTrackerManipulator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::NodeTrackerManipulator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgGA::NodeTrackerManipulator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::NodeTrackerManipulator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::NodeTrackerManipulator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::NodeTrackerManipulator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::NodeTrackerManipulator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::NodeTrackerManipulator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::NodeTrackerManipulator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::NodeTrackerManipulator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::NodeTrackerManipulator::libraryName() const function, expected prototype:\nconst char * osgGA::NodeTrackerManipulator::libraryName() const\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::NodeTrackerManipulator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::NodeTrackerManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::NodeTrackerManipulator::className() const function, expected prototype:\nconst char * osgGA::NodeTrackerManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::NodeTrackerManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::NodeTrackerManipulator::setTrackNodePath(const osg::NodePath & nodePath)
	static int _bind_setTrackNodePath_overload_1(lua_State *L) {
		if (!_lg_typecheck_setTrackNodePath_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::NodeTrackerManipulator::setTrackNodePath(const osg::NodePath & nodePath) function, expected prototype:\nvoid osgGA::NodeTrackerManipulator::setTrackNodePath(const osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n");
		}

		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgGA::NodeTrackerManipulator::setTrackNodePath function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;

		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::NodeTrackerManipulator::setTrackNodePath(const osg::NodePath &)");
		}
		self->setTrackNodePath(nodePath);

		return 0;
	}

	// void osgGA::NodeTrackerManipulator::setTrackNodePath(const osg::ObserverNodePath & nodePath)
	static int _bind_setTrackNodePath_overload_2(lua_State *L) {
		if (!_lg_typecheck_setTrackNodePath_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::NodeTrackerManipulator::setTrackNodePath(const osg::ObserverNodePath & nodePath) function, expected prototype:\nvoid osgGA::NodeTrackerManipulator::setTrackNodePath(const osg::ObserverNodePath & nodePath)\nClass arguments details:\narg 1 ID = 5626651\n");
		}

		const osg::ObserverNodePath* nodePath_ptr=(Luna< osg::ObserverNodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osgGA::NodeTrackerManipulator::setTrackNodePath function");
		}
		const osg::ObserverNodePath & nodePath=*nodePath_ptr;

		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::NodeTrackerManipulator::setTrackNodePath(const osg::ObserverNodePath &)");
		}
		self->setTrackNodePath(nodePath);

		return 0;
	}

	// Overload binder for osgGA::NodeTrackerManipulator::setTrackNodePath
	static int _bind_setTrackNodePath(lua_State *L) {
		if (_lg_typecheck_setTrackNodePath_overload_1(L)) return _bind_setTrackNodePath_overload_1(L);
		if (_lg_typecheck_setTrackNodePath_overload_2(L)) return _bind_setTrackNodePath_overload_2(L);

		luaL_error(L, "error in function setTrackNodePath, cannot match any of the overloads for function setTrackNodePath:\n  setTrackNodePath(const osg::NodePath &)\n  setTrackNodePath(const osg::ObserverNodePath &)\n");
		return 0;
	}

	// osg::ObserverNodePath & osgGA::NodeTrackerManipulator::getTrackNodePath()
	static int _bind_getTrackNodePath(lua_State *L) {
		if (!_lg_typecheck_getTrackNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ObserverNodePath & osgGA::NodeTrackerManipulator::getTrackNodePath() function, expected prototype:\nosg::ObserverNodePath & osgGA::NodeTrackerManipulator::getTrackNodePath()\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ObserverNodePath & osgGA::NodeTrackerManipulator::getTrackNodePath()");
		}
		const osg::ObserverNodePath* lret = &self->getTrackNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ObserverNodePath >::push(L,lret,false);

		return 1;
	}

	// void osgGA::NodeTrackerManipulator::setTrackNode(osg::Node * node)
	static int _bind_setTrackNode(lua_State *L) {
		if (!_lg_typecheck_setTrackNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::NodeTrackerManipulator::setTrackNode(osg::Node * node) function, expected prototype:\nvoid osgGA::NodeTrackerManipulator::setTrackNode(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::NodeTrackerManipulator::setTrackNode(osg::Node *)");
		}
		self->setTrackNode(node);

		return 0;
	}

	// osg::Node * osgGA::NodeTrackerManipulator::getTrackNode()
	static int _bind_getTrackNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTrackNode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osgGA::NodeTrackerManipulator::getTrackNode() function, expected prototype:\nosg::Node * osgGA::NodeTrackerManipulator::getTrackNode()\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osgGA::NodeTrackerManipulator::getTrackNode()");
		}
		osg::Node * lret = self->getTrackNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osgGA::NodeTrackerManipulator::getTrackNode() const
	static int _bind_getTrackNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTrackNode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osgGA::NodeTrackerManipulator::getTrackNode() const function, expected prototype:\nconst osg::Node * osgGA::NodeTrackerManipulator::getTrackNode() const\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osgGA::NodeTrackerManipulator::getTrackNode() const");
		}
		const osg::Node * lret = self->getTrackNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgGA::NodeTrackerManipulator::getTrackNode
	static int _bind_getTrackNode(lua_State *L) {
		if (_lg_typecheck_getTrackNode_overload_1(L)) return _bind_getTrackNode_overload_1(L);
		if (_lg_typecheck_getTrackNode_overload_2(L)) return _bind_getTrackNode_overload_2(L);

		luaL_error(L, "error in function getTrackNode, cannot match any of the overloads for function getTrackNode:\n  getTrackNode()\n  getTrackNode()\n");
		return 0;
	}

	// void osgGA::NodeTrackerManipulator::setTrackerMode(osgGA::NodeTrackerManipulator::TrackerMode mode)
	static int _bind_setTrackerMode(lua_State *L) {
		if (!_lg_typecheck_setTrackerMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::NodeTrackerManipulator::setTrackerMode(osgGA::NodeTrackerManipulator::TrackerMode mode) function, expected prototype:\nvoid osgGA::NodeTrackerManipulator::setTrackerMode(osgGA::NodeTrackerManipulator::TrackerMode mode)\nClass arguments details:\n");
		}

		osgGA::NodeTrackerManipulator::TrackerMode mode=(osgGA::NodeTrackerManipulator::TrackerMode)lua_tointeger(L,2);

		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::NodeTrackerManipulator::setTrackerMode(osgGA::NodeTrackerManipulator::TrackerMode)");
		}
		self->setTrackerMode(mode);

		return 0;
	}

	// osgGA::NodeTrackerManipulator::TrackerMode osgGA::NodeTrackerManipulator::getTrackerMode() const
	static int _bind_getTrackerMode(lua_State *L) {
		if (!_lg_typecheck_getTrackerMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::NodeTrackerManipulator::TrackerMode osgGA::NodeTrackerManipulator::getTrackerMode() const function, expected prototype:\nosgGA::NodeTrackerManipulator::TrackerMode osgGA::NodeTrackerManipulator::getTrackerMode() const\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::NodeTrackerManipulator::TrackerMode osgGA::NodeTrackerManipulator::getTrackerMode() const");
		}
		osgGA::NodeTrackerManipulator::TrackerMode lret = self->getTrackerMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::NodeTrackerManipulator::setRotationMode(osgGA::NodeTrackerManipulator::RotationMode mode)
	static int _bind_setRotationMode(lua_State *L) {
		if (!_lg_typecheck_setRotationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::NodeTrackerManipulator::setRotationMode(osgGA::NodeTrackerManipulator::RotationMode mode) function, expected prototype:\nvoid osgGA::NodeTrackerManipulator::setRotationMode(osgGA::NodeTrackerManipulator::RotationMode mode)\nClass arguments details:\n");
		}

		osgGA::NodeTrackerManipulator::RotationMode mode=(osgGA::NodeTrackerManipulator::RotationMode)lua_tointeger(L,2);

		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::NodeTrackerManipulator::setRotationMode(osgGA::NodeTrackerManipulator::RotationMode)");
		}
		self->setRotationMode(mode);

		return 0;
	}

	// osgGA::NodeTrackerManipulator::RotationMode osgGA::NodeTrackerManipulator::getRotationMode() const
	static int _bind_getRotationMode(lua_State *L) {
		if (!_lg_typecheck_getRotationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::NodeTrackerManipulator::RotationMode osgGA::NodeTrackerManipulator::getRotationMode() const function, expected prototype:\nosgGA::NodeTrackerManipulator::RotationMode osgGA::NodeTrackerManipulator::getRotationMode() const\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::NodeTrackerManipulator::RotationMode osgGA::NodeTrackerManipulator::getRotationMode() const");
		}
		osgGA::NodeTrackerManipulator::RotationMode lret = self->getRotationMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::NodeTrackerManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::NodeTrackerManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::NodeTrackerManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::NodeTrackerManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::NodeTrackerManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// osg::Matrixd osgGA::NodeTrackerManipulator::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::NodeTrackerManipulator::getMatrix() const function, expected prototype:\nosg::Matrixd osgGA::NodeTrackerManipulator::getMatrix() const\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::NodeTrackerManipulator::getMatrix() const");
		}
		osg::Matrixd stack_lret = self->getMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgGA::NodeTrackerManipulator::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgGA::NodeTrackerManipulator::getInverseMatrix() const function, expected prototype:\nosg::Matrixd osgGA::NodeTrackerManipulator::getInverseMatrix() const\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osgGA::NodeTrackerManipulator::getInverseMatrix() const");
		}
		osg::Matrixd stack_lret = self->getInverseMatrix();
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgGA::NodeTrackerManipulator::setNode(osg::Node * )
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::NodeTrackerManipulator::setNode(osg::Node * ) function, expected prototype:\nvoid osgGA::NodeTrackerManipulator::setNode(osg::Node * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::NodeTrackerManipulator::setNode(osg::Node *)");
		}
		self->setNode(_arg1);

		return 0;
	}

	// void osgGA::NodeTrackerManipulator::computeHomePosition()
	static int _bind_computeHomePosition(lua_State *L) {
		if (!_lg_typecheck_computeHomePosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::NodeTrackerManipulator::computeHomePosition() function, expected prototype:\nvoid osgGA::NodeTrackerManipulator::computeHomePosition()\nClass arguments details:\n");
		}


		osgGA::NodeTrackerManipulator* self=dynamic_cast< osgGA::NodeTrackerManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::NodeTrackerManipulator::computeHomePosition()");
		}
		self->computeHomePosition();

		return 0;
	}


	// Operator binds:

};

osgGA::NodeTrackerManipulator* LunaTraits< osgGA::NodeTrackerManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_NodeTrackerManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::NodeTrackerManipulator >::_bind_dtor(osgGA::NodeTrackerManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::NodeTrackerManipulator >::className[] = "NodeTrackerManipulator";
const char LunaTraits< osgGA::NodeTrackerManipulator >::fullName[] = "osgGA::NodeTrackerManipulator";
const char LunaTraits< osgGA::NodeTrackerManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::NodeTrackerManipulator >::parents[] = {"osgGA.OrbitManipulator", 0};
const int LunaTraits< osgGA::NodeTrackerManipulator >::hash = 3259234;
const int LunaTraits< osgGA::NodeTrackerManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::NodeTrackerManipulator >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_className},
	{"setTrackNodePath", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_setTrackNodePath},
	{"getTrackNodePath", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_getTrackNodePath},
	{"setTrackNode", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_setTrackNode},
	{"getTrackNode", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_getTrackNode},
	{"setTrackerMode", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_setTrackerMode},
	{"getTrackerMode", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_getTrackerMode},
	{"setRotationMode", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_setRotationMode},
	{"getRotationMode", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_getRotationMode},
	{"setByMatrix", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_setByMatrix},
	{"getMatrix", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_getMatrix},
	{"getInverseMatrix", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_getInverseMatrix},
	{"setNode", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_setNode},
	{"computeHomePosition", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind_computeHomePosition},
	{"__eq", &luna_wrapper_osgGA_NodeTrackerManipulator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::NodeTrackerManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_NodeTrackerManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::NodeTrackerManipulator >::enumValues[] = {
	{"NODE_CENTER", osgGA::NodeTrackerManipulator::NODE_CENTER},
	{"NODE_CENTER_AND_AZIM", osgGA::NodeTrackerManipulator::NODE_CENTER_AND_AZIM},
	{"NODE_CENTER_AND_ROTATION", osgGA::NodeTrackerManipulator::NODE_CENTER_AND_ROTATION},
	{"TRACKBALL", osgGA::NodeTrackerManipulator::TRACKBALL},
	{"ELEVATION_AZIM", osgGA::NodeTrackerManipulator::ELEVATION_AZIM},
	{0,0}
};


