#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_FrontFace.h>

class luna_wrapper_osg_FrontFace {
public:
	typedef Luna< osg::FrontFace > luna_t;

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
		osg::FrontFace* ptr= dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FrontFace >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( (!dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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
	// osg::FrontFace::FrontFace(osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE)
	static osg::FrontFace* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrontFace::FrontFace(osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE) function, expected prototype:\nosg::FrontFace::FrontFace(osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::FrontFace::Mode face=luatop>0 ? (osg::FrontFace::Mode)lua_tointeger(L,1) : osg::FrontFace::COUNTER_CLOCKWISE;

		return new osg::FrontFace(face);
	}

	// osg::FrontFace::FrontFace(const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FrontFace* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrontFace::FrontFace(const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FrontFace::FrontFace(const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::FrontFace* ff_ptr=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if( !ff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ff in osg::FrontFace::FrontFace function");
		}
		const osg::FrontFace & ff=*ff_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FrontFace::FrontFace function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::FrontFace(ff, copyop);
	}

	// osg::FrontFace::FrontFace(lua_Table * data, osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE)
	static osg::FrontFace* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrontFace::FrontFace(lua_Table * data, osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE) function, expected prototype:\nosg::FrontFace::FrontFace(lua_Table * data, osg::FrontFace::Mode face = osg::FrontFace::COUNTER_CLOCKWISE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::FrontFace::Mode face=luatop>1 ? (osg::FrontFace::Mode)lua_tointeger(L,2) : osg::FrontFace::COUNTER_CLOCKWISE;

		return new wrapper_osg_FrontFace(L,NULL, face);
	}

	// osg::FrontFace::FrontFace(lua_Table * data, const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FrontFace* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrontFace::FrontFace(lua_Table * data, const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FrontFace::FrontFace(lua_Table * data, const osg::FrontFace & ff, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::FrontFace* ff_ptr=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,2));
		if( !ff_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ff in osg::FrontFace::FrontFace function");
		}
		const osg::FrontFace & ff=*ff_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FrontFace::FrontFace function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_FrontFace(L,NULL, ff, copyop);
	}

	// Overload binder for osg::FrontFace::FrontFace
	static osg::FrontFace* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FrontFace, cannot match any of the overloads for function FrontFace:\n  FrontFace(osg::FrontFace::Mode)\n  FrontFace(const osg::FrontFace &, const osg::CopyOp &)\n  FrontFace(lua_Table *, osg::FrontFace::Mode)\n  FrontFace(lua_Table *, const osg::FrontFace &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::FrontFace::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrontFace::cloneType() const function, expected prototype:\nosg::Object * osg::FrontFace::cloneType() const\nClass arguments details:\n");
		}


		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrontFace::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::FrontFace::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FrontFace::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::FrontFace::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrontFace::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::FrontFace::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::FrontFace::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FrontFace::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::FrontFace::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FrontFace::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::FrontFace::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::FrontFace::libraryName() const function, expected prototype:\nconst char * osg::FrontFace::libraryName() const\nClass arguments details:\n");
		}


		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::FrontFace::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::FrontFace::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::FrontFace::className() const function, expected prototype:\nconst char * osg::FrontFace::className() const\nClass arguments details:\n");
		}


		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::FrontFace::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::FrontFace::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::FrontFace::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::FrontFace::getType() const\nClass arguments details:\n");
		}


		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::FrontFace::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::FrontFace::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::FrontFace::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::FrontFace::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::FrontFace::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::FrontFace::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrontFace::setMode(osg::FrontFace::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::setMode(osg::FrontFace::Mode mode) function, expected prototype:\nvoid osg::FrontFace::setMode(osg::FrontFace::Mode mode)\nClass arguments details:\n");
		}

		osg::FrontFace::Mode mode=(osg::FrontFace::Mode)lua_tointeger(L,2);

		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrontFace::setMode(osg::FrontFace::Mode)");
		}
		self->setMode(mode);

		return 0;
	}

	// osg::FrontFace::Mode osg::FrontFace::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FrontFace::Mode osg::FrontFace::getMode() const function, expected prototype:\nosg::FrontFace::Mode osg::FrontFace::getMode() const\nClass arguments details:\n");
		}


		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::FrontFace::Mode osg::FrontFace::getMode() const");
		}
		osg::FrontFace::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FrontFace::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrontFace::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::FrontFace::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FrontFace::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FrontFace* self=dynamic_cast< osg::FrontFace* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrontFace::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::FrontFace* LunaTraits< osg::FrontFace >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FrontFace::_bind_ctor(L);
}

void LunaTraits< osg::FrontFace >::_bind_dtor(osg::FrontFace* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FrontFace >::className[] = "FrontFace";
const char LunaTraits< osg::FrontFace >::fullName[] = "osg::FrontFace";
const char LunaTraits< osg::FrontFace >::moduleName[] = "osg";
const char* LunaTraits< osg::FrontFace >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::FrontFace >::hash = 998802;
const int LunaTraits< osg::FrontFace >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FrontFace >::methods[] = {
	{"cloneType", &luna_wrapper_osg_FrontFace::_bind_cloneType},
	{"clone", &luna_wrapper_osg_FrontFace::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_FrontFace::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_FrontFace::_bind_libraryName},
	{"className", &luna_wrapper_osg_FrontFace::_bind_className},
	{"getType", &luna_wrapper_osg_FrontFace::_bind_getType},
	{"compare", &luna_wrapper_osg_FrontFace::_bind_compare},
	{"setMode", &luna_wrapper_osg_FrontFace::_bind_setMode},
	{"getMode", &luna_wrapper_osg_FrontFace::_bind_getMode},
	{"apply", &luna_wrapper_osg_FrontFace::_bind_apply},
	{"__eq", &luna_wrapper_osg_FrontFace::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FrontFace >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FrontFace::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FrontFace >::enumValues[] = {
	{"CLOCKWISE", osg::FrontFace::CLOCKWISE},
	{"COUNTER_CLOCKWISE", osg::FrontFace::COUNTER_CLOCKWISE},
	{0,0}
};


