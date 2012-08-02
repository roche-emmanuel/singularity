#include <plug_common.h>

class luna_wrapper_osg_PointSprite {
public:
	typedef Luna< osg::PointSprite > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::PointSprite* ptr= dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PointSprite >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCoordOriginMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoordOriginMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isPointSpriteSupported(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PointSprite::PointSprite()
	static osg::PointSprite* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PointSprite::PointSprite() function, expected prototype:\nosg::PointSprite::PointSprite()\nClass arguments details:\n");
		}


		return new osg::PointSprite();
	}

	// osg::PointSprite::PointSprite(const osg::PointSprite & ps, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PointSprite* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PointSprite::PointSprite(const osg::PointSprite & ps, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PointSprite::PointSprite(const osg::PointSprite & ps, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PointSprite* ps_ptr=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if( !ps_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ps in osg::PointSprite::PointSprite function");
		}
		const osg::PointSprite & ps=*ps_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PointSprite::PointSprite function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::PointSprite(ps, copyop);
	}

	// Overload binder for osg::PointSprite::PointSprite
	static osg::PointSprite* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PointSprite, cannot match any of the overloads for function PointSprite:\n  PointSprite()\n  PointSprite(const osg::PointSprite &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PointSprite::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PointSprite::cloneType() const function, expected prototype:\nosg::Object * osg::PointSprite::cloneType() const\nClass arguments details:\n");
		}


		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PointSprite::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PointSprite::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PointSprite::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::PointSprite::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PointSprite::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PointSprite::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PointSprite::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PointSprite::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PointSprite::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PointSprite::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PointSprite::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PointSprite::libraryName() const function, expected prototype:\nconst char * osg::PointSprite::libraryName() const\nClass arguments details:\n");
		}


		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PointSprite::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PointSprite::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PointSprite::className() const function, expected prototype:\nconst char * osg::PointSprite::className() const\nClass arguments details:\n");
		}


		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PointSprite::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::PointSprite::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::PointSprite::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::PointSprite::getType() const\nClass arguments details:\n");
		}


		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::PointSprite::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::PointSprite::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PointSprite::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::PointSprite::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::PointSprite::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PointSprite::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PointSprite::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PointSprite::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::PointSprite::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PointSprite::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PointSprite::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PointSprite::checkValidityOfAssociatedModes(osg::State & ) const
	static int _bind_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PointSprite::checkValidityOfAssociatedModes(osg::State & ) const function, expected prototype:\nbool osg::PointSprite::checkValidityOfAssociatedModes(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PointSprite::checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PointSprite::checkValidityOfAssociatedModes(osg::State &) const");
		}
		bool lret = self->checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PointSprite::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PointSprite::isTextureAttribute() const function, expected prototype:\nbool osg::PointSprite::isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PointSprite::isTextureAttribute() const");
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PointSprite::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PointSprite::apply(osg::State & ) const function, expected prototype:\nvoid osg::PointSprite::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PointSprite::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PointSprite::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::PointSprite::setCoordOriginMode(osg::PointSprite::CoordOriginMode mode)
	static int _bind_setCoordOriginMode(lua_State *L) {
		if (!_lg_typecheck_setCoordOriginMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PointSprite::setCoordOriginMode(osg::PointSprite::CoordOriginMode mode) function, expected prototype:\nvoid osg::PointSprite::setCoordOriginMode(osg::PointSprite::CoordOriginMode mode)\nClass arguments details:\n");
		}

		osg::PointSprite::CoordOriginMode mode=(osg::PointSprite::CoordOriginMode)lua_tointeger(L,2);

		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PointSprite::setCoordOriginMode(osg::PointSprite::CoordOriginMode)");
		}
		self->setCoordOriginMode(mode);

		return 0;
	}

	// osg::PointSprite::CoordOriginMode osg::PointSprite::getCoordOriginMode() const
	static int _bind_getCoordOriginMode(lua_State *L) {
		if (!_lg_typecheck_getCoordOriginMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PointSprite::CoordOriginMode osg::PointSprite::getCoordOriginMode() const function, expected prototype:\nosg::PointSprite::CoordOriginMode osg::PointSprite::getCoordOriginMode() const\nClass arguments details:\n");
		}


		osg::PointSprite* self=dynamic_cast< osg::PointSprite* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PointSprite::CoordOriginMode osg::PointSprite::getCoordOriginMode() const");
		}
		osg::PointSprite::CoordOriginMode lret = self->getCoordOriginMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static bool osg::PointSprite::isPointSpriteSupported(unsigned int context)
	static int _bind_isPointSpriteSupported(lua_State *L) {
		if (!_lg_typecheck_isPointSpriteSupported(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool osg::PointSprite::isPointSpriteSupported(unsigned int context) function, expected prototype:\nstatic bool osg::PointSprite::isPointSpriteSupported(unsigned int context)\nClass arguments details:\n");
		}

		unsigned int context=(unsigned int)lua_tointeger(L,1);

		bool lret = osg::PointSprite::isPointSpriteSupported(context);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::PointSprite* LunaTraits< osg::PointSprite >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PointSprite::_bind_ctor(L);
}

void LunaTraits< osg::PointSprite >::_bind_dtor(osg::PointSprite* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PointSprite >::className[] = "PointSprite";
const char LunaTraits< osg::PointSprite >::fullName[] = "osg::PointSprite";
const char LunaTraits< osg::PointSprite >::moduleName[] = "osg";
const char* LunaTraits< osg::PointSprite >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::PointSprite >::hash = 87426234;
const int LunaTraits< osg::PointSprite >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PointSprite >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PointSprite::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PointSprite::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PointSprite::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PointSprite::_bind_libraryName},
	{"className", &luna_wrapper_osg_PointSprite::_bind_className},
	{"getType", &luna_wrapper_osg_PointSprite::_bind_getType},
	{"compare", &luna_wrapper_osg_PointSprite::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_PointSprite::_bind_getModeUsage},
	{"checkValidityOfAssociatedModes", &luna_wrapper_osg_PointSprite::_bind_checkValidityOfAssociatedModes},
	{"isTextureAttribute", &luna_wrapper_osg_PointSprite::_bind_isTextureAttribute},
	{"apply", &luna_wrapper_osg_PointSprite::_bind_apply},
	{"setCoordOriginMode", &luna_wrapper_osg_PointSprite::_bind_setCoordOriginMode},
	{"getCoordOriginMode", &luna_wrapper_osg_PointSprite::_bind_getCoordOriginMode},
	{"isPointSpriteSupported", &luna_wrapper_osg_PointSprite::_bind_isPointSpriteSupported},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PointSprite >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PointSprite::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PointSprite >::enumValues[] = {
	{"UPPER_LEFT", osg::PointSprite::UPPER_LEFT},
	{"LOWER_LEFT", osg::PointSprite::LOWER_LEFT},
	{0,0}
};


