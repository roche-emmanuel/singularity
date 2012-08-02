#include <plug_common.h>

class luna_wrapper_osg_LogicOp {
public:
	typedef Luna< osg::LogicOp > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::LogicOp* ptr= dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LogicOp >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOpcode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOpcode(lua_State *L) {
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
	// osg::LogicOp::LogicOp()
	static osg::LogicOp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LogicOp::LogicOp() function, expected prototype:\nosg::LogicOp::LogicOp()\nClass arguments details:\n");
		}


		return new osg::LogicOp();
	}

	// osg::LogicOp::LogicOp(osg::LogicOp::Opcode opcode)
	static osg::LogicOp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LogicOp::LogicOp(osg::LogicOp::Opcode opcode) function, expected prototype:\nosg::LogicOp::LogicOp(osg::LogicOp::Opcode opcode)\nClass arguments details:\n");
		}

		osg::LogicOp::Opcode opcode=(osg::LogicOp::Opcode)lua_tointeger(L,1);

		return new osg::LogicOp(opcode);
	}

	// osg::LogicOp::LogicOp(const osg::LogicOp & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LogicOp* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LogicOp::LogicOp(const osg::LogicOp & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LogicOp::LogicOp(const osg::LogicOp & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::LogicOp* trans_ptr=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::LogicOp::LogicOp function");
		}
		const osg::LogicOp & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LogicOp::LogicOp function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::LogicOp(trans, copyop);
	}

	// Overload binder for osg::LogicOp::LogicOp
	static osg::LogicOp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function LogicOp, cannot match any of the overloads for function LogicOp:\n  LogicOp()\n  LogicOp(osg::LogicOp::Opcode)\n  LogicOp(const osg::LogicOp &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LogicOp::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LogicOp::cloneType() const function, expected prototype:\nosg::Object * osg::LogicOp::cloneType() const\nClass arguments details:\n");
		}


		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LogicOp::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LogicOp::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LogicOp::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::LogicOp::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LogicOp::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LogicOp::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LogicOp::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LogicOp::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LogicOp::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LogicOp::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LogicOp::libraryName() const function, expected prototype:\nconst char * osg::LogicOp::libraryName() const\nClass arguments details:\n");
		}


		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LogicOp::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LogicOp::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LogicOp::className() const function, expected prototype:\nconst char * osg::LogicOp::className() const\nClass arguments details:\n");
		}


		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LogicOp::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::LogicOp::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::LogicOp::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::LogicOp::getType() const\nClass arguments details:\n");
		}


		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::LogicOp::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::LogicOp::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::LogicOp::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::LogicOp::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::LogicOp::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::LogicOp::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::LogicOp::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LogicOp::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::LogicOp::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LogicOp::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LogicOp::setOpcode(osg::LogicOp::Opcode opcode)
	static int _bind_setOpcode(lua_State *L) {
		if (!_lg_typecheck_setOpcode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::setOpcode(osg::LogicOp::Opcode opcode) function, expected prototype:\nvoid osg::LogicOp::setOpcode(osg::LogicOp::Opcode opcode)\nClass arguments details:\n");
		}

		osg::LogicOp::Opcode opcode=(osg::LogicOp::Opcode)lua_tointeger(L,2);

		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LogicOp::setOpcode(osg::LogicOp::Opcode)");
		}
		self->setOpcode(opcode);

		return 0;
	}

	// osg::LogicOp::Opcode osg::LogicOp::getOpcode() const
	static int _bind_getOpcode(lua_State *L) {
		if (!_lg_typecheck_getOpcode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LogicOp::Opcode osg::LogicOp::getOpcode() const function, expected prototype:\nosg::LogicOp::Opcode osg::LogicOp::getOpcode() const\nClass arguments details:\n");
		}


		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::LogicOp::Opcode osg::LogicOp::getOpcode() const");
		}
		osg::LogicOp::Opcode lret = self->getOpcode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LogicOp::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LogicOp::apply(osg::State & ) const function, expected prototype:\nvoid osg::LogicOp::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LogicOp::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LogicOp* self=dynamic_cast< osg::LogicOp* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LogicOp::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::LogicOp* LunaTraits< osg::LogicOp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LogicOp::_bind_ctor(L);
}

void LunaTraits< osg::LogicOp >::_bind_dtor(osg::LogicOp* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LogicOp >::className[] = "LogicOp";
const char LunaTraits< osg::LogicOp >::fullName[] = "osg::LogicOp";
const char LunaTraits< osg::LogicOp >::moduleName[] = "osg";
const char* LunaTraits< osg::LogicOp >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::LogicOp >::hash = 19927383;
const int LunaTraits< osg::LogicOp >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LogicOp >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LogicOp::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LogicOp::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LogicOp::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_LogicOp::_bind_libraryName},
	{"className", &luna_wrapper_osg_LogicOp::_bind_className},
	{"getType", &luna_wrapper_osg_LogicOp::_bind_getType},
	{"compare", &luna_wrapper_osg_LogicOp::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_LogicOp::_bind_getModeUsage},
	{"setOpcode", &luna_wrapper_osg_LogicOp::_bind_setOpcode},
	{"getOpcode", &luna_wrapper_osg_LogicOp::_bind_getOpcode},
	{"apply", &luna_wrapper_osg_LogicOp::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LogicOp >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LogicOp::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LogicOp >::enumValues[] = {
	{"CLEAR", osg::LogicOp::CLEAR},
	{"SET", osg::LogicOp::SET},
	{"COPY", osg::LogicOp::COPY},
	{"COPY_INVERTED", osg::LogicOp::COPY_INVERTED},
	{"NOOP", osg::LogicOp::NOOP},
	{"INVERT", osg::LogicOp::INVERT},
	{"AND", osg::LogicOp::AND},
	{"NAND", osg::LogicOp::NAND},
	{"OR", osg::LogicOp::OR},
	{"NOR", osg::LogicOp::NOR},
	{"XOR", osg::LogicOp::XOR},
	{"EQUIV", osg::LogicOp::EQUIV},
	{"AND_REVERSE", osg::LogicOp::AND_REVERSE},
	{"AND_INVERTED", osg::LogicOp::AND_INVERTED},
	{"OR_REVERSE", osg::LogicOp::OR_REVERSE},
	{"OR_INVERTED", osg::LogicOp::OR_INVERTED},
	{0,0}
};


