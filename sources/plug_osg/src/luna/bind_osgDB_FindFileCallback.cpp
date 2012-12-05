#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FindFileCallback.h>

class luna_wrapper_osgDB_FindFileCallback {
public:
	typedef Luna< osgDB::FindFileCallback > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::FindFileCallback* ptr= dynamic_cast< osgDB::FindFileCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::FindFileCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_findDataFile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findLibraryFile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// std::string osgDB::FindFileCallback::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	static int _bind_findDataFile(lua_State *L) {
		if (!_lg_typecheck_findDataFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::FindFileCallback::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) function, expected prototype:\nstd::string osgDB::FindFileCallback::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::FindFileCallback* self=dynamic_cast< osgDB::FindFileCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::FindFileCallback::findDataFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity)");
		}
		std::string lret = self->findDataFile(filename, options, caseSensitivity);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::FindFileCallback::findLibraryFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	static int _bind_findLibraryFile(lua_State *L) {
		if (!_lg_typecheck_findLibraryFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::FindFileCallback::findLibraryFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) function, expected prototype:\nstd::string osgDB::FindFileCallback::findLibraryFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::FindFileCallback* self=dynamic_cast< osgDB::FindFileCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::FindFileCallback::findLibraryFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity)");
		}
		std::string lret = self->findLibraryFile(filename, options, caseSensitivity);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

osgDB::FindFileCallback* LunaTraits< osgDB::FindFileCallback >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::FindFileCallback >::_bind_dtor(osgDB::FindFileCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::FindFileCallback >::className[] = "FindFileCallback";
const char LunaTraits< osgDB::FindFileCallback >::fullName[] = "osgDB::FindFileCallback";
const char LunaTraits< osgDB::FindFileCallback >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FindFileCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::FindFileCallback >::hash = 33979667;
const int LunaTraits< osgDB::FindFileCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::FindFileCallback >::methods[] = {
	{"findDataFile", &luna_wrapper_osgDB_FindFileCallback::_bind_findDataFile},
	{"findLibraryFile", &luna_wrapper_osgDB_FindFileCallback::_bind_findLibraryFile},
	{"__eq", &luna_wrapper_osgDB_FindFileCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FindFileCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_FindFileCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FindFileCallback >::enumValues[] = {
	{0,0}
};


