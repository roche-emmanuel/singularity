#include <plug_common.h>

class luna_wrapper_osgUtil_PlaneIntersector_Intersection {
public:
	typedef Luna< osgUtil::PlaneIntersector::Intersection > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,761678) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::PlaneIntersector::Intersection*)");
		}

		osgUtil::PlaneIntersector::Intersection* rhs =(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,2));
		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PlaneIntersector::Intersection");
		
		return luna_dynamicCast(L,converters,"osgUtil::PlaneIntersector::Intersection",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,761678) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::PlaneIntersector::Intersection::Intersection()
	static osgUtil::PlaneIntersector::Intersection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PlaneIntersector::Intersection::Intersection() function, expected prototype:\nosgUtil::PlaneIntersector::Intersection::Intersection()\nClass arguments details:\n");
		}


		return new osgUtil::PlaneIntersector::Intersection();
	}


	// Function binds:

	// Operator binds:
	// bool osgUtil::PlaneIntersector::Intersection::operator<(const osgUtil::PlaneIntersector::Intersection & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::PlaneIntersector::Intersection::operator<(const osgUtil::PlaneIntersector::Intersection & rhs) const function, expected prototype:\nbool osgUtil::PlaneIntersector::Intersection::operator<(const osgUtil::PlaneIntersector::Intersection & rhs) const\nClass arguments details:\narg 1 ID = 761678\n");
		}

		const osgUtil::PlaneIntersector::Intersection* rhs_ptr=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::PlaneIntersector::Intersection::operator< function");
		}
		const osgUtil::PlaneIntersector::Intersection & rhs=*rhs_ptr;

		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::PlaneIntersector::Intersection::operator<(const osgUtil::PlaneIntersector::Intersection &) const. Got : '%s'",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::PlaneIntersector::Intersection* LunaTraits< osgUtil::PlaneIntersector::Intersection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::PlaneIntersector::Intersection >::_bind_dtor(osgUtil::PlaneIntersector::Intersection* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PlaneIntersector::Intersection >::className[] = "PlaneIntersector_Intersection";
const char LunaTraits< osgUtil::PlaneIntersector::Intersection >::fullName[] = "osgUtil::PlaneIntersector::Intersection";
const char LunaTraits< osgUtil::PlaneIntersector::Intersection >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PlaneIntersector::Intersection >::parents[] = {0};
const int LunaTraits< osgUtil::PlaneIntersector::Intersection >::hash = 761678;
const int LunaTraits< osgUtil::PlaneIntersector::Intersection >::uniqueIDs[] = {761678,0};

luna_RegType LunaTraits< osgUtil::PlaneIntersector::Intersection >::methods[] = {
	{"__lt", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind___lt},
	{"dynCast", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PlaneIntersector::Intersection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PlaneIntersector::Intersection >::enumValues[] = {
	{0,0}
};


