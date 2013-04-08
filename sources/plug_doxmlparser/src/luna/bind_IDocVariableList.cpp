#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocVariableList.h>

class luna_wrapper_IDocVariableList {
public:
	typedef Luna< IDocVariableList > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IDoc,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2243631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDoc*)");
		}

		IDoc* rhs =(Luna< IDoc >::check(L,2));
		IDoc* self=(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		IDocVariableList* self= (IDocVariableList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocVariableList >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2243631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< IDoc >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_IDoc(lua_State *L) {
		// all checked are already performed before reaching this point.
		//IDocVariableList* ptr= dynamic_cast< IDocVariableList* >(Luna< IDoc >::check(L,1));
		IDocVariableList* ptr= luna_caster< IDoc, IDocVariableList >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocVariableList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_entries(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocVariableList::IDocVariableList(lua_Table * data)
	static IDocVariableList* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IDocVariableList::IDocVariableList(lua_Table * data) function, expected prototype:\nIDocVariableList::IDocVariableList(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_IDocVariableList(L,NULL);
	}


	// Function binds:
	// IDocIterator * IDocVariableList::entries() const
	static int _bind_entries(lua_State *L) {
		if (!_lg_typecheck_entries(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocVariableList::entries() const function, expected prototype:\nIDocIterator * IDocVariableList::entries() const\nClass arguments details:\n");
		}


		IDocVariableList* self=Luna< IDoc >::checkSubType< IDocVariableList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call IDocIterator * IDocVariableList::entries() const. Got : '%s'",typeid(Luna< IDoc >::check(L,1)).name());
		}
		IDocIterator * lret = self->entries();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocVariableList* LunaTraits< IDocVariableList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocVariableList::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocIterator * IDocVariableList::entries() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocVariableList >::_bind_dtor(IDocVariableList* obj) {
	delete obj;
}

const char LunaTraits< IDocVariableList >::className[] = "IDocVariableList";
const char LunaTraits< IDocVariableList >::fullName[] = "IDocVariableList";
const char LunaTraits< IDocVariableList >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocVariableList >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocVariableList >::hash = 66824839;
const int LunaTraits< IDocVariableList >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocVariableList >::methods[] = {
	{"entries", &luna_wrapper_IDocVariableList::_bind_entries},
	{"__eq", &luna_wrapper_IDocVariableList::_bind___eq},
	{"fromVoid", &luna_wrapper_IDocVariableList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocVariableList::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocVariableList::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocVariableList >::converters[] = {
	{"IDoc", &luna_wrapper_IDocVariableList::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocVariableList >::enumValues[] = {
	{0,0}
};


