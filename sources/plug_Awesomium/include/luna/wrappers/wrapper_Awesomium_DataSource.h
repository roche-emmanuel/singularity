#ifndef _WRAPPERS_WRAPPER_AWESOMIUM_DATASOURCE_H_
#define _WRAPPERS_WRAPPER_AWESOMIUM_DATASOURCE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Awesomium/DataSource.h>

class wrapper_Awesomium_DataSource : public Awesomium::DataSource, public luna_wrapper_base {

public:
		

	~wrapper_Awesomium_DataSource() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_Awesomium_DataSource(lua_State* L, lua_Table* dum) : Awesomium::DataSource(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void Awesomium::DataSource::OnRequest(int request_id, const Awesomium::WebString & path)
	void OnRequest(int request_id, const Awesomium::WebString & path) {
		THROW_IF(!_obj.pushFunction("OnRequest"),"No implementation for abstract function Awesomium::DataSource::OnRequest");
		_obj.pushArg(request_id);
		_obj.pushArg(&path);
		return (_obj.callFunction<void>());
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
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void Awesomium::DataSource::public_set_session(Awesomium::WebSession * session, int data_source_id)
	static int _bind_public_set_session(lua_State *L) {
		if (!_lg_typecheck_public_set_session(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::DataSource::public_set_session(Awesomium::WebSession * session, int data_source_id) function, expected prototype:\nvoid Awesomium::DataSource::public_set_session(Awesomium::WebSession * session, int data_source_id)\nClass arguments details:\narg 1 ID = 3873994\n");
		}

		Awesomium::WebSession* session=(Luna< Awesomium::WebSession >::check(L,2));
		int data_source_id=(int)lua_tointeger(L,3);

		wrapper_Awesomium_DataSource* self=Luna< Awesomium::DataSource >::checkSubType< wrapper_Awesomium_DataSource >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::DataSource::public_set_session(Awesomium::WebSession *, int)");
		}
		self->public_set_session(session, data_source_id);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_set_session",_bind_public_set_session},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

