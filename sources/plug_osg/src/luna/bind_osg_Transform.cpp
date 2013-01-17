#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Transform.h>

class luna_wrapper_osg_Transform {
public:
	typedef Luna< osg::Transform > luna_t;

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
		//osg::Transform* ptr= dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,1));
		osg::Transform* ptr= luna_caster< osg::Referenced, osg::Transform >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Transform >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asMatrixTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asMatrixTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_replaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asMatrixTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asMatrixTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeLocalToWorldMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeWorldToLocalMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Transform::Transform()
	static osg::Transform* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform::Transform() function, expected prototype:\nosg::Transform::Transform()\nClass arguments details:\n");
		}


		return new osg::Transform();
	}

	// osg::Transform::Transform(const osg::Transform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Transform* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform::Transform(const osg::Transform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Transform::Transform(const osg::Transform & arg1, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Transform* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Transform::Transform function");
		}
		const osg::Transform & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Transform::Transform function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Transform(_arg1, copyop);
	}

	// osg::Transform::Transform(lua_Table * data)
	static osg::Transform* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform::Transform(lua_Table * data) function, expected prototype:\nosg::Transform::Transform(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Transform(L,NULL);
	}

	// osg::Transform::Transform(lua_Table * data, const osg::Transform & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Transform* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform::Transform(lua_Table * data, const osg::Transform & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Transform::Transform(lua_Table * data, const osg::Transform & arg2, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Transform* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Transform::Transform function");
		}
		const osg::Transform & _arg2=*_arg2_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Transform::Transform function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Transform(L,NULL, _arg2, copyop);
	}

	// Overload binder for osg::Transform::Transform
	static osg::Transform* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Transform, cannot match any of the overloads for function Transform:\n  Transform()\n  Transform(const osg::Transform &, const osg::CopyOp &)\n  Transform(lua_Table *)\n  Transform(lua_Table *, const osg::Transform &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Transform::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Transform::cloneType() const function, expected prototype:\nosg::Object * osg::Transform::cloneType() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Transform::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Transform::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Transform::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Transform::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Transform::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Transform::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Transform::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Transform::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Transform::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Transform::className() const function, expected prototype:\nconst char * osg::Transform::className() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Transform::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Transform::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Transform::libraryName() const function, expected prototype:\nconst char * osg::Transform::libraryName() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Transform::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Transform::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Transform::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Transform::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::accept(osg::NodeVisitor &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->accept(nv);

		return 0;
	}

	// osg::Transform * osg::Transform::asTransform()
	static int _bind_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Transform::asTransform() function, expected prototype:\nosg::Transform * osg::Transform::asTransform()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Transform::asTransform(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Transform * lret = self->asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Transform::asTransform() const
	static int _bind_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Transform::asTransform() const function, expected prototype:\nconst osg::Transform * osg::Transform::asTransform() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Transform::asTransform() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Transform * lret = self->asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::asTransform
	static int _bind_asTransform(lua_State *L) {
		if (_lg_typecheck_asTransform_overload_1(L)) return _bind_asTransform_overload_1(L);
		if (_lg_typecheck_asTransform_overload_2(L)) return _bind_asTransform_overload_2(L);

		luaL_error(L, "error in function asTransform, cannot match any of the overloads for function asTransform:\n  asTransform()\n  asTransform()\n");
		return 0;
	}

	// osg::MatrixTransform * osg::Transform::asMatrixTransform()
	static int _bind_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asMatrixTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::Transform::asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::Transform::asMatrixTransform()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::Transform::asMatrixTransform(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::MatrixTransform * lret = self->asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::Transform::asMatrixTransform() const
	static int _bind_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asMatrixTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::Transform::asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::Transform::asMatrixTransform() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::Transform::asMatrixTransform() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::MatrixTransform * lret = self->asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::asMatrixTransform
	static int _bind_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_asMatrixTransform_overload_1(L)) return _bind_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_asMatrixTransform_overload_2(L)) return _bind_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function asMatrixTransform, cannot match any of the overloads for function asMatrixTransform:\n  asMatrixTransform()\n  asMatrixTransform()\n");
		return 0;
	}

	// osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform()
	static int _bind_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_asPositionAttitudeTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::PositionAttitudeTransform * lret = self->asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const
	static int _bind_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_asPositionAttitudeTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::Transform::asPositionAttitudeTransform() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::PositionAttitudeTransform * lret = self->asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::asPositionAttitudeTransform
	static int _bind_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_asPositionAttitudeTransform_overload_1(L)) return _bind_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_asPositionAttitudeTransform_overload_2(L)) return _bind_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function asPositionAttitudeTransform, cannot match any of the overloads for function asPositionAttitudeTransform:\n  asPositionAttitudeTransform()\n  asPositionAttitudeTransform()\n");
		return 0;
	}

	// void osg::Transform::setReferenceFrame(osg::Transform::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::setReferenceFrame(osg::Transform::ReferenceFrame rf) function, expected prototype:\nvoid osg::Transform::setReferenceFrame(osg::Transform::ReferenceFrame rf)\nClass arguments details:\n");
		}

		osg::Transform::ReferenceFrame rf=(osg::Transform::ReferenceFrame)lua_tointeger(L,2);

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::setReferenceFrame(osg::Transform::ReferenceFrame). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// osg::Transform::ReferenceFrame osg::Transform::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform::ReferenceFrame osg::Transform::getReferenceFrame() const function, expected prototype:\nosg::Transform::ReferenceFrame osg::Transform::getReferenceFrame() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Transform::ReferenceFrame osg::Transform::getReferenceFrame() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Transform::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Transform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_computeLocalToWorldMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::Transform::computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Transform::computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->computeLocalToWorldMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Transform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_computeWorldToLocalMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::Transform::computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Transform::computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->computeWorldToLocalMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSphered osg::Transform::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Transform::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Transform::computeBound() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Transform::computeBound() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// void osg::Transform::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Transform::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Transform::setName(name);

		return 0;
	}

	// void osg::Transform::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::base_computeDataVariance() function, expected prototype:\nvoid osg::Transform::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Transform::computeDataVariance();

		return 0;
	}

	// void osg::Transform::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Transform::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Transform::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Transform::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Transform::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Transform::base_getUserData()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Transform::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->Transform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Transform::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Transform::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Transform::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Transform::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->Transform::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Switch * osg::Transform::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Switch * osg::Transform::base_asSwitch() function, expected prototype:\nosg::Switch * osg::Transform::base_asSwitch()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Switch * osg::Transform::base_asSwitch(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Switch * lret = self->Transform::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osg::Transform::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Switch * osg::Transform::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osg::Transform::base_asSwitch() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Switch * osg::Transform::base_asSwitch() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Switch * lret = self->Transform::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osg::Transform::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Transform::base_asGeode() function, expected prototype:\nosg::Geode * osg::Transform::base_asGeode()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Transform::base_asGeode(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Geode * lret = self->Transform::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Transform::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Transform::base_asGeode() const function, expected prototype:\nconst osg::Geode * osg::Transform::base_asGeode() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Transform::base_asGeode() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Geode * lret = self->Transform::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osg::Transform::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Transform::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Transform::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::base_ascend(osg::NodeVisitor &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Transform::ascend(nv);

		return 0;
	}

	// osg::Group * osg::Transform::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Transform::base_asGroup() function, expected prototype:\nosg::Group * osg::Transform::base_asGroup()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Group * osg::Transform::base_asGroup(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Group * lret = self->Transform::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Transform::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Transform::base_asGroup() const function, expected prototype:\nconst osg::Group * osg::Transform::base_asGroup() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Transform::base_asGroup() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Group * lret = self->Transform::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// void osg::Transform::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osg::Transform::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Transform::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::base_traverse(osg::NodeVisitor &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Transform::traverse(_arg1);

		return 0;
	}

	// bool osg::Transform::base_addChild(osg::Node * child)
	static int _bind_base_addChild(lua_State *L) {
		if (!_lg_typecheck_base_addChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::base_addChild(osg::Node * child) function, expected prototype:\nbool osg::Transform::base_addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::base_addChild(osg::Node *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Transform::addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Transform::base_insertChild(unsigned int index, osg::Node * child)
	static int _bind_base_insertChild(lua_State *L) {
		if (!_lg_typecheck_base_insertChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::base_insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Transform::base_insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::base_insertChild(unsigned int, osg::Node *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Transform::insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Transform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_base_removeChildren(lua_State *L) {
		if (!_lg_typecheck_base_removeChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Transform::base_removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::base_removeChildren(unsigned int, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Transform::removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Transform::base_replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_base_replaceChild(lua_State *L) {
		if (!_lg_typecheck_base_replaceChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::base_replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::Transform::base_replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* origChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::Node* newChild=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::base_replaceChild(osg::Node *, osg::Node *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Transform::replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Transform::base_setChild(unsigned int i, osg::Node * node)
	static int _bind_base_setChild(lua_State *L) {
		if (!_lg_typecheck_base_setChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::base_setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::Transform::base_setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,3));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::base_setChild(unsigned int, osg::Node *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Transform::setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Transform::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::Transform::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Transform::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::Transform::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Transform::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Transform::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Transform::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Transform::base_cloneType() const function, expected prototype:\nosg::Object * osg::Transform::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Transform::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Transform::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Transform::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Transform::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Transform::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Transform::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Transform::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Transform::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Transform::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Transform::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Transform::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Transform::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Transform::base_className() const function, expected prototype:\nconst char * osg::Transform::base_className() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Transform::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Transform::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Transform::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Transform::base_libraryName() const function, expected prototype:\nconst char * osg::Transform::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Transform::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Transform::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Transform::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Transform::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Transform::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Transform::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Transform::base_accept(osg::NodeVisitor &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Transform::accept(nv);

		return 0;
	}

	// osg::Transform * osg::Transform::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform * osg::Transform::base_asTransform() function, expected prototype:\nosg::Transform * osg::Transform::base_asTransform()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Transform * osg::Transform::base_asTransform(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Transform * lret = self->Transform::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osg::Transform::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Transform * osg::Transform::base_asTransform() const function, expected prototype:\nconst osg::Transform * osg::Transform::base_asTransform() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Transform * osg::Transform::base_asTransform() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Transform * lret = self->Transform::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::MatrixTransform * osg::Transform::base_asMatrixTransform()
	static int _bind_base_asMatrixTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * osg::Transform::base_asMatrixTransform() function, expected prototype:\nosg::MatrixTransform * osg::Transform::base_asMatrixTransform()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * osg::Transform::base_asMatrixTransform(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::MatrixTransform * lret = self->Transform::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::MatrixTransform * osg::Transform::base_asMatrixTransform() const
	static int _bind_base_asMatrixTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asMatrixTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::MatrixTransform * osg::Transform::base_asMatrixTransform() const function, expected prototype:\nconst osg::MatrixTransform * osg::Transform::base_asMatrixTransform() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::MatrixTransform * osg::Transform::base_asMatrixTransform() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::MatrixTransform * lret = self->Transform::asMatrixTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::base_asMatrixTransform
	static int _bind_base_asMatrixTransform(lua_State *L) {
		if (_lg_typecheck_base_asMatrixTransform_overload_1(L)) return _bind_base_asMatrixTransform_overload_1(L);
		if (_lg_typecheck_base_asMatrixTransform_overload_2(L)) return _bind_base_asMatrixTransform_overload_2(L);

		luaL_error(L, "error in function base_asMatrixTransform, cannot match any of the overloads for function base_asMatrixTransform:\n  base_asMatrixTransform()\n  base_asMatrixTransform()\n");
		return 0;
	}

	// osg::PositionAttitudeTransform * osg::Transform::base_asPositionAttitudeTransform()
	static int _bind_base_asPositionAttitudeTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PositionAttitudeTransform * osg::Transform::base_asPositionAttitudeTransform() function, expected prototype:\nosg::PositionAttitudeTransform * osg::Transform::base_asPositionAttitudeTransform()\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PositionAttitudeTransform * osg::Transform::base_asPositionAttitudeTransform(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::PositionAttitudeTransform * lret = self->Transform::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// const osg::PositionAttitudeTransform * osg::Transform::base_asPositionAttitudeTransform() const
	static int _bind_base_asPositionAttitudeTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::PositionAttitudeTransform * osg::Transform::base_asPositionAttitudeTransform() const function, expected prototype:\nconst osg::PositionAttitudeTransform * osg::Transform::base_asPositionAttitudeTransform() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::PositionAttitudeTransform * osg::Transform::base_asPositionAttitudeTransform() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::PositionAttitudeTransform * lret = self->Transform::asPositionAttitudeTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PositionAttitudeTransform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Transform::base_asPositionAttitudeTransform
	static int _bind_base_asPositionAttitudeTransform(lua_State *L) {
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_1(L)) return _bind_base_asPositionAttitudeTransform_overload_1(L);
		if (_lg_typecheck_base_asPositionAttitudeTransform_overload_2(L)) return _bind_base_asPositionAttitudeTransform_overload_2(L);

		luaL_error(L, "error in function base_asPositionAttitudeTransform, cannot match any of the overloads for function base_asPositionAttitudeTransform:\n  base_asPositionAttitudeTransform()\n  base_asPositionAttitudeTransform()\n");
		return 0;
	}

	// bool osg::Transform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_base_computeLocalToWorldMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeLocalToWorldMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::Transform::base_computeLocalToWorldMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Transform::base_computeLocalToWorldMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::base_computeLocalToWorldMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Transform::computeLocalToWorldMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Transform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const
	static int _bind_base_computeWorldToLocalMatrix(lua_State *L) {
		if (!_lg_typecheck_base_computeWorldToLocalMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Transform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const function, expected prototype:\nbool osg::Transform::base_computeWorldToLocalMatrix(osg::Matrixd & matrix, osg::NodeVisitor * arg2) const\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::Transform::base_computeWorldToLocalMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;
		osg::NodeVisitor* _arg2=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Transform::base_computeWorldToLocalMatrix(osg::Matrixd &, osg::NodeVisitor *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Transform::computeWorldToLocalMatrix(matrix, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::BoundingSphered osg::Transform::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::Transform::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osg::Transform::base_computeBound() const\nClass arguments details:\n");
		}


		osg::Transform* self=Luna< osg::Referenced >::checkSubType< osg::Transform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::Transform::base_computeBound() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::BoundingSphered stack_lret = self->Transform::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Transform* LunaTraits< osg::Transform >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Transform::_bind_ctor(L);
}

void LunaTraits< osg::Transform >::_bind_dtor(osg::Transform* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Transform >::className[] = "Transform";
const char LunaTraits< osg::Transform >::fullName[] = "osg::Transform";
const char LunaTraits< osg::Transform >::moduleName[] = "osg";
const char* LunaTraits< osg::Transform >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::Transform >::hash = 49203817;
const int LunaTraits< osg::Transform >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Transform >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Transform::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Transform::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Transform::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Transform::_bind_className},
	{"libraryName", &luna_wrapper_osg_Transform::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Transform::_bind_accept},
	{"asTransform", &luna_wrapper_osg_Transform::_bind_asTransform},
	{"asMatrixTransform", &luna_wrapper_osg_Transform::_bind_asMatrixTransform},
	{"asPositionAttitudeTransform", &luna_wrapper_osg_Transform::_bind_asPositionAttitudeTransform},
	{"setReferenceFrame", &luna_wrapper_osg_Transform::_bind_setReferenceFrame},
	{"getReferenceFrame", &luna_wrapper_osg_Transform::_bind_getReferenceFrame},
	{"computeLocalToWorldMatrix", &luna_wrapper_osg_Transform::_bind_computeLocalToWorldMatrix},
	{"computeWorldToLocalMatrix", &luna_wrapper_osg_Transform::_bind_computeWorldToLocalMatrix},
	{"computeBound", &luna_wrapper_osg_Transform::_bind_computeBound},
	{"base_setName", &luna_wrapper_osg_Transform::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Transform::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Transform::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Transform::_bind_base_getUserData},
	{"base_asSwitch", &luna_wrapper_osg_Transform::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osg_Transform::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osg_Transform::_bind_base_ascend},
	{"base_asGroup", &luna_wrapper_osg_Transform::_bind_base_asGroup},
	{"base_traverse", &luna_wrapper_osg_Transform::_bind_base_traverse},
	{"base_addChild", &luna_wrapper_osg_Transform::_bind_base_addChild},
	{"base_insertChild", &luna_wrapper_osg_Transform::_bind_base_insertChild},
	{"base_removeChildren", &luna_wrapper_osg_Transform::_bind_base_removeChildren},
	{"base_replaceChild", &luna_wrapper_osg_Transform::_bind_base_replaceChild},
	{"base_setChild", &luna_wrapper_osg_Transform::_bind_base_setChild},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_Transform::_bind_base_setThreadSafeRefUnref},
	{"base_releaseGLObjects", &luna_wrapper_osg_Transform::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Transform::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Transform::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Transform::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osg_Transform::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osg_Transform::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osg_Transform::_bind_base_accept},
	{"base_asTransform", &luna_wrapper_osg_Transform::_bind_base_asTransform},
	{"base_asMatrixTransform", &luna_wrapper_osg_Transform::_bind_base_asMatrixTransform},
	{"base_asPositionAttitudeTransform", &luna_wrapper_osg_Transform::_bind_base_asPositionAttitudeTransform},
	{"base_computeLocalToWorldMatrix", &luna_wrapper_osg_Transform::_bind_base_computeLocalToWorldMatrix},
	{"base_computeWorldToLocalMatrix", &luna_wrapper_osg_Transform::_bind_base_computeWorldToLocalMatrix},
	{"base_computeBound", &luna_wrapper_osg_Transform::_bind_base_computeBound},
	{"__eq", &luna_wrapper_osg_Transform::_bind___eq},
	{"getTable", &luna_wrapper_osg_Transform::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Transform >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Transform::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Transform >::enumValues[] = {
	{"RELATIVE_RF", osg::Transform::RELATIVE_RF},
	{"ABSOLUTE_RF", osg::Transform::ABSOLUTE_RF},
	{"ABSOLUTE_RF_INHERIT_VIEWPOINT", osg::Transform::ABSOLUTE_RF_INHERIT_VIEWPOINT},
	{0,0}
};


