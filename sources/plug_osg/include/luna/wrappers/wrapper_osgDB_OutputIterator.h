#ifndef _WRAPPERS_WRAPPER_OSGDB_OUTPUTITERATOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_OUTPUTITERATOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/StreamOperator>

class wrapper_osgDB_OutputIterator : public osgDB::OutputIterator, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_OutputIterator() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_OutputIterator(lua_State* L, lua_Table* dum) : osgDB::OutputIterator(), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// bool osgDB::OutputIterator::isBinary() const
	bool isBinary() const {
		THROW_IF(!_obj.pushFunction("isBinary"),"No implementation for abstract function osgDB::OutputIterator::isBinary");
		return (_obj.callFunction<bool>());
	};

	// void osgDB::OutputIterator::writeBool(bool b)
	void writeBool(bool b) {
		THROW_IF(!_obj.pushFunction("writeBool"),"No implementation for abstract function osgDB::OutputIterator::writeBool");
		_obj.pushArg(b);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeChar(char c)
	void writeChar(char c) {
		THROW_IF(!_obj.pushFunction("writeChar"),"No implementation for abstract function osgDB::OutputIterator::writeChar");
		_obj.pushArg(c);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeUChar(unsigned char c)
	void writeUChar(unsigned char c) {
		THROW_IF(!_obj.pushFunction("writeUChar"),"No implementation for abstract function osgDB::OutputIterator::writeUChar");
		_obj.pushArg(c);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeShort(short s)
	void writeShort(short s) {
		THROW_IF(!_obj.pushFunction("writeShort"),"No implementation for abstract function osgDB::OutputIterator::writeShort");
		_obj.pushArg(s);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeUShort(unsigned short s)
	void writeUShort(unsigned short s) {
		THROW_IF(!_obj.pushFunction("writeUShort"),"No implementation for abstract function osgDB::OutputIterator::writeUShort");
		_obj.pushArg(s);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeInt(int i)
	void writeInt(int i) {
		THROW_IF(!_obj.pushFunction("writeInt"),"No implementation for abstract function osgDB::OutputIterator::writeInt");
		_obj.pushArg(i);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeUInt(unsigned int i)
	void writeUInt(unsigned int i) {
		THROW_IF(!_obj.pushFunction("writeUInt"),"No implementation for abstract function osgDB::OutputIterator::writeUInt");
		_obj.pushArg(i);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeLong(long l)
	void writeLong(long l) {
		THROW_IF(!_obj.pushFunction("writeLong"),"No implementation for abstract function osgDB::OutputIterator::writeLong");
		_obj.pushArg(l);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeULong(unsigned long l)
	void writeULong(unsigned long l) {
		THROW_IF(!_obj.pushFunction("writeULong"),"No implementation for abstract function osgDB::OutputIterator::writeULong");
		_obj.pushArg(l);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeFloat(float f)
	void writeFloat(float f) {
		THROW_IF(!_obj.pushFunction("writeFloat"),"No implementation for abstract function osgDB::OutputIterator::writeFloat");
		_obj.pushArg(f);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeDouble(double d)
	void writeDouble(double d) {
		THROW_IF(!_obj.pushFunction("writeDouble"),"No implementation for abstract function osgDB::OutputIterator::writeDouble");
		_obj.pushArg(d);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeString(const std::string & s)
	void writeString(const std::string & s) {
		THROW_IF(!_obj.pushFunction("writeString"),"No implementation for abstract function osgDB::OutputIterator::writeString");
		_obj.pushArg(s);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeGLenum(const osgDB::ObjectGLenum & value)
	void writeGLenum(const osgDB::ObjectGLenum & value) {
		THROW_IF(!_obj.pushFunction("writeGLenum"),"No implementation for abstract function osgDB::OutputIterator::writeGLenum");
		_obj.pushArg(&value);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeProperty(const osgDB::ObjectProperty & prop)
	void writeProperty(const osgDB::ObjectProperty & prop) {
		THROW_IF(!_obj.pushFunction("writeProperty"),"No implementation for abstract function osgDB::OutputIterator::writeProperty");
		_obj.pushArg(&prop);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeMark(const osgDB::ObjectMark & mark)
	void writeMark(const osgDB::ObjectMark & mark) {
		THROW_IF(!_obj.pushFunction("writeMark"),"No implementation for abstract function osgDB::OutputIterator::writeMark");
		_obj.pushArg(&mark);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeCharArray(const char * s, unsigned int size)
	void writeCharArray(const char * s, unsigned int size) {
		THROW_IF(!_obj.pushFunction("writeCharArray"),"No implementation for abstract function osgDB::OutputIterator::writeCharArray");
		_obj.pushArg(s);
		_obj.pushArg(size);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::writeWrappedString(const std::string & str)
	void writeWrappedString(const std::string & str) {
		THROW_IF(!_obj.pushFunction("writeWrappedString"),"No implementation for abstract function osgDB::OutputIterator::writeWrappedString");
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};

	// void osgDB::OutputIterator::flush()
	void flush() {
		if(_obj.pushFunction("flush")) {
			return (_obj.callFunction<void>());
		}

		return OutputIterator::flush();
	};



	// Protected virtual methods:

	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_OutputIterator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_OutputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const");
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osgDB_OutputIterator* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_OutputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


public:
// void osgDB::OutputIterator::writeStream(std::ostream &(*)(std::ostream &) fn)
void writeStream(std::ostream &(*)(std::ostream &)) {
	THROW_IF(true,"The function call void osgDB::OutputIterator::writeStream(std::ostream &(*)(std::ostream &)) is not implemented in wrapper.");
};

public:
// void osgDB::OutputIterator::writeBase(std::ios_base &(*)(std::ios_base &) fn)
void writeBase(std::ios_base &(*)(std::ios_base &)) {
	THROW_IF(true,"The function call void osgDB::OutputIterator::writeBase(std::ios_base &(*)(std::ios_base &)) is not implemented in wrapper.");
};

};




#endif

