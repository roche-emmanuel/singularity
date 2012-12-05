#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_RefMatrixf.h>

class luna_wrapper_osg_RefMatrixf {
public:
	typedef Luna< osg::RefMatrixf > luna_t;

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
		osg::RefMatrixf* ptr= dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RefMatrixf >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,1))) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903840) ) return false;
		if( (!dynamic_cast< osg::Matrixf* >(Luna< osg::Matrixf >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!dynamic_cast< osg::Matrixd* >(Luna< osg::Matrixd >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		if( lua_gettop(L)!=17 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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
		if( lua_isnumber(L,17)==0 ) return false;
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
	// osg::RefMatrixf::RefMatrixf()
	static osg::RefMatrixf* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf() function, expected prototype:\nosg::RefMatrixf::RefMatrixf()\nClass arguments details:\n");
		}


		return new osg::RefMatrixf();
	}

	// osg::RefMatrixf::RefMatrixf(const osg::Matrixf & other)
	static osg::RefMatrixf* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(const osg::Matrixf & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(const osg::Matrixf & other)\nClass arguments details:\narg 1 ID = 18903840\n");
		}

		const osg::Matrixf* other_ptr=(Luna< osg::Matrixf >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::Matrixf & other=*other_ptr;

		return new osg::RefMatrixf(other);
	}

	// osg::RefMatrixf::RefMatrixf(const osg::Matrixd & other)
	static osg::RefMatrixf* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(const osg::Matrixd & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(const osg::Matrixd & other)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* other_ptr=(Luna< osg::Matrixd >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::Matrixd & other=*other_ptr;

		return new osg::RefMatrixf(other);
	}

	// osg::RefMatrixf::RefMatrixf(const osg::RefMatrixf & other)
	static osg::RefMatrixf* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(const osg::RefMatrixf & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(const osg::RefMatrixf & other)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::RefMatrixf* other_ptr=dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::RefMatrixf & other=*other_ptr;

		return new osg::RefMatrixf(other);
	}

	// osg::RefMatrixf::RefMatrixf(float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33)
	static osg::RefMatrixf* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33)\nClass arguments details:\n");
		}

		float a00=(float)lua_tonumber(L,1);
		float a01=(float)lua_tonumber(L,2);
		float a02=(float)lua_tonumber(L,3);
		float a03=(float)lua_tonumber(L,4);
		float a10=(float)lua_tonumber(L,5);
		float a11=(float)lua_tonumber(L,6);
		float a12=(float)lua_tonumber(L,7);
		float a13=(float)lua_tonumber(L,8);
		float a20=(float)lua_tonumber(L,9);
		float a21=(float)lua_tonumber(L,10);
		float a22=(float)lua_tonumber(L,11);
		float a23=(float)lua_tonumber(L,12);
		float a30=(float)lua_tonumber(L,13);
		float a31=(float)lua_tonumber(L,14);
		float a32=(float)lua_tonumber(L,15);
		float a33=(float)lua_tonumber(L,16);

		return new osg::RefMatrixf(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data)
	static osg::RefMatrixf* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_RefMatrixf(L,NULL);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixf & other)
	static osg::RefMatrixf* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixf & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixf & other)\nClass arguments details:\narg 2 ID = 18903840\n");
		}

		const osg::Matrixf* other_ptr=(Luna< osg::Matrixf >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::Matrixf & other=*other_ptr;

		return new wrapper_osg_RefMatrixf(L,NULL, other);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixd & other)
	static osg::RefMatrixf* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixd & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::Matrixd & other)\nClass arguments details:\narg 2 ID = 18903838\n");
		}

		const osg::Matrixd* other_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::Matrixd & other=*other_ptr;

		return new wrapper_osg_RefMatrixf(L,NULL, other);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::RefMatrixf & other)
	static osg::RefMatrixf* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::RefMatrixf & other) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data, const osg::RefMatrixf & other)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		const osg::RefMatrixf* other_ptr=dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in osg::RefMatrixf::RefMatrixf function");
		}
		const osg::RefMatrixf & other=*other_ptr;

		return new wrapper_osg_RefMatrixf(L,NULL, other);
	}

	// osg::RefMatrixf::RefMatrixf(lua_Table * data, float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33)
	static osg::RefMatrixf* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RefMatrixf::RefMatrixf(lua_Table * data, float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33) function, expected prototype:\nosg::RefMatrixf::RefMatrixf(lua_Table * data, float a00, float a01, float a02, float a03, float a10, float a11, float a12, float a13, float a20, float a21, float a22, float a23, float a30, float a31, float a32, float a33)\nClass arguments details:\n");
		}

		float a00=(float)lua_tonumber(L,2);
		float a01=(float)lua_tonumber(L,3);
		float a02=(float)lua_tonumber(L,4);
		float a03=(float)lua_tonumber(L,5);
		float a10=(float)lua_tonumber(L,6);
		float a11=(float)lua_tonumber(L,7);
		float a12=(float)lua_tonumber(L,8);
		float a13=(float)lua_tonumber(L,9);
		float a20=(float)lua_tonumber(L,10);
		float a21=(float)lua_tonumber(L,11);
		float a22=(float)lua_tonumber(L,12);
		float a23=(float)lua_tonumber(L,13);
		float a30=(float)lua_tonumber(L,14);
		float a31=(float)lua_tonumber(L,15);
		float a32=(float)lua_tonumber(L,16);
		float a33=(float)lua_tonumber(L,17);

		return new wrapper_osg_RefMatrixf(L,NULL, a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);
	}

	// Overload binder for osg::RefMatrixf::RefMatrixf
	static osg::RefMatrixf* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);

		luaL_error(L, "error in function RefMatrixf, cannot match any of the overloads for function RefMatrixf:\n  RefMatrixf()\n  RefMatrixf(const osg::Matrixf &)\n  RefMatrixf(const osg::Matrixd &)\n  RefMatrixf(const osg::RefMatrixf &)\n  RefMatrixf(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)\n  RefMatrixf(lua_Table *)\n  RefMatrixf(lua_Table *, const osg::Matrixf &)\n  RefMatrixf(lua_Table *, const osg::Matrixd &)\n  RefMatrixf(lua_Table *, const osg::RefMatrixf &)\n  RefMatrixf(lua_Table *, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::RefMatrixf::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixf::cloneType() const function, expected prototype:\nosg::Object * osg::RefMatrixf::cloneType() const\nClass arguments details:\n");
		}


		osg::RefMatrixf* self=dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixf::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::RefMatrixf::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::RefMatrixf::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::RefMatrixf::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::RefMatrixf::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::RefMatrixf* self=dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::RefMatrixf::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::RefMatrixf::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::RefMatrixf::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::RefMatrixf::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::RefMatrixf* self=dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::RefMatrixf::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::RefMatrixf::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixf::libraryName() const function, expected prototype:\nconst char * osg::RefMatrixf::libraryName() const\nClass arguments details:\n");
		}


		osg::RefMatrixf* self=dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixf::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::RefMatrixf::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::RefMatrixf::className() const function, expected prototype:\nconst char * osg::RefMatrixf::className() const\nClass arguments details:\n");
		}


		osg::RefMatrixf* self=dynamic_cast< osg::RefMatrixf* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::RefMatrixf::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::RefMatrixf* LunaTraits< osg::RefMatrixf >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RefMatrixf::_bind_ctor(L);
}

void LunaTraits< osg::RefMatrixf >::_bind_dtor(osg::RefMatrixf* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RefMatrixf >::className[] = "RefMatrixf";
const char LunaTraits< osg::RefMatrixf >::fullName[] = "osg::RefMatrixf";
const char LunaTraits< osg::RefMatrixf >::moduleName[] = "osg";
const char* LunaTraits< osg::RefMatrixf >::parents[] = {"osg.Object", "osg.Matrixf", 0};
const int LunaTraits< osg::RefMatrixf >::hash = 77367129;
const int LunaTraits< osg::RefMatrixf >::uniqueIDs[] = {50169651, 18903840,0};

luna_RegType LunaTraits< osg::RefMatrixf >::methods[] = {
	{"cloneType", &luna_wrapper_osg_RefMatrixf::_bind_cloneType},
	{"clone", &luna_wrapper_osg_RefMatrixf::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_RefMatrixf::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_RefMatrixf::_bind_libraryName},
	{"className", &luna_wrapper_osg_RefMatrixf::_bind_className},
	{"__eq", &luna_wrapper_osg_RefMatrixf::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RefMatrixf >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RefMatrixf::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RefMatrixf >::enumValues[] = {
	{0,0}
};


