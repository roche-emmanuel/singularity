#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_sgt_SetIterator_sgtPtr_sgt_Task {
public:
	typedef Luna< sgt::SetIterator< sgtPtr< sgt::Task > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25781455) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::SetIterator< sgtPtr< sgt::Task > >*)");
		}

		sgt::SetIterator< sgtPtr< sgt::Task > >* rhs =(Luna< sgt::SetIterator< sgtPtr< sgt::Task > > >::check(L,2));
		sgt::SetIterator< sgtPtr< sgt::Task > >* self=(Luna< sgt::SetIterator< sgtPtr< sgt::Task > > >::check(L,1));
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

		sgt::SetIterator< sgtPtr< sgt::Task > >* self=(Luna< sgt::SetIterator< sgtPtr< sgt::Task > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::SetIterator< sgtPtr< sgt::Task > >");
		
		return luna_dynamicCast(L,converters,"sgt::SetIterator< sgtPtr< sgt::Task > >",name);
	}

};

sgt::SetIterator< sgtPtr< sgt::Task > >* LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::_bind_ctor(lua_State *L) {
	return new sgt::SetIterator< sgtPtr< sgt::Task > >();
}

void LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::_bind_dtor(sgt::SetIterator< sgtPtr< sgt::Task > >* obj) {
	delete obj;
}

const char LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::className[] = "sgt_SetIterator_sgtPtr_sgt_Task";
const char LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::fullName[] = "sgt::SetIterator< sgtPtr< sgt::Task > >";
const char LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::moduleName[] = "land";
const char* LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::parents[] = {0};
const int LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::hash = 25781455;
const int LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::uniqueIDs[] = {25781455,0};

luna_RegType LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::methods[] = {
	{"dynCast", &luna_wrapper_sgt_SetIterator_sgtPtr_sgt_Task::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_SetIterator_sgtPtr_sgt_Task::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > >::enumValues[] = {
	{0,0}
};


