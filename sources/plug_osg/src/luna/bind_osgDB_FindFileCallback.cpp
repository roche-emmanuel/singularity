#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FindFileCallback.h>

class luna_wrapper_osgDB_FindFileCallback {
public:
	typedef Luna< osgDB::FindFileCallback > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osgDB::FindFileCallback* ptr= dynamic_cast< osgDB::FindFileCallback* >(Luna< osg::Referenced >::check(L,1));
		osgDB::FindFileCallback* ptr= luna_caster< osg::Referenced, osgDB::FindFileCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::FindFileCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


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

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findDataFile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findLibraryFile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::FindFileCallback::FindFileCallback()
	static osgDB::FindFileCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FindFileCallback::FindFileCallback() function, expected prototype:\nosgDB::FindFileCallback::FindFileCallback()\nClass arguments details:\n");
		}


		return new osgDB::FindFileCallback();
	}

	// osgDB::FindFileCallback::FindFileCallback(lua_Table * data)
	static osgDB::FindFileCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FindFileCallback::FindFileCallback(lua_Table * data) function, expected prototype:\nosgDB::FindFileCallback::FindFileCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgDB_FindFileCallback(L,NULL);
	}

	// Overload binder for osgDB::FindFileCallback::FindFileCallback
	static osgDB::FindFileCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FindFileCallback, cannot match any of the overloads for function FindFileCallback:\n  FindFileCallback()\n  FindFileCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// std::string osgDB::FindFileCallback::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	static int _bind_findDataFile(lua_State *L) {
		if (!_lg_typecheck_findDataFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::FindFileCallback::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) function, expected prototype:\nstd::string osgDB::FindFileCallback::findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::FindFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FindFileCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::FindFileCallback::findDataFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::FindFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FindFileCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::FindFileCallback::findLibraryFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		std::string lret = self->findLibraryFile(filename, options, caseSensitivity);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::FindFileCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FindFileCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::FindFileCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::FindFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FindFileCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FindFileCallback::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->FindFileCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// std::string osgDB::FindFileCallback::base_findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	static int _bind_base_findDataFile(lua_State *L) {
		if (!_lg_typecheck_base_findDataFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::FindFileCallback::base_findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) function, expected prototype:\nstd::string osgDB::FindFileCallback::base_findDataFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::FindFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FindFileCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::FindFileCallback::base_findDataFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		std::string lret = self->FindFileCallback::findDataFile(filename, options, caseSensitivity);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::FindFileCallback::base_findLibraryFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)
	static int _bind_base_findLibraryFile(lua_State *L) {
		if (!_lg_typecheck_base_findLibraryFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::FindFileCallback::base_findLibraryFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity) function, expected prototype:\nstd::string osgDB::FindFileCallback::base_findLibraryFile(const std::string & filename, const osgDB::Options * options, osgDB::CaseSensitivity caseSensitivity)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));
		osgDB::CaseSensitivity caseSensitivity=(osgDB::CaseSensitivity)lua_tointeger(L,4);

		osgDB::FindFileCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FindFileCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::FindFileCallback::base_findLibraryFile(const std::string &, const osgDB::Options *, osgDB::CaseSensitivity). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		std::string lret = self->FindFileCallback::findLibraryFile(filename, options, caseSensitivity);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

osgDB::FindFileCallback* LunaTraits< osgDB::FindFileCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_FindFileCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_FindFileCallback::_bind_base_setThreadSafeRefUnref},
	{"base_findDataFile", &luna_wrapper_osgDB_FindFileCallback::_bind_base_findDataFile},
	{"base_findLibraryFile", &luna_wrapper_osgDB_FindFileCallback::_bind_base_findLibraryFile},
	{"__eq", &luna_wrapper_osgDB_FindFileCallback::_bind___eq},
	{"getTable", &luna_wrapper_osgDB_FindFileCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FindFileCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_FindFileCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FindFileCallback >::enumValues[] = {
	{0,0}
};


