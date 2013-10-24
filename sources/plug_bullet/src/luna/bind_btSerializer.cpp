#include <plug_common.h>

#include <luna/wrappers/wrapper_btSerializer.h>

class luna_wrapper_btSerializer {
public:
	typedef Luna< btSerializer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btSerializer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75337529) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btSerializer*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btSerializer* rhs =(Luna< btSerializer >::check(L,2));
		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btSerializer* self= (btSerializer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btSerializer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75337529) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btSerializer");
		
		return luna_dynamicCast(L,converters,"btSerializer",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getBufferPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_finalizeChunk(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,61426957)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniquePointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_startSerialization(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_finishSerialization(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_findNameForPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_registerNameForPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSerializationFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSerializationFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btSerializer::btSerializer(lua_Table * data)
	static btSerializer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in btSerializer::btSerializer(lua_Table * data) function, expected prototype:\nbtSerializer::btSerializer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btSerializer(L,NULL);
	}


	// Function binds:
	// const unsigned char * btSerializer::getBufferPointer() const
	static int _bind_getBufferPointer(lua_State *L) {
		if (!_lg_typecheck_getBufferPointer(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * btSerializer::getBufferPointer() const function, expected prototype:\nconst unsigned char * btSerializer::getBufferPointer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * btSerializer::getBufferPointer() const. Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->getBufferPointer();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int btSerializer::getCurrentBufferSize() const
	static int _bind_getCurrentBufferSize(lua_State *L) {
		if (!_lg_typecheck_getCurrentBufferSize(L)) {
			luaL_error(L, "luna typecheck failed in int btSerializer::getCurrentBufferSize() const function, expected prototype:\nint btSerializer::getCurrentBufferSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btSerializer::getCurrentBufferSize() const. Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getCurrentBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// btChunk * btSerializer::allocate(size_t size, int numElements)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luaL_error(L, "luna typecheck failed in btChunk * btSerializer::allocate(size_t size, int numElements) function, expected prototype:\nbtChunk * btSerializer::allocate(size_t size, int numElements)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);
		int numElements=(int)lua_tointeger(L,3);

		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btChunk * btSerializer::allocate(size_t, int). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btChunk * lret = self->allocate(size, numElements);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btChunk >::push(L,lret,false);

		return 1;
	}

	// void btSerializer::finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr)
	static int _bind_finalizeChunk(lua_State *L) {
		if (!_lg_typecheck_finalizeChunk(L)) {
			luaL_error(L, "luna typecheck failed in void btSerializer::finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr) function, expected prototype:\nvoid btSerializer::finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr)\nClass arguments details:\narg 1 ID = 61426957\n\n%s",luna_dumpStack(L).c_str());
		}

		btChunk* chunk=(Luna< btChunk >::check(L,2));
		const char * structType=(const char *)lua_tostring(L,3);
		int chunkCode=(int)lua_tointeger(L,4);
		void* oldPtr=(Luna< void >::check(L,5));

		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSerializer::finalizeChunk(btChunk *, const char *, int, void *). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->finalizeChunk(chunk, structType, chunkCode, oldPtr);

		return 0;
	}

	// void * btSerializer::findPointer(void * oldPtr)
	static int _bind_findPointer(lua_State *L) {
		if (!_lg_typecheck_findPointer(L)) {
			luaL_error(L, "luna typecheck failed in void * btSerializer::findPointer(void * oldPtr) function, expected prototype:\nvoid * btSerializer::findPointer(void * oldPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* oldPtr=(Luna< void >::check(L,2));

		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * btSerializer::findPointer(void *). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->findPointer(oldPtr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * btSerializer::getUniquePointer(void * oldPtr)
	static int _bind_getUniquePointer(lua_State *L) {
		if (!_lg_typecheck_getUniquePointer(L)) {
			luaL_error(L, "luna typecheck failed in void * btSerializer::getUniquePointer(void * oldPtr) function, expected prototype:\nvoid * btSerializer::getUniquePointer(void * oldPtr)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* oldPtr=(Luna< void >::check(L,2));

		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * btSerializer::getUniquePointer(void *). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->getUniquePointer(oldPtr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void btSerializer::startSerialization()
	static int _bind_startSerialization(lua_State *L) {
		if (!_lg_typecheck_startSerialization(L)) {
			luaL_error(L, "luna typecheck failed in void btSerializer::startSerialization() function, expected prototype:\nvoid btSerializer::startSerialization()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSerializer::startSerialization(). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startSerialization();

		return 0;
	}

	// void btSerializer::finishSerialization()
	static int _bind_finishSerialization(lua_State *L) {
		if (!_lg_typecheck_finishSerialization(L)) {
			luaL_error(L, "luna typecheck failed in void btSerializer::finishSerialization() function, expected prototype:\nvoid btSerializer::finishSerialization()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSerializer::finishSerialization(). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->finishSerialization();

		return 0;
	}

	// const char * btSerializer::findNameForPointer(const void * ptr) const
	static int _bind_findNameForPointer(lua_State *L) {
		if (!_lg_typecheck_findNameForPointer(L)) {
			luaL_error(L, "luna typecheck failed in const char * btSerializer::findNameForPointer(const void * ptr) const function, expected prototype:\nconst char * btSerializer::findNameForPointer(const void * ptr) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* ptr=(Luna< void >::check(L,2));

		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * btSerializer::findNameForPointer(const void *) const. Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->findNameForPointer(ptr);
		lua_pushstring(L,lret);

		return 1;
	}

	// void btSerializer::registerNameForPointer(const void * ptr, const char * name)
	static int _bind_registerNameForPointer(lua_State *L) {
		if (!_lg_typecheck_registerNameForPointer(L)) {
			luaL_error(L, "luna typecheck failed in void btSerializer::registerNameForPointer(const void * ptr, const char * name) function, expected prototype:\nvoid btSerializer::registerNameForPointer(const void * ptr, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* ptr=(Luna< void >::check(L,2));
		const char * name=(const char *)lua_tostring(L,3);

		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSerializer::registerNameForPointer(const void *, const char *). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->registerNameForPointer(ptr, name);

		return 0;
	}

	// int btSerializer::getSerializationFlags() const
	static int _bind_getSerializationFlags(lua_State *L) {
		if (!_lg_typecheck_getSerializationFlags(L)) {
			luaL_error(L, "luna typecheck failed in int btSerializer::getSerializationFlags() const function, expected prototype:\nint btSerializer::getSerializationFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btSerializer::getSerializationFlags() const. Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getSerializationFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btSerializer::setSerializationFlags(int flags)
	static int _bind_setSerializationFlags(lua_State *L) {
		if (!_lg_typecheck_setSerializationFlags(L)) {
			luaL_error(L, "luna typecheck failed in void btSerializer::setSerializationFlags(int flags) function, expected prototype:\nvoid btSerializer::setSerializationFlags(int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,2);

		btSerializer* self=(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btSerializer::setSerializationFlags(int). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSerializationFlags(flags);

		return 0;
	}


	// Operator binds:

};

btSerializer* LunaTraits< btSerializer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btSerializer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const unsigned char * btSerializer::getBufferPointer() const
	// int btSerializer::getCurrentBufferSize() const
	// btChunk * btSerializer::allocate(size_t size, int numElements)
	// void btSerializer::finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr)
	// void * btSerializer::findPointer(void * oldPtr)
	// void * btSerializer::getUniquePointer(void * oldPtr)
	// void btSerializer::startSerialization()
	// void btSerializer::finishSerialization()
	// const char * btSerializer::findNameForPointer(const void * ptr) const
	// void btSerializer::registerNameForPointer(const void * ptr, const char * name)
	// void btSerializer::serializeName(const char * ptr)
	// int btSerializer::getSerializationFlags() const
	// void btSerializer::setSerializationFlags(int flags)
}

void LunaTraits< btSerializer >::_bind_dtor(btSerializer* obj) {
	delete obj;
}

const char LunaTraits< btSerializer >::className[] = "btSerializer";
const char LunaTraits< btSerializer >::fullName[] = "btSerializer";
const char LunaTraits< btSerializer >::moduleName[] = "bullet";
const char* LunaTraits< btSerializer >::parents[] = {0};
const int LunaTraits< btSerializer >::hash = 75337529;
const int LunaTraits< btSerializer >::uniqueIDs[] = {75337529,0};

luna_RegType LunaTraits< btSerializer >::methods[] = {
	{"getBufferPointer", &luna_wrapper_btSerializer::_bind_getBufferPointer},
	{"getCurrentBufferSize", &luna_wrapper_btSerializer::_bind_getCurrentBufferSize},
	{"allocate", &luna_wrapper_btSerializer::_bind_allocate},
	{"finalizeChunk", &luna_wrapper_btSerializer::_bind_finalizeChunk},
	{"findPointer", &luna_wrapper_btSerializer::_bind_findPointer},
	{"getUniquePointer", &luna_wrapper_btSerializer::_bind_getUniquePointer},
	{"startSerialization", &luna_wrapper_btSerializer::_bind_startSerialization},
	{"finishSerialization", &luna_wrapper_btSerializer::_bind_finishSerialization},
	{"findNameForPointer", &luna_wrapper_btSerializer::_bind_findNameForPointer},
	{"registerNameForPointer", &luna_wrapper_btSerializer::_bind_registerNameForPointer},
	{"getSerializationFlags", &luna_wrapper_btSerializer::_bind_getSerializationFlags},
	{"setSerializationFlags", &luna_wrapper_btSerializer::_bind_setSerializationFlags},
	{"dynCast", &luna_wrapper_btSerializer::_bind_dynCast},
	{"__eq", &luna_wrapper_btSerializer::_bind___eq},
	{"fromVoid", &luna_wrapper_btSerializer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btSerializer::_bind_asVoid},
	{"getTable", &luna_wrapper_btSerializer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btSerializer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btSerializer >::enumValues[] = {
	{0,0}
};


