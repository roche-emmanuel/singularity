#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_CompositeViewer.h>

class luna_wrapper_osgViewer_CompositeViewer {
public:
	typedef Luna< osgViewer::CompositeViewer > luna_t;

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
		osgViewer::CompositeViewer* ptr= dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::CompositeViewer >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99527028) ) return false;
		if( (!dynamic_cast< osg::ArgumentParser* >(Luna< osg::ArgumentParser >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,99527028) ) return false;
		if( (!dynamic_cast< osg::ArgumentParser* >(Luna< osg::ArgumentParser >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_readConfiguration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setViewerStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewerStats_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewerStats_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getView_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getView_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumViews(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isRealized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStartTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setReferenceTime(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameStamp_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameStamp_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_elapsedTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewerFrameStamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkNeedToDoFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_advance(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_eventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraWithFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraWithFocus_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraWithFocus_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewWithFocus_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewWithFocus_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameras(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18740017) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContexts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48105087) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScenes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,98997480) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViews(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2917259) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::CompositeViewer::CompositeViewer()
	static osgViewer::CompositeViewer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::CompositeViewer::CompositeViewer() function, expected prototype:\nosgViewer::CompositeViewer::CompositeViewer()\nClass arguments details:\n");
		}


		return new osgViewer::CompositeViewer();
	}

	// osgViewer::CompositeViewer::CompositeViewer(const osgViewer::CompositeViewer & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgViewer::CompositeViewer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::CompositeViewer::CompositeViewer(const osgViewer::CompositeViewer & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgViewer::CompositeViewer::CompositeViewer(const osgViewer::CompositeViewer & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgViewer::CompositeViewer* _arg1_ptr=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::CompositeViewer::CompositeViewer function");
		}
		const osgViewer::CompositeViewer & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgViewer::CompositeViewer::CompositeViewer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgViewer::CompositeViewer(_arg1, copyop);
	}

	// osgViewer::CompositeViewer::CompositeViewer(osg::ArgumentParser & arguments)
	static osgViewer::CompositeViewer* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::CompositeViewer::CompositeViewer(osg::ArgumentParser & arguments) function, expected prototype:\nosgViewer::CompositeViewer::CompositeViewer(osg::ArgumentParser & arguments)\nClass arguments details:\narg 1 ID = 99527028\n");
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,1));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osgViewer::CompositeViewer::CompositeViewer function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		return new osgViewer::CompositeViewer(arguments);
	}

	// osgViewer::CompositeViewer::CompositeViewer(lua_Table * data)
	static osgViewer::CompositeViewer* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::CompositeViewer::CompositeViewer(lua_Table * data) function, expected prototype:\nosgViewer::CompositeViewer::CompositeViewer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgViewer_CompositeViewer(L,NULL);
	}

	// osgViewer::CompositeViewer::CompositeViewer(lua_Table * data, const osgViewer::CompositeViewer & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgViewer::CompositeViewer* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::CompositeViewer::CompositeViewer(lua_Table * data, const osgViewer::CompositeViewer & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgViewer::CompositeViewer::CompositeViewer(lua_Table * data, const osgViewer::CompositeViewer & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgViewer::CompositeViewer* _arg2_ptr=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgViewer::CompositeViewer::CompositeViewer function");
		}
		const osgViewer::CompositeViewer & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgViewer::CompositeViewer::CompositeViewer function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgViewer_CompositeViewer(L,NULL, _arg2, copyop);
	}

	// osgViewer::CompositeViewer::CompositeViewer(lua_Table * data, osg::ArgumentParser & arguments)
	static osgViewer::CompositeViewer* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::CompositeViewer::CompositeViewer(lua_Table * data, osg::ArgumentParser & arguments) function, expected prototype:\nosgViewer::CompositeViewer::CompositeViewer(lua_Table * data, osg::ArgumentParser & arguments)\nClass arguments details:\narg 2 ID = 99527028\n");
		}

		osg::ArgumentParser* arguments_ptr=(Luna< osg::ArgumentParser >::check(L,2));
		if( !arguments_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arguments in osgViewer::CompositeViewer::CompositeViewer function");
		}
		osg::ArgumentParser & arguments=*arguments_ptr;

		return new wrapper_osgViewer_CompositeViewer(L,NULL, arguments);
	}

	// Overload binder for osgViewer::CompositeViewer::CompositeViewer
	static osgViewer::CompositeViewer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function CompositeViewer, cannot match any of the overloads for function CompositeViewer:\n  CompositeViewer()\n  CompositeViewer(const osgViewer::CompositeViewer &, const osg::CopyOp &)\n  CompositeViewer(osg::ArgumentParser &)\n  CompositeViewer(lua_Table *)\n  CompositeViewer(lua_Table *, const osgViewer::CompositeViewer &, const osg::CopyOp &)\n  CompositeViewer(lua_Table *, osg::ArgumentParser &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgViewer::CompositeViewer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::CompositeViewer::cloneType() const function, expected prototype:\nosg::Object * osgViewer::CompositeViewer::cloneType() const\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::CompositeViewer::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::CompositeViewer::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::CompositeViewer::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgViewer::CompositeViewer::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::CompositeViewer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::CompositeViewer::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::CompositeViewer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::CompositeViewer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::CompositeViewer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::CompositeViewer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::CompositeViewer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::CompositeViewer::libraryName() const function, expected prototype:\nconst char * osgViewer::CompositeViewer::libraryName() const\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::CompositeViewer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::CompositeViewer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::CompositeViewer::className() const function, expected prototype:\nconst char * osgViewer::CompositeViewer::className() const\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::CompositeViewer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgViewer::CompositeViewer::readConfiguration(const std::string & filename)
	static int _bind_readConfiguration(lua_State *L) {
		if (!_lg_typecheck_readConfiguration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::CompositeViewer::readConfiguration(const std::string & filename) function, expected prototype:\nbool osgViewer::CompositeViewer::readConfiguration(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::CompositeViewer::readConfiguration(const std::string &)");
		}
		bool lret = self->readConfiguration(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::CompositeViewer::setViewerStats(osg::Stats * stats)
	static int _bind_setViewerStats(lua_State *L) {
		if (!_lg_typecheck_setViewerStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::setViewerStats(osg::Stats * stats) function, expected prototype:\nvoid osgViewer::CompositeViewer::setViewerStats(osg::Stats * stats)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Stats* stats=dynamic_cast< osg::Stats* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::setViewerStats(osg::Stats *)");
		}
		self->setViewerStats(stats);

		return 0;
	}

	// osg::Stats * osgViewer::CompositeViewer::getViewerStats()
	static int _bind_getViewerStats_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewerStats_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stats * osgViewer::CompositeViewer::getViewerStats() function, expected prototype:\nosg::Stats * osgViewer::CompositeViewer::getViewerStats()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Stats * osgViewer::CompositeViewer::getViewerStats()");
		}
		osg::Stats * lret = self->getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// const osg::Stats * osgViewer::CompositeViewer::getViewerStats() const
	static int _bind_getViewerStats_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewerStats_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Stats * osgViewer::CompositeViewer::getViewerStats() const function, expected prototype:\nconst osg::Stats * osgViewer::CompositeViewer::getViewerStats() const\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Stats * osgViewer::CompositeViewer::getViewerStats() const");
		}
		const osg::Stats * lret = self->getViewerStats();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stats >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::CompositeViewer::getViewerStats
	static int _bind_getViewerStats(lua_State *L) {
		if (_lg_typecheck_getViewerStats_overload_1(L)) return _bind_getViewerStats_overload_1(L);
		if (_lg_typecheck_getViewerStats_overload_2(L)) return _bind_getViewerStats_overload_2(L);

		luaL_error(L, "error in function getViewerStats, cannot match any of the overloads for function getViewerStats:\n  getViewerStats()\n  getViewerStats()\n");
		return 0;
	}

	// void osgViewer::CompositeViewer::addView(osgViewer::View * view)
	static int _bind_addView(lua_State *L) {
		if (!_lg_typecheck_addView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::addView(osgViewer::View * view) function, expected prototype:\nvoid osgViewer::CompositeViewer::addView(osgViewer::View * view)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgViewer::View* view=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::addView(osgViewer::View *)");
		}
		self->addView(view);

		return 0;
	}

	// void osgViewer::CompositeViewer::removeView(osgViewer::View * view)
	static int _bind_removeView(lua_State *L) {
		if (!_lg_typecheck_removeView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::removeView(osgViewer::View * view) function, expected prototype:\nvoid osgViewer::CompositeViewer::removeView(osgViewer::View * view)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgViewer::View* view=dynamic_cast< osgViewer::View* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::removeView(osgViewer::View *)");
		}
		self->removeView(view);

		return 0;
	}

	// osgViewer::View * osgViewer::CompositeViewer::getView(unsigned int i)
	static int _bind_getView_overload_1(lua_State *L) {
		if (!_lg_typecheck_getView_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::View * osgViewer::CompositeViewer::getView(unsigned int i) function, expected prototype:\nosgViewer::View * osgViewer::CompositeViewer::getView(unsigned int i)\nClass arguments details:\n");
		}

		unsigned i=(unsigned)lua_tointeger(L,2);

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::View * osgViewer::CompositeViewer::getView(unsigned int)");
		}
		osgViewer::View * lret = self->getView(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::View >::push(L,lret,false);

		return 1;
	}

	// const osgViewer::View * osgViewer::CompositeViewer::getView(unsigned int i) const
	static int _bind_getView_overload_2(lua_State *L) {
		if (!_lg_typecheck_getView_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgViewer::View * osgViewer::CompositeViewer::getView(unsigned int i) const function, expected prototype:\nconst osgViewer::View * osgViewer::CompositeViewer::getView(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned i=(unsigned)lua_tointeger(L,2);

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgViewer::View * osgViewer::CompositeViewer::getView(unsigned int) const");
		}
		const osgViewer::View * lret = self->getView(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::View >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::CompositeViewer::getView
	static int _bind_getView(lua_State *L) {
		if (_lg_typecheck_getView_overload_1(L)) return _bind_getView_overload_1(L);
		if (_lg_typecheck_getView_overload_2(L)) return _bind_getView_overload_2(L);

		luaL_error(L, "error in function getView, cannot match any of the overloads for function getView:\n  getView(unsigned int)\n  getView(unsigned int)\n");
		return 0;
	}

	// unsigned int osgViewer::CompositeViewer::getNumViews() const
	static int _bind_getNumViews(lua_State *L) {
		if (!_lg_typecheck_getNumViews(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgViewer::CompositeViewer::getNumViews() const function, expected prototype:\nunsigned int osgViewer::CompositeViewer::getNumViews() const\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgViewer::CompositeViewer::getNumViews() const");
		}
		unsigned int lret = self->getNumViews();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgViewer::CompositeViewer::isRealized() const
	static int _bind_isRealized(lua_State *L) {
		if (!_lg_typecheck_isRealized(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::CompositeViewer::isRealized() const function, expected prototype:\nbool osgViewer::CompositeViewer::isRealized() const\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::CompositeViewer::isRealized() const");
		}
		bool lret = self->isRealized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::CompositeViewer::realize()
	static int _bind_realize(lua_State *L) {
		if (!_lg_typecheck_realize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::realize() function, expected prototype:\nvoid osgViewer::CompositeViewer::realize()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::realize()");
		}
		self->realize();

		return 0;
	}

	// void osgViewer::CompositeViewer::setStartTick(unsigned long long tick)
	static int _bind_setStartTick(lua_State *L) {
		if (!_lg_typecheck_setStartTick(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::setStartTick(unsigned long long tick) function, expected prototype:\nvoid osgViewer::CompositeViewer::setStartTick(unsigned long long tick)\nClass arguments details:\n");
		}

		unsigned long long tick=(unsigned long long)lua_tointeger(L,2);

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::setStartTick(unsigned long long)");
		}
		self->setStartTick(tick);

		return 0;
	}

	// void osgViewer::CompositeViewer::setReferenceTime(double time = 0.0)
	static int _bind_setReferenceTime(lua_State *L) {
		if (!_lg_typecheck_setReferenceTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::setReferenceTime(double time = 0.0) function, expected prototype:\nvoid osgViewer::CompositeViewer::setReferenceTime(double time = 0.0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double time=luatop>1 ? (double)lua_tonumber(L,2) : 0.0;

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::setReferenceTime(double)");
		}
		self->setReferenceTime(time);

		return 0;
	}

	// osg::FrameStamp * osgViewer::CompositeViewer::getFrameStamp()
	static int _bind_getFrameStamp_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFrameStamp_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameStamp * osgViewer::CompositeViewer::getFrameStamp() function, expected prototype:\nosg::FrameStamp * osgViewer::CompositeViewer::getFrameStamp()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::FrameStamp * osgViewer::CompositeViewer::getFrameStamp()");
		}
		osg::FrameStamp * lret = self->getFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// const osg::FrameStamp * osgViewer::CompositeViewer::getFrameStamp() const
	static int _bind_getFrameStamp_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFrameStamp_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::FrameStamp * osgViewer::CompositeViewer::getFrameStamp() const function, expected prototype:\nconst osg::FrameStamp * osgViewer::CompositeViewer::getFrameStamp() const\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::FrameStamp * osgViewer::CompositeViewer::getFrameStamp() const");
		}
		const osg::FrameStamp * lret = self->getFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::CompositeViewer::getFrameStamp
	static int _bind_getFrameStamp(lua_State *L) {
		if (_lg_typecheck_getFrameStamp_overload_1(L)) return _bind_getFrameStamp_overload_1(L);
		if (_lg_typecheck_getFrameStamp_overload_2(L)) return _bind_getFrameStamp_overload_2(L);

		luaL_error(L, "error in function getFrameStamp, cannot match any of the overloads for function getFrameStamp:\n  getFrameStamp()\n  getFrameStamp()\n");
		return 0;
	}

	// double osgViewer::CompositeViewer::elapsedTime()
	static int _bind_elapsedTime(lua_State *L) {
		if (!_lg_typecheck_elapsedTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgViewer::CompositeViewer::elapsedTime() function, expected prototype:\ndouble osgViewer::CompositeViewer::elapsedTime()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osgViewer::CompositeViewer::elapsedTime()");
		}
		double lret = self->elapsedTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::FrameStamp * osgViewer::CompositeViewer::getViewerFrameStamp()
	static int _bind_getViewerFrameStamp(lua_State *L) {
		if (!_lg_typecheck_getViewerFrameStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrameStamp * osgViewer::CompositeViewer::getViewerFrameStamp() function, expected prototype:\nosg::FrameStamp * osgViewer::CompositeViewer::getViewerFrameStamp()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::FrameStamp * osgViewer::CompositeViewer::getViewerFrameStamp()");
		}
		osg::FrameStamp * lret = self->getViewerFrameStamp();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FrameStamp >::push(L,lret,false);

		return 1;
	}

	// int osgViewer::CompositeViewer::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgViewer::CompositeViewer::run() function, expected prototype:\nint osgViewer::CompositeViewer::run()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgViewer::CompositeViewer::run()");
		}
		int lret = self->run();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgViewer::CompositeViewer::checkNeedToDoFrame()
	static int _bind_checkNeedToDoFrame(lua_State *L) {
		if (!_lg_typecheck_checkNeedToDoFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::CompositeViewer::checkNeedToDoFrame() function, expected prototype:\nbool osgViewer::CompositeViewer::checkNeedToDoFrame()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::CompositeViewer::checkNeedToDoFrame()");
		}
		bool lret = self->checkNeedToDoFrame();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgViewer::CompositeViewer::advance(double simulationTime = DBL_MAX)
	static int _bind_advance(lua_State *L) {
		if (!_lg_typecheck_advance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::advance(double simulationTime = DBL_MAX) function, expected prototype:\nvoid osgViewer::CompositeViewer::advance(double simulationTime = DBL_MAX)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double simulationTime=luatop>1 ? (double)lua_tonumber(L,2) : DBL_MAX;

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::advance(double)");
		}
		self->advance(simulationTime);

		return 0;
	}

	// void osgViewer::CompositeViewer::eventTraversal()
	static int _bind_eventTraversal(lua_State *L) {
		if (!_lg_typecheck_eventTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::eventTraversal() function, expected prototype:\nvoid osgViewer::CompositeViewer::eventTraversal()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::eventTraversal()");
		}
		self->eventTraversal();

		return 0;
	}

	// void osgViewer::CompositeViewer::updateTraversal()
	static int _bind_updateTraversal(lua_State *L) {
		if (!_lg_typecheck_updateTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::updateTraversal() function, expected prototype:\nvoid osgViewer::CompositeViewer::updateTraversal()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::updateTraversal()");
		}
		self->updateTraversal();

		return 0;
	}

	// void osgViewer::CompositeViewer::setCameraWithFocus(osg::Camera * camera)
	static int _bind_setCameraWithFocus(lua_State *L) {
		if (!_lg_typecheck_setCameraWithFocus(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::setCameraWithFocus(osg::Camera * camera) function, expected prototype:\nvoid osgViewer::CompositeViewer::setCameraWithFocus(osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Camera* camera=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::setCameraWithFocus(osg::Camera *)");
		}
		self->setCameraWithFocus(camera);

		return 0;
	}

	// osg::Camera * osgViewer::CompositeViewer::getCameraWithFocus()
	static int _bind_getCameraWithFocus_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCameraWithFocus_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Camera * osgViewer::CompositeViewer::getCameraWithFocus() function, expected prototype:\nosg::Camera * osgViewer::CompositeViewer::getCameraWithFocus()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Camera * osgViewer::CompositeViewer::getCameraWithFocus()");
		}
		osg::Camera * lret = self->getCameraWithFocus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// const osg::Camera * osgViewer::CompositeViewer::getCameraWithFocus() const
	static int _bind_getCameraWithFocus_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCameraWithFocus_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Camera * osgViewer::CompositeViewer::getCameraWithFocus() const function, expected prototype:\nconst osg::Camera * osgViewer::CompositeViewer::getCameraWithFocus() const\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Camera * osgViewer::CompositeViewer::getCameraWithFocus() const");
		}
		const osg::Camera * lret = self->getCameraWithFocus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Camera >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::CompositeViewer::getCameraWithFocus
	static int _bind_getCameraWithFocus(lua_State *L) {
		if (_lg_typecheck_getCameraWithFocus_overload_1(L)) return _bind_getCameraWithFocus_overload_1(L);
		if (_lg_typecheck_getCameraWithFocus_overload_2(L)) return _bind_getCameraWithFocus_overload_2(L);

		luaL_error(L, "error in function getCameraWithFocus, cannot match any of the overloads for function getCameraWithFocus:\n  getCameraWithFocus()\n  getCameraWithFocus()\n");
		return 0;
	}

	// osgViewer::View * osgViewer::CompositeViewer::getViewWithFocus()
	static int _bind_getViewWithFocus_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewWithFocus_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::View * osgViewer::CompositeViewer::getViewWithFocus() function, expected prototype:\nosgViewer::View * osgViewer::CompositeViewer::getViewWithFocus()\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::View * osgViewer::CompositeViewer::getViewWithFocus()");
		}
		osgViewer::View * lret = self->getViewWithFocus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::View >::push(L,lret,false);

		return 1;
	}

	// const osgViewer::View * osgViewer::CompositeViewer::getViewWithFocus() const
	static int _bind_getViewWithFocus_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewWithFocus_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgViewer::View * osgViewer::CompositeViewer::getViewWithFocus() const function, expected prototype:\nconst osgViewer::View * osgViewer::CompositeViewer::getViewWithFocus() const\nClass arguments details:\n");
		}


		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgViewer::View * osgViewer::CompositeViewer::getViewWithFocus() const");
		}
		const osgViewer::View * lret = self->getViewWithFocus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::View >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::CompositeViewer::getViewWithFocus
	static int _bind_getViewWithFocus(lua_State *L) {
		if (_lg_typecheck_getViewWithFocus_overload_1(L)) return _bind_getViewWithFocus_overload_1(L);
		if (_lg_typecheck_getViewWithFocus_overload_2(L)) return _bind_getViewWithFocus_overload_2(L);

		luaL_error(L, "error in function getViewWithFocus, cannot match any of the overloads for function getViewWithFocus:\n  getViewWithFocus()\n  getViewWithFocus()\n");
		return 0;
	}

	// void osgViewer::CompositeViewer::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)
	static int _bind_getCameras(lua_State *L) {
		if (!_lg_typecheck_getCameras(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true) function, expected prototype:\nvoid osgViewer::CompositeViewer::getCameras(osgViewer::ViewerBase::Cameras & cameras, bool onlyActive = true)\nClass arguments details:\narg 1 ID = 18740017\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Cameras* cameras_ptr=(Luna< osgViewer::ViewerBase::Cameras >::check(L,2));
		if( !cameras_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cameras in osgViewer::CompositeViewer::getCameras function");
		}
		osgViewer::ViewerBase::Cameras & cameras=*cameras_ptr;
		bool onlyActive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::getCameras(osgViewer::ViewerBase::Cameras &, bool)");
		}
		self->getCameras(cameras, onlyActive);

		return 0;
	}

	// void osgViewer::CompositeViewer::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)
	static int _bind_getContexts(lua_State *L) {
		if (!_lg_typecheck_getContexts(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::CompositeViewer::getContexts(osgViewer::ViewerBase::Contexts & contexts, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 48105087\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Contexts* contexts_ptr=(Luna< osgViewer::ViewerBase::Contexts >::check(L,2));
		if( !contexts_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg contexts in osgViewer::CompositeViewer::getContexts function");
		}
		osgViewer::ViewerBase::Contexts & contexts=*contexts_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::getContexts(osgViewer::ViewerBase::Contexts &, bool)");
		}
		self->getContexts(contexts, onlyValid);

		return 0;
	}

	// void osgViewer::CompositeViewer::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)
	static int _bind_getScenes(lua_State *L) {
		if (!_lg_typecheck_getScenes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::CompositeViewer::getScenes(osgViewer::ViewerBase::Scenes & scenes, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 98997480\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Scenes* scenes_ptr=(Luna< osgViewer::ViewerBase::Scenes >::check(L,2));
		if( !scenes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scenes in osgViewer::CompositeViewer::getScenes function");
		}
		osgViewer::ViewerBase::Scenes & scenes=*scenes_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::getScenes(osgViewer::ViewerBase::Scenes &, bool)");
		}
		self->getScenes(scenes, onlyValid);

		return 0;
	}

	// void osgViewer::CompositeViewer::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)
	static int _bind_getViews(lua_State *L) {
		if (!_lg_typecheck_getViews(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true) function, expected prototype:\nvoid osgViewer::CompositeViewer::getViews(osgViewer::ViewerBase::Views & views, bool onlyValid = true)\nClass arguments details:\narg 1 ID = 2917259\n");
		}

		int luatop = lua_gettop(L);

		osgViewer::ViewerBase::Views* views_ptr=(Luna< osgViewer::ViewerBase::Views >::check(L,2));
		if( !views_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg views in osgViewer::CompositeViewer::getViews function");
		}
		osgViewer::ViewerBase::Views & views=*views_ptr;
		bool onlyValid=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : true;

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::getViews(osgViewer::ViewerBase::Views &, bool)");
		}
		self->getViews(views, onlyValid);

		return 0;
	}

	// void osgViewer::CompositeViewer::getUsage(osg::ApplicationUsage & usage) const
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::CompositeViewer::getUsage(osg::ApplicationUsage & usage) const function, expected prototype:\nvoid osgViewer::CompositeViewer::getUsage(osg::ApplicationUsage & usage) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ApplicationUsage* usage_ptr=dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,2));
		if( !usage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usage in osgViewer::CompositeViewer::getUsage function");
		}
		osg::ApplicationUsage & usage=*usage_ptr;

		osgViewer::CompositeViewer* self=dynamic_cast< osgViewer::CompositeViewer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::CompositeViewer::getUsage(osg::ApplicationUsage &) const");
		}
		self->getUsage(usage);

		return 0;
	}


	// Operator binds:

};

osgViewer::CompositeViewer* LunaTraits< osgViewer::CompositeViewer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_CompositeViewer::_bind_ctor(L);
}

void LunaTraits< osgViewer::CompositeViewer >::_bind_dtor(osgViewer::CompositeViewer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::CompositeViewer >::className[] = "CompositeViewer";
const char LunaTraits< osgViewer::CompositeViewer >::fullName[] = "osgViewer::CompositeViewer";
const char LunaTraits< osgViewer::CompositeViewer >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::CompositeViewer >::parents[] = {"osgViewer.ViewerBase", 0};
const int LunaTraits< osgViewer::CompositeViewer >::hash = 98680734;
const int LunaTraits< osgViewer::CompositeViewer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::CompositeViewer >::methods[] = {
	{"cloneType", &luna_wrapper_osgViewer_CompositeViewer::_bind_cloneType},
	{"clone", &luna_wrapper_osgViewer_CompositeViewer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgViewer_CompositeViewer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgViewer_CompositeViewer::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_CompositeViewer::_bind_className},
	{"readConfiguration", &luna_wrapper_osgViewer_CompositeViewer::_bind_readConfiguration},
	{"setViewerStats", &luna_wrapper_osgViewer_CompositeViewer::_bind_setViewerStats},
	{"getViewerStats", &luna_wrapper_osgViewer_CompositeViewer::_bind_getViewerStats},
	{"addView", &luna_wrapper_osgViewer_CompositeViewer::_bind_addView},
	{"removeView", &luna_wrapper_osgViewer_CompositeViewer::_bind_removeView},
	{"getView", &luna_wrapper_osgViewer_CompositeViewer::_bind_getView},
	{"getNumViews", &luna_wrapper_osgViewer_CompositeViewer::_bind_getNumViews},
	{"isRealized", &luna_wrapper_osgViewer_CompositeViewer::_bind_isRealized},
	{"realize", &luna_wrapper_osgViewer_CompositeViewer::_bind_realize},
	{"setStartTick", &luna_wrapper_osgViewer_CompositeViewer::_bind_setStartTick},
	{"setReferenceTime", &luna_wrapper_osgViewer_CompositeViewer::_bind_setReferenceTime},
	{"getFrameStamp", &luna_wrapper_osgViewer_CompositeViewer::_bind_getFrameStamp},
	{"elapsedTime", &luna_wrapper_osgViewer_CompositeViewer::_bind_elapsedTime},
	{"getViewerFrameStamp", &luna_wrapper_osgViewer_CompositeViewer::_bind_getViewerFrameStamp},
	{"run", &luna_wrapper_osgViewer_CompositeViewer::_bind_run},
	{"checkNeedToDoFrame", &luna_wrapper_osgViewer_CompositeViewer::_bind_checkNeedToDoFrame},
	{"advance", &luna_wrapper_osgViewer_CompositeViewer::_bind_advance},
	{"eventTraversal", &luna_wrapper_osgViewer_CompositeViewer::_bind_eventTraversal},
	{"updateTraversal", &luna_wrapper_osgViewer_CompositeViewer::_bind_updateTraversal},
	{"setCameraWithFocus", &luna_wrapper_osgViewer_CompositeViewer::_bind_setCameraWithFocus},
	{"getCameraWithFocus", &luna_wrapper_osgViewer_CompositeViewer::_bind_getCameraWithFocus},
	{"getViewWithFocus", &luna_wrapper_osgViewer_CompositeViewer::_bind_getViewWithFocus},
	{"getCameras", &luna_wrapper_osgViewer_CompositeViewer::_bind_getCameras},
	{"getContexts", &luna_wrapper_osgViewer_CompositeViewer::_bind_getContexts},
	{"getScenes", &luna_wrapper_osgViewer_CompositeViewer::_bind_getScenes},
	{"getViews", &luna_wrapper_osgViewer_CompositeViewer::_bind_getViews},
	{"getUsage", &luna_wrapper_osgViewer_CompositeViewer::_bind_getUsage},
	{"__eq", &luna_wrapper_osgViewer_CompositeViewer::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::CompositeViewer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_CompositeViewer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::CompositeViewer >::enumValues[] = {
	{0,0}
};


