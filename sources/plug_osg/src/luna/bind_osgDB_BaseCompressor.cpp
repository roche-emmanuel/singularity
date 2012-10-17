#include <plug_common.h>

class luna_wrapper_osgDB_BaseCompressor {
public:
	typedef Luna< osgDB::BaseCompressor > luna_t;

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
		osgDB::BaseCompressor* ptr= dynamic_cast< osgDB::BaseCompressor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::BaseCompressor >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osgDB::BaseCompressor::setName(const std::string & name)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::BaseCompressor::setName(const std::string & name) function, expected prototype:\nvoid osgDB::BaseCompressor::setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::BaseCompressor* self=dynamic_cast< osgDB::BaseCompressor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::BaseCompressor::setName(const std::string &)");
		}
		self->setName(name);

		return 0;
	}

	// const std::string & osgDB::BaseCompressor::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::BaseCompressor::getName() const function, expected prototype:\nconst std::string & osgDB::BaseCompressor::getName() const\nClass arguments details:\n");
		}


		osgDB::BaseCompressor* self=dynamic_cast< osgDB::BaseCompressor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::BaseCompressor::getName() const");
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

osgDB::BaseCompressor* LunaTraits< osgDB::BaseCompressor >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// bool osgDB::BaseCompressor::compress(std::ostream & , const std::string & )
	// bool osgDB::BaseCompressor::decompress(std::istream & , std::string & )

	// Abstract operators:
}

void LunaTraits< osgDB::BaseCompressor >::_bind_dtor(osgDB::BaseCompressor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::BaseCompressor >::className[] = "BaseCompressor";
const char LunaTraits< osgDB::BaseCompressor >::fullName[] = "osgDB::BaseCompressor";
const char LunaTraits< osgDB::BaseCompressor >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::BaseCompressor >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::BaseCompressor >::hash = 3546363;
const int LunaTraits< osgDB::BaseCompressor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::BaseCompressor >::methods[] = {
	{"setName", &luna_wrapper_osgDB_BaseCompressor::_bind_setName},
	{"getName", &luna_wrapper_osgDB_BaseCompressor::_bind_getName},
	{"__eq", &luna_wrapper_osgDB_BaseCompressor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::BaseCompressor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_BaseCompressor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::BaseCompressor >::enumValues[] = {
	{0,0}
};


