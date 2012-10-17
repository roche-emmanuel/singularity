#include <plug_common.h>

class luna_wrapper_osg_Hint {
public:
	typedef Luna< osg::Hint > luna_t;

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
		osg::Hint* ptr= dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Hint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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

	inline static bool _lg_typecheck_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osg::Hint::Hint()
	static osg::Hint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Hint::Hint() function, expected prototype:\nosg::Hint::Hint()\nClass arguments details:\n");
		}


		return new osg::Hint();
	}

	// osg::Hint::Hint(unsigned int target, unsigned int mode)
	static osg::Hint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Hint::Hint(unsigned int target, unsigned int mode) function, expected prototype:\nosg::Hint::Hint(unsigned int target, unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,1);
		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		return new osg::Hint(target, mode);
	}

	// osg::Hint::Hint(const osg::Hint & hint, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Hint* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Hint::Hint(const osg::Hint & hint, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Hint::Hint(const osg::Hint & hint, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Hint* hint_ptr=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if( !hint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hint in osg::Hint::Hint function");
		}
		const osg::Hint & hint=*hint_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Hint::Hint function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Hint(hint, copyop);
	}

	// Overload binder for osg::Hint::Hint
	static osg::Hint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Hint, cannot match any of the overloads for function Hint:\n  Hint()\n  Hint(unsigned int, unsigned int)\n  Hint(const osg::Hint &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Hint::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Hint::cloneType() const function, expected prototype:\nosg::Object * osg::Hint::cloneType() const\nClass arguments details:\n");
		}


		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Hint::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Hint::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Hint::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Hint::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Hint::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Hint::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Hint::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Hint::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Hint::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Hint::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Hint::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Hint::libraryName() const function, expected prototype:\nconst char * osg::Hint::libraryName() const\nClass arguments details:\n");
		}


		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Hint::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Hint::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Hint::className() const function, expected prototype:\nconst char * osg::Hint::className() const\nClass arguments details:\n");
		}


		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Hint::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Hint::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Hint::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Hint::getType() const\nClass arguments details:\n");
		}


		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Hint::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Hint::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Hint::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Hint::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Hint::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Hint::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Hint::getMember() const
	static int _bind_getMember(lua_State *L) {
		if (!_lg_typecheck_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Hint::getMember() const function, expected prototype:\nunsigned int osg::Hint::getMember() const\nClass arguments details:\n");
		}


		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Hint::getMember() const");
		}
		unsigned int lret = self->getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Hint::setTarget(unsigned int target)
	static int _bind_setTarget(lua_State *L) {
		if (!_lg_typecheck_setTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Hint::setTarget(unsigned int target) function, expected prototype:\nvoid osg::Hint::setTarget(unsigned int target)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);

		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Hint::setTarget(unsigned int)");
		}
		self->setTarget(target);

		return 0;
	}

	// unsigned int osg::Hint::getTarget() const
	static int _bind_getTarget(lua_State *L) {
		if (!_lg_typecheck_getTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Hint::getTarget() const function, expected prototype:\nunsigned int osg::Hint::getTarget() const\nClass arguments details:\n");
		}


		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Hint::getTarget() const");
		}
		unsigned int lret = self->getTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Hint::setMode(unsigned int mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Hint::setMode(unsigned int mode) function, expected prototype:\nvoid osg::Hint::setMode(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Hint::setMode(unsigned int)");
		}
		self->setMode(mode);

		return 0;
	}

	// unsigned int osg::Hint::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Hint::getMode() const function, expected prototype:\nunsigned int osg::Hint::getMode() const\nClass arguments details:\n");
		}


		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Hint::getMode() const");
		}
		unsigned int lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Hint::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Hint::apply(osg::State & ) const function, expected prototype:\nvoid osg::Hint::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Hint::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Hint* self=dynamic_cast< osg::Hint* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Hint::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Hint* LunaTraits< osg::Hint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Hint::_bind_ctor(L);
}

void LunaTraits< osg::Hint >::_bind_dtor(osg::Hint* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Hint >::className[] = "Hint";
const char LunaTraits< osg::Hint >::fullName[] = "osg::Hint";
const char LunaTraits< osg::Hint >::moduleName[] = "osg";
const char* LunaTraits< osg::Hint >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Hint >::hash = 79984058;
const int LunaTraits< osg::Hint >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Hint >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Hint::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Hint::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Hint::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Hint::_bind_libraryName},
	{"className", &luna_wrapper_osg_Hint::_bind_className},
	{"getType", &luna_wrapper_osg_Hint::_bind_getType},
	{"compare", &luna_wrapper_osg_Hint::_bind_compare},
	{"getMember", &luna_wrapper_osg_Hint::_bind_getMember},
	{"setTarget", &luna_wrapper_osg_Hint::_bind_setTarget},
	{"getTarget", &luna_wrapper_osg_Hint::_bind_getTarget},
	{"setMode", &luna_wrapper_osg_Hint::_bind_setMode},
	{"getMode", &luna_wrapper_osg_Hint::_bind_getMode},
	{"apply", &luna_wrapper_osg_Hint::_bind_apply},
	{"__eq", &luna_wrapper_osg_Hint::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Hint >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Hint::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Hint >::enumValues[] = {
	{0,0}
};


