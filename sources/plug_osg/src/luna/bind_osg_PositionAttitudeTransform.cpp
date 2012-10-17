#include <plug_common.h>

class luna_wrapper_osg_PositionAttitudeTransform {
public:
	typedef Luna< osg::PositionAttitudeTransform > luna_t;

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
		osg::PositionAttitudeTransform* ptr= dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PositionAttitudeTransform >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asPositionAttitudeTransform_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_setAttitude(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAttitude(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScale(lua_State *L) {
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
	// osg::PositionAttitudeTransform::PositionAttitudeTransform()
	static osg::PositionAttitudeTransform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform::PositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform::PositionAttitudeTransform()\nClass arguments details:\n");
		}


		return new osg::PositionAttitudeTransform();
	}

	// osg::PositionAttitudeTransform::PositionAttitudeTransform(const osg::PositionAttitudeTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PositionAttitudeTransform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform::PositionAttitudeTransform(const osg::PositionAttitudeTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PositionAttitudeTransform::PositionAttitudeTransform(const osg::PositionAttitudeTransform & pat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PositionAttitudeTransform* pat_ptr=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if( !pat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pat in osg::PositionAttitudeTransform::PositionAttitudeTransform function");
		}
		const osg::PositionAttitudeTransform & pat=*pat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PositionAttitudeTransform::PositionAttitudeTransform function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::PositionAttitudeTransform(pat, copyop);
	}

	// Overload binder for osg::PositionAttitudeTransform::PositionAttitudeTransform
	static osg::PositionAttitudeTransform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PositionAttitudeTransform, cannot match any of the overloads for function PositionAttitudeTransform:\n  PositionAttitudeTransform()\n  PositionAttitudeTransform(const osg::PositionAttitudeTransform &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PositionAttitudeTransform::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PositionAttitudeTransform::cloneType() const function, expected prototype:\nosg::Object * osg::PositionAttitudeTransform::cloneType() const\nClass arguments details:\n");
		}


		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PositionAttitudeTransform::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PositionAttitudeTransform::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PositionAttitudeTransform::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::PositionAttitudeTransform::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PositionAttitudeTransform::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PositionAttitudeTransform::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PositionAttitudeTransform::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PositionAttitudeTransform::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PositionAttitudeTransform::className() const function, expected prototype:\nconst char * osg::PositionAttitudeTransform::className() const\nClass arguments details:\n");
		}


		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PositionAttitudeTransform::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PositionAttitudeTransform::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PositionAttitudeTransform::libraryName() const function, expected prototype:\nconst char * osg::PositionAttitudeTransform::libraryName() const\nClass arguments details:\n");
		}


		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PositionAttitudeTransform::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PositionAttitudeTransform::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::PositionAttitudeTransform::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::PositionAttitudeTransform::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform()
	static int _bind_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asPositionAttitudeTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform()\nClass arguments details:\n");
		}


		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform()");
		}
		osg::PositionAttitudeTransform * lret = self->asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() const
	static int _bind_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asPositionAttitudeTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() const\nClass arguments details:\n");
		}


		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::PositionAttitudeTransform::asPositionAttitudeTransform() const");
		}
		const osg::PositionAttitudeTransform * lret = self->asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PositionAttitudeTransform::asPositionAttitudeTransform
	static int _bind_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_asPositionAttitudeTransform_overload_1(L)) return _bind_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_asPositionAttitudeTransform_overload_2(L)) return _bind_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function asPositionAttitudeTransform, cannot match any of the overloads for function asPositionAttitudeTransform:\n  asPositionAttitudeTransform()\n  asPositionAttitudeTransform()\n");
		return 0;
	}

	// void osg::PositionAttitudeTransform::setPosition(const osg::Vec3d & pos)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::setPosition(const osg::Vec3d & pos) function, expected prototype:\nvoid osg::PositionAttitudeTransform::setPosition(const osg::Vec3d & pos)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* pos_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osg::PositionAttitudeTransform::setPosition function");
		}
		const osg::Vec3d & pos=*pos_ptr;

		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::setPosition(const osg::Vec3d &)");
		}
		self->setPosition(pos);

		return 0;
	}

	// const osg::Vec3d & osg::PositionAttitudeTransform::getPosition() const
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::PositionAttitudeTransform::getPosition() const function, expected prototype:\nconst osg::Vec3d & osg::PositionAttitudeTransform::getPosition() const\nClass arguments details:\n");
		}


		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::PositionAttitudeTransform::getPosition() const");
		}
		const osg::Vec3d* lret = &self->getPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::PositionAttitudeTransform::setAttitude(const osg::Quat & quat)
	static int _bind_setAttitude(lua_State *L) {
		if (!_lg_typecheck_setAttitude(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::setAttitude(const osg::Quat & quat) function, expected prototype:\nvoid osg::PositionAttitudeTransform::setAttitude(const osg::Quat & quat)\nClass arguments details:\narg 1 ID = 80263306\n");
		}

		const osg::Quat* quat_ptr=(Luna< osg::Quat >::check(L,2));
		if( !quat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg quat in osg::PositionAttitudeTransform::setAttitude function");
		}
		const osg::Quat & quat=*quat_ptr;

		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::setAttitude(const osg::Quat &)");
		}
		self->setAttitude(quat);

		return 0;
	}

	// const osg::Quat & osg::PositionAttitudeTransform::getAttitude() const
	static int _bind_getAttitude(lua_State *L) {
		if (!_lg_typecheck_getAttitude(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Quat & osg::PositionAttitudeTransform::getAttitude() const function, expected prototype:\nconst osg::Quat & osg::PositionAttitudeTransform::getAttitude() const\nClass arguments details:\n");
		}


		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Quat & osg::PositionAttitudeTransform::getAttitude() const");
		}
		const osg::Quat* lret = &self->getAttitude();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,false);

		return 1;
	}

	// void osg::PositionAttitudeTransform::setScale(const osg::Vec3d & scale)
	static int _bind_setScale(lua_State *L) {
		if (!_lg_typecheck_setScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::setScale(const osg::Vec3d & scale) function, expected prototype:\nvoid osg::PositionAttitudeTransform::setScale(const osg::Vec3d & scale)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* scale_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !scale_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg scale in osg::PositionAttitudeTransform::setScale function");
		}
		const osg::Vec3d & scale=*scale_ptr;

		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::setScale(const osg::Vec3d &)");
		}
		self->setScale(scale);

		return 0;
	}

	// const osg::Vec3d & osg::PositionAttitudeTransform::getScale() const
	static int _bind_getScale(lua_State *L) {
		if (!_lg_typecheck_getScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::PositionAttitudeTransform::getScale() const function, expected prototype:\nconst osg::Vec3d & osg::PositionAttitudeTransform::getScale() const\nClass arguments details:\n");
		}


		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::PositionAttitudeTransform::getScale() const");
		}
		const osg::Vec3d* lret = &self->getScale();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osg::PositionAttitudeTransform::setPivotPoint(const osg::Vec3d & pivot)
	static int _bind_setPivotPoint(lua_State *L) {
		if (!_lg_typecheck_setPivotPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PositionAttitudeTransform::setPivotPoint(const osg::Vec3d & pivot) function, expected prototype:\nvoid osg::PositionAttitudeTransform::setPivotPoint(const osg::Vec3d & pivot)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* pivot_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !pivot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pivot in osg::PositionAttitudeTransform::setPivotPoint function");
		}
		const osg::Vec3d & pivot=*pivot_ptr;

		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PositionAttitudeTransform::setPivotPoint(const osg::Vec3d &)");
		}
		self->setPivotPoint(pivot);

		return 0;
	}

	// const osg::Vec3d & osg::PositionAttitudeTransform::getPivotPoint() const
	static int _bind_getPivotPoint(lua_State *L) {
		if (!_lg_typecheck_getPivotPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::PositionAttitudeTransform::getPivotPoint() const function, expected prototype:\nconst osg::Vec3d & osg::PositionAttitudeTransform::getPivotPoint() const\nClass arguments details:\n");
		}


		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::PositionAttitudeTransform::getPivotPoint() const");
		}
		const osg::Vec3d* lret = &self->getPivotPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::PositionAttitudeTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::PositionAttitudeTransform::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PositionAttitudeTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PositionAttitudeTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const function, expected prototype:\nbool osg::PositionAttitudeTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * nv) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::PositionAttitudeTransform::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::PositionAttitudeTransform* self=dynamic_cast< osg::PositionAttitudeTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PositionAttitudeTransform::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, nv);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::PositionAttitudeTransform* LunaTraits< osg::PositionAttitudeTransform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PositionAttitudeTransform::_bind_ctor(L);
}

