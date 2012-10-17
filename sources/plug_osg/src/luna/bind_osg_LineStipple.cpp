#include <plug_common.h>

class luna_wrapper_osg_LineStipple {
public:
	typedef Luna< osg::LineStipple > luna_t;

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
		osg::LineStipple* ptr= dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LineStipple >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPattern(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPattern(lua_State *L) {
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
	// osg::LineStipple::LineStipple()
	static osg::LineStipple* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineStipple::LineStipple() function, expected prototype:\nosg::LineStipple::LineStipple()\nClass arguments details:\n");
		}


		return new osg::LineStipple();
	}

	// osg::LineStipple::LineStipple(int factor, unsigned short pattern)
	static osg::LineStipple* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineStipple::LineStipple(int factor, unsigned short pattern) function, expected prototype:\nosg::LineStipple::LineStipple(int factor, unsigned short pattern)\nClass arguments details:\n");
		}

		int factor=(int)lua_tointeger(L,1);
		unsigned short pattern=(unsigned short)lua_tointeger(L,2);

		return new osg::LineStipple(factor, pattern);
	}

	// osg::LineStipple::LineStipple(const osg::LineStipple & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LineStipple* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineStipple::LineStipple(const osg::LineStipple & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LineStipple::LineStipple(const osg::LineStipple & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::LineStipple* lw_ptr=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if( !lw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lw in osg::LineStipple::LineStipple function");
		}
		const osg::LineStipple & lw=*lw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LineStipple::LineStipple function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::LineStipple(lw, copyop);
	}

	// Overload binder for osg::LineStipple::LineStipple
	static osg::LineStipple* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function LineStipple, cannot match any of the overloads for function LineStipple:\n  LineStipple()\n  LineStipple(int, unsigned short)\n  LineStipple(const osg::LineStipple &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LineStipple::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LineStipple::cloneType() const function, expected prototype:\nosg::Object * osg::LineStipple::cloneType() const\nClass arguments details:\n");
		}


		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LineStipple::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LineStipple::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LineStipple::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::LineStipple::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LineStipple::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LineStipple::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LineStipple::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineStipple::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LineStipple::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineStipple::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LineStipple::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LineStipple::libraryName() const function, expected prototype:\nconst char * osg::LineStipple::libraryName() const\nClass arguments details:\n");
		}


		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LineStipple::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LineStipple::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LineStipple::className() const function, expected prototype:\nconst char * osg::LineStipple::className() const\nClass arguments details:\n");
		}


		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LineStipple::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::LineStipple::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::LineStipple::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::LineStipple::getType() const\nClass arguments details:\n");
		}


		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::LineStipple::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::LineStipple::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::LineStipple::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::LineStipple::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::LineStipple::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::LineStipple::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::LineStipple::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineStipple::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::LineStipple::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LineStipple::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineStipple::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LineStipple::setFactor(int factor)
	static int _bind_setFactor(lua_State *L) {
		if (!_lg_typecheck_setFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LineStipple::setFactor(int factor) function, expected prototype:\nvoid osg::LineStipple::setFactor(int factor)\nClass arguments details:\n");
		}

		int factor=(int)lua_tointeger(L,2);

		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LineStipple::setFactor(int)");
		}
		self->setFactor(factor);

		return 0;
	}

	// int osg::LineStipple::getFactor() const
	static int _bind_getFactor(lua_State *L) {
		if (!_lg_typecheck_getFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::LineStipple::getFactor() const function, expected prototype:\nint osg::LineStipple::getFactor() const\nClass arguments details:\n");
		}


		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::LineStipple::getFactor() const");
		}
		int lret = self->getFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LineStipple::setPattern(unsigned short pattern)
	static int _bind_setPattern(lua_State *L) {
		if (!_lg_typecheck_setPattern(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LineStipple::setPattern(unsigned short pattern) function, expected prototype:\nvoid osg::LineStipple::setPattern(unsigned short pattern)\nClass arguments details:\n");
		}

		unsigned short pattern=(unsigned short)lua_tointeger(L,2);

		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LineStipple::setPattern(unsigned short)");
		}
		self->setPattern(pattern);

		return 0;
	}

	// unsigned short osg::LineStipple::getPattern() const
	static int _bind_getPattern(lua_State *L) {
		if (!_lg_typecheck_getPattern(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned short osg::LineStipple::getPattern() const function, expected prototype:\nunsigned short osg::LineStipple::getPattern() const\nClass arguments details:\n");
		}


		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned short osg::LineStipple::getPattern() const");
		}
		unsigned short lret = self->getPattern();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LineStipple::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LineStipple::apply(osg::State & ) const function, expected prototype:\nvoid osg::LineStipple::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LineStipple::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LineStipple* self=dynamic_cast< osg::LineStipple* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LineStipple::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::LineStipple* LunaTraits< osg::LineStipple >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LineStipple::_bind_ctor(L);
}

void LunaTraits< osg::LineStipple >::_bind_dtor(osg::LineStipple* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LineStipple >::className[] = "LineStipple";
const char LunaTraits< osg::LineStipple >::fullName[] = "osg::LineStipple";
const char LunaTraits< osg::LineStipple >::moduleName[] = "osg";
const char* LunaTraits< osg::LineStipple >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::LineStipple >::hash = 82316113;
const int LunaTraits< osg::LineStipple >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LineStipple >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LineStipple::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LineStipple::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LineStipple::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_LineStipple::_bind_libraryName},
	{"className", &luna_wrapper_osg_LineStipple::_bind_className},
	{"getType", &luna_wrapper_osg_LineStipple::_bind_getType},
	{"compare", &luna_wrapper_osg_LineStipple::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_LineStipple::_bind_getModeUsage},
	{"setFactor", &luna_wrapper_osg_LineStipple::_bind_setFactor},
	{"getFactor", &luna_wrapper_osg_LineStipple::_bind_getFactor},
	{"setPattern", &luna_wrapper_osg_LineStipple::_bind_setPattern},
	{"getPattern", &luna_wrapper_osg_LineStipple::_bind_getPattern},
	{"apply", &luna_wrapper_osg_LineStipple::_bind_apply},
	{"__eq", &luna_wrapper_osg_LineStipple::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LineStipple >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LineStipple::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LineStipple >::enumValues[] = {
	{0,0}
};


