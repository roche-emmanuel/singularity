#include <plug_common.h>

class luna_wrapper_Awesomium_JSObject {
public:
	typedef Luna< Awesomium::JSObject > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47180827) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::JSObject*)");
		}

		Awesomium::JSObject* rhs =(Luna< Awesomium::JSObject >::check(L,2));
		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::JSObject");
		
		return luna_dynamicCast(L,converters,"Awesomium::JSObject",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47180827) ) return false;
		if( (!(Luna< Awesomium::JSObject >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ref_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_owner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPropertyNames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetProperty(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,36991498) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMethodNames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasMethod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Invoke(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18109170) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCustomMethod(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_last_error(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47180827) ) return false;
		return true;
	}


	// Constructor binds:
	// Awesomium::JSObject::JSObject()
	static Awesomium::JSObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSObject::JSObject() function, expected prototype:\nAwesomium::JSObject::JSObject()\nClass arguments details:\n");
		}


		return new Awesomium::JSObject();
	}

	// Awesomium::JSObject::JSObject(const Awesomium::JSObject & obj)
	static Awesomium::JSObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSObject::JSObject(const Awesomium::JSObject & obj) function, expected prototype:\nAwesomium::JSObject::JSObject(const Awesomium::JSObject & obj)\nClass arguments details:\narg 1 ID = 47180827\n");
		}

		const Awesomium::JSObject* obj_ptr=(Luna< Awesomium::JSObject >::check(L,1));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in Awesomium::JSObject::JSObject function");
		}
		const Awesomium::JSObject & obj=*obj_ptr;

		return new Awesomium::JSObject(obj);
	}

	// Overload binder for Awesomium::JSObject::JSObject
	static Awesomium::JSObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function JSObject, cannot match any of the overloads for function JSObject:\n  JSObject()\n  JSObject(const Awesomium::JSObject &)\n");
		return NULL;
	}


	// Function binds:
	// int Awesomium::JSObject::ref_count() const
	static int _bind_ref_count(lua_State *L) {
		if (!_lg_typecheck_ref_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::JSObject::ref_count() const function, expected prototype:\nint Awesomium::JSObject::ref_count() const\nClass arguments details:\n");
		}


		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::JSObject::ref_count() const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		int lret = self->ref_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::JSObjectType Awesomium::JSObject::type() const
	static int _bind_type(lua_State *L) {
		if (!_lg_typecheck_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSObjectType Awesomium::JSObject::type() const function, expected prototype:\nAwesomium::JSObjectType Awesomium::JSObject::type() const\nClass arguments details:\n");
		}


		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSObjectType Awesomium::JSObject::type() const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		Awesomium::JSObjectType lret = self->type();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebView * Awesomium::JSObject::owner() const
	static int _bind_owner(lua_State *L) {
		if (!_lg_typecheck_owner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebView * Awesomium::JSObject::owner() const function, expected prototype:\nAwesomium::WebView * Awesomium::JSObject::owner() const\nClass arguments details:\n");
		}


		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebView * Awesomium::JSObject::owner() const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		Awesomium::WebView * lret = self->owner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebView >::push(L,lret,false);

		return 1;
	}

	// Awesomium::JSArray Awesomium::JSObject::GetPropertyNames() const
	static int _bind_GetPropertyNames(lua_State *L) {
		if (!_lg_typecheck_GetPropertyNames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSArray Awesomium::JSObject::GetPropertyNames() const function, expected prototype:\nAwesomium::JSArray Awesomium::JSObject::GetPropertyNames() const\nClass arguments details:\n");
		}


		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSArray Awesomium::JSObject::GetPropertyNames() const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		Awesomium::JSArray stack_lret = self->GetPropertyNames();
		Awesomium::JSArray* lret = new Awesomium::JSArray(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSArray >::push(L,lret,true);

		return 1;
	}

	// bool Awesomium::JSObject::HasProperty(const Awesomium::WebString & name) const
	static int _bind_HasProperty(lua_State *L) {
		if (!_lg_typecheck_HasProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSObject::HasProperty(const Awesomium::WebString & name) const function, expected prototype:\nbool Awesomium::JSObject::HasProperty(const Awesomium::WebString & name) const\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string name_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString name = Awesomium::ToWebString(name_str);

		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSObject::HasProperty(const Awesomium::WebString &) const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		bool lret = self->HasProperty(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Awesomium::JSValue Awesomium::JSObject::GetProperty(const Awesomium::WebString & name) const
	static int _bind_GetProperty(lua_State *L) {
		if (!_lg_typecheck_GetProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue Awesomium::JSObject::GetProperty(const Awesomium::WebString & name) const function, expected prototype:\nAwesomium::JSValue Awesomium::JSObject::GetProperty(const Awesomium::WebString & name) const\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string name_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString name = Awesomium::ToWebString(name_str);

		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSValue Awesomium::JSObject::GetProperty(const Awesomium::WebString &) const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		Awesomium::JSValue stack_lret = self->GetProperty(name);
		Awesomium::JSValue* lret = new Awesomium::JSValue(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,true);

		return 1;
	}

	// void Awesomium::JSObject::SetProperty(const Awesomium::WebString & name, const Awesomium::JSValue & value)
	static int _bind_SetProperty(lua_State *L) {
		if (!_lg_typecheck_SetProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::JSObject::SetProperty(const Awesomium::WebString & name, const Awesomium::JSValue & value) function, expected prototype:\nvoid Awesomium::JSObject::SetProperty(const Awesomium::WebString & name, const Awesomium::JSValue & value)\nClass arguments details:\narg 1 ID = 13938525\narg 2 ID = 36991498\n");
		}

		std::string name_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString name = Awesomium::ToWebString(name_str);
		const Awesomium::JSValue* value_ptr=(Luna< Awesomium::JSValue >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::JSObject::SetProperty function");
		}
		const Awesomium::JSValue & value=*value_ptr;

		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::JSObject::SetProperty(const Awesomium::WebString &, const Awesomium::JSValue &). Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		self->SetProperty(name, value);

		return 0;
	}

	// void Awesomium::JSObject::RemoveProperty(const Awesomium::WebString & name)
	static int _bind_RemoveProperty(lua_State *L) {
		if (!_lg_typecheck_RemoveProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::JSObject::RemoveProperty(const Awesomium::WebString & name) function, expected prototype:\nvoid Awesomium::JSObject::RemoveProperty(const Awesomium::WebString & name)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string name_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString name = Awesomium::ToWebString(name_str);

		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::JSObject::RemoveProperty(const Awesomium::WebString &). Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		self->RemoveProperty(name);

		return 0;
	}

	// Awesomium::JSArray Awesomium::JSObject::GetMethodNames() const
	static int _bind_GetMethodNames(lua_State *L) {
		if (!_lg_typecheck_GetMethodNames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSArray Awesomium::JSObject::GetMethodNames() const function, expected prototype:\nAwesomium::JSArray Awesomium::JSObject::GetMethodNames() const\nClass arguments details:\n");
		}


		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSArray Awesomium::JSObject::GetMethodNames() const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		Awesomium::JSArray stack_lret = self->GetMethodNames();
		Awesomium::JSArray* lret = new Awesomium::JSArray(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSArray >::push(L,lret,true);

		return 1;
	}

	// bool Awesomium::JSObject::HasMethod(const Awesomium::WebString & name) const
	static int _bind_HasMethod(lua_State *L) {
		if (!_lg_typecheck_HasMethod(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSObject::HasMethod(const Awesomium::WebString & name) const function, expected prototype:\nbool Awesomium::JSObject::HasMethod(const Awesomium::WebString & name) const\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string name_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString name = Awesomium::ToWebString(name_str);

		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSObject::HasMethod(const Awesomium::WebString &) const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		bool lret = self->HasMethod(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Awesomium::JSValue Awesomium::JSObject::Invoke(const Awesomium::WebString & name, const Awesomium::JSArray & args)
	static int _bind_Invoke(lua_State *L) {
		if (!_lg_typecheck_Invoke(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue Awesomium::JSObject::Invoke(const Awesomium::WebString & name, const Awesomium::JSArray & args) function, expected prototype:\nAwesomium::JSValue Awesomium::JSObject::Invoke(const Awesomium::WebString & name, const Awesomium::JSArray & args)\nClass arguments details:\narg 1 ID = 13938525\narg 2 ID = 18109170\n");
		}

		std::string name_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString name = Awesomium::ToWebString(name_str);
		const Awesomium::JSArray* args_ptr=(Luna< Awesomium::JSArray >::check(L,3));
		if( !args_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg args in Awesomium::JSObject::Invoke function");
		}
		const Awesomium::JSArray & args=*args_ptr;

		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSValue Awesomium::JSObject::Invoke(const Awesomium::WebString &, const Awesomium::JSArray &). Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		Awesomium::JSValue stack_lret = self->Invoke(name, args);
		Awesomium::JSValue* lret = new Awesomium::JSValue(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,true);

		return 1;
	}

	// Awesomium::WebString Awesomium::JSObject::ToString() const
	static int _bind_ToString(lua_State *L) {
		if (!_lg_typecheck_ToString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::JSObject::ToString() const function, expected prototype:\nAwesomium::WebString Awesomium::JSObject::ToString() const\nClass arguments details:\n");
		}


		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::JSObject::ToString() const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->ToString();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// void Awesomium::JSObject::SetCustomMethod(const Awesomium::WebString & name, bool has_return_value)
	static int _bind_SetCustomMethod(lua_State *L) {
		if (!_lg_typecheck_SetCustomMethod(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::JSObject::SetCustomMethod(const Awesomium::WebString & name, bool has_return_value) function, expected prototype:\nvoid Awesomium::JSObject::SetCustomMethod(const Awesomium::WebString & name, bool has_return_value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string name_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString name = Awesomium::ToWebString(name_str);
		bool has_return_value=(bool)(lua_toboolean(L,3)==1);

		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::JSObject::SetCustomMethod(const Awesomium::WebString &, bool). Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		self->SetCustomMethod(name, has_return_value);

		return 0;
	}

	// Awesomium::Error Awesomium::JSObject::last_error() const
	static int _bind_last_error(lua_State *L) {
		if (!_lg_typecheck_last_error(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Error Awesomium::JSObject::last_error() const function, expected prototype:\nAwesomium::Error Awesomium::JSObject::last_error() const\nClass arguments details:\n");
		}


		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::Error Awesomium::JSObject::last_error() const. Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		Awesomium::Error lret = self->last_error();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// Awesomium::JSObject & Awesomium::JSObject::operator=(const Awesomium::JSObject & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSObject & Awesomium::JSObject::operator=(const Awesomium::JSObject & rhs) function, expected prototype:\nAwesomium::JSObject & Awesomium::JSObject::operator=(const Awesomium::JSObject & rhs)\nClass arguments details:\narg 1 ID = 47180827\n");
		}

		const Awesomium::JSObject* rhs_ptr=(Luna< Awesomium::JSObject >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::JSObject::operator= function");
		}
		const Awesomium::JSObject & rhs=*rhs_ptr;

		Awesomium::JSObject* self=(Luna< Awesomium::JSObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSObject & Awesomium::JSObject::operator=(const Awesomium::JSObject &). Got : '%s'",typeid(Luna< Awesomium::JSObject >::check(L,1)).name());
		}
		const Awesomium::JSObject* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSObject >::push(L,lret,false);

		return 1;
	}


};

Awesomium::JSObject* LunaTraits< Awesomium::JSObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_JSObject::_bind_ctor(L);
}

void LunaTraits< Awesomium::JSObject >::_bind_dtor(Awesomium::JSObject* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::JSObject >::className[] = "JSObject";
const char LunaTraits< Awesomium::JSObject >::fullName[] = "Awesomium::JSObject";
const char LunaTraits< Awesomium::JSObject >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::JSObject >::parents[] = {0};
const int LunaTraits< Awesomium::JSObject >::hash = 47180827;
const int LunaTraits< Awesomium::JSObject >::uniqueIDs[] = {47180827,0};

luna_RegType LunaTraits< Awesomium::JSObject >::methods[] = {
	{"ref_count", &luna_wrapper_Awesomium_JSObject::_bind_ref_count},
	{"type", &luna_wrapper_Awesomium_JSObject::_bind_type},
	{"owner", &luna_wrapper_Awesomium_JSObject::_bind_owner},
	{"GetPropertyNames", &luna_wrapper_Awesomium_JSObject::_bind_GetPropertyNames},
	{"HasProperty", &luna_wrapper_Awesomium_JSObject::_bind_HasProperty},
	{"GetProperty", &luna_wrapper_Awesomium_JSObject::_bind_GetProperty},
	{"SetProperty", &luna_wrapper_Awesomium_JSObject::_bind_SetProperty},
	{"RemoveProperty", &luna_wrapper_Awesomium_JSObject::_bind_RemoveProperty},
	{"GetMethodNames", &luna_wrapper_Awesomium_JSObject::_bind_GetMethodNames},
	{"HasMethod", &luna_wrapper_Awesomium_JSObject::_bind_HasMethod},
	{"Invoke", &luna_wrapper_Awesomium_JSObject::_bind_Invoke},
	{"ToString", &luna_wrapper_Awesomium_JSObject::_bind_ToString},
	{"SetCustomMethod", &luna_wrapper_Awesomium_JSObject::_bind_SetCustomMethod},
	{"last_error", &luna_wrapper_Awesomium_JSObject::_bind_last_error},
	{"op_assign", &luna_wrapper_Awesomium_JSObject::_bind_op_assign},
	{"dynCast", &luna_wrapper_Awesomium_JSObject::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_JSObject::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::JSObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::JSObject >::enumValues[] = {
	{0,0}
};


