#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_DATAPAKSOURCE_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_DATAPAKSOURCE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Awesomium/DataPak.h>

class wrapper_Awesomium_DataPakSource : public Awesomium::DataPakSource, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_DataPakSource() {
		logDEBUG3("Calling delete function for wrapper Awesomium_DataPakSource");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((Awesomium::DataPakSource*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_DataPakSource(lua_State* L, lua_Table* dum, const Awesomium::WebString & pak_path) 
		: Awesomium::DataPakSource(pak_path), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((Awesomium::DataPakSource*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::DataPakSource::OnRequest(int request_id, const Awesomium::WebString & path)
	void OnRequest(int request_id, const Awesomium::WebString & path) {
		if(_obj.pushFunction("OnRequest")) {
			_obj.pushArg((Awesomium::DataPakSource*)this);
			_obj.pushArg(request_id);
			_obj.pushArg(&path);
			return (_obj.callFunction<void>());
		}

		return DataPakSource::OnRequest(request_id, path);
	};


	// Protected non-virtual methods:
	// void Awesomium::DataSource::set_session(Awesomium::WebSession * session, int data_source_id)
	void public_set_session(Awesomium::WebSession * session, int data_source_id) {
		return Awesomium::DataSource::set_session(session, data_source_id);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_set_session(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3873994)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void Awesomium::DataSource::public_set_session(Awesomium::WebSession * session, int data_source_id)
	static int _bind_public_set_session(lua_State *L) {
		if (!_lg_typecheck_public_set_session(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::DataSource::public_set_session(Awesomium::WebSession * session, int data_source_id) function, expected prototype:\nvoid Awesomium::DataSource::public_set_session(Awesomium::WebSession * session, int data_source_id)\nClass arguments details:\narg 1 ID = 3873994\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebSession* session=(Luna< Awesomium::WebSession >::check(L,2));
		int data_source_id=(int)lua_tointeger(L,3);

		wrapper_Awesomium_DataPakSource* self=Luna< Awesomium::DataSource >::checkSubType< wrapper_Awesomium_DataPakSource >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::DataSource::public_set_session(Awesomium::WebSession *, int). Got : '%s'\n%s",typeid(Luna< Awesomium::DataSource >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_set_session(session, data_source_id);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"set_session",_bind_public_set_session},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

