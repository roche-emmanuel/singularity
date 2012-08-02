#include <plug_common.h>

class luna_wrapper_osg_Transform {
public:
	typedef Luna< osg::Transform > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Transform* ptr= dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Transform >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asMatrixTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asMatrixTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_setReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceFrame(lua_State *L) {
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
	// osg::Transform::Transform()
	static osg::Transform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform::Transform() function, expected prototype:\nosg::Transform::Transform()\nClass arguments details:\n");
		}


		return new osg::Transform();
	}

	// osg::Transform::Transform(const osg::Transform & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Transform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform::Transform(const osg::Transform & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Transform::Transform(const osg::Transform & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Transform* _arg1_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Transform::Transform function");
		}
		const osg::Transform & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Transform::Transform function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Transform(_arg1, copyop);
	}

	// Overload binder for osg::Transform::Transform
	static osg::Transform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Transform, cannot match any of the overloads for function Transform:\n  Transform()\n  Transform(const osg::Transform &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Transform::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Transform::cloneType() const function, expected prototype:\nosg::Object * osg::Transform::cloneType() const\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Transform::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Transform::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Transform::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Transform::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Transform::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Transform::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Transform::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Transform::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Transform::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Transform::className() const function, expected prototype:\nconst char * osg::Transform::className() const\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Transform::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Transform::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Transform::libraryName() const function, expected prototype:\nconst char * osg::Transform::libraryName() const\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Transform::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Transform::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Transform::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Transform::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// osg::Transform * osg::Transform::asTransform()
	static int _bind_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Transform::asTransform() function, expected prototype:\nosg::Transform * osg::Transform::asTransform()\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Transform::asTransform()");
		}
		osg::Transform * lret = self->asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Transform::asTransform() const
	static int _bind_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Transform::asTransform() const function, expected prototype:\nconst osg::Transform * osg::Transform::asTransform() const\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Transform::asTransform() const");
		}
		const osg::Transform * lret = self->asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::asTransform
	static int _bind_asTransform(lua_State *L) {
		if (_lg_typecheck_asTransform_overload_1(L)) return _bind_asTransform_overload_1(L);
		if (_lg_typecheck_asTransform_overload_2(L)) return _bind_asTransform_overload_2(L);

		luaL_error(L, "error in function asTransform, cannot match any of the overloads for function asTransform:\n  asTransform()\n  asTransform()\n");
		return 0;
	}

	// osg::MatrixTransform * osg::Transform::asMatrixTransform()
	static int _bind_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asMatrixTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::Transform::asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::Transform::asMatrixTransform()\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::Transform::asMatrixTransform()");
		}
		osg::MatrixTransform * lret = self->asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::Transform::asMatrixTransform() const
	static int _bind_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asMatrixTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::Transform::asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::Transform::asMatrixTransform() const\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::Transform::asMatrixTransform() const");
		}
		const osg::MatrixTransform * lret = self->asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::asMatrixTransform
	static int _bind_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_asMatrixTransform_overload_1(L)) return _bind_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_asMatrixTransform_overload_2(L)) return _bind_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function asMatrixTransform, cannot match any of the overloads for function asMatrixTransform:\n  asMatrixTransform()\n  asMatrixTransform()\n");
		return 0;
	}

	// osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform()
	static int _bind_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asPositionAttitudeTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform()\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform()");
		}
		osg::PositionAttitudeTransform * lret = self->asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const
	static int _bind_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asPositionAttitudeTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const");
		}
		const osg::PositionAttitudeTransform * lret = self->asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::asPositionAttitudeTransform
	static int _bind_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_asPositionAttitudeTransform_overload_1(L)) return _bind_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_asPositionAttitudeTransform_overload_2(L)) return _bind_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function asPositionAttitudeTransform, cannot match any of the overloads for function asPositionAttitudeTransform:\n  asPositionAttitudeTransform()\n  asPositionAttitudeTransform()\n");
		return 0;
	}

	// void osg::Transform::setReferenceFrame(osg::Transform::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::setReferenceFrame(osg::Transform::ReferenceFrame rf) function, expected prototype:\nvoid osg::Transform::setReferenceFrame(osg::Transform::ReferenceFrame rf)\nClass arguments details:\n");
		}

		osg::Transform::ReferenceFrame rf=(osg::Transform::ReferenceFrame)lua_tointeger(L,2);

		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::setReferenceFrame(osg::Transform::ReferenceFrame)");
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// osg::Transform::ReferenceFrame osg::Transform::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform::ReferenceFrame osg::Transform::getReferenceFrame() const function, expected prototype:\nosg::Transform::ReferenceFrame osg::Transform::getReferenceFrame() const\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Transform::ReferenceFrame osg::Transform::getReferenceFrame() const");
		}
		osg::Transform::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Transform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * ) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * ) const function, expected prototype:\nbool osg::Transform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * ) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Transform::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Transform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * ) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * ) const function, expected prototype:\nbool osg::Transform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * ) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Transform::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSpheref osg::Transform::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSpheref osg::Transform::computeBound() const function, expected prototype:\nosg::BoundingSpheref osg::Transform::computeBound() const\nClass arguments details:\n");
		}


		osg::Transform* self=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSpheref osg::Transform::computeBound() const");
		}
		osg::BoundingSpheref stack_lret = self->computeBound();
		osg::BoundingSpheref* lret = new osg::BoundingSpheref(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSpheref >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Transform* LunaTraits< osg::Transform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Transform::_bind_ctor(L);
}

void LunaTraits< osg::Transform >::_bind_dtor(osg::Transform* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Transform >::className[] = "Transform";
const char LunaTraits< osg::Transform >::fullName[] = "osg::Transform";
const char LunaTraits< osg::Transform >::moduleName[] = "osg";
const char* LunaTraits< osg::Transform >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::Transform >::hash = 49203817;
const int LunaTraits< osg::Transform >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Transform >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Transform::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Transform::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Transform::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Transform::_bind_className},
	{"libraryName", &luna_wrapper_osg_Transform::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Transform::_bind_accept},
	{"asTransform", &luna_wrapper_osg_Transform::_bind_asTransform},
	{"asMatrixTransform", &luna_wrapper_osg_Transform::_bind_asMatrixTransform},
	{"asPositionAttitudeTransform", &luna_wrapper_osg_Transform::_bind_asPositionAttitudeTransform},
	{"setReferenceFrame", &luna_wrapper_osg_Transform::_bind_setReferenceFrame},
	{"getReferenceFrame", &luna_wrapper_osg_Transform::_bind_getReferenceFrame},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_Transform::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_Transform::_bind_computeWorldToLocalMatrix},
	{"computeBound", &luna_wrapper_osg_Transform::_bind_computeBound},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Transform >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Transform::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Transform >::enumValues[] = {
	{"RELATIVE_RF", osg::Transform::RELATIVE_RF},
	{"ABSOLUTE_RF", osg::Transform::ABSOLUTE_RF},
	{"ABSOLUTE_RF_INHERIT_VIEWPOINT", osg::Transform::ABSOLUTE_RF_INHERIT_VIEWPOINT},
	{0,0}
};


