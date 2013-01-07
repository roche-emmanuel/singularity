#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FieldReader.h>

class luna_wrapper_osgDB_FieldReader {
public:
	typedef Luna< osgDB::FieldReader > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgDB::FieldReader,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53806078) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::FieldReader*)");
		}

		osgDB::FieldReader* rhs =(Luna< osgDB::FieldReader >::check(L,2));
		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
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

		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::FieldReader");
		
		return luna_dynamicCast(L,converters,"osgDB::FieldReader",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53806078) ) return false;
		if( (!(Luna< osgDB::FieldReader >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,53806078) ) return false;
		if( (!(Luna< osgDB::FieldReader >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_attach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77972206)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readField(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7546407) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ignoreField(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNoNestedBrackets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::FieldReader::FieldReader()
	static osgDB::FieldReader* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader::FieldReader() function, expected prototype:\nosgDB::FieldReader::FieldReader()\nClass arguments details:\n");
		}


		return new osgDB::FieldReader();
	}

	// osgDB::FieldReader::FieldReader(const osgDB::FieldReader & ic)
	static osgDB::FieldReader* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader::FieldReader(const osgDB::FieldReader & ic) function, expected prototype:\nosgDB::FieldReader::FieldReader(const osgDB::FieldReader & ic)\nClass arguments details:\narg 1 ID = 53806078\n");
		}

		const osgDB::FieldReader* ic_ptr=(Luna< osgDB::FieldReader >::check(L,1));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::FieldReader::FieldReader function");
		}
		const osgDB::FieldReader & ic=*ic_ptr;

		return new osgDB::FieldReader(ic);
	}

	// osgDB::FieldReader::FieldReader(lua_Table * data)
	static osgDB::FieldReader* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader::FieldReader(lua_Table * data) function, expected prototype:\nosgDB::FieldReader::FieldReader(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgDB_FieldReader(L,NULL);
	}

	// osgDB::FieldReader::FieldReader(lua_Table * data, const osgDB::FieldReader & ic)
	static osgDB::FieldReader* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader::FieldReader(lua_Table * data, const osgDB::FieldReader & ic) function, expected prototype:\nosgDB::FieldReader::FieldReader(lua_Table * data, const osgDB::FieldReader & ic)\nClass arguments details:\narg 2 ID = 53806078\n");
		}

		const osgDB::FieldReader* ic_ptr=(Luna< osgDB::FieldReader >::check(L,2));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::FieldReader::FieldReader function");
		}
		const osgDB::FieldReader & ic=*ic_ptr;

		return new wrapper_osgDB_FieldReader(L,NULL, ic);
	}

	// Overload binder for osgDB::FieldReader::FieldReader
	static osgDB::FieldReader* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FieldReader, cannot match any of the overloads for function FieldReader:\n  FieldReader()\n  FieldReader(const osgDB::FieldReader &)\n  FieldReader(lua_Table *)\n  FieldReader(lua_Table *, const osgDB::FieldReader &)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::FieldReader::attach(std::istream * input)
	static int _bind_attach(lua_State *L) {
		if (!_lg_typecheck_attach(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReader::attach(std::istream * input) function, expected prototype:\nvoid osgDB::FieldReader::attach(std::istream * input)\nClass arguments details:\narg 1 ID = 77972206\n");
		}

		std::istream* input=(Luna< std::istream >::check(L,2));

		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FieldReader::attach(std::istream *). Got : '%s'",typeid(Luna< osgDB::FieldReader >::check(L,1)).name());
		}
		self->attach(input);

		return 0;
	}

	// void osgDB::FieldReader::detach()
	static int _bind_detach(lua_State *L) {
		if (!_lg_typecheck_detach(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReader::detach() function, expected prototype:\nvoid osgDB::FieldReader::detach()\nClass arguments details:\n");
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FieldReader::detach(). Got : '%s'",typeid(Luna< osgDB::FieldReader >::check(L,1)).name());
		}
		self->detach();

		return 0;
	}

	// bool osgDB::FieldReader::eof() const
	static int _bind_eof(lua_State *L) {
		if (!_lg_typecheck_eof(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReader::eof() const function, expected prototype:\nbool osgDB::FieldReader::eof() const\nClass arguments details:\n");
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReader::eof() const. Got : '%s'",typeid(Luna< osgDB::FieldReader >::check(L,1)).name());
		}
		bool lret = self->eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReader::readField(osgDB::Field & fieldPtr)
	static int _bind_readField(lua_State *L) {
		if (!_lg_typecheck_readField(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReader::readField(osgDB::Field & fieldPtr) function, expected prototype:\nbool osgDB::FieldReader::readField(osgDB::Field & fieldPtr)\nClass arguments details:\narg 1 ID = 7546407\n");
		}

		osgDB::Field* fieldPtr_ptr=(Luna< osgDB::Field >::check(L,2));
		if( !fieldPtr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fieldPtr in osgDB::FieldReader::readField function");
		}
		osgDB::Field & fieldPtr=*fieldPtr_ptr;

		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReader::readField(osgDB::Field &). Got : '%s'",typeid(Luna< osgDB::FieldReader >::check(L,1)).name());
		}
		bool lret = self->readField(fieldPtr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::FieldReader::ignoreField()
	static int _bind_ignoreField(lua_State *L) {
		if (!_lg_typecheck_ignoreField(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReader::ignoreField() function, expected prototype:\nvoid osgDB::FieldReader::ignoreField()\nClass arguments details:\n");
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FieldReader::ignoreField(). Got : '%s'",typeid(Luna< osgDB::FieldReader >::check(L,1)).name());
		}
		self->ignoreField();

		return 0;
	}

	// int osgDB::FieldReader::getNoNestedBrackets() const
	static int _bind_getNoNestedBrackets(lua_State *L) {
		if (!_lg_typecheck_getNoNestedBrackets(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::FieldReader::getNoNestedBrackets() const function, expected prototype:\nint osgDB::FieldReader::getNoNestedBrackets() const\nClass arguments details:\n");
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::FieldReader::getNoNestedBrackets() const. Got : '%s'",typeid(Luna< osgDB::FieldReader >::check(L,1)).name());
		}
		int lret = self->getNoNestedBrackets();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::FieldReader::base_eof() const
	static int _bind_base_eof(lua_State *L) {
		if (!_lg_typecheck_base_eof(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReader::base_eof() const function, expected prototype:\nbool osgDB::FieldReader::base_eof() const\nClass arguments details:\n");
		}


		osgDB::FieldReader* self=(Luna< osgDB::FieldReader >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReader::base_eof() const. Got : '%s'",typeid(Luna< osgDB::FieldReader >::check(L,1)).name());
		}
		bool lret = self->FieldReader::eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgDB::FieldReader* LunaTraits< osgDB::FieldReader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_FieldReader::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::FieldReader >::_bind_dtor(osgDB::FieldReader* obj) {
	delete obj;
}

const char LunaTraits< osgDB::FieldReader >::className[] = "FieldReader";
const char LunaTraits< osgDB::FieldReader >::fullName[] = "osgDB::FieldReader";
const char LunaTraits< osgDB::FieldReader >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FieldReader >::parents[] = {0};
const int LunaTraits< osgDB::FieldReader >::hash = 53806078;
const int LunaTraits< osgDB::FieldReader >::uniqueIDs[] = {53806078,0};

luna_RegType LunaTraits< osgDB::FieldReader >::methods[] = {
	{"attach", &luna_wrapper_osgDB_FieldReader::_bind_attach},
	{"detach", &luna_wrapper_osgDB_FieldReader::_bind_detach},
	{"eof", &luna_wrapper_osgDB_FieldReader::_bind_eof},
	{"readField", &luna_wrapper_osgDB_FieldReader::_bind_readField},
	{"ignoreField", &luna_wrapper_osgDB_FieldReader::_bind_ignoreField},
	{"getNoNestedBrackets", &luna_wrapper_osgDB_FieldReader::_bind_getNoNestedBrackets},
	{"base_eof", &luna_wrapper_osgDB_FieldReader::_bind_base_eof},
	{"dynCast", &luna_wrapper_osgDB_FieldReader::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_FieldReader::_bind___eq},
	{"getTable", &luna_wrapper_osgDB_FieldReader::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FieldReader >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FieldReader >::enumValues[] = {
	{0,0}
};


