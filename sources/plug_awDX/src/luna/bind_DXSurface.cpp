#include <plug_common.h>

class luna_wrapper_DXSurface {
public:
	typedef Luna< DXSurface > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		DXSurface* self= (DXSurface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< DXSurface >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23910648) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< Awesomium::Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Surface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//DXSurface* ptr= dynamic_cast< DXSurface* >(Luna< Awesomium::Surface >::check(L,1));
		DXSurface* ptr= luna_caster< Awesomium::Surface, DXSurface >::cast(Luna< Awesomium::Surface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< DXSurface >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setTargetSurface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,52064030)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_validateClipRect(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,8907551) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,8907551) ) return false;
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
	// DXSurface::DXSurface()
	static DXSurface* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in DXSurface::DXSurface() function, expected prototype:\nDXSurface::DXSurface()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new DXSurface();
	}


	// Function binds:
	// void DXSurface::setTargetSurface(IDirect3DSurface9 * surface)
	static int _bind_setTargetSurface(lua_State *L) {
		if (!_lg_typecheck_setTargetSurface(L)) {
			luaL_error(L, "luna typecheck failed in void DXSurface::setTargetSurface(IDirect3DSurface9 * surface) function, expected prototype:\nvoid DXSurface::setTargetSurface(IDirect3DSurface9 * surface)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DSurface9* surface=(Luna< IDirect3DSurface9 >::check(L,2));

		DXSurface* self=Luna< Awesomium::Surface >::checkSubType< DXSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void DXSurface::setTargetSurface(IDirect3DSurface9 *). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTargetSurface(surface);

		return 0;
	}

	// void DXSurface::validateClipRect(int dx, int dy, const Awesomium::Rect & clip_rect, Awesomium::Rect & result)
	static int _bind_validateClipRect(lua_State *L) {
		if (!_lg_typecheck_validateClipRect(L)) {
			luaL_error(L, "luna typecheck failed in void DXSurface::validateClipRect(int dx, int dy, const Awesomium::Rect & clip_rect, Awesomium::Rect & result) function, expected prototype:\nvoid DXSurface::validateClipRect(int dx, int dy, const Awesomium::Rect & clip_rect, Awesomium::Rect & result)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const Awesomium::Rect* clip_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !clip_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip_rect in DXSurface::validateClipRect function");
		}
		const Awesomium::Rect & clip_rect=*clip_rect_ptr;
		Awesomium::Rect* result_ptr=(Luna< Awesomium::Rect >::check(L,5));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in DXSurface::validateClipRect function");
		}
		Awesomium::Rect & result=*result_ptr;

		DXSurface* self=Luna< Awesomium::Surface >::checkSubType< DXSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void DXSurface::validateClipRect(int, int, const Awesomium::Rect &, Awesomium::Rect &). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->validateClipRect(dx, dy, clip_rect, result);

		return 0;
	}

	// void DXSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	static int _bind_Paint(lua_State *L) {
		if (!_lg_typecheck_Paint(L)) {
			luaL_error(L, "luna typecheck failed in void DXSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect) function, expected prototype:\nvoid DXSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char src_buffer = (unsigned char)(lua_tointeger(L,2));
		int src_row_span=(int)lua_tointeger(L,3);
		const Awesomium::Rect* src_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !src_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src_rect in DXSurface::Paint function");
		}
		const Awesomium::Rect & src_rect=*src_rect_ptr;
		const Awesomium::Rect* dest_rect_ptr=(Luna< Awesomium::Rect >::check(L,5));
		if( !dest_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dest_rect in DXSurface::Paint function");
		}
		const Awesomium::Rect & dest_rect=*dest_rect_ptr;

		DXSurface* self=Luna< Awesomium::Surface >::checkSubType< DXSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void DXSurface::Paint(unsigned char *, int, const Awesomium::Rect &, const Awesomium::Rect &). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Paint(&src_buffer, src_row_span, src_rect, dest_rect);

		return 0;
	}

	// void DXSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
	static int _bind_Scroll(lua_State *L) {
		if (!_lg_typecheck_Scroll(L)) {
			luaL_error(L, "luna typecheck failed in void DXSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect) function, expected prototype:\nvoid DXSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const Awesomium::Rect* clip_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !clip_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip_rect in DXSurface::Scroll function");
		}
		const Awesomium::Rect & clip_rect=*clip_rect_ptr;

		DXSurface* self=Luna< Awesomium::Surface >::checkSubType< DXSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void DXSurface::Scroll(int, int, const Awesomium::Rect &). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scroll(dx, dy, clip_rect);

		return 0;
	}


	// Operator binds:

};

DXSurface* LunaTraits< DXSurface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_DXSurface::_bind_ctor(L);
}

void LunaTraits< DXSurface >::_bind_dtor(DXSurface* obj) {
	delete obj;
}

const char LunaTraits< DXSurface >::className[] = "DXSurface";
const char LunaTraits< DXSurface >::fullName[] = "DXSurface";
const char LunaTraits< DXSurface >::moduleName[] = "awDX";
const char* LunaTraits< DXSurface >::parents[] = {"Awesomium.Surface", 0};
const int LunaTraits< DXSurface >::hash = 17781100;
const int LunaTraits< DXSurface >::uniqueIDs[] = {23910648,0};

luna_RegType LunaTraits< DXSurface >::methods[] = {
	{"setTargetSurface", &luna_wrapper_DXSurface::_bind_setTargetSurface},
	{"validateClipRect", &luna_wrapper_DXSurface::_bind_validateClipRect},
	{"Paint", &luna_wrapper_DXSurface::_bind_Paint},
	{"Scroll", &luna_wrapper_DXSurface::_bind_Scroll},
	{"fromVoid", &luna_wrapper_DXSurface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_DXSurface::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< DXSurface >::converters[] = {
	{"Awesomium::Surface", &luna_wrapper_DXSurface::_cast_from_Surface},
	{0,0}
};

luna_RegEnumType LunaTraits< DXSurface >::enumValues[] = {
	{0,0}
};


