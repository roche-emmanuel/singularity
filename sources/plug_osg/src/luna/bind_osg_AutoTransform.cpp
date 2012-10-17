#include <plug_common.h>

class luna_wrapper_osg_AutoTransform {
public:
	typedef Luna< osg::AutoTransform > luna_t;

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
		osg::AutoTransform* ptr= dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AutoTransform >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_asAutoTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asAutoTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setRotation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScale_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScale_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinimumScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinimumScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumScale(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPivotPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPivotPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoUpdateEyeMovementTolerance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoUpdateEyeMovementTolerance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoRotateMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoRotateMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAxis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAxis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoScaleToScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoScaleToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAutoScaleTransitionWidthRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAutoScaleTransitionWidthRatio(lua_State *L) {
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

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::AutoTransform::AutoTransform()
	static osg::AutoTransform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AutoTransform::AutoTransform() function, expected prototype:\nosg::AutoTransform::AutoTransform()\nClass arguments details:\n");
		}


		return new osg::AutoTransform();
	}

	// osg::AutoTransform::AutoTransform(const osg::AutoTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AutoTransform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AutoTransform::AutoTransform(const osg::AutoTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AutoTransform::AutoTransform(const osg::AutoTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::AutoTransform* pat_ptr=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::AutoTransform::AutoTransform function");
		}
		const osg::AutoTransform & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AutoTransform::AutoTransform function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::AutoTransform(pat, copyop);
	}

	// Overload binder for osg::AutoTransform::AutoTransform
	static osg::AutoTransform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AutoTransform, cannot match any of the overloads for function AutoTransform:\n  AutoTransform()\n  AutoTransform(const osg::AutoTransform &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::AutoTransform::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AutoTransform::cloneType() const function, expected prototype:\nosg::Object * osg::AutoTransform::cloneType() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AutoTransform::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AutoTransform::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AutoTransform::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::AutoTransform::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AutoTransform::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AutoTransform::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AutoTransform::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AutoTransform::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AutoTransform::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AutoTransform::className() const function, expected prototype:\nconst char * osg::AutoTransform::className() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AutoTransform::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AutoTransform::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AutoTransform::libraryName() const function, expected prototype:\nconst char * osg::AutoTransform::libraryName() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AutoTransform::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::AutoTransform::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::AutoTransform::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::AutoTransform::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// osg::AutoTransform * osg::AutoTransform::asAutoTransform()
	static int _bind_asAutoTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asAutoTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AutoTransform * osg::AutoTransform::asAutoTransform() function, expected prototype:\nosg::AutoTransform * osg::AutoTransform::asAutoTransform()\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::AutoTransform * osg::AutoTransform::asAutoTransform()");
		}
		osg::AutoTransform * lret = self->asAutoTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AutoTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::AutoTransform * osg::AutoTransform::asAutoTransform() const
	static int _bind_asAutoTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asAutoTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::AutoTransform * osg::AutoTransform::asAutoTransform() const function, expected prototype:\nconst osg::AutoTransform * osg::AutoTransform::asAutoTransform() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::AutoTransform * osg::AutoTransform::asAutoTransform() const");
		}
		const osg::AutoTransform * lret = self->asAutoTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::AutoTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::AutoTransform::asAutoTransform
	static int _bind_asAutoTransform(lua_State *L) {
		if (_lg_typecheck_asAutoTransform_overload_1(L)) return _bind_asAutoTransform_overload_1(L);
		if (_lg_typecheck_asAutoTransform_overload_2(L)) return _bind_asAutoTransform_overload_2(L);

		luaL_error(L, "error in function asAutoTransform, cannot match any of the overloads for function asAutoTransform:\n  asAutoTransform()\n  asAutoTransform()\n");
		return 0;
	}

	// void osg::AutoTransform::setPosition(const osg::Vec3d & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setPosition(const osg::Vec3d & pos) function, expected prototype:\nvoid osg::AutoTransform::setPosition(const osg::Vec3d & pos)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* pos_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::AutoTransform::setPosition function");
		}
		const osg::Vec3d & pos=*pos_ptr;

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setPosition(const osg::Vec3d &)");
		}
		self->setPosition(pos);

		return 0;
	}

	// const osg::Vec3d & osg::AutoTransform::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::AutoTransform::getPosition() const function, expected prototype:\nconst osg::Vec3d & osg::AutoTransform::getPosition() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::AutoTransform::getPosition() const");
		}
		const osg::Vec3d* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setRotation(const osg::Quat & quat)
	static int _bind_setRotation(lua_State *L) {
		if (!_lg_typecheck_setRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setRotation(const osg::Quat & quat) function, expected prototype:\nvoid osg::AutoTransform::setRotation(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::AutoTransform::setRotation function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setRotation(const osg::Quat &)");
		}
		self->setRotation(quat);

		return 0;
	}

	// const osg::Quat & osg::AutoTransform::getRotation() const
	static int _bind_getRotation(lua_State *L) {
		if (!_lg_typecheck_getRotation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::AutoTransform::getRotation() const function, expected prototype:\nconst osg::Quat & osg::AutoTransform::getRotation() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::AutoTransform::getRotation() const");
		}
		const osg::Quat* lret = &self->getRotation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setScale(double scale)
	static int _bind_setScale_overload_1(lua_State *L) {
		if (!_lg_typecheck_setScale_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setScale(double scale) function, expected prototype:\nvoid osg::AutoTransform::setScale(double scale)\nClass arguments details:\n");
		}

		double scale=(double)lua_tonumber(L,2);

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setScale(double)");
		}
		self->setScale(scale);

		return 0;
	}

	// void osg::AutoTransform::setScale(const osg::Vec3d & scale)
	static int _bind_setScale_overload_2(lua_State *L) {
		if (!_lg_typecheck_setScale_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setScale(const osg::Vec3d & scale) function, expected prototype:\nvoid osg::AutoTransform::setScale(const osg::Vec3d & scale)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* scale_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !scale_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::AutoTransform::setScale function");
		}
		const osg::Vec3d & scale=*scale_ptr;

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setScale(const osg::Vec3d &)");
		}
		self->setScale(scale);

		return 0;
	}

	// Overload binder for osg::AutoTransform::setScale
	static int _bind_setScale(lua_State *L) {
		if (_lg_typecheck_setScale_overload_1(L)) return _bind_setScale_overload_1(L);
		if (_lg_typecheck_setScale_overload_2(L)) return _bind_setScale_overload_2(L);

		luaL_error(L, "error in function setScale, cannot match any of the overloads for function setScale:\n  setScale(double)\n  setScale(const osg::Vec3d &)\n");
		return 0;
	}

	// const osg::Vec3d & osg::AutoTransform::getScale() const
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::AutoTransform::getScale() const function, expected prototype:\nconst osg::Vec3d & osg::AutoTransform::getScale() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::AutoTransform::getScale() const");
		}
		const osg::Vec3d* lret = &self->getScale();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setMinimumScale(double minimumScale)
	static int _bind_setMinimumScale(lua_State *L) {
		if (!_lg_typecheck_setMinimumScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setMinimumScale(double minimumScale) function, expected prototype:\nvoid osg::AutoTransform::setMinimumScale(double minimumScale)\nClass arguments details:\n");
		}

		double minimumScale=(double)lua_tonumber(L,2);

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setMinimumScale(double)");
		}
		self->setMinimumScale(minimumScale);

		return 0;
	}

	// double osg::AutoTransform::getMinimumScale() const
	static int _bind_getMinimumScale(lua_State *L) {
		if (!_lg_typecheck_getMinimumScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AutoTransform::getMinimumScale() const function, expected prototype:\ndouble osg::AutoTransform::getMinimumScale() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AutoTransform::getMinimumScale() const");
		}
		double lret = self->getMinimumScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AutoTransform::setMaximumScale(double maximumScale)
	static int _bind_setMaximumScale(lua_State *L) {
		if (!_lg_typecheck_setMaximumScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setMaximumScale(double maximumScale) function, expected prototype:\nvoid osg::AutoTransform::setMaximumScale(double maximumScale)\nClass arguments details:\n");
		}

		double maximumScale=(double)lua_tonumber(L,2);

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setMaximumScale(double)");
		}
		self->setMaximumScale(maximumScale);

		return 0;
	}

	// double osg::AutoTransform::getMaximumScale() const
	static int _bind_getMaximumScale(lua_State *L) {
		if (!_lg_typecheck_getMaximumScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::AutoTransform::getMaximumScale() const function, expected prototype:\ndouble osg::AutoTransform::getMaximumScale() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::AutoTransform::getMaximumScale() const");
		}
		double lret = self->getMaximumScale();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AutoTransform::setPivotPoint(const osg::Vec3d & pivot)
	static int _bind_setPivotPoint(lua_State *L) {
		if (!_lg_typecheck_setPivotPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setPivotPoint(const osg::Vec3d & pivot) function, expected prototype:\nvoid osg::AutoTransform::setPivotPoint(const osg::Vec3d & pivot)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* pivot_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osg::AutoTransform::setPivotPoint function");
		}
		const osg::Vec3d & pivot=*pivot_ptr;

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setPivotPoint(const osg::Vec3d &)");
		}
		self->setPivotPoint(pivot);

		return 0;
	}

	// const osg::Vec3d & osg::AutoTransform::getPivotPoint() const
	static int _bind_getPivotPoint(lua_State *L) {
		if (!_lg_typecheck_getPivotPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::AutoTransform::getPivotPoint() const function, expected prototype:\nconst osg::Vec3d & osg::AutoTransform::getPivotPoint() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::AutoTransform::getPivotPoint() const");
		}
		const osg::Vec3d* lret = &self->getPivotPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setAutoUpdateEyeMovementTolerance(float tolerance)
	static int _bind_setAutoUpdateEyeMovementTolerance(lua_State *L) {
		if (!_lg_typecheck_setAutoUpdateEyeMovementTolerance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAutoUpdateEyeMovementTolerance(float tolerance) function, expected prototype:\nvoid osg::AutoTransform::setAutoUpdateEyeMovementTolerance(float tolerance)\nClass arguments details:\n");
		}

		float tolerance=(float)lua_tonumber(L,2);

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAutoUpdateEyeMovementTolerance(float)");
		}
		self->setAutoUpdateEyeMovementTolerance(tolerance);

		return 0;
	}

	// float osg::AutoTransform::getAutoUpdateEyeMovementTolerance() const
	static int _bind_getAutoUpdateEyeMovementTolerance(lua_State *L) {
		if (!_lg_typecheck_getAutoUpdateEyeMovementTolerance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::AutoTransform::getAutoUpdateEyeMovementTolerance() const function, expected prototype:\nfloat osg::AutoTransform::getAutoUpdateEyeMovementTolerance() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::AutoTransform::getAutoUpdateEyeMovementTolerance() const");
		}
		float lret = self->getAutoUpdateEyeMovementTolerance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AutoTransform::setAutoRotateMode(osg::AutoTransform::AutoRotateMode mode)
	static int _bind_setAutoRotateMode(lua_State *L) {
		if (!_lg_typecheck_setAutoRotateMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAutoRotateMode(osg::AutoTransform::AutoRotateMode mode) function, expected prototype:\nvoid osg::AutoTransform::setAutoRotateMode(osg::AutoTransform::AutoRotateMode mode)\nClass arguments details:\n");
		}

		osg::AutoTransform::AutoRotateMode mode=(osg::AutoTransform::AutoRotateMode)lua_tointeger(L,2);

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAutoRotateMode(osg::AutoTransform::AutoRotateMode)");
		}
		self->setAutoRotateMode(mode);

		return 0;
	}

	// osg::AutoTransform::AutoRotateMode osg::AutoTransform::getAutoRotateMode() const
	static int _bind_getAutoRotateMode(lua_State *L) {
		if (!_lg_typecheck_getAutoRotateMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AutoTransform::AutoRotateMode osg::AutoTransform::getAutoRotateMode() const function, expected prototype:\nosg::AutoTransform::AutoRotateMode osg::AutoTransform::getAutoRotateMode() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::AutoTransform::AutoRotateMode osg::AutoTransform::getAutoRotateMode() const");
		}
		osg::AutoTransform::AutoRotateMode lret = self->getAutoRotateMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AutoTransform::setAxis(const osg::Vec3f & axis)
	static int _bind_setAxis(lua_State *L) {
		if (!_lg_typecheck_setAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAxis(const osg::Vec3f & axis) function, expected prototype:\nvoid osg::AutoTransform::setAxis(const osg::Vec3f & axis)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* axis_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in osg::AutoTransform::setAxis function");
		}
		const osg::Vec3f & axis=*axis_ptr;

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAxis(const osg::Vec3f &)");
		}
		self->setAxis(axis);

		return 0;
	}

	// const osg::Vec3f & osg::AutoTransform::getAxis() const
	static int _bind_getAxis(lua_State *L) {
		if (!_lg_typecheck_getAxis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::AutoTransform::getAxis() const function, expected prototype:\nconst osg::Vec3f & osg::AutoTransform::getAxis() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::AutoTransform::getAxis() const");
		}
		const osg::Vec3f* lret = &self->getAxis();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setNormal(const osg::Vec3f & normal)
	static int _bind_setNormal(lua_State *L) {
		if (!_lg_typecheck_setNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setNormal(const osg::Vec3f & normal) function, expected prototype:\nvoid osg::AutoTransform::setNormal(const osg::Vec3f & normal)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* normal_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !normal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg normal in osg::AutoTransform::setNormal function");
		}
		const osg::Vec3f & normal=*normal_ptr;

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setNormal(const osg::Vec3f &)");
		}
		self->setNormal(normal);

		return 0;
	}

	// const osg::Vec3f & osg::AutoTransform::getNormal() const
	static int _bind_getNormal(lua_State *L) {
		if (!_lg_typecheck_getNormal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::AutoTransform::getNormal() const function, expected prototype:\nconst osg::Vec3f & osg::AutoTransform::getNormal() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::AutoTransform::getNormal() const");
		}
		const osg::Vec3f* lret = &self->getNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::AutoTransform::setAutoScaleToScreen(bool autoScaleToScreen)
	static int _bind_setAutoScaleToScreen(lua_State *L) {
		if (!_lg_typecheck_setAutoScaleToScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAutoScaleToScreen(bool autoScaleToScreen) function, expected prototype:\nvoid osg::AutoTransform::setAutoScaleToScreen(bool autoScaleToScreen)\nClass arguments details:\n");
		}

		bool autoScaleToScreen=(bool)(lua_toboolean(L,2)==1);

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAutoScaleToScreen(bool)");
		}
		self->setAutoScaleToScreen(autoScaleToScreen);

		return 0;
	}

	// bool osg::AutoTransform::getAutoScaleToScreen() const
	static int _bind_getAutoScaleToScreen(lua_State *L) {
		if (!_lg_typecheck_getAutoScaleToScreen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::getAutoScaleToScreen() const function, expected prototype:\nbool osg::AutoTransform::getAutoScaleToScreen() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::getAutoScaleToScreen() const");
		}
		bool lret = self->getAutoScaleToScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AutoTransform::setAutoScaleTransitionWidthRatio(float ratio)
	static int _bind_setAutoScaleTransitionWidthRatio(lua_State *L) {
		if (!_lg_typecheck_setAutoScaleTransitionWidthRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AutoTransform::setAutoScaleTransitionWidthRatio(float ratio) function, expected prototype:\nvoid osg::AutoTransform::setAutoScaleTransitionWidthRatio(float ratio)\nClass arguments details:\n");
		}

		float ratio=(float)lua_tonumber(L,2);

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AutoTransform::setAutoScaleTransitionWidthRatio(float)");
		}
		self->setAutoScaleTransitionWidthRatio(ratio);

		return 0;
	}

	// float osg::AutoTransform::getAutoScaleTransitionWidthRatio() const
	static int _bind_getAutoScaleTransitionWidthRatio(lua_State *L) {
		if (!_lg_typecheck_getAutoScaleTransitionWidthRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::AutoTransform::getAutoScaleTransitionWidthRatio() const function, expected prototype:\nfloat osg::AutoTransform::getAutoScaleTransitionWidthRatio() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::AutoTransform::getAutoScaleTransitionWidthRatio() const");
		}
		float lret = self->getAutoScaleTransitionWidthRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::AutoTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::AutoTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AutoTransform::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::AutoTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AutoTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::AutoTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::AutoTransform::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AutoTransform::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSpheref osg::AutoTransform::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSpheref osg::AutoTransform::computeBound() const function, expected prototype:\nosg::BoundingSpheref osg::AutoTransform::computeBound() const\nClass arguments details:\n");
		}


		osg::AutoTransform* self=dynamic_cast< osg::AutoTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSpheref osg::AutoTransform::computeBound() const");
		}
		osg::BoundingSpheref stack_lret = self->computeBound();
		osg::BoundingSpheref* lret = new osg::BoundingSpheref(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSpheref >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::AutoTransform* LunaTraits< osg::AutoTransform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AutoTransform::_bind_ctor(L);
}

