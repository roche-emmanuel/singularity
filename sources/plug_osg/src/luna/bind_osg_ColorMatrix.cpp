#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ColorMatrix.h>

class luna_wrapper_osg_ColorMatrix {
public:
	typedef Luna< osg::ColorMatrix > luna_t;

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
		osg::ColorMatrix* ptr= dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ColorMatrix >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ColorMatrix::ColorMatrix()
	static osg::ColorMatrix* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ColorMatrix::ColorMatrix() function, expected prototype:\nosg::ColorMatrix::ColorMatrix()\nClass arguments details:\n");
		}


		return new osg::ColorMatrix();
	}

	// osg::ColorMatrix::ColorMatrix(const osg::ColorMatrix & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ColorMatrix* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ColorMatrix::ColorMatrix(const osg::ColorMatrix & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ColorMatrix::ColorMatrix(const osg::ColorMatrix & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ColorMatrix* cm_ptr=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if( !cm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cm in osg::ColorMatrix::ColorMatrix function");
		}
		const osg::ColorMatrix & cm=*cm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ColorMatrix::ColorMatrix function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ColorMatrix(cm, copyop);
	}

	// osg::ColorMatrix::ColorMatrix(lua_Table * data)
	static osg::ColorMatrix* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ColorMatrix::ColorMatrix(lua_Table * data) function, expected prototype:\nosg::ColorMatrix::ColorMatrix(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_ColorMatrix(L,NULL);
	}

	// osg::ColorMatrix::ColorMatrix(lua_Table * data, const osg::ColorMatrix & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ColorMatrix* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ColorMatrix::ColorMatrix(lua_Table * data, const osg::ColorMatrix & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ColorMatrix::ColorMatrix(lua_Table * data, const osg::ColorMatrix & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ColorMatrix* cm_ptr=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,2));
		if( !cm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cm in osg::ColorMatrix::ColorMatrix function");
		}
		const osg::ColorMatrix & cm=*cm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ColorMatrix::ColorMatrix function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ColorMatrix(L,NULL, cm, copyop);
	}

	// Overload binder for osg::ColorMatrix::ColorMatrix
	static osg::ColorMatrix* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ColorMatrix, cannot match any of the overloads for function ColorMatrix:\n  ColorMatrix()\n  ColorMatrix(const osg::ColorMatrix &, const osg::CopyOp &)\n  ColorMatrix(lua_Table *)\n  ColorMatrix(lua_Table *, const osg::ColorMatrix &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ColorMatrix::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ColorMatrix::cloneType() const function, expected prototype:\nosg::Object * osg::ColorMatrix::cloneType() const\nClass arguments details:\n");
		}


		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ColorMatrix::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ColorMatrix::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ColorMatrix::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ColorMatrix::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMatrix::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ColorMatrix::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ColorMatrix::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ColorMatrix::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ColorMatrix::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ColorMatrix::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ColorMatrix::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ColorMatrix::libraryName() const function, expected prototype:\nconst char * osg::ColorMatrix::libraryName() const\nClass arguments details:\n");
		}


		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ColorMatrix::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ColorMatrix::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ColorMatrix::className() const function, expected prototype:\nconst char * osg::ColorMatrix::className() const\nClass arguments details:\n");
		}


		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ColorMatrix::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ColorMatrix::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ColorMatrix::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ColorMatrix::getType() const\nClass arguments details:\n");
		}


		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ColorMatrix::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ColorMatrix::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ColorMatrix::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ColorMatrix::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ColorMatrix::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ColorMatrix::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ColorMatrix::setMatrix(const osg::Matrixd & matrix)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ColorMatrix::setMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::ColorMatrix::setMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::ColorMatrix::setMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ColorMatrix::setMatrix(const osg::Matrixd &)");
		}
		self->setMatrix(matrix);

		return 0;
	}

	// osg::Matrixd & osg::ColorMatrix::getMatrix()
	static int _bind_getMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd & osg::ColorMatrix::getMatrix() function, expected prototype:\nosg::Matrixd & osg::ColorMatrix::getMatrix()\nClass arguments details:\n");
		}


		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd & osg::ColorMatrix::getMatrix()");
		}
		const osg::Matrixd* lret = &self->getMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::Matrixd & osg::ColorMatrix::getMatrix() const
	static int _bind_getMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrix_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::ColorMatrix::getMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::ColorMatrix::getMatrix() const\nClass arguments details:\n");
		}


		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::ColorMatrix::getMatrix() const");
		}
		const osg::Matrixd* lret = &self->getMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ColorMatrix::getMatrix
	static int _bind_getMatrix(lua_State *L) {
		if (_lg_typecheck_getMatrix_overload_1(L)) return _bind_getMatrix_overload_1(L);
		if (_lg_typecheck_getMatrix_overload_2(L)) return _bind_getMatrix_overload_2(L);

		luaL_error(L, "error in function getMatrix, cannot match any of the overloads for function getMatrix:\n  getMatrix()\n  getMatrix()\n");
		return 0;
	}

	// void osg::ColorMatrix::apply(osg::State & state) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ColorMatrix::apply(osg::State & state) const function, expected prototype:\nvoid osg::ColorMatrix::apply(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::ColorMatrix::apply function");
		}
		osg::State & state=*state_ptr;

		osg::ColorMatrix* self=dynamic_cast< osg::ColorMatrix* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ColorMatrix::apply(osg::State &) const");
		}
		self->apply(state);

		return 0;
	}


	// Operator binds:

};

osg::ColorMatrix* LunaTraits< osg::ColorMatrix >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ColorMatrix::_bind_ctor(L);
}

void LunaTraits< osg::ColorMatrix >::_bind_dtor(osg::ColorMatrix* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ColorMatrix >::className[] = "ColorMatrix";
const char LunaTraits< osg::ColorMatrix >::fullName[] = "osg::ColorMatrix";
const char LunaTraits< osg::ColorMatrix >::moduleName[] = "osg";
const char* LunaTraits< osg::ColorMatrix >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::ColorMatrix >::hash = 74571549;
const int LunaTraits< osg::ColorMatrix >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ColorMatrix >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ColorMatrix::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ColorMatrix::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ColorMatrix::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ColorMatrix::_bind_libraryName},
	{"className", &luna_wrapper_osg_ColorMatrix::_bind_className},
	{"getType", &luna_wrapper_osg_ColorMatrix::_bind_getType},
	{"compare", &luna_wrapper_osg_ColorMatrix::_bind_compare},
	{"setMatrix", &luna_wrapper_osg_ColorMatrix::_bind_setMatrix},
	{"getMatrix", &luna_wrapper_osg_ColorMatrix::_bind_getMatrix},
	{"apply", &luna_wrapper_osg_ColorMatrix::_bind_apply},
	{"__eq", &luna_wrapper_osg_ColorMatrix::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ColorMatrix >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ColorMatrix::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ColorMatrix >::enumValues[] = {
	{0,0}
};


