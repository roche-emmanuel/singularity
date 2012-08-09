#include <plug_common.h>

class luna_wrapper_osgGA_GUIEventHandler {
public:
	typedef Luna< osgGA::GUIEventHandler > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::GUIEventHandler* ptr= dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::GUIEventHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIgnoreHandledEventsMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIgnoreHandledEventsMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgGA::GUIEventHandler::GUIEventHandler()
	static osgGA::GUIEventHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventHandler::GUIEventHandler() function, expected prototype:\nosgGA::GUIEventHandler::GUIEventHandler()\nClass arguments details:\n");
		}


		return new osgGA::GUIEventHandler();
	}

	// osgGA::GUIEventHandler::GUIEventHandler(const osgGA::GUIEventHandler & eh, const osg::CopyOp & copyop)
	static osgGA::GUIEventHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::GUIEventHandler::GUIEventHandler(const osgGA::GUIEventHandler & eh, const osg::CopyOp & copyop) function, expected prototype:\nosgGA::GUIEventHandler::GUIEventHandler(const osgGA::GUIEventHandler & eh, const osg::CopyOp & copyop)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osgGA::GUIEventHandler* eh_ptr=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if( !eh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eh in osgGA::GUIEventHandler::GUIEventHandler function");
		}
		const osgGA::GUIEventHandler & eh=*eh_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgGA::GUIEventHandler::GUIEventHandler function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new osgGA::GUIEventHandler(eh, copyop);
	}

	// Overload binder for osgGA::GUIEventHandler::GUIEventHandler
	static osgGA::GUIEventHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GUIEventHandler, cannot match any of the overloads for function GUIEventHandler:\n  GUIEventHandler()\n  GUIEventHandler(const osgGA::GUIEventHandler &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::GUIEventHandler::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventHandler::cloneType() const function, expected prototype:\nosg::Object * osgGA::GUIEventHandler::cloneType() const\nClass arguments details:\n");
		}


		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventHandler::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandler::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::GUIEventHandler::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::GUIEventHandler::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::GUIEventHandler::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventHandler::libraryName() const function, expected prototype:\nconst char * osgGA::GUIEventHandler::libraryName() const\nClass arguments details:\n");
		}


		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventHandler::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::GUIEventHandler::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::GUIEventHandler::className() const function, expected prototype:\nconst char * osgGA::GUIEventHandler::className() const\nClass arguments details:\n");
		}


		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::GUIEventHandler::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_event(lua_State *L) {
		if (!_lg_typecheck_event(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid osgGA::GUIEventHandler::event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::event(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->event(nv, drawable);

		return 0;
	}

	// bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * , osg::NodeVisitor * )
	static int _bind_handle_overload_1(lua_State *L) {
		if (!_lg_typecheck_handle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * , osg::NodeVisitor * ) function, expected prototype:\nbool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * , osg::NodeVisitor * )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\narg 3 ID = 50169651\narg 4 ID = 50169651\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::GUIEventHandler::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::GUIEventHandler::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;
		osg::Object* _arg3=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,4));
		osg::NodeVisitor* _arg4=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,5));

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *)");
		}
		bool lret = self->handle(ea, aa, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )
	static int _bind_handle_overload_2(lua_State *L) {
		if (!_lg_typecheck_handle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & ) function, expected prototype:\nbool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter & , osgGA::GUIActionAdapter & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* _arg1_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandler::handle function");
		}
		const osgGA::GUIEventAdapter & _arg1=*_arg1_ptr;
		osgGA::GUIActionAdapter* _arg2_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgGA::GUIEventHandler::handle function");
		}
		osgGA::GUIActionAdapter & _arg2=*_arg2_ptr;

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handle(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgGA::GUIEventHandler::handle
	static int _bind_handle(lua_State *L) {
		if (_lg_typecheck_handle_overload_1(L)) return _bind_handle_overload_1(L);
		if (_lg_typecheck_handle_overload_2(L)) return _bind_handle_overload_2(L);

		luaL_error(L, "error in function handle, cannot match any of the overloads for function handle:\n  handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *)\n  handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n");
		return 0;
	}

	// bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * object, osg::NodeVisitor * nv)
	static int _bind_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(lua_State *L) {
		if (!_lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * object, osg::NodeVisitor * nv) function, expected prototype:\nbool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * object, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\narg 3 ID = 50169651\narg 4 ID = 50169651\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;
		osg::Object* object=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,4));
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,5));

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *)");
		}
		bool lret = self->handleWithCheckAgainstIgnoreHandledEventsMask(ea, aa, object, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(lua_State *L) {
		if (!_lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)");
		}
		bool lret = self->handleWithCheckAgainstIgnoreHandledEventsMask(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgGA::GUIEventHandler::handleWithCheckAgainstIgnoreHandledEventsMask
	static int _bind_handleWithCheckAgainstIgnoreHandledEventsMask(lua_State *L) {
		if (_lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(L)) return _bind_handleWithCheckAgainstIgnoreHandledEventsMask_overload_1(L);
		if (_lg_typecheck_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(L)) return _bind_handleWithCheckAgainstIgnoreHandledEventsMask_overload_2(L);

		luaL_error(L, "error in function handleWithCheckAgainstIgnoreHandledEventsMask, cannot match any of the overloads for function handleWithCheckAgainstIgnoreHandledEventsMask:\n  handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *)\n  handleWithCheckAgainstIgnoreHandledEventsMask(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &)\n");
		return 0;
	}

	// void osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage & ) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage & ) const function, expected prototype:\nvoid osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* _arg1_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::GUIEventHandler::getUsage function");
		}
		osg::ApplicationUsage & _arg1=*_arg1_ptr;

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(_arg1);

		return 0;
	}

	// void osgGA::GUIEventHandler::setIgnoreHandledEventsMask(unsigned int mask)
	static int _bind_setIgnoreHandledEventsMask(lua_State *L) {
		if (!_lg_typecheck_setIgnoreHandledEventsMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::setIgnoreHandledEventsMask(unsigned int mask) function, expected prototype:\nvoid osgGA::GUIEventHandler::setIgnoreHandledEventsMask(unsigned int mask)\nClass arguments details:\n");
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::setIgnoreHandledEventsMask(unsigned int)");
		}
		self->setIgnoreHandledEventsMask(mask);

		return 0;
	}

	// unsigned int osgGA::GUIEventHandler::getIgnoreHandledEventsMask() const
	static int _bind_getIgnoreHandledEventsMask(lua_State *L) {
		if (!_lg_typecheck_getIgnoreHandledEventsMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgGA::GUIEventHandler::getIgnoreHandledEventsMask() const function, expected prototype:\nunsigned int osgGA::GUIEventHandler::getIgnoreHandledEventsMask() const\nClass arguments details:\n");
		}


		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgGA::GUIEventHandler::getIgnoreHandledEventsMask() const");
		}
		unsigned int lret = self->getIgnoreHandledEventsMask();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osgGA::GUIEventHandler::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osgGA::GUIEventHandler* self=dynamic_cast< osgGA::GUIEventHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::GUIEventHandler::operator()(osg::Node *, osg::NodeVisitor *)");
		}
		self->operator()(node, nv);

		return 0;
	}


};

