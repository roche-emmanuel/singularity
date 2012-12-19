#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Fog.h>

class luna_wrapper_osg_Fog {
public:
	typedef Luna< osg::Fog > luna_t;

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
		//osg::Fog* ptr= dynamic_cast< osg::Fog* >(Luna< osg::Referenced >::check(L,1));
		osg::Fog* ptr= luna_caster< osg::Referenced, osg::Fog >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Fog >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::Fog* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( (!dynamic_cast< osg::Fog* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseRadialFog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseRadialFog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFogCoordinateSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFogCoordinateSource(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
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
	// osg::Fog::Fog()
	static osg::Fog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Fog::Fog() function, expected prototype:\nosg::Fog::Fog()\nClass arguments details:\n");
		}


		return new osg::Fog();
	}

	// osg::Fog::Fog(const osg::Fog & fog, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Fog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Fog::Fog(const osg::Fog & fog, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Fog::Fog(const osg::Fog & fog, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Fog* fog_ptr=(Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1));
		if( !fog_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fog in osg::Fog::Fog function");
		}
		const osg::Fog & fog=*fog_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Fog::Fog function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Fog(fog, copyop);
	}

	// osg::Fog::Fog(lua_Table * data)
	static osg::Fog* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Fog::Fog(lua_Table * data) function, expected prototype:\nosg::Fog::Fog(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Fog(L,NULL);
	}

