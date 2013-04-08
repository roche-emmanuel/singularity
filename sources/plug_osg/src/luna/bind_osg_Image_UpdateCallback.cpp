#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Image_UpdateCallback.h>

class luna_wrapper_osg_Image_UpdateCallback {
public:
	typedef Luna< osg::Image::UpdateCallback > luna_t;

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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		osg::Image::UpdateCallback* self= (osg::Image::UpdateCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Image::UpdateCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::Image::UpdateCallback* ptr= dynamic_cast< osg::Image::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::Image::UpdateCallback* ptr= luna_caster< osg::Referenced, osg::Image::UpdateCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Image::UpdateCallback >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Image::UpdateCallback::UpdateCallback()
	static osg::Image::UpdateCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image::UpdateCallback::UpdateCallback() function, expected prototype:\nosg::Image::UpdateCallback::UpdateCallback()\nClass arguments details:\n");
		}


		return new osg::Image::UpdateCallback();
	}

	// osg::Image::UpdateCallback::UpdateCallback(lua_Table * data)
	static osg::Image::UpdateCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image::UpdateCallback::UpdateCallback(lua_Table * data) function, expected prototype:\nosg::Image::UpdateCallback::UpdateCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Image_UpdateCallback(L,NULL);
	}

	// Overload binder for osg::Image::UpdateCallback::UpdateCallback
	static osg::Image::UpdateCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function UpdateCallback, cannot match any of the overloads for function UpdateCallback:\n  UpdateCallback()\n  UpdateCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Image::UpdateCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::UpdateCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Image::UpdateCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::UpdateCallback::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->UpdateCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Image::UpdateCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::UpdateCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Image::UpdateCallback::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::UpdateCallback::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->UpdateCallback::setName(name);

		return 0;
	}

	// void osg::Image::UpdateCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::UpdateCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::Image::UpdateCallback::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::UpdateCallback::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->UpdateCallback::computeDataVariance();

		return 0;
	}

	// void osg::Image::UpdateCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::UpdateCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Image::UpdateCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::UpdateCallback::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->UpdateCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Image::UpdateCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Image::UpdateCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Image::UpdateCallback::base_getUserData()\nClass arguments details:\n");
		}


		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Image::UpdateCallback::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->UpdateCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Image::UpdateCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Image::UpdateCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Image::UpdateCallback::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Image::UpdateCallback::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->UpdateCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Image::UpdateCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Image::UpdateCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::UpdateCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Image::UpdateCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::UpdateCallback::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->UpdateCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Image::UpdateCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Image::UpdateCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::Image::UpdateCallback::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Image::UpdateCallback::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->UpdateCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Image::UpdateCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Image::UpdateCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Image::UpdateCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Image::UpdateCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Image::UpdateCallback::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->UpdateCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Image::UpdateCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Image::UpdateCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Image::UpdateCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Image::UpdateCallback::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->UpdateCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Image::UpdateCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Image::UpdateCallback::base_libraryName() const function, expected prototype:\nconst char * osg::Image::UpdateCallback::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Image::UpdateCallback::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->UpdateCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Image::UpdateCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Image::UpdateCallback::base_className() const function, expected prototype:\nconst char * osg::Image::UpdateCallback::base_className() const\nClass arguments details:\n");
		}


		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Image::UpdateCallback::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->UpdateCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// void osg::Image::UpdateCallback::operator()(osg::StateAttribute * arg1, osg::NodeVisitor * arg2)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Image::UpdateCallback::operator()(osg::StateAttribute * arg1, osg::NodeVisitor * arg2) function, expected prototype:\nvoid osg::Image::UpdateCallback::operator()(osg::StateAttribute * arg1, osg::NodeVisitor * arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::StateAttribute* _arg1=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::Image::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Image::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Image::UpdateCallback::operator()(osg::StateAttribute *, osg::NodeVisitor *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->operator()(_arg1, _arg2);

		return 0;
	}


};

osg::Image::UpdateCallback* LunaTraits< osg::Image::UpdateCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Image_UpdateCallback::_bind_ctor(L);
}

void LunaTraits< osg::Image::UpdateCallback >::_bind_dtor(osg::Image::UpdateCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Image::UpdateCallback >::className[] = "Image_UpdateCallback";
const char LunaTraits< osg::Image::UpdateCallback >::fullName[] = "osg::Image::UpdateCallback";
const char LunaTraits< osg::Image::UpdateCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Image::UpdateCallback >::parents[] = {"osg.StateAttributeCallback", 0};
const int LunaTraits< osg::Image::UpdateCallback >::hash = 67242554;
const int LunaTraits< osg::Image::UpdateCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Image::UpdateCallback >::methods[] = {
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Image_UpdateCallback::_bind_base_className},
	{"op_call", &luna_wrapper_osg_Image_UpdateCallback::_bind_op_call},
	{"__eq", &luna_wrapper_osg_Image_UpdateCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Image_UpdateCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Image_UpdateCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Image_UpdateCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Image::UpdateCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Image_UpdateCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Image::UpdateCallback >::enumValues[] = {
	{0,0}
};


