#include <plug_common.h>

class luna_wrapper_osg_CullFace {
public:
	typedef Luna< osg::CullFace > luna_t;

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
		osg::CullFace* ptr= dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CullFace >::push(L,ptr,false);
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
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CullFace::CullFace(osg::CullFace::Mode mode = osg::CullFace::BACK)
	static osg::CullFace* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CullFace::CullFace(osg::CullFace::Mode mode = osg::CullFace::BACK) function, expected prototype:\nosg::CullFace::CullFace(osg::CullFace::Mode mode = osg::CullFace::BACK)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::CullFace::Mode mode=luatop>0 ? (osg::CullFace::Mode)lua_tointeger(L,1) : osg::CullFace::BACK;

		return new osg::CullFace(mode);
	}

	// osg::CullFace::CullFace(const osg::CullFace & cf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CullFace* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CullFace::CullFace(const osg::CullFace & cf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CullFace::CullFace(const osg::CullFace & cf, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::CullFace* cf_ptr=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if( !cf_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cf in osg::CullFace::CullFace function");
		}
		const osg::CullFace & cf=*cf_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CullFace::CullFace function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::CullFace(cf, copyop);
	}

	// Overload binder for osg::CullFace::CullFace
	static osg::CullFace* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CullFace, cannot match any of the overloads for function CullFace:\n  CullFace(osg::CullFace::Mode)\n  CullFace(const osg::CullFace &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::CullFace::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CullFace::cloneType() const function, expected prototype:\nosg::Object * osg::CullFace::cloneType() const\nClass arguments details:\n");
		}


		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::CullFace::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CullFace::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CullFace::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::CullFace::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CullFace::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::CullFace::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CullFace::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CullFace::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CullFace::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CullFace::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CullFace::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CullFace::libraryName() const function, expected prototype:\nconst char * osg::CullFace::libraryName() const\nClass arguments details:\n");
		}


		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CullFace::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CullFace::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CullFace::className() const function, expected prototype:\nconst char * osg::CullFace::className() const\nClass arguments details:\n");
		}


		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CullFace::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::CullFace::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::CullFace::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::CullFace::getType() const\nClass arguments details:\n");
		}


		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::CullFace::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::CullFace::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::CullFace::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::CullFace::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::CullFace::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::CullFace::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::CullFace::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CullFace::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::CullFace::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CullFace::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CullFace::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::CullFace::setMode(osg::CullFace::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CullFace::setMode(osg::CullFace::Mode mode) function, expected prototype:\nvoid osg::CullFace::setMode(osg::CullFace::Mode mode)\nClass arguments details:\n");
		}

		osg::CullFace::Mode mode=(osg::CullFace::Mode)lua_tointeger(L,2);

		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CullFace::setMode(osg::CullFace::Mode)");
		}
		self->setMode(mode);

		return 0;
	}

	// osg::CullFace::Mode osg::CullFace::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CullFace::Mode osg::CullFace::getMode() const function, expected prototype:\nosg::CullFace::Mode osg::CullFace::getMode() const\nClass arguments details:\n");
		}


		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CullFace::Mode osg::CullFace::getMode() const");
		}
		osg::CullFace::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::CullFace::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CullFace::apply(osg::State & ) const function, expected prototype:\nvoid osg::CullFace::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CullFace::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::CullFace* self=dynamic_cast< osg::CullFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CullFace::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::CullFace* LunaTraits< osg::CullFace >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CullFace::_bind_ctor(L);
}

void LunaTraits< osg::CullFace >::_bind_dtor(osg::CullFace* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CullFace >::className[] = "CullFace";
const char LunaTraits< osg::CullFace >::fullName[] = "osg::CullFace";
const char LunaTraits< osg::CullFace >::moduleName[] = "osg";
const char* LunaTraits< osg::CullFace >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::CullFace >::hash = 74340403;
const int LunaTraits< osg::CullFace >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CullFace >::methods[] = {
	{"cloneType", &luna_wrapper_osg_CullFace::_bind_cloneType},
	{"clone", &luna_wrapper_osg_CullFace::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_CullFace::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_CullFace::_bind_libraryName},
	{"className", &luna_wrapper_osg_CullFace::_bind_className},
	{"getType", &luna_wrapper_osg_CullFace::_bind_getType},
	{"compare", &luna_wrapper_osg_CullFace::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_CullFace::_bind_getModeUsage},
	{"setMode", &luna_wrapper_osg_CullFace::_bind_setMode},
	{"getMode", &luna_wrapper_osg_CullFace::_bind_getMode},
	{"apply", &luna_wrapper_osg_CullFace::_bind_apply},
	{"__eq", &luna_wrapper_osg_CullFace::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CullFace >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CullFace::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CullFace >::enumValues[] = {
	{"FRONT", osg::CullFace::FRONT},
	{"BACK", osg::CullFace::BACK},
	{"FRONT_AND_BACK", osg::CullFace::FRONT_AND_BACK},
	{0,0}
};


