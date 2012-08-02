#include <plug_common.h>

class luna_wrapper_osg_ColorMask {
public:
	typedef Luna< osg::ColorMask > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ColorMask* ptr= dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ColorMask >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
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

	inline static bool _lg_typecheck_setMask(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRedMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRedMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGreenMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGreenMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBlueMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBlueMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAlphaMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAlphaMask(lua_State *L) {
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
	// osg::ColorMask::ColorMask()
	static osg::ColorMask* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ColorMask::ColorMask() function, expected prototype:\nosg::ColorMask::ColorMask()\nClass arguments details:\n");
		}


		return new osg::ColorMask();
	}

	// osg::ColorMask::ColorMask(bool red, bool green, bool blue, bool alpha)
	static osg::ColorMask* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ColorMask::ColorMask(bool red, bool green, bool blue, bool alpha) function, expected prototype:\nosg::ColorMask::ColorMask(bool red, bool green, bool blue, bool alpha)\nClass arguments details:\n");
		}

		bool red=(bool)(lua_toboolean(L,1)==1);
		bool green=(bool)(lua_toboolean(L,2)==1);
		bool blue=(bool)(lua_toboolean(L,3)==1);
		bool alpha=(bool)(lua_toboolean(L,4)==1);

		return new osg::ColorMask(red, green, blue, alpha);
	}

	// osg::ColorMask::ColorMask(const osg::ColorMask & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ColorMask* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ColorMask::ColorMask(const osg::ColorMask & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ColorMask::ColorMask(const osg::ColorMask & cm, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ColorMask* cm_ptr=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if( !cm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cm in osg::ColorMask::ColorMask function");
		}
		const osg::ColorMask & cm=*cm_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ColorMask::ColorMask function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ColorMask(cm, copyop);
	}

	// Overload binder for osg::ColorMask::ColorMask
	static osg::ColorMask* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function ColorMask, cannot match any of the overloads for function ColorMask:\n  ColorMask()\n  ColorMask(bool, bool, bool, bool)\n  ColorMask(const osg::ColorMask &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ColorMask::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ColorMask::cloneType() const function, expected prototype:\nosg::Object * osg::ColorMask::cloneType() const\nClass arguments details:\n");
		}


		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ColorMask::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ColorMask::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ColorMask::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ColorMask::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMask::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ColorMask::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ColorMask::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ColorMask::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ColorMask::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ColorMask::libraryName() const function, expected prototype:\nconst char * osg::ColorMask::libraryName() const\nClass arguments details:\n");
		}


		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ColorMask::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ColorMask::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ColorMask::className() const function, expected prototype:\nconst char * osg::ColorMask::className() const\nClass arguments details:\n");
		}


		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ColorMask::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::ColorMask::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ColorMask::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ColorMask::getType() const\nClass arguments details:\n");
		}


		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ColorMask::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::ColorMask::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ColorMask::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ColorMask::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ColorMask::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ColorMask::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ColorMask::setMask(bool red, bool green, bool blue, bool alpha)
	static int _bind_setMask(lua_State *L) {
		if (!_lg_typecheck_setMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setMask(bool red, bool green, bool blue, bool alpha) function, expected prototype:\nvoid osg::ColorMask::setMask(bool red, bool green, bool blue, bool alpha)\nClass arguments details:\n");
		}

		bool red=(bool)(lua_toboolean(L,2)==1);
		bool green=(bool)(lua_toboolean(L,3)==1);
		bool blue=(bool)(lua_toboolean(L,4)==1);
		bool alpha=(bool)(lua_toboolean(L,5)==1);

		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setMask(bool, bool, bool, bool)");
		}
		self->setMask(red, green, blue, alpha);

		return 0;
	}

	// void osg::ColorMask::setRedMask(bool mask)
	static int _bind_setRedMask(lua_State *L) {
		if (!_lg_typecheck_setRedMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setRedMask(bool mask) function, expected prototype:\nvoid osg::ColorMask::setRedMask(bool mask)\nClass arguments details:\n");
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setRedMask(bool)");
		}
		self->setRedMask(mask);

		return 0;
	}

	// bool osg::ColorMask::getRedMask() const
	static int _bind_getRedMask(lua_State *L) {
		if (!_lg_typecheck_getRedMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::getRedMask() const function, expected prototype:\nbool osg::ColorMask::getRedMask() const\nClass arguments details:\n");
		}


		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::getRedMask() const");
		}
		bool lret = self->getRedMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ColorMask::setGreenMask(bool mask)
	static int _bind_setGreenMask(lua_State *L) {
		if (!_lg_typecheck_setGreenMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setGreenMask(bool mask) function, expected prototype:\nvoid osg::ColorMask::setGreenMask(bool mask)\nClass arguments details:\n");
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setGreenMask(bool)");
		}
		self->setGreenMask(mask);

		return 0;
	}

	// bool osg::ColorMask::getGreenMask() const
	static int _bind_getGreenMask(lua_State *L) {
		if (!_lg_typecheck_getGreenMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::getGreenMask() const function, expected prototype:\nbool osg::ColorMask::getGreenMask() const\nClass arguments details:\n");
		}


		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::getGreenMask() const");
		}
		bool lret = self->getGreenMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ColorMask::setBlueMask(bool mask)
	static int _bind_setBlueMask(lua_State *L) {
		if (!_lg_typecheck_setBlueMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setBlueMask(bool mask) function, expected prototype:\nvoid osg::ColorMask::setBlueMask(bool mask)\nClass arguments details:\n");
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setBlueMask(bool)");
		}
		self->setBlueMask(mask);

		return 0;
	}

	// bool osg::ColorMask::getBlueMask() const
	static int _bind_getBlueMask(lua_State *L) {
		if (!_lg_typecheck_getBlueMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::getBlueMask() const function, expected prototype:\nbool osg::ColorMask::getBlueMask() const\nClass arguments details:\n");
		}


		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::getBlueMask() const");
		}
		bool lret = self->getBlueMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ColorMask::setAlphaMask(bool mask)
	static int _bind_setAlphaMask(lua_State *L) {
		if (!_lg_typecheck_setAlphaMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::setAlphaMask(bool mask) function, expected prototype:\nvoid osg::ColorMask::setAlphaMask(bool mask)\nClass arguments details:\n");
		}

		bool mask=(bool)(lua_toboolean(L,2)==1);

		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ColorMask::setAlphaMask(bool)");
		}
		self->setAlphaMask(mask);

		return 0;
	}

	// bool osg::ColorMask::getAlphaMask() const
	static int _bind_getAlphaMask(lua_State *L) {
		if (!_lg_typecheck_getAlphaMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ColorMask::getAlphaMask() const function, expected prototype:\nbool osg::ColorMask::getAlphaMask() const\nClass arguments details:\n");
		}


		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ColorMask::getAlphaMask() const");
		}
		bool lret = self->getAlphaMask();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ColorMask::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ColorMask::apply(osg::State & ) const function, expected prototype:\nvoid osg::ColorMask::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ColorMask::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ColorMask* self=dynamic_cast< osg::ColorMask* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ColorMask::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::ColorMask* LunaTraits< osg::ColorMask >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ColorMask::_bind_ctor(L);
}

