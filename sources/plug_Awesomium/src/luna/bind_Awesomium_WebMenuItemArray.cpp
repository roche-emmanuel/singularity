#include <plug_common.h>

class luna_wrapper_Awesomium_WebMenuItemArray {
public:
	typedef Luna< Awesomium::WebMenuItemArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62259121) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebMenuItemArray*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebMenuItemArray* rhs =(Luna< Awesomium::WebMenuItemArray >::check(L,2));
		Awesomium::WebMenuItemArray* self=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebMenuItemArray* self= (Awesomium::WebMenuItemArray*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebMenuItemArray >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62259121) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		Awesomium::WebMenuItemArray* self=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebMenuItemArray");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebMenuItemArray",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,62259121) ) return false;
		if( (!(Luna< Awesomium::WebMenuItemArray >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_At_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_At_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Push(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2194484) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,62259121) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// Awesomium::WebMenuItemArray::WebMenuItemArray()
	static Awesomium::WebMenuItemArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItemArray::WebMenuItemArray() function, expected prototype:\nAwesomium::WebMenuItemArray::WebMenuItemArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new Awesomium::WebMenuItemArray();
	}

	// Awesomium::WebMenuItemArray::WebMenuItemArray(unsigned int n)
	static Awesomium::WebMenuItemArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItemArray::WebMenuItemArray(unsigned int n) function, expected prototype:\nAwesomium::WebMenuItemArray::WebMenuItemArray(unsigned int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,1);

		return new Awesomium::WebMenuItemArray(n);
	}

	// Awesomium::WebMenuItemArray::WebMenuItemArray(const Awesomium::WebMenuItemArray & rhs)
	static Awesomium::WebMenuItemArray* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItemArray::WebMenuItemArray(const Awesomium::WebMenuItemArray & rhs) function, expected prototype:\nAwesomium::WebMenuItemArray::WebMenuItemArray(const Awesomium::WebMenuItemArray & rhs)\nClass arguments details:\narg 1 ID = 62259121\n\n%s",luna_dumpStack(L).c_str());
		}

		const Awesomium::WebMenuItemArray* rhs_ptr=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::WebMenuItemArray::WebMenuItemArray function");
		}
		const Awesomium::WebMenuItemArray & rhs=*rhs_ptr;

		return new Awesomium::WebMenuItemArray(rhs);
	}

	// Overload binder for Awesomium::WebMenuItemArray::WebMenuItemArray
	static Awesomium::WebMenuItemArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function WebMenuItemArray, cannot match any of the overloads for function WebMenuItemArray:\n  WebMenuItemArray()\n  WebMenuItemArray(unsigned int)\n  WebMenuItemArray(const Awesomium::WebMenuItemArray &)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int Awesomium::WebMenuItemArray::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::WebMenuItemArray::size() const function, expected prototype:\nunsigned int Awesomium::WebMenuItemArray::size() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebMenuItemArray* self=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::WebMenuItemArray::size() const. Got : '%s'\n%s",typeid(Luna< Awesomium::WebMenuItemArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::At(unsigned int idx)
	static int _bind_At_overload_1(lua_State *L) {
		if (!_lg_typecheck_At_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::At(unsigned int idx) function, expected prototype:\nAwesomium::WebMenuItem & Awesomium::WebMenuItemArray::At(unsigned int idx)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebMenuItemArray* self=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::At(unsigned int). Got : '%s'\n%s",typeid(Luna< Awesomium::WebMenuItemArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::WebMenuItem* lret = &self->At(idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebMenuItem >::push(L,lret,false);

		return 1;
	}

	// const Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::At(unsigned int idx) const
	static int _bind_At_overload_2(lua_State *L) {
		if (!_lg_typecheck_At_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::At(unsigned int idx) const function, expected prototype:\nconst Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::At(unsigned int idx) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebMenuItemArray* self=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::At(unsigned int) const. Got : '%s'\n%s",typeid(Luna< Awesomium::WebMenuItemArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::WebMenuItem* lret = &self->At(idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebMenuItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for Awesomium::WebMenuItemArray::At
	static int _bind_At(lua_State *L) {
		if (_lg_typecheck_At_overload_1(L)) return _bind_At_overload_1(L);
		if (_lg_typecheck_At_overload_2(L)) return _bind_At_overload_2(L);

		luaL_error(L, "error in function At, cannot match any of the overloads for function At:\n  At(unsigned int)\n  At(unsigned int)\n");
		return 0;
	}

	// void Awesomium::WebMenuItemArray::Push(const Awesomium::WebMenuItem & item)
	static int _bind_Push(lua_State *L) {
		if (!_lg_typecheck_Push(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebMenuItemArray::Push(const Awesomium::WebMenuItem & item) function, expected prototype:\nvoid Awesomium::WebMenuItemArray::Push(const Awesomium::WebMenuItem & item)\nClass arguments details:\narg 1 ID = 2194484\n\n%s",luna_dumpStack(L).c_str());
		}

		const Awesomium::WebMenuItem* item_ptr=(Luna< Awesomium::WebMenuItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in Awesomium::WebMenuItemArray::Push function");
		}
		const Awesomium::WebMenuItem & item=*item_ptr;

		Awesomium::WebMenuItemArray* self=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebMenuItemArray::Push(const Awesomium::WebMenuItem &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebMenuItemArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Push(item);

		return 0;
	}


	// Operator binds:
	// Awesomium::WebMenuItemArray & Awesomium::WebMenuItemArray::operator=(const Awesomium::WebMenuItemArray & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItemArray & Awesomium::WebMenuItemArray::operator=(const Awesomium::WebMenuItemArray & rhs) function, expected prototype:\nAwesomium::WebMenuItemArray & Awesomium::WebMenuItemArray::operator=(const Awesomium::WebMenuItemArray & rhs)\nClass arguments details:\narg 1 ID = 62259121\n\n%s",luna_dumpStack(L).c_str());
		}

		const Awesomium::WebMenuItemArray* rhs_ptr=(Luna< Awesomium::WebMenuItemArray >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::WebMenuItemArray::operator= function");
		}
		const Awesomium::WebMenuItemArray & rhs=*rhs_ptr;

		Awesomium::WebMenuItemArray* self=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebMenuItemArray & Awesomium::WebMenuItemArray::operator=(const Awesomium::WebMenuItemArray &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebMenuItemArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::WebMenuItemArray* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebMenuItemArray >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::operator[](unsigned int idx)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::operator[](unsigned int idx) function, expected prototype:\nAwesomium::WebMenuItem & Awesomium::WebMenuItemArray::operator[](unsigned int idx)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebMenuItemArray* self=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< Awesomium::WebMenuItemArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::WebMenuItem* lret = &self->operator[](idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebMenuItem >::push(L,lret,false);

		return 1;
	}

	// const Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::operator[](unsigned int idx) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::operator[](unsigned int idx) const function, expected prototype:\nconst Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::operator[](unsigned int idx) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebMenuItemArray* self=(Luna< Awesomium::WebMenuItemArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const Awesomium::WebMenuItem & Awesomium::WebMenuItemArray::operator[](unsigned int) const. Got : '%s'\n%s",typeid(Luna< Awesomium::WebMenuItemArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::WebMenuItem* lret = &self->operator[](idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebMenuItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for Awesomium::WebMenuItemArray::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}


};

Awesomium::WebMenuItemArray* LunaTraits< Awesomium::WebMenuItemArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebMenuItemArray::_bind_ctor(L);
}

void LunaTraits< Awesomium::WebMenuItemArray >::_bind_dtor(Awesomium::WebMenuItemArray* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebMenuItemArray >::className[] = "WebMenuItemArray";
const char LunaTraits< Awesomium::WebMenuItemArray >::fullName[] = "Awesomium::WebMenuItemArray";
const char LunaTraits< Awesomium::WebMenuItemArray >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebMenuItemArray >::parents[] = {0};
const int LunaTraits< Awesomium::WebMenuItemArray >::hash = 62259121;
const int LunaTraits< Awesomium::WebMenuItemArray >::uniqueIDs[] = {62259121,0};

luna_RegType LunaTraits< Awesomium::WebMenuItemArray >::methods[] = {
	{"size", &luna_wrapper_Awesomium_WebMenuItemArray::_bind_size},
	{"At", &luna_wrapper_Awesomium_WebMenuItemArray::_bind_At},
	{"Push", &luna_wrapper_Awesomium_WebMenuItemArray::_bind_Push},
	{"op_assign", &luna_wrapper_Awesomium_WebMenuItemArray::_bind_op_assign},
	{"op_index", &luna_wrapper_Awesomium_WebMenuItemArray::_bind_op_index},
	{"dynCast", &luna_wrapper_Awesomium_WebMenuItemArray::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebMenuItemArray::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebMenuItemArray::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebMenuItemArray::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebMenuItemArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebMenuItemArray >::enumValues[] = {
	{0,0}
};


