#include <plug_common.h>

class luna_wrapper_osg_Projection {
public:
	typedef Luna< osg::Projection > luna_t;

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
		osg::Projection* ptr= dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Projection >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Projection::Projection()
	static osg::Projection* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Projection::Projection() function, expected prototype:\nosg::Projection::Projection()\nClass arguments details:\n");
		}


		return new osg::Projection();
	}

	// osg::Projection::Projection(const osg::Projection & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Projection* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Projection::Projection(const osg::Projection & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Projection::Projection(const osg::Projection & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Projection* _arg1_ptr=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Projection::Projection function");
		}
		const osg::Projection & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Projection::Projection function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Projection(_arg1, copyop);
	}

	// osg::Projection::Projection(const osg::Matrixd & matix)
	static osg::Projection* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Projection::Projection(const osg::Matrixd & matix) function, expected prototype:\nosg::Projection::Projection(const osg::Matrixd & matix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matix_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !matix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matix in osg::Projection::Projection function");
		}
		const osg::Matrixd & matix=*matix_ptr;

		return new osg::Projection(matix);
	}

	// Overload binder for osg::Projection::Projection
	static osg::Projection* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Projection, cannot match any of the overloads for function Projection:\n  Projection()\n  Projection(const osg::Projection &, const osg::CopyOp &)\n  Projection(const osg::Matrixd &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Projection::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Projection::cloneType() const function, expected prototype:\nosg::Object * osg::Projection::cloneType() const\nClass arguments details:\n");
		}


		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Projection::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Projection::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Projection::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Projection::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Projection::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Projection::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Projection::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Projection::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Projection::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Projection::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Projection::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Projection::className() const function, expected prototype:\nconst char * osg::Projection::className() const\nClass arguments details:\n");
		}


		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Projection::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Projection::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Projection::libraryName() const function, expected prototype:\nconst char * osg::Projection::libraryName() const\nClass arguments details:\n");
		}


		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Projection::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Projection::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Projection::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Projection::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Projection::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Projection::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::Projection::setMatrix(const osg::Matrixd & mat)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Projection::setMatrix(const osg::Matrixd & mat) function, expected prototype:\nvoid osg::Projection::setMatrix(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Projection::setMatrix function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Projection::setMatrix(const osg::Matrixd &)");
		}
		self->setMatrix(mat);

		return 0;
	}

	// const osg::Matrixd & osg::Projection::getMatrix() const
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Matrixd & osg::Projection::getMatrix() const function, expected prototype:\nconst osg::Matrixd & osg::Projection::getMatrix() const\nClass arguments details:\n");
		}


		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Matrixd & osg::Projection::getMatrix() const");
		}
		const osg::Matrixd* lret = &self->getMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,false);

		return 1;
	}

	// void osg::Projection::preMult(const osg::Matrixd & mat)
	static int _bind_preMult(lua_State *L) {
		if (!_lg_typecheck_preMult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Projection::preMult(const osg::Matrixd & mat) function, expected prototype:\nvoid osg::Projection::preMult(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Projection::preMult function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Projection::preMult(const osg::Matrixd &)");
		}
		self->preMult(mat);

		return 0;
	}

	// void osg::Projection::postMult(const osg::Matrixd & mat)
	static int _bind_postMult(lua_State *L) {
		if (!_lg_typecheck_postMult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Projection::postMult(const osg::Matrixd & mat) function, expected prototype:\nvoid osg::Projection::postMult(const osg::Matrixd & mat)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* mat_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Projection::postMult function");
		}
		const osg::Matrixd & mat=*mat_ptr;

		osg::Projection* self=dynamic_cast< osg::Projection* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Projection::postMult(const osg::Matrixd &)");
		}
		self->postMult(mat);

		return 0;
	}


	// Operator binds:

};

osg::Projection* LunaTraits< osg::Projection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Projection::_bind_ctor(L);
}

void LunaTraits< osg::Projection >::_bind_dtor(osg::Projection* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Projection >::className[] = "Projection";
const char LunaTraits< osg::Projection >::fullName[] = "osg::Projection";
const char LunaTraits< osg::Projection >::moduleName[] = "osg";
const char* LunaTraits< osg::Projection >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::Projection >::hash = 71522647;
const int LunaTraits< osg::Projection >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Projection >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Projection::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Projection::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Projection::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Projection::_bind_className},
	{"libraryName", &luna_wrapper_osg_Projection::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Projection::_bind_accept},
	{"setMatrix", &luna_wrapper_osg_Projection::_bind_setMatrix},
	{"getMatrix", &luna_wrapper_osg_Projection::_bind_getMatrix},
	{"preMult", &luna_wrapper_osg_Projection::_bind_preMult},
	{"postMult", &luna_wrapper_osg_Projection::_bind_postMult},
	{"__eq", &luna_wrapper_osg_Projection::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Projection >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Projection::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Projection >::enumValues[] = {
	{0,0}
};


