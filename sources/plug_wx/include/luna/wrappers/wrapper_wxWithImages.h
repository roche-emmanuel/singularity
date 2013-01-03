#ifndef _WRAPPERS_WRAPPER_WXWITHIMAGES_H_
#define _WRAPPERS_WRAPPER_WXWITHIMAGES_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <wx/withimages.h>

class wrapper_wxWithImages : public wxWithImages, public luna_wrapper_base {

public:
		

	~wrapper_wxWithImages() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxWithImages(lua_State* L, lua_Table* dum) : wxWithImages(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxWithImages::SetImageList(wxImageList * imageList)
	void SetImageList(wxImageList * imageList) {
		if(_obj.pushFunction("SetImageList")) {
			_obj.pushArg(imageList);
			return (_obj.callFunction<void>());
		}

		return wxWithImages::SetImageList(imageList);
	};


	// Protected non-virtual methods:
	// bool wxWithImages::HasImageList() const
	bool public_HasImageList() const {
		return wxWithImages::HasImageList();
	};

	// wxIcon wxWithImages::GetImage(int iconIndex) const
	wxIcon public_GetImage(int iconIndex) const {
		return wxWithImages::GetImage(iconIndex);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_HasImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_GetImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// bool wxWithImages::public_HasImageList() const
	static int _bind_public_HasImageList(lua_State *L) {
		if (!_lg_typecheck_public_HasImageList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxWithImages::public_HasImageList() const function, expected prototype:\nbool wxWithImages::public_HasImageList() const\nClass arguments details:\n");
		}


		wrapper_wxWithImages* self=Luna< wxWithImages >::checkSubType< wrapper_wxWithImages >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxWithImages::public_HasImageList() const. Got : '%s'",typeid(Luna< wxWithImages >::check(L,1)).name());
		}
		bool lret = self->public_HasImageList();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxIcon wxWithImages::public_GetImage(int iconIndex) const
	static int _bind_public_GetImage(lua_State *L) {
		if (!_lg_typecheck_public_GetImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIcon wxWithImages::public_GetImage(int iconIndex) const function, expected prototype:\nwxIcon wxWithImages::public_GetImage(int iconIndex) const\nClass arguments details:\n");
		}

		int iconIndex=(int)lua_tointeger(L,2);

		wrapper_wxWithImages* self=Luna< wxWithImages >::checkSubType< wrapper_wxWithImages >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxIcon wxWithImages::public_GetImage(int) const. Got : '%s'",typeid(Luna< wxWithImages >::check(L,1)).name());
		}
		wxIcon stack_lret = self->public_GetImage(iconIndex);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_HasImageList",_bind_public_HasImageList},
		{"protected_GetImage",_bind_public_GetImage},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

