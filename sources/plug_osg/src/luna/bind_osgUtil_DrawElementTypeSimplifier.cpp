#include <plug_common.h>

class luna_wrapper_osgUtil_DrawElementTypeSimplifier {
public:
	typedef Luna< osgUtil::DrawElementTypeSimplifier > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96401270) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::DrawElementTypeSimplifier*)");
		}

		osgUtil::DrawElementTypeSimplifier* rhs =(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,2));
		osgUtil::DrawElementTypeSimplifier* self=(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,1));
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

		osgUtil::DrawElementTypeSimplifier* self=(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::DrawElementTypeSimplifier");
		
		return luna_dynamicCast(L,converters,"osgUtil::DrawElementTypeSimplifier",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_simplify(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void osgUtil::DrawElementTypeSimplifier::simplify(osg::Geometry & geometry) const
	static int _bind_simplify(lua_State *L) {
		if (!_lg_typecheck_simplify(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::DrawElementTypeSimplifier::simplify(osg::Geometry & geometry) const function, expected prototype:\nvoid osgUtil::DrawElementTypeSimplifier::simplify(osg::Geometry & geometry) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* geometry_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !geometry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geometry in osgUtil::DrawElementTypeSimplifier::simplify function");
		}
		osg::Geometry & geometry=*geometry_ptr;

		osgUtil::DrawElementTypeSimplifier* self=(Luna< osgUtil::DrawElementTypeSimplifier >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::DrawElementTypeSimplifier::simplify(osg::Geometry &) const");
		}
		self->simplify(geometry);

		return 0;
	}


	// Operator binds:

};

osgUtil::DrawElementTypeSimplifier* LunaTraits< osgUtil::DrawElementTypeSimplifier >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::DrawElementTypeSimplifier >::_bind_dtor(osgUtil::DrawElementTypeSimplifier* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::DrawElementTypeSimplifier >::className[] = "DrawElementTypeSimplifier";
const char LunaTraits< osgUtil::DrawElementTypeSimplifier >::fullName[] = "osgUtil::DrawElementTypeSimplifier";
const char LunaTraits< osgUtil::DrawElementTypeSimplifier >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::DrawElementTypeSimplifier >::parents[] = {0};
const int LunaTraits< osgUtil::DrawElementTypeSimplifier >::hash = 96401270;
const int LunaTraits< osgUtil::DrawElementTypeSimplifier >::uniqueIDs[] = {96401270,0};

luna_RegType LunaTraits< osgUtil::DrawElementTypeSimplifier >::methods[] = {
	{"simplify", &luna_wrapper_osgUtil_DrawElementTypeSimplifier::_bind_simplify},
	{"dynCast", &luna_wrapper_osgUtil_DrawElementTypeSimplifier::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_DrawElementTypeSimplifier::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DrawElementTypeSimplifier >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DrawElementTypeSimplifier >::enumValues[] = {
	{0,0}
};


