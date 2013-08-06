#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_UploadElement.h>

class luna_wrapper_Awesomium_UploadElement {
public:
	typedef Luna< Awesomium::UploadElement > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::UploadElement* self=(Luna< Awesomium::UploadElement >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::UploadElement,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53298683) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::UploadElement*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::UploadElement* rhs =(Luna< Awesomium::UploadElement >::check(L,2));
		Awesomium::UploadElement* self=(Luna< Awesomium::UploadElement >::check(L,1));
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

		Awesomium::UploadElement* self= (Awesomium::UploadElement*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::UploadElement >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53298683) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::UploadElement >::check(L,1));
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

		Awesomium::UploadElement* self=(Luna< Awesomium::UploadElement >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::UploadElement");
		
		return luna_dynamicCast(L,converters,"Awesomium::UploadElement",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsFilePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsBytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_num_bytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_bytes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_file_path(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::UploadElement::UploadElement(lua_Table * data)
	static Awesomium::UploadElement* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::UploadElement::UploadElement(lua_Table * data) function, expected prototype:\nAwesomium::UploadElement::UploadElement(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_Awesomium_UploadElement(L,NULL);
	}


	// Function binds:
	// bool Awesomium::UploadElement::IsFilePath() const
	static int _bind_IsFilePath(lua_State *L) {
		if (!_lg_typecheck_IsFilePath(L)) {
			luaL_error(L, "luna typecheck failed in bool Awesomium::UploadElement::IsFilePath() const function, expected prototype:\nbool Awesomium::UploadElement::IsFilePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::UploadElement* self=(Luna< Awesomium::UploadElement >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool Awesomium::UploadElement::IsFilePath() const. Got : '%s'\n%s",typeid(Luna< Awesomium::UploadElement >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFilePath();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::UploadElement::IsBytes() const
	static int _bind_IsBytes(lua_State *L) {
		if (!_lg_typecheck_IsBytes(L)) {
			luaL_error(L, "luna typecheck failed in bool Awesomium::UploadElement::IsBytes() const function, expected prototype:\nbool Awesomium::UploadElement::IsBytes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::UploadElement* self=(Luna< Awesomium::UploadElement >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool Awesomium::UploadElement::IsBytes() const. Got : '%s'\n%s",typeid(Luna< Awesomium::UploadElement >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsBytes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int Awesomium::UploadElement::num_bytes() const
	static int _bind_num_bytes(lua_State *L) {
		if (!_lg_typecheck_num_bytes(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int Awesomium::UploadElement::num_bytes() const function, expected prototype:\nunsigned int Awesomium::UploadElement::num_bytes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::UploadElement* self=(Luna< Awesomium::UploadElement >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int Awesomium::UploadElement::num_bytes() const. Got : '%s'\n%s",typeid(Luna< Awesomium::UploadElement >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->num_bytes();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * Awesomium::UploadElement::bytes() const
	static int _bind_bytes(lua_State *L) {
		if (!_lg_typecheck_bytes(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * Awesomium::UploadElement::bytes() const function, expected prototype:\nconst unsigned char * Awesomium::UploadElement::bytes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::UploadElement* self=(Luna< Awesomium::UploadElement >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * Awesomium::UploadElement::bytes() const. Got : '%s'\n%s",typeid(Luna< Awesomium::UploadElement >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->bytes();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Awesomium::WebString Awesomium::UploadElement::file_path() const
	static int _bind_file_path(lua_State *L) {
		if (!_lg_typecheck_file_path(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::UploadElement::file_path() const function, expected prototype:\nAwesomium::WebString Awesomium::UploadElement::file_path() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		Awesomium::UploadElement* self=(Luna< Awesomium::UploadElement >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::UploadElement::file_path() const. Got : '%s'\n%s",typeid(Luna< Awesomium::UploadElement >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebString lret = self->file_path();
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}


	// Operator binds:

};

Awesomium::UploadElement* LunaTraits< Awesomium::UploadElement >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_UploadElement::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool Awesomium::UploadElement::IsFilePath() const
	// bool Awesomium::UploadElement::IsBytes() const
	// unsigned int Awesomium::UploadElement::num_bytes() const
	// const unsigned char * Awesomium::UploadElement::bytes() const
	// Awesomium::WebString Awesomium::UploadElement::file_path() const
}

void LunaTraits< Awesomium::UploadElement >::_bind_dtor(Awesomium::UploadElement* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< Awesomium::UploadElement >::className[] = "UploadElement";
const char LunaTraits< Awesomium::UploadElement >::fullName[] = "Awesomium::UploadElement";
const char LunaTraits< Awesomium::UploadElement >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::UploadElement >::parents[] = {0};
const int LunaTraits< Awesomium::UploadElement >::hash = 53298683;
const int LunaTraits< Awesomium::UploadElement >::uniqueIDs[] = {53298683,0};

luna_RegType LunaTraits< Awesomium::UploadElement >::methods[] = {
	{"IsFilePath", &luna_wrapper_Awesomium_UploadElement::_bind_IsFilePath},
	{"IsBytes", &luna_wrapper_Awesomium_UploadElement::_bind_IsBytes},
	{"num_bytes", &luna_wrapper_Awesomium_UploadElement::_bind_num_bytes},
	{"bytes", &luna_wrapper_Awesomium_UploadElement::_bind_bytes},
	{"file_path", &luna_wrapper_Awesomium_UploadElement::_bind_file_path},
	{"dynCast", &luna_wrapper_Awesomium_UploadElement::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_UploadElement::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_UploadElement::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_UploadElement::_bind_asVoid},
	{"getTable", &luna_wrapper_Awesomium_UploadElement::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::UploadElement >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::UploadElement >::enumValues[] = {
	{0,0}
};


