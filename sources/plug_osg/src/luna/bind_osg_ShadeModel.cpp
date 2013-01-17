#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ShadeModel.h>

class luna_wrapper_osg_ShadeModel {
public:
	typedef Luna< osg::ShadeModel > luna_t;

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
		//osg::ShadeModel* ptr= dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		osg::ShadeModel* ptr= luna_caster< osg::Referenced, osg::ShadeModel >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ShadeModel >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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
	// osg::ShadeModel::ShadeModel(osg::ShadeModel::Mode mode = osg::ShadeModel::SMOOTH)
	static osg::ShadeModel* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShadeModel::ShadeModel(osg::ShadeModel::Mode mode = osg::ShadeModel::SMOOTH) function, expected prototype:\nosg::ShadeModel::ShadeModel(osg::ShadeModel::Mode mode = osg::ShadeModel::SMOOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::ShadeModel::Mode mode=luatop>0 ? (osg::ShadeModel::Mode)lua_tointeger(L,1) : osg::ShadeModel::SMOOTH;

		return new osg::ShadeModel(mode);
	}

	// osg::ShadeModel::ShadeModel(const osg::ShadeModel & sm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShadeModel* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShadeModel::ShadeModel(const osg::ShadeModel & sm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShadeModel::ShadeModel(const osg::ShadeModel & sm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ShadeModel* sm_ptr=(Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1));
		if( !sm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sm in osg::ShadeModel::ShadeModel function");
		}
		const osg::ShadeModel & sm=*sm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShadeModel::ShadeModel function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ShadeModel(sm, copyop);
	}

	// osg::ShadeModel::ShadeModel(lua_Table * data, osg::ShadeModel::Mode mode = osg::ShadeModel::SMOOTH)
	static osg::ShadeModel* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShadeModel::ShadeModel(lua_Table * data, osg::ShadeModel::Mode mode = osg::ShadeModel::SMOOTH) function, expected prototype:\nosg::ShadeModel::ShadeModel(lua_Table * data, osg::ShadeModel::Mode mode = osg::ShadeModel::SMOOTH)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::ShadeModel::Mode mode=luatop>1 ? (osg::ShadeModel::Mode)lua_tointeger(L,2) : osg::ShadeModel::SMOOTH;

		return new wrapper_osg_ShadeModel(L,NULL, mode);
	}

	// osg::ShadeModel::ShadeModel(lua_Table * data, const osg::ShadeModel & sm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShadeModel* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShadeModel::ShadeModel(lua_Table * data, const osg::ShadeModel & sm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShadeModel::ShadeModel(lua_Table * data, const osg::ShadeModel & sm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ShadeModel* sm_ptr=(Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,2));
		if( !sm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sm in osg::ShadeModel::ShadeModel function");
		}
		const osg::ShadeModel & sm=*sm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShadeModel::ShadeModel function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ShadeModel(L,NULL, sm, copyop);
	}

	// Overload binder for osg::ShadeModel::ShadeModel
	static osg::ShadeModel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ShadeModel, cannot match any of the overloads for function ShadeModel:\n  ShadeModel(osg::ShadeModel::Mode)\n  ShadeModel(const osg::ShadeModel &, const osg::CopyOp &)\n  ShadeModel(lua_Table *, osg::ShadeModel::Mode)\n  ShadeModel(lua_Table *, const osg::ShadeModel &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShadeModel::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShadeModel::cloneType() const function, expected prototype:\nosg::Object * osg::ShadeModel::cloneType() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShadeModel::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShadeModel::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShadeModel::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ShadeModel::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShadeModel::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShadeModel::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShadeModel::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShadeModel::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShadeModel::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShadeModel::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShadeModel::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShadeModel::libraryName() const function, expected prototype:\nconst char * osg::ShadeModel::libraryName() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShadeModel::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShadeModel::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShadeModel::className() const function, expected prototype:\nconst char * osg::ShadeModel::className() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShadeModel::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ShadeModel::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ShadeModel::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ShadeModel::getType() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ShadeModel::getType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ShadeModel::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ShadeModel::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ShadeModel::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShadeModel::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ShadeModel::compare(const osg::StateAttribute &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShadeModel::setMode(osg::ShadeModel::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::setMode(osg::ShadeModel::Mode mode) function, expected prototype:\nvoid osg::ShadeModel::setMode(osg::ShadeModel::Mode mode)\nClass arguments details:\n");
		}

		osg::ShadeModel::Mode mode=(osg::ShadeModel::Mode)lua_tointeger(L,2);

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::setMode(osg::ShadeModel::Mode). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMode(mode);

		return 0;
	}

	// osg::ShadeModel::Mode osg::ShadeModel::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShadeModel::Mode osg::ShadeModel::getMode() const function, expected prototype:\nosg::ShadeModel::Mode osg::ShadeModel::getMode() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ShadeModel::Mode osg::ShadeModel::getMode() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::ShadeModel::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShadeModel::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::ShadeModel::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShadeModel::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::apply(osg::State &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShadeModel::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::ShadeModel::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ShadeModel::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::ShadeModel::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::base_setName(const std::string & name) function, expected prototype:\nvoid osg::ShadeModel::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ShadeModel::setName(name);

		return 0;
	}

	// void osg::ShadeModel::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::base_computeDataVariance() function, expected prototype:\nvoid osg::ShadeModel::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ShadeModel::computeDataVariance();

		return 0;
	}

	// void osg::ShadeModel::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::ShadeModel::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ShadeModel::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::ShadeModel::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::ShadeModel::base_getUserData() function, expected prototype:\nosg::Referenced * osg::ShadeModel::base_getUserData()\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::ShadeModel::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->ShadeModel::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::ShadeModel::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::ShadeModel::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::ShadeModel::base_getUserData() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::ShadeModel::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->ShadeModel::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShadeModel::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::ShadeModel::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::ShadeModel::base_asTexture() function, expected prototype:\nosg::Texture * osg::ShadeModel::base_asTexture()\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::ShadeModel::base_asTexture(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Texture * lret = self->ShadeModel::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::ShadeModel::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::ShadeModel::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::ShadeModel::base_asTexture() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::ShadeModel::base_asTexture() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Texture * lret = self->ShadeModel::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShadeModel::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::ShadeModel::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShadeModel::base_getMember() const function, expected prototype:\nunsigned int osg::ShadeModel::base_getMember() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ShadeModel::base_getMember() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->ShadeModel::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::ShadeModel::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShadeModel::base_isTextureAttribute() const function, expected prototype:\nbool osg::ShadeModel::base_isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShadeModel::base_isTextureAttribute() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->ShadeModel::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ShadeModel::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShadeModel::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::ShadeModel::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShadeModel::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShadeModel::base_getModeUsage(osg::StateAttribute::ModeUsage &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->ShadeModel::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ShadeModel::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShadeModel::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::ShadeModel::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShadeModel::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShadeModel::base_checkValidityOfAssociatedModes(osg::State &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->ShadeModel::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ShadeModel::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::ShadeModel::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShadeModel::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::base_compileGLObjects(osg::State &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ShadeModel::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::ShadeModel::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ShadeModel::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ShadeModel::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::ShadeModel::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShadeModel::base_cloneType() const function, expected prototype:\nosg::Object * osg::ShadeModel::base_cloneType() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShadeModel::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->ShadeModel::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShadeModel::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShadeModel::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ShadeModel::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShadeModel::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShadeModel::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->ShadeModel::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShadeModel::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShadeModel::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShadeModel::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShadeModel::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->ShadeModel::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShadeModel::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShadeModel::base_libraryName() const function, expected prototype:\nconst char * osg::ShadeModel::base_libraryName() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShadeModel::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->ShadeModel::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShadeModel::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShadeModel::base_className() const function, expected prototype:\nconst char * osg::ShadeModel::base_className() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShadeModel::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->ShadeModel::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ShadeModel::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ShadeModel::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ShadeModel::base_getType() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ShadeModel::base_getType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::StateAttribute::Type lret = self->ShadeModel::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ShadeModel::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ShadeModel::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ShadeModel::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShadeModel::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ShadeModel::base_compare(const osg::StateAttribute &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		int lret = self->ShadeModel::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShadeModel::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::ShadeModel::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShadeModel::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShadeModel* self=Luna< osg::Referenced >::checkSubType< osg::ShadeModel >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::base_apply(osg::State &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ShadeModel::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::ShadeModel* LunaTraits< osg::ShadeModel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShadeModel::_bind_ctor(L);
}

