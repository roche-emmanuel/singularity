#include <plug_common.h>

class luna_wrapper_osgDB_ExternalFileWriter_ObjectData {
public:
	typedef Luna< osgDB::ExternalFileWriter::ObjectData > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50545385) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ExternalFileWriter::ObjectData*)");
		}

		osgDB::ExternalFileWriter::ObjectData* rhs =(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,2));
		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
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

		osgDB::ExternalFileWriter::ObjectData* self=(Luna< osgDB::ExternalFileWriter::ObjectData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ExternalFileWriter::ObjectData");
		
		return luna_dynamicCast(L,converters,"osgDB::ExternalFileWriter::ObjectData",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ExternalFileWriter::ObjectData::ObjectData()
	static osgDB::ExternalFileWriter::ObjectData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ExternalFileWriter::ObjectData::ObjectData() function, expected prototype:\nosgDB::ExternalFileWriter::ObjectData::ObjectData()\nClass arguments details:\n");
		}


		return new osgDB::ExternalFileWriter::ObjectData();
	}

	// osgDB::ExternalFileWriter::ObjectData::ObjectData(const std::string & absolutePath, const std::string & relativePath, bool written)
	static osgDB::ExternalFileWriter::ObjectData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ExternalFileWriter::ObjectData::ObjectData(const std::string & absolutePath, const std::string & relativePath, bool written) function, expected prototype:\nosgDB::ExternalFileWriter::ObjectData::ObjectData(const std::string & absolutePath, const std::string & relativePath, bool written)\nClass arguments details:\n");
		}

		std::string absolutePath(lua_tostring(L,1),lua_objlen(L,1));
		std::string relativePath(lua_tostring(L,2),lua_objlen(L,2));
		bool written=(bool)(lua_toboolean(L,3)==1);

		return new osgDB::ExternalFileWriter::ObjectData(absolutePath, relativePath, written);
	}

	// Overload binder for osgDB::ExternalFileWriter::ObjectData::ObjectData
	static osgDB::ExternalFileWriter::ObjectData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ObjectData, cannot match any of the overloads for function ObjectData:\n  ObjectData()\n  ObjectData(const std::string &, const std::string &, bool)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osgDB::ExternalFileWriter::ObjectData* LunaTraits< osgDB::ExternalFileWriter::ObjectData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_ctor(L);
}

void LunaTraits< osgDB::ExternalFileWriter::ObjectData >::_bind_dtor(osgDB::ExternalFileWriter::ObjectData* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ExternalFileWriter::ObjectData >::className[] = "ObjectData";
const char LunaTraits< osgDB::ExternalFileWriter::ObjectData >::fullName[] = "osgDB::ExternalFileWriter::ObjectData";
const char LunaTraits< osgDB::ExternalFileWriter::ObjectData >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ExternalFileWriter::ObjectData >::parents[] = {0};
const int LunaTraits< osgDB::ExternalFileWriter::ObjectData >::hash = 50545385;
const int LunaTraits< osgDB::ExternalFileWriter::ObjectData >::uniqueIDs[] = {50545385,0};

luna_RegType LunaTraits< osgDB::ExternalFileWriter::ObjectData >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ExternalFileWriter_ObjectData::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ExternalFileWriter::ObjectData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ExternalFileWriter::ObjectData >::enumValues[] = {
	{0,0}
};


