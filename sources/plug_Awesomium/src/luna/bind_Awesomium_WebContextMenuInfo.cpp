#include <plug_common.h>

class luna_wrapper_Awesomium_WebContextMenuInfo {
public:
	typedef Luna< Awesomium::WebContextMenuInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8209039) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(Awesomium::WebContextMenuInfo*)");
		}

		Awesomium::WebContextMenuInfo* rhs =(Luna< Awesomium::WebContextMenuInfo >::check(L,2));
		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		Awesomium::WebContextMenuInfo* self= (Awesomium::WebContextMenuInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Awesomium::WebContextMenuInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8209039) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("Awesomium::WebContextMenuInfo");
		
		return luna_dynamicCast(L,converters,"Awesomium::WebContextMenuInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_get_pos_x(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_pos_y(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_media_type(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_media_state(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_link_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_src_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_page_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_frame_url(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_frame_id(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_selection_text(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_is_editable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_edit_flags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_pos_x(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_pos_y(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_media_type(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_media_state(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_link_url(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_src_url(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_page_url(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_frame_url(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3243885) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_frame_id(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_selection_text(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13938525) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_is_editable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_edit_flags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int Awesomium::WebContextMenuInfo::pos_x()
	static int _bind_get_pos_x(lua_State *L) {
		if (!_lg_typecheck_get_pos_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebContextMenuInfo::pos_x() function, expected prototype:\nint Awesomium::WebContextMenuInfo::pos_x()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebContextMenuInfo::pos_x(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		int lret = self->pos_x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebContextMenuInfo::pos_y()
	static int _bind_get_pos_y(lua_State *L) {
		if (!_lg_typecheck_get_pos_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebContextMenuInfo::pos_y() function, expected prototype:\nint Awesomium::WebContextMenuInfo::pos_y()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebContextMenuInfo::pos_y(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		int lret = self->pos_y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::MediaType Awesomium::WebContextMenuInfo::media_type()
	static int _bind_get_media_type(lua_State *L) {
		if (!_lg_typecheck_get_media_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::MediaType Awesomium::WebContextMenuInfo::media_type() function, expected prototype:\nAwesomium::MediaType Awesomium::WebContextMenuInfo::media_type()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::MediaType Awesomium::WebContextMenuInfo::media_type(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		Awesomium::MediaType lret = self->media_type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int Awesomium::WebContextMenuInfo::media_state()
	static int _bind_get_media_state(lua_State *L) {
		if (!_lg_typecheck_get_media_state(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebContextMenuInfo::media_state() function, expected prototype:\nint Awesomium::WebContextMenuInfo::media_state()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebContextMenuInfo::media_state(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		int lret = self->media_state;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebURL Awesomium::WebContextMenuInfo::link_url()
	static int _bind_get_link_url(lua_State *L) {
		if (!_lg_typecheck_get_link_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL Awesomium::WebContextMenuInfo::link_url() function, expected prototype:\nAwesomium::WebURL Awesomium::WebContextMenuInfo::link_url()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebURL Awesomium::WebContextMenuInfo::link_url(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		const Awesomium::WebURL* lret = &self->link_url;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebURL >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebURL Awesomium::WebContextMenuInfo::src_url()
	static int _bind_get_src_url(lua_State *L) {
		if (!_lg_typecheck_get_src_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL Awesomium::WebContextMenuInfo::src_url() function, expected prototype:\nAwesomium::WebURL Awesomium::WebContextMenuInfo::src_url()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebURL Awesomium::WebContextMenuInfo::src_url(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		const Awesomium::WebURL* lret = &self->src_url;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebURL >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebURL Awesomium::WebContextMenuInfo::page_url()
	static int _bind_get_page_url(lua_State *L) {
		if (!_lg_typecheck_get_page_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL Awesomium::WebContextMenuInfo::page_url() function, expected prototype:\nAwesomium::WebURL Awesomium::WebContextMenuInfo::page_url()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebURL Awesomium::WebContextMenuInfo::page_url(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		const Awesomium::WebURL* lret = &self->page_url;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebURL >::push(L,lret,false);

		return 1;
	}

	// Awesomium::WebURL Awesomium::WebContextMenuInfo::frame_url()
	static int _bind_get_frame_url(lua_State *L) {
		if (!_lg_typecheck_get_frame_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebURL Awesomium::WebContextMenuInfo::frame_url() function, expected prototype:\nAwesomium::WebURL Awesomium::WebContextMenuInfo::frame_url()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebURL Awesomium::WebContextMenuInfo::frame_url(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		const Awesomium::WebURL* lret = &self->frame_url;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< Awesomium::WebURL >::push(L,lret,false);

		return 1;
	}

	// long long Awesomium::WebContextMenuInfo::frame_id()
	static int _bind_get_frame_id(lua_State *L) {
		if (!_lg_typecheck_get_frame_id(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long long Awesomium::WebContextMenuInfo::frame_id() function, expected prototype:\nlong long Awesomium::WebContextMenuInfo::frame_id()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long long Awesomium::WebContextMenuInfo::frame_id(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		long long lret = self->frame_id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// Awesomium::WebString Awesomium::WebContextMenuInfo::selection_text()
	static int _bind_get_selection_text(lua_State *L) {
		if (!_lg_typecheck_get_selection_text(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Awesomium::WebString Awesomium::WebContextMenuInfo::selection_text() function, expected prototype:\nAwesomium::WebString Awesomium::WebContextMenuInfo::selection_text()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call Awesomium::WebString Awesomium::WebContextMenuInfo::selection_text(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		Awesomium::WebString lret = self->selection_text;
		std::string lret_str = Awesomium::ToString(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// bool Awesomium::WebContextMenuInfo::is_editable()
	static int _bind_get_is_editable(lua_State *L) {
		if (!_lg_typecheck_get_is_editable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Awesomium::WebContextMenuInfo::is_editable() function, expected prototype:\nbool Awesomium::WebContextMenuInfo::is_editable()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Awesomium::WebContextMenuInfo::is_editable(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		bool lret = self->is_editable;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int Awesomium::WebContextMenuInfo::edit_flags()
	static int _bind_get_edit_flags(lua_State *L) {
		if (!_lg_typecheck_get_edit_flags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int Awesomium::WebContextMenuInfo::edit_flags() function, expected prototype:\nint Awesomium::WebContextMenuInfo::edit_flags()\nClass arguments details:\n");
		}


		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int Awesomium::WebContextMenuInfo::edit_flags(). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		int lret = self->edit_flags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void Awesomium::WebContextMenuInfo::pos_x(int value)
	static int _bind_set_pos_x(lua_State *L) {
		if (!_lg_typecheck_set_pos_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::pos_x(int value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::pos_x(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::pos_x(int). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->pos_x = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::pos_y(int value)
	static int _bind_set_pos_y(lua_State *L) {
		if (!_lg_typecheck_set_pos_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::pos_y(int value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::pos_y(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::pos_y(int). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->pos_y = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::media_type(Awesomium::MediaType value)
	static int _bind_set_media_type(lua_State *L) {
		if (!_lg_typecheck_set_media_type(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::media_type(Awesomium::MediaType value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::media_type(Awesomium::MediaType value)\nClass arguments details:\n");
		}

		Awesomium::MediaType value=(Awesomium::MediaType)lua_tointeger(L,2);

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::media_type(Awesomium::MediaType). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->media_type = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::media_state(int value)
	static int _bind_set_media_state(lua_State *L) {
		if (!_lg_typecheck_set_media_state(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::media_state(int value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::media_state(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::media_state(int). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->media_state = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::link_url(Awesomium::WebURL value)
	static int _bind_set_link_url(lua_State *L) {
		if (!_lg_typecheck_set_link_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::link_url(Awesomium::WebURL value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::link_url(Awesomium::WebURL value)\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		Awesomium::WebURL* value_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::WebContextMenuInfo::link_url function");
		}
		Awesomium::WebURL value=*value_ptr;

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::link_url(Awesomium::WebURL). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->link_url = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::src_url(Awesomium::WebURL value)
	static int _bind_set_src_url(lua_State *L) {
		if (!_lg_typecheck_set_src_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::src_url(Awesomium::WebURL value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::src_url(Awesomium::WebURL value)\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		Awesomium::WebURL* value_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::WebContextMenuInfo::src_url function");
		}
		Awesomium::WebURL value=*value_ptr;

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::src_url(Awesomium::WebURL). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->src_url = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::page_url(Awesomium::WebURL value)
	static int _bind_set_page_url(lua_State *L) {
		if (!_lg_typecheck_set_page_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::page_url(Awesomium::WebURL value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::page_url(Awesomium::WebURL value)\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		Awesomium::WebURL* value_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::WebContextMenuInfo::page_url function");
		}
		Awesomium::WebURL value=*value_ptr;

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::page_url(Awesomium::WebURL). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->page_url = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::frame_url(Awesomium::WebURL value)
	static int _bind_set_frame_url(lua_State *L) {
		if (!_lg_typecheck_set_frame_url(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::frame_url(Awesomium::WebURL value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::frame_url(Awesomium::WebURL value)\nClass arguments details:\narg 1 ID = 3243885\n");
		}

		Awesomium::WebURL* value_ptr=(Luna< Awesomium::WebURL >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in Awesomium::WebContextMenuInfo::frame_url function");
		}
		Awesomium::WebURL value=*value_ptr;

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::frame_url(Awesomium::WebURL). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->frame_url = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::frame_id(long long value)
	static int _bind_set_frame_id(lua_State *L) {
		if (!_lg_typecheck_set_frame_id(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::frame_id(long long value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::frame_id(long long value)\nClass arguments details:\n");
		}

		long long value=(long long)lua_tointeger(L,2);

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::frame_id(long long). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->frame_id = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::selection_text(Awesomium::WebString value)
	static int _bind_set_selection_text(lua_State *L) {
		if (!_lg_typecheck_set_selection_text(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::selection_text(Awesomium::WebString value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::selection_text(Awesomium::WebString value)\nClass arguments details:\narg 1 ID = 13938525\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		Awesomium::WebString value = Awesomium::ToWebString(value_str);

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::selection_text(Awesomium::WebString). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->selection_text = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::is_editable(bool value)
	static int _bind_set_is_editable(lua_State *L) {
		if (!_lg_typecheck_set_is_editable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::is_editable(bool value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::is_editable(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::is_editable(bool). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->is_editable = value;

		return 0;
	}

	// void Awesomium::WebContextMenuInfo::edit_flags(int value)
	static int _bind_set_edit_flags(lua_State *L) {
		if (!_lg_typecheck_set_edit_flags(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void Awesomium::WebContextMenuInfo::edit_flags(int value) function, expected prototype:\nvoid Awesomium::WebContextMenuInfo::edit_flags(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		Awesomium::WebContextMenuInfo* self=(Luna< Awesomium::WebContextMenuInfo >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void Awesomium::WebContextMenuInfo::edit_flags(int). Got : '%s'",typeid(Luna< Awesomium::WebContextMenuInfo >::check(L,1)).name());
		}
		self->edit_flags = value;

		return 0;
	}


	// Operator binds:

};

Awesomium::WebContextMenuInfo* LunaTraits< Awesomium::WebContextMenuInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< Awesomium::WebContextMenuInfo >::_bind_dtor(Awesomium::WebContextMenuInfo* obj) {
	delete obj;
}

const char LunaTraits< Awesomium::WebContextMenuInfo >::className[] = "WebContextMenuInfo";
const char LunaTraits< Awesomium::WebContextMenuInfo >::fullName[] = "Awesomium::WebContextMenuInfo";
const char LunaTraits< Awesomium::WebContextMenuInfo >::moduleName[] = "Awesomium";
const char* LunaTraits< Awesomium::WebContextMenuInfo >::parents[] = {0};
const int LunaTraits< Awesomium::WebContextMenuInfo >::hash = 8209039;
const int LunaTraits< Awesomium::WebContextMenuInfo >::uniqueIDs[] = {8209039,0};

luna_RegType LunaTraits< Awesomium::WebContextMenuInfo >::methods[] = {
	{"get_pos_x", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_pos_x},
	{"get_pos_y", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_pos_y},
	{"get_media_type", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_media_type},
	{"get_media_state", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_media_state},
	{"get_link_url", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_link_url},
	{"get_src_url", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_src_url},
	{"get_page_url", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_page_url},
	{"get_frame_url", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_frame_url},
	{"get_frame_id", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_frame_id},
	{"get_selection_text", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_selection_text},
	{"get_is_editable", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_is_editable},
	{"get_edit_flags", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_get_edit_flags},
	{"set_pos_x", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_pos_x},
	{"set_pos_y", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_pos_y},
	{"set_media_type", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_media_type},
	{"set_media_state", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_media_state},
	{"set_link_url", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_link_url},
	{"set_src_url", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_src_url},
	{"set_page_url", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_page_url},
	{"set_frame_url", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_frame_url},
	{"set_frame_id", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_frame_id},
	{"set_selection_text", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_selection_text},
	{"set_is_editable", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_is_editable},
	{"set_edit_flags", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_set_edit_flags},
	{"dynCast", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Awesomium_WebContextMenuInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Awesomium::WebContextMenuInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< Awesomium::WebContextMenuInfo >::enumValues[] = {
	{0,0}
};


