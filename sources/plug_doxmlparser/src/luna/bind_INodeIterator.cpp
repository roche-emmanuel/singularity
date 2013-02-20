#include <plug_common.h>

#include <luna/wrappers/wrapper_INodeIterator.h>

class luna_wrapper_INodeIterator {
public:
	typedef Luna< INodeIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		INodeIterator* self=(Luna< INodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<INodeIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97822868) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(INodeIterator*)");
		}

		INodeIterator* rhs =(Luna< INodeIterator >::check(L,2));
		INodeIterator* self=(Luna< INodeIterator >::check(L,1));
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

		INodeIterator* self= (INodeIterator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< INodeIterator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97822868) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< INodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		INodeIterator* self=(Luna< INodeIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("INodeIterator");
		
		return luna_dynamicCast(L,converters,"INodeIterator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_toFirst(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toLast(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_toPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_current(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// INodeIterator::INodeIterator(lua_Table * data)
	static INodeIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in INodeIterator::INodeIterator(lua_Table * data) function, expected prototype:\nINodeIterator::INodeIterator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_INodeIterator(L,NULL);
	}


	// Function binds:
	// INode * INodeIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in INode * INodeIterator::toFirst() function, expected prototype:\nINode * INodeIterator::toFirst()\nClass arguments details:\n");
		}


		INodeIterator* self=(Luna< INodeIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call INode * INodeIterator::toFirst(). Got : '%s'",typeid(Luna< INodeIterator >::check(L,1)).name());
		}
		INode * lret = self->toFirst();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< INode >::push(L,lret,false);

		return 1;
	}

	// INode * INodeIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in INode * INodeIterator::toLast() function, expected prototype:\nINode * INodeIterator::toLast()\nClass arguments details:\n");
		}


		INodeIterator* self=(Luna< INodeIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call INode * INodeIterator::toLast(). Got : '%s'",typeid(Luna< INodeIterator >::check(L,1)).name());
		}
		INode * lret = self->toLast();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< INode >::push(L,lret,false);

		return 1;
	}

	// INode * INodeIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in INode * INodeIterator::toNext() function, expected prototype:\nINode * INodeIterator::toNext()\nClass arguments details:\n");
		}


		INodeIterator* self=(Luna< INodeIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call INode * INodeIterator::toNext(). Got : '%s'",typeid(Luna< INodeIterator >::check(L,1)).name());
		}
		INode * lret = self->toNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< INode >::push(L,lret,false);

		return 1;
	}

	// INode * INodeIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in INode * INodeIterator::toPrev() function, expected prototype:\nINode * INodeIterator::toPrev()\nClass arguments details:\n");
		}


		INodeIterator* self=(Luna< INodeIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call INode * INodeIterator::toPrev(). Got : '%s'",typeid(Luna< INodeIterator >::check(L,1)).name());
		}
		INode * lret = self->toPrev();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< INode >::push(L,lret,false);

		return 1;
	}

	// INode * INodeIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in INode * INodeIterator::current() const function, expected prototype:\nINode * INodeIterator::current() const\nClass arguments details:\n");
		}


		INodeIterator* self=(Luna< INodeIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call INode * INodeIterator::current() const. Got : '%s'",typeid(Luna< INodeIterator >::check(L,1)).name());
		}
		INode * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< INode >::push(L,lret,false);

		return 1;
	}

	// void INodeIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void INodeIterator::release() function, expected prototype:\nvoid INodeIterator::release()\nClass arguments details:\n");
		}


		INodeIterator* self=(Luna< INodeIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void INodeIterator::release(). Got : '%s'",typeid(Luna< INodeIterator >::check(L,1)).name());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

INodeIterator* LunaTraits< INodeIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_INodeIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// INode * INodeIterator::toFirst()
	// INode * INodeIterator::toLast()
	// INode * INodeIterator::toNext()
	// INode * INodeIterator::toPrev()
	// INode * INodeIterator::current() const
	// void INodeIterator::release()
}

void LunaTraits< INodeIterator >::_bind_dtor(INodeIterator* obj) {
	delete obj;
}

const char LunaTraits< INodeIterator >::className[] = "INodeIterator";
const char LunaTraits< INodeIterator >::fullName[] = "INodeIterator";
const char LunaTraits< INodeIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< INodeIterator >::parents[] = {0};
const int LunaTraits< INodeIterator >::hash = 97822868;
const int LunaTraits< INodeIterator >::uniqueIDs[] = {97822868,0};

luna_RegType LunaTraits< INodeIterator >::methods[] = {
	{"toFirst", &luna_wrapper_INodeIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_INodeIterator::_bind_toLast},
	{"toNext", &luna_wrapper_INodeIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_INodeIterator::_bind_toPrev},
	{"current", &luna_wrapper_INodeIterator::_bind_current},
	{"release", &luna_wrapper_INodeIterator::_bind_release},
	{"dynCast", &luna_wrapper_INodeIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_INodeIterator::_bind___eq},
	{"fromVoid", &luna_wrapper_INodeIterator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_INodeIterator::_bind_asVoid},
	{"getTable", &luna_wrapper_INodeIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< INodeIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< INodeIterator >::enumValues[] = {
	{0,0}
};


