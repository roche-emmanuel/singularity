#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_CameraView.h>

class luna_wrapper_osg_CameraView {
public:
	typedef Luna< osg::CameraView > luna_t;

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
		osg::CameraView* ptr= dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CameraView >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAttitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttitude(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFieldOfView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFieldOfView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFieldOfViewMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFieldOfViewMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFocalLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFocalLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CameraView::CameraView()
	static osg::CameraView* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CameraView::CameraView() function, expected prototype:\nosg::CameraView::CameraView()\nClass arguments details:\n");
		}


		return new osg::CameraView();
	}

	// osg::CameraView::CameraView(const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CameraView* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CameraView::CameraView(const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CameraView::CameraView(const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::CameraView* pat_ptr=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::CameraView::CameraView function");
		}
		const osg::CameraView & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CameraView::CameraView function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::CameraView(pat, copyop);
	}

	// osg::CameraView::CameraView(lua_Table * data)
	static osg::CameraView* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CameraView::CameraView(lua_Table * data) function, expected prototype:\nosg::CameraView::CameraView(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_CameraView(L,NULL);
	}

	// osg::CameraView::CameraView(lua_Table * data, const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CameraView* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CameraView::CameraView(lua_Table * data, const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CameraView::CameraView(lua_Table * data, const osg::CameraView & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::CameraView* pat_ptr=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,2));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::CameraView::CameraView function");
		}
		const osg::CameraView & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CameraView::CameraView function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_CameraView(L,NULL, pat, copyop);
	}

	// Overload binder for osg::CameraView::CameraView
	static osg::CameraView* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function CameraView, cannot match any of the overloads for function CameraView:\n  CameraView()\n  CameraView(const osg::CameraView &, const osg::CopyOp &)\n  CameraView(lua_Table *)\n  CameraView(lua_Table *, const osg::CameraView &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::CameraView::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CameraView::cloneType() const function, expected prototype:\nosg::Object * osg::CameraView::cloneType() const\nClass arguments details:\n");
		}


		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::CameraView::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CameraView::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CameraView::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::CameraView::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CameraView::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::CameraView::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CameraView::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CameraView::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CameraView::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CameraView::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CameraView::className() const function, expected prototype:\nconst char * osg::CameraView::className() const\nClass arguments details:\n");
		}


		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CameraView::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CameraView::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CameraView::libraryName() const function, expected prototype:\nconst char * osg::CameraView::libraryName() const\nClass arguments details:\n");
		}


		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CameraView::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::CameraView::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CameraView::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::CameraView::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::CameraView::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CameraView::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::CameraView::setPosition(const osg::Vec3d & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setPosition(const osg::Vec3d & pos) function, expected prototype:\nvoid osg::CameraView::setPosition(const osg::Vec3d & pos)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* pos_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::CameraView::setPosition function");
		}
		const osg::Vec3d & pos=*pos_ptr;

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CameraView::setPosition(const osg::Vec3d &)");
		}
		self->setPosition(pos);

		return 0;
	}

	// const osg::Vec3d & osg::CameraView::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::CameraView::getPosition() const function, expected prototype:\nconst osg::Vec3d & osg::CameraView::getPosition() const\nClass arguments details:\n");
		}


		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::CameraView::getPosition() const");
		}
		const osg::Vec3d* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::CameraView::setAttitude(const osg::Quat & quat)
	static int _bind_setAttitude(lua_State *L) {
		if (!_lg_typecheck_setAttitude(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setAttitude(const osg::Quat & quat) function, expected prototype:\nvoid osg::CameraView::setAttitude(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::CameraView::setAttitude function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CameraView::setAttitude(const osg::Quat &)");
		}
		self->setAttitude(quat);

		return 0;
	}

	// const osg::Quat & osg::CameraView::getAttitude() const
	static int _bind_getAttitude(lua_State *L) {
		if (!_lg_typecheck_getAttitude(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::CameraView::getAttitude() const function, expected prototype:\nconst osg::Quat & osg::CameraView::getAttitude() const\nClass arguments details:\n");
		}


		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::CameraView::getAttitude() const");
		}
		const osg::Quat* lret = &self->getAttitude();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// void osg::CameraView::setFieldOfView(double fieldOfView)
	static int _bind_setFieldOfView(lua_State *L) {
		if (!_lg_typecheck_setFieldOfView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setFieldOfView(double fieldOfView) function, expected prototype:\nvoid osg::CameraView::setFieldOfView(double fieldOfView)\nClass arguments details:\n");
		}

		double fieldOfView=(double)lua_tonumber(L,2);

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CameraView::setFieldOfView(double)");
		}
		self->setFieldOfView(fieldOfView);

		return 0;
	}

	// double osg::CameraView::getFieldOfView() const
	static int _bind_getFieldOfView(lua_State *L) {
		if (!_lg_typecheck_getFieldOfView(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::CameraView::getFieldOfView() const function, expected prototype:\ndouble osg::CameraView::getFieldOfView() const\nClass arguments details:\n");
		}


		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::CameraView::getFieldOfView() const");
		}
		double lret = self->getFieldOfView();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CameraView::setFieldOfViewMode(osg::CameraView::FieldOfViewMode mode)
	static int _bind_setFieldOfViewMode(lua_State *L) {
		if (!_lg_typecheck_setFieldOfViewMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setFieldOfViewMode(osg::CameraView::FieldOfViewMode mode) function, expected prototype:\nvoid osg::CameraView::setFieldOfViewMode(osg::CameraView::FieldOfViewMode mode)\nClass arguments details:\n");
		}

		osg::CameraView::FieldOfViewMode mode=(osg::CameraView::FieldOfViewMode)lua_tointeger(L,2);

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CameraView::setFieldOfViewMode(osg::CameraView::FieldOfViewMode)");
		}
		self->setFieldOfViewMode(mode);

		return 0;
	}

	// osg::CameraView::FieldOfViewMode osg::CameraView::getFieldOfViewMode() const
	static int _bind_getFieldOfViewMode(lua_State *L) {
		if (!_lg_typecheck_getFieldOfViewMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CameraView::FieldOfViewMode osg::CameraView::getFieldOfViewMode() const function, expected prototype:\nosg::CameraView::FieldOfViewMode osg::CameraView::getFieldOfViewMode() const\nClass arguments details:\n");
		}


		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CameraView::FieldOfViewMode osg::CameraView::getFieldOfViewMode() const");
		}
		osg::CameraView::FieldOfViewMode lret = self->getFieldOfViewMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CameraView::setFocalLength(double focalLength)
	static int _bind_setFocalLength(lua_State *L) {
		if (!_lg_typecheck_setFocalLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CameraView::setFocalLength(double focalLength) function, expected prototype:\nvoid osg::CameraView::setFocalLength(double focalLength)\nClass arguments details:\n");
		}

		double focalLength=(double)lua_tonumber(L,2);

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CameraView::setFocalLength(double)");
		}
		self->setFocalLength(focalLength);

		return 0;
	}

	// double osg::CameraView::getFocalLength() const
	static int _bind_getFocalLength(lua_State *L) {
		if (!_lg_typecheck_getFocalLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::CameraView::getFocalLength() const function, expected prototype:\ndouble osg::CameraView::getFocalLength() const\nClass arguments details:\n");
		}


		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::CameraView::getFocalLength() const");
		}
		double lret = self->getFocalLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::CameraView::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::CameraView::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::CameraView::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CameraView::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::CameraView::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CameraView::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::CameraView::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::CameraView::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::CameraView* self=dynamic_cast< osg::CameraView* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CameraView::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::CameraView* LunaTraits< osg::CameraView >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CameraView::_bind_ctor(L);
}

