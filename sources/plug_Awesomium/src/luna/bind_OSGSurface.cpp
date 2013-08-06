#include <plug_common.h>

#include <luna/wrappers/wrapper_OSGSurface.h>

class luna_wrapper_OSGSurface {
public:
	typedef Luna< OSGSurface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::Surface* self=(Luna< Awesomium::Surface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<Awesomium::Surface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		OSGSurface* self= (OSGSurface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OSGSurface >::push(L,self,false);
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
		//OSGSurface* ptr= dynamic_cast< OSGSurface* >(Luna< Awesomium::Surface >::check(L,1));
		OSGSurface* ptr= luna_caster< Awesomium::Surface, OSGSurface >::cast(Luna< Awesomium::Surface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< OSGSurface >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,613205)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< Awesomium::WebView >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,613205)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< Awesomium::WebView >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWebView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_validateClipRect(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,8907551) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_Paint(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,8907551) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,8907551) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Scroll(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,8907551) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// OSGSurface::OSGSurface(Awesomium::WebView * view)
	static OSGSurface* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in OSGSurface::OSGSurface(Awesomium::WebView * view) function, expected prototype:\nOSGSurface::OSGSurface(Awesomium::WebView * view)\nClass arguments details:\narg 1 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* view=(Luna< Awesomium::WebView >::check(L,1));

