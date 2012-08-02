#include <plug_common.h>

class luna_wrapper_osgDB_FileLocationCallback {
public:
	typedef Luna< osgDB::FileLocationCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::FileLocationCallback* ptr= dynamic_cast< osgDB::FileLocationCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::FileLocationCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_fileLocation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useFileCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options)
	static int _bind_fileLocation(lua_State *L) {
		if (!_lg_typecheck_fileLocation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));

		osgDB::FileLocationCallback* self=dynamic_cast< osgDB::FileLocationCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string &, const osgDB::Options *)");
		}
		osgDB::FileLocationCallback::Location lret = self->fileLocation(filename, options);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::FileLocationCallback::useFileCache() const
	static int _bind_useFileCache(lua_State *L) {
		if (!_lg_typecheck_useFileCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FileLocationCallback::useFileCache() const function, expected prototype:\nbool osgDB::FileLocationCallback::useFileCache() const\nClass arguments details:\n");
		}


		osgDB::FileLocationCallback* self=dynamic_cast< osgDB::FileLocationCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FileLocationCallback::useFileCache() const");
		}
		bool lret = self->useFileCache();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgDB::FileLocationCallback* LunaTraits< osgDB::FileLocationCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options)
	// bool osgDB::FileLocationCallback::useFileCache() const

	// Abstract operators:
}

void LunaTraits< osgDB::FileLocationCallback >::_bind_dtor(osgDB::FileLocationCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::FileLocationCallback >::className[] = "FileLocationCallback";
const char LunaTraits< osgDB::FileLocationCallback >::fullName[] = "osgDB::FileLocationCallback";
const char LunaTraits< osgDB::FileLocationCallback >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FileLocationCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::FileLocationCallback >::hash = 24950336;
const int LunaTraits< osgDB::FileLocationCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::FileLocationCallback >::methods[] = {
	{"fileLocation", &luna_wrapper_osgDB_FileLocationCallback::_bind_fileLocation},
	{"useFileCache", &luna_wrapper_osgDB_FileLocationCallback::_bind_useFileCache},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FileLocationCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_FileLocationCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FileLocationCallback >::enumValues[] = {
	{"LOCAL_FILE", osgDB::FileLocationCallback::LOCAL_FILE},
	{"REMOTE_FILE", osgDB::FileLocationCallback::REMOTE_FILE},
	{0,0}
};


