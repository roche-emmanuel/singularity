#ifndef _WRAPPERS_WRAPPER_BTSERIALIZER_H_
#define _WRAPPERS_WRAPPER_BTSERIALIZER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <LinearMath/btSerializer.h>

class wrapper_btSerializer : public btSerializer, public luna_wrapper_base {

public:
		

	~wrapper_btSerializer() {
		logDEBUG3("Calling delete function for wrapper btSerializer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btSerializer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btSerializer(lua_State* L, lua_Table* dum) 
		: btSerializer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btSerializer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const unsigned char * btSerializer::getBufferPointer() const
	const unsigned char * getBufferPointer() const {
		THROW_IF(!_obj.pushFunction("getBufferPointer"),"No implementation for abstract function btSerializer::getBufferPointer");
		_obj.pushArg((btSerializer*)this);
		return (unsigned char*)(_obj.callFunction<void*>());
	};

	// int btSerializer::getCurrentBufferSize() const
	int getCurrentBufferSize() const {
		THROW_IF(!_obj.pushFunction("getCurrentBufferSize"),"No implementation for abstract function btSerializer::getCurrentBufferSize");
		_obj.pushArg((btSerializer*)this);
		return (_obj.callFunction<int>());
	};

	// btChunk * btSerializer::allocate(size_t size, int numElements)
	btChunk * allocate(size_t size, int numElements) {
		THROW_IF(!_obj.pushFunction("allocate"),"No implementation for abstract function btSerializer::allocate");
		_obj.pushArg((btSerializer*)this);
		_obj.pushArg(size);
		_obj.pushArg(numElements);
		return (_obj.callFunction<btChunk*>());
	};

	// void btSerializer::finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr)
	void finalizeChunk(btChunk * chunk, const char * structType, int chunkCode, void * oldPtr) {
		THROW_IF(!_obj.pushFunction("finalizeChunk"),"No implementation for abstract function btSerializer::finalizeChunk");
		_obj.pushArg((btSerializer*)this);
		_obj.pushArg(chunk);
		_obj.pushArg(structType);
		_obj.pushArg(chunkCode);
		_obj.pushArg(oldPtr);
		return (_obj.callFunction<void>());
	};

	// void * btSerializer::findPointer(void * oldPtr)
	void * findPointer(void * oldPtr) {
		THROW_IF(!_obj.pushFunction("findPointer"),"No implementation for abstract function btSerializer::findPointer");
		_obj.pushArg((btSerializer*)this);
		_obj.pushArg(oldPtr);
		return (_obj.callFunction<void*>());
	};

	// void * btSerializer::getUniquePointer(void * oldPtr)
	void * getUniquePointer(void * oldPtr) {
		THROW_IF(!_obj.pushFunction("getUniquePointer"),"No implementation for abstract function btSerializer::getUniquePointer");
		_obj.pushArg((btSerializer*)this);
		_obj.pushArg(oldPtr);
		return (_obj.callFunction<void*>());
	};

	// void btSerializer::startSerialization()
	void startSerialization() {
		THROW_IF(!_obj.pushFunction("startSerialization"),"No implementation for abstract function btSerializer::startSerialization");
		_obj.pushArg((btSerializer*)this);
		return (_obj.callFunction<void>());
	};

	// void btSerializer::finishSerialization()
	void finishSerialization() {
		THROW_IF(!_obj.pushFunction("finishSerialization"),"No implementation for abstract function btSerializer::finishSerialization");
		_obj.pushArg((btSerializer*)this);
		return (_obj.callFunction<void>());
	};

	// const char * btSerializer::findNameForPointer(const void * ptr) const
	const char * findNameForPointer(const void * ptr) const {
		THROW_IF(!_obj.pushFunction("findNameForPointer"),"No implementation for abstract function btSerializer::findNameForPointer");
		_obj.pushArg((btSerializer*)this);
		_obj.pushArg(ptr);
		return (_obj.callFunction<const char*>());
	};

	// void btSerializer::registerNameForPointer(const void * ptr, const char * name)
	void registerNameForPointer(const void * ptr, const char * name) {
		THROW_IF(!_obj.pushFunction("registerNameForPointer"),"No implementation for abstract function btSerializer::registerNameForPointer");
		_obj.pushArg((btSerializer*)this);
		_obj.pushArg(ptr);
		_obj.pushArg(name);
		return (_obj.callFunction<void>());
	};

	// int btSerializer::getSerializationFlags() const
	int getSerializationFlags() const {
		THROW_IF(!_obj.pushFunction("getSerializationFlags"),"No implementation for abstract function btSerializer::getSerializationFlags");
		_obj.pushArg((btSerializer*)this);
		return (_obj.callFunction<int>());
	};

	// void btSerializer::setSerializationFlags(int flags)
	void setSerializationFlags(int flags) {
		THROW_IF(!_obj.pushFunction("setSerializationFlags"),"No implementation for abstract function btSerializer::setSerializationFlags");
		_obj.pushArg((btSerializer*)this);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// void btSerializer::serializeName(const char * ptr)
void serializeName(const char *) {
	THROW_IF(true,"The function call void btSerializer::serializeName(const char *) is not implemented in wrapper.");
};

};




#endif

