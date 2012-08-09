#include <plug_common.h>

class luna_wrapper_osg_Material {
public:
	typedef Luna< osg::Material > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Material* ptr= dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Material >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setColorMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColorMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAmbient(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAmbient(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAmbientFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDiffuse(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDiffuse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDiffuseFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSpecular(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpecular(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpecularFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEmission(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEmission(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEmissionFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShininess(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShininess(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShininessFrontAndBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTransparency(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlpha(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Material::Material()
	static osg::Material* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Material::Material() function, expected prototype:\nosg::Material::Material()\nClass arguments details:\n");
		}


		return new osg::Material();
	}

	// osg::Material::Material(const osg::Material & mat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Material* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Material::Material(const osg::Material & mat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Material::Material(const osg::Material & mat, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Material* mat_ptr=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if( !mat_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mat in osg::Material::Material function");
		}
		const osg::Material & mat=*mat_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Material::Material function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Material(mat, copyop);
	}

	// Overload binder for osg::Material::Material
	static osg::Material* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Material, cannot match any of the overloads for function Material:\n  Material()\n  Material(const osg::Material &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Material::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Material::cloneType() const function, expected prototype:\nosg::Object * osg::Material::cloneType() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Material::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Material::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Material::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Material::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Material::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Material::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Material::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Material::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Material::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Material::libraryName() const function, expected prototype:\nconst char * osg::Material::libraryName() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Material::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Material::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Material::className() const function, expected prototype:\nconst char * osg::Material::className() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Material::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Material::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Material::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Material::getType() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Material::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Material::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Material::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Material::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Material::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Material::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Material::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Material::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::Material::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Material::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Material::apply(osg::State & ) const function, expected prototype:\nvoid osg::Material::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Material::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Material::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::Material::setColorMode(osg::Material::ColorMode mode)
	static int _bind_setColorMode(lua_State *L) {
		if (!_lg_typecheck_setColorMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Material::setColorMode(osg::Material::ColorMode mode) function, expected prototype:\nvoid osg::Material::setColorMode(osg::Material::ColorMode mode)\nClass arguments details:\n");
		}

		osg::Material::ColorMode mode=(osg::Material::ColorMode)lua_tointeger(L,2);

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Material::setColorMode(osg::Material::ColorMode)");
		}
		self->setColorMode(mode);

		return 0;
	}

	// osg::Material::ColorMode osg::Material::getColorMode() const
	static int _bind_getColorMode(lua_State *L) {
		if (!_lg_typecheck_getColorMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Material::ColorMode osg::Material::getColorMode() const function, expected prototype:\nosg::Material::ColorMode osg::Material::getColorMode() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Material::ColorMode osg::Material::getColorMode() const");
		}
		osg::Material::ColorMode lret = self->getColorMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Material::setAmbient(osg::Material::Face face, const osg::Vec4f & ambient)
	static int _bind_setAmbient(lua_State *L) {
		if (!_lg_typecheck_setAmbient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Material::setAmbient(osg::Material::Face face, const osg::Vec4f & ambient) function, expected prototype:\nvoid osg::Material::setAmbient(osg::Material::Face face, const osg::Vec4f & ambient)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		const osg::Vec4f* ambient_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !ambient_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ambient in osg::Material::setAmbient function");
		}
		const osg::Vec4f & ambient=*ambient_ptr;

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Material::setAmbient(osg::Material::Face, const osg::Vec4f &)");
		}
		self->setAmbient(face, ambient);

		return 0;
	}

	// const osg::Vec4f & osg::Material::getAmbient(osg::Material::Face face) const
	static int _bind_getAmbient(lua_State *L) {
		if (!_lg_typecheck_getAmbient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Material::getAmbient(osg::Material::Face face) const function, expected prototype:\nconst osg::Vec4f & osg::Material::getAmbient(osg::Material::Face face) const\nClass arguments details:\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Material::getAmbient(osg::Material::Face) const");
		}
		const osg::Vec4f* lret = &self->getAmbient(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::getAmbientFrontAndBack() const
	static int _bind_getAmbientFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getAmbientFrontAndBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Material::getAmbientFrontAndBack() const function, expected prototype:\nbool osg::Material::getAmbientFrontAndBack() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Material::getAmbientFrontAndBack() const");
		}
		bool lret = self->getAmbientFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setDiffuse(osg::Material::Face face, const osg::Vec4f & diffuse)
	static int _bind_setDiffuse(lua_State *L) {
		if (!_lg_typecheck_setDiffuse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Material::setDiffuse(osg::Material::Face face, const osg::Vec4f & diffuse) function, expected prototype:\nvoid osg::Material::setDiffuse(osg::Material::Face face, const osg::Vec4f & diffuse)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		const osg::Vec4f* diffuse_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !diffuse_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg diffuse in osg::Material::setDiffuse function");
		}
		const osg::Vec4f & diffuse=*diffuse_ptr;

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Material::setDiffuse(osg::Material::Face, const osg::Vec4f &)");
		}
		self->setDiffuse(face, diffuse);

		return 0;
	}

	// const osg::Vec4f & osg::Material::getDiffuse(osg::Material::Face face) const
	static int _bind_getDiffuse(lua_State *L) {
		if (!_lg_typecheck_getDiffuse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Material::getDiffuse(osg::Material::Face face) const function, expected prototype:\nconst osg::Vec4f & osg::Material::getDiffuse(osg::Material::Face face) const\nClass arguments details:\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Material::getDiffuse(osg::Material::Face) const");
		}
		const osg::Vec4f* lret = &self->getDiffuse(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::getDiffuseFrontAndBack() const
	static int _bind_getDiffuseFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getDiffuseFrontAndBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Material::getDiffuseFrontAndBack() const function, expected prototype:\nbool osg::Material::getDiffuseFrontAndBack() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Material::getDiffuseFrontAndBack() const");
		}
		bool lret = self->getDiffuseFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setSpecular(osg::Material::Face face, const osg::Vec4f & specular)
	static int _bind_setSpecular(lua_State *L) {
		if (!_lg_typecheck_setSpecular(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Material::setSpecular(osg::Material::Face face, const osg::Vec4f & specular) function, expected prototype:\nvoid osg::Material::setSpecular(osg::Material::Face face, const osg::Vec4f & specular)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		const osg::Vec4f* specular_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !specular_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg specular in osg::Material::setSpecular function");
		}
		const osg::Vec4f & specular=*specular_ptr;

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Material::setSpecular(osg::Material::Face, const osg::Vec4f &)");
		}
		self->setSpecular(face, specular);

		return 0;
	}

	// const osg::Vec4f & osg::Material::getSpecular(osg::Material::Face face) const
	static int _bind_getSpecular(lua_State *L) {
		if (!_lg_typecheck_getSpecular(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Material::getSpecular(osg::Material::Face face) const function, expected prototype:\nconst osg::Vec4f & osg::Material::getSpecular(osg::Material::Face face) const\nClass arguments details:\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Material::getSpecular(osg::Material::Face) const");
		}
		const osg::Vec4f* lret = &self->getSpecular(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::getSpecularFrontAndBack() const
	static int _bind_getSpecularFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getSpecularFrontAndBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Material::getSpecularFrontAndBack() const function, expected prototype:\nbool osg::Material::getSpecularFrontAndBack() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Material::getSpecularFrontAndBack() const");
		}
		bool lret = self->getSpecularFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setEmission(osg::Material::Face face, const osg::Vec4f & emission)
	static int _bind_setEmission(lua_State *L) {
		if (!_lg_typecheck_setEmission(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Material::setEmission(osg::Material::Face face, const osg::Vec4f & emission) function, expected prototype:\nvoid osg::Material::setEmission(osg::Material::Face face, const osg::Vec4f & emission)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		const osg::Vec4f* emission_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !emission_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg emission in osg::Material::setEmission function");
		}
		const osg::Vec4f & emission=*emission_ptr;

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Material::setEmission(osg::Material::Face, const osg::Vec4f &)");
		}
		self->setEmission(face, emission);

		return 0;
	}

	// const osg::Vec4f & osg::Material::getEmission(osg::Material::Face face) const
	static int _bind_getEmission(lua_State *L) {
		if (!_lg_typecheck_getEmission(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::Material::getEmission(osg::Material::Face face) const function, expected prototype:\nconst osg::Vec4f & osg::Material::getEmission(osg::Material::Face face) const\nClass arguments details:\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::Material::getEmission(osg::Material::Face) const");
		}
		const osg::Vec4f* lret = &self->getEmission(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// bool osg::Material::getEmissionFrontAndBack() const
	static int _bind_getEmissionFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getEmissionFrontAndBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Material::getEmissionFrontAndBack() const function, expected prototype:\nbool osg::Material::getEmissionFrontAndBack() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Material::getEmissionFrontAndBack() const");
		}
		bool lret = self->getEmissionFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setShininess(osg::Material::Face face, float shininess)
	static int _bind_setShininess(lua_State *L) {
		if (!_lg_typecheck_setShininess(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Material::setShininess(osg::Material::Face face, float shininess) function, expected prototype:\nvoid osg::Material::setShininess(osg::Material::Face face, float shininess)\nClass arguments details:\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		float shininess=(float)lua_tonumber(L,3);

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Material::setShininess(osg::Material::Face, float)");
		}
		self->setShininess(face, shininess);

		return 0;
	}

	// float osg::Material::getShininess(osg::Material::Face face) const
	static int _bind_getShininess(lua_State *L) {
		if (!_lg_typecheck_getShininess(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Material::getShininess(osg::Material::Face face) const function, expected prototype:\nfloat osg::Material::getShininess(osg::Material::Face face) const\nClass arguments details:\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Material::getShininess(osg::Material::Face) const");
		}
		float lret = self->getShininess(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Material::getShininessFrontAndBack() const
	static int _bind_getShininessFrontAndBack(lua_State *L) {
		if (!_lg_typecheck_getShininessFrontAndBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Material::getShininessFrontAndBack() const function, expected prototype:\nbool osg::Material::getShininessFrontAndBack() const\nClass arguments details:\n");
		}


		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Material::getShininessFrontAndBack() const");
		}
		bool lret = self->getShininessFrontAndBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Material::setTransparency(osg::Material::Face face, float trans)
	static int _bind_setTransparency(lua_State *L) {
		if (!_lg_typecheck_setTransparency(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Material::setTransparency(osg::Material::Face face, float trans) function, expected prototype:\nvoid osg::Material::setTransparency(osg::Material::Face face, float trans)\nClass arguments details:\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		float trans=(float)lua_tonumber(L,3);

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Material::setTransparency(osg::Material::Face, float)");
		}
		self->setTransparency(face, trans);

		return 0;
	}

	// void osg::Material::setAlpha(osg::Material::Face face, float alpha)
	static int _bind_setAlpha(lua_State *L) {
		if (!_lg_typecheck_setAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Material::setAlpha(osg::Material::Face face, float alpha) function, expected prototype:\nvoid osg::Material::setAlpha(osg::Material::Face face, float alpha)\nClass arguments details:\n");
		}

		osg::Material::Face face=(osg::Material::Face)lua_tointeger(L,2);
		float alpha=(float)lua_tonumber(L,3);

		osg::Material* self=dynamic_cast< osg::Material* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Material::setAlpha(osg::Material::Face, float)");
		}
		self->setAlpha(face, alpha);

		return 0;
	}


	// Operator binds:

};

osg::Material* LunaTraits< osg::Material >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Material::_bind_ctor(L);
}

void LunaTraits< osg::Material >::_bind_dtor(osg::Material* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Material >::className[] = "Material";
const char LunaTraits< osg::Material >::fullName[] = "osg::Material";
const char LunaTraits< osg::Material >::moduleName[] = "osg";
const char* LunaTraits< osg::Material >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Material >::hash = 74266859;
const int LunaTraits< osg::Material >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Material >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Material::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Material::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Material::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Material::_bind_libraryName},
	{"className", &luna_wrapper_osg_Material::_bind_className},
	{"getType", &luna_wrapper_osg_Material::_bind_getType},
	{"compare", &luna_wrapper_osg_Material::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_Material::_bind_getModeUsage},
	{"apply", &luna_wrapper_osg_Material::_bind_apply},
	{"setColorMode", &luna_wrapper_osg_Material::_bind_setColorMode},
	{"getColorMode", &luna_wrapper_osg_Material::_bind_getColorMode},
	{"setAmbient", &luna_wrapper_osg_Material::_bind_setAmbient},
	{"getAmbient", &luna_wrapper_osg_Material::_bind_getAmbient},
	{"getAmbientFrontAndBack", &luna_wrapper_osg_Material::_bind_getAmbientFrontAndBack},
	{"setDiffuse", &luna_wrapper_osg_Material::_bind_setDiffuse},
	{"getDiffuse", &luna_wrapper_osg_Material::_bind_getDiffuse},
	{"getDiffuseFrontAndBack", &luna_wrapper_osg_Material::_bind_getDiffuseFrontAndBack},
	{"setSpecular", &luna_wrapper_osg_Material::_bind_setSpecular},
	{"getSpecular", &luna_wrapper_osg_Material::_bind_getSpecular},
	{"getSpecularFrontAndBack", &luna_wrapper_osg_Material::_bind_getSpecularFrontAndBack},
	{"setEmission", &luna_wrapper_osg_Material::_bind_setEmission},
	{"getEmission", &luna_wrapper_osg_Material::_bind_getEmission},
	{"getEmissionFrontAndBack", &luna_wrapper_osg_Material::_bind_getEmissionFrontAndBack},
	{"setShininess", &luna_wrapper_osg_Material::_bind_setShininess},
	{"getShininess", &luna_wrapper_osg_Material::_bind_getShininess},
	{"getShininessFrontAndBack", &luna_wrapper_osg_Material::_bind_getShininessFrontAndBack},
	{"setTransparency", &luna_wrapper_osg_Material::_bind_setTransparency},
	{"setAlpha", &luna_wrapper_osg_Material::_bind_setAlpha},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Material >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Material::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Material >::enumValues[] = {
	{"FRONT", osg::Material::FRONT},
	{"BACK", osg::Material::BACK},
	{"FRONT_AND_BACK", osg::Material::FRONT_AND_BACK},
	{"AMBIENT", osg::Material::AMBIENT},
	{"DIFFUSE", osg::Material::DIFFUSE},
	{"SPECULAR", osg::Material::SPECULAR},
	{"EMISSION", osg::Material::EMISSION},
	{"AMBIENT_AND_DIFFUSE", osg::Material::AMBIENT_AND_DIFFUSE},
	{"OFF", osg::Material::OFF},
	{0,0}
};

