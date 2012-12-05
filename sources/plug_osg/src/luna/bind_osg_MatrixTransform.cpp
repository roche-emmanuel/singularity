#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_MatrixTransform.h>

class luna_wrapper_osg_MatrixTransform {
public:
	typedef Luna< osg::MatrixTransform > luna_t;

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
		osg::MatrixTransform* ptr= dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::MatrixTransform >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_asMatrixTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asMatrixTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_preMult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_postMult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInverseMatrix(lua_State *L) {
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
	// osg::MatrixTransform::MatrixTransform()
	static osg::MatrixTransform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform() function, expected prototype:\nosg::MatrixTransform::MatrixTransform()\nClass arguments details:\n");
		}


		return new osg::MatrixTransform();
	}

	// osg::MatrixTransform::MatrixTransform(const osg::MatrixTransform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::MatrixTransform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(const osg::MatrixTransform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(const osg::MatrixTransform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::MatrixTransform* _arg1_ptr=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::MatrixTransform & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::MatrixTransform(_arg1, copyop);
	}

	// osg::MatrixTransform::MatrixTransform(const osg::Matrixd & matix)
	static osg::MatrixTransform* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(const osg::Matrixd & matix) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(const osg::Matrixd & matix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matix_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !matix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matix in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::Matrixd & matix=*matix_ptr;

		return new osg::MatrixTransform(matix);
	}

	// osg::MatrixTransform::MatrixTransform(lua_Table * data)
	static osg::MatrixTransform* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(lua_Table * data) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_MatrixTransform(L,NULL);
	}

	// osg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::MatrixTransform & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::MatrixTransform* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::MatrixTransform & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::MatrixTransform & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::MatrixTransform* _arg2_ptr=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::MatrixTransform & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_MatrixTransform(L,NULL, _arg2, copyop);
	}

	// osg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::Matrixd & matix)
	static osg::MatrixTransform* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::Matrixd & matix) function, expected prototype:\nosg::MatrixTransform::MatrixTransform(lua_Table * data, const osg::Matrixd & matix)\nClass arguments details:\narg 2 ID = 18903838\n");
		}

		const osg::Matrixd* matix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matix in osg::MatrixTransform::MatrixTransform function");
		}
		const osg::Matrixd & matix=*matix_ptr;

		return new wrapper_osg_MatrixTransform(L,NULL, matix);
	}

	// Overload binder for osg::MatrixTransform::MatrixTransform
	static osg::MatrixTransform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function MatrixTransform, cannot match any of the overloads for function MatrixTransform:\n  MatrixTransform()\n  MatrixTransform(const osg::MatrixTransform &, const osg::CopyOp &)\n  MatrixTransform(const osg::Matrixd &)\n  MatrixTransform(lua_Table *)\n  MatrixTransform(lua_Table *, const osg::MatrixTransform &, const osg::CopyOp &)\n  MatrixTransform(lua_Table *, const osg::Matrixd &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::MatrixTransform::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::MatrixTransform::cloneType() const function, expected prototype:\nosg::Object * osg::MatrixTransform::cloneType() const\nClass arguments details:\n");
		}


		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::MatrixTransform::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::MatrixTransform::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::MatrixTransform::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::MatrixTransform::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::MatrixTransform::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::MatrixTransform::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::MatrixTransform::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::MatrixTransform::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::MatrixTransform::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::MatrixTransform::className() const function, expected prototype:\nconst char * osg::MatrixTransform::className() const\nClass arguments details:\n");
		}


		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::MatrixTransform::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::MatrixTransform::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::MatrixTransform::libraryName() const function, expected prototype:\nconst char * osg::MatrixTransform::libraryName() const\nClass arguments details:\n");
		}


		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::MatrixTransform::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::MatrixTransform::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::MatrixTransform::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::MatrixTransform::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform()
	static int _bind_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asMatrixTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::MatrixTransform::asMatrixTransform()\nClass arguments details:\n");
		}


		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform()");
		}
		osg::MatrixTransform * lret = self->asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() const
	static int _bind_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asMatrixTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() const\nClass arguments details:\n");
		}


		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::MatrixTransform::asMatrixTransform() const");
		}
		const osg::MatrixTransform * lret = self->asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::MatrixTransform::asMatrixTransform
	static int _bind_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_asMatrixTransform_overload_1(L)) return _bind_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_asMatrixTransform_overload_2(L)) return _bind_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function asMatrixTransform, cannot match any of the overloads for function asMatrixTransform:\n  asMatrixTransform()\n  asMatrixTransform()\n");
		return 0;
	}

	// void osg::MatrixTransform::setMatrix(const osg::Matrixd & mat)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::setMatrix(const osg::Matrixd & mat) function, expected prototype:\nvoid osg::MatrixTransform::setMatrix(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::MatrixTransform::setMatrix function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::setMatrix(const osg::Matrixd &)");
		}
		self->setMatrix(mat);

		return 0;
	}

	// const osg::Matrixd & osg::MatrixTransform::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::MatrixTransform::getMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::MatrixTransform::getMatrix() const\nClass arguments details:\n");
		}


		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::MatrixTransform::getMatrix() const");
		}
		const osg::Matrixd* lret = &self->getMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// void osg::MatrixTransform::preMult(const osg::Matrixd & mat)
	static int _bind_preMult(lua_State *L) {
		if (!_lg_typecheck_preMult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::preMult(const osg::Matrixd & mat) function, expected prototype:\nvoid osg::MatrixTransform::preMult(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::MatrixTransform::preMult function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::preMult(const osg::Matrixd &)");
		}
		self->preMult(mat);

		return 0;
	}

	// void osg::MatrixTransform::postMult(const osg::Matrixd & mat)
	static int _bind_postMult(lua_State *L) {
		if (!_lg_typecheck_postMult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::MatrixTransform::postMult(const osg::Matrixd & mat) function, expected prototype:\nvoid osg::MatrixTransform::postMult(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::MatrixTransform::postMult function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::MatrixTransform::postMult(const osg::Matrixd &)");
		}
		self->postMult(mat);

		return 0;
	}

	// const osg::Matrixd & osg::MatrixTransform::getInverseMatrix() const
	static int _bind_getInverseMatrix(lua_State *L) {
		if (!_lg_typecheck_getInverseMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::MatrixTransform::getInverseMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::MatrixTransform::getInverseMatrix() const\nClass arguments details:\n");
		}


		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::MatrixTransform::getInverseMatrix() const");
		}
		const osg::Matrixd* lret = &self->getInverseMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// bool osg::MatrixTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::MatrixTransform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::MatrixTransform::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::MatrixTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::MatrixTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::MatrixTransform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::MatrixTransform::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,3));

		osg::MatrixTransform* self=dynamic_cast< osg::MatrixTransform* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::MatrixTransform::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const");
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::MatrixTransform* LunaTraits< osg::MatrixTransform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_MatrixTransform::_bind_ctor(L);
}

void LunaTraits< osg::MatrixTransform >::_bind_dtor(osg::MatrixTransform* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::MatrixTransform >::className[] = "MatrixTransform";
const char LunaTraits< osg::MatrixTransform >::fullName[] = "osg::MatrixTransform";
const char LunaTraits< osg::MatrixTransform >::moduleName[] = "osg";
const char* LunaTraits< osg::MatrixTransform >::parents[] = {"osg.Transform", 0};
const int LunaTraits< osg::MatrixTransform >::hash = 11455287;
const int LunaTraits< osg::MatrixTransform >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::MatrixTransform >::methods[] = {
	{"cloneType", &luna_wrapper_osg_MatrixTransform::_bind_cloneType},
	{"clone", &luna_wrapper_osg_MatrixTransform::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_MatrixTransform::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_MatrixTransform::_bind_className},
	{"libraryName", &luna_wrapper_osg_MatrixTransform::_bind_libraryName},
	{"accept", &luna_wrapper_osg_MatrixTransform::_bind_accept},
	{"asMatrixTransform", &luna_wrapper_osg_MatrixTransform::_bind_asMatrixTransform},
	{"setMatrix", &luna_wrapper_osg_MatrixTransform::_bind_setMatrix},
	{"getMatrix", &luna_wrapper_osg_MatrixTransform::_bind_getMatrix},
	{"preMult", &luna_wrapper_osg_MatrixTransform::_bind_preMult},
	{"postMult", &luna_wrapper_osg_MatrixTransform::_bind_postMult},
	{"getInverseMatrix", &luna_wrapper_osg_MatrixTransform::_bind_getInverseMatrix},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_MatrixTransform::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_MatrixTransform::_bind_computeWorldToLocalMatrix},
	{"__eq", &luna_wrapper_osg_MatrixTransform::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::MatrixTransform >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_MatrixTransform::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MatrixTransform >::enumValues[] = {
	{0,0}
};


