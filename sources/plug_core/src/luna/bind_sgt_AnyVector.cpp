#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_AnyVector.h>

class luna_wrapper_sgt_AnyVector {
public:
	typedef Luna< sgt::AnyVector > luna_t;

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
		//sgt::AnyVector* ptr= dynamic_cast< sgt::AnyVector* >(Luna< osg::Referenced >::check(L,1));
		sgt::AnyVector* ptr= luna_caster< osg::Referenced, sgt::AnyVector >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::AnyVector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_resizeGLObjectBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89979598)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::AnyVector::AnyVector()
	static sgt::AnyVector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::AnyVector::AnyVector() function, expected prototype:\nsgt::AnyVector::AnyVector()\nClass arguments details:\n");
		}


		return new sgt::AnyVector();
	}

	// sgt::AnyVector::AnyVector(lua_Table * data)
	static sgt::AnyVector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::AnyVector::AnyVector(lua_Table * data) function, expected prototype:\nsgt::AnyVector::AnyVector(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_sgt_AnyVector(L,NULL);
	}

	// Overload binder for sgt::AnyVector::AnyVector
	static sgt::AnyVector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AnyVector, cannot match any of the overloads for function AnyVector:\n  AnyVector()\n  AnyVector(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// int sgt::AnyVector::vector_push_back(sgt::AnyVector * vec, lua_Any * dum, lua_State * L)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::AnyVector::vector_push_back(sgt::AnyVector * vec, lua_Any * dum, lua_State * L) function, expected prototype:\nint sgt::AnyVector::vector_push_back(sgt::AnyVector * vec, lua_Any * dum, lua_State * L)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		sgt::AnyVector* vec=(Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1));

		return vector_push_back(vec, NULL, L);
	}

	// int sgt::AnyVector::vector_get(sgt::AnyVector * vec, unsigned int index, lua_State * L)
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::AnyVector::vector_get(sgt::AnyVector * vec, unsigned int index, lua_State * L) function, expected prototype:\nint sgt::AnyVector::vector_get(sgt::AnyVector * vec, unsigned int index, lua_State * L)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		sgt::AnyVector* vec=(Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1));
		unsigned int index=(unsigned int)lua_tointeger(L,2);

		return vector_get(vec, index, L);
	}

	// void sgt::AnyVector::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::AnyVector::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::AnyVector::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::AnyVector::base_setThreadSafeRefUnref(bool)");
		}
		self->AnyVector::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void sgt::AnyVector::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::AnyVector::base_setName(const std::string & name) function, expected prototype:\nvoid sgt::AnyVector::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::AnyVector::base_setName(const std::string &)");
		}
		self->AnyVector::setName(name);

		return 0;
	}

	// void sgt::AnyVector::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::AnyVector::base_computeDataVariance() function, expected prototype:\nvoid sgt::AnyVector::base_computeDataVariance()\nClass arguments details:\n");
		}


		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::AnyVector::base_computeDataVariance()");
		}
		self->AnyVector::computeDataVariance();

		return 0;
	}

	// void sgt::AnyVector::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::AnyVector::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid sgt::AnyVector::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::AnyVector::base_setUserData(osg::Referenced *)");
		}
		self->AnyVector::setUserData(obj);

		return 0;
	}

	// osg::Referenced * sgt::AnyVector::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * sgt::AnyVector::base_getUserData() function, expected prototype:\nosg::Referenced * sgt::AnyVector::base_getUserData()\nClass arguments details:\n");
		}


		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * sgt::AnyVector::base_getUserData()");
		}
		osg::Referenced * lret = self->AnyVector::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * sgt::AnyVector::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * sgt::AnyVector::base_getUserData() const function, expected prototype:\nconst osg::Referenced * sgt::AnyVector::base_getUserData() const\nClass arguments details:\n");
		}


		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * sgt::AnyVector::base_getUserData() const");
		}
		const osg::Referenced * lret = self->AnyVector::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::AnyVector::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void sgt::AnyVector::base_resizeGLObjectBuffers(unsigned int arg1)
	static int _bind_base_resizeGLObjectBuffers(lua_State *L) {
		if (!_lg_typecheck_base_resizeGLObjectBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::AnyVector::base_resizeGLObjectBuffers(unsigned int arg1) function, expected prototype:\nvoid sgt::AnyVector::base_resizeGLObjectBuffers(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::AnyVector::base_resizeGLObjectBuffers(unsigned int)");
		}
		self->AnyVector::resizeGLObjectBuffers(_arg1);

		return 0;
	}

	// void sgt::AnyVector::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::AnyVector::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid sgt::AnyVector::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 89979598\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::AnyVector::base_releaseGLObjects(osg::State *) const");
		}
		self->AnyVector::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * sgt::AnyVector::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::AnyVector::base_cloneType() const function, expected prototype:\nosg::Object * sgt::AnyVector::base_cloneType() const\nClass arguments details:\n");
		}


		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::AnyVector::base_cloneType() const");
		}
		osg::Object * lret = self->AnyVector::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::AnyVector::base_clone() const
	static int _bind_base_clone_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_clone_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::AnyVector::base_clone() const function, expected prototype:\nosg::Object * sgt::AnyVector::base_clone() const\nClass arguments details:\n");
		}


		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::AnyVector::base_clone() const");
		}
		osg::Object * lret = self->AnyVector::clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::AnyVector::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_clone_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::AnyVector::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * sgt::AnyVector::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in sgt::AnyVector::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::AnyVector::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->AnyVector::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::AnyVector::base_clone
	static int _bind_base_clone(lua_State *L) {
		if (_lg_typecheck_base_clone_overload_1(L)) return _bind_base_clone_overload_1(L);
		if (_lg_typecheck_base_clone_overload_2(L)) return _bind_base_clone_overload_2(L);

		luaL_error(L, "error in function base_clone, cannot match any of the overloads for function base_clone:\n  base_clone()\n  base_clone(const osg::CopyOp &)\n");
		return 0;
	}

	// bool sgt::AnyVector::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::AnyVector::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool sgt::AnyVector::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::AnyVector::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->AnyVector::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * sgt::AnyVector::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::AnyVector::base_libraryName() const function, expected prototype:\nconst char * sgt::AnyVector::base_libraryName() const\nClass arguments details:\n");
		}


		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::AnyVector::base_libraryName() const");
		}
		const char * lret = self->AnyVector::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * sgt::AnyVector::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::AnyVector::base_className() const function, expected prototype:\nconst char * sgt::AnyVector::base_className() const\nClass arguments details:\n");
		}


		sgt::AnyVector* self=Luna< osg::Referenced >::checkSubType< sgt::AnyVector >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::AnyVector::base_className() const");
		}
		const char * lret = self->AnyVector::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

