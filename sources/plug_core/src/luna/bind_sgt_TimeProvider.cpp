#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TimeProvider.h>

class luna_wrapper_sgt_TimeProvider {
public:
	typedef Luna< sgt::TimeProvider > luna_t;

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
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
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
		//sgt::TimeProvider* ptr= dynamic_cast< sgt::TimeProvider* >(Luna< osg::Referenced >::check(L,1));
		sgt::TimeProvider* ptr= luna_caster< osg::Referenced, sgt::TimeProvider >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::TimeProvider >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_getCurrentTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrentTime(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,12269219) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTimeSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMicroPrecision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMicroPrecision(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStartTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStartTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,12269219) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRealTime(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTime(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getElapsedSeconds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
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
	// sgt::TimeProvider::TimeProvider()
	static sgt::TimeProvider* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TimeProvider::TimeProvider() function, expected prototype:\nsgt::TimeProvider::TimeProvider()\nClass arguments details:\n");
		}


		return new sgt::TimeProvider();
	}

	// sgt::TimeProvider::TimeProvider(const sgt::TimeProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY)
	static sgt::TimeProvider* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TimeProvider::TimeProvider(const sgt::TimeProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY) function, expected prototype:\nsgt::TimeProvider::TimeProvider(const sgt::TimeProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const sgt::TimeProvider* tm_ptr=(Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in sgt::TimeProvider::TimeProvider function");
		}
		const sgt::TimeProvider & tm=*tm_ptr;
		const osg::CopyOp* co_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !co_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg co in sgt::TimeProvider::TimeProvider function");
		}
		const osg::CopyOp & co=luatop>1 ? *co_ptr : sgtCopyOp::SHALLOW_COPY;

