#include <plug_common.h>

class luna_wrapper_osg_LightModel {
public:
	typedef Luna< osg::LightModel > luna_t;

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
		osg::LightModel* ptr= dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LightModel >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setAmbientIntensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAmbientIntensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setColorControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocalViewer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalViewer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTwoSided(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTwoSided(lua_State *L) {
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
	// osg::LightModel::LightModel()
	static osg::LightModel* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LightModel::LightModel() function, expected prototype:\nosg::LightModel::LightModel()\nClass arguments details:\n");
		}


		return new osg::LightModel();
	}

	// osg::LightModel::LightModel(const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LightModel* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LightModel::LightModel(const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LightModel::LightModel(const osg::LightModel & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::LightModel* lw_ptr=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if( !lw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lw in osg::LightModel::LightModel function");
		}
		const osg::LightModel & lw=*lw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightModel::LightModel function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::LightModel(lw, copyop);
	}

	// Overload binder for osg::LightModel::LightModel
	static osg::LightModel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LightModel, cannot match any of the overloads for function LightModel:\n  LightModel()\n  LightModel(const osg::LightModel &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LightModel::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightModel::cloneType() const function, expected prototype:\nosg::Object * osg::LightModel::cloneType() const\nClass arguments details:\n");
		}


		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightModel::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LightModel::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightModel::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::LightModel::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightModel::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightModel::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LightModel::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LightModel::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LightModel::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LightModel::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LightModel::libraryName() const function, expected prototype:\nconst char * osg::LightModel::libraryName() const\nClass arguments details:\n");
		}


		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LightModel::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LightModel::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LightModel::className() const function, expected prototype:\nconst char * osg::LightModel::className() const\nClass arguments details:\n");
		}


		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LightModel::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::LightModel::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::LightModel::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::LightModel::getType() const\nClass arguments details:\n");
		}


		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::LightModel::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::LightModel::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::LightModel::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::LightModel::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::LightModel::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::LightModel::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LightModel::setAmbientIntensity(const osg::Vec4f & ambient)
	static int _bind_setAmbientIntensity(lua_State *L) {
		if (!_lg_typecheck_setAmbientIntensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightModel::setAmbientIntensity(const osg::Vec4f & ambient) function, expected prototype:\nvoid osg::LightModel::setAmbientIntensity(const osg::Vec4f & ambient)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* ambient_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !ambient_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ambient in osg::LightModel::setAmbientIntensity function");
		}
		const osg::Vec4f & ambient=*ambient_ptr;

		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightModel::setAmbientIntensity(const osg::Vec4f &)");
		}
		self->setAmbientIntensity(ambient);

		return 0;
	}

	// const osg::Vec4f & osg::LightModel::getAmbientIntensity() const
	static int _bind_getAmbientIntensity(lua_State *L) {
		if (!_lg_typecheck_getAmbientIntensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::LightModel::getAmbientIntensity() const function, expected prototype:\nconst osg::Vec4f & osg::LightModel::getAmbientIntensity() const\nClass arguments details:\n");
		}


		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::LightModel::getAmbientIntensity() const");
		}
		const osg::Vec4f* lret = &self->getAmbientIntensity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::LightModel::setColorControl(osg::LightModel::ColorControl cc)
	static int _bind_setColorControl(lua_State *L) {
		if (!_lg_typecheck_setColorControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightModel::setColorControl(osg::LightModel::ColorControl cc) function, expected prototype:\nvoid osg::LightModel::setColorControl(osg::LightModel::ColorControl cc)\nClass arguments details:\n");
		}

		osg::LightModel::ColorControl cc=(osg::LightModel::ColorControl)lua_tointeger(L,2);

		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightModel::setColorControl(osg::LightModel::ColorControl)");
		}
		self->setColorControl(cc);

		return 0;
	}

	// osg::LightModel::ColorControl osg::LightModel::getColorControl() const
	static int _bind_getColorControl(lua_State *L) {
		if (!_lg_typecheck_getColorControl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LightModel::ColorControl osg::LightModel::getColorControl() const function, expected prototype:\nosg::LightModel::ColorControl osg::LightModel::getColorControl() const\nClass arguments details:\n");
		}


		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::LightModel::ColorControl osg::LightModel::getColorControl() const");
		}
		osg::LightModel::ColorControl lret = self->getColorControl();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LightModel::setLocalViewer(bool localViewer)
	static int _bind_setLocalViewer(lua_State *L) {
		if (!_lg_typecheck_setLocalViewer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightModel::setLocalViewer(bool localViewer) function, expected prototype:\nvoid osg::LightModel::setLocalViewer(bool localViewer)\nClass arguments details:\n");
		}

		bool localViewer=(bool)(lua_toboolean(L,2)==1);

		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightModel::setLocalViewer(bool)");
		}
		self->setLocalViewer(localViewer);

		return 0;
	}

	// bool osg::LightModel::getLocalViewer() const
	static int _bind_getLocalViewer(lua_State *L) {
		if (!_lg_typecheck_getLocalViewer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::getLocalViewer() const function, expected prototype:\nbool osg::LightModel::getLocalViewer() const\nClass arguments details:\n");
		}


		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LightModel::getLocalViewer() const");
		}
		bool lret = self->getLocalViewer();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LightModel::setTwoSided(bool twoSided)
	static int _bind_setTwoSided(lua_State *L) {
		if (!_lg_typecheck_setTwoSided(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightModel::setTwoSided(bool twoSided) function, expected prototype:\nvoid osg::LightModel::setTwoSided(bool twoSided)\nClass arguments details:\n");
		}

		bool twoSided=(bool)(lua_toboolean(L,2)==1);

		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightModel::setTwoSided(bool)");
		}
		self->setTwoSided(twoSided);

		return 0;
	}

	// bool osg::LightModel::getTwoSided() const
	static int _bind_getTwoSided(lua_State *L) {
		if (!_lg_typecheck_getTwoSided(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LightModel::getTwoSided() const function, expected prototype:\nbool osg::LightModel::getTwoSided() const\nClass arguments details:\n");
		}


		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LightModel::getTwoSided() const");
		}
		bool lret = self->getTwoSided();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LightModel::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightModel::apply(osg::State & ) const function, expected prototype:\nvoid osg::LightModel::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightModel::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LightModel* self=dynamic_cast< osg::LightModel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightModel::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::LightModel* LunaTraits< osg::LightModel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LightModel::_bind_ctor(L);
}