osgGA::GUIEventHandler* LunaTraits< osgGA::GUIEventHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_GUIEventHandler::_bind_ctor(L);
}

void LunaTraits< osgGA::GUIEventHandler >::_bind_dtor(osgGA::GUIEventHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::GUIEventHandler >::className[] = "GUIEventHandler";
const char LunaTraits< osgGA::GUIEventHandler >::fullName[] = "osgGA::GUIEventHandler";
const char LunaTraits< osgGA::GUIEventHandler >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::GUIEventHandler >::parents[] = {"osg.NodeCallback", "osg.EventCallback", 0};
const int LunaTraits< osgGA::GUIEventHandler >::hash = 29676225;
const int LunaTraits< osgGA::GUIEventHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::GUIEventHandler >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_GUIEventHandler::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_GUIEventHandler::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_GUIEventHandler::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_GUIEventHandler::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_GUIEventHandler::_bind_className},
	{"event", &luna_wrapper_osgGA_GUIEventHandler::_bind_event},
	{"handle", &luna_wrapper_osgGA_GUIEventHandler::_bind_handle},
	{"handleWithCheckAgainstIgnoreHandledEventsMask", &luna_wrapper_osgGA_GUIEventHandler::_bind_handleWithCheckAgainstIgnoreHandledEventsMask},
	{"getUsage", &luna_wrapper_osgGA_GUIEventHandler::_bind_getUsage},
	{"setIgnoreHandledEventsMask", &luna_wrapper_osgGA_GUIEventHandler::_bind_setIgnoreHandledEventsMask},
	{"getIgnoreHandledEventsMask", &luna_wrapper_osgGA_GUIEventHandler::_bind_getIgnoreHandledEventsMask},
	{"op_call", &luna_wrapper_osgGA_GUIEventHandler::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::GUIEventHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_GUIEventHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::GUIEventHandler >::enumValues[] = {
	{0,0}
};


