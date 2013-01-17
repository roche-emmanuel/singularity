#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_DataPakSource.h>

class luna_wrapper_Awesomium_DataPakSource {
public:
	typedef Luna< Awesomium::DataPakSource > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		Awesomium::DataSource* self=(Luna< Awesomium::DataSource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::DataSource,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37218942) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::DataSource*)");
		}

		Awesomium::DataSource* rhs =(Luna< Awesomium::DataSource >::check(L,2));
		Awesomium::DataSource* self=(Luna< Awesomium::DataSource >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_DataSource(lua_State *L) {
		// all checked are already performed before reaching this point.
		//Awesomium::DataPakSource* ptr= dynamic_cast< Awesomium::DataPakSource* >(Luna< Awesomium::DataSource >::check(L,1));
		Awesomium::DataPakSource* ptr= luna_caster< Awesomium::DataSource, Awesomium::DataPakSource >::cast(Luna< Awesomium::DataSource >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< Awesomium::DataPakSource >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isstring(L,1)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnRequest(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isstring(L,3)==0) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::DataPakSource::DataPakSource(const Awesomium::WebString & pak_path)
	static Awesomium::DataPakSource* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::DataPakSource::DataPakSource(const Awesomium::WebString & pak_path) function, expected prototype:\nAwesomium::DataPakSource::DataPakSource(const Awesomium::WebString & pak_path)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string pak_path_str(lua_tostring(L,1),lua_objlen(L,1));
		Awesomium::WebString pak_path = Awesomium::ToWebString(pak_path_str);

		return new Awesomium::DataPakSource(pak_path);
	}

	// Awesomium::DataPakSource::DataPakSource(lua_Table * data, const Awesomium::WebString & pak_path)
	static Awesomium::DataPakSource* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::DataPakSource::DataPakSource(lua_Table * data, const Awesomium::WebString & pak_path) function, expected prototype:\nAwesomium::DataPakSource::DataPakSource(lua_Table * data, const Awesomium::WebString & pak_path)\nClass arguments details:\narg 2 ID = 13938525\n");
		}

		std::string pak_path_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString pak_path = Awesomium::ToWebString(pak_path_str);

		return new wrapper_Awesomium_DataPakSource(L,NULL, pak_path);
	}

	// Overload binder for Awesomium::DataPakSource::DataPakSource
	static Awesomium::DataPakSource* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DataPakSource, cannot match any of the overloads for function DataPakSource:\n  DataPakSource(const Awesomium::WebString &)\n  DataPakSource(lua_Table *, const Awesomium::WebString &)\n");
		return NULL;
	}


	// Function binds:
	// void Awesomium::DataPakSource::OnRequest(int request_id, const Awesomium::WebString & path)
	static int _bind_OnRequest(lua_State *L) {
		if (!_lg_typecheck_OnRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::DataPakSource::OnRequest(int request_id, const Awesomium::WebString & path) function, expected prototype:\nvoid Awesomium::DataPakSource::OnRequest(int request_id, const Awesomium::WebString & path)\nClass arguments details:\narg 2 ID = 13938525\n");
		}

		int request_id=(int)lua_tointeger(L,2);
		std::string path_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString path = Awesomium::ToWebString(path_str);

		Awesomium::DataPakSource* self=Luna< Awesomium::DataSource >::checkSubType< Awesomium::DataPakSource >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::DataPakSource::OnRequest(int, const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::DataSource >::check(L,1)).name());
		}
		self->OnRequest(request_id, path);

		return 0;
	}

	// void Awesomium::DataPakSource::base_OnRequest(int request_id, const Awesomium::WebString & path)
	static int _bind_base_OnRequest(lua_State *L) {
		if (!_lg_typecheck_base_OnRequest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::DataPakSource::base_OnRequest(int request_id, const Awesomium::WebString & path) function, expected prototype:\nvoid Awesomium::DataPakSource::base_OnRequest(int request_id, const Awesomium::WebString & path)\nClass arguments details:\narg 2 ID = 13938525\n");
		}

		int request_id=(int)lua_tointeger(L,2);
		std::string path_str(lua_tostring(L,3),lua_objlen(L,3));
		Awesomium::WebString path = Awesomium::ToWebString(path_str);

		Awesomium::DataPakSource* self=Luna< Awesomium::DataSource >::checkSubType< Awesomium::DataPakSource >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::DataPakSource::base_OnRequest(int, const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::DataSource >::check(L,1)).name());
		}
		self->DataPakSource::OnRequest(request_id, path);

		return 0;
	}


	// Operator binds:

};

Awesomium::DataPakSource* LunaTraits< Awesomium::DataPakSource >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_DataPakSource::_bind_ctor(L);
}

void LunaTraits< Awesomium::DataPakSource >::_bind_dtor(Awesomium::DataPakSource* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::DataPakSource >::className[] = "DataPakSource";
const char LunaTraits< Awesomium::DataPakSource >::fullName[] = "Awesomium::DataPakSource";
const char LunaTraits< Awesomium::DataPakSource >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::DataPakSource >::parents[] = {"Awesomium.DataSource", 0};
const int LunaTraits< Awesomium::DataPakSource >::hash = 89297675;
const int LunaTraits< Awesomium::DataPakSource >::uniqueIDs[] = {37218942,0};

luna_RegType LunaTraits< Awesomium::DataPakSource >::methods[] = {
	{"OnRequest", &luna_wrapper_Awesomium_DataPakSource::_bind_OnRequest},
	{"base_OnRequest", &luna_wrapper_Awesomium_DataPakSource::_bind_base_OnRequest},
	{"__eq", &luna_wrapper_Awesomium_DataPakSource::_bind___eq},
	{"getTable", &luna_wrapper_Awesomium_DataPakSource::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::DataPakSource >::converters[] = {
	{"Awesomium::DataSource", &luna_wrapper_Awesomium_DataPakSource::_cast_from_DataSource},
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::DataPakSource >::enumValues[] = {
	{0,0}
};