void LunaTraits< osg::LightModel >::_bind_dtor(osg::LightModel* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LightModel >::className[] = "LightModel";
const char LunaTraits< osg::LightModel >::fullName[] = "osg::LightModel";
const char LunaTraits< osg::LightModel >::moduleName[] = "osg";
const char* LunaTraits< osg::LightModel >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::LightModel >::hash = 8384344;
const int LunaTraits< osg::LightModel >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LightModel >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LightModel::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LightModel::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LightModel::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_LightModel::_bind_libraryName},
	{"className", &luna_wrapper_osg_LightModel::_bind_className},
	{"getType", &luna_wrapper_osg_LightModel::_bind_getType},
	{"compare", &luna_wrapper_osg_LightModel::_bind_compare},
	{"setAmbientIntensity", &luna_wrapper_osg_LightModel::_bind_setAmbientIntensity},
	{"getAmbientIntensity", &luna_wrapper_osg_LightModel::_bind_getAmbientIntensity},
	{"setColorControl", &luna_wrapper_osg_LightModel::_bind_setColorControl},
	{"getColorControl", &luna_wrapper_osg_LightModel::_bind_getColorControl},
	{"setLocalViewer", &luna_wrapper_osg_LightModel::_bind_setLocalViewer},
	{"getLocalViewer", &luna_wrapper_osg_LightModel::_bind_getLocalViewer},
	{"setTwoSided", &luna_wrapper_osg_LightModel::_bind_setTwoSided},
	{"getTwoSided", &luna_wrapper_osg_LightModel::_bind_getTwoSided},
	{"apply", &luna_wrapper_osg_LightModel::_bind_apply},
	{"__eq", &luna_wrapper_osg_LightModel::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LightModel >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LightModel::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LightModel >::enumValues[] = {
	{"SEPARATE_SPECULAR_COLOR", osg::LightModel::SEPARATE_SPECULAR_COLOR},
	{"SINGLE_COLOR", osg::LightModel::SINGLE_COLOR},
	{0,0}
};


