#include <plug_common.h>

#include <luna/wrappers/wrapper_ICompoundIterator.h>

class luna_wrapper_ICompoundIterator {
public:
	typedef Luna< ICompoundIterator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ICompoundIterator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38557418) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ICompoundIterator*)");
		}

		ICompoundIterator* rhs =(Luna< ICompoundIterator >::check(L,2));
		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
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

		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ICompoundIterator");
		
		return luna_dynamicCast(L,converters,"ICompoundIterator",name);
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
	// ICompoundIterator::ICompoundIterator(lua_Table * data)
	static ICompoundIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ICompoundIterator::ICompoundIterator(lua_Table * data) function, expected prototype:\nICompoundIterator::ICompoundIterator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_ICompoundIterator(L,NULL);
	}


	// Function binds:
	// void ICompoundIterator::toFirst()
	static int _bind_toFirst(lua_State *L) {
		if (!_lg_typecheck_toFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::toFirst() function, expected prototype:\nvoid ICompoundIterator::toFirst()\nClass arguments details:\n");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ICompoundIterator::toFirst(). Got : '%s'",typeid(Luna< ICompoundIterator >::check(L,1)).name());
		}
		self->toFirst();

		return 0;
	}

	// void ICompoundIterator::toLast()
	static int _bind_toLast(lua_State *L) {
		if (!_lg_typecheck_toLast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::toLast() function, expected prototype:\nvoid ICompoundIterator::toLast()\nClass arguments details:\n");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ICompoundIterator::toLast(). Got : '%s'",typeid(Luna< ICompoundIterator >::check(L,1)).name());
		}
		self->toLast();

		return 0;
	}

	// void ICompoundIterator::toNext()
	static int _bind_toNext(lua_State *L) {
		if (!_lg_typecheck_toNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::toNext() function, expected prototype:\nvoid ICompoundIterator::toNext()\nClass arguments details:\n");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ICompoundIterator::toNext(). Got : '%s'",typeid(Luna< ICompoundIterator >::check(L,1)).name());
		}
		self->toNext();

		return 0;
	}

	// void ICompoundIterator::toPrev()
	static int _bind_toPrev(lua_State *L) {
		if (!_lg_typecheck_toPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::toPrev() function, expected prototype:\nvoid ICompoundIterator::toPrev()\nClass arguments details:\n");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ICompoundIterator::toPrev(). Got : '%s'",typeid(Luna< ICompoundIterator >::check(L,1)).name());
		}
		self->toPrev();

		return 0;
	}

	// ICompound * ICompoundIterator::current() const
	static int _bind_current(lua_State *L) {
		if (!_lg_typecheck_current(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ICompound * ICompoundIterator::current() const function, expected prototype:\nICompound * ICompoundIterator::current() const\nClass arguments details:\n");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ICompound * ICompoundIterator::current() const. Got : '%s'",typeid(Luna< ICompoundIterator >::check(L,1)).name());
		}
		ICompound * lret = self->current();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	// void ICompoundIterator::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void ICompoundIterator::release() function, expected prototype:\nvoid ICompoundIterator::release()\nClass arguments details:\n");
		}


		ICompoundIterator* self=(Luna< ICompoundIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void ICompoundIterator::release(). Got : '%s'",typeid(Luna< ICompoundIterator >::check(L,1)).name());
		}
		self->release();

		return 0;
	}


	// Operator binds:

};

ICompoundIterator* LunaTraits< ICompoundIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ICompoundIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void ICompoundIterator::toFirst()
	// void ICompoundIterator::toLast()
	// void ICompoundIterator::toNext()
	// void ICompoundIterator::toPrev()
	// ICompound * ICompoundIterator::current() const
	// void ICompoundIterator::release()
}

void LunaTraits< ICompoundIterator >::_bind_dtor(ICompoundIterator* obj) {
	delete obj;
}

const char LunaTraits< ICompoundIterator >::className[] = "ICompoundIterator";
const char LunaTraits< ICompoundIterator >::fullName[] = "ICompoundIterator";
const char LunaTraits< ICompoundIterator >::moduleName[] = "doxmlparser";
const char* LunaTraits< ICompoundIterator >::parents[] = {0};
const int LunaTraits< ICompoundIterator >::hash = 38557418;
const int LunaTraits< ICompoundIterator >::uniqueIDs[] = {38557418,0};

luna_RegType LunaTraits< ICompoundIterator >::methods[] = {
	{"toFirst", &luna_wrapper_ICompoundIterator::_bind_toFirst},
	{"toLast", &luna_wrapper_ICompoundIterator::_bind_toLast},
	{"toNext", &luna_wrapper_ICompoundIterator::_bind_toNext},
	{"toPrev", &luna_wrapper_ICompoundIterator::_bind_toPrev},
	{"current", &luna_wrapper_ICompoundIterator::_bind_current},
	{"release", &luna_wrapper_ICompoundIterator::_bind_release},
	{"dynCast", &luna_wrapper_ICompoundIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_ICompoundIterator::_bind___eq},
	{"getTable", &luna_wrapper_ICompoundIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ICompoundIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ICompoundIterator >::enumValues[] = {
	{0,0}
};


