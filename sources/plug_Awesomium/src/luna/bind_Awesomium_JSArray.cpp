#include <plug_common.h>

class luna_wrapper_Awesomium_JSArray {
public:
	typedef Luna< Awesomium::JSArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18109170) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::JSArray*)");
		}

		Awesomium::JSArray* rhs =(Luna< Awesomium::JSArray >::check(L,2));
		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
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

		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::JSArray");
		
		return luna_dynamicCast(L,converters,"Awesomium::JSArray",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18109170) ) return false;
		if( (!(Luna< Awesomium::JSArray >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_capacity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_At_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_At_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Push(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36991498) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Insert(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36991498) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Erase(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18109170) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// Awesomium::JSArray::JSArray()
	static Awesomium::JSArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSArray::JSArray() function, expected prototype:\nAwesomium::JSArray::JSArray()\nClass arguments details:\n");
		}


		return new Awesomium::JSArray();
	}

	// Awesomium::JSArray::JSArray(unsigned int n)
	static Awesomium::JSArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSArray::JSArray(unsigned int n) function, expected prototype:\nAwesomium::JSArray::JSArray(unsigned int n)\nClass arguments details:\n");
		}

		unsigned int n=(unsigned int)lua_tointeger(L,1);

		return new Awesomium::JSArray(n);
	}

	// Awesomium::JSArray::JSArray(const Awesomium::JSArray & rhs)
	static Awesomium::JSArray* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSArray::JSArray(const Awesomium::JSArray & rhs) function, expected prototype:\nAwesomium::JSArray::JSArray(const Awesomium::JSArray & rhs)\nClass arguments details:\narg 1 ID = 18109170\n");
		}

		const Awesomium::JSArray* rhs_ptr=(Luna< Awesomium::JSArray >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::JSArray::JSArray function");
		}
		const Awesomium::JSArray & rhs=*rhs_ptr;

		return new Awesomium::JSArray(rhs);
	}

	// Overload binder for Awesomium::JSArray::JSArray
	static Awesomium::JSArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function JSArray, cannot match any of the overloads for function JSArray:\n  JSArray()\n  JSArray(unsigned int)\n  JSArray(const Awesomium::JSArray &)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int Awesomium::JSArray::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::JSArray::size() const function, expected prototype:\nunsigned int Awesomium::JSArray::size() const\nClass arguments details:\n");
		}


		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::JSArray::size() const. Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int Awesomium::JSArray::capacity() const
	static int _bind_capacity(lua_State *L) {
		if (!_lg_typecheck_capacity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::JSArray::capacity() const function, expected prototype:\nunsigned int Awesomium::JSArray::capacity() const\nClass arguments details:\n");
		}


		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::JSArray::capacity() const. Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		unsigned int lret = self->capacity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::JSValue & Awesomium::JSArray::At(unsigned int idx)
	static int _bind_At_overload_1(lua_State *L) {
		if (!_lg_typecheck_At_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue & Awesomium::JSArray::At(unsigned int idx) function, expected prototype:\nAwesomium::JSValue & Awesomium::JSArray::At(unsigned int idx)\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSValue & Awesomium::JSArray::At(unsigned int). Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		const Awesomium::JSValue* lret = &self->At(idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,false);

		return 1;
	}

	// const Awesomium::JSValue & Awesomium::JSArray::At(unsigned int idx) const
	static int _bind_At_overload_2(lua_State *L) {
		if (!_lg_typecheck_At_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const Awesomium::JSValue & Awesomium::JSArray::At(unsigned int idx) const function, expected prototype:\nconst Awesomium::JSValue & Awesomium::JSArray::At(unsigned int idx) const\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const Awesomium::JSValue & Awesomium::JSArray::At(unsigned int) const. Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		const Awesomium::JSValue* lret = &self->At(idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for Awesomium::JSArray::At
	static int _bind_At(lua_State *L) {
		if (_lg_typecheck_At_overload_1(L)) return _bind_At_overload_1(L);
		if (_lg_typecheck_At_overload_2(L)) return _bind_At_overload_2(L);

		luaL_error(L, "error in function At, cannot match any of the overloads for function At:\n  At(unsigned int)\n  At(unsigned int)\n");
		return 0;
	}

	// void Awesomium::JSArray::Push(const Awesomium::JSValue & item)
	static int _bind_Push(lua_State *L) {
		if (!_lg_typecheck_Push(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::JSArray::Push(const Awesomium::JSValue & item) function, expected prototype:\nvoid Awesomium::JSArray::Push(const Awesomium::JSValue & item)\nClass arguments details:\narg 1 ID = 36991498\n");
		}

		const Awesomium::JSValue* item_ptr=(Luna< Awesomium::JSValue >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in Awesomium::JSArray::Push function");
		}
		const Awesomium::JSValue & item=*item_ptr;

		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::JSArray::Push(const Awesomium::JSValue &). Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		self->Push(item);

		return 0;
	}

	// void Awesomium::JSArray::Pop()
	static int _bind_Pop(lua_State *L) {
		if (!_lg_typecheck_Pop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::JSArray::Pop() function, expected prototype:\nvoid Awesomium::JSArray::Pop()\nClass arguments details:\n");
		}


		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::JSArray::Pop(). Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		self->Pop();

		return 0;
	}

	// void Awesomium::JSArray::Insert(const Awesomium::JSValue & item, unsigned int idx)
	static int _bind_Insert(lua_State *L) {
		if (!_lg_typecheck_Insert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::JSArray::Insert(const Awesomium::JSValue & item, unsigned int idx) function, expected prototype:\nvoid Awesomium::JSArray::Insert(const Awesomium::JSValue & item, unsigned int idx)\nClass arguments details:\narg 1 ID = 36991498\n");
		}

		const Awesomium::JSValue* item_ptr=(Luna< Awesomium::JSValue >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in Awesomium::JSArray::Insert function");
		}
		const Awesomium::JSValue & item=*item_ptr;
		unsigned int idx=(unsigned int)lua_tointeger(L,3);

		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::JSArray::Insert(const Awesomium::JSValue &, unsigned int). Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		self->Insert(item, idx);

		return 0;
	}

	// void Awesomium::JSArray::Erase(unsigned int idx)
	static int _bind_Erase(lua_State *L) {
		if (!_lg_typecheck_Erase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::JSArray::Erase(unsigned int idx) function, expected prototype:\nvoid Awesomium::JSArray::Erase(unsigned int idx)\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::JSArray::Erase(unsigned int). Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		self->Erase(idx);

		return 0;
	}

	// void Awesomium::JSArray::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::JSArray::Clear() function, expected prototype:\nvoid Awesomium::JSArray::Clear()\nClass arguments details:\n");
		}


		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::JSArray::Clear(). Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		self->Clear();

		return 0;
	}


	// Operator binds:
	// Awesomium::JSArray & Awesomium::JSArray::operator=(const Awesomium::JSArray & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSArray & Awesomium::JSArray::operator=(const Awesomium::JSArray & rhs) function, expected prototype:\nAwesomium::JSArray & Awesomium::JSArray::operator=(const Awesomium::JSArray & rhs)\nClass arguments details:\narg 1 ID = 18109170\n");
		}

		const Awesomium::JSArray* rhs_ptr=(Luna< Awesomium::JSArray >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::JSArray::operator= function");
		}
		const Awesomium::JSArray & rhs=*rhs_ptr;

		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSArray & Awesomium::JSArray::operator=(const Awesomium::JSArray &). Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		const Awesomium::JSArray* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSArray >::push(L,lret,false);

		return 1;
	}

	// Awesomium::JSValue & Awesomium::JSArray::operator[](unsigned int idx)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::JSValue & Awesomium::JSArray::operator[](unsigned int idx) function, expected prototype:\nAwesomium::JSValue & Awesomium::JSArray::operator[](unsigned int idx)\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::JSValue & Awesomium::JSArray::operator[](unsigned int). Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		const Awesomium::JSValue* lret = &self->operator[](idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,false);

		return 1;
	}

	// const Awesomium::JSValue & Awesomium::JSArray::operator[](unsigned int idx) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const Awesomium::JSValue & Awesomium::JSArray::operator[](unsigned int idx) const function, expected prototype:\nconst Awesomium::JSValue & Awesomium::JSArray::operator[](unsigned int idx) const\nClass arguments details:\n");
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::JSArray* self=(Luna< Awesomium::JSArray >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const Awesomium::JSValue & Awesomium::JSArray::operator[](unsigned int) const. Got : '%s'",typeid(Luna< Awesomium::JSArray >::check(L,1)).name());
		}
		const Awesomium::JSValue* lret = &self->operator[](idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::JSValue >::push(L,lret,false);

		return 1;
	}

	// Overload binder for Awesomium::JSArray::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}


};

Awesomium::JSArray* LunaTraits< Awesomium::JSArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_JSArray::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::JSArray >::_bind_dtor(Awesomium::JSArray* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::JSArray >::className[] = "JSArray";
const char LunaTraits< Awesomium::JSArray >::fullName[] = "Awesomium::JSArray";
const char LunaTraits< Awesomium::JSArray >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::JSArray >::parents[] = {0};
const int LunaTraits< Awesomium::JSArray >::hash = 18109170;
const int LunaTraits< Awesomium::JSArray >::uniqueIDs[] = {18109170,0};

luna_RegType LunaTraits< Awesomium::JSArray >::methods[] = {
	{"size", &luna_wrapper_Awesomium_JSArray::_bind_size},
	{"capacity", &luna_wrapper_Awesomium_JSArray::_bind_capacity},
	{"At", &luna_wrapper_Awesomium_JSArray::_bind_At},
	{"Push", &luna_wrapper_Awesomium_JSArray::_bind_Push},
	{"Pop", &luna_wrapper_Awesomium_JSArray::_bind_Pop},
	{"Insert", &luna_wrapper_Awesomium_JSArray::_bind_Insert},
	{"Erase", &luna_wrapper_Awesomium_JSArray::_bind_Erase},
	{"Clear", &luna_wrapper_Awesomium_JSArray::_bind_Clear},
	{"op_assign", &luna_wrapper_Awesomium_JSArray::_bind_op_assign},
	{"op_index", &luna_wrapper_Awesomium_JSArray::_bind_op_index},
	{"dynCast", &luna_wrapper_Awesomium_JSArray::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_JSArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::JSArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::JSArray >::enumValues[] = {
	{0,0}
};


