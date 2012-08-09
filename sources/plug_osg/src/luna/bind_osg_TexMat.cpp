#include <plug_common.h>

class luna_wrapper_osg_TexMat {
public:
	typedef Luna< osg::TexMat > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::TexMat* ptr= dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TexMat >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScaleByTextureRectangleSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScaleByTextureRectangleSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TexMat::TexMat()
	static osg::TexMat* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexMat::TexMat() function, expected prototype:\nosg::TexMat::TexMat()\nClass arguments details:\n");
		}


		return new osg::TexMat();
	}

	// osg::TexMat::TexMat(const osg::Matrixd & matrix)
	static osg::TexMat* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexMat::TexMat(const osg::Matrixd & matrix) function, expected prototype:\nosg::TexMat::TexMat(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::TexMat::TexMat function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		return new osg::TexMat(matrix);
	}

	// osg::TexMat::TexMat(const osg::TexMat & texmat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexMat* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexMat::TexMat(const osg::TexMat & texmat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexMat::TexMat(const osg::TexMat & texmat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TexMat* texmat_ptr=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if( !texmat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texmat in osg::TexMat::TexMat function");
		}
		const osg::TexMat & texmat=*texmat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexMat::TexMat function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TexMat(texmat, copyop);
	}

	// Overload binder for osg::TexMat::TexMat
	static osg::TexMat* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function TexMat, cannot match any of the overloads for function TexMat:\n  TexMat()\n  TexMat(const osg::Matrixd &)\n  TexMat(const osg::TexMat &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TexMat::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexMat::cloneType() const function, expected prototype:\nosg::Object * osg::TexMat::cloneType() const\nClass arguments details:\n");
		}


		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexMat::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexMat::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexMat::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::TexMat::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexMat::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexMat::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexMat::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexMat::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexMat::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexMat::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexMat::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexMat::libraryName() const function, expected prototype:\nconst char * osg::TexMat::libraryName() const\nClass arguments details:\n");
		}


		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexMat::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexMat::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexMat::className() const function, expected prototype:\nconst char * osg::TexMat::className() const\nClass arguments details:\n");
		}


		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexMat::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TexMat::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TexMat::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TexMat::getType() const\nClass arguments details:\n");
		}


		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TexMat::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexMat::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexMat::isTextureAttribute() const function, expected prototype:\nbool osg::TexMat::isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexMat::isTextureAttribute() const");
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TexMat::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexMat::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::TexMat::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::TexMat::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexMat::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexMat::setMatrix(const osg::Matrixd & matrix)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexMat::setMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::TexMat::setMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::TexMat::setMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexMat::setMatrix(const osg::Matrixd &)");
		}
		self->setMatrix(matrix);

		return 0;
	}

	// osg::Matrixd & osg::TexMat::getMatrix()
	static int _bind_getMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd & osg::TexMat::getMatrix() function, expected prototype:\nosg::Matrixd & osg::TexMat::getMatrix()\nClass arguments details:\n");
		}


		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd & osg::TexMat::getMatrix()");
		}
		const osg::Matrixd* lret = &self->getMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osg::TexMat::getMatrix() const
	static int _bind_getMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::TexMat::getMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::TexMat::getMatrix() const\nClass arguments details:\n");
		}


		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::TexMat::getMatrix() const");
		}
		const osg::Matrixd* lret = &self->getMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexMat::getMatrix
	static int _bind_getMatrix(lua_State *L) {
		if (_lg_typecheck_getMatrix_overload_1(L)) return _bind_getMatrix_overload_1(L);
		if (_lg_typecheck_getMatrix_overload_2(L)) return _bind_getMatrix_overload_2(L);

		luaL_error(L, "error in function getMatrix, cannot match any of the overloads for function getMatrix:\n  getMatrix()\n  getMatrix()\n");
		return 0;
	}

	// void osg::TexMat::setScaleByTextureRectangleSize(bool flag)
	static int _bind_setScaleByTextureRectangleSize(lua_State *L) {
		if (!_lg_typecheck_setScaleByTextureRectangleSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexMat::setScaleByTextureRectangleSize(bool flag) function, expected prototype:\nvoid osg::TexMat::setScaleByTextureRectangleSize(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexMat::setScaleByTextureRectangleSize(bool)");
		}
		self->setScaleByTextureRectangleSize(flag);

		return 0;
	}

	// bool osg::TexMat::getScaleByTextureRectangleSize() const
	static int _bind_getScaleByTextureRectangleSize(lua_State *L) {
		if (!_lg_typecheck_getScaleByTextureRectangleSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexMat::getScaleByTextureRectangleSize() const function, expected prototype:\nbool osg::TexMat::getScaleByTextureRectangleSize() const\nClass arguments details:\n");
		}


		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexMat::getScaleByTextureRectangleSize() const");
		}
		bool lret = self->getScaleByTextureRectangleSize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TexMat::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexMat::apply(osg::State & state) const function, expected prototype:\nvoid osg::TexMat::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::TexMat::apply function");
		}
		osg::State & state=*state_ptr;

		osg::TexMat* self=dynamic_cast< osg::TexMat* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexMat::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}


	// Operator binds:

};

osg::TexMat* LunaTraits< osg::TexMat >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TexMat::_bind_ctor(L);
}

void LunaTraits< osg::TexMat >::_bind_dtor(osg::TexMat* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TexMat >::className[] = "TexMat";
const char LunaTraits< osg::TexMat >::fullName[] = "osg::TexMat";
const char LunaTraits< osg::TexMat >::moduleName[] = "osg";
const char* LunaTraits< osg::TexMat >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::TexMat >::hash = 4791272;
const int LunaTraits< osg::TexMat >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TexMat >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TexMat::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TexMat::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TexMat::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TexMat::_bind_libraryName},
	{"className", &luna_wrapper_osg_TexMat::_bind_className},
	{"getType", &luna_wrapper_osg_TexMat::_bind_getType},
	{"isTextureAttribute", &luna_wrapper_osg_TexMat::_bind_isTextureAttribute},
	{"compare", &luna_wrapper_osg_TexMat::_bind_compare},
	{"setMatrix", &luna_wrapper_osg_TexMat::_bind_setMatrix},
	{"getMatrix", &luna_wrapper_osg_TexMat::_bind_getMatrix},
	{"setScaleByTextureRectangleSize", &luna_wrapper_osg_TexMat::_bind_setScaleByTextureRectangleSize},
	{"getScaleByTextureRectangleSize", &luna_wrapper_osg_TexMat::_bind_getScaleByTextureRectangleSize},
	{"apply", &luna_wrapper_osg_TexMat::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TexMat >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TexMat::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TexMat >::enumValues[] = {
	{0,0}
};

