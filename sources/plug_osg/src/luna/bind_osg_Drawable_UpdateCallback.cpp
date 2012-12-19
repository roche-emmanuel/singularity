#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Drawable_UpdateCallback.h>

class luna_wrapper_osg_Drawable_UpdateCallback {
public:
	typedef Luna< osg::Drawable::UpdateCallback > luna_t;

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
		//osg::Drawable::UpdateCallback* ptr= dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::Drawable::UpdateCallback* ptr= luna_caster< osg::Referenced, osg::Drawable::UpdateCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Drawable::UpdateCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Drawable::UpdateCallback::UpdateCallback()
	static osg::Drawable::UpdateCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::UpdateCallback::UpdateCallback() function, expected prototype:\nosg::Drawable::UpdateCallback::UpdateCallback()\nClass arguments details:\n");
		}


		return new osg::Drawable::UpdateCallback();
	}

	// osg::Drawable::UpdateCallback::UpdateCallback(const osg::Drawable::UpdateCallback & arg1, const osg::CopyOp & arg2)
	static osg::Drawable::UpdateCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::UpdateCallback::UpdateCallback(const osg::Drawable::UpdateCallback & arg1, const osg::CopyOp & arg2) function, expected prototype:\nosg::Drawable::UpdateCallback::UpdateCallback(const osg::Drawable::UpdateCallback & arg1, const osg::CopyOp & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::Drawable::UpdateCallback* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::UpdateCallback::UpdateCallback function");
		}
		const osg::Drawable::UpdateCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::UpdateCallback::UpdateCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Drawable::UpdateCallback(_arg1, _arg2);
	}

	// osg::Drawable::UpdateCallback::UpdateCallback(lua_Table * data)
	static osg::Drawable::UpdateCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::UpdateCallback::UpdateCallback(lua_Table * data) function, expected prototype:\nosg::Drawable::UpdateCallback::UpdateCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Drawable_UpdateCallback(L,NULL);
	}

	// osg::Drawable::UpdateCallback::UpdateCallback(lua_Table * data, const osg::Drawable::UpdateCallback & arg2, const osg::CopyOp & arg3)
	static osg::Drawable::UpdateCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::UpdateCallback::UpdateCallback(lua_Table * data, const osg::Drawable::UpdateCallback & arg2, const osg::CopyOp & arg3) function, expected prototype:\nosg::Drawable::UpdateCallback::UpdateCallback(lua_Table * data, const osg::Drawable::UpdateCallback & arg2, const osg::CopyOp & arg3)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		const osg::Drawable::UpdateCallback* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::UpdateCallback::UpdateCallback function");
		}
		const osg::Drawable::UpdateCallback & _arg2=*_arg2_ptr;
		const osg::CopyOp* _arg3_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osg::Drawable::UpdateCallback::UpdateCallback function");
		}
		const osg::CopyOp & _arg3=*_arg3_ptr;

		return new wrapper_osg_Drawable_UpdateCallback(L,NULL, _arg2, _arg3);
	}

	// Overload binder for osg::Drawable::UpdateCallback::UpdateCallback
	static osg::Drawable::UpdateCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function UpdateCallback, cannot match any of the overloads for function UpdateCallback:\n  UpdateCallback()\n  UpdateCallback(const osg::Drawable::UpdateCallback &, const osg::CopyOp &)\n  UpdateCallback(lua_Table *)\n  UpdateCallback(lua_Table *, const osg::Drawable::UpdateCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Drawable::UpdateCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::UpdateCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::UpdateCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::UpdateCallback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::UpdateCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::UpdateCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Drawable::UpdateCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::UpdateCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::UpdateCallback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::UpdateCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::UpdateCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::UpdateCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::UpdateCallback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::UpdateCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::UpdateCallback::libraryName() const function, expected prototype:\nconst char * osg::Drawable::UpdateCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::UpdateCallback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::UpdateCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::UpdateCallback::className() const function, expected prototype:\nconst char * osg::Drawable::UpdateCallback::className() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::UpdateCallback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Drawable::UpdateCallback::update(osg::NodeVisitor * arg1, osg::Drawable * arg2)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::UpdateCallback::update(osg::NodeVisitor * arg1, osg::Drawable * arg2) function, expected prototype:\nvoid osg::Drawable::UpdateCallback::update(osg::NodeVisitor * arg1, osg::Drawable * arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* _arg2=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::UpdateCallback::update(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->update(_arg1, _arg2);

		return 0;
	}

	// void osg::Drawable::UpdateCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::UpdateCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Drawable::UpdateCallback::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::UpdateCallback::base_setName(const std::string &)");
		}
		self->UpdateCallback::setName(name);

		return 0;
	}

	// void osg::Drawable::UpdateCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::UpdateCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::Drawable::UpdateCallback::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::UpdateCallback::base_computeDataVariance()");
		}
		self->UpdateCallback::computeDataVariance();

		return 0;
	}

	// void osg::Drawable::UpdateCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::UpdateCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Drawable::UpdateCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::UpdateCallback::base_setUserData(osg::Referenced *)");
		}
		self->UpdateCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Drawable::UpdateCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Drawable::UpdateCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Drawable::UpdateCallback::base_getUserData()\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Drawable::UpdateCallback::base_getUserData()");
		}
		osg::Referenced * lret = self->UpdateCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Drawable::UpdateCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Drawable::UpdateCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Drawable::UpdateCallback::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Drawable::UpdateCallback::base_getUserData() const");
		}
		const osg::Referenced * lret = self->UpdateCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Drawable::UpdateCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Drawable::UpdateCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::UpdateCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Drawable::UpdateCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::UpdateCallback::base_releaseGLObjects(osg::State *) const");
		}
		self->UpdateCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Drawable::UpdateCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::UpdateCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::UpdateCallback::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::UpdateCallback::base_cloneType() const");
		}
		osg::Object * lret = self->UpdateCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::UpdateCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::UpdateCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Drawable::UpdateCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::UpdateCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::UpdateCallback::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->UpdateCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::UpdateCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::UpdateCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::UpdateCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::UpdateCallback::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->UpdateCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::UpdateCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::UpdateCallback::base_libraryName() const function, expected prototype:\nconst char * osg::Drawable::UpdateCallback::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::UpdateCallback::base_libraryName() const");
		}
		const char * lret = self->UpdateCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::UpdateCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::UpdateCallback::base_className() const function, expected prototype:\nconst char * osg::Drawable::UpdateCallback::base_className() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::UpdateCallback::base_className() const");
		}
		const char * lret = self->UpdateCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Drawable::UpdateCallback::base_update(osg::NodeVisitor * arg1, osg::Drawable * arg2)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::UpdateCallback::base_update(osg::NodeVisitor * arg1, osg::Drawable * arg2) function, expected prototype:\nvoid osg::Drawable::UpdateCallback::base_update(osg::NodeVisitor * arg1, osg::Drawable * arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* _arg2=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osg::Drawable::UpdateCallback* self=Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::UpdateCallback::base_update(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->UpdateCallback::update(_arg1, _arg2);

		return 0;
	}


	// Operator binds:

};

osg::Drawable::UpdateCallback* LunaTraits< osg::Drawable::UpdateCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Drawable_UpdateCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Drawable::UpdateCallback >::_bind_dtor(osg::Drawable::UpdateCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Drawable::UpdateCallback >::className[] = "UpdateCallback";
const char LunaTraits< osg::Drawable::UpdateCallback >::fullName[] = "osg::Drawable::UpdateCallback";
const char LunaTraits< osg::Drawable::UpdateCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::UpdateCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Drawable::UpdateCallback >::hash = 5213827;
const int LunaTraits< osg::Drawable::UpdateCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Drawable::UpdateCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_className},
	{"update", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_update},
	{"base_setName", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_className},
	{"base_update", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_base_update},
	{"__eq", &luna_wrapper_osg_Drawable_UpdateCallback::_bind___eq},
	{"getTable", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::UpdateCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Drawable_UpdateCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::UpdateCallback >::enumValues[] = {
	{0,0}
};


