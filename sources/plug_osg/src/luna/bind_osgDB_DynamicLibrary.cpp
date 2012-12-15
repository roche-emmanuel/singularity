#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_DynamicLibrary.h>

class luna_wrapper_osgDB_DynamicLibrary {
public:
	typedef Luna< osgDB::DynamicLibrary > luna_t;

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
		//osgDB::DynamicLibrary* ptr= dynamic_cast< osgDB::DynamicLibrary* >(Luna< osg::Referenced >::check(L,1));
		osgDB::DynamicLibrary* ptr= luna_caster< osg::Referenced, osgDB::DynamicLibrary >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DynamicLibrary >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_loadLibrary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFullName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProcAddress(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static osgDB::DynamicLibrary * osgDB::DynamicLibrary::loadLibrary(const std::string & libraryName)
	static int _bind_loadLibrary(lua_State *L) {
		if (!_lg_typecheck_loadLibrary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osgDB::DynamicLibrary * osgDB::DynamicLibrary::loadLibrary(const std::string & libraryName) function, expected prototype:\nstatic osgDB::DynamicLibrary * osgDB::DynamicLibrary::loadLibrary(const std::string & libraryName)\nClass arguments details:\n");
		}

		std::string libraryName(lua_tostring(L,1),lua_objlen(L,1));

		osgDB::DynamicLibrary * lret = osgDB::DynamicLibrary::loadLibrary(libraryName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DynamicLibrary >::push(L,lret,false);

		return 1;
	}

	// const std::string & osgDB::DynamicLibrary::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::DynamicLibrary::getName() const function, expected prototype:\nconst std::string & osgDB::DynamicLibrary::getName() const\nClass arguments details:\n");
		}


		osgDB::DynamicLibrary* self=Luna< osg::Referenced >::checkSubType< osgDB::DynamicLibrary >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::DynamicLibrary::getName() const");
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const std::string & osgDB::DynamicLibrary::getFullName() const
	static int _bind_getFullName(lua_State *L) {
		if (!_lg_typecheck_getFullName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::DynamicLibrary::getFullName() const function, expected prototype:\nconst std::string & osgDB::DynamicLibrary::getFullName() const\nClass arguments details:\n");
		}


		osgDB::DynamicLibrary* self=Luna< osg::Referenced >::checkSubType< osgDB::DynamicLibrary >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::DynamicLibrary::getFullName() const");
		}
		const std::string & lret = self->getFullName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void * osgDB::DynamicLibrary::getHandle() const
	static int _bind_getHandle(lua_State *L) {
		if (!_lg_typecheck_getHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * osgDB::DynamicLibrary::getHandle() const function, expected prototype:\nvoid * osgDB::DynamicLibrary::getHandle() const\nClass arguments details:\n");
		}


		osgDB::DynamicLibrary* self=Luna< osg::Referenced >::checkSubType< osgDB::DynamicLibrary >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * osgDB::DynamicLibrary::getHandle() const");
		}
		void * lret = self->getHandle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * osgDB::DynamicLibrary::getProcAddress(const std::string & procName)
	static int _bind_getProcAddress(lua_State *L) {
		if (!_lg_typecheck_getProcAddress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * osgDB::DynamicLibrary::getProcAddress(const std::string & procName) function, expected prototype:\nvoid * osgDB::DynamicLibrary::getProcAddress(const std::string & procName)\nClass arguments details:\n");
		}

		std::string procName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DynamicLibrary* self=Luna< osg::Referenced >::checkSubType< osgDB::DynamicLibrary >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * osgDB::DynamicLibrary::getProcAddress(const std::string &)");
		}
		void * lret = self->getProcAddress(procName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgDB::DynamicLibrary* LunaTraits< osgDB::DynamicLibrary >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::DynamicLibrary >::_bind_dtor(osgDB::DynamicLibrary* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DynamicLibrary >::className[] = "DynamicLibrary";
const char LunaTraits< osgDB::DynamicLibrary >::fullName[] = "osgDB::DynamicLibrary";
const char LunaTraits< osgDB::DynamicLibrary >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DynamicLibrary >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::DynamicLibrary >::hash = 74194442;
const int LunaTraits< osgDB::DynamicLibrary >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DynamicLibrary >::methods[] = {
	{"loadLibrary", &luna_wrapper_osgDB_DynamicLibrary::_bind_loadLibrary},
	{"getName", &luna_wrapper_osgDB_DynamicLibrary::_bind_getName},
	{"getFullName", &luna_wrapper_osgDB_DynamicLibrary::_bind_getFullName},
	{"getHandle", &luna_wrapper_osgDB_DynamicLibrary::_bind_getHandle},
	{"getProcAddress", &luna_wrapper_osgDB_DynamicLibrary::_bind_getProcAddress},
	{"__eq", &luna_wrapper_osgDB_DynamicLibrary::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DynamicLibrary >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DynamicLibrary::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DynamicLibrary >::enumValues[] = {
	{0,0}
};


