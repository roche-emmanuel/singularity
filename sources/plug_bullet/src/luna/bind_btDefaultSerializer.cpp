#include <plug_common.h>

#include <luna/wrappers/wrapper_btDefaultSerializer.h>

class luna_wrapper_btDefaultSerializer {
public:
	typedef Luna< btDefaultSerializer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btSerializer*)");
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		btDefaultSerializer* self= (btDefaultSerializer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDefaultSerializer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75337529) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btSerializer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_btSerializer(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btDefaultSerializer* ptr= dynamic_cast< btDefaultSerializer* >(Luna< btSerializer >::check(L,1));
		btDefaultSerializer* ptr= luna_caster< btSerializer, btDefaultSerializer >::cast(Luna< btSerializer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btDefaultSerializer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_writeHeader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_getUniquePointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBufferPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrentBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_finalizeChunk(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,61426957)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_internalAlloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSerializationFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSerializationFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_startSerialization(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_finishSerialization(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUniquePointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBufferPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCurrentBufferSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_finalizeChunk(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,61426957)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_internalAlloc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_allocate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_findNameForPointer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_registerNameForPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getSerializationFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setSerializationFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDefaultSerializer::btDefaultSerializer(int totalSize = 0)
	static btDefaultSerializer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDefaultSerializer::btDefaultSerializer(int totalSize = 0) function, expected prototype:\nbtDefaultSerializer::btDefaultSerializer(int totalSize = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int totalSize=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;

		return new btDefaultSerializer(totalSize);
	}

	// btDefaultSerializer::btDefaultSerializer(lua_Table * data, int totalSize = 0)
	static btDefaultSerializer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDefaultSerializer::btDefaultSerializer(lua_Table * data, int totalSize = 0) function, expected prototype:\nbtDefaultSerializer::btDefaultSerializer(lua_Table * data, int totalSize = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int totalSize=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wrapper_btDefaultSerializer(L,NULL, totalSize);
	}

	// Overload binder for btDefaultSerializer::btDefaultSerializer
	static btDefaultSerializer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function btDefaultSerializer, cannot match any of the overloads for function btDefaultSerializer:\n  btDefaultSerializer(int)\n  btDefaultSerializer(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// void btDefaultSerializer::writeHeader(unsigned char * buffer) const
	static int _bind_writeHeader(lua_State *L) {
		if (!_lg_typecheck_writeHeader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::writeHeader(unsigned char * buffer) const function, expected prototype:\nvoid btDefaultSerializer::writeHeader(unsigned char * buffer) const\nClass arguments details:\n");
		}

		unsigned char buffer = (unsigned char)(lua_tointeger(L,2));

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::writeHeader(unsigned char *) const. Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->writeHeader(&buffer);

		return 0;
	}

	// void btDefaultSerializer::startSerialization()
	static int _bind_startSerialization(lua_State *L) {
		if (!_lg_typecheck_startSerialization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::startSerialization() function, expected prototype:\nvoid btDefaultSerializer::startSerialization()\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::startSerialization(). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->startSerialization();

		return 0;
	}

	// void btDefaultSerializer::finishSerialization()
	static int _bind_finishSerialization(lua_State *L) {
		if (!_lg_typecheck_finishSerialization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::finishSerialization() function, expected prototype:\nvoid btDefaultSerializer::finishSerialization()\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::finishSerialization(). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->finishSerialization();

		return 0;
	}

	// void * btDefaultSerializer::getUniquePointer(void * oldPtr)
	static int _bind_getUniquePointer(lua_State *L) {
		if (!_lg_typecheck_getUniquePointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btDefaultSerializer::getUniquePointer(void * oldPtr) function, expected prototype:\nvoid * btDefaultSerializer::getUniquePointer(void * oldPtr)\nClass arguments details:\n");
		}

		void* oldPtr=(Luna< void >::check(L,2));

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btDefaultSerializer::getUniquePointer(void *). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		void * lret = self->getUniquePointer(oldPtr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const unsigned char * btDefaultSerializer::getBufferPointer() const
	static int _bind_getBufferPointer(lua_State *L) {
		if (!_lg_typecheck_getBufferPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * btDefaultSerializer::getBufferPointer() const function, expected prototype:\nconst unsigned char * btDefaultSerializer::getBufferPointer() const\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * btDefaultSerializer::getBufferPointer() const. Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		const unsigned char * lret = self->getBufferPointer();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int btDefaultSerializer::getCurrentBufferSize() const
	static int _bind_getCurrentBufferSize(lua_State *L) {
		if (!_lg_typecheck_getCurrentBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDefaultSerializer::getCurrentBufferSize() const function, expected prototype:\nint btDefaultSerializer::getCurrentBufferSize() const\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDefaultSerializer::getCurrentBufferSize() const. Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		int lret = self->getCurrentBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDefaultSerializer::finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr)
	static int _bind_finalizeChunk(lua_State *L) {
		if (!_lg_typecheck_finalizeChunk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr) function, expected prototype:\nvoid btDefaultSerializer::finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr)\nClass arguments details:\narg 1 ID = 61426957\n");
		}

		btChunk* chunk=(Luna< btChunk >::check(L,2));
		const char * structType=(const char *)lua_tostring(L,3);
		int chunkCode=(int)lua_tointeger(L,4);
		void* oldPtr=(Luna< void >::check(L,5));

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::finalizeChunk(btChunk *, const char *, int, void *). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->finalizeChunk(chunk, structType, chunkCode, oldPtr);

		return 0;
	}

	// unsigned char * btDefaultSerializer::internalAlloc(size_t size)
	static int _bind_internalAlloc(lua_State *L) {
		if (!_lg_typecheck_internalAlloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char * btDefaultSerializer::internalAlloc(size_t size) function, expected prototype:\nunsigned char * btDefaultSerializer::internalAlloc(size_t size)\nClass arguments details:\n");
		}

		size_t size=(size_t)lua_tointeger(L,2);

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char * btDefaultSerializer::internalAlloc(size_t). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		unsigned char * lret = self->internalAlloc(size);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// btChunk * btDefaultSerializer::allocate(size_t size, int numElements)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btChunk * btDefaultSerializer::allocate(size_t size, int numElements) function, expected prototype:\nbtChunk * btDefaultSerializer::allocate(size_t size, int numElements)\nClass arguments details:\n");
		}

		size_t size=(size_t)lua_tointeger(L,2);
		int numElements=(int)lua_tointeger(L,3);

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btChunk * btDefaultSerializer::allocate(size_t, int). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		btChunk * lret = self->allocate(size, numElements);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btChunk >::push(L,lret,false);

		return 1;
	}

	// const char * btDefaultSerializer::findNameForPointer(const void * ptr) const
	static int _bind_findNameForPointer(lua_State *L) {
		if (!_lg_typecheck_findNameForPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btDefaultSerializer::findNameForPointer(const void * ptr) const function, expected prototype:\nconst char * btDefaultSerializer::findNameForPointer(const void * ptr) const\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btDefaultSerializer::findNameForPointer(const void *) const. Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		const char * lret = self->findNameForPointer(ptr);
		lua_pushstring(L,lret);

		return 1;
	}

	// void btDefaultSerializer::registerNameForPointer(const void * ptr, const char * name)
	static int _bind_registerNameForPointer(lua_State *L) {
		if (!_lg_typecheck_registerNameForPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::registerNameForPointer(const void * ptr, const char * name) function, expected prototype:\nvoid btDefaultSerializer::registerNameForPointer(const void * ptr, const char * name)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));
		const char * name=(const char *)lua_tostring(L,3);

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::registerNameForPointer(const void *, const char *). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->registerNameForPointer(ptr, name);

		return 0;
	}

	// int btDefaultSerializer::getSerializationFlags() const
	static int _bind_getSerializationFlags(lua_State *L) {
		if (!_lg_typecheck_getSerializationFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDefaultSerializer::getSerializationFlags() const function, expected prototype:\nint btDefaultSerializer::getSerializationFlags() const\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDefaultSerializer::getSerializationFlags() const. Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		int lret = self->getSerializationFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDefaultSerializer::setSerializationFlags(int flags)
	static int _bind_setSerializationFlags(lua_State *L) {
		if (!_lg_typecheck_setSerializationFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::setSerializationFlags(int flags) function, expected prototype:\nvoid btDefaultSerializer::setSerializationFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::setSerializationFlags(int). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->setSerializationFlags(flags);

		return 0;
	}

	// void btDefaultSerializer::base_startSerialization()
	static int _bind_base_startSerialization(lua_State *L) {
		if (!_lg_typecheck_base_startSerialization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::base_startSerialization() function, expected prototype:\nvoid btDefaultSerializer::base_startSerialization()\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::base_startSerialization(). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->btDefaultSerializer::startSerialization();

		return 0;
	}

	// void btDefaultSerializer::base_finishSerialization()
	static int _bind_base_finishSerialization(lua_State *L) {
		if (!_lg_typecheck_base_finishSerialization(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::base_finishSerialization() function, expected prototype:\nvoid btDefaultSerializer::base_finishSerialization()\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::base_finishSerialization(). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->btDefaultSerializer::finishSerialization();

		return 0;
	}

	// void * btDefaultSerializer::base_getUniquePointer(void * oldPtr)
	static int _bind_base_getUniquePointer(lua_State *L) {
		if (!_lg_typecheck_base_getUniquePointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * btDefaultSerializer::base_getUniquePointer(void * oldPtr) function, expected prototype:\nvoid * btDefaultSerializer::base_getUniquePointer(void * oldPtr)\nClass arguments details:\n");
		}

		void* oldPtr=(Luna< void >::check(L,2));

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * btDefaultSerializer::base_getUniquePointer(void *). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		void * lret = self->btDefaultSerializer::getUniquePointer(oldPtr);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const unsigned char * btDefaultSerializer::base_getBufferPointer() const
	static int _bind_base_getBufferPointer(lua_State *L) {
		if (!_lg_typecheck_base_getBufferPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * btDefaultSerializer::base_getBufferPointer() const function, expected prototype:\nconst unsigned char * btDefaultSerializer::base_getBufferPointer() const\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * btDefaultSerializer::base_getBufferPointer() const. Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		const unsigned char * lret = self->btDefaultSerializer::getBufferPointer();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int btDefaultSerializer::base_getCurrentBufferSize() const
	static int _bind_base_getCurrentBufferSize(lua_State *L) {
		if (!_lg_typecheck_base_getCurrentBufferSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDefaultSerializer::base_getCurrentBufferSize() const function, expected prototype:\nint btDefaultSerializer::base_getCurrentBufferSize() const\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDefaultSerializer::base_getCurrentBufferSize() const. Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		int lret = self->btDefaultSerializer::getCurrentBufferSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDefaultSerializer::base_finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr)
	static int _bind_base_finalizeChunk(lua_State *L) {
		if (!_lg_typecheck_base_finalizeChunk(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::base_finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr) function, expected prototype:\nvoid btDefaultSerializer::base_finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr)\nClass arguments details:\narg 1 ID = 61426957\n");
		}

		btChunk* chunk=(Luna< btChunk >::check(L,2));
		const char * structType=(const char *)lua_tostring(L,3);
		int chunkCode=(int)lua_tointeger(L,4);
		void* oldPtr=(Luna< void >::check(L,5));

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::base_finalizeChunk(btChunk *, const char *, int, void *). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->btDefaultSerializer::finalizeChunk(chunk, structType, chunkCode, oldPtr);

		return 0;
	}

	// unsigned char * btDefaultSerializer::base_internalAlloc(size_t size)
	static int _bind_base_internalAlloc(lua_State *L) {
		if (!_lg_typecheck_base_internalAlloc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char * btDefaultSerializer::base_internalAlloc(size_t size) function, expected prototype:\nunsigned char * btDefaultSerializer::base_internalAlloc(size_t size)\nClass arguments details:\n");
		}

		size_t size=(size_t)lua_tointeger(L,2);

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char * btDefaultSerializer::base_internalAlloc(size_t). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		unsigned char * lret = self->btDefaultSerializer::internalAlloc(size);
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// btChunk * btDefaultSerializer::base_allocate(size_t size, int numElements)
	static int _bind_base_allocate(lua_State *L) {
		if (!_lg_typecheck_base_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btChunk * btDefaultSerializer::base_allocate(size_t size, int numElements) function, expected prototype:\nbtChunk * btDefaultSerializer::base_allocate(size_t size, int numElements)\nClass arguments details:\n");
		}

		size_t size=(size_t)lua_tointeger(L,2);
		int numElements=(int)lua_tointeger(L,3);

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btChunk * btDefaultSerializer::base_allocate(size_t, int). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		btChunk * lret = self->btDefaultSerializer::allocate(size, numElements);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btChunk >::push(L,lret,false);

		return 1;
	}

	// const char * btDefaultSerializer::base_findNameForPointer(const void * ptr) const
	static int _bind_base_findNameForPointer(lua_State *L) {
		if (!_lg_typecheck_base_findNameForPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * btDefaultSerializer::base_findNameForPointer(const void * ptr) const function, expected prototype:\nconst char * btDefaultSerializer::base_findNameForPointer(const void * ptr) const\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * btDefaultSerializer::base_findNameForPointer(const void *) const. Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		const char * lret = self->btDefaultSerializer::findNameForPointer(ptr);
		lua_pushstring(L,lret);

		return 1;
	}

	// void btDefaultSerializer::base_registerNameForPointer(const void * ptr, const char * name)
	static int _bind_base_registerNameForPointer(lua_State *L) {
		if (!_lg_typecheck_base_registerNameForPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::base_registerNameForPointer(const void * ptr, const char * name) function, expected prototype:\nvoid btDefaultSerializer::base_registerNameForPointer(const void * ptr, const char * name)\nClass arguments details:\n");
		}

		void* ptr=(Luna< void >::check(L,2));
		const char * name=(const char *)lua_tostring(L,3);

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::base_registerNameForPointer(const void *, const char *). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->btDefaultSerializer::registerNameForPointer(ptr, name);

		return 0;
	}

	// int btDefaultSerializer::base_getSerializationFlags() const
	static int _bind_base_getSerializationFlags(lua_State *L) {
		if (!_lg_typecheck_base_getSerializationFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDefaultSerializer::base_getSerializationFlags() const function, expected prototype:\nint btDefaultSerializer::base_getSerializationFlags() const\nClass arguments details:\n");
		}


		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDefaultSerializer::base_getSerializationFlags() const. Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		int lret = self->btDefaultSerializer::getSerializationFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDefaultSerializer::base_setSerializationFlags(int flags)
	static int _bind_base_setSerializationFlags(lua_State *L) {
		if (!_lg_typecheck_base_setSerializationFlags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::base_setSerializationFlags(int flags) function, expected prototype:\nvoid btDefaultSerializer::base_setSerializationFlags(int flags)\nClass arguments details:\n");
		}

		int flags=(int)lua_tointeger(L,2);

		btDefaultSerializer* self=Luna< btSerializer >::checkSubType< btDefaultSerializer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::base_setSerializationFlags(int). Got : '%s'",typeid(Luna< btSerializer >::check(L,1)).name());
		}
		self->btDefaultSerializer::setSerializationFlags(flags);

		return 0;
	}


	// Operator binds:

};

btDefaultSerializer* LunaTraits< btDefaultSerializer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDefaultSerializer::_bind_ctor(L);
}

void LunaTraits< btDefaultSerializer >::_bind_dtor(btDefaultSerializer* obj) {
	delete obj;
}

const char LunaTraits< btDefaultSerializer >::className[] = "btDefaultSerializer";
const char LunaTraits< btDefaultSerializer >::fullName[] = "btDefaultSerializer";
const char LunaTraits< btDefaultSerializer >::moduleName[] = "bullet";
const char* LunaTraits< btDefaultSerializer >::parents[] = {"bullet.btSerializer", 0};
const int LunaTraits< btDefaultSerializer >::hash = 55951885;
const int LunaTraits< btDefaultSerializer >::uniqueIDs[] = {75337529,0};

luna_RegType LunaTraits< btDefaultSerializer >::methods[] = {
	{"writeHeader", &luna_wrapper_btDefaultSerializer::_bind_writeHeader},
	{"startSerialization", &luna_wrapper_btDefaultSerializer::_bind_startSerialization},
	{"finishSerialization", &luna_wrapper_btDefaultSerializer::_bind_finishSerialization},
	{"getUniquePointer", &luna_wrapper_btDefaultSerializer::_bind_getUniquePointer},
	{"getBufferPointer", &luna_wrapper_btDefaultSerializer::_bind_getBufferPointer},
	{"getCurrentBufferSize", &luna_wrapper_btDefaultSerializer::_bind_getCurrentBufferSize},
	{"finalizeChunk", &luna_wrapper_btDefaultSerializer::_bind_finalizeChunk},
	{"internalAlloc", &luna_wrapper_btDefaultSerializer::_bind_internalAlloc},
	{"allocate", &luna_wrapper_btDefaultSerializer::_bind_allocate},
	{"findNameForPointer", &luna_wrapper_btDefaultSerializer::_bind_findNameForPointer},
	{"registerNameForPointer", &luna_wrapper_btDefaultSerializer::_bind_registerNameForPointer},
	{"getSerializationFlags", &luna_wrapper_btDefaultSerializer::_bind_getSerializationFlags},
	{"setSerializationFlags", &luna_wrapper_btDefaultSerializer::_bind_setSerializationFlags},
	{"base_startSerialization", &luna_wrapper_btDefaultSerializer::_bind_base_startSerialization},
	{"base_finishSerialization", &luna_wrapper_btDefaultSerializer::_bind_base_finishSerialization},
	{"base_getUniquePointer", &luna_wrapper_btDefaultSerializer::_bind_base_getUniquePointer},
	{"base_getBufferPointer", &luna_wrapper_btDefaultSerializer::_bind_base_getBufferPointer},
	{"base_getCurrentBufferSize", &luna_wrapper_btDefaultSerializer::_bind_base_getCurrentBufferSize},
	{"base_finalizeChunk", &luna_wrapper_btDefaultSerializer::_bind_base_finalizeChunk},
	{"base_internalAlloc", &luna_wrapper_btDefaultSerializer::_bind_base_internalAlloc},
	{"base_allocate", &luna_wrapper_btDefaultSerializer::_bind_base_allocate},
	{"base_findNameForPointer", &luna_wrapper_btDefaultSerializer::_bind_base_findNameForPointer},
	{"base_registerNameForPointer", &luna_wrapper_btDefaultSerializer::_bind_base_registerNameForPointer},
	{"base_getSerializationFlags", &luna_wrapper_btDefaultSerializer::_bind_base_getSerializationFlags},
	{"base_setSerializationFlags", &luna_wrapper_btDefaultSerializer::_bind_base_setSerializationFlags},
	{"__eq", &luna_wrapper_btDefaultSerializer::_bind___eq},
	{"fromVoid", &luna_wrapper_btDefaultSerializer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDefaultSerializer::_bind_asVoid},
	{"getTable", &luna_wrapper_btDefaultSerializer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDefaultSerializer >::converters[] = {
	{"btSerializer", &luna_wrapper_btDefaultSerializer::_cast_from_btSerializer},
	{0,0}
};

luna_RegEnumType LunaTraits< btDefaultSerializer >::enumValues[] = {
	{0,0}
};