sgt::AnyVector* LunaTraits< sgt::AnyVector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_AnyVector::_bind_ctor(L);
}

void LunaTraits< sgt::AnyVector >::_bind_dtor(sgt::AnyVector* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::AnyVector >::className[] = "AnyVector";
const char LunaTraits< sgt::AnyVector >::fullName[] = "sgt::AnyVector";
const char LunaTraits< sgt::AnyVector >::moduleName[] = "sgt";
const char* LunaTraits< sgt::AnyVector >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::AnyVector >::hash = 11388484;
const int LunaTraits< sgt::AnyVector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::AnyVector >::methods[] = {
	{"push_back", &luna_wrapper_sgt_AnyVector::_bind_push_back},
	{"get", &luna_wrapper_sgt_AnyVector::_bind_get},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_AnyVector::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_sgt_AnyVector::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_sgt_AnyVector::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_sgt_AnyVector::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_sgt_AnyVector::_bind_base_getUserData},
	{"base_resizeGLObjectBuffers", &luna_wrapper_sgt_AnyVector::_bind_base_resizeGLObjectBuffers},
	{"base_releaseGLObjects", &luna_wrapper_sgt_AnyVector::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_sgt_AnyVector::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_sgt_AnyVector::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_sgt_AnyVector::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_sgt_AnyVector::_bind_base_libraryName},
	{"base_className", &luna_wrapper_sgt_AnyVector::_bind_base_className},
	{"__eq", &luna_wrapper_sgt_AnyVector::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::AnyVector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_AnyVector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::AnyVector >::enumValues[] = {
	{0,0}
};


