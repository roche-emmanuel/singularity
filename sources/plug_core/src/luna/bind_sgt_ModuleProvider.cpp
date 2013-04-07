#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_ModuleProvider.h>

class luna_wrapper_sgt_ModuleProvider {
public:
	typedef Luna< sgt::ModuleProvider > luna_t;

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

		sgt::ModuleProvider* self= (sgt::ModuleProvider*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::ModuleProvider >::push(L,self,false);
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
		//sgt::ModuleProvider* ptr= dynamic_cast< sgt::ModuleProvider* >(Luna< osg::Referenced >::check(L,1));
		sgt::ModuleProvider* ptr= luna_caster< osg::Referenced, sgt::ModuleProvider >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::ModuleProvider >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_hasModule(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_registerModule(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unregisterModule(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModule(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadPackage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
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
	// sgt::ModuleProvider::ModuleProvider()
	static sgt::ModuleProvider* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::ModuleProvider::ModuleProvider() function, expected prototype:\nsgt::ModuleProvider::ModuleProvider()\nClass arguments details:\n");
		}


		return new sgt::ModuleProvider();
	}

	// sgt::ModuleProvider::ModuleProvider(const sgt::ModuleProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY)
	static sgt::ModuleProvider* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::ModuleProvider::ModuleProvider(const sgt::ModuleProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY) function, expected prototype:\nsgt::ModuleProvider::ModuleProvider(const sgt::ModuleProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const sgt::ModuleProvider* tm_ptr=(Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in sgt::ModuleProvider::ModuleProvider function");
		}
		const sgt::ModuleProvider & tm=*tm_ptr;
		const osg::CopyOp* co_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !co_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg co in sgt::ModuleProvider::ModuleProvider function");
		}
		const osg::CopyOp & co=luatop>1 ? *co_ptr : (const osg::CopyOp&)sgtCopyOp::SHALLOW_COPY;

		return new sgt::ModuleProvider(tm, co);
	}

	// sgt::ModuleProvider::ModuleProvider(lua_Table * data)
	static sgt::ModuleProvider* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::ModuleProvider::ModuleProvider(lua_Table * data) function, expected prototype:\nsgt::ModuleProvider::ModuleProvider(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_sgt_ModuleProvider(L,NULL);
	}

	// sgt::ModuleProvider::ModuleProvider(lua_Table * data, const sgt::ModuleProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY)
	static sgt::ModuleProvider* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::ModuleProvider::ModuleProvider(lua_Table * data, const sgt::ModuleProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY) function, expected prototype:\nsgt::ModuleProvider::ModuleProvider(lua_Table * data, const sgt::ModuleProvider & tm, const osg::CopyOp & co = sgtCopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const sgt::ModuleProvider* tm_ptr=(Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,2));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in sgt::ModuleProvider::ModuleProvider function");
		}
		const sgt::ModuleProvider & tm=*tm_ptr;
		const osg::CopyOp* co_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !co_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg co in sgt::ModuleProvider::ModuleProvider function");
		}
		const osg::CopyOp & co=luatop>2 ? *co_ptr : (const osg::CopyOp&)sgtCopyOp::SHALLOW_COPY;

