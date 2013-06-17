#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_UniformMatrix_ork_MAT2D_double_2_2_ork_uniformMatrix2d_valueMatrix2d {
public:
	typedef Luna< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20431084) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >* rhs =(Luna< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::check(L,2));
		ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >* self=(Luna< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >* self=(Luna< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >");
		
		return luna_dynamicCast(L,converters,"ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >",name);
	}

};

ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >* LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::_bind_dtor(ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >* obj) {
	delete obj;
}

const char LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::className[] = "ork_UniformMatrix_ork_MAT2D_double_2_2_ork_uniformMatrix2d_valueMatrix2d";
const char LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::fullName[] = "ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d >";
const char LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::moduleName[] = "proland";
const char* LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::parents[] = {0};
const int LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::hash = 20431084;
const int LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::uniqueIDs[] = {20431084,0};

luna_RegType LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_UniformMatrix_ork_MAT2D_double_2_2_ork_uniformMatrix2d_valueMatrix2d::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_UniformMatrix_ork_MAT2D_double_2_2_ork_uniformMatrix2d_valueMatrix2d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::UniformMatrix< ork::MAT2D, double, 2, 2, ork::uniformMatrix2d, valueMatrix2d > >::enumValues[] = {
	{0,0}
};


