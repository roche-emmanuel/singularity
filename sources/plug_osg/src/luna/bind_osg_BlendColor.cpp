#include <plug_common.h>

class luna_wrapper_osg_BlendColor {
public:
	typedef Luna< osg::BlendColor > luna_t;

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
		osg::BlendColor* ptr= dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendColor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303235) ) return false;
		if( (!dynamic_cast< osg::Vec4f* >(Luna< osg::Vec4f >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setConstantColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstantColor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getConstantColor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::BlendColor::BlendColor()
	static osg::BlendColor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendColor::BlendColor() function, expected prototype:\nosg::BlendColor::BlendColor()\nClass arguments details:\n");
		}


		return new osg::BlendColor();
	}

	// osg::BlendColor::BlendColor(const osg::Vec4f & constantColor)
	static osg::BlendColor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendColor::BlendColor(const osg::Vec4f & constantColor) function, expected prototype:\nosg::BlendColor::BlendColor(const osg::Vec4f & constantColor)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* constantColor_ptr=(Luna< osg::Vec4f >::check(L,1));
		if( !constantColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg constantColor in osg::BlendColor::BlendColor function");
		}
		const osg::Vec4f & constantColor=*constantColor_ptr;

		return new osg::BlendColor(constantColor);
	}

	// osg::BlendColor::BlendColor(const osg::BlendColor & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::BlendColor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendColor::BlendColor(const osg::BlendColor & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::BlendColor::BlendColor(const osg::BlendColor & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::BlendColor* trans_ptr=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::BlendColor::BlendColor function");
		}
		const osg::BlendColor & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::BlendColor::BlendColor function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::BlendColor(trans, copyop);
	}

	// Overload binder for osg::BlendColor::BlendColor
	static osg::BlendColor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function BlendColor, cannot match any of the overloads for function BlendColor:\n  BlendColor()\n  BlendColor(const osg::Vec4f &)\n  BlendColor(const osg::BlendColor &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::BlendColor::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendColor::cloneType() const function, expected prototype:\nosg::Object * osg::BlendColor::cloneType() const\nClass arguments details:\n");
		}


		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendColor::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::BlendColor::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendColor::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::BlendColor::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendColor::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::BlendColor::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendColor::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BlendColor::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendColor::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BlendColor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BlendColor::libraryName() const function, expected prototype:\nconst char * osg::BlendColor::libraryName() const\nClass arguments details:\n");
		}


		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BlendColor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BlendColor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BlendColor::className() const function, expected prototype:\nconst char * osg::BlendColor::className() const\nClass arguments details:\n");
		}


		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BlendColor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::BlendColor::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::BlendColor::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::BlendColor::getType() const\nClass arguments details:\n");
		}


		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::BlendColor::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::BlendColor::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::BlendColor::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::BlendColor::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::BlendColor::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::BlendColor::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendColor::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendColor::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::BlendColor::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendColor::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendColor::setConstantColor(const osg::Vec4f & color)
	static int _bind_setConstantColor(lua_State *L) {
		if (!_lg_typecheck_setConstantColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::setConstantColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::BlendColor::setConstantColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::BlendColor::setConstantColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendColor::setConstantColor(const osg::Vec4f &)");
		}
		self->setConstantColor(color);

		return 0;
	}

	// osg::Vec4f & osg::BlendColor::getConstantColor()
	static int _bind_getConstantColor_overload_1(lua_State *L) {
		if (!_lg_typecheck_getConstantColor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4f & osg::BlendColor::getConstantColor() function, expected prototype:\nosg::Vec4f & osg::BlendColor::getConstantColor()\nClass arguments details:\n");
		}


		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec4f & osg::BlendColor::getConstantColor()");
		}
		const osg::Vec4f* lret = &self->getConstantColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec4f & osg::BlendColor::getConstantColor() const
	static int _bind_getConstantColor_overload_2(lua_State *L) {
		if (!_lg_typecheck_getConstantColor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::BlendColor::getConstantColor() const function, expected prototype:\nconst osg::Vec4f & osg::BlendColor::getConstantColor() const\nClass arguments details:\n");
		}


		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::BlendColor::getConstantColor() const");
		}
		const osg::Vec4f* lret = &self->getConstantColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::BlendColor::getConstantColor
	static int _bind_getConstantColor(lua_State *L) {
		if (_lg_typecheck_getConstantColor_overload_1(L)) return _bind_getConstantColor_overload_1(L);
		if (_lg_typecheck_getConstantColor_overload_2(L)) return _bind_getConstantColor_overload_2(L);

		luaL_error(L, "error in function getConstantColor, cannot match any of the overloads for function getConstantColor:\n  getConstantColor()\n  getConstantColor()\n");
		return 0;
	}

	// void osg::BlendColor::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendColor::apply(osg::State & ) const function, expected prototype:\nvoid osg::BlendColor::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendColor::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendColor* self=dynamic_cast< osg::BlendColor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendColor::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::BlendColor::Extensions * osg::BlendColor::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::BlendColor::Extensions * osg::BlendColor::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::BlendColor::Extensions * osg::BlendColor::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::BlendColor::Extensions * lret = osg::BlendColor::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BlendColor::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::BlendColor::setExtensions(unsigned int contextID, osg::BlendColor::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::BlendColor::setExtensions(unsigned int contextID, osg::BlendColor::Extensions * extensions) function, expected prototype:\nstatic void osg::BlendColor::setExtensions(unsigned int contextID, osg::BlendColor::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::BlendColor::Extensions* extensions=dynamic_cast< osg::BlendColor::Extensions* >(Luna< osg::Referenced >::check(L,2));

		osg::BlendColor::setExtensions(contextID, extensions);

		return 0;
	}


	// Operator binds:

};

osg::BlendColor* LunaTraits< osg::BlendColor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendColor::_bind_ctor(L);
}

void LunaTraits< osg::BlendColor >::_bind_dtor(osg::BlendColor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendColor >::className[] = "BlendColor";
const char LunaTraits< osg::BlendColor >::fullName[] = "osg::BlendColor";
const char LunaTraits< osg::BlendColor >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendColor >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::BlendColor >::hash = 21043578;
const int LunaTraits< osg::BlendColor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendColor >::methods[] = {
	{"cloneType", &luna_wrapper_osg_BlendColor::_bind_cloneType},
	{"clone", &luna_wrapper_osg_BlendColor::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_BlendColor::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_BlendColor::_bind_libraryName},
	{"className", &luna_wrapper_osg_BlendColor::_bind_className},
	{"getType", &luna_wrapper_osg_BlendColor::_bind_getType},
	{"compare", &luna_wrapper_osg_BlendColor::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_BlendColor::_bind_getModeUsage},
	{"setConstantColor", &luna_wrapper_osg_BlendColor::_bind_setConstantColor},
	{"getConstantColor", &luna_wrapper_osg_BlendColor::_bind_getConstantColor},
	{"apply", &luna_wrapper_osg_BlendColor::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_BlendColor::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_BlendColor::_bind_setExtensions},
	{"__eq", &luna_wrapper_osg_BlendColor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendColor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendColor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendColor >::enumValues[] = {
	{0,0}
};