void LunaTraits< osg::CameraView >::_bind_dtor(osg::CameraView* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CameraView >::className[] = "CameraView";
const char LunaTraits< osg::CameraView >::fullName[] = "osg::CameraView";
const char LunaTraits< osg::CameraView >::moduleName[] = "osg";
const char* LunaTraits< osg::CameraView >::parents[] = {"osg.Transform", 0};
const int LunaTraits< osg::CameraView >::hash = 81795341;
const int LunaTraits< osg::CameraView >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CameraView >::methods[] = {
	{"cloneType", &luna_wrapper_osg_CameraView::_bind_cloneType},
	{"clone", &luna_wrapper_osg_CameraView::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_CameraView::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_CameraView::_bind_className},
	{"libraryName", &luna_wrapper_osg_CameraView::_bind_libraryName},
	{"accept", &luna_wrapper_osg_CameraView::_bind_accept},
	{"setPosition", &luna_wrapper_osg_CameraView::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_CameraView::_bind_getPosition},
	{"setAttitude", &luna_wrapper_osg_CameraView::_bind_setAttitude},
	{"getAttitude", &luna_wrapper_osg_CameraView::_bind_getAttitude},
	{"setFieldOfView", &luna_wrapper_osg_CameraView::_bind_setFieldOfView},
	{"getFieldOfView", &luna_wrapper_osg_CameraView::_bind_getFieldOfView},
	{"setFieldOfViewMode", &luna_wrapper_osg_CameraView::_bind_setFieldOfViewMode},
	{"getFieldOfViewMode", &luna_wrapper_osg_CameraView::_bind_getFieldOfViewMode},
	{"setFocalLength", &luna_wrapper_osg_CameraView::_bind_setFocalLength},
	{"getFocalLength", &luna_wrapper_osg_CameraView::_bind_getFocalLength},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_CameraView::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_CameraView::_bind_computeWorldToLocalMatrix},
	{"__eq", &luna_wrapper_osg_CameraView::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CameraView >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CameraView::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CameraView >::enumValues[] = {
	{"UNCONSTRAINED", osg::CameraView::UNCONSTRAINED},
	{"HORIZONTAL", osg::CameraView::HORIZONTAL},
	{"VERTICAL", osg::CameraView::VERTICAL},
	{0,0}
};


