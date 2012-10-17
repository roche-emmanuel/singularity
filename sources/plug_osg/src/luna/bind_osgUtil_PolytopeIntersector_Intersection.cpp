#include <plug_common.h>

class luna_wrapper_osgUtil_PolytopeIntersector_Intersection {
public:
	typedef Luna< osgUtil::PolytopeIntersector::Intersection > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31087672) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::PolytopeIntersector::Intersection*)");
		}

		osgUtil::PolytopeIntersector::Intersection* rhs =(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,2));
		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
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

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PolytopeIntersector::Intersection");
		
		return luna_dynamicCast(L,converters,"osgUtil::PolytopeIntersector::Intersection",name);
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

		if( !Luna<void>::has_uniqueid(L,2,31087672) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::PolytopeIntersector::Intersection::Intersection()
	static osgUtil::PolytopeIntersector::Intersection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::Intersection::Intersection() function, expected prototype:\nosgUtil::PolytopeIntersector::Intersection::Intersection()\nClass arguments details:\n");
		}


		return new osgUtil::PolytopeIntersector::Intersection();
	}


	// Function binds:

	// Operator binds:
	// bool osgUtil::PolytopeIntersector::Intersection::operator<(const osgUtil::PolytopeIntersector::Intersection & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::PolytopeIntersector::Intersection::operator<(const osgUtil::PolytopeIntersector::Intersection & rhs) const function, expected prototype:\nbool osgUtil::PolytopeIntersector::Intersection::operator<(const osgUtil::PolytopeIntersector::Intersection & rhs) const\nClass arguments details:\narg 1 ID = 31087672\n");
		}

		const osgUtil::PolytopeIntersector::Intersection* rhs_ptr=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::PolytopeIntersector::Intersection::operator< function");
		}
		const osgUtil::PolytopeIntersector::Intersection & rhs=*rhs_ptr;

		osgUtil::PolytopeIntersector::Intersection* self=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::PolytopeIntersector::Intersection::operator<(const osgUtil::PolytopeIntersector::Intersection &) const");
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::PolytopeIntersector::Intersection* LunaTraits< osgUtil::PolytopeIntersector::Intersection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_ctor(L);
}

void LunaTraits< osgUtil::PolytopeIntersector::Intersection >::_bind_dtor(osgUtil::PolytopeIntersector::Intersection* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PolytopeIntersector::Intersection >::className[] = "Intersection";
const char LunaTraits< osgUtil::PolytopeIntersector::Intersection >::fullName[] = "osgUtil::PolytopeIntersector::Intersection";
const char LunaTraits< osgUtil::PolytopeIntersector::Intersection >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PolytopeIntersector::Intersection >::parents[] = {0};
const int LunaTraits< osgUtil::PolytopeIntersector::Intersection >::hash = 31087672;
const int LunaTraits< osgUtil::PolytopeIntersector::Intersection >::uniqueIDs[] = {31087672,0};

luna_RegType LunaTraits< osgUtil::PolytopeIntersector::Intersection >::methods[] = {
	{"__lt", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind___lt},
	{"dynCast", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_PolytopeIntersector_Intersection::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PolytopeIntersector::Intersection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PolytopeIntersector::Intersection >::enumValues[] = {
	{"MaxNumIntesectionPoints", osgUtil::PolytopeIntersector::Intersection::MaxNumIntesectionPoints},
	{0,0}
};