void LunaTraits< osg::ShadeModel >::_bind_dtor(osg::ShadeModel* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ShadeModel >::className[] = "ShadeModel";
const char LunaTraits< osg::ShadeModel >::fullName[] = "osg::ShadeModel";
const char LunaTraits< osg::ShadeModel >::moduleName[] = "osg";
const char* LunaTraits< osg::ShadeModel >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::ShadeModel >::hash = 97102573;
const int LunaTraits< osg::ShadeModel >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ShadeModel >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ShadeModel::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ShadeModel::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ShadeModel::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ShadeModel::_bind_libraryName},
	{"className", &luna_wrapper_osg_ShadeModel::_bind_className},
	{"getType", &luna_wrapper_osg_ShadeModel::_bind_getType},
	{"compare", &luna_wrapper_osg_ShadeModel::_bind_compare},
	{"setMode", &luna_wrapper_osg_ShadeModel::_bind_setMode},
	{"getMode", &luna_wrapper_osg_ShadeModel::_bind_getMode},
	{"apply", &luna_wrapper_osg_ShadeModel::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_ShadeModel::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_ShadeModel::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_ShadeModel::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_ShadeModel::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_ShadeModel::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_ShadeModel::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_ShadeModel::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_ShadeModel::_bind_base_isTextureAttribute},
	{"base_getModeUsage", &luna_wrapper_osg_ShadeModel::_bind_base_getModeUsage},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_ShadeModel::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_ShadeModel::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_ShadeModel::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_ShadeModel::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_ShadeModel::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_ShadeModel::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_ShadeModel::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_ShadeModel::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_ShadeModel::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_ShadeModel::_bind_base_compare},
	{"base_apply", &luna_wrapper_osg_ShadeModel::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_ShadeModel::_bind___eq},
	{"getTable", &luna_wrapper_osg_ShadeModel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShadeModel >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ShadeModel::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShadeModel >::enumValues[] = {
	{"FLAT", osg::ShadeModel::FLAT},
	{"SMOOTH", osg::ShadeModel::SMOOTH},
	{0,0}
};


