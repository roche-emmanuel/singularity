#include <plug_common.h>

class luna_wrapper_Awesomium_JSValue {
public:
	typedef Luna< Awesomium::JSValue > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36991498) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::JSValue*)");
		}

		Awesomium::JSValue* rhs =(Luna< Awesomium::JSValue >::check(L,2));
		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		Awesomium::JSValue* self= (Awesomium::JSValue*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::JSValue >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36991498) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::JSValue");
		
		return luna_dynamicCast(L,converters,"Awesomium::JSValue",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isstring(L,1)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47180827) ) return false;
		if( (!(Luna< Awesomium::JSObject >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18109170) ) return false;
		if( (!(Luna< Awesomium::JSArray >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36991498) ) return false;
		if( (!(Luna< Awesomium::JSValue >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsBoolean(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsInteger(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDouble(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsNull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsUndefined(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToInteger(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToDouble(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToBoolean(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Undefined(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Null(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36991498) ) return false;
		return true;
	}


	// Constructor binds:
	// Awesomium::JSValue::JSValue()
	static Awesomium::JSValue* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue::JSValue() function, expected prototype:\nAwesomium::JSValue::JSValue()\nClass arguments details:\n");
		}


		return new Awesomium::JSValue();
	}

	// Awesomium::JSValue::JSValue(bool value)
	static Awesomium::JSValue* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue::JSValue(bool value) function, expected prototype:\nAwesomium::JSValue::JSValue(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,1)==1);

		return new Awesomium::JSValue(value);
	}

	// Awesomium::JSValue::JSValue(int value)
	static Awesomium::JSValue* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue::JSValue(int value) function, expected prototype:\nAwesomium::JSValue::JSValue(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,1);

		return new Awesomium::JSValue(value);
	}

	// Awesomium::JSValue::JSValue(double value)
	static Awesomium::JSValue* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue::JSValue(double value) function, expected prototype:\nAwesomium::JSValue::JSValue(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,1);

		return new Awesomium::JSValue(value);
	}

	// Awesomium::JSValue::JSValue(const Awesomium::WebString & value)
	static Awesomium::JSValue* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue::JSValue(const Awesomium::WebString & value) function, expected prototype:\nAwesomium::JSValue::JSValue(const Awesomium::WebString & value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,1),lua_objlen(L,1));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		return new Awesomium::JSValue(value);
	}

	// Awesomium::JSValue::JSValue(const Awesomium::JSObject & value)
	static Awesomium::JSValue* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue::JSValue(const Awesomium::JSObject & value) function, expected prototype:\nAwesomium::JSValue::JSValue(const Awesomium::JSObject & value)\nClass arguments details:\narg 1 ID = 47180827\n");
		}

		const Awesomium::JSObject* value_ptr=(Luna< Awesomium::JSObject >::check(L,1));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::JSValue::JSValue function");
		}
		const Awesomium::JSObject & value=*value_ptr;

		return new Awesomium::JSValue(value);
	}

	// Awesomium::JSValue::JSValue(const Awesomium::JSArray & value)
	static Awesomium::JSValue* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue::JSValue(const Awesomium::JSArray & value) function, expected prototype:\nAwesomium::JSValue::JSValue(const Awesomium::JSArray & value)\nClass arguments details:\narg 1 ID = 18109170\n");
		}

		const Awesomium::JSArray* value_ptr=(Luna< Awesomium::JSArray >::check(L,1));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::JSValue::JSValue function");
		}
		const Awesomium::JSArray & value=*value_ptr;

		return new Awesomium::JSValue(value);
	}

	// Awesomium::JSValue::JSValue(const Awesomium::JSValue & original)
	static Awesomium::JSValue* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue::JSValue(const Awesomium::JSValue & original) function, expected prototype:\nAwesomium::JSValue::JSValue(const Awesomium::JSValue & original)\nClass arguments details:\narg 1 ID = 36991498\n");
		}

		const Awesomium::JSValue* original_ptr=(Luna< Awesomium::JSValue >::check(L,1));
		if( !original_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg original in Awesomium::JSValue::JSValue function");
		}
		const Awesomium::JSValue & original=*original_ptr;

		return new Awesomium::JSValue(original);
	}

	// Overload binder for Awesomium::JSValue::JSValue
	static Awesomium::JSValue* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function JSValue, cannot match any of the overloads for function JSValue:\n  JSValue()\n  JSValue(bool)\n  JSValue(int)\n  JSValue(double)\n  JSValue(const Awesomium::WebString &)\n  JSValue(const Awesomium::JSObject &)\n  JSValue(const Awesomium::JSArray &)\n  JSValue(const Awesomium::JSValue &)\n");
		return NULL;
	}


	// Function binds:
	// bool Awesomium::JSValue::IsBoolean() const
	static int _bind_IsBoolean(lua_State *L) {
		if (!_lg_typecheck_IsBoolean(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::IsBoolean() const function, expected prototype:\nbool Awesomium::JSValue::IsBoolean() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::IsBoolean() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->IsBoolean();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::JSValue::IsInteger() const
	static int _bind_IsInteger(lua_State *L) {
		if (!_lg_typecheck_IsInteger(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::IsInteger() const function, expected prototype:\nbool Awesomium::JSValue::IsInteger() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::IsInteger() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->IsInteger();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::JSValue::IsDouble() const
	static int _bind_IsDouble(lua_State *L) {
		if (!_lg_typecheck_IsDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::IsDouble() const function, expected prototype:\nbool Awesomium::JSValue::IsDouble() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::IsDouble() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->IsDouble();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::JSValue::IsNumber() const
	static int _bind_IsNumber(lua_State *L) {
		if (!_lg_typecheck_IsNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::IsNumber() const function, expected prototype:\nbool Awesomium::JSValue::IsNumber() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::IsNumber() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->IsNumber();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::JSValue::IsString() const
	static int _bind_IsString(lua_State *L) {
		if (!_lg_typecheck_IsString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::IsString() const function, expected prototype:\nbool Awesomium::JSValue::IsString() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::IsString() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->IsString();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::JSValue::IsArray() const
	static int _bind_IsArray(lua_State *L) {
		if (!_lg_typecheck_IsArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::IsArray() const function, expected prototype:\nbool Awesomium::JSValue::IsArray() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::IsArray() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->IsArray();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::JSValue::IsObject() const
	static int _bind_IsObject(lua_State *L) {
		if (!_lg_typecheck_IsObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::IsObject() const function, expected prototype:\nbool Awesomium::JSValue::IsObject() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::IsObject() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->IsObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::JSValue::IsNull() const
	static int _bind_IsNull(lua_State *L) {
		if (!_lg_typecheck_IsNull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::IsNull() const function, expected prototype:\nbool Awesomium::JSValue::IsNull() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::IsNull() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->IsNull();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::JSValue::IsUndefined() const
	static int _bind_IsUndefined(lua_State *L) {
		if (!_lg_typecheck_IsUndefined(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::IsUndefined() const function, expected prototype:\nbool Awesomium::JSValue::IsUndefined() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::IsUndefined() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->IsUndefined();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Awesomium::WebString Awesomium::JSValue::ToString() const
	static int _bind_ToString(lua_State *L) {
		if (!_lg_typecheck_ToString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::JSValue::ToString() const function, expected prototype:\nAwesomium::WebString Awesomium::JSValue::ToString() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::JSValue::ToString() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->ToString();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// int Awesomium::JSValue::ToInteger() const
	static int _bind_ToInteger(lua_State *L) {
		if (!_lg_typecheck_ToInteger(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::JSValue::ToInteger() const function, expected prototype:\nint Awesomium::JSValue::ToInteger() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::JSValue::ToInteger() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		int lret = self->ToInteger();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double Awesomium::JSValue::ToDouble() const
	static int _bind_ToDouble(lua_State *L) {
		if (!_lg_typecheck_ToDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double Awesomium::JSValue::ToDouble() const function, expected prototype:\ndouble Awesomium::JSValue::ToDouble() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double Awesomium::JSValue::ToDouble() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		double lret = self->ToDouble();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool Awesomium::JSValue::ToBoolean() const
	static int _bind_ToBoolean(lua_State *L) {
		if (!_lg_typecheck_ToBoolean(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::JSValue::ToBoolean() const function, expected prototype:\nbool Awesomium::JSValue::ToBoolean() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::JSValue::ToBoolean() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		bool lret = self->ToBoolean();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Awesomium::JSArray & Awesomium::JSValue::ToArray()
	static int _bind_ToArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSArray & Awesomium::JSValue::ToArray() function, expected prototype:\nAwesomium::JSArray & Awesomium::JSValue::ToArray()\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSArray & Awesomium::JSValue::ToArray(). Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		const Awesomium::JSArray* lret = &self->ToArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSArray >::push(L,lret,false);

		return 1;
	}

	// const Awesomium::JSArray & Awesomium::JSValue::ToArray() const
	static int _bind_ToArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const Awesomium::JSArray & Awesomium::JSValue::ToArray() const function, expected prototype:\nconst Awesomium::JSArray & Awesomium::JSValue::ToArray() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const Awesomium::JSArray & Awesomium::JSValue::ToArray() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		const Awesomium::JSArray* lret = &self->ToArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for Awesomium::JSValue::ToArray
	static int _bind_ToArray(lua_State *L) {
		if (_lg_typecheck_ToArray_overload_1(L)) return _bind_ToArray_overload_1(L);
		if (_lg_typecheck_ToArray_overload_2(L)) return _bind_ToArray_overload_2(L);

		luaL_error(L, "error in function ToArray, cannot match any of the overloads for function ToArray:\n  ToArray()\n  ToArray()\n");
		return 0;
	}

	// Awesomium::JSObject & Awesomium::JSValue::ToObject()
	static int _bind_ToObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_ToObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSObject & Awesomium::JSValue::ToObject() function, expected prototype:\nAwesomium::JSObject & Awesomium::JSValue::ToObject()\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSObject & Awesomium::JSValue::ToObject(). Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		const Awesomium::JSObject* lret = &self->ToObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSObject >::push(L,lret,false);

		return 1;
	}

	// const Awesomium::JSObject & Awesomium::JSValue::ToObject() const
	static int _bind_ToObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_ToObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const Awesomium::JSObject & Awesomium::JSValue::ToObject() const function, expected prototype:\nconst Awesomium::JSObject & Awesomium::JSValue::ToObject() const\nClass arguments details:\n");
		}


		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const Awesomium::JSObject & Awesomium::JSValue::ToObject() const. Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		const Awesomium::JSObject* lret = &self->ToObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSObject >::push(L,lret,false);

		return 1;
	}

	// Overload binder for Awesomium::JSValue::ToObject
	static int _bind_ToObject(lua_State *L) {
		if (_lg_typecheck_ToObject_overload_1(L)) return _bind_ToObject_overload_1(L);
		if (_lg_typecheck_ToObject_overload_2(L)) return _bind_ToObject_overload_2(L);

		luaL_error(L, "error in function ToObject, cannot match any of the overloads for function ToObject:\n  ToObject()\n  ToObject()\n");
		return 0;
	}

	// static const Awesomium::JSValue & Awesomium::JSValue::Undefined()
	static int _bind_Undefined(lua_State *L) {
		if (!_lg_typecheck_Undefined(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const Awesomium::JSValue & Awesomium::JSValue::Undefined() function, expected prototype:\nstatic const Awesomium::JSValue & Awesomium::JSValue::Undefined()\nClass arguments details:\n");
		}


		const Awesomium::JSValue* lret = &Awesomium::JSValue::Undefined();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,false);

		return 1;
	}

	// static const Awesomium::JSValue & Awesomium::JSValue::Null()
	static int _bind_Null(lua_State *L) {
		if (!_lg_typecheck_Null(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const Awesomium::JSValue & Awesomium::JSValue::Null() function, expected prototype:\nstatic const Awesomium::JSValue & Awesomium::JSValue::Null()\nClass arguments details:\n");
		}


		const Awesomium::JSValue* lret = &Awesomium::JSValue::Null();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// Awesomium::JSValue & Awesomium::JSValue::operator=(const Awesomium::JSValue & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue & Awesomium::JSValue::operator=(const Awesomium::JSValue & rhs) function, expected prototype:\nAwesomium::JSValue & Awesomium::JSValue::operator=(const Awesomium::JSValue & rhs)\nClass arguments details:\narg 1 ID = 36991498\n");
		}

		const Awesomium::JSValue* rhs_ptr=(Luna< Awesomium::JSValue >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::JSValue::operator= function");
		}
		const Awesomium::JSValue & rhs=*rhs_ptr;

		Awesomium::JSValue* self=(Luna< Awesomium::JSValue >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSValue & Awesomium::JSValue::operator=(const Awesomium::JSValue &). Got : '%s'",typeid(Luna< Awesomium::JSValue >::check(L,1)).name());
		}
		const Awesomium::JSValue* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,false);

		return 1;
	}


};

Awesomium::JSValue* LunaTraits< Awesomium::JSValue >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_JSValue::_bind_ctor(L);
}

void LunaTraits< Awesomium::JSValue >::_bind_dtor(Awesomium::JSValue* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::JSValue >::className[] = "JSValue";
const char LunaTraits< Awesomium::JSValue >::fullName[] = "Awesomium::JSValue";
const char LunaTraits< Awesomium::JSValue >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::JSValue >::parents[] = {0};
const int LunaTraits< Awesomium::JSValue >::hash = 36991498;
const int LunaTraits< Awesomium::JSValue >::uniqueIDs[] = {36991498,0};

luna_RegType LunaTraits< Awesomium::JSValue >::methods[] = {
	{"IsBoolean", &luna_wrapper_Awesomium_JSValue::_bind_IsBoolean},
	{"IsInteger", &luna_wrapper_Awesomium_JSValue::_bind_IsInteger},
	{"IsDouble", &luna_wrapper_Awesomium_JSValue::_bind_IsDouble},
	{"IsNumber", &luna_wrapper_Awesomium_JSValue::_bind_IsNumber},
	{"IsString", &luna_wrapper_Awesomium_JSValue::_bind_IsString},
	{"IsArray", &luna_wrapper_Awesomium_JSValue::_bind_IsArray},
	{"IsObject", &luna_wrapper_Awesomium_JSValue::_bind_IsObject},
	{"IsNull", &luna_wrapper_Awesomium_JSValue::_bind_IsNull},
	{"IsUndefined", &luna_wrapper_Awesomium_JSValue::_bind_IsUndefined},
	{"ToString", &luna_wrapper_Awesomium_JSValue::_bind_ToString},
	{"ToInteger", &luna_wrapper_Awesomium_JSValue::_bind_ToInteger},
	{"ToDouble", &luna_wrapper_Awesomium_JSValue::_bind_ToDouble},
	{"ToBoolean", &luna_wrapper_Awesomium_JSValue::_bind_ToBoolean},
	{"ToArray", &luna_wrapper_Awesomium_JSValue::_bind_ToArray},
	{"ToObject", &luna_wrapper_Awesomium_JSValue::_bind_ToObject},
	{"Undefined", &luna_wrapper_Awesomium_JSValue::_bind_Undefined},
	{"Null", &luna_wrapper_Awesomium_JSValue::_bind_Null},
	{"op_assign", &luna_wrapper_Awesomium_JSValue::_bind_op_assign},
	{"dynCast", &luna_wrapper_Awesomium_JSValue::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_JSValue::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_JSValue::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_JSValue::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::JSValue >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::JSValue >::enumValues[] = {
	{0,0}
};


