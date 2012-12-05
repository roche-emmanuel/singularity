#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_basic_type_wrapper.h>

class luna_wrapper_osgDB_basic_type_wrapper {
public:
	typedef Luna< osgDB::basic_type_wrapper > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56095127) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::basic_type_wrapper*)");
		}

		osgDB::basic_type_wrapper* rhs =(Luna< osgDB::basic_type_wrapper >::check(L,2));
		osgDB::basic_type_wrapper* self=(Luna< osgDB::basic_type_wrapper >::check(L,1));
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

		osgDB::basic_type_wrapper* self=(Luna< osgDB::basic_type_wrapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::basic_type_wrapper");
		
		return luna_dynamicCast(L,converters,"osgDB::basic_type_wrapper",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_matches(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const
	static int _bind_matches(lua_State *L) {
		if (!_lg_typecheck_matches(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const function, expected prototype:\nbool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* proto=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgDB::basic_type_wrapper* self=(Luna< osgDB::basic_type_wrapper >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::basic_type_wrapper::matches(const osg::Object *) const");
		}
		bool lret = self->matches(proto);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgDB::basic_type_wrapper* LunaTraits< osgDB::basic_type_wrapper >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const
}

void LunaTraits< osgDB::basic_type_wrapper >::_bind_dtor(osgDB::basic_type_wrapper* obj) {
	delete obj;
}

const char LunaTraits< osgDB::basic_type_wrapper >::className[] = "basic_type_wrapper";
const char LunaTraits< osgDB::basic_type_wrapper >::fullName[] = "osgDB::basic_type_wrapper";
const char LunaTraits< osgDB::basic_type_wrapper >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::basic_type_wrapper >::parents[] = {0};
const int LunaTraits< osgDB::basic_type_wrapper >::hash = 56095127;
const int LunaTraits< osgDB::basic_type_wrapper >::uniqueIDs[] = {56095127,0};

luna_RegType LunaTraits< osgDB::basic_type_wrapper >::methods[] = {
	{"matches", &luna_wrapper_osgDB_basic_type_wrapper::_bind_matches},
	{"dynCast", &luna_wrapper_osgDB_basic_type_wrapper::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_basic_type_wrapper::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::basic_type_wrapper >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::basic_type_wrapper >::enumValues[] = {
	{0,0}
};


