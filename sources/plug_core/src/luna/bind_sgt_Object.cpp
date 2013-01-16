#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_Object.h>

class luna_wrapper_sgt_Object {
public:
	typedef Luna< sgt::Object > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//sgt::Object* ptr= dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		sgt::Object* ptr= luna_caster< osg::Referenced, sgt::Object >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::Object >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< sgt::Object >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< sgt::Object >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
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

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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
		if( (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
	// sgt::Object::Object()
	static sgt::Object* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object() function, expected prototype:\nsgt::Object::Object()\nClass arguments details:\n");
		}


		return new sgt::Object();
	}

	// sgt::Object::Object(const sgt::Object & rhs)
	static sgt::Object* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object(const sgt::Object & rhs) function, expected prototype:\nsgt::Object::Object(const sgt::Object & rhs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const sgt::Object* rhs_ptr=(Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in sgt::Object::Object function");
		}
		const sgt::Object & rhs=*rhs_ptr;

		return new sgt::Object(rhs);
	}

	// sgt::Object::Object(const sgt::Object & rhs, const osg::CopyOp & copyop)
	static sgt::Object* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object(const sgt::Object & rhs, const osg::CopyOp & copyop) function, expected prototype:\nsgt::Object::Object(const sgt::Object & rhs, const osg::CopyOp & copyop)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const sgt::Object* rhs_ptr=(Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in sgt::Object::Object function");
		}
		const sgt::Object & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in sgt::Object::Object function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new sgt::Object(rhs, copyop);
	}

	// sgt::Object::Object(lua_Table * data)
	static sgt::Object* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object(lua_Table * data) function, expected prototype:\nsgt::Object::Object(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_sgt_Object(L,NULL);
	}

	// sgt::Object::Object(lua_Table * data, const sgt::Object & rhs)
	static sgt::Object* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object(lua_Table * data, const sgt::Object & rhs) function, expected prototype:\nsgt::Object::Object(lua_Table * data, const sgt::Object & rhs)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		const sgt::Object* rhs_ptr=(Luna< osg::Referenced >::checkSubType< sgt::Object >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in sgt::Object::Object function");
		}
		const sgt::Object & rhs=*rhs_ptr;

		return new wrapper_sgt_Object(L,NULL, rhs);
	}

	// sgt::Object::Object(lua_Table * data, const sgt::Object & rhs, const osg::CopyOp & copyop)
	static sgt::Object* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::Object::Object(lua_Table * data, const sgt::Object & rhs, const osg::CopyOp & copyop) function, expected prototype:\nsgt::Object::Object(lua_Table * data, const sgt::Object & rhs, const osg::CopyOp & copyop)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		const sgt::Object* rhs_ptr=(Luna< osg::Referenced >::checkSubType< sgt::Object >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in sgt::Object::Object function");
		}
		const sgt::Object & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in sgt::Object::Object function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new wrapper_sgt_Object(L,NULL, rhs, copyop);
	}

	// Overload binder for sgt::Object::Object
	static sgt::Object* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Object, cannot match any of the overloads for function Object:\n  Object()\n  Object(const sgt::Object &)\n  Object(const sgt::Object &, const osg::CopyOp &)\n  Object(lua_Table *)\n  Object(lua_Table *, const sgt::Object &)\n  Object(lua_Table *, const sgt::Object &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * sgt::Object::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::Object::cloneType() const function, expected prototype:\nosg::Object * sgt::Object::cloneType() const\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::Object::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::Object::clone() const
	static int _bind_clone_overload_1(lua_State *L) {
		if (!_lg_typecheck_clone_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::Object::clone() const function, expected prototype:\nosg::Object * sgt::Object::clone() const\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::Object::clone() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::Object::clone(const osg::CopyOp & arg1) const
	static int _bind_clone_overload_2(lua_State *L) {
		if (!_lg_typecheck_clone_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::Object::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * sgt::Object::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in sgt::Object::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::Object::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Object::clone
	static int _bind_clone(lua_State *L) {
		if (_lg_typecheck_clone_overload_1(L)) return _bind_clone_overload_1(L);
		if (_lg_typecheck_clone_overload_2(L)) return _bind_clone_overload_2(L);

		luaL_error(L, "error in function clone, cannot match any of the overloads for function clone:\n  clone()\n  clone(const osg::CopyOp &)\n");
		return 0;
	}

	// bool sgt::Object::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::Object::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool sgt::Object::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::Object::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * sgt::Object::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::Object::libraryName() const function, expected prototype:\nconst char * sgt::Object::libraryName() const\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::Object::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * sgt::Object::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::Object::className() const function, expected prototype:\nconst char * sgt::Object::className() const\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::Object::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void sgt::Object::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Object::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::Object::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Object::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Object::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void sgt::Object::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Object::base_setName(const std::string & name) function, expected prototype:\nvoid sgt::Object::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Object::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Object::setName(name);

		return 0;
	}

	// void sgt::Object::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Object::base_computeDataVariance() function, expected prototype:\nvoid sgt::Object::base_computeDataVariance()\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Object::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Object::computeDataVariance();

		return 0;
	}

	// void sgt::Object::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Object::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid sgt::Object::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Object::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Object::setUserData(obj);

		return 0;
	}

	// osg::Referenced * sgt::Object::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * sgt::Object::base_getUserData() function, expected prototype:\nosg::Referenced * sgt::Object::base_getUserData()\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * sgt::Object::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->Object::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * sgt::Object::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * sgt::Object::base_getUserData() const function, expected prototype:\nconst osg::Referenced * sgt::Object::base_getUserData() const\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * sgt::Object::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->Object::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Object::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void sgt::Object::base_resizeGLObjectBuffers(unsigned int arg1)
	static int _bind_base_resizeGLObjectBuffers(lua_State *L) {
		if (!_lg_typecheck_base_resizeGLObjectBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Object::base_resizeGLObjectBuffers(unsigned int arg1) function, expected prototype:\nvoid sgt::Object::base_resizeGLObjectBuffers(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Object::base_resizeGLObjectBuffers(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Object::resizeGLObjectBuffers(_arg1);

		return 0;
	}

	// void sgt::Object::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::Object::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid sgt::Object::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 89979598\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::Object::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Object::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * sgt::Object::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::Object::base_cloneType() const function, expected prototype:\nosg::Object * sgt::Object::base_cloneType() const\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::Object::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Object::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::Object::base_clone() const
	static int _bind_base_clone_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_clone_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::Object::base_clone() const function, expected prototype:\nosg::Object * sgt::Object::base_clone() const\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::Object::base_clone() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Object::clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::Object::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_clone_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::Object::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * sgt::Object::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in sgt::Object::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::Object::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Object::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Object::base_clone
	static int _bind_base_clone(lua_State *L) {
		if (_lg_typecheck_base_clone_overload_1(L)) return _bind_base_clone_overload_1(L);
		if (_lg_typecheck_base_clone_overload_2(L)) return _bind_base_clone_overload_2(L);

		luaL_error(L, "error in function base_clone, cannot match any of the overloads for function base_clone:\n  base_clone()\n  base_clone(const osg::CopyOp &)\n");
		return 0;
	}

	// bool sgt::Object::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::Object::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool sgt::Object::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::Object::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Object::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * sgt::Object::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::Object::base_libraryName() const function, expected prototype:\nconst char * sgt::Object::base_libraryName() const\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::Object::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Object::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * sgt::Object::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::Object::base_className() const function, expected prototype:\nconst char * sgt::Object::base_className() const\nClass arguments details:\n");
		}


		sgt::Object* self=Luna< osg::Referenced >::checkSubType< sgt::Object >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::Object::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Object::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

sgt::Object* LunaTraits< sgt::Object >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Object::_bind_ctor(L);
}

void LunaTraits< sgt::Object >::_bind_dtor(sgt::Object* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::Object >::className[] = "Object";
const char LunaTraits< sgt::Object >::fullName[] = "sgt::Object";
const char LunaTraits< sgt::Object >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Object >::parents[] = {"osg.Object", 0};
const int LunaTraits< sgt::Object >::hash = 44367388;
const int LunaTraits< sgt::Object >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::Object >::methods[] = {
	{"cloneType", &luna_wrapper_sgt_Object::_bind_cloneType},
	{"clone", &luna_wrapper_sgt_Object::_bind_clone},
	{"isSameKindAs", &luna_wrapper_sgt_Object::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_sgt_Object::_bind_libraryName},
	{"className", &luna_wrapper_sgt_Object::_bind_className},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_Object::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_sgt_Object::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_sgt_Object::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_sgt_Object::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_sgt_Object::_bind_base_getUserData},
	{"base_resizeGLObjectBuffers", &luna_wrapper_sgt_Object::_bind_base_resizeGLObjectBuffers},
	{"base_releaseGLObjects", &luna_wrapper_sgt_Object::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_sgt_Object::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_sgt_Object::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_sgt_Object::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_sgt_Object::_bind_base_libraryName},
	{"base_className", &luna_wrapper_sgt_Object::_bind_base_className},
	{"__eq", &luna_wrapper_sgt_Object::_bind___eq},
	{"getTable", &luna_wrapper_sgt_Object::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Object >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_Object::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Object >::enumValues[] = {
	{0,0}
};


