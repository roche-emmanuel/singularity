#include <plug_common.h>

class luna_wrapper_wxRegion {
public:
	typedef Luna< wxRegion > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxRegion* ptr= dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRegion >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25723480)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contains_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertToBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBox_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBox_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Intersect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersect_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEqual(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Offset_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Offset_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Subtract_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Union_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Xor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Xor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Xor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRegion::wxRegion()
	static wxRegion* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegion::wxRegion() function, expected prototype:\nwxRegion::wxRegion()\nClass arguments details:\n");
		}


		return new wxRegion();
	}

	// wxRegion::wxRegion(int x, int y, int width, int height)
	static wxRegion* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegion::wxRegion(int x, int y, int width, int height) function, expected prototype:\nwxRegion::wxRegion(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,1);
		int y=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		return new wxRegion(x, y, width, height);
	}

	// wxRegion::wxRegion(const wxPoint & topLeft, const wxPoint & bottomRight)
	static wxRegion* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegion::wxRegion(const wxPoint & topLeft, const wxPoint & bottomRight) function, expected prototype:\nwxRegion::wxRegion(const wxPoint & topLeft, const wxPoint & bottomRight)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 25723480\n");
		}

		const wxPoint* topLeft_ptr=(Luna< wxPoint >::check(L,1));
		if( !topLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topLeft in wxRegion::wxRegion function");
		}
		const wxPoint & topLeft=*topLeft_ptr;
		const wxPoint* bottomRight_ptr=(Luna< wxPoint >::check(L,2));
		if( !bottomRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomRight in wxRegion::wxRegion function");
		}
		const wxPoint & bottomRight=*bottomRight_ptr;

		return new wxRegion(topLeft, bottomRight);
	}

	// wxRegion::wxRegion(const wxRect & rect)
	static wxRegion* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegion::wxRegion(const wxRect & rect) function, expected prototype:\nwxRegion::wxRegion(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,1));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRegion::wxRegion function");
		}
		const wxRect & rect=*rect_ptr;

		return new wxRegion(rect);
	}

	// wxRegion::wxRegion(const wxRegion & region)
	static wxRegion* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegion::wxRegion(const wxRegion & region) function, expected prototype:\nwxRegion::wxRegion(const wxRegion & region)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxRegion* region_ptr=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxRegion::wxRegion function");
		}
		const wxRegion & region=*region_ptr;

		return new wxRegion(region);
	}

	// wxRegion::wxRegion(size_t n, const wxPoint * points, wxPolygonFillMode fillStyle = wxODDEVEN_RULE)
	static wxRegion* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegion::wxRegion(size_t n, const wxPoint * points, wxPolygonFillMode fillStyle = wxODDEVEN_RULE) function, expected prototype:\nwxRegion::wxRegion(size_t n, const wxPoint * points, wxPolygonFillMode fillStyle = wxODDEVEN_RULE)\nClass arguments details:\narg 2 ID = 25723480\n");
		}

		int luatop = lua_gettop(L);

		size_t n=(size_t)lua_tointeger(L,1);
		const wxPoint* points=(Luna< wxPoint >::check(L,2));
		wxPolygonFillMode fillStyle=luatop>2 ? (wxPolygonFillMode)lua_tointeger(L,3) : wxODDEVEN_RULE;

		return new wxRegion(n, points, fillStyle);
	}

	// wxRegion::wxRegion(const wxBitmap & bmp)
	static wxRegion* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegion::wxRegion(const wxBitmap & bmp) function, expected prototype:\nwxRegion::wxRegion(const wxBitmap & bmp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bmp_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxRegion::wxRegion function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		return new wxRegion(bmp);
	}

	// wxRegion::wxRegion(const wxBitmap & bmp, const wxColour & transColour, int tolerance = 0)
	static wxRegion* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegion::wxRegion(const wxBitmap & bmp, const wxColour & transColour, int tolerance = 0) function, expected prototype:\nwxRegion::wxRegion(const wxBitmap & bmp, const wxColour & transColour, int tolerance = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bmp_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,1));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxRegion::wxRegion function");
		}
		const wxBitmap & bmp=*bmp_ptr;
		const wxColour* transColour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,2));
		if( !transColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transColour in wxRegion::wxRegion function");
		}
		const wxColour & transColour=*transColour_ptr;
		int tolerance=luatop>2 ? (int)lua_tointeger(L,3) : 0;

		return new wxRegion(bmp, transColour, tolerance);
	}

	// Overload binder for wxRegion::wxRegion
	static wxRegion* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);

		luaL_error(L, "error in function wxRegion, cannot match any of the overloads for function wxRegion:\n  wxRegion()\n  wxRegion(int, int, int, int)\n  wxRegion(const wxPoint &, const wxPoint &)\n  wxRegion(const wxRect &)\n  wxRegion(const wxRegion &)\n  wxRegion(size_t, const wxPoint *, wxPolygonFillMode)\n  wxRegion(const wxBitmap &)\n  wxRegion(const wxBitmap &, const wxColour &, int)\n");
		return NULL;
	}


	// Function binds:
	// void wxRegion::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRegion::Clear() function, expected prototype:\nvoid wxRegion::Clear()\nClass arguments details:\n");
		}


		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRegion::Clear()");
		}
		self->Clear();

		return 0;
	}

	// wxRegionContain wxRegion::Contains(int x, int y) const
	static int _bind_Contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegionContain wxRegion::Contains(int x, int y) const function, expected prototype:\nwxRegionContain wxRegion::Contains(int x, int y) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRegionContain wxRegion::Contains(int, int) const");
		}
		wxRegionContain lret = self->Contains(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRegionContain wxRegion::Contains(const wxPoint & pt) const
	static int _bind_Contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegionContain wxRegion::Contains(const wxPoint & pt) const function, expected prototype:\nwxRegionContain wxRegion::Contains(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRegion::Contains function");
		}
		const wxPoint & pt=*pt_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRegionContain wxRegion::Contains(const wxPoint &) const");
		}
		wxRegionContain lret = self->Contains(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRegionContain wxRegion::Contains(int x, int y, int width, int height) const
	static int _bind_Contains_overload_3(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegionContain wxRegion::Contains(int x, int y, int width, int height) const function, expected prototype:\nwxRegionContain wxRegion::Contains(int x, int y, int width, int height) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRegionContain wxRegion::Contains(int, int, int, int) const");
		}
		wxRegionContain lret = self->Contains(x, y, width, height);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRegionContain wxRegion::Contains(const wxRect & rect) const
	static int _bind_Contains_overload_4(lua_State *L) {
		if (!_lg_typecheck_Contains_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRegionContain wxRegion::Contains(const wxRect & rect) const function, expected prototype:\nwxRegionContain wxRegion::Contains(const wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRegion::Contains function");
		}
		const wxRect & rect=*rect_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRegionContain wxRegion::Contains(const wxRect &) const");
		}
		wxRegionContain lret = self->Contains(rect);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxRegion::Contains
	static int _bind_Contains(lua_State *L) {
		if (_lg_typecheck_Contains_overload_1(L)) return _bind_Contains_overload_1(L);
		if (_lg_typecheck_Contains_overload_2(L)) return _bind_Contains_overload_2(L);
		if (_lg_typecheck_Contains_overload_3(L)) return _bind_Contains_overload_3(L);
		if (_lg_typecheck_Contains_overload_4(L)) return _bind_Contains_overload_4(L);

		luaL_error(L, "error in function Contains, cannot match any of the overloads for function Contains:\n  Contains(int, int)\n  Contains(const wxPoint &)\n  Contains(int, int, int, int)\n  Contains(const wxRect &)\n");
		return 0;
	}

	// wxBitmap wxRegion::ConvertToBitmap() const
	static int _bind_ConvertToBitmap(lua_State *L) {
		if (!_lg_typecheck_ConvertToBitmap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxBitmap wxRegion::ConvertToBitmap() const function, expected prototype:\nwxBitmap wxRegion::ConvertToBitmap() const\nClass arguments details:\n");
		}


		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxBitmap wxRegion::ConvertToBitmap() const");
		}
		wxBitmap stack_lret = self->ConvertToBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxRegion::GetBox(int & x, int & y, int & width, int & height) const
	static int _bind_GetBox_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBox_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxRegion::GetBox(int & x, int & y, int & width, int & height) const function, expected prototype:\nvoid wxRegion::GetBox(int & x, int & y, int & width, int & height) const\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxRegion::GetBox(int &, int &, int &, int &) const");
		}
		self->GetBox(x, y, width, height);

		return 0;
	}

	// wxRect wxRegion::GetBox() const
	static int _bind_GetBox_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBox_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRect wxRegion::GetBox() const function, expected prototype:\nwxRect wxRegion::GetBox() const\nClass arguments details:\n");
		}


		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRect wxRegion::GetBox() const");
		}
		wxRect stack_lret = self->GetBox();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxRegion::GetBox
	static int _bind_GetBox(lua_State *L) {
		if (_lg_typecheck_GetBox_overload_1(L)) return _bind_GetBox_overload_1(L);
		if (_lg_typecheck_GetBox_overload_2(L)) return _bind_GetBox_overload_2(L);

		luaL_error(L, "error in function GetBox, cannot match any of the overloads for function GetBox:\n  GetBox(int &, int &, int &, int &)\n  GetBox()\n");
		return 0;
	}

	// bool wxRegion::Intersect(int x, int y, int width, int height)
	static int _bind_Intersect_overload_1(lua_State *L) {
		if (!_lg_typecheck_Intersect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Intersect(int x, int y, int width, int height) function, expected prototype:\nbool wxRegion::Intersect(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Intersect(int, int, int, int)");
		}
		bool lret = self->Intersect(x, y, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Intersect(const wxRect & rect)
	static int _bind_Intersect_overload_2(lua_State *L) {
		if (!_lg_typecheck_Intersect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Intersect(const wxRect & rect) function, expected prototype:\nbool wxRegion::Intersect(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRegion::Intersect function");
		}
		const wxRect & rect=*rect_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Intersect(const wxRect &)");
		}
		bool lret = self->Intersect(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Intersect(const wxRegion & region)
	static int _bind_Intersect_overload_3(lua_State *L) {
		if (!_lg_typecheck_Intersect_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Intersect(const wxRegion & region) function, expected prototype:\nbool wxRegion::Intersect(const wxRegion & region)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxRegion* region_ptr=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,2));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxRegion::Intersect function");
		}
		const wxRegion & region=*region_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Intersect(const wxRegion &)");
		}
		bool lret = self->Intersect(region);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRegion::Intersect
	static int _bind_Intersect(lua_State *L) {
		if (_lg_typecheck_Intersect_overload_1(L)) return _bind_Intersect_overload_1(L);
		if (_lg_typecheck_Intersect_overload_2(L)) return _bind_Intersect_overload_2(L);
		if (_lg_typecheck_Intersect_overload_3(L)) return _bind_Intersect_overload_3(L);

		luaL_error(L, "error in function Intersect, cannot match any of the overloads for function Intersect:\n  Intersect(int, int, int, int)\n  Intersect(const wxRect &)\n  Intersect(const wxRegion &)\n");
		return 0;
	}

	// bool wxRegion::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::IsEmpty() const function, expected prototype:\nbool wxRegion::IsEmpty() const\nClass arguments details:\n");
		}


		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::IsEmpty() const");
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::IsEqual(const wxRegion & region) const
	static int _bind_IsEqual(lua_State *L) {
		if (!_lg_typecheck_IsEqual(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::IsEqual(const wxRegion & region) const function, expected prototype:\nbool wxRegion::IsEqual(const wxRegion & region) const\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxRegion* region_ptr=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,2));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxRegion::IsEqual function");
		}
		const wxRegion & region=*region_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::IsEqual(const wxRegion &) const");
		}
		bool lret = self->IsEqual(region);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Offset(int x, int y)
	static int _bind_Offset_overload_1(lua_State *L) {
		if (!_lg_typecheck_Offset_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Offset(int x, int y) function, expected prototype:\nbool wxRegion::Offset(int x, int y)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Offset(int, int)");
		}
		bool lret = self->Offset(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Offset(const wxPoint & pt)
	static int _bind_Offset_overload_2(lua_State *L) {
		if (!_lg_typecheck_Offset_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Offset(const wxPoint & pt) function, expected prototype:\nbool wxRegion::Offset(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n");
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxRegion::Offset function");
		}
		const wxPoint & pt=*pt_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Offset(const wxPoint &)");
		}
		bool lret = self->Offset(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRegion::Offset
	static int _bind_Offset(lua_State *L) {
		if (_lg_typecheck_Offset_overload_1(L)) return _bind_Offset_overload_1(L);
		if (_lg_typecheck_Offset_overload_2(L)) return _bind_Offset_overload_2(L);

		luaL_error(L, "error in function Offset, cannot match any of the overloads for function Offset:\n  Offset(int, int)\n  Offset(const wxPoint &)\n");
		return 0;
	}

	// bool wxRegion::Subtract(const wxRect & rect)
	static int _bind_Subtract_overload_1(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Subtract(const wxRect & rect) function, expected prototype:\nbool wxRegion::Subtract(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRegion::Subtract function");
		}
		const wxRect & rect=*rect_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Subtract(const wxRect &)");
		}
		bool lret = self->Subtract(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Subtract(const wxRegion & region)
	static int _bind_Subtract_overload_2(lua_State *L) {
		if (!_lg_typecheck_Subtract_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Subtract(const wxRegion & region) function, expected prototype:\nbool wxRegion::Subtract(const wxRegion & region)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxRegion* region_ptr=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,2));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxRegion::Subtract function");
		}
		const wxRegion & region=*region_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Subtract(const wxRegion &)");
		}
		bool lret = self->Subtract(region);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRegion::Subtract
	static int _bind_Subtract(lua_State *L) {
		if (_lg_typecheck_Subtract_overload_1(L)) return _bind_Subtract_overload_1(L);
		if (_lg_typecheck_Subtract_overload_2(L)) return _bind_Subtract_overload_2(L);

		luaL_error(L, "error in function Subtract, cannot match any of the overloads for function Subtract:\n  Subtract(const wxRect &)\n  Subtract(const wxRegion &)\n");
		return 0;
	}

	// bool wxRegion::Union(int x, int y, int width, int height)
	static int _bind_Union_overload_1(lua_State *L) {
		if (!_lg_typecheck_Union_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Union(int x, int y, int width, int height) function, expected prototype:\nbool wxRegion::Union(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Union(int, int, int, int)");
		}
		bool lret = self->Union(x, y, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Union(const wxRect & rect)
	static int _bind_Union_overload_2(lua_State *L) {
		if (!_lg_typecheck_Union_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Union(const wxRect & rect) function, expected prototype:\nbool wxRegion::Union(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRegion::Union function");
		}
		const wxRect & rect=*rect_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Union(const wxRect &)");
		}
		bool lret = self->Union(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Union(const wxRegion & region)
	static int _bind_Union_overload_3(lua_State *L) {
		if (!_lg_typecheck_Union_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Union(const wxRegion & region) function, expected prototype:\nbool wxRegion::Union(const wxRegion & region)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxRegion* region_ptr=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,2));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxRegion::Union function");
		}
		const wxRegion & region=*region_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Union(const wxRegion &)");
		}
		bool lret = self->Union(region);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Union(const wxBitmap & bmp)
	static int _bind_Union_overload_4(lua_State *L) {
		if (!_lg_typecheck_Union_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Union(const wxBitmap & bmp) function, expected prototype:\nbool wxRegion::Union(const wxBitmap & bmp)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxBitmap* bmp_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxRegion::Union function");
		}
		const wxBitmap & bmp=*bmp_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Union(const wxBitmap &)");
		}
		bool lret = self->Union(bmp);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Union(const wxBitmap & bmp, const wxColour & transColour, int tolerance = 0)
	static int _bind_Union_overload_5(lua_State *L) {
		if (!_lg_typecheck_Union_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Union(const wxBitmap & bmp, const wxColour & transColour, int tolerance = 0) function, expected prototype:\nbool wxRegion::Union(const wxBitmap & bmp, const wxColour & transColour, int tolerance = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bmp_ptr=dynamic_cast< wxBitmap* >(Luna< wxObject >::check(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxRegion::Union function");
		}
		const wxBitmap & bmp=*bmp_ptr;
		const wxColour* transColour_ptr=dynamic_cast< wxColour* >(Luna< wxObject >::check(L,3));
		if( !transColour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transColour in wxRegion::Union function");
		}
		const wxColour & transColour=*transColour_ptr;
		int tolerance=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Union(const wxBitmap &, const wxColour &, int)");
		}
		bool lret = self->Union(bmp, transColour, tolerance);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRegion::Union
	static int _bind_Union(lua_State *L) {
		if (_lg_typecheck_Union_overload_1(L)) return _bind_Union_overload_1(L);
		if (_lg_typecheck_Union_overload_2(L)) return _bind_Union_overload_2(L);
		if (_lg_typecheck_Union_overload_3(L)) return _bind_Union_overload_3(L);
		if (_lg_typecheck_Union_overload_4(L)) return _bind_Union_overload_4(L);
		if (_lg_typecheck_Union_overload_5(L)) return _bind_Union_overload_5(L);

		luaL_error(L, "error in function Union, cannot match any of the overloads for function Union:\n  Union(int, int, int, int)\n  Union(const wxRect &)\n  Union(const wxRegion &)\n  Union(const wxBitmap &)\n  Union(const wxBitmap &, const wxColour &, int)\n");
		return 0;
	}

	// bool wxRegion::Xor(int x, int y, int width, int height)
	static int _bind_Xor_overload_1(lua_State *L) {
		if (!_lg_typecheck_Xor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Xor(int x, int y, int width, int height) function, expected prototype:\nbool wxRegion::Xor(int x, int y, int width, int height)\nClass arguments details:\n");
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Xor(int, int, int, int)");
		}
		bool lret = self->Xor(x, y, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Xor(const wxRect & rect)
	static int _bind_Xor_overload_2(lua_State *L) {
		if (!_lg_typecheck_Xor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Xor(const wxRect & rect) function, expected prototype:\nbool wxRegion::Xor(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n");
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxRegion::Xor function");
		}
		const wxRect & rect=*rect_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Xor(const wxRect &)");
		}
		bool lret = self->Xor(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegion::Xor(const wxRegion & region)
	static int _bind_Xor_overload_3(lua_State *L) {
		if (!_lg_typecheck_Xor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxRegion::Xor(const wxRegion & region) function, expected prototype:\nbool wxRegion::Xor(const wxRegion & region)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		const wxRegion* region_ptr=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,2));
		if( !region_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg region in wxRegion::Xor function");
		}
		const wxRegion & region=*region_ptr;

		wxRegion* self=dynamic_cast< wxRegion* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxRegion::Xor(const wxRegion &)");
		}
		bool lret = self->Xor(region);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxRegion::Xor
	static int _bind_Xor(lua_State *L) {
		if (_lg_typecheck_Xor_overload_1(L)) return _bind_Xor_overload_1(L);
		if (_lg_typecheck_Xor_overload_2(L)) return _bind_Xor_overload_2(L);
		if (_lg_typecheck_Xor_overload_3(L)) return _bind_Xor_overload_3(L);

		luaL_error(L, "error in function Xor, cannot match any of the overloads for function Xor:\n  Xor(int, int, int, int)\n  Xor(const wxRect &)\n  Xor(const wxRegion &)\n");
		return 0;
	}


	// Operator binds:

};

wxRegion* LunaTraits< wxRegion >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRegion::_bind_ctor(L);
}

void LunaTraits< wxRegion >::_bind_dtor(wxRegion* obj) {
	delete obj;
}

const char LunaTraits< wxRegion >::className[] = "wxRegion";
const char LunaTraits< wxRegion >::fullName[] = "wxRegion";
const char LunaTraits< wxRegion >::moduleName[] = "wx";
const char* LunaTraits< wxRegion >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxRegion >::hash = 45386476;
const int LunaTraits< wxRegion >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRegion >::methods[] = {
	{"Clear", &luna_wrapper_wxRegion::_bind_Clear},
	{"Contains", &luna_wrapper_wxRegion::_bind_Contains},
	{"ConvertToBitmap", &luna_wrapper_wxRegion::_bind_ConvertToBitmap},
	{"GetBox", &luna_wrapper_wxRegion::_bind_GetBox},
	{"Intersect", &luna_wrapper_wxRegion::_bind_Intersect},
	{"IsEmpty", &luna_wrapper_wxRegion::_bind_IsEmpty},
	{"IsEqual", &luna_wrapper_wxRegion::_bind_IsEqual},
	{"Offset", &luna_wrapper_wxRegion::_bind_Offset},
	{"Subtract", &luna_wrapper_wxRegion::_bind_Subtract},
	{"Union", &luna_wrapper_wxRegion::_bind_Union},
	{"Xor", &luna_wrapper_wxRegion::_bind_Xor},
	{0,0}
};

luna_ConverterType LunaTraits< wxRegion >::converters[] = {
	{"wxObject", &luna_wrapper_wxRegion::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRegion >::enumValues[] = {
	{0,0}
};