	// osg::Fog::Fog(lua_Table * data, const osg::Fog & fog, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Fog* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Fog::Fog(lua_Table * data, const osg::Fog & fog, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Fog::Fog(lua_Table * data, const osg::Fog & fog, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Fog* fog_ptr=(Luna< osg::Referenced >::checkSubType< osg::Fog >(L,2));
		if( !fog_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fog in osg::Fog::Fog function");
		}
		const osg::Fog & fog=*fog_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Fog::Fog function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Fog(L,NULL, fog, copyop);
	}

	// Overload binder for osg::Fog::Fog
	static osg::Fog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Fog, cannot match any of the overloads for function Fog:\n  Fog()\n  Fog(const osg::Fog &, const osg::CopyOp &)\n  Fog(lua_Table *)\n  Fog(lua_Table *, const osg::Fog &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Fog::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Fog::cloneType() const function, expected prototype:\nosg::Object * osg::Fog::cloneType() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Fog::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Fog::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Fog::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Fog::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Fog::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Fog::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Fog::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Fog::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Fog::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Fog::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Fog::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Fog::libraryName() const function, expected prototype:\nconst char * osg::Fog::libraryName() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Fog::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Fog::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Fog::className() const function, expected prototype:\nconst char * osg::Fog::className() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Fog::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Fog::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Fog::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Fog::getType() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Fog::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Fog::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Fog::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Fog::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Fog::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Fog::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Fog::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Fog::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Fog::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Fog::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Fog::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Fog::setMode(osg::Fog::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::setMode(osg::Fog::Mode mode) function, expected prototype:\nvoid osg::Fog::setMode(osg::Fog::Mode mode)\nClass arguments details:\n");
		}

		osg::Fog::Mode mode=(osg::Fog::Mode)lua_tointeger(L,2);

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::setMode(osg::Fog::Mode)");
		}
		self->setMode(mode);

		return 0;
	}

	// osg::Fog::Mode osg::Fog::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Fog::Mode osg::Fog::getMode() const function, expected prototype:\nosg::Fog::Mode osg::Fog::getMode() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Fog::Mode osg::Fog::getMode() const");
		}
		osg::Fog::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Fog::setDensity(float density)
	static int _bind_setDensity(lua_State *L) {
		if (!_lg_typecheck_setDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::setDensity(float density) function, expected prototype:\nvoid osg::Fog::setDensity(float density)\nClass arguments details:\n");
		}

		float density=(float)lua_tonumber(L,2);

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::setDensity(float)");
		}
		self->setDensity(density);

		return 0;
	}

	// float osg::Fog::getDensity() const
	static int _bind_getDensity(lua_State *L) {
		if (!_lg_typecheck_getDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Fog::getDensity() const function, expected prototype:\nfloat osg::Fog::getDensity() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Fog::getDensity() const");
		}
		float lret = self->getDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Fog::setStart(float start)
	static int _bind_setStart(lua_State *L) {
		if (!_lg_typecheck_setStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::setStart(float start) function, expected prototype:\nvoid osg::Fog::setStart(float start)\nClass arguments details:\n");
		}

		float start=(float)lua_tonumber(L,2);

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::setStart(float)");
		}
		self->setStart(start);

		return 0;
	}

	// float osg::Fog::getStart() const
	static int _bind_getStart(lua_State *L) {
		if (!_lg_typecheck_getStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Fog::getStart() const function, expected prototype:\nfloat osg::Fog::getStart() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Fog::getStart() const");
		}
		float lret = self->getStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Fog::setEnd(float end)
	static int _bind_setEnd(lua_State *L) {
		if (!_lg_typecheck_setEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::setEnd(float end) function, expected prototype:\nvoid osg::Fog::setEnd(float end)\nClass arguments details:\n");
		}

		float end=(float)lua_tonumber(L,2);

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::setEnd(float)");
		}
		self->setEnd(end);

		return 0;
	}

	// float osg::Fog::getEnd() const
	static int _bind_getEnd(lua_State *L) {
		if (!_lg_typecheck_getEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Fog::getEnd() const function, expected prototype:\nfloat osg::Fog::getEnd() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Fog::getEnd() const");
		}
		float lret = self->getEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Fog::setColor(const osg::Vec4f & color)
	static int _bind_setColor(lua_State *L) {
		if (!_lg_typecheck_setColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::setColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::Fog::setColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::Fog::setColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::setColor(const osg::Vec4f &)");
		}
		self->setColor(color);

		return 0;
	}

	// const osg::Vec4f & osg::Fog::getColor() const
	static int _bind_getColor(lua_State *L) {
		if (!_lg_typecheck_getColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Fog::getColor() const function, expected prototype:\nconst osg::Vec4f & osg::Fog::getColor() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Fog::getColor() const");
		}
		const osg::Vec4f* lret = &self->getColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::Fog::setUseRadialFog(bool useRadialFog)
	static int _bind_setUseRadialFog(lua_State *L) {
		if (!_lg_typecheck_setUseRadialFog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::setUseRadialFog(bool useRadialFog) function, expected prototype:\nvoid osg::Fog::setUseRadialFog(bool useRadialFog)\nClass arguments details:\n");
		}

		bool useRadialFog=(bool)(lua_toboolean(L,2)==1);

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::setUseRadialFog(bool)");
		}
		self->setUseRadialFog(useRadialFog);

		return 0;
	}

	// bool osg::Fog::getUseRadialFog() const
	static int _bind_getUseRadialFog(lua_State *L) {
		if (!_lg_typecheck_getUseRadialFog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Fog::getUseRadialFog() const function, expected prototype:\nbool osg::Fog::getUseRadialFog() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Fog::getUseRadialFog() const");
		}
		bool lret = self->getUseRadialFog();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Fog::setFogCoordinateSource(int source)
	static int _bind_setFogCoordinateSource(lua_State *L) {
		if (!_lg_typecheck_setFogCoordinateSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::setFogCoordinateSource(int source) function, expected prototype:\nvoid osg::Fog::setFogCoordinateSource(int source)\nClass arguments details:\n");
		}

		int source=(int)lua_tointeger(L,2);

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::setFogCoordinateSource(int)");
		}
		self->setFogCoordinateSource(source);

		return 0;
	}

	// int osg::Fog::getFogCoordinateSource() const
	static int _bind_getFogCoordinateSource(lua_State *L) {
		if (!_lg_typecheck_getFogCoordinateSource(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Fog::getFogCoordinateSource() const function, expected prototype:\nint osg::Fog::getFogCoordinateSource() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Fog::getFogCoordinateSource() const");
		}
		int lret = self->getFogCoordinateSource();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Fog::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Fog::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Fog::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::Fog::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Fog::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::base_setName(const std::string &)");
		}
		self->Fog::setName(name);

		return 0;
	}

	// void osg::Fog::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::base_computeDataVariance() function, expected prototype:\nvoid osg::Fog::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::base_computeDataVariance()");
		}
		self->Fog::computeDataVariance();

		return 0;
	}

	// void osg::Fog::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Fog::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::base_setUserData(osg::Referenced *)");
		}
		self->Fog::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Fog::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Fog::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Fog::base_getUserData()\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Fog::base_getUserData()");
		}
		osg::Referenced * lret = self->Fog::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Fog::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Fog::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Fog::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Fog::base_getUserData() const");
		}
		const osg::Referenced * lret = self->Fog::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Fog::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::Fog::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Fog::base_asTexture() function, expected prototype:\nosg::Texture * osg::Fog::base_asTexture()\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Fog::base_asTexture()");
		}
		osg::Texture * lret = self->Fog::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Fog::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Fog::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Fog::base_asTexture() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Fog::base_asTexture() const");
		}
		const osg::Texture * lret = self->Fog::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Fog::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::Fog::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Fog::base_getMember() const function, expected prototype:\nunsigned int osg::Fog::base_getMember() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Fog::base_getMember() const");
		}
		unsigned int lret = self->Fog::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Fog::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Fog::base_isTextureAttribute() const function, expected prototype:\nbool osg::Fog::base_isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Fog::base_isTextureAttribute() const");
		}
		bool lret = self->Fog::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Fog::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Fog::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Fog::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Fog::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Fog::base_checkValidityOfAssociatedModes(osg::State &) const");
		}
		bool lret = self->Fog::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Fog::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::Fog::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Fog::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::base_compileGLObjects(osg::State &) const");
		}
		self->Fog::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::Fog::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Fog::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::base_releaseGLObjects(osg::State *) const");
		}
		self->Fog::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Fog::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Fog::base_cloneType() const function, expected prototype:\nosg::Object * osg::Fog::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Fog::base_cloneType() const");
		}
		osg::Object * lret = self->Fog::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Fog::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Fog::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Fog::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Fog::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Fog::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->Fog::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Fog::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Fog::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Fog::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Fog::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->Fog::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Fog::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Fog::base_libraryName() const function, expected prototype:\nconst char * osg::Fog::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Fog::base_libraryName() const");
		}
		const char * lret = self->Fog::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Fog::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Fog::base_className() const function, expected prototype:\nconst char * osg::Fog::base_className() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Fog::base_className() const");
		}
		const char * lret = self->Fog::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Fog::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Fog::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Fog::base_getType() const\nClass arguments details:\n");
		}


		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Fog::base_getType() const");
		}
		osg::StateAttribute::Type lret = self->Fog::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Fog::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Fog::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Fog::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Fog::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Fog::base_compare(const osg::StateAttribute &) const");
		}
		int lret = self->Fog::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Fog::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Fog::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Fog::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Fog::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Fog::base_getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->Fog::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Fog::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Fog::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Fog::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Fog::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Fog* self=Luna< osg::Referenced >::checkSubType< osg::Fog >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Fog::base_apply(osg::State &) const");
		}
		self->Fog::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Fog* LunaTraits< osg::Fog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Fog::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::Fog >::_bind_dtor(osg::Fog* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Fog >::className[] = "Fog";
const char LunaTraits< osg::Fog >::fullName[] = "osg::Fog";
const char LunaTraits< osg::Fog >::moduleName[] = "osg";
const char* LunaTraits< osg::Fog >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Fog >::hash = 67094519;
const int LunaTraits< osg::Fog >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Fog >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Fog::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Fog::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Fog::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Fog::_bind_libraryName},
	{"className", &luna_wrapper_osg_Fog::_bind_className},
	{"getType", &luna_wrapper_osg_Fog::_bind_getType},
	{"compare", &luna_wrapper_osg_Fog::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_Fog::_bind_getModeUsage},
	{"setMode", &luna_wrapper_osg_Fog::_bind_setMode},
	{"getMode", &luna_wrapper_osg_Fog::_bind_getMode},
	{"setDensity", &luna_wrapper_osg_Fog::_bind_setDensity},
	{"getDensity", &luna_wrapper_osg_Fog::_bind_getDensity},
	{"setStart", &luna_wrapper_osg_Fog::_bind_setStart},
	{"getStart", &luna_wrapper_osg_Fog::_bind_getStart},
	{"setEnd", &luna_wrapper_osg_Fog::_bind_setEnd},
	{"getEnd", &luna_wrapper_osg_Fog::_bind_getEnd},
	{"setColor", &luna_wrapper_osg_Fog::_bind_setColor},
	{"getColor", &luna_wrapper_osg_Fog::_bind_getColor},
	{"setUseRadialFog", &luna_wrapper_osg_Fog::_bind_setUseRadialFog},
	{"getUseRadialFog", &luna_wrapper_osg_Fog::_bind_getUseRadialFog},
	{"setFogCoordinateSource", &luna_wrapper_osg_Fog::_bind_setFogCoordinateSource},
	{"getFogCoordinateSource", &luna_wrapper_osg_Fog::_bind_getFogCoordinateSource},
	{"apply", &luna_wrapper_osg_Fog::_bind_apply},
	{"base_setName", &luna_wrapper_osg_Fog::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Fog::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Fog::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Fog::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_Fog::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_Fog::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_Fog::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Fog::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_Fog::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Fog::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Fog::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Fog::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Fog::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Fog::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Fog::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Fog::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Fog::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_Fog::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_Fog::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_Fog::_bind___eq},
	{"getTable", &luna_wrapper_osg_Fog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Fog >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Fog::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Fog >::enumValues[] = {
	{"LINEAR", osg::Fog::LINEAR},
	{"EXP", osg::Fog::EXP},
	{"EXP2", osg::Fog::EXP2},
	{"FOG_COORDINATE", osg::Fog::FOG_COORDINATE},
	{"FRAGMENT_DEPTH", osg::Fog::FRAGMENT_DEPTH},
	{0,0}
};