		return new sgt::TimeProvider(tm, co);
	}

	// sgt::TimeProvider::TimeProvider(lua_Table * data)
	static sgt::TimeProvider* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TimeProvider::TimeProvider(lua_Table * data) function, expected prototype:\nsgt::TimeProvider::TimeProvider(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_sgt_TimeProvider(L,NULL);
	}

	// sgt::TimeProvider::TimeProvider(lua_Table * data, const sgt::TimeProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY)
	static sgt::TimeProvider* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::TimeProvider::TimeProvider(lua_Table * data, const sgt::TimeProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY) function, expected prototype:\nsgt::TimeProvider::TimeProvider(lua_Table * data, const sgt::TimeProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const sgt::TimeProvider* tm_ptr=(Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,2));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in sgt::TimeProvider::TimeProvider function");
		}
		const sgt::TimeProvider & tm=*tm_ptr;
		const osg::CopyOp* co_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !co_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg co in sgt::TimeProvider::TimeProvider function");
		}
		const osg::CopyOp & co=luatop>2 ? *co_ptr : sgtCopyOp::SHALLOW_COPY;

		return new wrapper_sgt_TimeProvider(L,NULL, tm, co);
	}

	// Overload binder for sgt::TimeProvider::TimeProvider
	static sgt::TimeProvider* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TimeProvider, cannot match any of the overloads for function TimeProvider:\n  TimeProvider()\n  TimeProvider(const sgt::TimeProvider &, const osg::CopyOp &)\n  TimeProvider(lua_Table *)\n  TimeProvider(lua_Table *, const sgt::TimeProvider &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * sgt::TimeProvider::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::TimeProvider::cloneType() const function, expected prototype:\nosg::Object * sgt::TimeProvider::cloneType() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::TimeProvider::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::TimeProvider::clone() const
	static int _bind_clone_overload_1(lua_State *L) {
		if (!_lg_typecheck_clone_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::TimeProvider::clone() const function, expected prototype:\nosg::Object * sgt::TimeProvider::clone() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::TimeProvider::clone() const");
		}
		osg::Object * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::TimeProvider::clone(const osg::CopyOp & arg1) const
	static int _bind_clone_overload_2(lua_State *L) {
		if (!_lg_typecheck_clone_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::TimeProvider::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * sgt::TimeProvider::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in sgt::TimeProvider::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::TimeProvider::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::TimeProvider::clone
	static int _bind_clone(lua_State *L) {
		if (_lg_typecheck_clone_overload_1(L)) return _bind_clone_overload_1(L);
		if (_lg_typecheck_clone_overload_2(L)) return _bind_clone_overload_2(L);

		luaL_error(L, "error in function clone, cannot match any of the overloads for function clone:\n  clone()\n  clone(const osg::CopyOp &)\n");
		return 0;
	}

	// bool sgt::TimeProvider::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::TimeProvider::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool sgt::TimeProvider::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::TimeProvider::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * sgt::TimeProvider::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::TimeProvider::libraryName() const function, expected prototype:\nconst char * sgt::TimeProvider::libraryName() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::TimeProvider::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * sgt::TimeProvider::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::TimeProvider::className() const function, expected prototype:\nconst char * sgt::TimeProvider::className() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::TimeProvider::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// posix_time::ptime sgt::TimeProvider::getCurrentTime()
	static int _bind_getCurrentTime(lua_State *L) {
		if (!_lg_typecheck_getCurrentTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in posix_time::ptime sgt::TimeProvider::getCurrentTime() function, expected prototype:\nposix_time::ptime sgt::TimeProvider::getCurrentTime()\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call posix_time::ptime sgt::TimeProvider::getCurrentTime()");
		}
		posix_time::ptime stack_lret = self->getCurrentTime();
		posix_time::ptime* lret = new posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// void sgt::TimeProvider::setCurrentTime(const posix_time::ptime & value, bool utc = false)
	static int _bind_setCurrentTime(lua_State *L) {
		if (!_lg_typecheck_setCurrentTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::setCurrentTime(const posix_time::ptime & value, bool utc = false) function, expected prototype:\nvoid sgt::TimeProvider::setCurrentTime(const posix_time::ptime & value, bool utc = false)\nClass arguments details:\narg 1 ID = 12269219\n");
		}

		int luatop = lua_gettop(L);

		const posix_time::ptime* value_ptr=(Luna< posix_time::ptime >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in sgt::TimeProvider::setCurrentTime function");
		}
		const posix_time::ptime & value=*value_ptr;
		bool utc=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::setCurrentTime(const posix_time::ptime &, bool)");
		}
		self->setCurrentTime(value, utc);

		return 0;
	}

	// void sgt::TimeProvider::setTimeSpeed(double value)
	static int _bind_setTimeSpeed(lua_State *L) {
		if (!_lg_typecheck_setTimeSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::setTimeSpeed(double value) function, expected prototype:\nvoid sgt::TimeProvider::setTimeSpeed(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::setTimeSpeed(double)");
		}
		self->setTimeSpeed(value);

		return 0;
	}

	// double sgt::TimeProvider::getTimeSpeed() const
	static int _bind_getTimeSpeed(lua_State *L) {
		if (!_lg_typecheck_getTimeSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::TimeProvider::getTimeSpeed() const function, expected prototype:\ndouble sgt::TimeProvider::getTimeSpeed() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::TimeProvider::getTimeSpeed() const");
		}
		double lret = self->getTimeSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::TimeProvider::setMicroPrecision(bool enabled)
	static int _bind_setMicroPrecision(lua_State *L) {
		if (!_lg_typecheck_setMicroPrecision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::setMicroPrecision(bool enabled) function, expected prototype:\nvoid sgt::TimeProvider::setMicroPrecision(bool enabled)\nClass arguments details:\n");
		}

		bool enabled=(bool)(lua_toboolean(L,2)==1);

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::setMicroPrecision(bool)");
		}
		self->setMicroPrecision(enabled);

		return 0;
	}

	// bool sgt::TimeProvider::getMicroPrecision() const
	static int _bind_getMicroPrecision(lua_State *L) {
		if (!_lg_typecheck_getMicroPrecision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::TimeProvider::getMicroPrecision() const function, expected prototype:\nbool sgt::TimeProvider::getMicroPrecision() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::TimeProvider::getMicroPrecision() const");
		}
		bool lret = self->getMicroPrecision();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const posix_time::ptime & sgt::TimeProvider::getStartTime() const
	static int _bind_getStartTime(lua_State *L) {
		if (!_lg_typecheck_getStartTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const posix_time::ptime & sgt::TimeProvider::getStartTime() const function, expected prototype:\nconst posix_time::ptime & sgt::TimeProvider::getStartTime() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const posix_time::ptime & sgt::TimeProvider::getStartTime() const");
		}
		const posix_time::ptime* lret = &self->getStartTime();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< posix_time::ptime >::push(L,lret,false);

		return 1;
	}

	// void sgt::TimeProvider::setStartTime(const posix_time::ptime & val)
	static int _bind_setStartTime(lua_State *L) {
		if (!_lg_typecheck_setStartTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::setStartTime(const posix_time::ptime & val) function, expected prototype:\nvoid sgt::TimeProvider::setStartTime(const posix_time::ptime & val)\nClass arguments details:\narg 1 ID = 12269219\n");
		}

		const posix_time::ptime* val_ptr=(Luna< posix_time::ptime >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in sgt::TimeProvider::setStartTime function");
		}
		const posix_time::ptime & val=*val_ptr;

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::setStartTime(const posix_time::ptime &)");
		}
		self->setStartTime(val);

		return 0;
	}

	// static posix_time::ptime sgt::TimeProvider::getRealTime(bool utc = false)
	static int _bind_getRealTime(lua_State *L) {
		if (!_lg_typecheck_getRealTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static posix_time::ptime sgt::TimeProvider::getRealTime(bool utc = false) function, expected prototype:\nstatic posix_time::ptime sgt::TimeProvider::getRealTime(bool utc = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool utc=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : false;

		posix_time::ptime stack_lret = sgt::TimeProvider::getRealTime(utc);
		posix_time::ptime* lret = new posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// static posix_time::ptime sgt::TimeProvider::getTime(sgt::TimeProvider * provider = NULL, bool utc = false)
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static posix_time::ptime sgt::TimeProvider::getTime(sgt::TimeProvider * provider = NULL, bool utc = false) function, expected prototype:\nstatic posix_time::ptime sgt::TimeProvider::getTime(sgt::TimeProvider * provider = NULL, bool utc = false)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		sgt::TimeProvider* provider=luatop>0 ? (Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1)) : (sgt::TimeProvider*)NULL;
		bool utc=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		posix_time::ptime stack_lret = sgt::TimeProvider::getTime(provider, utc);
		posix_time::ptime* lret = new posix_time::ptime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< posix_time::ptime >::push(L,lret,true);

		return 1;
	}

	// static double sgt::TimeProvider::getElapsedSeconds(sgt::TimeProvider * provider)
	static int _bind_getElapsedSeconds(lua_State *L) {
		if (!_lg_typecheck_getElapsedSeconds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static double sgt::TimeProvider::getElapsedSeconds(sgt::TimeProvider * provider) function, expected prototype:\nstatic double sgt::TimeProvider::getElapsedSeconds(sgt::TimeProvider * provider)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		sgt::TimeProvider* provider=(Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1));

		double lret = sgt::TimeProvider::getElapsedSeconds(provider);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::TimeProvider::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::TimeProvider::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::base_setThreadSafeRefUnref(bool)");
		}
		self->TimeProvider::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void sgt::TimeProvider::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::base_setName(const std::string & name) function, expected prototype:\nvoid sgt::TimeProvider::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::base_setName(const std::string &)");
		}
		self->TimeProvider::setName(name);

		return 0;
	}

	// void sgt::TimeProvider::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::base_computeDataVariance() function, expected prototype:\nvoid sgt::TimeProvider::base_computeDataVariance()\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::base_computeDataVariance()");
		}
		self->TimeProvider::computeDataVariance();

		return 0;
	}

	// void sgt::TimeProvider::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid sgt::TimeProvider::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::base_setUserData(osg::Referenced *)");
		}
		self->TimeProvider::setUserData(obj);

		return 0;
	}

	// osg::Referenced * sgt::TimeProvider::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * sgt::TimeProvider::base_getUserData() function, expected prototype:\nosg::Referenced * sgt::TimeProvider::base_getUserData()\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * sgt::TimeProvider::base_getUserData()");
		}
		osg::Referenced * lret = self->TimeProvider::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * sgt::TimeProvider::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * sgt::TimeProvider::base_getUserData() const function, expected prototype:\nconst osg::Referenced * sgt::TimeProvider::base_getUserData() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * sgt::TimeProvider::base_getUserData() const");
		}
		const osg::Referenced * lret = self->TimeProvider::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::TimeProvider::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void sgt::TimeProvider::base_resizeGLObjectBuffers(unsigned int arg1)
	static int _bind_base_resizeGLObjectBuffers(lua_State *L) {
		if (!_lg_typecheck_base_resizeGLObjectBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::base_resizeGLObjectBuffers(unsigned int arg1) function, expected prototype:\nvoid sgt::TimeProvider::base_resizeGLObjectBuffers(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::base_resizeGLObjectBuffers(unsigned int)");
		}
		self->TimeProvider::resizeGLObjectBuffers(_arg1);

		return 0;
	}

	// void sgt::TimeProvider::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::TimeProvider::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid sgt::TimeProvider::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 89979598\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::TimeProvider::base_releaseGLObjects(osg::State *) const");
		}
		self->TimeProvider::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * sgt::TimeProvider::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::TimeProvider::base_cloneType() const function, expected prototype:\nosg::Object * sgt::TimeProvider::base_cloneType() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::TimeProvider::base_cloneType() const");
		}
		osg::Object * lret = self->TimeProvider::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::TimeProvider::base_clone() const
	static int _bind_base_clone_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_clone_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::TimeProvider::base_clone() const function, expected prototype:\nosg::Object * sgt::TimeProvider::base_clone() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::TimeProvider::base_clone() const");
		}
		osg::Object * lret = self->TimeProvider::clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::TimeProvider::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_clone_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::TimeProvider::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * sgt::TimeProvider::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in sgt::TimeProvider::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::TimeProvider::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->TimeProvider::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::TimeProvider::base_clone
	static int _bind_base_clone(lua_State *L) {
		if (_lg_typecheck_base_clone_overload_1(L)) return _bind_base_clone_overload_1(L);
		if (_lg_typecheck_base_clone_overload_2(L)) return _bind_base_clone_overload_2(L);

		luaL_error(L, "error in function base_clone, cannot match any of the overloads for function base_clone:\n  base_clone()\n  base_clone(const osg::CopyOp &)\n");
		return 0;
	}

	// bool sgt::TimeProvider::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::TimeProvider::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool sgt::TimeProvider::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::TimeProvider::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->TimeProvider::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * sgt::TimeProvider::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::TimeProvider::base_libraryName() const function, expected prototype:\nconst char * sgt::TimeProvider::base_libraryName() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::TimeProvider::base_libraryName() const");
		}
		const char * lret = self->TimeProvider::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * sgt::TimeProvider::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::TimeProvider::base_className() const function, expected prototype:\nconst char * sgt::TimeProvider::base_className() const\nClass arguments details:\n");
		}


		sgt::TimeProvider* self=Luna< osg::Referenced >::checkSubType< sgt::TimeProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::TimeProvider::base_className() const");
		}
		const char * lret = self->TimeProvider::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

