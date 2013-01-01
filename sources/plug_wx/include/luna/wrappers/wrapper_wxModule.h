#ifndef _WRAPPERS_WRAPPER_WXMODULE_H_
#define _WRAPPERS_WRAPPER_WXMODULE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/module.h>

class wrapper_wxModule : public wxModule, public luna_wrapper_base {

public:
		

	~wrapper_wxModule() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxModule(lua_State* L, lua_Table* dum) : wxModule(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxModule::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxModule::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxModule::GetClassInfo();
	};

	// void wxModule::OnExit()
	void OnExit() {
		THROW_IF(!_obj.pushFunction("OnExit"),"No implementation for abstract function wxModule::OnExit");
		return (_obj.callFunction<void>());
	};

	// bool wxModule::OnInit()
	bool OnInit() {
		THROW_IF(!_obj.pushFunction("OnInit"),"No implementation for abstract function wxModule::OnInit");
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:
	// void wxModule::AddDependency(wxClassInfo * dep)
	void public_AddDependency(wxClassInfo * dep) {
		return wxModule::AddDependency(dep);
	};

	// void wxModule::AddDependency(const char * classname)
	void public_AddDependency(const char * classname) {
		return wxModule::AddDependency(classname);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_AddDependency_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96106697)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxClassInfo >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_AddDependency_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void wxModule::public_AddDependency(wxClassInfo * dep)
	static int _bind_public_AddDependency_overload_1(lua_State *L) {
		if (!_lg_typecheck_public_AddDependency_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxModule::public_AddDependency(wxClassInfo * dep) function, expected prototype:\nvoid wxModule::public_AddDependency(wxClassInfo * dep)\nClass arguments details:\narg 1 ID = 96106697\n");
		}

		wxClassInfo* dep=(Luna< wxClassInfo >::check(L,2));

		wrapper_wxModule* self=Luna< wxObject >::checkSubType< wrapper_wxModule >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxModule::public_AddDependency(wxClassInfo *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->public_AddDependency(dep);

		return 0;
	}

	// void wxModule::public_AddDependency(const char * classname)
	static int _bind_public_AddDependency_overload_2(lua_State *L) {
		if (!_lg_typecheck_public_AddDependency_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxModule::public_AddDependency(const char * classname) function, expected prototype:\nvoid wxModule::public_AddDependency(const char * classname)\nClass arguments details:\n");
		}

		const char * classname=(const char *)lua_tostring(L,2);

		wrapper_wxModule* self=Luna< wxObject >::checkSubType< wrapper_wxModule >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxModule::public_AddDependency(const char *). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->public_AddDependency(classname);

		return 0;
	}

	// Overload binder for wxModule::public_AddDependency
	static int _bind_public_AddDependency(lua_State *L) {
		if (_lg_typecheck_public_AddDependency_overload_1(L)) return _bind_public_AddDependency_overload_1(L);
		if (_lg_typecheck_public_AddDependency_overload_2(L)) return _bind_public_AddDependency_overload_2(L);

		luaL_error(L, "error in function public_AddDependency, cannot match any of the overloads for function public_AddDependency:\n  public_AddDependency(wxClassInfo *)\n  public_AddDependency(const char *)\n");
		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_AddDependency",_bind_public_AddDependency},
		{"protected_AddDependency",_bind_public_AddDependency},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