		return new OSGSurface(view);
	}

	// OSGSurface::OSGSurface(lua_Table * data, Awesomium::WebView * view)
	static OSGSurface* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in OSGSurface::OSGSurface(lua_Table * data, Awesomium::WebView * view) function, expected prototype:\nOSGSurface::OSGSurface(lua_Table * data, Awesomium::WebView * view)\nClass arguments details:\narg 2 ID = 613205\n\n%s",luna_dumpStack(L).c_str());
		}

		Awesomium::WebView* view=(Luna< Awesomium::WebView >::check(L,2));

		return new wrapper_OSGSurface(L,NULL, view);
	}

	// Overload binder for OSGSurface::OSGSurface
	static OSGSurface* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function OSGSurface, cannot match any of the overloads for function OSGSurface:\n  OSGSurface(Awesomium::WebView *)\n  OSGSurface(lua_Table *, Awesomium::WebView *)\n");
		return NULL;
	}


	// Function binds:
	// Awesomium::WebView * OSGSurface::getWebView()
	static int _bind_getWebView(lua_State *L) {
		if (!_lg_typecheck_getWebView(L)) {
			luaL_error(L, "luna typecheck failed in Awesomium::WebView * OSGSurface::getWebView() function, expected prototype:\nAwesomium::WebView * OSGSurface::getWebView()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OSGSurface* self=Luna< Awesomium::Surface >::checkSubType< OSGSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call Awesomium::WebView * OSGSurface::getWebView(). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		Awesomium::WebView * lret = self->getWebView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebView >::push(L,lret,false);

		return 1;
	}

	// void OSGSurface::setSize(int width, int height)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luaL_error(L, "luna typecheck failed in void OSGSurface::setSize(int width, int height) function, expected prototype:\nvoid OSGSurface::setSize(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		OSGSurface* self=Luna< Awesomium::Surface >::checkSubType< OSGSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void OSGSurface::setSize(int, int). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSize(width, height);

		return 0;
	}

	// osg::Texture2D * OSGSurface::getTexture()
	static int _bind_getTexture(lua_State *L) {
		if (!_lg_typecheck_getTexture(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture2D * OSGSurface::getTexture() function, expected prototype:\nosg::Texture2D * OSGSurface::getTexture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OSGSurface* self=Luna< Awesomium::Surface >::checkSubType< OSGSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Texture2D * OSGSurface::getTexture(). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Texture2D * lret = self->getTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture2D >::push(L,lret,false);

		return 1;
	}

	// void OSGSurface::validateClipRect(int dx, int dy, const Awesomium::Rect & clip_rect, Area & result)
	static int _bind_validateClipRect(lua_State *L) {
		if (!_lg_typecheck_validateClipRect(L)) {
			luaL_error(L, "luna typecheck failed in void OSGSurface::validateClipRect(int dx, int dy, const Awesomium::Rect & clip_rect, Area & result) function, expected prototype:\nvoid OSGSurface::validateClipRect(int dx, int dy, const Awesomium::Rect & clip_rect, Area & result)\nClass arguments details:\narg 3 ID = 8907551\narg 4 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const Awesomium::Rect* clip_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !clip_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip_rect in OSGSurface::validateClipRect function");
		}
		const Awesomium::Rect & clip_rect=*clip_rect_ptr;
		Area* result_ptr=(Luna< osg::Referenced >::checkSubType< Area >(L,5));
		if( !result_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg result in OSGSurface::validateClipRect function");
		}
		Area & result=*result_ptr;

		OSGSurface* self=Luna< Awesomium::Surface >::checkSubType< OSGSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void OSGSurface::validateClipRect(int, int, const Awesomium::Rect &, Area &). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->validateClipRect(dx, dy, clip_rect, result);

		return 0;
	}

	// void OSGSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	static int _bind_Paint(lua_State *L) {
		if (!_lg_typecheck_Paint(L)) {
			luaL_error(L, "luna typecheck failed in void OSGSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect) function, expected prototype:\nvoid OSGSurface::Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)\nClass arguments details:\narg 3 ID = 8907551\narg 4 ID = 8907551\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char src_buffer = (unsigned char)(lua_tointeger(L,2));
		int src_row_span=(int)lua_tointeger(L,3);
		const Awesomium::Rect* src_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !src_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src_rect in OSGSurface::Paint function");
		}
		const Awesomium::Rect & src_rect=*src_rect_ptr;
		const Awesomium::Rect* dest_rect_ptr=(Luna< Awesomium::Rect >::check(L,5));
		if( !dest_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dest_rect in OSGSurface::Paint function");
		}
		const Awesomium::Rect & dest_rect=*dest_rect_ptr;

		OSGSurface* self=Luna< Awesomium::Surface >::checkSubType< OSGSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void OSGSurface::Paint(unsigned char *, int, const Awesomium::Rect &, const Awesomium::Rect &). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Paint(&src_buffer, src_row_span, src_rect, dest_rect);

		return 0;
	}

	// void OSGSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
	static int _bind_Scroll(lua_State *L) {
		if (!_lg_typecheck_Scroll(L)) {
			luaL_error(L, "luna typecheck failed in void OSGSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect) function, expected prototype:\nvoid OSGSurface::Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)\nClass arguments details:\narg 3 ID = 8907551\n\n%s",luna_dumpStack(L).c_str());
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const Awesomium::Rect* clip_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !clip_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip_rect in OSGSurface::Scroll function");
		}
		const Awesomium::Rect & clip_rect=*clip_rect_ptr;

		OSGSurface* self=Luna< Awesomium::Surface >::checkSubType< OSGSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void OSGSurface::Scroll(int, int, const Awesomium::Rect &). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scroll(dx, dy, clip_rect);

		return 0;
	}

	// void OSGSurface::base_Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)
	static int _bind_base_Paint(lua_State *L) {
		if (!_lg_typecheck_base_Paint(L)) {
			luaL_error(L, "luna typecheck failed in void OSGSurface::base_Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect) function, expected prototype:\nvoid OSGSurface::base_Paint(unsigned char * src_buffer, int src_row_span, const Awesomium::Rect & src_rect, const Awesomium::Rect & dest_rect)\nClass arguments details:\narg 3 ID = 8907551\narg 4 ID = 8907551\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char src_buffer = (unsigned char)(lua_tointeger(L,2));
		int src_row_span=(int)lua_tointeger(L,3);
		const Awesomium::Rect* src_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !src_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg src_rect in OSGSurface::base_Paint function");
		}
		const Awesomium::Rect & src_rect=*src_rect_ptr;
		const Awesomium::Rect* dest_rect_ptr=(Luna< Awesomium::Rect >::check(L,5));
		if( !dest_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dest_rect in OSGSurface::base_Paint function");
		}
		const Awesomium::Rect & dest_rect=*dest_rect_ptr;

		OSGSurface* self=Luna< Awesomium::Surface >::checkSubType< OSGSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void OSGSurface::base_Paint(unsigned char *, int, const Awesomium::Rect &, const Awesomium::Rect &). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OSGSurface::Paint(&src_buffer, src_row_span, src_rect, dest_rect);

		return 0;
	}

	// void OSGSurface::base_Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)
	static int _bind_base_Scroll(lua_State *L) {
		if (!_lg_typecheck_base_Scroll(L)) {
			luaL_error(L, "luna typecheck failed in void OSGSurface::base_Scroll(int dx, int dy, const Awesomium::Rect & clip_rect) function, expected prototype:\nvoid OSGSurface::base_Scroll(int dx, int dy, const Awesomium::Rect & clip_rect)\nClass arguments details:\narg 3 ID = 8907551\n\n%s",luna_dumpStack(L).c_str());
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const Awesomium::Rect* clip_rect_ptr=(Luna< Awesomium::Rect >::check(L,4));
		if( !clip_rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clip_rect in OSGSurface::base_Scroll function");
		}
		const Awesomium::Rect & clip_rect=*clip_rect_ptr;

		OSGSurface* self=Luna< Awesomium::Surface >::checkSubType< OSGSurface >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void OSGSurface::base_Scroll(int, int, const Awesomium::Rect &). Got : '%s'\n%s",typeid(Luna< Awesomium::Surface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OSGSurface::Scroll(dx, dy, clip_rect);

		return 0;
	}


	// Operator binds:

};

OSGSurface* LunaTraits< OSGSurface >::_bind_ctor(lua_State *L) {
	return luna_wrapper_OSGSurface::_bind_ctor(L);
}

void LunaTraits< OSGSurface >::_bind_dtor(OSGSurface* obj) {
	delete obj;
}

const char LunaTraits< OSGSurface >::className[] = "OSGSurface";
const char LunaTraits< OSGSurface >::fullName[] = "OSGSurface";
const char LunaTraits< OSGSurface >::moduleName[] = "Awesomium";
const char* LunaTraits< OSGSurface >::parents[] = {"Awesomium.Surface", 0};
const int LunaTraits< OSGSurface >::hash = 93149870;
const int LunaTraits< OSGSurface >::uniqueIDs[] = {23910648,0};

luna_RegType LunaTraits< OSGSurface >::methods[] = {
	{"getWebView", &luna_wrapper_OSGSurface::_bind_getWebView},
	{"setSize", &luna_wrapper_OSGSurface::_bind_setSize},
	{"getTexture", &luna_wrapper_OSGSurface::_bind_getTexture},
	{"validateClipRect", &luna_wrapper_OSGSurface::_bind_validateClipRect},
	{"Paint", &luna_wrapper_OSGSurface::_bind_Paint},
	{"Scroll", &luna_wrapper_OSGSurface::_bind_Scroll},
	{"base_Paint", &luna_wrapper_OSGSurface::_bind_base_Paint},
	{"base_Scroll", &luna_wrapper_OSGSurface::_bind_base_Scroll},
	{"fromVoid", &luna_wrapper_OSGSurface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OSGSurface::_bind_asVoid},
	{"getTable", &luna_wrapper_OSGSurface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< OSGSurface >::converters[] = {
	{"Awesomium::Surface", &luna_wrapper_OSGSurface::_cast_from_Surface},
	{0,0}
};

luna_RegEnumType LunaTraits< OSGSurface >::enumValues[] = {
	{0,0}
};


