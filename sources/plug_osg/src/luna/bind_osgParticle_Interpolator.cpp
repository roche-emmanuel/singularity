#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Interpolator.h>

class luna_wrapper_osgParticle_Interpolator {
public:
	typedef Luna< osgParticle::Interpolator > luna_t;

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
		osgParticle::Interpolator* ptr= dynamic_cast< osgParticle::Interpolator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Interpolator >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (!dynamic_cast< osg::Vec2f* >(Luna< osg::Vec2f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303173) ) return false;
		if( (!dynamic_cast< osg::Vec2f* >(Luna< osg::Vec2f >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!dynamic_cast< osg::Vec4f* >(Luna< osg::Vec4f >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303235) ) return false;
		if( (!dynamic_cast< osg::Vec4f* >(Luna< osg::Vec4f >::check(L,4))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::Interpolator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Interpolator::libraryName() const function, expected prototype:\nconst char * osgParticle::Interpolator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::Interpolator* self=dynamic_cast< osgParticle::Interpolator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Interpolator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Interpolator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Interpolator::className() const function, expected prototype:\nconst char * osgParticle::Interpolator::className() const\nClass arguments details:\n");
		}


		osgParticle::Interpolator* self=dynamic_cast< osgParticle::Interpolator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Interpolator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Interpolator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Interpolator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Interpolator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::Interpolator* self=dynamic_cast< osgParticle::Interpolator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Interpolator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float osgParticle::Interpolator::interpolate(float t, float y1, float y2) const
	static int _bind_interpolate_overload_1(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgParticle::Interpolator::interpolate(float t, float y1, float y2) const function, expected prototype:\nfloat osgParticle::Interpolator::interpolate(float t, float y1, float y2) const\nClass arguments details:\n");
		}

		float t=(float)lua_tonumber(L,2);
		float y1=(float)lua_tonumber(L,3);
		float y2=(float)lua_tonumber(L,4);

		osgParticle::Interpolator* self=dynamic_cast< osgParticle::Interpolator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgParticle::Interpolator::interpolate(float, float, float) const");
		}
		float lret = self->interpolate(t, y1, y2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec2f osgParticle::Interpolator::interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const
	static int _bind_interpolate_overload_2(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2f osgParticle::Interpolator::interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const function, expected prototype:\nosg::Vec2f osgParticle::Interpolator::interpolate(float t, const osg::Vec2f & y1, const osg::Vec2f & y2) const\nClass arguments details:\narg 2 ID = 92303173\narg 3 ID = 92303173\n");
		}

		float t=(float)lua_tonumber(L,2);
		const osg::Vec2f* y1_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec2f & y1=*y1_ptr;
		const osg::Vec2f* y2_ptr=(Luna< osg::Vec2f >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec2f & y2=*y2_ptr;

		osgParticle::Interpolator* self=dynamic_cast< osgParticle::Interpolator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec2f osgParticle::Interpolator::interpolate(float, const osg::Vec2f &, const osg::Vec2f &) const");
		}
		osg::Vec2f stack_lret = self->interpolate(t, y1, y2);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgParticle::Interpolator::interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const
	static int _bind_interpolate_overload_3(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgParticle::Interpolator::interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const function, expected prototype:\nosg::Vec3f osgParticle::Interpolator::interpolate(float t, const osg::Vec3f & y1, const osg::Vec3f & y2) const\nClass arguments details:\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
		}

		float t=(float)lua_tonumber(L,2);
		const osg::Vec3f* y1_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec3f & y1=*y1_ptr;
		const osg::Vec3f* y2_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec3f & y2=*y2_ptr;

		osgParticle::Interpolator* self=dynamic_cast< osgParticle::Interpolator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgParticle::Interpolator::interpolate(float, const osg::Vec3f &, const osg::Vec3f &) const");
		}
		osg::Vec3f stack_lret = self->interpolate(t, y1, y2);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osgParticle::Interpolator::interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const
	static int _bind_interpolate_overload_4(lua_State *L) {
		if (!_lg_typecheck_interpolate_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4f osgParticle::Interpolator::interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const function, expected prototype:\nosg::Vec4f osgParticle::Interpolator::interpolate(float t, const osg::Vec4f & y1, const osg::Vec4f & y2) const\nClass arguments details:\narg 2 ID = 92303235\narg 3 ID = 92303235\n");
		}

		float t=(float)lua_tonumber(L,2);
		const osg::Vec4f* y1_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !y1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y1 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec4f & y1=*y1_ptr;
		const osg::Vec4f* y2_ptr=(Luna< osg::Vec4f >::check(L,4));
		if( !y2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg y2 in osgParticle::Interpolator::interpolate function");
		}
		const osg::Vec4f & y2=*y2_ptr;

		osgParticle::Interpolator* self=dynamic_cast< osgParticle::Interpolator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec4f osgParticle::Interpolator::interpolate(float, const osg::Vec4f &, const osg::Vec4f &) const");
		}
		osg::Vec4f stack_lret = self->interpolate(t, y1, y2);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgParticle::Interpolator::interpolate
	static int _bind_interpolate(lua_State *L) {
		if (_lg_typecheck_interpolate_overload_1(L)) return _bind_interpolate_overload_1(L);
		if (_lg_typecheck_interpolate_overload_2(L)) return _bind_interpolate_overload_2(L);
		if (_lg_typecheck_interpolate_overload_3(L)) return _bind_interpolate_overload_3(L);
		if (_lg_typecheck_interpolate_overload_4(L)) return _bind_interpolate_overload_4(L);

		luaL_error(L, "error in function interpolate, cannot match any of the overloads for function interpolate:\n  interpolate(float, float, float)\n  interpolate(float, const osg::Vec2f &, const osg::Vec2f &)\n  interpolate(float, const osg::Vec3f &, const osg::Vec3f &)\n  interpolate(float, const osg::Vec4f &, const osg::Vec4f &)\n");
		return 0;
	}


	// Operator binds:

};

osgParticle::Interpolator* LunaTraits< osgParticle::Interpolator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// float osgParticle::Interpolator::interpolate(float t, float y1, float y2) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::Interpolator >::_bind_dtor(osgParticle::Interpolator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Interpolator >::className[] = "Interpolator";
const char LunaTraits< osgParticle::Interpolator >::fullName[] = "osgParticle::Interpolator";
const char LunaTraits< osgParticle::Interpolator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Interpolator >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Interpolator >::hash = 41745010;
const int LunaTraits< osgParticle::Interpolator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Interpolator >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Interpolator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Interpolator::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Interpolator::_bind_isSameKindAs},
	{"interpolate", &luna_wrapper_osgParticle_Interpolator::_bind_interpolate},
	{"__eq", &luna_wrapper_osgParticle_Interpolator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Interpolator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Interpolator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Interpolator >::enumValues[] = {
	{0,0}
};


