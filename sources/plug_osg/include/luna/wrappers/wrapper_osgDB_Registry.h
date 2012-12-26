#ifndef _WRAPPERS_WRAPPER_OSGDB_REGISTRY_H_
#define _WRAPPERS_WRAPPER_OSGDB_REGISTRY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Registry>

class wrapper_osgDB_Registry : public osgDB::Registry, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_Registry() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_Registry(lua_State* L, lua_Table* dum) : osgDB::Registry(), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:


	// Protected virtual methods:

	// Protected non-virtual methods:
	// void osgDB::Registry::destruct()
	void public_destruct() {
		return osgDB::Registry::destruct();
	};

	// static std::string osgDB::Registry::trim(const std::string & str)
	static std::string public_trim(const std::string & str) {
		return osgDB::Registry::trim(str);
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
	inline static bool _lg_typecheck_public_destruct(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_trim(lua_State *L) {
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
	// void osgDB::Registry::public_destruct()
	static int _bind_public_destruct(lua_State *L) {
		if (!_lg_typecheck_public_destruct(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Registry::public_destruct() function, expected prototype:\nvoid osgDB::Registry::public_destruct()\nClass arguments details:\n");
		}


		wrapper_osgDB_Registry* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_Registry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Registry::public_destruct()");
		}
		self->public_destruct();

		return 0;
	}

	// static std::string osgDB::Registry::public_trim(const std::string & str)
	static int _bind_public_trim(lua_State *L) {
		if (!_lg_typecheck_public_trim(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static std::string osgDB::Registry::public_trim(const std::string & str) function, expected prototype:\nstatic std::string osgDB::Registry::public_trim(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,1),lua_objlen(L,1));

		wrapper_osgDB_Registry* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_Registry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static std::string osgDB::Registry::public_trim(const std::string &)");
		}
		std::string lret = self->public_trim(str);
		lua_pushlstring(L,lret.data(),lret.size());

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

		wrapper_osgDB_Registry* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_Registry >(L,1);
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


		wrapper_osgDB_Registry* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_Registry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_destruct",_bind_public_destruct},
		{"protected_trim",_bind_public_trim},
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

