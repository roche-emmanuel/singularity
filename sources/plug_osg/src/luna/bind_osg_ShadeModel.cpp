#include <plug_common.h>

class luna_wrapper_osg_ShadeModel {
public:
	typedef Luna< osg::ShadeModel > luna_t;

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
		osg::ShadeModel* ptr= dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
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
		if( (!dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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

		const osg::ShadeModel* sm_ptr=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
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

	// Overload binder for osg::ShadeModel::ShadeModel
	static osg::ShadeModel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ShadeModel, cannot match any of the overloads for function ShadeModel:\n  ShadeModel(osg::ShadeModel::Mode)\n  ShadeModel(const osg::ShadeModel &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShadeModel::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShadeModel::cloneType() const function, expected prototype:\nosg::Object * osg::ShadeModel::cloneType() const\nClass arguments details:\n");
		}


		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShadeModel::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShadeModel::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShadeModel::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ShadeModel::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShadeModel::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShadeModel::clone(const osg::CopyOp &) const");
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

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShadeModel::isSameKindAs(const osg::Object *) const");
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


		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShadeModel::libraryName() const");
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


		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShadeModel::className() const");
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


		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ShadeModel::getType() const");
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

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShadeModel::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ShadeModel::compare(const osg::StateAttribute &) const");
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

		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::setMode(osg::ShadeModel::Mode)");
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


		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ShadeModel::Mode osg::ShadeModel::getMode() const");
		}
		osg::ShadeModel::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShadeModel::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShadeModel::apply(osg::State & ) const function, expected prototype:\nvoid osg::ShadeModel::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShadeModel::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShadeModel* self=dynamic_cast< osg::ShadeModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShadeModel::apply(osg::State &) const");
		}
		self->apply(_arg1);

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
	{"__eq", &luna_wrapper_osg_ShadeModel::_bind___eq},
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


