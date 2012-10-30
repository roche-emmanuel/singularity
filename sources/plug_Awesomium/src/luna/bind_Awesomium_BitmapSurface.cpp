#include <plug_common.h>

class luna_wrapper_Awesomium_BitmapSurface {
public:
	typedef Luna< Awesomium::BitmapSurface > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23910648) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::Surface*)");
		}

		Awesomium::Surface* rhs =(Luna< Awesomium::Surface >::check(L,2));
		Awesomium::Surface* self=(Luna< Awesomium::Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Surface(lua_State *L) {
		// all checked are already performed before reaching this point.
		Awesomium::BitmapSurface* ptr= static_cast< Awesomium::BitmapSurface* >(Luna< Awesomium::Surface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< Awesomium::BitmapSurface >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_buffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_width(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_row_span(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_is_dirty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_is_dirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CopyTo(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveToPNG(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveToJPEG(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isstring(L,2)==0) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAlphaAtPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Paint(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,8907551) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,8907551) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Scroll(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,8907551) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// Awesomium::BitmapSurface::BitmapSurface(int width, int height)
	static Awesomium::BitmapSurface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::BitmapSurface::BitmapSurface(int width, int height) function, expected prototype:\nAwesomium::BitmapSurface::BitmapSurface(int width, int height)\nClass arguments details:\n");
		}

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);

		return new Awesomium::BitmapSurface(width, height);
	}


	// Function binds:
	// const unsigned char * Awesomium::BitmapSurface::buffer() const
	static int _bind_buffer(lua_State *L) {
		if (!_lg_typecheck_buffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * Awesomium::BitmapSurface::buffer() const function, expected prototype:\nconst unsigned char * Awesomium::BitmapSurface::buffer() const\nClass arguments details:\n");
		}


		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * Awesomium::BitmapSurface::buffer() const");
		}
		const unsigned char * lret = self->buffer();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int Awesomium::BitmapSurface::width() const
	static int _bind_width(lua_State *L) {
		if (!_lg_typecheck_width(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::BitmapSurface::width() const function, expected prototype:\nint Awesomium::BitmapSurface::width() const\nClass arguments details:\n");
		}


		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::BitmapSurface::width() const");
		}
		int lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::BitmapSurface::height() const
	static int _bind_height(lua_State *L) {
		if (!_lg_typecheck_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::BitmapSurface::height() const function, expected prototype:\nint Awesomium::BitmapSurface::height() const\nClass arguments details:\n");
		}


		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::BitmapSurface::height() const");
		}
		int lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::BitmapSurface::row_span() const
	static int _bind_row_span(lua_State *L) {
		if (!_lg_typecheck_row_span(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::BitmapSurface::row_span() const function, expected prototype:\nint Awesomium::BitmapSurface::row_span() const\nClass arguments details:\n");
		}


		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::BitmapSurface::row_span() const");
		}
		int lret = self->row_span();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void Awesomium::BitmapSurface::set_is_dirty(bool is_dirty)
	static int _bind_set_is_dirty(lua_State *L) {
		if (!_lg_typecheck_set_is_dirty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::BitmapSurface::set_is_dirty(bool is_dirty) function, expected prototype:\nvoid Awesomium::BitmapSurface::set_is_dirty(bool is_dirty)\nClass arguments details:\n");
		}

		bool is_dirty=(bool)(lua_toboolean(L,2)==1);

		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::BitmapSurface::set_is_dirty(bool)");
		}
		self->set_is_dirty(is_dirty);

		return 0;
	}

	// bool Awesomium::BitmapSurface::is_dirty() const
	static int _bind_is_dirty(lua_State *L) {
		if (!_lg_typecheck_is_dirty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::BitmapSurface::is_dirty() const function, expected prototype:\nbool Awesomium::BitmapSurface::is_dirty() const\nClass arguments details:\n");
		}


		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::BitmapSurface::is_dirty() const");
		}
		bool lret = self->is_dirty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void Awesomium::BitmapSurface::CopyTo(unsigned char * dest_buffer, int dest_row_span, int dest_depth, bool convert_to_rgba, bool flip_y) const
	static int _bind_CopyTo(lua_State *L) {
		if (!_lg_typecheck_CopyTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::BitmapSurface::CopyTo(unsigned char * dest_buffer, int dest_row_span, int dest_depth, bool convert_to_rgba, bool flip_y) const function, expected prototype:\nvoid Awesomium::BitmapSurface::CopyTo(unsigned char * dest_buffer, int dest_row_span, int dest_depth, bool convert_to_rgba, bool flip_y) const\nClass arguments details:\n");
		}

		unsigned char dest_buffer = (unsigned char)(lua_tointeger(L,2));
		int dest_row_span=(int)lua_tointeger(L,3);
		int dest_depth=(int)lua_tointeger(L,4);
		bool convert_to_rgba=(bool)(lua_toboolean(L,5)==1);
		bool flip_y=(bool)(lua_toboolean(L,6)==1);

		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::BitmapSurface::CopyTo(unsigned char *, int, int, bool, bool) const");
		}
		self->CopyTo(&dest_buffer, dest_row_span, dest_depth, convert_to_rgba, flip_y);

		return 0;
	}

	// bool Awesomium::BitmapSurface::SaveToPNG(const Awesomium::WebString & file_path, bool preserve_transparency = false) const
	static int _bind_SaveToPNG(lua_State *L) {
		if (!_lg_typecheck_SaveToPNG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::BitmapSurface::SaveToPNG(const Awesomium::WebString & file_path, bool preserve_transparency = false) const function, expected prototype:\nbool Awesomium::BitmapSurface::SaveToPNG(const Awesomium::WebString & file_path, bool preserve_transparency = false) const\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		int luatop = lua_gettop(L);

		std::string file_path_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString file_path = Awesomium::ToWebString(file_path_str);
		bool preserve_transparency=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : false;

		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::BitmapSurface::SaveToPNG(const Awesomium::WebString &, bool) const");
		}
		bool lret = self->SaveToPNG(file_path, preserve_transparency);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool Awesomium::BitmapSurface::SaveToJPEG(const Awesomium::WebString & file_path, int quality = 90) const
	static int _bind_SaveToJPEG(lua_State *L) {
		if (!_lg_typecheck_SaveToJPEG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::BitmapSurface::SaveToJPEG(const Awesomium::WebString & file_path, int quality = 90) const function, expected prototype:\nbool Awesomium::BitmapSurface::SaveToJPEG(const Awesomium::WebString & file_path, int quality = 90) const\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		int luatop = lua_gettop(L);

		std::string file_path_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString file_path = Awesomium::ToWebString(file_path_str);
		int quality=luatop>2 ? (int)lua_tointeger(L,3) : 90;

		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::BitmapSurface::SaveToJPEG(const Awesomium::WebString &, int) const");
		}
		bool lret = self->SaveToJPEG(file_path, quality);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned char Awesomium::BitmapSurface::GetAlphaAtPoint(int x, int y) const
	static int _bind_GetAlphaAtPoint(lua_State *L) {
		if (!_lg_typecheck_GetAlphaAtPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char Awesomium::BitmapSurface::GetAlphaAtPoint(int x, int y) const function, expected prototype:\nunsigned char Awesomium::BitmapSurface::GetAlphaAtPoint(int x, int y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char Awesomium::BitmapSurface::GetAlphaAtPoint(int, int) const");
		}
		unsigned char lret = self->GetAlphaAtPoint(x, y);
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void Awesomium::BitmapSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	static int _bind_Paint(lua_State *L) {
		if (!_lg_typecheck_Paint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::BitmapSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect) function, expected prototype:\nvoid Awesomium::BitmapSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)\nClass arguments details:\narg 3 ID = 8907551\narg 4 ID = 8907551\n");
		}

		unsigned char src_buffer = (unsigned char)(lua_tointeger(L,2));
		int src_row_span=(int)lua_tointeger(L,3);
		const Awesomium::Rect* src_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !src_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src_rect in Awesomium::BitmapSurface::Paint function");
		}
		const Awesomium::Rect & src_rect=*src_rect_ptr;
		const Awesomium::Rect* dest_rect_ptr=(Luna< Awesomium::Rect >::check(L,5));
		if( !dest_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dest_rect in Awesomium::BitmapSurface::Paint function");
		}
		const Awesomium::Rect & dest_rect=*dest_rect_ptr;

		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::BitmapSurface::Paint(unsigned char *, int, const Awesomium::Rect &, const Awesomium::Rect &)");
		}
		self->Paint(&src_buffer, src_row_span, src_rect, dest_rect);

		return 0;
	}

	// void Awesomium::BitmapSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
	static int _bind_Scroll(lua_State *L) {
		if (!_lg_typecheck_Scroll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::BitmapSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect) function, expected prototype:\nvoid Awesomium::BitmapSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)\nClass arguments details:\narg 3 ID = 8907551\n");
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const Awesomium::Rect* clip_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !clip_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip_rect in Awesomium::BitmapSurface::Scroll function");
		}
		const Awesomium::Rect & clip_rect=*clip_rect_ptr;

		Awesomium::BitmapSurface* self=static_cast< Awesomium::BitmapSurface* >(Luna< void >::rawPointer(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::BitmapSurface::Scroll(int, int, const Awesomium::Rect &)");
		}
		self->Scroll(dx, dy, clip_rect);

		return 0;
	}


	// Operator binds:

};

Awesomium::BitmapSurface* LunaTraits< Awesomium::BitmapSurface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_BitmapSurface::_bind_ctor(L);
}

