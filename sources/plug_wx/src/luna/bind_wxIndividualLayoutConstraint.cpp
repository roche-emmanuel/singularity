#include <plug_common.h>

class luna_wrapper_wxIndividualLayoutConstraint {
public:
	typedef Luna< wxIndividualLayoutConstraint > luna_t;

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		wxIndividualLayoutConstraint* ptr= dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIndividualLayoutConstraint >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LeftOf(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RightOf(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Above(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Below(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SameAs(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PercentOf(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Absolute(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unconstrained(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AsIs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMyEdge(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetEdge(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPercent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOtherEdge(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRelationship(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRelationship(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ResetIfWin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SatisfyConstraint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxIndividualLayoutConstraint::wxIndividualLayoutConstraint()
	static wxIndividualLayoutConstraint* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxIndividualLayoutConstraint::wxIndividualLayoutConstraint() function, expected prototype:\nwxIndividualLayoutConstraint::wxIndividualLayoutConstraint()\nClass arguments details:\n");
		}


		return new wxIndividualLayoutConstraint();
	}


	// Function binds:
	// void wxIndividualLayoutConstraint::Set(wxRelationship rel, wxWindow * otherW, wxEdge otherE, int val = 0, int margin = wxLAYOUT_DEFAULT_MARGIN)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::Set(wxRelationship rel, wxWindow * otherW, wxEdge otherE, int val = 0, int margin = wxLAYOUT_DEFAULT_MARGIN) function, expected prototype:\nvoid wxIndividualLayoutConstraint::Set(wxRelationship rel, wxWindow * otherW, wxEdge otherE, int val = 0, int margin = wxLAYOUT_DEFAULT_MARGIN)\nClass arguments details:\narg 2 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxRelationship rel=(wxRelationship)lua_tointeger(L,2);
		wxWindow* otherW=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		wxEdge otherE=(wxEdge)lua_tointeger(L,4);
		int val=luatop>4 ? (int)lua_tointeger(L,5) : 0;
		int margin=luatop>5 ? (int)lua_tointeger(L,6) : wxLAYOUT_DEFAULT_MARGIN;

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::Set(wxRelationship, wxWindow *, wxEdge, int, int)");
		}
		self->Set(rel, otherW, otherE, val, margin);

		return 0;
	}

	// void wxIndividualLayoutConstraint::LeftOf(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN)
	static int _bind_LeftOf(lua_State *L) {
		if (!_lg_typecheck_LeftOf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::LeftOf(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN) function, expected prototype:\nvoid wxIndividualLayoutConstraint::LeftOf(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* sibling=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int margin=luatop>2 ? (int)lua_tointeger(L,3) : wxLAYOUT_DEFAULT_MARGIN;

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::LeftOf(wxWindow *, int)");
		}
		self->LeftOf(sibling, margin);

		return 0;
	}

	// void wxIndividualLayoutConstraint::RightOf(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN)
	static int _bind_RightOf(lua_State *L) {
		if (!_lg_typecheck_RightOf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::RightOf(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN) function, expected prototype:\nvoid wxIndividualLayoutConstraint::RightOf(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* sibling=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int margin=luatop>2 ? (int)lua_tointeger(L,3) : wxLAYOUT_DEFAULT_MARGIN;

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::RightOf(wxWindow *, int)");
		}
		self->RightOf(sibling, margin);

		return 0;
	}

	// void wxIndividualLayoutConstraint::Above(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN)
	static int _bind_Above(lua_State *L) {
		if (!_lg_typecheck_Above(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::Above(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN) function, expected prototype:\nvoid wxIndividualLayoutConstraint::Above(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* sibling=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int margin=luatop>2 ? (int)lua_tointeger(L,3) : wxLAYOUT_DEFAULT_MARGIN;

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::Above(wxWindow *, int)");
		}
		self->Above(sibling, margin);

		return 0;
	}

	// void wxIndividualLayoutConstraint::Below(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN)
	static int _bind_Below(lua_State *L) {
		if (!_lg_typecheck_Below(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::Below(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN) function, expected prototype:\nvoid wxIndividualLayoutConstraint::Below(wxWindow * sibling, int margin = wxLAYOUT_DEFAULT_MARGIN)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* sibling=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		int margin=luatop>2 ? (int)lua_tointeger(L,3) : wxLAYOUT_DEFAULT_MARGIN;

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::Below(wxWindow *, int)");
		}
		self->Below(sibling, margin);

		return 0;
	}

	// void wxIndividualLayoutConstraint::SameAs(wxWindow * otherW, wxEdge edge, int margin = wxLAYOUT_DEFAULT_MARGIN)
	static int _bind_SameAs(lua_State *L) {
		if (!_lg_typecheck_SameAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::SameAs(wxWindow * otherW, wxEdge edge, int margin = wxLAYOUT_DEFAULT_MARGIN) function, expected prototype:\nvoid wxIndividualLayoutConstraint::SameAs(wxWindow * otherW, wxEdge edge, int margin = wxLAYOUT_DEFAULT_MARGIN)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		int luatop = lua_gettop(L);

		wxWindow* otherW=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxEdge edge=(wxEdge)lua_tointeger(L,3);
		int margin=luatop>3 ? (int)lua_tointeger(L,4) : wxLAYOUT_DEFAULT_MARGIN;

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::SameAs(wxWindow *, wxEdge, int)");
		}
		self->SameAs(otherW, edge, margin);

		return 0;
	}

	// void wxIndividualLayoutConstraint::PercentOf(wxWindow * otherW, wxEdge wh, int per)
	static int _bind_PercentOf(lua_State *L) {
		if (!_lg_typecheck_PercentOf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::PercentOf(wxWindow * otherW, wxEdge wh, int per) function, expected prototype:\nvoid wxIndividualLayoutConstraint::PercentOf(wxWindow * otherW, wxEdge wh, int per)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* otherW=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));
		wxEdge wh=(wxEdge)lua_tointeger(L,3);
		int per=(int)lua_tointeger(L,4);

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::PercentOf(wxWindow *, wxEdge, int)");
		}
		self->PercentOf(otherW, wh, per);

		return 0;
	}

	// void wxIndividualLayoutConstraint::Absolute(int val)
	static int _bind_Absolute(lua_State *L) {
		if (!_lg_typecheck_Absolute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::Absolute(int val) function, expected prototype:\nvoid wxIndividualLayoutConstraint::Absolute(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::Absolute(int)");
		}
		self->Absolute(val);

		return 0;
	}

	// void wxIndividualLayoutConstraint::Unconstrained()
	static int _bind_Unconstrained(lua_State *L) {
		if (!_lg_typecheck_Unconstrained(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::Unconstrained() function, expected prototype:\nvoid wxIndividualLayoutConstraint::Unconstrained()\nClass arguments details:\n");
		}


		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::Unconstrained()");
		}
		self->Unconstrained();

		return 0;
	}

	// void wxIndividualLayoutConstraint::AsIs()
	static int _bind_AsIs(lua_State *L) {
		if (!_lg_typecheck_AsIs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::AsIs() function, expected prototype:\nvoid wxIndividualLayoutConstraint::AsIs()\nClass arguments details:\n");
		}


		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::AsIs()");
		}
		self->AsIs();

		return 0;
	}

	// wxEdge wxIndividualLayoutConstraint::GetMyEdge() const
	static int _bind_GetMyEdge(lua_State *L) {
		if (!_lg_typecheck_GetMyEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxEdge wxIndividualLayoutConstraint::GetMyEdge() const function, expected prototype:\nwxEdge wxIndividualLayoutConstraint::GetMyEdge() const\nClass arguments details:\n");
		}


		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxEdge wxIndividualLayoutConstraint::GetMyEdge() const");
		}
		wxEdge lret = self->GetMyEdge();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxIndividualLayoutConstraint::SetEdge(wxEdge which)
	static int _bind_SetEdge(lua_State *L) {
		if (!_lg_typecheck_SetEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::SetEdge(wxEdge which) function, expected prototype:\nvoid wxIndividualLayoutConstraint::SetEdge(wxEdge which)\nClass arguments details:\n");
		}

		wxEdge which=(wxEdge)lua_tointeger(L,2);

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::SetEdge(wxEdge)");
		}
		self->SetEdge(which);

		return 0;
	}

	// void wxIndividualLayoutConstraint::SetValue(int v)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::SetValue(int v) function, expected prototype:\nvoid wxIndividualLayoutConstraint::SetValue(int v)\nClass arguments details:\n");
		}

		int v=(int)lua_tointeger(L,2);

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::SetValue(int)");
		}
		self->SetValue(v);

		return 0;
	}

	// int wxIndividualLayoutConstraint::GetMargin()
	static int _bind_GetMargin(lua_State *L) {
		if (!_lg_typecheck_GetMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxIndividualLayoutConstraint::GetMargin() function, expected prototype:\nint wxIndividualLayoutConstraint::GetMargin()\nClass arguments details:\n");
		}


		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxIndividualLayoutConstraint::GetMargin()");
		}
		int lret = self->GetMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxIndividualLayoutConstraint::SetMargin(int m)
	static int _bind_SetMargin(lua_State *L) {
		if (!_lg_typecheck_SetMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::SetMargin(int m) function, expected prototype:\nvoid wxIndividualLayoutConstraint::SetMargin(int m)\nClass arguments details:\n");
		}

		int m=(int)lua_tointeger(L,2);

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::SetMargin(int)");
		}
		self->SetMargin(m);

		return 0;
	}

	// int wxIndividualLayoutConstraint::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxIndividualLayoutConstraint::GetValue() const function, expected prototype:\nint wxIndividualLayoutConstraint::GetValue() const\nClass arguments details:\n");
		}


		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxIndividualLayoutConstraint::GetValue() const");
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxIndividualLayoutConstraint::GetPercent() const
	static int _bind_GetPercent(lua_State *L) {
		if (!_lg_typecheck_GetPercent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxIndividualLayoutConstraint::GetPercent() const function, expected prototype:\nint wxIndividualLayoutConstraint::GetPercent() const\nClass arguments details:\n");
		}


		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxIndividualLayoutConstraint::GetPercent() const");
		}
		int lret = self->GetPercent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxIndividualLayoutConstraint::GetOtherEdge() const
	static int _bind_GetOtherEdge(lua_State *L) {
		if (!_lg_typecheck_GetOtherEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxIndividualLayoutConstraint::GetOtherEdge() const function, expected prototype:\nint wxIndividualLayoutConstraint::GetOtherEdge() const\nClass arguments details:\n");
		}


		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxIndividualLayoutConstraint::GetOtherEdge() const");
		}
		int lret = self->GetOtherEdge();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxIndividualLayoutConstraint::GetDone() const
	static int _bind_GetDone(lua_State *L) {
		if (!_lg_typecheck_GetDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIndividualLayoutConstraint::GetDone() const function, expected prototype:\nbool wxIndividualLayoutConstraint::GetDone() const\nClass arguments details:\n");
		}


		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIndividualLayoutConstraint::GetDone() const");
		}
		bool lret = self->GetDone();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxIndividualLayoutConstraint::SetDone(bool d)
	static int _bind_SetDone(lua_State *L) {
		if (!_lg_typecheck_SetDone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::SetDone(bool d) function, expected prototype:\nvoid wxIndividualLayoutConstraint::SetDone(bool d)\nClass arguments details:\n");
		}

		bool d=(bool)(lua_toboolean(L,2)==1);

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::SetDone(bool)");
		}
		self->SetDone(d);

		return 0;
	}

	// wxRelationship wxIndividualLayoutConstraint::GetRelationship()
	static int _bind_GetRelationship(lua_State *L) {
		if (!_lg_typecheck_GetRelationship(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in wxRelationship wxIndividualLayoutConstraint::GetRelationship() function, expected prototype:\nwxRelationship wxIndividualLayoutConstraint::GetRelationship()\nClass arguments details:\n");
		}


		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call wxRelationship wxIndividualLayoutConstraint::GetRelationship()");
		}
		wxRelationship lret = self->GetRelationship();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxIndividualLayoutConstraint::SetRelationship(wxRelationship r)
	static int _bind_SetRelationship(lua_State *L) {
		if (!_lg_typecheck_SetRelationship(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void wxIndividualLayoutConstraint::SetRelationship(wxRelationship r) function, expected prototype:\nvoid wxIndividualLayoutConstraint::SetRelationship(wxRelationship r)\nClass arguments details:\n");
		}

		wxRelationship r=(wxRelationship)lua_tointeger(L,2);

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void wxIndividualLayoutConstraint::SetRelationship(wxRelationship)");
		}
		self->SetRelationship(r);

		return 0;
	}

	// bool wxIndividualLayoutConstraint::ResetIfWin(wxWindow * otherW)
	static int _bind_ResetIfWin(lua_State *L) {
		if (!_lg_typecheck_ResetIfWin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIndividualLayoutConstraint::ResetIfWin(wxWindow * otherW) function, expected prototype:\nbool wxIndividualLayoutConstraint::ResetIfWin(wxWindow * otherW)\nClass arguments details:\narg 1 ID = 56813631\n");
		}

		wxWindow* otherW=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,2));

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIndividualLayoutConstraint::ResetIfWin(wxWindow *)");
		}
		bool lret = self->ResetIfWin(otherW);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIndividualLayoutConstraint::SatisfyConstraint(wxLayoutConstraints * constraints, wxWindow * win)
	static int _bind_SatisfyConstraint(lua_State *L) {
		if (!_lg_typecheck_SatisfyConstraint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool wxIndividualLayoutConstraint::SatisfyConstraint(wxLayoutConstraints * constraints, wxWindow * win) function, expected prototype:\nbool wxIndividualLayoutConstraint::SatisfyConstraint(wxLayoutConstraints * constraints, wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n");
		}

		wxLayoutConstraints* constraints=dynamic_cast< wxLayoutConstraints* >(Luna< wxObject >::check(L,2));
		wxWindow* win=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool wxIndividualLayoutConstraint::SatisfyConstraint(wxLayoutConstraints *, wxWindow *)");
		}
		bool lret = self->SatisfyConstraint(constraints, win);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxIndividualLayoutConstraint::GetEdge(wxEdge which, wxWindow * thisWin, wxWindow * other) const
	static int _bind_GetEdge(lua_State *L) {
		if (!_lg_typecheck_GetEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int wxIndividualLayoutConstraint::GetEdge(wxEdge which, wxWindow * thisWin, wxWindow * other) const function, expected prototype:\nint wxIndividualLayoutConstraint::GetEdge(wxEdge which, wxWindow * thisWin, wxWindow * other) const\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n");
		}

		wxEdge which=(wxEdge)lua_tointeger(L,2);
		wxWindow* thisWin=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,3));
		wxWindow* other=dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,4));

		wxIndividualLayoutConstraint* self=dynamic_cast< wxIndividualLayoutConstraint* >(Luna< wxObject >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int wxIndividualLayoutConstraint::GetEdge(wxEdge, wxWindow *, wxWindow *) const");
		}
		int lret = self->GetEdge(which, thisWin, other);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxIndividualLayoutConstraint* LunaTraits< wxIndividualLayoutConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxIndividualLayoutConstraint::_bind_ctor(L);
}

void LunaTraits< wxIndividualLayoutConstraint >::_bind_dtor(wxIndividualLayoutConstraint* obj) {
	delete obj;
}

const char LunaTraits< wxIndividualLayoutConstraint >::className[] = "wxIndividualLayoutConstraint";
const char LunaTraits< wxIndividualLayoutConstraint >::fullName[] = "wxIndividualLayoutConstraint";
const char LunaTraits< wxIndividualLayoutConstraint >::moduleName[] = "wx";
const char* LunaTraits< wxIndividualLayoutConstraint >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxIndividualLayoutConstraint >::hash = 76470577;
const int LunaTraits< wxIndividualLayoutConstraint >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIndividualLayoutConstraint >::methods[] = {
	{"Set", &luna_wrapper_wxIndividualLayoutConstraint::_bind_Set},
	{"LeftOf", &luna_wrapper_wxIndividualLayoutConstraint::_bind_LeftOf},
	{"RightOf", &luna_wrapper_wxIndividualLayoutConstraint::_bind_RightOf},
	{"Above", &luna_wrapper_wxIndividualLayoutConstraint::_bind_Above},
	{"Below", &luna_wrapper_wxIndividualLayoutConstraint::_bind_Below},
	{"SameAs", &luna_wrapper_wxIndividualLayoutConstraint::_bind_SameAs},
	{"PercentOf", &luna_wrapper_wxIndividualLayoutConstraint::_bind_PercentOf},
	{"Absolute", &luna_wrapper_wxIndividualLayoutConstraint::_bind_Absolute},
	{"Unconstrained", &luna_wrapper_wxIndividualLayoutConstraint::_bind_Unconstrained},
	{"AsIs", &luna_wrapper_wxIndividualLayoutConstraint::_bind_AsIs},
	{"GetMyEdge", &luna_wrapper_wxIndividualLayoutConstraint::_bind_GetMyEdge},
	{"SetEdge", &luna_wrapper_wxIndividualLayoutConstraint::_bind_SetEdge},
	{"SetValue", &luna_wrapper_wxIndividualLayoutConstraint::_bind_SetValue},
	{"GetMargin", &luna_wrapper_wxIndividualLayoutConstraint::_bind_GetMargin},
	{"SetMargin", &luna_wrapper_wxIndividualLayoutConstraint::_bind_SetMargin},
	{"GetValue", &luna_wrapper_wxIndividualLayoutConstraint::_bind_GetValue},
	{"GetPercent", &luna_wrapper_wxIndividualLayoutConstraint::_bind_GetPercent},
	{"GetOtherEdge", &luna_wrapper_wxIndividualLayoutConstraint::_bind_GetOtherEdge},
	{"GetDone", &luna_wrapper_wxIndividualLayoutConstraint::_bind_GetDone},
	{"SetDone", &luna_wrapper_wxIndividualLayoutConstraint::_bind_SetDone},
	{"GetRelationship", &luna_wrapper_wxIndividualLayoutConstraint::_bind_GetRelationship},
	{"SetRelationship", &luna_wrapper_wxIndividualLayoutConstraint::_bind_SetRelationship},
	{"ResetIfWin", &luna_wrapper_wxIndividualLayoutConstraint::_bind_ResetIfWin},
	{"SatisfyConstraint", &luna_wrapper_wxIndividualLayoutConstraint::_bind_SatisfyConstraint},
	{"GetEdge", &luna_wrapper_wxIndividualLayoutConstraint::_bind_GetEdge},
	{0,0}
};

luna_ConverterType LunaTraits< wxIndividualLayoutConstraint >::converters[] = {
	{"wxObject", &luna_wrapper_wxIndividualLayoutConstraint::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIndividualLayoutConstraint >::enumValues[] = {
	{0,0}
};

