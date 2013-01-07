#ifndef _WRAPPERS_WRAPPER_OSGDB_DYNAMICLIBRARY_H_
#define _WRAPPERS_WRAPPER_OSGDB_DYNAMICLIBRARY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/DynamicLibrary>

class wrapper_osgDB_DynamicLibrary : public osgDB::DynamicLibrary, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_DynamicLibrary() {
		logDEBUG3("Calling delete function for wrapper osgDB_DynamicLibrary");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_DynamicLibrary(lua_State* L, lua_Table* dum) : osgDB::DynamicLibrary(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgDB_DynamicLibrary(lua_State* L, lua_Table* dum, const osgDB::DynamicLibrary & arg1) : osgDB::DynamicLibrary(arg1), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgDB_DynamicLibrary(lua_State* L, lua_Table* dum, const std::string & name, void * handle) : osgDB::DynamicLibrary(name, handle), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Referenced::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return DynamicLibrary::setThreadSafeRefUnref(threadSafe);
	};


	// Protected non-virtual methods:
	// static void * osgDB::DynamicLibrary::getLibraryHandle(const std::string & libraryName)
	static void * public_getLibraryHandle(const std::string & libraryName) {
		return osgDB::DynamicLibrary::getLibraryHandle(libraryName);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_getLibraryHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

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
	// static void * osgDB::DynamicLibrary::public_getLibraryHandle(const std::string & libraryName)
	static int _bind_public_getLibraryHandle(lua_State *L) {
		if (!_lg_typecheck_public_getLibraryHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void * osgDB::DynamicLibrary::public_getLibraryHandle(const std::string & libraryName) function, expected prototype:\nstatic void * osgDB::DynamicLibrary::public_getLibraryHandle(const std::string & libraryName)\nClass arguments details:\n");
		}

		std::string libraryName(lua_tostring(L,1),lua_objlen(L,1));

		wrapper_osgDB_DynamicLibrary* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_DynamicLibrary >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void * osgDB::DynamicLibrary::public_getLibraryHandle(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		void * lret = self->public_getLibraryHandle(libraryName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_DynamicLibrary* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_DynamicLibrary >(L,1);
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


		wrapper_osgDB_DynamicLibrary* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_DynamicLibrary >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_getLibraryHandle",_bind_public_getLibraryHandle},
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