void LunaTraits< osg::AutoTransform >::_bind_dtor(osg::AutoTransform* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AutoTransform >::className[] = "AutoTransform";
const char LunaTraits< osg::AutoTransform >::fullName[] = "osg::AutoTransform";
const char LunaTraits< osg::AutoTransform >::moduleName[] = "osg";
const char* LunaTraits< osg::AutoTransform >::parents[] = {"osg.Transform", 0};
const int LunaTraits< osg::AutoTransform >::hash = 29175925;
const int LunaTraits< osg::AutoTransform >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AutoTransform >::methods[] = {
	{"cloneType", &luna_wrapper_osg_AutoTransform::_bind_cloneType},
	{"clone", &luna_wrapper_osg_AutoTransform::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_AutoTransform::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_AutoTransform::_bind_className},
	{"libraryName", &luna_wrapper_osg_AutoTransform::_bind_libraryName},
	{"accept", &luna_wrapper_osg_AutoTransform::_bind_accept},
	{"asAutoTransform", &luna_wrapper_osg_AutoTransform::_bind_asAutoTransform},
	{"setPosition", &luna_wrapper_osg_AutoTransform::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_AutoTransform::_bind_getPosition},
	{"setRotation", &luna_wrapper_osg_AutoTransform::_bind_setRotation},
	{"getRotation", &luna_wrapper_osg_AutoTransform::_bind_getRotation},
	{"setScale", &luna_wrapper_osg_AutoTransform::_bind_setScale},
	{"getScale", &luna_wrapper_osg_AutoTransform::_bind_getScale},
	{"setMinimumScale", &luna_wrapper_osg_AutoTransform::_bind_setMinimumScale},
	{"getMinimumScale", &luna_wrapper_osg_AutoTransform::_bind_getMinimumScale},
	{"setMaximumScale", &luna_wrapper_osg_AutoTransform::_bind_setMaximumScale},
	{"getMaximumScale", &luna_wrapper_osg_AutoTransform::_bind_getMaximumScale},
	{"setPivotPoint", &luna_wrapper_osg_AutoTransform::_bind_setPivotPoint},
	{"getPivotPoint", &luna_wrapper_osg_AutoTransform::_bind_getPivotPoint},
	{"setAutoUpdateEyeMovementTolerance", &luna_wrapper_osg_AutoTransform::_bind_setAutoUpdateEyeMovementTolerance},
	{"getAutoUpdateEyeMovementTolerance", &luna_wrapper_osg_AutoTransform::_bind_getAutoUpdateEyeMovementTolerance},
	{"setAutoRotateMode", &luna_wrapper_osg_AutoTransform::_bind_setAutoRotateMode},
	{"getAutoRotateMode", &luna_wrapper_osg_AutoTransform::_bind_getAutoRotateMode},
	{"setAxis", &luna_wrapper_osg_AutoTransform::_bind_setAxis},
	{"getAxis", &luna_wrapper_osg_AutoTransform::_bind_getAxis},
	{"setNormal", &luna_wrapper_osg_AutoTransform::_bind_setNormal},
	{"getNormal", &luna_wrapper_osg_AutoTransform::_bind_getNormal},
	{"setAutoScaleToScreen", &luna_wrapper_osg_AutoTransform::_bind_setAutoScaleToScreen},
	{"getAutoScaleToScreen", &luna_wrapper_osg_AutoTransform::_bind_getAutoScaleToScreen},
	{"setAutoScaleTransitionWidthRatio", &luna_wrapper_osg_AutoTransform::_bind_setAutoScaleTransitionWidthRatio},
	{"getAutoScaleTransitionWidthRatio", &luna_wrapper_osg_AutoTransform::_bind_getAutoScaleTransitionWidthRatio},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_AutoTransform::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_AutoTransform::_bind_computeWorldToLocalMatrix},
	{"computeBound", &luna_wrapper_osg_AutoTransform::_bind_computeBound},
	{"__eq", &luna_wrapper_osg_AutoTransform::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AutoTransform >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AutoTransform::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AutoTransform >::enumValues[] = {
	{"NO_ROTATION", osg::AutoTransform::NO_ROTATION},
	{"ROTATE_TO_SCREEN", osg::AutoTransform::ROTATE_TO_SCREEN},
	{"ROTATE_TO_CAMERA", osg::AutoTransform::ROTATE_TO_CAMERA},
	{"ROTATE_TO_AXIS", osg::AutoTransform::ROTATE_TO_AXIS},
	{0,0}
};


