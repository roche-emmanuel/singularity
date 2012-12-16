#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_KdTreeBuilder.h>

class luna_wrapper_osg_KdTreeBuilder {
public:
	typedef Luna< osg::KdTreeBuilder > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osg::KdTreeBuilder* ptr= dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1));
		osg::KdTreeBuilder* ptr= luna_caster< osg::Referenced, osg::KdTreeBuilder >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::KdTreeBuilder >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::KdTreeBuilder* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::KdTreeBuilder::KdTreeBuilder()
	static osg::KdTreeBuilder* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder() function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder()\nClass arguments details:\n");
		}


		return new osg::KdTreeBuilder();
	}

	// osg::KdTreeBuilder::KdTreeBuilder(const osg::KdTreeBuilder & rhs)
	static osg::KdTreeBuilder* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder(const osg::KdTreeBuilder & rhs) function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder(const osg::KdTreeBuilder & rhs)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::KdTreeBuilder* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTreeBuilder::KdTreeBuilder function");
		}
		const osg::KdTreeBuilder & rhs=*rhs_ptr;

		return new osg::KdTreeBuilder(rhs);
	}

	// osg::KdTreeBuilder::KdTreeBuilder(lua_Table * data)
	static osg::KdTreeBuilder* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder(lua_Table * data) function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_KdTreeBuilder(L,NULL);
	}

	// osg::KdTreeBuilder::KdTreeBuilder(lua_Table * data, const osg::KdTreeBuilder & rhs)
	static osg::KdTreeBuilder* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder::KdTreeBuilder(lua_Table * data, const osg::KdTreeBuilder & rhs) function, expected prototype:\nosg::KdTreeBuilder::KdTreeBuilder(lua_Table * data, const osg::KdTreeBuilder & rhs)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		const osg::KdTreeBuilder* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTreeBuilder::KdTreeBuilder function");
		}
		const osg::KdTreeBuilder & rhs=*rhs_ptr;

		return new wrapper_osg_KdTreeBuilder(L,NULL, rhs);
	}

	// Overload binder for osg::KdTreeBuilder::KdTreeBuilder
	static osg::KdTreeBuilder* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function KdTreeBuilder, cannot match any of the overloads for function KdTreeBuilder:\n  KdTreeBuilder()\n  KdTreeBuilder(const osg::KdTreeBuilder &)\n  KdTreeBuilder(lua_Table *)\n  KdTreeBuilder(lua_Table *, const osg::KdTreeBuilder &)\n");
		return NULL;
	}


	// Function binds:
	// const char * osg::KdTreeBuilder::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::libraryName() const function, expected prototype:\nconst char * osg::KdTreeBuilder::libraryName() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::KdTreeBuilder::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::className() const function, expected prototype:\nconst char * osg::KdTreeBuilder::className() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::KdTreeBuilder * osg::KdTreeBuilder::clone()
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder * osg::KdTreeBuilder::clone() function, expected prototype:\nosg::KdTreeBuilder * osg::KdTreeBuilder::clone()\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTreeBuilder * osg::KdTreeBuilder::clone()");
		}
		osg::KdTreeBuilder * lret = self->clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTreeBuilder >::push(L,lret,false);

		return 1;
	}

	// void osg::KdTreeBuilder::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::apply(osg::Geode & geode) function, expected prototype:\nvoid osg::KdTreeBuilder::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osg::KdTreeBuilder::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// void osg::KdTreeBuilder::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::base_reset() function, expected prototype:\nvoid osg::KdTreeBuilder::base_reset()\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::base_reset()");
		}
		self->KdTreeBuilder::reset();

		return 0;
	}

	// osg::Vec3f osg::KdTreeBuilder::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::KdTreeBuilder::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osg::KdTreeBuilder::base_getEyePoint() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::KdTreeBuilder::base_getEyePoint() const");
		}
		osg::Vec3f stack_lret = self->KdTreeBuilder::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osg::KdTreeBuilder::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::KdTreeBuilder::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osg::KdTreeBuilder::base_getViewPoint() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::KdTreeBuilder::base_getViewPoint() const");
		}
		osg::Vec3f stack_lret = self->KdTreeBuilder::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osg::KdTreeBuilder::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::KdTreeBuilder::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::KdTreeBuilder::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTreeBuilder::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::KdTreeBuilder::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->KdTreeBuilder::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::KdTreeBuilder::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::KdTreeBuilder::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::KdTreeBuilder::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTreeBuilder::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::KdTreeBuilder::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->KdTreeBuilder::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::KdTreeBuilder::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::KdTreeBuilder::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osg::KdTreeBuilder::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::KdTreeBuilder::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::KdTreeBuilder::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->KdTreeBuilder::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osg::KdTreeBuilder::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::base_libraryName() const function, expected prototype:\nconst char * osg::KdTreeBuilder::base_libraryName() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::base_libraryName() const");
		}
		const char * lret = self->KdTreeBuilder::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::KdTreeBuilder::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::KdTreeBuilder::base_className() const function, expected prototype:\nconst char * osg::KdTreeBuilder::base_className() const\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::KdTreeBuilder::base_className() const");
		}
		const char * lret = self->KdTreeBuilder::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::KdTreeBuilder * osg::KdTreeBuilder::base_clone()
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::KdTreeBuilder * osg::KdTreeBuilder::base_clone() function, expected prototype:\nosg::KdTreeBuilder * osg::KdTreeBuilder::base_clone()\nClass arguments details:\n");
		}


		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::KdTreeBuilder * osg::KdTreeBuilder::base_clone()");
		}
		osg::KdTreeBuilder * lret = self->KdTreeBuilder::clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::KdTreeBuilder >::push(L,lret,false);

		return 1;
	}

	// void osg::KdTreeBuilder::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::KdTreeBuilder::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osg::KdTreeBuilder::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osg::KdTreeBuilder::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osg::KdTreeBuilder* self=Luna< osg::Referenced >::checkSubType< osg::KdTreeBuilder >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::KdTreeBuilder::base_apply(osg::Geode &)");
		}
		self->KdTreeBuilder::apply(geode);

		return 0;
	}


	// Operator binds:

};

