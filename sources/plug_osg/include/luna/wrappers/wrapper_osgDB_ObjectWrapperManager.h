#ifndef _WRAPPERS_WRAPPER_OSGDB_OBJECTWRAPPERMANAGER_H_
#define _WRAPPERS_WRAPPER_OSGDB_OBJECTWRAPPERMANAGER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ObjectWrapper>

class wrapper_osgDB_ObjectWrapperManager : public osgDB::ObjectWrapperManager, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_ObjectWrapperManager() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_ObjectWrapperManager(lua_State* L, lua_Table* dum) : osgDB::ObjectWrapperManager(), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:


	// Protected virtual methods:

	// Protected non-virtual methods:
	// osgDB::IntLookup & osgDB::ObjectWrapperManager::findLookup(const std::string & group)
	osgDB::IntLookup & public_findLookup(const std::string & group) {
		return osgDB::ObjectWrapperManager::findLookup(group);
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
	inline static bool _lg_typecheck_public_findLookup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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
	// osgDB::IntLookup & osgDB::ObjectWrapperManager::public_findLookup(const std::string & group)
	static int _bind_public_findLookup(lua_State *L) {
		if (!_lg_typecheck_public_findLookup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::IntLookup & osgDB::ObjectWrapperManager::public_findLookup(const std::string & group) function, expected prototype:\nosgDB::IntLookup & osgDB::ObjectWrapperManager::public_findLookup(const std::string & group)\nClass arguments details:\n");
		}

		std::string group(lua_tostring(L,2),lua_objlen(L,2));

		wrapper_osgDB_ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_ObjectWrapperManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::IntLookup & osgDB::ObjectWrapperManager::public_findLookup(const std::string &)");
		}
		const osgDB::IntLookup* lret = &self->public_findLookup(group);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::IntLookup >::push(L,lret,false);

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

		wrapper_osgDB_ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_ObjectWrapperManager >(L,1);
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


		wrapper_osgDB_ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_ObjectWrapperManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"findLookup",_bind_public_findLookup},
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

