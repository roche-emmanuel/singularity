#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSVGFileDC.h>

class luna_wrapper_wxSVGFileDC {
public:
	typedef Luna< wxSVGFileDC > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*)");
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxSVGFileDC* ptr= dynamic_cast< wxSVGFileDC* >(Luna< wxObject >::check(L,1));
		wxSVGFileDC* ptr= luna_caster< wxObject, wxSVGFileDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSVGFileDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_EndDoc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EndPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLogicalFunction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CrossHair(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyClippingRegion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FloodFill(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClippingBox(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPixel(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClippingRegion_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClippingRegion_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClippingRegion_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClippingRegion_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxRegion >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartDoc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSVGFileDC::wxSVGFileDC(const wxString & filename, int width = 320, int height = 240, double dpi = 72)
	static wxSVGFileDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSVGFileDC::wxSVGFileDC(const wxString & filename, int width = 320, int height = 240, double dpi = 72) function, expected prototype:\nwxSVGFileDC::wxSVGFileDC(const wxString & filename, int width = 320, int height = 240, double dpi = 72)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		int width=luatop>1 ? (int)lua_tointeger(L,2) : 320;
		int height=luatop>2 ? (int)lua_tointeger(L,3) : 240;
		double dpi=luatop>3 ? (double)lua_tonumber(L,4) : 72;

		return new wxSVGFileDC(filename, width, height, dpi);
	}

	// wxSVGFileDC::wxSVGFileDC(lua_Table * data, const wxString & filename, int width = 320, int height = 240, double dpi = 72)
	static wxSVGFileDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxSVGFileDC::wxSVGFileDC(lua_Table * data, const wxString & filename, int width = 320, int height = 240, double dpi = 72) function, expected prototype:\nwxSVGFileDC::wxSVGFileDC(lua_Table * data, const wxString & filename, int width = 320, int height = 240, double dpi = 72)\nClass arguments details:\narg 2 ID = 88196105\n");
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		int width=luatop>2 ? (int)lua_tointeger(L,3) : 320;
		int height=luatop>3 ? (int)lua_tointeger(L,4) : 240;
		double dpi=luatop>4 ? (double)lua_tonumber(L,5) : 72;

		return new wrapper_wxSVGFileDC(L,NULL, filename, width, height, dpi);
	}

	// Overload binder for wxSVGFileDC::wxSVGFileDC
	static wxSVGFileDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSVGFileDC, cannot match any of the overloads for function wxSVGFileDC:\n  wxSVGFileDC(const wxString &, int, int, double)\n  wxSVGFileDC(lua_Table *, const wxString &, int, int, double)\n");
		return NULL;
	}


	// Function binds:
	// void wxSVGFileDC::EndDoc()
	static int _bind_EndDoc(lua_State *L) {
		if (!_lg_typecheck_EndDoc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::EndDoc() function, expected prototype:\nvoid wxSVGFileDC::EndDoc()\nClass arguments details:\n");
		}


		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::EndDoc(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->EndDoc();

		return 0;
	}

	// void wxSVGFileDC::EndPage()
	static int _bind_EndPage(lua_State *L) {
		if (!_lg_typecheck_EndPage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::EndPage() function, expected prototype:\nvoid wxSVGFileDC::EndPage()\nClass arguments details:\n");
		}


		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::EndPage(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->EndPage();

		return 0;
	}

	// void wxSVGFileDC::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::Clear() function, expected prototype:\nvoid wxSVGFileDC::Clear()\nClass arguments details:\n");
		}


		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::Clear(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->Clear();

		return 0;
	}

	// void wxSVGFileDC::SetLogicalFunction(wxRasterOperationMode function)
	static int _bind_SetLogicalFunction(lua_State *L) {
		if (!_lg_typecheck_SetLogicalFunction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::SetLogicalFunction(wxRasterOperationMode function) function, expected prototype:\nvoid wxSVGFileDC::SetLogicalFunction(wxRasterOperationMode function)\nClass arguments details:\n");
		}

		wxRasterOperationMode function=(wxRasterOperationMode)lua_tointeger(L,2);

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::SetLogicalFunction(wxRasterOperationMode). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetLogicalFunction(function);

		return 0;
	}

	// void wxSVGFileDC::CrossHair(int x, int y)
	static int _bind_CrossHair(lua_State *L) {
		if (!_lg_typecheck_CrossHair(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::CrossHair(int x, int y) function, expected prototype:\nvoid wxSVGFileDC::CrossHair(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::CrossHair(int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->CrossHair(x, y);

		return 0;
	}

	// void wxSVGFileDC::DestroyClippingRegion()
	static int _bind_DestroyClippingRegion(lua_State *L) {
		if (!_lg_typecheck_DestroyClippingRegion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::DestroyClippingRegion() function, expected prototype:\nvoid wxSVGFileDC::DestroyClippingRegion()\nClass arguments details:\n");
		}


		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::DestroyClippingRegion(). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->DestroyClippingRegion();

		return 0;
	}

	// bool wxSVGFileDC::FloodFill(int x, int y, const wxColour & colour, wxFloodFillStyle style = ::wxFLOOD_SURFACE)
	static int _bind_FloodFill(lua_State *L) {
		if (!_lg_typecheck_FloodFill(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSVGFileDC::FloodFill(int x, int y, const wxColour & colour, wxFloodFillStyle style = ::wxFLOOD_SURFACE) function, expected prototype:\nbool wxSVGFileDC::FloodFill(int x, int y, const wxColour & colour, wxFloodFillStyle style = ::wxFLOOD_SURFACE)\nClass arguments details:\narg 3 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,4));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxSVGFileDC::FloodFill function");
		}
		const wxColour & colour=*colour_ptr;
		wxFloodFillStyle style=luatop>4 ? (wxFloodFillStyle)lua_tointeger(L,5) : ::wxFLOOD_SURFACE;

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSVGFileDC::FloodFill(int, int, const wxColour &, wxFloodFillStyle). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->FloodFill(x, y, colour, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSVGFileDC::GetClippingBox(int * x, int * y, int * width, int * height) const
	static int _bind_GetClippingBox(lua_State *L) {
		if (!_lg_typecheck_GetClippingBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::GetClippingBox(int * x, int * y, int * width, int * height) const function, expected prototype:\nvoid wxSVGFileDC::GetClippingBox(int * x, int * y, int * width, int * height) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::GetClippingBox(int *, int *, int *, int *) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->GetClippingBox(&x, &y, &width, &height);

		return 0;
	}

	// bool wxSVGFileDC::GetPixel(int x, int y, wxColour * colour) const
	static int _bind_GetPixel(lua_State *L) {
		if (!_lg_typecheck_GetPixel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSVGFileDC::GetPixel(int x, int y, wxColour * colour) const function, expected prototype:\nbool wxSVGFileDC::GetPixel(int x, int y, wxColour * colour) const\nClass arguments details:\narg 3 ID = 56813631\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		wxColour* colour=(Luna< wxObject >::checkSubType< wxColour >(L,4));

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSVGFileDC::GetPixel(int, int, wxColour *) const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->GetPixel(x, y, colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSVGFileDC::SetClippingRegion(int x, int y, int width, int height)
	static int _bind_SetClippingRegion_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetClippingRegion_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::SetClippingRegion(int x, int y, int width, int height) function, expected prototype:\nvoid wxSVGFileDC::SetClippingRegion(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::SetClippingRegion(int, int, int, int). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetClippingRegion(x, y, width, height);

		return 0;
	}

	// void wxSVGFileDC::SetClippingRegion(const wxPoint & pt, const wxSize & sz)
	static int _bind_SetClippingRegion_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetClippingRegion_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::SetClippingRegion(const wxPoint & pt, const wxSize & sz) function, expected prototype:\nvoid wxSVGFileDC::SetClippingRegion(const wxPoint & pt, const wxSize & sz)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxSVGFileDC::SetClippingRegion function");
		}
		const wxPoint & pt=*pt_ptr;
		const wxSize* sz_ptr=(Luna< wxSize >::check(L,3));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxSVGFileDC::SetClippingRegion function");
		}
		const wxSize & sz=*sz_ptr;

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::SetClippingRegion(const wxPoint &, const wxSize &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetClippingRegion(pt, sz);

		return 0;
	}

	// void wxSVGFileDC::SetClippingRegion(const wxRect & rect)
	static int _bind_SetClippingRegion_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetClippingRegion_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::SetClippingRegion(const wxRect & rect) function, expected prototype:\nvoid wxSVGFileDC::SetClippingRegion(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxSVGFileDC::SetClippingRegion function");
		}
		const wxRect & rect=*rect_ptr;

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::SetClippingRegion(const wxRect &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetClippingRegion(rect);

		return 0;
	}

	// void wxSVGFileDC::SetClippingRegion(const wxRegion & region)
	static int _bind_SetClippingRegion_overload_4(lua_State *L) {
		if (!_lg_typecheck_SetClippingRegion_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::SetClippingRegion(const wxRegion & region) function, expected prototype:\nvoid wxSVGFileDC::SetClippingRegion(const wxRegion & region)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxRegion* region_ptr=(Luna< wxObject >::checkSubType< wxRegion >(L,2));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxSVGFileDC::SetClippingRegion function");
		}
		const wxRegion & region=*region_ptr;

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::SetClippingRegion(const wxRegion &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetClippingRegion(region);

		return 0;
	}

	// Overload binder for wxSVGFileDC::SetClippingRegion
	static int _bind_SetClippingRegion(lua_State *L) {
		if (_lg_typecheck_SetClippingRegion_overload_1(L)) return _bind_SetClippingRegion_overload_1(L);
		if (_lg_typecheck_SetClippingRegion_overload_2(L)) return _bind_SetClippingRegion_overload_2(L);
		if (_lg_typecheck_SetClippingRegion_overload_3(L)) return _bind_SetClippingRegion_overload_3(L);
		if (_lg_typecheck_SetClippingRegion_overload_4(L)) return _bind_SetClippingRegion_overload_4(L);

		luaL_error(L, "error in function SetClippingRegion, cannot match any of the overloads for function SetClippingRegion:\n  SetClippingRegion(int, int, int, int)\n  SetClippingRegion(const wxPoint &, const wxSize &)\n  SetClippingRegion(const wxRect &)\n  SetClippingRegion(const wxRegion &)\n");
		return 0;
	}

	// void wxSVGFileDC::SetPalette(const wxPalette & palette)
	static int _bind_SetPalette(lua_State *L) {
		if (!_lg_typecheck_SetPalette(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxSVGFileDC::SetPalette(const wxPalette & palette) function, expected prototype:\nvoid wxSVGFileDC::SetPalette(const wxPalette & palette)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxPalette* palette_ptr=(Luna< wxObject >::checkSubType< wxPalette >(L,2));
		if( !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxSVGFileDC::SetPalette function");
		}
		const wxPalette & palette=*palette_ptr;

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxSVGFileDC::SetPalette(const wxPalette &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		self->SetPalette(palette);

		return 0;
	}

	// bool wxSVGFileDC::StartDoc(const wxString & message)
	static int _bind_StartDoc(lua_State *L) {
		if (!_lg_typecheck_StartDoc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxSVGFileDC::StartDoc(const wxString & message) function, expected prototype:\nbool wxSVGFileDC::StartDoc(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n");
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxSVGFileDC::StartDoc(const wxString &). Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		bool lret = self->StartDoc(message);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxSVGFileDC::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSVGFileDC::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSVGFileDC::base_GetClassInfo() const\nClass arguments details:\n");
		}


		wxSVGFileDC* self=Luna< wxObject >::checkSubType< wxSVGFileDC >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSVGFileDC::base_GetClassInfo() const. Got : '%s'",typeid(Luna< wxObject >::check(L,1)).name());
		}
		wxClassInfo * lret = self->wxSVGFileDC::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxSVGFileDC* LunaTraits< wxSVGFileDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSVGFileDC::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< wxSVGFileDC >::_bind_dtor(wxSVGFileDC* obj) {
	delete obj;
}

const char LunaTraits< wxSVGFileDC >::className[] = "wxSVGFileDC";
const char LunaTraits< wxSVGFileDC >::fullName[] = "wxSVGFileDC";
const char LunaTraits< wxSVGFileDC >::moduleName[] = "wx";
const char* LunaTraits< wxSVGFileDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxSVGFileDC >::hash = 2533730;
const int LunaTraits< wxSVGFileDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSVGFileDC >::methods[] = {
	{"EndDoc", &luna_wrapper_wxSVGFileDC::_bind_EndDoc},
	{"EndPage", &luna_wrapper_wxSVGFileDC::_bind_EndPage},
	{"Clear", &luna_wrapper_wxSVGFileDC::_bind_Clear},
	{"SetLogicalFunction", &luna_wrapper_wxSVGFileDC::_bind_SetLogicalFunction},
	{"CrossHair", &luna_wrapper_wxSVGFileDC::_bind_CrossHair},
	{"DestroyClippingRegion", &luna_wrapper_wxSVGFileDC::_bind_DestroyClippingRegion},
	{"FloodFill", &luna_wrapper_wxSVGFileDC::_bind_FloodFill},
	{"GetClippingBox", &luna_wrapper_wxSVGFileDC::_bind_GetClippingBox},
	{"GetPixel", &luna_wrapper_wxSVGFileDC::_bind_GetPixel},
	{"SetClippingRegion", &luna_wrapper_wxSVGFileDC::_bind_SetClippingRegion},
	{"SetPalette", &luna_wrapper_wxSVGFileDC::_bind_SetPalette},
	{"StartDoc", &luna_wrapper_wxSVGFileDC::_bind_StartDoc},
	{"base_GetClassInfo", &luna_wrapper_wxSVGFileDC::_bind_base_GetClassInfo},
	{"__eq", &luna_wrapper_wxSVGFileDC::_bind___eq},
	{"getTable", &luna_wrapper_wxSVGFileDC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSVGFileDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxSVGFileDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSVGFileDC >::enumValues[] = {
	{0,0}
};


