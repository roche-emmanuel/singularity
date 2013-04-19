#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sgtPtr_sgt_Deformation {
public:
	typedef Luna< sgtPtr< sgt::Deformation > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6233128) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgtPtr< sgt::Deformation >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgtPtr< sgt::Deformation >* rhs =(Luna< sgtPtr< sgt::Deformation > >::check(L,2));
		sgtPtr< sgt::Deformation >* self=(Luna< sgtPtr< sgt::Deformation > >::check(L,1));
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

		sgtPtr< sgt::Deformation >* self=(Luna< sgtPtr< sgt::Deformation > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgtPtr< sgt::Deformation >");
		
		return luna_dynamicCast(L,converters,"sgtPtr< sgt::Deformation >",name);
	}

};

sgtPtr< sgt::Deformation >* LunaTraits< sgtPtr< sgt::Deformation > >::_bind_ctor(lua_State *L) {
	return new sgtPtr< sgt::Deformation >();
}

void LunaTraits< sgtPtr< sgt::Deformation > >::_bind_dtor(sgtPtr< sgt::Deformation >* obj) {
	delete obj;
}

const char LunaTraits< sgtPtr< sgt::Deformation > >::className[] = "sgtPtr_sgt_Deformation";
const char LunaTraits< sgtPtr< sgt::Deformation > >::fullName[] = "sgtPtr< sgt::Deformation >";
const char LunaTraits< sgtPtr< sgt::Deformation > >::moduleName[] = "land";
const char* LunaTraits< sgtPtr< sgt::Deformation > >::parents[] = {0};
const int LunaTraits< sgtPtr< sgt::Deformation > >::hash = 6233128;
const int LunaTraits< sgtPtr< sgt::Deformation > >::uniqueIDs[] = {6233128,0};

luna_RegType LunaTraits< sgtPtr< sgt::Deformation > >::methods[] = {
	{"dynCast", &luna_wrapper_sgtPtr_sgt_Deformation::_bind_dynCast},
	{"__eq", &luna_wrapper_sgtPtr_sgt_Deformation::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sgtPtr< sgt::Deformation > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgtPtr< sgt::Deformation > >::enumValues[] = {
	{0,0}
};


