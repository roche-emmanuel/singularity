#include <plug_common.h>

#include <luna/wrappers/wrapper_IDocTable.h>

class luna_wrapper_IDocTable {
public:
	typedef Luna< IDocTable > luna_t;

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
		
		return self==rhs;
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

		IDocTable* self= (IDocTable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDocTable >::push(L,self,false);
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
		//IDocTable* ptr= dynamic_cast< IDocTable* >(Luna< IDoc >::check(L,1));
		IDocTable* ptr= luna_caster< IDoc, IDocTable >::cast(Luna< IDoc >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< IDocTable >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_rows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_numColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_caption(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDocTable::IDocTable(lua_Table * data)
	static IDocTable* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IDocTable::IDocTable(lua_Table * data) function, expected prototype:\nIDocTable::IDocTable(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_IDocTable(L,NULL);
	}


	// Function binds:
	// IDocIterator * IDocTable::rows() const
	static int _bind_rows(lua_State *L) {
		if (!_lg_typecheck_rows(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IDocIterator * IDocTable::rows() const function, expected prototype:\nIDocIterator * IDocTable::rows() const\nClass arguments details:\n");
		}


		IDocTable* self=Luna< IDoc >::checkSubType< IDocTable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call IDocIterator * IDocTable::rows() const. Got : '%s'",typeid(Luna< IDoc >::check(L,1)).name());
		}
		IDocIterator * lret = self->rows();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDocIterator >::push(L,lret,false);

		return 1;
	}

	// int IDocTable::numColumns() const
	static int _bind_numColumns(lua_State *L) {
		if (!_lg_typecheck_numColumns(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int IDocTable::numColumns() const function, expected prototype:\nint IDocTable::numColumns() const\nClass arguments details:\n");
		}


		IDocTable* self=Luna< IDoc >::checkSubType< IDocTable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int IDocTable::numColumns() const. Got : '%s'",typeid(Luna< IDoc >::check(L,1)).name());
		}
		int lret = self->numColumns();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const IString * IDocTable::caption() const
	static int _bind_caption(lua_State *L) {
		if (!_lg_typecheck_caption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const IString * IDocTable::caption() const function, expected prototype:\nconst IString * IDocTable::caption() const\nClass arguments details:\n");
		}


		IDocTable* self=Luna< IDoc >::checkSubType< IDocTable >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const IString * IDocTable::caption() const. Got : '%s'",typeid(Luna< IDoc >::check(L,1)).name());
		}
		const IString * lret = self->caption();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IString >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDocTable* LunaTraits< IDocTable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDocTable::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// IDocIterator * IDocTable::rows() const
	// int IDocTable::numColumns() const
	// const IString * IDocTable::caption() const
	// IDoc::Kind IDoc::kind() const
}

void LunaTraits< IDocTable >::_bind_dtor(IDocTable* obj) {
	delete obj;
}

const char LunaTraits< IDocTable >::className[] = "IDocTable";
const char LunaTraits< IDocTable >::fullName[] = "IDocTable";
const char LunaTraits< IDocTable >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDocTable >::parents[] = {"doxmlparser.IDoc", 0};
const int LunaTraits< IDocTable >::hash = 27379281;
const int LunaTraits< IDocTable >::uniqueIDs[] = {2243631,0};

luna_RegType LunaTraits< IDocTable >::methods[] = {
	{"rows", &luna_wrapper_IDocTable::_bind_rows},
	{"numColumns", &luna_wrapper_IDocTable::_bind_numColumns},
	{"caption", &luna_wrapper_IDocTable::_bind_caption},
	{"__eq", &luna_wrapper_IDocTable::_bind___eq},
	{"fromVoid", &luna_wrapper_IDocTable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDocTable::_bind_asVoid},
	{"getTable", &luna_wrapper_IDocTable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDocTable >::converters[] = {
	{"IDoc", &luna_wrapper_IDocTable::_cast_from_IDoc},
	{0,0}
};

luna_RegEnumType LunaTraits< IDocTable >::enumValues[] = {
	{0,0}
};


