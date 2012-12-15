#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWithImages.h>

class luna_wrapper_wxWithImages {
public:
	typedef Luna< wxWithImages > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14187710) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxWithImages*)");
		}

		wxWithImages* rhs =(Luna< wxWithImages >::check(L,2));
		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
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

		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxWithImages");
		
		return luna_dynamicCast(L,converters,"wxWithImages",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AssignImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWithImages::wxWithImages()
	static wxWithImages* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWithImages::wxWithImages() function, expected prototype:\nwxWithImages::wxWithImages()\nClass arguments details:\n");
		}


		return new wxWithImages();
	}

	// wxWithImages::wxWithImages(lua_Table * data)
	static wxWithImages* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxWithImages::wxWithImages(lua_Table * data) function, expected prototype:\nwxWithImages::wxWithImages(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_wxWithImages(L,NULL);
	}

	// Overload binder for wxWithImages::wxWithImages
	static wxWithImages* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWithImages, cannot match any of the overloads for function wxWithImages:\n  wxWithImages()\n  wxWithImages(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxWithImages::AssignImageList(wxImageList * imageList)
	static int _bind_AssignImageList(lua_State *L) {
		if (!_lg_typecheck_AssignImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWithImages::AssignImageList(wxImageList * imageList) function, expected prototype:\nvoid wxWithImages::AssignImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWithImages::AssignImageList(wxImageList *)");
		}
		self->AssignImageList(imageList);

		return 0;
	}

	// void wxWithImages::SetImageList(wxImageList * imageList)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWithImages::SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxWithImages::SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWithImages::SetImageList(wxImageList *)");
		}
		self->SetImageList(imageList);

		return 0;
	}

	// wxImageList * wxWithImages::GetImageList() const
	static int _bind_GetImageList(lua_State *L) {
		if (!_lg_typecheck_GetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxImageList * wxWithImages::GetImageList() const function, expected prototype:\nwxImageList * wxWithImages::GetImageList() const\nClass arguments details:\n");
		}


		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxImageList * wxWithImages::GetImageList() const");
		}
		wxImageList * lret = self->GetImageList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// void wxWithImages::base_SetImageList(wxImageList * imageList)
	static int _bind_base_SetImageList(lua_State *L) {
		if (!_lg_typecheck_base_SetImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxWithImages::base_SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxWithImages::base_SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxWithImages* self=(Luna< wxWithImages >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxWithImages::base_SetImageList(wxImageList *)");
		}
		self->wxWithImages::SetImageList(imageList);

		return 0;
	}


	// Operator binds:

};

wxWithImages* LunaTraits< wxWithImages >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWithImages::_bind_ctor(L);
}

void LunaTraits< wxWithImages >::_bind_dtor(wxWithImages* obj) {
	delete obj;
}

const char LunaTraits< wxWithImages >::className[] = "wxWithImages";
const char LunaTraits< wxWithImages >::fullName[] = "wxWithImages";
const char LunaTraits< wxWithImages >::moduleName[] = "wx";
const char* LunaTraits< wxWithImages >::parents[] = {0};
const int LunaTraits< wxWithImages >::hash = 14187710;
const int LunaTraits< wxWithImages >::uniqueIDs[] = {14187710,0};

luna_RegType LunaTraits< wxWithImages >::methods[] = {
	{"AssignImageList", &luna_wrapper_wxWithImages::_bind_AssignImageList},
	{"SetImageList", &luna_wrapper_wxWithImages::_bind_SetImageList},
	{"GetImageList", &luna_wrapper_wxWithImages::_bind_GetImageList},
	{"base_SetImageList", &luna_wrapper_wxWithImages::_bind_base_SetImageList},
	{"dynCast", &luna_wrapper_wxWithImages::_bind_dynCast},
	{"__eq", &luna_wrapper_wxWithImages::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< wxWithImages >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxWithImages >::enumValues[] = {
	{"NO_IMAGE", wxWithImages::NO_IMAGE},
	{0,0}
};


