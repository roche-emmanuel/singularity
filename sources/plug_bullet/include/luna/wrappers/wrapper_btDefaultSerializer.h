#ifndef _WRAPPERS_WRAPPER_BTDEFAULTSERIALIZER_H_
#define _WRAPPERS_WRAPPER_BTDEFAULTSERIALIZER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <LinearMath/btSerializer.h>

class wrapper_btDefaultSerializer : public btDefaultSerializer, public luna_wrapper_base {

public:
		

	~wrapper_btDefaultSerializer() {
		logDEBUG3("Calling delete function for wrapper btDefaultSerializer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btDefaultSerializer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btDefaultSerializer(lua_State* L, lua_Table* dum, int totalSize = 0) 
		: btDefaultSerializer(totalSize), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btDefaultSerializer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void * btDefaultSerializer::findPointer(void * oldPtr)
	void * findPointer(void * oldPtr) {
		if(_obj.pushFunction("findPointer")) {
			_obj.pushArg((btDefaultSerializer*)this);
			_obj.pushArg(oldPtr);
			return (_obj.callFunction<void*>());
		}

		return btDefaultSerializer::findPointer(oldPtr);
	};

public:
	// Public virtual methods:
	// void btDefaultSerializer::startSerialization()
	void startSerialization() {
		if(_obj.pushFunction("startSerialization")) {
			_obj.pushArg((btDefaultSerializer*)this);
			return (_obj.callFunction<void>());
		}

		return btDefaultSerializer::startSerialization();
	};

	// void btDefaultSerializer::finishSerialization()
	void finishSerialization() {
		if(_obj.pushFunction("finishSerialization")) {
			_obj.pushArg((btDefaultSerializer*)this);
			return (_obj.callFunction<void>());
		}

		return btDefaultSerializer::finishSerialization();
	};

	// void * btDefaultSerializer::getUniquePointer(void * oldPtr)
	void * getUniquePointer(void * oldPtr) {
		if(_obj.pushFunction("getUniquePointer")) {
			_obj.pushArg((btDefaultSerializer*)this);
			_obj.pushArg(oldPtr);
			return (_obj.callFunction<void*>());
		}

		return btDefaultSerializer::getUniquePointer(oldPtr);
	};

	// const unsigned char * btDefaultSerializer::getBufferPointer() const
	const unsigned char * getBufferPointer() const {
		if(_obj.pushFunction("getBufferPointer")) {
			_obj.pushArg((btDefaultSerializer*)this);
			return (unsigned char*)(_obj.callFunction<void*>());
		}

		return btDefaultSerializer::getBufferPointer();
	};

	// int btDefaultSerializer::getCurrentBufferSize() const
	int getCurrentBufferSize() const {
		if(_obj.pushFunction("getCurrentBufferSize")) {
			_obj.pushArg((btDefaultSerializer*)this);
			return (_obj.callFunction<int>());
		}

		return btDefaultSerializer::getCurrentBufferSize();
	};

	// void btDefaultSerializer::finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr)
	void finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr) {
		if(_obj.pushFunction("finalizeChunk")) {
			_obj.pushArg((btDefaultSerializer*)this);
			_obj.pushArg(chunk);
			_obj.pushArg(structType);
			_obj.pushArg(chunkCode);
			_obj.pushArg(oldPtr);
			return (_obj.callFunction<void>());
		}

		return btDefaultSerializer::finalizeChunk(chunk, structType, chunkCode, oldPtr);
	};

	// unsigned char * btDefaultSerializer::internalAlloc(size_t size)
	unsigned char * internalAlloc(size_t size) {
		if(_obj.pushFunction("internalAlloc")) {
			_obj.pushArg((btDefaultSerializer*)this);
			_obj.pushArg(size);
			return (unsigned char*)(_obj.callFunction<void*>());
		}

		return btDefaultSerializer::internalAlloc(size);
	};

	// btChunk * btDefaultSerializer::allocate(size_t size, int numElements)
	btChunk * allocate(size_t size, int numElements) {
		if(_obj.pushFunction("allocate")) {
			_obj.pushArg((btDefaultSerializer*)this);
			_obj.pushArg(size);
			_obj.pushArg(numElements);
			return (_obj.callFunction<btChunk*>());
		}

		return btDefaultSerializer::allocate(size, numElements);
	};

	// const char * btDefaultSerializer::findNameForPointer(const void * ptr) const
	const char * findNameForPointer(const void * ptr) const {
		if(_obj.pushFunction("findNameForPointer")) {
			_obj.pushArg((btDefaultSerializer*)this);
			_obj.pushArg(ptr);
			return (_obj.callFunction<const char*>());
		}

		return btDefaultSerializer::findNameForPointer(ptr);
	};

	// void btDefaultSerializer::registerNameForPointer(const void * ptr, const char * name)
	void registerNameForPointer(const void * ptr, const char * name) {
		if(_obj.pushFunction("registerNameForPointer")) {
			_obj.pushArg((btDefaultSerializer*)this);
			_obj.pushArg(ptr);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return btDefaultSerializer::registerNameForPointer(ptr, name);
	};

	// int btDefaultSerializer::getSerializationFlags() const
	int getSerializationFlags() const {
		if(_obj.pushFunction("getSerializationFlags")) {
			_obj.pushArg((btDefaultSerializer*)this);
			return (_obj.callFunction<int>());
		}

		return btDefaultSerializer::getSerializationFlags();
	};

	// void btDefaultSerializer::setSerializationFlags(int flags)
	void setSerializationFlags(int flags) {
		if(_obj.pushFunction("setSerializationFlags")) {
			_obj.pushArg((btDefaultSerializer*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return btDefaultSerializer::setSerializationFlags(flags);
	};


	// Protected non-virtual methods:
	// void btDefaultSerializer::writeDNA()
	void public_writeDNA() {
		return btDefaultSerializer::writeDNA();
	};

	// int btDefaultSerializer::getReverseType(const char * type) const
	int public_getReverseType(const char * type) const {
		return btDefaultSerializer::getReverseType(type);
	};

	// void btDefaultSerializer::initDNA(const char * bdnaOrg, int dnalen)
	void public_initDNA(const char * bdnaOrg, int dnalen) {
		return btDefaultSerializer::initDNA(bdnaOrg, dnalen);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_writeDNA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getReverseType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_initDNA(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void btDefaultSerializer::public_writeDNA()
	static int _bind_public_writeDNA(lua_State *L) {
		if (!_lg_typecheck_public_writeDNA(L)) {
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::public_writeDNA() function, expected prototype:\nvoid btDefaultSerializer::public_writeDNA()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_btDefaultSerializer* self=Luna< btSerializer >::checkSubType< wrapper_btDefaultSerializer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::public_writeDNA(). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_writeDNA();

		return 0;
	}

	// int btDefaultSerializer::public_getReverseType(const char * type) const
	static int _bind_public_getReverseType(lua_State *L) {
		if (!_lg_typecheck_public_getReverseType(L)) {
			luaL_error(L, "luna typecheck failed in int btDefaultSerializer::public_getReverseType(const char * type) const function, expected prototype:\nint btDefaultSerializer::public_getReverseType(const char * type) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * type=(const char *)lua_tostring(L,2);

		wrapper_btDefaultSerializer* self=Luna< btSerializer >::checkSubType< wrapper_btDefaultSerializer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int btDefaultSerializer::public_getReverseType(const char *) const. Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_getReverseType(type);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btDefaultSerializer::public_initDNA(const char * bdnaOrg, int dnalen)
	static int _bind_public_initDNA(lua_State *L) {
		if (!_lg_typecheck_public_initDNA(L)) {
			luaL_error(L, "luna typecheck failed in void btDefaultSerializer::public_initDNA(const char * bdnaOrg, int dnalen) function, expected prototype:\nvoid btDefaultSerializer::public_initDNA(const char * bdnaOrg, int dnalen)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * bdnaOrg=(const char *)lua_tostring(L,2);
		int dnalen=(int)lua_tointeger(L,3);

		wrapper_btDefaultSerializer* self=Luna< btSerializer >::checkSubType< wrapper_btDefaultSerializer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDefaultSerializer::public_initDNA(const char *, int). Got : '%s'\n%s",typeid(Luna< btSerializer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_initDNA(bdnaOrg, dnalen);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"writeDNA",_bind_public_writeDNA},
		{"getReverseType",_bind_public_getReverseType},
		{"initDNA",_bind_public_initDNA},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

