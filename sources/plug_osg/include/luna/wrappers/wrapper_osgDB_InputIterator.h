#ifndef _WRAPPERS_WRAPPER_OSGDB_INPUTITERATOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_INPUTITERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/StreamOperator>

class wrapper_osgDB_InputIterator : public osgDB::InputIterator, public luna_wrapper_base {

public:
	

	wrapper_osgDB_InputIterator(lua_State* L, lua_Table* dum) : osgDB::InputIterator(), luna_wrapper_base(L) {};

	// bool osgDB::InputIterator::isBinary() const
	bool isBinary() const {
		THROW_IF(!_obj.pushFunction("isBinary"),"No implementation for abstract function osgDB::InputIterator::isBinary");
		return (_obj.callFunction<bool>());
	};

	// void osgDB::InputIterator::readBool(bool & b)
	void readBool(bool & b) {
		THROW_IF(!_obj.pushFunction("readBool"),"No implementation for abstract function osgDB::InputIterator::readBool");
		_obj.pushArg(b);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readChar(char & c)
	void readChar(char & c) {
		THROW_IF(!_obj.pushFunction("readChar"),"No implementation for abstract function osgDB::InputIterator::readChar");
		_obj.pushArg(c);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readSChar(signed char & c)
	void readSChar(signed char & c) {
		THROW_IF(!_obj.pushFunction("readSChar"),"No implementation for abstract function osgDB::InputIterator::readSChar");
		_obj.pushArg(c);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readUChar(unsigned char & c)
	void readUChar(unsigned char & c) {
		THROW_IF(!_obj.pushFunction("readUChar"),"No implementation for abstract function osgDB::InputIterator::readUChar");
		_obj.pushArg(c);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readShort(short & s)
	void readShort(short & s) {
		THROW_IF(!_obj.pushFunction("readShort"),"No implementation for abstract function osgDB::InputIterator::readShort");
		_obj.pushArg(s);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readUShort(unsigned short & s)
	void readUShort(unsigned short & s) {
		THROW_IF(!_obj.pushFunction("readUShort"),"No implementation for abstract function osgDB::InputIterator::readUShort");
		_obj.pushArg(s);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readInt(int & i)
	void readInt(int & i) {
		THROW_IF(!_obj.pushFunction("readInt"),"No implementation for abstract function osgDB::InputIterator::readInt");
		_obj.pushArg(i);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readUInt(unsigned int & i)
	void readUInt(unsigned int & i) {
		THROW_IF(!_obj.pushFunction("readUInt"),"No implementation for abstract function osgDB::InputIterator::readUInt");
		_obj.pushArg(i);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readLong(long & l)
	void readLong(long & l) {
		THROW_IF(!_obj.pushFunction("readLong"),"No implementation for abstract function osgDB::InputIterator::readLong");
		_obj.pushArg(l);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readULong(unsigned long & l)
	void readULong(unsigned long & l) {
		THROW_IF(!_obj.pushFunction("readULong"),"No implementation for abstract function osgDB::InputIterator::readULong");
		_obj.pushArg(l);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readFloat(float & f)
	void readFloat(float & f) {
		THROW_IF(!_obj.pushFunction("readFloat"),"No implementation for abstract function osgDB::InputIterator::readFloat");
		_obj.pushArg(f);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readDouble(double & d)
	void readDouble(double & d) {
		THROW_IF(!_obj.pushFunction("readDouble"),"No implementation for abstract function osgDB::InputIterator::readDouble");
		_obj.pushArg(d);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readString(std::string & s)
	void readString(std::string & s) {
		THROW_IF(!_obj.pushFunction("readString"),"No implementation for abstract function osgDB::InputIterator::readString");
		_obj.pushArg(s);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value)
	void readGLenum(osgDB::ObjectGLenum & value) {
		THROW_IF(!_obj.pushFunction("readGLenum"),"No implementation for abstract function osgDB::InputIterator::readGLenum");
		_obj.pushArg(&value);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop)
	void readProperty(osgDB::ObjectProperty & prop) {
		THROW_IF(!_obj.pushFunction("readProperty"),"No implementation for abstract function osgDB::InputIterator::readProperty");
		_obj.pushArg(&prop);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readMark(osgDB::ObjectMark & mark)
	void readMark(osgDB::ObjectMark & mark) {
		THROW_IF(!_obj.pushFunction("readMark"),"No implementation for abstract function osgDB::InputIterator::readMark");
		_obj.pushArg(&mark);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readCharArray(char * s, unsigned int size)
	void readCharArray(char * s, unsigned int size) {
		THROW_IF(!_obj.pushFunction("readCharArray"),"No implementation for abstract function osgDB::InputIterator::readCharArray");
		_obj.pushArg(s);
		_obj.pushArg(size);
		return (_obj.callFunction<void>());
	};

	// void osgDB::InputIterator::readWrappedString(std::string & str)
	void readWrappedString(std::string & str) {
		THROW_IF(!_obj.pushFunction("readWrappedString"),"No implementation for abstract function osgDB::InputIterator::readWrappedString");
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};

	// bool osgDB::InputIterator::matchString(const std::string & arg1)
	bool matchString(const std::string & arg1) {
		if(_obj.pushFunction("matchString")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<bool>());
		}

		return InputIterator::matchString(arg1);
	};

	// void osgDB::InputIterator::advanceToCurrentEndBracket()
	void advanceToCurrentEndBracket() {
		if(_obj.pushFunction("advanceToCurrentEndBracket")) {
			return (_obj.callFunction<void>());
		}

		return InputIterator::advanceToCurrentEndBracket();
	};




};




#endif

