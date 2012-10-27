#include <plug_common.h>

class luna_wrapper_osg_RefMatrixd {
public:
	typedef Luna< osg::RefMatrixd > luna_t;

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
		osg::RefMatrixd* ptr= dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefMatrixd >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=16 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( lua_isnumber(L,8)==0 ) return false;
		if( lua_isnumber(L,9)==0 ) return false;
		if( lua_isnumber(L,10)==0 ) return false;
		if( lua_isnumber(L,11)==0 ) return false;
		if( lua_isnumber(L,12)==0 ) return false;
		if( lua_isnumber(L,13)==0 ) return false;
		if( lua_isnumber(L,14)==0 ) return false;
		if( lua_isnumber(L,15)==0 ) return false;
		if( lua_isnumber(L,16)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::RefMatrixd::RefMatrixd()
	static osg::RefMatrixd* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd() function, expected prototype:\nosg::RefMatrixd::RefMatrixd()\nClass arguments details:\n");
		}


		return new osg::RefMatrixd();
	}

	// osg::RefMatrixd::RefMatrixd(const osg::Matrixd & other)
	static osg::RefMatrixd* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(const osg::Matrixd & other) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(const osg::Matrixd & other)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* other_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixd::RefMatrixd function");
		}
		const osg::Matrixd & other=*other_ptr;

		return new osg::RefMatrixd(other);
	}

	// osg::RefMatrixd::RefMatrixd(const osg::Matrixf & other)
	static osg::RefMatrixd* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(const osg::Matrixf & other) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(const osg::Matrixf & other)\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		const osg::Matrixf* other_ptr=(Luna< osg::Matrixf >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixd::RefMatrixd function");
		}
		const osg::Matrixf & other=*other_ptr;

		return new osg::RefMatrixd(other);
	}

	// osg::RefMatrixd::RefMatrixd(const osg::RefMatrixd & other)
	static osg::RefMatrixd* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(const osg::RefMatrixd & other) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(const osg::RefMatrixd & other)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::RefMatrixd* other_ptr=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixd::RefMatrixd function");
		}
		const osg::RefMatrixd & other=*other_ptr;

		return new osg::RefMatrixd(other);
	}

	// osg::RefMatrixd::RefMatrixd(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)
	static osg::RefMatrixd* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd::RefMatrixd(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33) function, expected prototype:\nosg::RefMatrixd::RefMatrixd(double a00, double a01, double a02, double a03, double a10, double a11, double a12, double a13, double a20, double a21, double a22, double a23, double a30, double a31, double a32, double a33)\nClass arguments details:\n");
		}

		double a00=(double)lua_tonumber(L,1);
		double a01=(double)lua_tonumber(L,2);
		double a02=(double)lua_tonumber(L,3);
		double a03=(double)lua_tonumber(L,4);
		double a10=(double)lua_tonumber(L,5);
		double a11=(double)lua_tonumber(L,6);
		double a12=(double)lua_tonumber(L,7);
		double a13=(double)lua_tonumber(L,8);
		double a20=(double)lua_tonumber(L,9);
		double a21=(double)lua_tonumber(L,10);
		double a22=(double)lua_tonumber(L,11);
		double a23=(double)lua_tonumber(L,12);
		double a30=(double)lua_tonumber(L,13);
		double a31=(double)lua_tonumber(L,14);
		double a32=(double)lua_tonumber(L,15);
		double a33=(double)lua_tonumber(L,16);

		return new osg::RefMatrixd(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);
	}

	// Overload binder for osg::RefMatrixd::RefMatrixd
	static osg::RefMatrixd* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function RefMatrixd, cannot match any of the overloads for function RefMatrixd:\n  RefMatrixd()\n  RefMatrixd(const osg::Matrixd &)\n  RefMatrixd(const osg::Matrixf &)\n  RefMatrixd(const osg::RefMatrixd &)\n  RefMatrixd(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::RefMatrixd::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixd::cloneType() const function, expected prototype:\nosg::Object * osg::RefMatrixd::cloneType() const\nClass arguments details:\n");
		}


		osg::RefMatrixd* self=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixd::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::RefMatrixd::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixd::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::RefMatrixd::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::RefMatrixd::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::RefMatrixd* self=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixd::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::RefMatrixd::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::RefMatrixd::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::RefMatrixd::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::RefMatrixd* self=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::RefMatrixd::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::RefMatrixd::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixd::libraryName() const function, expected prototype:\nconst char * osg::RefMatrixd::libraryName() const\nClass arguments details:\n");
		}


		osg::RefMatrixd* self=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixd::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::RefMatrixd::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixd::className() const function, expected prototype:\nconst char * osg::RefMatrixd::className() const\nClass arguments details:\n");
		}


		osg::RefMatrixd* self=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixd::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::RefMatrixd* LunaTraits< osg::RefMatrixd >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RefMatrixd::_bind_ctor(L);
}

void LunaTraits< osg::RefMatrixd >::_bind_dtor(osg::RefMatrixd* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RefMatrixd >::className[] = "RefMatrixd";
const char LunaTraits< osg::RefMatrixd >::fullName[] = "osg::RefMatrixd";
const char LunaTraits< osg::RefMatrixd >::moduleName[] = "osg";
const char* LunaTraits< osg::RefMatrixd >::parents[] = {"osg.Object", "osg.Matrixd", 0};
const int LunaTraits< osg::RefMatrixd >::hash = 77367127;
const int LunaTraits< osg::RefMatrixd >::uniqueIDs[] = {50169651, 18903838,0};

luna_RegType LunaTraits< osg::RefMatrixd >::methods[] = {
	{"cloneType", &luna_wrapper_osg_RefMatrixd::_bind_cloneType},
	{"clone", &luna_wrapper_osg_RefMatrixd::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_RefMatrixd::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_RefMatrixd::_bind_libraryName},
	{"className", &luna_wrapper_osg_RefMatrixd::_bind_className},
	{"__eq", &luna_wrapper_osg_RefMatrixd::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RefMatrixd >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RefMatrixd::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RefMatrixd >::enumValues[] = {
	{0,0}
};


