#ifndef _WRAPPERS_WRAPPER_OSGDB_FILELOCATIONCALLBACK_H_
#define _WRAPPERS_WRAPPER_OSGDB_FILELOCATIONCALLBACK_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Callbacks>

class wrapper_osgDB_FileLocationCallback : public osgDB::FileLocationCallback, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_FileLocationCallback() {
		logDEBUG3("Calling delete function for wrapper osgDB_FileLocationCallback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::FileLocationCallback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_FileLocationCallback(lua_State* L, lua_Table* dum) 
		: osgDB::FileLocationCallback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::FileLocationCallback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgDB::FileLocationCallback*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return FileLocationCallback::setThreadSafeRefUnref(threadSafe);
	};

	// osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options)
	osgDB::FileLocationCallback::Location fileLocation(const std::string & filename, const osgDB::Options * options) {
		THROW_IF(!_obj.pushFunction("fileLocation"),"No implementation for abstract function osgDB::FileLocationCallback::fileLocation");
		_obj.pushArg((osgDB::FileLocationCallback*)this);
		_obj.pushArg(filename);
		_obj.pushArg(options);
		return (osgDB::FileLocationCallback::Location)(_obj.callFunction<int>());
	};

	// bool osgDB::FileLocationCallback::useFileCache() const
	bool useFileCache() const {
		THROW_IF(!_obj.pushFunction("useFileCache"),"No implementation for abstract function osgDB::FileLocationCallback::useFileCache");
		_obj.pushArg((osgDB::FileLocationCallback*)this);
		return (_obj.callFunction<bool>());
	};


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

		wrapper_osgDB_FileLocationCallback* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_FileLocationCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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


		wrapper_osgDB_FileLocationCallback* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_FileLocationCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

