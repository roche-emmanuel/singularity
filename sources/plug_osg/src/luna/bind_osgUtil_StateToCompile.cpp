#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_StateToCompile.h>

class luna_wrapper_osgUtil_StateToCompile {
public:
	typedef Luna< osgUtil::StateToCompile > luna_t;

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
		//osgUtil::StateToCompile* ptr= dynamic_cast< osgUtil::StateToCompile* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::StateToCompile* ptr= luna_caster< osg::Referenced, osgUtil::StateToCompile >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::StateToCompile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::StateToCompile::StateToCompile(unsigned int mode)
	static osgUtil::StateToCompile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::StateToCompile(unsigned int mode) function, expected prototype:\nosgUtil::StateToCompile::StateToCompile(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);

		return new osgUtil::StateToCompile(mode);
	}

	// osgUtil::StateToCompile::StateToCompile(lua_Table * data, unsigned int mode)
	static osgUtil::StateToCompile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::StateToCompile(lua_Table * data, unsigned int mode) function, expected prototype:\nosgUtil::StateToCompile::StateToCompile(lua_Table * data, unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osgUtil_StateToCompile(L,NULL, mode);
	}

	// Overload binder for osgUtil::StateToCompile::StateToCompile
	static osgUtil::StateToCompile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StateToCompile, cannot match any of the overloads for function StateToCompile:\n  StateToCompile(unsigned int)\n  StateToCompile(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// bool osgUtil::StateToCompile::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::StateToCompile::empty() const function, expected prototype:\nbool osgUtil::StateToCompile::empty() const\nClass arguments details:\n");
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::StateToCompile::empty() const");
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::StateToCompile::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::Drawable & drawable)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* drawable_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::StateToCompile::apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Drawable &)");
		}
		self->apply(drawable);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::StateSet & stateset)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::StateSet & stateset) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::StateSet & stateset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateset_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osgUtil::StateToCompile::apply function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::StateSet &)");
		}
		self->apply(stateset);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::Texture & texture)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Texture & texture) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Texture & texture)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osgUtil::StateToCompile::apply function");
		}
		osg::Texture & texture=*texture_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Texture &)");
		}
		self->apply(texture);

		return 0;
	}

	// Overload binder for osgUtil::StateToCompile::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Drawable &)\n  apply(osg::StateSet &)\n  apply(osg::Texture &)\n");
		return 0;
	}

	// const char * osgUtil::StateToCompile::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StateToCompile::base_libraryName() const function, expected prototype:\nconst char * osgUtil::StateToCompile::base_libraryName() const\nClass arguments details:\n");
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::StateToCompile::base_libraryName() const");
		}
		const char * lret = self->StateToCompile::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::StateToCompile::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::StateToCompile::base_className() const function, expected prototype:\nconst char * osgUtil::StateToCompile::base_className() const\nClass arguments details:\n");
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::StateToCompile::base_className() const");
		}
		const char * lret = self->StateToCompile::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::StateToCompile::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_reset() function, expected prototype:\nvoid osgUtil::StateToCompile::base_reset()\nClass arguments details:\n");
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_reset()");
		}
		self->StateToCompile::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::StateToCompile::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::StateToCompile::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::StateToCompile::base_getEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StateToCompile::base_getEyePoint() const");
		}
		osg::Vec3f stack_lret = self->StateToCompile::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::StateToCompile::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::StateToCompile::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::StateToCompile::base_getViewPoint() const\nClass arguments details:\n");
		}


		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::StateToCompile::base_getViewPoint() const");
		}
		osg::Vec3f stack_lret = self->StateToCompile::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::StateToCompile::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::StateToCompile::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StateToCompile::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StateToCompile::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::StateToCompile::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->StateToCompile::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::StateToCompile::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::StateToCompile::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StateToCompile::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StateToCompile::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::StateToCompile::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->StateToCompile::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::StateToCompile::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::StateToCompile::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::StateToCompile::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::StateToCompile::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::StateToCompile::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->StateToCompile::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::StateToCompile::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::Node &)");
		}
		self->StateToCompile::apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::base_apply(osg::Geode & node)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::base_apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::Geode &)");
		}
		self->StateToCompile::apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::base_apply(osg::Drawable & drawable)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* drawable_ptr=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::StateToCompile::base_apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::Drawable &)");
		}
		self->StateToCompile::apply(drawable);

		return 0;
	}

	// void osgUtil::StateToCompile::base_apply(osg::StateSet & stateset)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::StateSet & stateset) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::StateSet & stateset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateset_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osgUtil::StateToCompile::base_apply function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::StateSet &)");
		}
		self->StateToCompile::apply(stateset);

		return 0;
	}

	// void osgUtil::StateToCompile::base_apply(osg::Texture & texture)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::base_apply(osg::Texture & texture) function, expected prototype:\nvoid osgUtil::StateToCompile::base_apply(osg::Texture & texture)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture* texture_ptr=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osgUtil::StateToCompile::base_apply function");
		}
		osg::Texture & texture=*texture_ptr;

		osgUtil::StateToCompile* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateToCompile >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::base_apply(osg::Texture &)");
		}
		self->StateToCompile::apply(texture);

		return 0;
	}

	// Overload binder for osgUtil::StateToCompile::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);
		if (_lg_typecheck_base_apply_overload_4(L)) return _bind_base_apply_overload_4(L);
		if (_lg_typecheck_base_apply_overload_5(L)) return _bind_base_apply_overload_5(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Geode &)\n  base_apply(osg::Drawable &)\n  base_apply(osg::StateSet &)\n  base_apply(osg::Texture &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::StateToCompile* LunaTraits< osgUtil::StateToCompile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_StateToCompile::_bind_ctor(L);
}

void LunaTraits< osgUtil::StateToCompile >::_bind_dtor(osgUtil::StateToCompile* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::StateToCompile >::className[] = "StateToCompile";
const char LunaTraits< osgUtil::StateToCompile >::fullName[] = "osgUtil::StateToCompile";
const char LunaTraits< osgUtil::StateToCompile >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StateToCompile >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::StateToCompile >::hash = 49506188;
const int LunaTraits< osgUtil::StateToCompile >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::StateToCompile >::methods[] = {
	{"empty", &luna_wrapper_osgUtil_StateToCompile::_bind_empty},
	{"apply", &luna_wrapper_osgUtil_StateToCompile::_bind_apply},
	{"base_libraryName", &luna_wrapper_osgUtil_StateToCompile::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_StateToCompile::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_StateToCompile::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_StateToCompile::_bind_base_getDistanceToViewPoint},
	{"base_apply", &luna_wrapper_osgUtil_StateToCompile::_bind_base_apply},
	{"__eq", &luna_wrapper_osgUtil_StateToCompile::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StateToCompile >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_StateToCompile::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StateToCompile >::enumValues[] = {
	{0,0}
};