void LunaTraits< osg::PositionAttitudeTransform >::_bind_dtor(osg::PositionAttitudeTransform* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PositionAttitudeTransform >::className[] = "PositionAttitudeTransform";
const char LunaTraits< osg::PositionAttitudeTransform >::fullName[] = "osg::PositionAttitudeTransform";
const char LunaTraits< osg::PositionAttitudeTransform >::moduleName[] = "osg";
const char* LunaTraits< osg::PositionAttitudeTransform >::parents[] = {"osg.Transform", 0};
const int LunaTraits< osg::PositionAttitudeTransform >::hash = 82150324;
const int LunaTraits< osg::PositionAttitudeTransform >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PositionAttitudeTransform >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PositionAttitudeTransform::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PositionAttitudeTransform::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PositionAttitudeTransform::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_PositionAttitudeTransform::_bind_className},
	{"libraryName", &luna_wrapper_osg_PositionAttitudeTransform::_bind_libraryName},
	{"accept", &luna_wrapper_osg_PositionAttitudeTransform::_bind_accept},
	{"asPositionAttitudeTransform", &luna_wrapper_osg_PositionAttitudeTransform::_bind_asPositionAttitudeTransform},
	{"setPosition", &luna_wrapper_osg_PositionAttitudeTransform::_bind_setPosition},
	{"getPosition", &luna_wrapper_osg_PositionAttitudeTransform::_bind_getPosition},
	{"setAttitude", &luna_wrapper_osg_PositionAttitudeTransform::_bind_setAttitude},
	{"getAttitude", &luna_wrapper_osg_PositionAttitudeTransform::_bind_getAttitude},
	{"setScale", &luna_wrapper_osg_PositionAttitudeTransform::_bind_setScale},
	{"getScale", &luna_wrapper_osg_PositionAttitudeTransform::_bind_getScale},
	{"setPivotPoint", &luna_wrapper_osg_PositionAttitudeTransform::_bind_setPivotPoint},
	{"getPivotPoint", &luna_wrapper_osg_PositionAttitudeTransform::_bind_getPivotPoint},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_PositionAttitudeTransform::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_PositionAttitudeTransform::_bind_computeWorldToLocalMatrix},
	{"__eq", &luna_wrapper_osg_PositionAttitudeTransform::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PositionAttitudeTransform >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PositionAttitudeTransform::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PositionAttitudeTransform >::enumValues[] = {
	{0,0}
};


