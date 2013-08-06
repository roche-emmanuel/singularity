#include <plug_common.h>

class luna_wrapper_Awesomium_WebStringArray {
public:
	typedef Luna< Awesomium::WebStringArray > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16354805) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebStringArray*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebStringArray* rhs =(Luna< Awesomium::WebStringArray >::check(L,2));
		Awesomium::WebStringArray* self=(Luna< Awesomium::WebStringArray >::check(L,1));
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

		Awesomium::WebStringArray* self= (Awesomium::WebStringArray*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebStringArray >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,16354805) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::WebStringArray >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		Awesomium::WebStringArray* self=(Luna< Awesomium::WebStringArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebStringArray");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebStringArray",name);
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

		if( !Luna<void>::has_uniqueid(L,1,16354805) ) return false;
		if( (!(Luna< Awesomium::WebStringArray >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_size(lua_State *L) {
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

		if( (lua_isstring(L,2)==0) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,16354805) ) return false;
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
	// Awesomium::WebStringArray::WebStringArray()
	static Awesomium::WebStringArray* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebStringArray::WebStringArray() function, expected prototype:\nAwesomium::WebStringArray::WebStringArray()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new Awesomium::WebStringArray();
	}

	// Awesomium::WebStringArray::WebStringArray(unsigned int n)
	static Awesomium::WebStringArray* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebStringArray::WebStringArray(unsigned int n) function, expected prototype:\nAwesomium::WebStringArray::WebStringArray(unsigned int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int n=(unsigned int)lua_tointeger(L,1);

		return new Awesomium::WebStringArray(n);
	}

	// Awesomium::WebStringArray::WebStringArray(const Awesomium::WebStringArray & rhs)
	static Awesomium::WebStringArray* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebStringArray::WebStringArray(const Awesomium::WebStringArray & rhs) function, expected prototype:\nAwesomium::WebStringArray::WebStringArray(const Awesomium::WebStringArray & rhs)\nClass arguments details:\narg 1 ID = 16354805\n\n%s",luna_dumpStack(L).c_str());
		}

		const Awesomium::WebStringArray* rhs_ptr=(Luna< Awesomium::WebStringArray >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::WebStringArray::WebStringArray function");
		}
		const Awesomium::WebStringArray & rhs=*rhs_ptr;

		return new Awesomium::WebStringArray(rhs);
	}

	// Overload binder for Awesomium::WebStringArray::WebStringArray
	static Awesomium::WebStringArray* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function WebStringArray, cannot match any of the overloads for function WebStringArray:\n  WebStringArray()\n  WebStringArray(unsigned int)\n  WebStringArray(const Awesomium::WebStringArray &)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int Awesomium::WebStringArray::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::WebStringArray::size() const function, expected prototype:\nunsigned int Awesomium::WebStringArray::size() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::WebStringArray* self=(Luna< Awesomium::WebStringArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::WebStringArray::size() const. Got : '%s'\n%s",typeid(Luna< Awesomium::WebStringArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebString & Awesomium::WebStringArray::At(unsigned int idx)
	static int _bind_At_overload_1(lua_State *L) {
		if (!_lg_typecheck_At_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebString & Awesomium::WebStringArray::At(unsigned int idx) function, expected prototype:\nAwesomium::WebString & Awesomium::WebStringArray::At(unsigned int idx)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebStringArray* self=(Luna< Awesomium::WebStringArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebString & Awesomium::WebStringArray::At(unsigned int). Got : '%s'\n%s",typeid(Luna< Awesomium::WebStringArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebString & lret = self->At(idx);
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// const Awesomium::WebString & Awesomium::WebStringArray::At(unsigned int idx) const
	static int _bind_At_overload_2(lua_State *L) {
		if (!_lg_typecheck_At_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const Awesomium::WebString & Awesomium::WebStringArray::At(unsigned int idx) const function, expected prototype:\nconst Awesomium::WebString & Awesomium::WebStringArray::At(unsigned int idx) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebStringArray* self=(Luna< Awesomium::WebStringArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const Awesomium::WebString & Awesomium::WebStringArray::At(unsigned int) const. Got : '%s'\n%s",typeid(Luna< Awesomium::WebStringArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::WebString & lret = self->At(idx);
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Overload binder for Awesomium::WebStringArray::At
	static int _bind_At(lua_State *L) {
		if (_lg_typecheck_At_overload_1(L)) return _bind_At_overload_1(L);
		if (_lg_typecheck_At_overload_2(L)) return _bind_At_overload_2(L);

		luaL_error(L, "error in function At, cannot match any of the overloads for function At:\n  At(unsigned int)\n  At(unsigned int)\n");
		return 0;
	}

	// void Awesomium::WebStringArray::Push(const Awesomium::WebString & item)
	static int _bind_Push(lua_State *L) {
		if (!_lg_typecheck_Push(L)) {
			luaL_error(L, "luna typecheck failed in void Awesomium::WebStringArray::Push(const Awesomium::WebString & item) function, expected prototype:\nvoid Awesomium::WebStringArray::Push(const Awesomium::WebString & item)\nClass arguments details:\narg 1 ID = 13938525\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string item_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString item = Awesomium::ToWebString(item_str);

		Awesomium::WebStringArray* self=(Luna< Awesomium::WebStringArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void Awesomium::WebStringArray::Push(const Awesomium::WebString &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebStringArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Push(item);

		return 0;
	}


	// Operator binds:
	// Awesomium::WebStringArray & Awesomium::WebStringArray::operator=(const Awesomium::WebStringArray & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebStringArray & Awesomium::WebStringArray::operator=(const Awesomium::WebStringArray & rhs) function, expected prototype:\nAwesomium::WebStringArray & Awesomium::WebStringArray::operator=(const Awesomium::WebStringArray & rhs)\nClass arguments details:\narg 1 ID = 16354805\n\n%s",luna_dumpStack(L).c_str());
		}

		const Awesomium::WebStringArray* rhs_ptr=(Luna< Awesomium::WebStringArray >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::WebStringArray::operator= function");
		}
		const Awesomium::WebStringArray & rhs=*rhs_ptr;

		Awesomium::WebStringArray* self=(Luna< Awesomium::WebStringArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebStringArray & Awesomium::WebStringArray::operator=(const Awesomium::WebStringArray &). Got : '%s'\n%s",typeid(Luna< Awesomium::WebStringArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::WebStringArray* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebStringArray >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebString & Awesomium::WebStringArray::operator[](unsigned int idx)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebString & Awesomium::WebStringArray::operator[](unsigned int idx) function, expected prototype:\nAwesomium::WebString & Awesomium::WebStringArray::operator[](unsigned int idx)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebStringArray* self=(Luna< Awesomium::WebStringArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebString & Awesomium::WebStringArray::operator[](unsigned int). Got : '%s'\n%s",typeid(Luna< Awesomium::WebStringArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebString & lret = self->operator[](idx);
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// const Awesomium::WebString & Awesomium::WebStringArray::operator[](unsigned int idx) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const Awesomium::WebString & Awesomium::WebStringArray::operator[](unsigned int idx) const function, expected prototype:\nconst Awesomium::WebString & Awesomium::WebStringArray::operator[](unsigned int idx) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int idx=(unsigned int)lua_tointeger(L,2);

		Awesomium::WebStringArray* self=(Luna< Awesomium::WebStringArray >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const Awesomium::WebString & Awesomium::WebStringArray::operator[](unsigned int) const. Got : '%s'\n%s",typeid(Luna< Awesomium::WebStringArray >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const Awesomium::WebString & lret = self->operator[](idx);
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Overload binder for Awesomium::WebStringArray::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](unsigned int)\n  operator[](unsigned int)\n");
		return 0;
	}


};

Awesomium::WebStringArray* LunaTraits< Awesomium::WebStringArray >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebStringArray::_bind_ctor(L);
}

void LunaTraits< Awesomium::WebStringArray >::_bind_dtor(Awesomium::WebStringArray* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebStringArray >::className[] = "WebStringArray";
const char LunaTraits< Awesomium::WebStringArray >::fullName[] = "Awesomium::WebStringArray";
const char LunaTraits< Awesomium::WebStringArray >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebStringArray >::parents[] = {0};
const int LunaTraits< Awesomium::WebStringArray >::hash = 16354805;
const int LunaTraits< Awesomium::WebStringArray >::uniqueIDs[] = {16354805,0};

luna_RegType LunaTraits< Awesomium::WebStringArray >::methods[] = {
	{"size", &luna_wrapper_Awesomium_WebStringArray::_bind_size},
	{"At", &luna_wrapper_Awesomium_WebStringArray::_bind_At},
	{"Push", &luna_wrapper_Awesomium_WebStringArray::_bind_Push},
	{"op_assign", &luna_wrapper_Awesomium_WebStringArray::_bind_op_assign},
	{"op_index", &luna_wrapper_Awesomium_WebStringArray::_bind_op_index},
	{"dynCast", &luna_wrapper_Awesomium_WebStringArray::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebStringArray::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebStringArray::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebStringArray::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebStringArray >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebStringArray >::enumValues[] = {
	{0,0}
};


