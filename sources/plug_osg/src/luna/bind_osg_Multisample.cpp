#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Multisample.h>

class luna_wrapper_osg_Multisample {
public:
	typedef Luna< osg::Multisample > luna_t;

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

		osg::Multisample* self= (osg::Multisample*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Multisample >::push(L,self,false);
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
		//osg::Multisample* ptr= dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		osg::Multisample* ptr= luna_caster< osg::Referenced, osg::Multisample >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Multisample >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_setSampleCoverage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCoverage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoverage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInvert(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInvert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Multisample::Multisample()
	static osg::Multisample* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Multisample() function, expected prototype:\nosg::Multisample::Multisample()\nClass arguments details:\n");
		}


		return new osg::Multisample();
	}

	// osg::Multisample::Multisample(const osg::Multisample & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Multisample* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Multisample(const osg::Multisample & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Multisample::Multisample(const osg::Multisample & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Multisample* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::Multisample::Multisample function");
		}
		const osg::Multisample & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Multisample::Multisample function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new osg::Multisample(trans, copyop);
	}

	// osg::Multisample::Multisample(lua_Table * data)
	static osg::Multisample* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Multisample(lua_Table * data) function, expected prototype:\nosg::Multisample::Multisample(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Multisample(L,NULL);
	}

	// osg::Multisample::Multisample(lua_Table * data, const osg::Multisample & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Multisample* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Multisample(lua_Table * data, const osg::Multisample & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Multisample::Multisample(lua_Table * data, const osg::Multisample & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Multisample* trans_ptr=(Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,2));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::Multisample::Multisample function");
		}
		const osg::Multisample & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Multisample::Multisample function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : (const osg::CopyOp&)osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Multisample(L,NULL, trans, copyop);
	}

	// Overload binder for osg::Multisample::Multisample
	static osg::Multisample* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Multisample, cannot match any of the overloads for function Multisample:\n  Multisample()\n  Multisample(const osg::Multisample &, const osg::CopyOp &)\n  Multisample(lua_Table *)\n  Multisample(lua_Table *, const osg::Multisample &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Multisample::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Multisample::cloneType() const function, expected prototype:\nosg::Object * osg::Multisample::cloneType() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Multisample::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Multisample::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Multisample::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Multisample::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Multisample::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Multisample::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Multisample::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Multisample::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Multisample::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Multisample::libraryName() const function, expected prototype:\nconst char * osg::Multisample::libraryName() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Multisample::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Multisample::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Multisample::className() const function, expected prototype:\nconst char * osg::Multisample::className() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Multisample::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Multisample::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Multisample::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Multisample::getType() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Multisample::getType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Multisample::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Multisample::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Multisample::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Multisample::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Multisample::compare(const osg::StateAttribute &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Multisample::setSampleCoverage(float coverage, bool invert)
	static int _bind_setSampleCoverage(lua_State *L) {
		if (!_lg_typecheck_setSampleCoverage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::setSampleCoverage(float coverage, bool invert) function, expected prototype:\nvoid osg::Multisample::setSampleCoverage(float coverage, bool invert)\nClass arguments details:\n");
		}

		float coverage=(float)lua_tonumber(L,2);
		bool invert=(bool)(lua_toboolean(L,3)==1);

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::setSampleCoverage(float, bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setSampleCoverage(coverage, invert);

		return 0;
	}

	// void osg::Multisample::setCoverage(float coverage)
	static int _bind_setCoverage(lua_State *L) {
		if (!_lg_typecheck_setCoverage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::setCoverage(float coverage) function, expected prototype:\nvoid osg::Multisample::setCoverage(float coverage)\nClass arguments details:\n");
		}

		float coverage=(float)lua_tonumber(L,2);

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::setCoverage(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCoverage(coverage);

		return 0;
	}

	// float osg::Multisample::getCoverage() const
	static int _bind_getCoverage(lua_State *L) {
		if (!_lg_typecheck_getCoverage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Multisample::getCoverage() const function, expected prototype:\nfloat osg::Multisample::getCoverage() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Multisample::getCoverage() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getCoverage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Multisample::setInvert(bool invert)
	static int _bind_setInvert(lua_State *L) {
		if (!_lg_typecheck_setInvert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::setInvert(bool invert) function, expected prototype:\nvoid osg::Multisample::setInvert(bool invert)\nClass arguments details:\n");
		}

		bool invert=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::setInvert(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setInvert(invert);

		return 0;
	}

	// bool osg::Multisample::getInvert() const
	static int _bind_getInvert(lua_State *L) {
		if (!_lg_typecheck_getInvert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::getInvert() const function, expected prototype:\nbool osg::Multisample::getInvert() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::getInvert() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getInvert();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Multisample::setHint(osg::Multisample::Mode mode)
	static int _bind_setHint(lua_State *L) {
		if (!_lg_typecheck_setHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::setHint(osg::Multisample::Mode mode) function, expected prototype:\nvoid osg::Multisample::setHint(osg::Multisample::Mode mode)\nClass arguments details:\n");
		}

		osg::Multisample::Mode mode=(osg::Multisample::Mode)lua_tointeger(L,2);

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::setHint(osg::Multisample::Mode). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setHint(mode);

		return 0;
	}

	// osg::Multisample::Mode osg::Multisample::getHint() const
	static int _bind_getHint(lua_State *L) {
		if (!_lg_typecheck_getHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Mode osg::Multisample::getHint() const function, expected prototype:\nosg::Multisample::Mode osg::Multisample::getHint() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Multisample::Mode osg::Multisample::getHint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Multisample::Mode lret = self->getHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Multisample::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Multisample::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Multisample::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::apply(osg::State &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::Multisample::Extensions * osg::Multisample::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Multisample::Extensions * osg::Multisample::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::Multisample::Extensions * osg::Multisample::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample::Extensions * lret = osg::Multisample::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Multisample::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::Multisample::setExtensions(unsigned int contextID, osg::Multisample::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Multisample::setExtensions(unsigned int contextID, osg::Multisample::Extensions * extensions) function, expected prototype:\nstatic void osg::Multisample::setExtensions(unsigned int contextID, osg::Multisample::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::Multisample::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::Multisample::Extensions >(L,2));

		osg::Multisample::setExtensions(contextID, extensions);

		return 0;
	}

	// void osg::Multisample::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Multisample::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Multisample::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Multisample::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Multisample::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Multisample::setName(name);

		return 0;
	}

	// void osg::Multisample::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::base_computeDataVariance() function, expected prototype:\nvoid osg::Multisample::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Multisample::computeDataVariance();

		return 0;
	}

	// void osg::Multisample::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Multisample::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Multisample::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Multisample::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Multisample::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Multisample::base_getUserData()\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Multisample::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->Multisample::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Multisample::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Multisample::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Multisample::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Multisample::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->Multisample::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Multisample::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::Multisample::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Multisample::base_asTexture() function, expected prototype:\nosg::Texture * osg::Multisample::base_asTexture()\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Multisample::base_asTexture(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Texture * lret = self->Multisample::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Multisample::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Multisample::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Multisample::base_asTexture() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Multisample::base_asTexture() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Texture * lret = self->Multisample::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Multisample::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::Multisample::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Multisample::base_getMember() const function, expected prototype:\nunsigned int osg::Multisample::base_getMember() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Multisample::base_getMember() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->Multisample::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Multisample::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::base_isTextureAttribute() const function, expected prototype:\nbool osg::Multisample::base_isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::base_isTextureAttribute() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Multisample::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Multisample::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Multisample::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Multisample::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Multisample::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Multisample::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Multisample::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Multisample::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Multisample::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Multisample::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::Multisample::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Multisample::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::base_compileGLObjects(osg::State &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Multisample::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::Multisample::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Multisample::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Multisample::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Multisample::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Multisample::base_cloneType() const function, expected prototype:\nosg::Object * osg::Multisample::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Multisample::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Multisample::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Multisample::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Multisample::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Multisample::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Multisample::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Multisample::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Multisample::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Multisample::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Multisample::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Multisample::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Multisample::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Multisample::base_libraryName() const function, expected prototype:\nconst char * osg::Multisample::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Multisample::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Multisample::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Multisample::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Multisample::base_className() const function, expected prototype:\nconst char * osg::Multisample::base_className() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Multisample::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Multisample::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Multisample::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Multisample::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Multisample::base_getType() const\nClass arguments details:\n");
		}


		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Multisample::base_getType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::StateAttribute::Type lret = self->Multisample::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Multisample::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Multisample::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Multisample::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Multisample::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Multisample::base_compare(const osg::StateAttribute &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->Multisample::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Multisample::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Multisample::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Multisample::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Multisample* self=Luna< osg::Referenced >::checkSubType< osg::Multisample >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::base_apply(osg::State &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Multisample::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Multisample* LunaTraits< osg::Multisample >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Multisample::_bind_ctor(L);
}

void LunaTraits< osg::Multisample >::_bind_dtor(osg::Multisample* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Multisample >::className[] = "Multisample";
const char LunaTraits< osg::Multisample >::fullName[] = "osg::Multisample";
const char LunaTraits< osg::Multisample >::moduleName[] = "osg";
const char* LunaTraits< osg::Multisample >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Multisample >::hash = 23439217;
const int LunaTraits< osg::Multisample >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Multisample >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Multisample::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Multisample::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Multisample::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Multisample::_bind_libraryName},
	{"className", &luna_wrapper_osg_Multisample::_bind_className},
	{"getType", &luna_wrapper_osg_Multisample::_bind_getType},
	{"compare", &luna_wrapper_osg_Multisample::_bind_compare},
	{"setSampleCoverage", &luna_wrapper_osg_Multisample::_bind_setSampleCoverage},
	{"setCoverage", &luna_wrapper_osg_Multisample::_bind_setCoverage},
	{"getCoverage", &luna_wrapper_osg_Multisample::_bind_getCoverage},
	{"setInvert", &luna_wrapper_osg_Multisample::_bind_setInvert},
	{"getInvert", &luna_wrapper_osg_Multisample::_bind_getInvert},
	{"setHint", &luna_wrapper_osg_Multisample::_bind_setHint},
	{"getHint", &luna_wrapper_osg_Multisample::_bind_getHint},
	{"apply", &luna_wrapper_osg_Multisample::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_Multisample::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_Multisample::_bind_setExtensions},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Multisample::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_Multisample::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Multisample::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Multisample::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Multisample::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_Multisample::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_Multisample::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_Multisample::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_Multisample::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Multisample::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_Multisample::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Multisample::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Multisample::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Multisample::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Multisample::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Multisample::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Multisample::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Multisample::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Multisample::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_Multisample::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_Multisample::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Multisample::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Multisample::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Multisample::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Multisample >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Multisample::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Multisample >::enumValues[] = {
	{"FASTEST", osg::Multisample::FASTEST},
	{"NICEST", osg::Multisample::NICEST},
	{"DONT_CARE", osg::Multisample::DONT_CARE},
	{0,0}
};


