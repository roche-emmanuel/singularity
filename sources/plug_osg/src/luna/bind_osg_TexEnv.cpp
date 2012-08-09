#include <plug_common.h>

class luna_wrapper_osg_TexEnv {
public:
	typedef Luna< osg::TexEnv > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::TexEnv* ptr= dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TexEnv >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
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

	inline static bool _lg_typecheck_setColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getColor_overload_2(lua_State *L) {
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
	// osg::TexEnv::TexEnv(osg::TexEnv::Mode mode = osg::TexEnv::MODULATE)
	static osg::TexEnv* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexEnv::TexEnv(osg::TexEnv::Mode mode = osg::TexEnv::MODULATE) function, expected prototype:\nosg::TexEnv::TexEnv(osg::TexEnv::Mode mode = osg::TexEnv::MODULATE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::TexEnv::Mode mode=luatop>0 ? (osg::TexEnv::Mode)lua_tointeger(L,1) : osg::TexEnv::MODULATE;

		return new osg::TexEnv(mode);
	}

	// osg::TexEnv::TexEnv(const osg::TexEnv & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexEnv* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexEnv::TexEnv(const osg::TexEnv & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexEnv::TexEnv(const osg::TexEnv & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TexEnv* texenv_ptr=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if( !texenv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texenv in osg::TexEnv::TexEnv function");
		}
		const osg::TexEnv & texenv=*texenv_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexEnv::TexEnv function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TexEnv(texenv, copyop);
	}

	// Overload binder for osg::TexEnv::TexEnv
	static osg::TexEnv* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TexEnv, cannot match any of the overloads for function TexEnv:\n  TexEnv(osg::TexEnv::Mode)\n  TexEnv(const osg::TexEnv &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TexEnv::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnv::cloneType() const function, expected prototype:\nosg::Object * osg::TexEnv::cloneType() const\nClass arguments details:\n");
		}


		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnv::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexEnv::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnv::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::TexEnv::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnv::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnv::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexEnv::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexEnv::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexEnv::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexEnv::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexEnv::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnv::libraryName() const function, expected prototype:\nconst char * osg::TexEnv::libraryName() const\nClass arguments details:\n");
		}


		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexEnv::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexEnv::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnv::className() const function, expected prototype:\nconst char * osg::TexEnv::className() const\nClass arguments details:\n");
		}


		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexEnv::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TexEnv::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TexEnv::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TexEnv::getType() const\nClass arguments details:\n");
		}


		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TexEnv::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexEnv::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexEnv::isTextureAttribute() const function, expected prototype:\nbool osg::TexEnv::isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexEnv::isTextureAttribute() const");
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TexEnv::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnv::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::TexEnv::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::TexEnv::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnv::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnv::setMode(osg::TexEnv::Mode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::setMode(osg::TexEnv::Mode mode) function, expected prototype:\nvoid osg::TexEnv::setMode(osg::TexEnv::Mode mode)\nClass arguments details:\n");
		}

		osg::TexEnv::Mode mode=(osg::TexEnv::Mode)lua_tointeger(L,2);

		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnv::setMode(osg::TexEnv::Mode)");
		}
		self->setMode(mode);

		return 0;
	}

	// osg::TexEnv::Mode osg::TexEnv::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexEnv::Mode osg::TexEnv::getMode() const function, expected prototype:\nosg::TexEnv::Mode osg::TexEnv::getMode() const\nClass arguments details:\n");
		}


		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::TexEnv::Mode osg::TexEnv::getMode() const");
		}
		osg::TexEnv::Mode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnv::setColor(const osg::Vec4f & color)
	static int _bind_setColor(lua_State *L) {
		if (!_lg_typecheck_setColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::setColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::TexEnv::setColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::TexEnv::setColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnv::setColor(const osg::Vec4f &)");
		}
		self->setColor(color);

		return 0;
	}

	// osg::Vec4f & osg::TexEnv::getColor()
	static int _bind_getColor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getColor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4f & osg::TexEnv::getColor() function, expected prototype:\nosg::Vec4f & osg::TexEnv::getColor()\nClass arguments details:\n");
		}


		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec4f & osg::TexEnv::getColor()");
		}
		const osg::Vec4f* lret = &self->getColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osg::TexEnv::getColor() const
	static int _bind_getColor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getColor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::TexEnv::getColor() const function, expected prototype:\nconst osg::Vec4f & osg::TexEnv::getColor() const\nClass arguments details:\n");
		}


		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::TexEnv::getColor() const");
		}
		const osg::Vec4f* lret = &self->getColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexEnv::getColor
	static int _bind_getColor(lua_State *L) {
		if (_lg_typecheck_getColor_overload_1(L)) return _bind_getColor_overload_1(L);
		if (_lg_typecheck_getColor_overload_2(L)) return _bind_getColor_overload_2(L);

		luaL_error(L, "error in function getColor, cannot match any of the overloads for function getColor:\n  getColor()\n  getColor()\n");
		return 0;
	}

	// void osg::TexEnv::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnv::apply(osg::State & ) const function, expected prototype:\nvoid osg::TexEnv::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnv::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnv* self=dynamic_cast< osg::TexEnv* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnv::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::TexEnv* LunaTraits< osg::TexEnv >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TexEnv::_bind_ctor(L);
}

void LunaTraits< osg::TexEnv >::_bind_dtor(osg::TexEnv* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TexEnv >::className[] = "TexEnv";
const char LunaTraits< osg::TexEnv >::fullName[] = "osg::TexEnv";
const char LunaTraits< osg::TexEnv >::moduleName[] = "osg";
const char* LunaTraits< osg::TexEnv >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::TexEnv >::hash = 4783989;
const int LunaTraits< osg::TexEnv >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TexEnv >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TexEnv::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TexEnv::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TexEnv::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TexEnv::_bind_libraryName},
	{"className", &luna_wrapper_osg_TexEnv::_bind_className},
	{"getType", &luna_wrapper_osg_TexEnv::_bind_getType},
	{"isTextureAttribute", &luna_wrapper_osg_TexEnv::_bind_isTextureAttribute},
	{"compare", &luna_wrapper_osg_TexEnv::_bind_compare},
	{"setMode", &luna_wrapper_osg_TexEnv::_bind_setMode},
	{"getMode", &luna_wrapper_osg_TexEnv::_bind_getMode},
	{"setColor", &luna_wrapper_osg_TexEnv::_bind_setColor},
	{"getColor", &luna_wrapper_osg_TexEnv::_bind_getColor},
	{"apply", &luna_wrapper_osg_TexEnv::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TexEnv >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TexEnv::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TexEnv >::enumValues[] = {
	{"DECAL", osg::TexEnv::DECAL},
	{"MODULATE", osg::TexEnv::MODULATE},
	{"BLEND", osg::TexEnv::BLEND},
	{"REPLACE", osg::TexEnv::REPLACE},
	{"ADD", osg::TexEnv::ADD},
	{0,0}
};

