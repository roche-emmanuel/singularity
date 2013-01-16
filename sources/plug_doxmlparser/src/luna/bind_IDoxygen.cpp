#include <plug_common.h>

#include <luna/wrappers/wrapper_IDoxygen.h>

class luna_wrapper_IDoxygen {
public:
	typedef Luna< IDoxygen > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IDoxygen,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63320756) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDoxygen*)");
		}

		IDoxygen* rhs =(Luna< IDoxygen >::check(L,2));
		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
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

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IDoxygen");
		
		return luna_dynamicCast(L,converters,"IDoxygen",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_compounds(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compoundById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compoundByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_memberById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_memberByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDebugLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readXMLDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IDoxygen::IDoxygen(lua_Table * data)
	static IDoxygen* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in IDoxygen::IDoxygen(lua_Table * data) function, expected prototype:\nIDoxygen::IDoxygen(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_IDoxygen(L,NULL);
	}


	// Function binds:
	// ICompoundIterator * IDoxygen::compounds() const
	static int _bind_compounds(lua_State *L) {
		if (!_lg_typecheck_compounds(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ICompoundIterator * IDoxygen::compounds() const function, expected prototype:\nICompoundIterator * IDoxygen::compounds() const\nClass arguments details:\n");
		}


		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ICompoundIterator * IDoxygen::compounds() const. Got : '%s'",typeid(Luna< IDoxygen >::check(L,1)).name());
		}
		ICompoundIterator * lret = self->compounds();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	// ICompound * IDoxygen::compoundById(const char * id) const
	static int _bind_compoundById(lua_State *L) {
		if (!_lg_typecheck_compoundById(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ICompound * IDoxygen::compoundById(const char * id) const function, expected prototype:\nICompound * IDoxygen::compoundById(const char * id) const\nClass arguments details:\n");
		}

		const char * id=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ICompound * IDoxygen::compoundById(const char *) const. Got : '%s'",typeid(Luna< IDoxygen >::check(L,1)).name());
		}
		ICompound * lret = self->compoundById(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	// ICompound * IDoxygen::compoundByName(const char * name) const
	static int _bind_compoundByName(lua_State *L) {
		if (!_lg_typecheck_compoundByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ICompound * IDoxygen::compoundByName(const char * name) const function, expected prototype:\nICompound * IDoxygen::compoundByName(const char * name) const\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ICompound * IDoxygen::compoundByName(const char *) const. Got : '%s'",typeid(Luna< IDoxygen >::check(L,1)).name());
		}
		ICompound * lret = self->compoundByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	// ICompound * IDoxygen::memberById(const char * id) const
	static int _bind_memberById(lua_State *L) {
		if (!_lg_typecheck_memberById(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ICompound * IDoxygen::memberById(const char * id) const function, expected prototype:\nICompound * IDoxygen::memberById(const char * id) const\nClass arguments details:\n");
		}

		const char * id=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ICompound * IDoxygen::memberById(const char *) const. Got : '%s'",typeid(Luna< IDoxygen >::check(L,1)).name());
		}
		ICompound * lret = self->memberById(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompound >::push(L,lret,false);

		return 1;
	}

	// ICompoundIterator * IDoxygen::memberByName(const char * name) const
	static int _bind_memberByName(lua_State *L) {
		if (!_lg_typecheck_memberByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in ICompoundIterator * IDoxygen::memberByName(const char * name) const function, expected prototype:\nICompoundIterator * IDoxygen::memberByName(const char * name) const\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call ICompoundIterator * IDoxygen::memberByName(const char *) const. Got : '%s'",typeid(Luna< IDoxygen >::check(L,1)).name());
		}
		ICompoundIterator * lret = self->memberByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ICompoundIterator >::push(L,lret,false);

		return 1;
	}

	// void IDoxygen::release()
	static int _bind_release(lua_State *L) {
		if (!_lg_typecheck_release(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void IDoxygen::release() function, expected prototype:\nvoid IDoxygen::release()\nClass arguments details:\n");
		}


		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void IDoxygen::release(). Got : '%s'",typeid(Luna< IDoxygen >::check(L,1)).name());
		}
		self->release();

		return 0;
	}

	// void IDoxygen::setDebugLevel(int level)
	static int _bind_setDebugLevel(lua_State *L) {
		if (!_lg_typecheck_setDebugLevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void IDoxygen::setDebugLevel(int level) function, expected prototype:\nvoid IDoxygen::setDebugLevel(int level)\nClass arguments details:\n");
		}

		int level=(int)lua_tointeger(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void IDoxygen::setDebugLevel(int). Got : '%s'",typeid(Luna< IDoxygen >::check(L,1)).name());
		}
		self->setDebugLevel(level);

		return 0;
	}

	// bool IDoxygen::readXMLDir(const char * xmlDirName)
	static int _bind_readXMLDir(lua_State *L) {
		if (!_lg_typecheck_readXMLDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool IDoxygen::readXMLDir(const char * xmlDirName) function, expected prototype:\nbool IDoxygen::readXMLDir(const char * xmlDirName)\nClass arguments details:\n");
		}

		const char * xmlDirName=(const char *)lua_tostring(L,2);

		IDoxygen* self=(Luna< IDoxygen >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool IDoxygen::readXMLDir(const char *). Got : '%s'",typeid(Luna< IDoxygen >::check(L,1)).name());
		}
		bool lret = self->readXMLDir(xmlDirName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

IDoxygen* LunaTraits< IDoxygen >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IDoxygen::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ICompoundIterator * IDoxygen::compounds() const
	// ICompound * IDoxygen::compoundById(const char * id) const
	// ICompound * IDoxygen::compoundByName(const char * name) const
	// ICompound * IDoxygen::memberById(const char * id) const
	// ICompoundIterator * IDoxygen::memberByName(const char * name) const
	// void IDoxygen::release()
	// void IDoxygen::setDebugLevel(int level)
	// bool IDoxygen::readXMLDir(const char * xmlDirName)
}

void LunaTraits< IDoxygen >::_bind_dtor(IDoxygen* obj) {
	delete obj;
}

const char LunaTraits< IDoxygen >::className[] = "IDoxygen";
const char LunaTraits< IDoxygen >::fullName[] = "IDoxygen";
const char LunaTraits< IDoxygen >::moduleName[] = "doxmlparser";
const char* LunaTraits< IDoxygen >::parents[] = {0};
const int LunaTraits< IDoxygen >::hash = 63320756;
const int LunaTraits< IDoxygen >::uniqueIDs[] = {63320756,0};

luna_RegType LunaTraits< IDoxygen >::methods[] = {
	{"compounds", &luna_wrapper_IDoxygen::_bind_compounds},
	{"compoundById", &luna_wrapper_IDoxygen::_bind_compoundById},
	{"compoundByName", &luna_wrapper_IDoxygen::_bind_compoundByName},
	{"memberById", &luna_wrapper_IDoxygen::_bind_memberById},
	{"memberByName", &luna_wrapper_IDoxygen::_bind_memberByName},
	{"release", &luna_wrapper_IDoxygen::_bind_release},
	{"setDebugLevel", &luna_wrapper_IDoxygen::_bind_setDebugLevel},
	{"readXMLDir", &luna_wrapper_IDoxygen::_bind_readXMLDir},
	{"dynCast", &luna_wrapper_IDoxygen::_bind_dynCast},
	{"__eq", &luna_wrapper_IDoxygen::_bind___eq},
	{"getTable", &luna_wrapper_IDoxygen::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IDoxygen >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDoxygen >::enumValues[] = {
	{0,0}
};