sgt::TimeProvider* LunaTraits< sgt::TimeProvider >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TimeProvider::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< sgt::TimeProvider >::_bind_dtor(sgt::TimeProvider* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::TimeProvider >::className[] = "TimeProvider";
const char LunaTraits< sgt::TimeProvider >::fullName[] = "sgt::TimeProvider";
const char LunaTraits< sgt::TimeProvider >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TimeProvider >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::TimeProvider >::hash = 12905476;
const int LunaTraits< sgt::TimeProvider >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::TimeProvider >::methods[] = {
	{"cloneType", &luna_wrapper_sgt_TimeProvider::_bind_cloneType},
	{"clone", &luna_wrapper_sgt_TimeProvider::_bind_clone},
	{"isSameKindAs", &luna_wrapper_sgt_TimeProvider::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_sgt_TimeProvider::_bind_libraryName},
	{"className", &luna_wrapper_sgt_TimeProvider::_bind_className},
	{"getCurrentTime", &luna_wrapper_sgt_TimeProvider::_bind_getCurrentTime},
	{"setCurrentTime", &luna_wrapper_sgt_TimeProvider::_bind_setCurrentTime},
	{"setTimeSpeed", &luna_wrapper_sgt_TimeProvider::_bind_setTimeSpeed},
	{"getTimeSpeed", &luna_wrapper_sgt_TimeProvider::_bind_getTimeSpeed},
	{"setMicroPrecision", &luna_wrapper_sgt_TimeProvider::_bind_setMicroPrecision},
	{"getMicroPrecision", &luna_wrapper_sgt_TimeProvider::_bind_getMicroPrecision},
	{"getStartTime", &luna_wrapper_sgt_TimeProvider::_bind_getStartTime},
	{"setStartTime", &luna_wrapper_sgt_TimeProvider::_bind_setStartTime},
	{"getRealTime", &luna_wrapper_sgt_TimeProvider::_bind_getRealTime},
	{"getTime", &luna_wrapper_sgt_TimeProvider::_bind_getTime},
	{"getElapsedSeconds", &luna_wrapper_sgt_TimeProvider::_bind_getElapsedSeconds},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_TimeProvider::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_sgt_TimeProvider::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_sgt_TimeProvider::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_sgt_TimeProvider::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_sgt_TimeProvider::_bind_base_getUserData},
	{"base_resizeGLObjectBuffers", &luna_wrapper_sgt_TimeProvider::_bind_base_resizeGLObjectBuffers},
	{"base_releaseGLObjects", &luna_wrapper_sgt_TimeProvider::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_sgt_TimeProvider::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_sgt_TimeProvider::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_sgt_TimeProvider::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_sgt_TimeProvider::_bind_base_libraryName},
	{"base_className", &luna_wrapper_sgt_TimeProvider::_bind_base_className},
	{"__eq", &luna_wrapper_sgt_TimeProvider::_bind___eq},
	{"getTable", &luna_wrapper_sgt_TimeProvider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TimeProvider >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_TimeProvider::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TimeProvider >::enumValues[] = {
	{0,0}
};