void LunaTraits< osg::ColorMask >::_bind_dtor(osg::ColorMask* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ColorMask >::className[] = "ColorMask";
const char LunaTraits< osg::ColorMask >::fullName[] = "osg::ColorMask";
const char LunaTraits< osg::ColorMask >::moduleName[] = "osg";
const char* LunaTraits< osg::ColorMask >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::ColorMask >::hash = 54812216;
const int LunaTraits< osg::ColorMask >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ColorMask >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ColorMask::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ColorMask::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ColorMask::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ColorMask::_bind_libraryName},
	{"className", &luna_wrapper_osg_ColorMask::_bind_className},
	{"getType", &luna_wrapper_osg_ColorMask::_bind_getType},
	{"compare", &luna_wrapper_osg_ColorMask::_bind_compare},
	{"setMask", &luna_wrapper_osg_ColorMask::_bind_setMask},
	{"setRedMask", &luna_wrapper_osg_ColorMask::_bind_setRedMask},
	{"getRedMask", &luna_wrapper_osg_ColorMask::_bind_getRedMask},
	{"setGreenMask", &luna_wrapper_osg_ColorMask::_bind_setGreenMask},
	{"getGreenMask", &luna_wrapper_osg_ColorMask::_bind_getGreenMask},
	{"setBlueMask", &luna_wrapper_osg_ColorMask::_bind_setBlueMask},
	{"getBlueMask", &luna_wrapper_osg_ColorMask::_bind_getBlueMask},
	{"setAlphaMask", &luna_wrapper_osg_ColorMask::_bind_setAlphaMask},
	{"getAlphaMask", &luna_wrapper_osg_ColorMask::_bind_getAlphaMask},
	{"apply", &luna_wrapper_osg_ColorMask::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ColorMask >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ColorMask::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ColorMask >::enumValues[] = {
	{0,0}
};


