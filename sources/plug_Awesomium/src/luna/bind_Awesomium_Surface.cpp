#include <plug_common.h>

#include <luna/wrappers/wrapper_Awesomium_Surface.h>

class luna_wrapper_Awesomium_Surface {
public:
	typedef Luna< Awesomium::Surface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		Awesomium::Surface* self=(Luna< Awesomium::Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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

		Awesomium::Surface* self=(Luna< Awesomium::Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::Surface");
		
		return luna_dynamicCast(L,converters,"Awesomium::Surface",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
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
	// Awesomium::Surface::Surface(lua_Table * data)
	static Awesomium::Surface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::Surface::Surface(lua_Table * data) function, expected prototype:\nAwesomium::Surface::Surface(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_Awesomium_Surface(L,NULL);
	}


	// Function binds:
	// void Awesomium::Surface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	static int _bind_Paint(lua_State *L) {
		if (!_lg_typecheck_Paint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::Surface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect) function, expected prototype:\nvoid Awesomium::Surface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)\nClass arguments details:\narg 3 ID = 8907551\narg 4 ID = 8907551\n");
		}

		unsigned char src_buffer = (unsigned char)(lua_tointeger(L,2));
		int src_row_span=(int)lua_tointeger(L,3);
		const Awesomium::Rect* src_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !src_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src_rect in Awesomium::Surface::Paint function");
		}
		const Awesomium::Rect & src_rect=*src_rect_ptr;
		const Awesomium::Rect* dest_rect_ptr=(Luna< Awesomium::Rect >::check(L,5));
		if( !dest_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dest_rect in Awesomium::Surface::Paint function");
		}
		const Awesomium::Rect & dest_rect=*dest_rect_ptr;

		Awesomium::Surface* self=(Luna< Awesomium::Surface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::Surface::Paint(unsigned char *, int, const Awesomium::Rect &, const Awesomium::Rect &)");
		}
		self->Paint(&src_buffer, src_row_span, src_rect, dest_rect);

		return 0;
	}

	// void Awesomium::Surface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
	static int _bind_Scroll(lua_State *L) {
		if (!_lg_typecheck_Scroll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::Surface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect) function, expected prototype:\nvoid Awesomium::Surface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)\nClass arguments details:\narg 3 ID = 8907551\n");
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const Awesomium::Rect* clip_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !clip_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip_rect in Awesomium::Surface::Scroll function");
		}
		const Awesomium::Rect & clip_rect=*clip_rect_ptr;

		Awesomium::Surface* self=(Luna< Awesomium::Surface >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::Surface::Scroll(int, int, const Awesomium::Rect &)");
		}
		self->Scroll(dx, dy, clip_rect);

		return 0;
	}


	// Operator binds:

};

Awesomium::Surface* LunaTraits< Awesomium::Surface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Awesomium_Surface::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void Awesomium::Surface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	// void Awesomium::Surface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
}

void LunaTraits< Awesomium::Surface >::_bind_dtor(Awesomium::Surface* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::Surface >::className[] = "Surface";
const char LunaTraits< Awesomium::Surface >::fullName[] = "Awesomium::Surface";
const char LunaTraits< Awesomium::Surface >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::Surface >::parents[] = {0};
const int LunaTraits< Awesomium::Surface >::hash = 23910648;
const int LunaTraits< Awesomium::Surface >::uniqueIDs[] = {23910648,0};

luna_RegType LunaTraits< Awesomium::Surface >::methods[] = {
	{"Paint", &luna_wrapper_Awesomium_Surface::_bind_Paint},
	{"Scroll", &luna_wrapper_Awesomium_Surface::_bind_Scroll},
	{"dynCast", &luna_wrapper_Awesomium_Surface::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_Surface::_bind___eq},
	{"getTable", &luna_wrapper_Awesomium_Surface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::Surface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::Surface >::enumValues[] = {
	{0,0}
};


