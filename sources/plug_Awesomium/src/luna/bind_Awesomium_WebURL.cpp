#include <plug_common.h>

class luna_wrapper_Awesomium_WebURL {
public:
	typedef Luna< Awesomium::WebURL > luna_t;

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

		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebURL");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebURL",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isstring(L,1)==0) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3243885) ) return false;
		if( (!(Luna< Awesomium::WebURL >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_spec(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_scheme(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_username(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_password(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_host(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_port(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_path(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_query(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_anchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_filename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 4 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}


	// Constructor binds:
	// Awesomium::WebURL::WebURL()
	static Awesomium::WebURL* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL::WebURL() function, expected prototype:\nAwesomium::WebURL::WebURL()\nClass arguments details:\n");
		}


		return new Awesomium::WebURL();
	}

	// Awesomium::WebURL::WebURL(const Awesomium::WebString & url_string)
	static Awesomium::WebURL* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL::WebURL(const Awesomium::WebString & url_string) function, expected prototype:\nAwesomium::WebURL::WebURL(const Awesomium::WebString & url_string)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string url_string_str(lua_tostring(L,1),lua_objlen(L,1));
		Awesomium::WebString url_string = Awesomium::ToWebString(url_string_str);

		return new Awesomium::WebURL(url_string);
	}

	// Awesomium::WebURL::WebURL(const Awesomium::WebURL & rhs)
	static Awesomium::WebURL* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL::WebURL(const Awesomium::WebURL & rhs) function, expected prototype:\nAwesomium::WebURL::WebURL(const Awesomium::WebURL & rhs)\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		const Awesomium::WebURL* rhs_ptr=(Luna< Awesomium::WebURL >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::WebURL::WebURL function");
		}
		const Awesomium::WebURL & rhs=*rhs_ptr;

		return new Awesomium::WebURL(rhs);
	}

	// Overload binder for Awesomium::WebURL::WebURL
	static Awesomium::WebURL* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function WebURL, cannot match any of the overloads for function WebURL:\n  WebURL()\n  WebURL(const Awesomium::WebString &)\n  WebURL(const Awesomium::WebURL &)\n");
		return NULL;
	}


	// Function binds:
	// bool Awesomium::WebURL::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebURL::IsValid() const function, expected prototype:\nbool Awesomium::WebURL::IsValid() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebURL::IsValid() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebURL::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebURL::IsEmpty() const function, expected prototype:\nbool Awesomium::WebURL::IsEmpty() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebURL::IsEmpty() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::spec() const
	static int _bind_spec(lua_State *L) {
		if (!_lg_typecheck_spec(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::spec() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::spec() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::spec() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->spec();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::scheme() const
	static int _bind_scheme(lua_State *L) {
		if (!_lg_typecheck_scheme(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::scheme() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::scheme() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::scheme() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->scheme();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::username() const
	static int _bind_username(lua_State *L) {
		if (!_lg_typecheck_username(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::username() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::username() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::username() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->username();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::password() const
	static int _bind_password(lua_State *L) {
		if (!_lg_typecheck_password(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::password() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::password() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::password() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->password();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::host() const
	static int _bind_host(lua_State *L) {
		if (!_lg_typecheck_host(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::host() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::host() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::host() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->host();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::port() const
	static int _bind_port(lua_State *L) {
		if (!_lg_typecheck_port(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::port() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::port() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::port() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->port();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::path() const
	static int _bind_path(lua_State *L) {
		if (!_lg_typecheck_path(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::path() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::path() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::path() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->path();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::query() const
	static int _bind_query(lua_State *L) {
		if (!_lg_typecheck_query(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::query() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::query() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::query() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->query();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::anchor() const
	static int _bind_anchor(lua_State *L) {
		if (!_lg_typecheck_anchor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::anchor() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::anchor() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::anchor() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->anchor();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// Awesomium::WebString Awesomium::WebURL::filename() const
	static int _bind_filename(lua_State *L) {
		if (!_lg_typecheck_filename(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebURL::filename() const function, expected prototype:\nAwesomium::WebString Awesomium::WebURL::filename() const\nClass arguments details:\n");
		}


		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebURL::filename() const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->filename();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}


	// Operator binds:
	// Awesomium::WebURL & Awesomium::WebURL::operator=(const Awesomium::WebURL & rhs)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL & Awesomium::WebURL::operator=(const Awesomium::WebURL & rhs) function, expected prototype:\nAwesomium::WebURL & Awesomium::WebURL::operator=(const Awesomium::WebURL & rhs)\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		const Awesomium::WebURL* rhs_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in Awesomium::WebURL::operator= function");
		}
		const Awesomium::WebURL & rhs=*rhs_ptr;

		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebURL & Awesomium::WebURL::operator=(const Awesomium::WebURL &). Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		const Awesomium::WebURL* lret = &self->operator=(rhs);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebURL >::push(L,lret,false);

		return 1;
	}

	// bool Awesomium::WebURL::operator==(const Awesomium::WebURL & other) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebURL::operator==(const Awesomium::WebURL & other) const function, expected prototype:\nbool Awesomium::WebURL::operator==(const Awesomium::WebURL & other) const\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		const Awesomium::WebURL* other_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in Awesomium::WebURL::operator== function");
		}
		const Awesomium::WebURL & other=*other_ptr;

		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebURL::operator==(const Awesomium::WebURL &) const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		bool lret = self->operator==(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebURL::operator!=(const Awesomium::WebURL & other) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebURL::operator!=(const Awesomium::WebURL & other) const function, expected prototype:\nbool Awesomium::WebURL::operator!=(const Awesomium::WebURL & other) const\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		const Awesomium::WebURL* other_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in Awesomium::WebURL::operator!= function");
		}
		const Awesomium::WebURL & other=*other_ptr;

		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebURL::operator!=(const Awesomium::WebURL &) const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		bool lret = self->operator!=(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::WebURL::operator<(const Awesomium::WebURL & other) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebURL::operator<(const Awesomium::WebURL & other) const function, expected prototype:\nbool Awesomium::WebURL::operator<(const Awesomium::WebURL & other) const\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		const Awesomium::WebURL* other_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in Awesomium::WebURL::operator< function");
		}
		const Awesomium::WebURL & other=*other_ptr;

		Awesomium::WebURL* self=(Luna< Awesomium::WebURL >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebURL::operator<(const Awesomium::WebURL &) const. Got : '%s'",typeid(Luna< Awesomium::WebURL >::check(L,1)).name());
		}
		bool lret = self->operator<(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

Awesomium::WebURL* LunaTraits< Awesomium::WebURL >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_WebURL::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< Awesomium::WebURL >::_bind_dtor(Awesomium::WebURL* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebURL >::className[] = "WebURL";
const char LunaTraits< Awesomium::WebURL >::fullName[] = "Awesomium::WebURL";
const char LunaTraits< Awesomium::WebURL >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebURL >::parents[] = {0};
const int LunaTraits< Awesomium::WebURL >::hash = 3243885;
const int LunaTraits< Awesomium::WebURL >::uniqueIDs[] = {3243885,0};

luna_RegType LunaTraits< Awesomium::WebURL >::methods[] = {
	{"IsValid", &luna_wrapper_Awesomium_WebURL::_bind_IsValid},
	{"IsEmpty", &luna_wrapper_Awesomium_WebURL::_bind_IsEmpty},
	{"spec", &luna_wrapper_Awesomium_WebURL::_bind_spec},
	{"scheme", &luna_wrapper_Awesomium_WebURL::_bind_scheme},
	{"username", &luna_wrapper_Awesomium_WebURL::_bind_username},
	{"password", &luna_wrapper_Awesomium_WebURL::_bind_password},
	{"host", &luna_wrapper_Awesomium_WebURL::_bind_host},
	{"port", &luna_wrapper_Awesomium_WebURL::_bind_port},
	{"path", &luna_wrapper_Awesomium_WebURL::_bind_path},
	{"query", &luna_wrapper_Awesomium_WebURL::_bind_query},
	{"anchor", &luna_wrapper_Awesomium_WebURL::_bind_anchor},
	{"filename", &luna_wrapper_Awesomium_WebURL::_bind_filename},
	{"op_assign", &luna_wrapper_Awesomium_WebURL::_bind_op_assign},
	{"__eq", &luna_wrapper_Awesomium_WebURL::_bind___eq},
	{"op_neq", &luna_wrapper_Awesomium_WebURL::_bind_op_neq},
	{"__lt", &luna_wrapper_Awesomium_WebURL::_bind___lt},
	{"dynCast", &luna_wrapper_Awesomium_WebURL::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebURL >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebURL >::enumValues[] = {
	{0,0}
};