		return new wrapper_sgt_ModuleProvider(L,NULL, tm, co);
	}

	// Overload binder for sgt::ModuleProvider::ModuleProvider
	static sgt::ModuleProvider* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ModuleProvider, cannot match any of the overloads for function ModuleProvider:\n  ModuleProvider()\n  ModuleProvider(const sgt::ModuleProvider &, const osg::CopyOp &)\n  ModuleProvider(lua_Table *)\n  ModuleProvider(lua_Table *, const sgt::ModuleProvider &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * sgt::ModuleProvider::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::ModuleProvider::cloneType() const function, expected prototype:\nosg::Object * sgt::ModuleProvider::cloneType() const\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::ModuleProvider::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::ModuleProvider::clone() const
	static int _bind_clone_overload_1(lua_State *L) {
		if (!_lg_typecheck_clone_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::ModuleProvider::clone() const function, expected prototype:\nosg::Object * sgt::ModuleProvider::clone() const\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::ModuleProvider::clone() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::ModuleProvider::clone(const osg::CopyOp & arg1) const
	static int _bind_clone_overload_2(lua_State *L) {
		if (!_lg_typecheck_clone_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::ModuleProvider::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * sgt::ModuleProvider::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in sgt::ModuleProvider::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::ModuleProvider::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::ModuleProvider::clone
	static int _bind_clone(lua_State *L) {
		if (_lg_typecheck_clone_overload_1(L)) return _bind_clone_overload_1(L);
		if (_lg_typecheck_clone_overload_2(L)) return _bind_clone_overload_2(L);

		luaL_error(L, "error in function clone, cannot match any of the overloads for function clone:\n  clone()\n  clone(const osg::CopyOp &)\n");
		return 0;
	}

	// bool sgt::ModuleProvider::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::ModuleProvider::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool sgt::ModuleProvider::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::ModuleProvider::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * sgt::ModuleProvider::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::ModuleProvider::libraryName() const function, expected prototype:\nconst char * sgt::ModuleProvider::libraryName() const\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::ModuleProvider::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * sgt::ModuleProvider::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::ModuleProvider::className() const function, expected prototype:\nconst char * sgt::ModuleProvider::className() const\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::ModuleProvider::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// static bool sgt::ModuleProvider::hasModule(const std::string & moduleName)
	static int _bind_hasModule(lua_State *L) {
		if (!_lg_typecheck_hasModule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool sgt::ModuleProvider::hasModule(const std::string & moduleName) function, expected prototype:\nstatic bool sgt::ModuleProvider::hasModule(const std::string & moduleName)\nClass arguments details:\n");
		}

		std::string moduleName(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = sgt::ModuleProvider::hasModule(moduleName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool sgt::ModuleProvider::registerModule(const std::string & moduleName, const std::string & data)
	static int _bind_registerModule(lua_State *L) {
		if (!_lg_typecheck_registerModule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool sgt::ModuleProvider::registerModule(const std::string & moduleName, const std::string & data) function, expected prototype:\nstatic bool sgt::ModuleProvider::registerModule(const std::string & moduleName, const std::string & data)\nClass arguments details:\n");
		}

		std::string moduleName(lua_tostring(L,1),lua_objlen(L,1));
		std::string data(lua_tostring(L,2),lua_objlen(L,2));

		bool lret = sgt::ModuleProvider::registerModule(moduleName, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool sgt::ModuleProvider::unregisterModule(const std::string & moduleName)
	static int _bind_unregisterModule(lua_State *L) {
		if (!_lg_typecheck_unregisterModule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool sgt::ModuleProvider::unregisterModule(const std::string & moduleName) function, expected prototype:\nstatic bool sgt::ModuleProvider::unregisterModule(const std::string & moduleName)\nClass arguments details:\n");
		}

		std::string moduleName(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = sgt::ModuleProvider::unregisterModule(moduleName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static std::string sgt::ModuleProvider::getModule(const std::string & moduleName)
	static int _bind_getModule(lua_State *L) {
		if (!_lg_typecheck_getModule(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static std::string sgt::ModuleProvider::getModule(const std::string & moduleName) function, expected prototype:\nstatic std::string sgt::ModuleProvider::getModule(const std::string & moduleName)\nClass arguments details:\n");
		}

		std::string moduleName(lua_tostring(L,1),lua_objlen(L,1));

		std::string lret = sgt::ModuleProvider::getModule(moduleName);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static void sgt::ModuleProvider::loadPackage(const std::string & packageFile)
	static int _bind_loadPackage(lua_State *L) {
		if (!_lg_typecheck_loadPackage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void sgt::ModuleProvider::loadPackage(const std::string & packageFile) function, expected prototype:\nstatic void sgt::ModuleProvider::loadPackage(const std::string & packageFile)\nClass arguments details:\n");
		}

		std::string packageFile(lua_tostring(L,1),lua_objlen(L,1));

		sgt::ModuleProvider::loadPackage(packageFile);

		return 0;
	}

	// void sgt::ModuleProvider::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::ModuleProvider::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::ModuleProvider::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::ModuleProvider::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ModuleProvider::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void sgt::ModuleProvider::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::ModuleProvider::base_setName(const std::string & name) function, expected prototype:\nvoid sgt::ModuleProvider::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::ModuleProvider::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ModuleProvider::setName(name);

		return 0;
	}

	// void sgt::ModuleProvider::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::ModuleProvider::base_computeDataVariance() function, expected prototype:\nvoid sgt::ModuleProvider::base_computeDataVariance()\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::ModuleProvider::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ModuleProvider::computeDataVariance();

		return 0;
	}

	// void sgt::ModuleProvider::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::ModuleProvider::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid sgt::ModuleProvider::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::ModuleProvider::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ModuleProvider::setUserData(obj);

		return 0;
	}

	// osg::Referenced * sgt::ModuleProvider::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * sgt::ModuleProvider::base_getUserData() function, expected prototype:\nosg::Referenced * sgt::ModuleProvider::base_getUserData()\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * sgt::ModuleProvider::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->ModuleProvider::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * sgt::ModuleProvider::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * sgt::ModuleProvider::base_getUserData() const function, expected prototype:\nconst osg::Referenced * sgt::ModuleProvider::base_getUserData() const\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * sgt::ModuleProvider::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->ModuleProvider::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::ModuleProvider::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void sgt::ModuleProvider::base_resizeGLObjectBuffers(unsigned int arg1)
	static int _bind_base_resizeGLObjectBuffers(lua_State *L) {
		if (!_lg_typecheck_base_resizeGLObjectBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::ModuleProvider::base_resizeGLObjectBuffers(unsigned int arg1) function, expected prototype:\nvoid sgt::ModuleProvider::base_resizeGLObjectBuffers(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::ModuleProvider::base_resizeGLObjectBuffers(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ModuleProvider::resizeGLObjectBuffers(_arg1);

		return 0;
	}

	// void sgt::ModuleProvider::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::ModuleProvider::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid sgt::ModuleProvider::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 89979598\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::ModuleProvider::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ModuleProvider::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * sgt::ModuleProvider::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::ModuleProvider::base_cloneType() const function, expected prototype:\nosg::Object * sgt::ModuleProvider::base_cloneType() const\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::ModuleProvider::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->ModuleProvider::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::ModuleProvider::base_clone() const
	static int _bind_base_clone_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_clone_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::ModuleProvider::base_clone() const function, expected prototype:\nosg::Object * sgt::ModuleProvider::base_clone() const\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::ModuleProvider::base_clone() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->ModuleProvider::clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * sgt::ModuleProvider::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_clone_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * sgt::ModuleProvider::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * sgt::ModuleProvider::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in sgt::ModuleProvider::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * sgt::ModuleProvider::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->ModuleProvider::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::ModuleProvider::base_clone
	static int _bind_base_clone(lua_State *L) {
		if (_lg_typecheck_base_clone_overload_1(L)) return _bind_base_clone_overload_1(L);
		if (_lg_typecheck_base_clone_overload_2(L)) return _bind_base_clone_overload_2(L);

		luaL_error(L, "error in function base_clone, cannot match any of the overloads for function base_clone:\n  base_clone()\n  base_clone(const osg::CopyOp &)\n");
		return 0;
	}

	// bool sgt::ModuleProvider::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::ModuleProvider::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool sgt::ModuleProvider::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::ModuleProvider::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->ModuleProvider::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * sgt::ModuleProvider::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::ModuleProvider::base_libraryName() const function, expected prototype:\nconst char * sgt::ModuleProvider::base_libraryName() const\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::ModuleProvider::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->ModuleProvider::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * sgt::ModuleProvider::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * sgt::ModuleProvider::base_className() const function, expected prototype:\nconst char * sgt::ModuleProvider::base_className() const\nClass arguments details:\n");
		}


		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * sgt::ModuleProvider::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->ModuleProvider::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

sgt::ModuleProvider* LunaTraits< sgt::ModuleProvider >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_ModuleProvider::_bind_ctor(L);
}

void LunaTraits< sgt::ModuleProvider >::_bind_dtor(sgt::ModuleProvider* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::ModuleProvider >::className[] = "ModuleProvider";
const char LunaTraits< sgt::ModuleProvider >::fullName[] = "sgt::ModuleProvider";
const char LunaTraits< sgt::ModuleProvider >::moduleName[] = "sgt";
const char* LunaTraits< sgt::ModuleProvider >::parents[] = {"sgt.Object", 0};
const int LunaTraits< sgt::ModuleProvider >::hash = 28667775;
const int LunaTraits< sgt::ModuleProvider >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::ModuleProvider >::methods[] = {
	{"cloneType", &luna_wrapper_sgt_ModuleProvider::_bind_cloneType},
	{"clone", &luna_wrapper_sgt_ModuleProvider::_bind_clone},
	{"isSameKindAs", &luna_wrapper_sgt_ModuleProvider::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_sgt_ModuleProvider::_bind_libraryName},
	{"className", &luna_wrapper_sgt_ModuleProvider::_bind_className},
	{"hasModule", &luna_wrapper_sgt_ModuleProvider::_bind_hasModule},
	{"registerModule", &luna_wrapper_sgt_ModuleProvider::_bind_registerModule},
	{"unregisterModule", &luna_wrapper_sgt_ModuleProvider::_bind_unregisterModule},
	{"getModule", &luna_wrapper_sgt_ModuleProvider::_bind_getModule},
	{"loadPackage", &luna_wrapper_sgt_ModuleProvider::_bind_loadPackage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_ModuleProvider::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_sgt_ModuleProvider::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_sgt_ModuleProvider::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_sgt_ModuleProvider::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_sgt_ModuleProvider::_bind_base_getUserData},
	{"base_resizeGLObjectBuffers", &luna_wrapper_sgt_ModuleProvider::_bind_base_resizeGLObjectBuffers},
	{"base_releaseGLObjects", &luna_wrapper_sgt_ModuleProvider::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_sgt_ModuleProvider::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_sgt_ModuleProvider::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_sgt_ModuleProvider::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_sgt_ModuleProvider::_bind_base_libraryName},
	{"base_className", &luna_wrapper_sgt_ModuleProvider::_bind_base_className},
	{"__eq", &luna_wrapper_sgt_ModuleProvider::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_ModuleProvider::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_ModuleProvider::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_ModuleProvider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::ModuleProvider >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_ModuleProvider::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::ModuleProvider >::enumValues[] = {
	{0,0}
};