osg::KdTreeBuilder* LunaTraits< osg::KdTreeBuilder >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTreeBuilder::_bind_ctor(L);
}

void LunaTraits< osg::KdTreeBuilder >::_bind_dtor(osg::KdTreeBuilder* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::KdTreeBuilder >::className[] = "KdTreeBuilder";
const char LunaTraits< osg::KdTreeBuilder >::fullName[] = "osg::KdTreeBuilder";
const char LunaTraits< osg::KdTreeBuilder >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTreeBuilder >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osg::KdTreeBuilder >::hash = 19461459;
const int LunaTraits< osg::KdTreeBuilder >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::KdTreeBuilder >::methods[] = {
	{"libraryName", &luna_wrapper_osg_KdTreeBuilder::_bind_libraryName},
	{"className", &luna_wrapper_osg_KdTreeBuilder::_bind_className},
	{"clone", &luna_wrapper_osg_KdTreeBuilder::_bind_clone},
	{"apply", &luna_wrapper_osg_KdTreeBuilder::_bind_apply},
	{"base_reset", &luna_wrapper_osg_KdTreeBuilder::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osg_KdTreeBuilder::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osg_KdTreeBuilder::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_KdTreeBuilder::_bind_base_className},
	{"base_clone", &luna_wrapper_osg_KdTreeBuilder::_bind_base_clone},
	{"base_apply", &luna_wrapper_osg_KdTreeBuilder::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_KdTreeBuilder::_bind___eq},
	{"getTable", &luna_wrapper_osg_KdTreeBuilder::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTreeBuilder >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_KdTreeBuilder::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTreeBuilder >::enumValues[] = {
	{0,0}
};