void LunaTraits< Awesomium::BitmapSurface >::_bind_dtor(Awesomium::BitmapSurface* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::BitmapSurface >::className[] = "BitmapSurface";
const char LunaTraits< Awesomium::BitmapSurface >::fullName[] = "Awesomium::BitmapSurface";
const char LunaTraits< Awesomium::BitmapSurface >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::BitmapSurface >::parents[] = {"Awesomium.Surface", 0};
const int LunaTraits< Awesomium::BitmapSurface >::hash = 93652117;
const int LunaTraits< Awesomium::BitmapSurface >::uniqueIDs[] = {23910648,0};

luna_RegType LunaTraits< Awesomium::BitmapSurface >::methods[] = {
	{"buffer", &luna_wrapper_Awesomium_BitmapSurface::_bind_buffer},
	{"width", &luna_wrapper_Awesomium_BitmapSurface::_bind_width},
	{"height", &luna_wrapper_Awesomium_BitmapSurface::_bind_height},
	{"row_span", &luna_wrapper_Awesomium_BitmapSurface::_bind_row_span},
	{"set_is_dirty", &luna_wrapper_Awesomium_BitmapSurface::_bind_set_is_dirty},
	{"is_dirty", &luna_wrapper_Awesomium_BitmapSurface::_bind_is_dirty},
	{"CopyTo", &luna_wrapper_Awesomium_BitmapSurface::_bind_CopyTo},
	{"SaveToPNG", &luna_wrapper_Awesomium_BitmapSurface::_bind_SaveToPNG},
	{"SaveToJPEG", &luna_wrapper_Awesomium_BitmapSurface::_bind_SaveToJPEG},
	{"GetAlphaAtPoint", &luna_wrapper_Awesomium_BitmapSurface::_bind_GetAlphaAtPoint},
	{"Paint", &luna_wrapper_Awesomium_BitmapSurface::_bind_Paint},
	{"Scroll", &luna_wrapper_Awesomium_BitmapSurface::_bind_Scroll},
	{"__eq", &luna_wrapper_Awesomium_BitmapSurface::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::BitmapSurface >::converters[] = {
	{"Awesomium::Surface", &luna_wrapper_Awesomium_BitmapSurface::_cast_from_Surface},
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::BitmapSurface >::enumValues[] = {
	{0,0}
};


