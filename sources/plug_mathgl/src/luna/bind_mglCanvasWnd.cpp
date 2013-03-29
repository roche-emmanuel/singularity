#include <plug_common.h>

#include <luna/wrappers/wrapper_mglCanvasWnd.h>

class luna_wrapper_mglCanvasWnd {
public:
	typedef Luna< mglCanvasWnd > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		mglBase* self=(Luna< mglBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<mglBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88502113) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglBase*)");
		}

		mglBase* rhs =(Luna< mglBase >::check(L,2));
		mglBase* self=(Luna< mglBase >::check(L,1));
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

		mglCanvasWnd* self= (mglCanvasWnd*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglCanvasWnd >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88502113) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_mglBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//mglCanvasWnd* ptr= dynamic_cast< mglCanvasWnd* >(Luna< mglBase >::check(L,1));
		mglCanvasWnd* ptr= luna_caster< mglBase, mglCanvasWnd >::cast(Luna< mglBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< mglCanvasWnd >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DelFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumFig(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurFig(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCurFig(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ResetFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMousePos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMousePos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Setup(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToggleLight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToggleZoom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToggleRotate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToggleNo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Adjust(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GotoFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NextFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PrevFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Animation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReLoad(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLastMousePos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLastMousePos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetAmbient(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetQuality(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Reserve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_View(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Zoom(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clf(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_NewFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Finish(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Fog(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Light(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddLight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56902440) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_StartAutoGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EndGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DelFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ResetFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_NextFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_PrevFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglCanvasWnd::mglCanvasWnd(lua_Table * data)
	static mglCanvasWnd* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglCanvasWnd::mglCanvasWnd(lua_Table * data) function, expected prototype:\nmglCanvasWnd::mglCanvasWnd(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_mglCanvasWnd(L,NULL);
	}


	// Function binds:
	// void mglCanvasWnd::SetSize(int w, int h)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::SetSize(int w, int h) function, expected prototype:\nvoid mglCanvasWnd::SetSize(int w, int h)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::SetSize(int, int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetSize(w, h);

		return 0;
	}

	// void mglCanvasWnd::EndFrame()
	static int _bind_EndFrame(lua_State *L) {
		if (!_lg_typecheck_EndFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::EndFrame() function, expected prototype:\nvoid mglCanvasWnd::EndFrame()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::EndFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->EndFrame();

		return 0;
	}

	// void mglCanvasWnd::SetFrame(long i)
	static int _bind_SetFrame(lua_State *L) {
		if (!_lg_typecheck_SetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::SetFrame(long i) function, expected prototype:\nvoid mglCanvasWnd::SetFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::SetFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetFrame(i);

		return 0;
	}

	// void mglCanvasWnd::DelFrame(long i)
	static int _bind_DelFrame(lua_State *L) {
		if (!_lg_typecheck_DelFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::DelFrame(long i) function, expected prototype:\nvoid mglCanvasWnd::DelFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::DelFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->DelFrame(i);

		return 0;
	}

	// const unsigned char * mglCanvasWnd::GetBits()
	static int _bind_GetBits(lua_State *L) {
		if (!_lg_typecheck_GetBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * mglCanvasWnd::GetBits() function, expected prototype:\nconst unsigned char * mglCanvasWnd::GetBits()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * mglCanvasWnd::GetBits(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const unsigned char * lret = self->GetBits();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int mglCanvasWnd::GetNumFig() const
	static int _bind_GetNumFig(lua_State *L) {
		if (!_lg_typecheck_GetNumFig(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvasWnd::GetNumFig() const function, expected prototype:\nint mglCanvasWnd::GetNumFig() const\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvasWnd::GetNumFig() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetNumFig();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvasWnd::GetCurFig() const
	static int _bind_GetCurFig(lua_State *L) {
		if (!_lg_typecheck_GetCurFig(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvasWnd::GetCurFig() const function, expected prototype:\nint mglCanvasWnd::GetCurFig() const\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvasWnd::GetCurFig() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetCurFig();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvasWnd::SetCurFig(int c)
	static int _bind_SetCurFig(lua_State *L) {
		if (!_lg_typecheck_SetCurFig(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::SetCurFig(int c) function, expected prototype:\nvoid mglCanvasWnd::SetCurFig(int c)\nClass arguments details:\n");
		}

		int c=(int)lua_tointeger(L,2);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::SetCurFig(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetCurFig(c);

		return 0;
	}

	// void mglCanvasWnd::ResetFrames()
	static int _bind_ResetFrames(lua_State *L) {
		if (!_lg_typecheck_ResetFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::ResetFrames() function, expected prototype:\nvoid mglCanvasWnd::ResetFrames()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::ResetFrames(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ResetFrames();

		return 0;
	}

	// mglPoint mglCanvasWnd::GetMousePos() const
	static int _bind_GetMousePos(lua_State *L) {
		if (!_lg_typecheck_GetMousePos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglCanvasWnd::GetMousePos() const function, expected prototype:\nmglPoint mglCanvasWnd::GetMousePos() const\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglCanvasWnd::GetMousePos() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		mglPoint stack_lret = self->GetMousePos();
		mglPoint* lret = new mglPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,true);

		return 1;
	}

	// void mglCanvasWnd::SetMousePos(mglPoint p)
	static int _bind_SetMousePos(lua_State *L) {
		if (!_lg_typecheck_SetMousePos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::SetMousePos(mglPoint p) function, expected prototype:\nvoid mglCanvasWnd::SetMousePos(mglPoint p)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglCanvasWnd::SetMousePos function");
		}
		mglPoint p=*p_ptr;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::SetMousePos(mglPoint). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetMousePos(p);

		return 0;
	}

	// void mglCanvasWnd::Setup(bool clf_upd = true, bool showpos = false)
	static int _bind_Setup(lua_State *L) {
		if (!_lg_typecheck_Setup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::Setup(bool clf_upd = true, bool showpos = false) function, expected prototype:\nvoid mglCanvasWnd::Setup(bool clf_upd = true, bool showpos = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool clf_upd=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool showpos=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::Setup(bool, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Setup(clf_upd, showpos);

		return 0;
	}

	// void mglCanvasWnd::ToggleAlpha()
	static int _bind_ToggleAlpha(lua_State *L) {
		if (!_lg_typecheck_ToggleAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::ToggleAlpha() function, expected prototype:\nvoid mglCanvasWnd::ToggleAlpha()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::ToggleAlpha(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ToggleAlpha();

		return 0;
	}

	// void mglCanvasWnd::ToggleLight()
	static int _bind_ToggleLight(lua_State *L) {
		if (!_lg_typecheck_ToggleLight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::ToggleLight() function, expected prototype:\nvoid mglCanvasWnd::ToggleLight()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::ToggleLight(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ToggleLight();

		return 0;
	}

	// void mglCanvasWnd::ToggleZoom()
	static int _bind_ToggleZoom(lua_State *L) {
		if (!_lg_typecheck_ToggleZoom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::ToggleZoom() function, expected prototype:\nvoid mglCanvasWnd::ToggleZoom()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::ToggleZoom(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ToggleZoom();

		return 0;
	}

	// void mglCanvasWnd::ToggleRotate()
	static int _bind_ToggleRotate(lua_State *L) {
		if (!_lg_typecheck_ToggleRotate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::ToggleRotate() function, expected prototype:\nvoid mglCanvasWnd::ToggleRotate()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::ToggleRotate(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ToggleRotate();

		return 0;
	}

	// void mglCanvasWnd::ToggleNo()
	static int _bind_ToggleNo(lua_State *L) {
		if (!_lg_typecheck_ToggleNo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::ToggleNo() function, expected prototype:\nvoid mglCanvasWnd::ToggleNo()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::ToggleNo(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ToggleNo();

		return 0;
	}

	// void mglCanvasWnd::Update()
	static int _bind_Update(lua_State *L) {
		if (!_lg_typecheck_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::Update() function, expected prototype:\nvoid mglCanvasWnd::Update()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::Update(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Update();

		return 0;
	}

	// void mglCanvasWnd::Adjust()
	static int _bind_Adjust(lua_State *L) {
		if (!_lg_typecheck_Adjust(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::Adjust() function, expected prototype:\nvoid mglCanvasWnd::Adjust()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::Adjust(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Adjust();

		return 0;
	}

	// void mglCanvasWnd::GotoFrame(int d)
	static int _bind_GotoFrame(lua_State *L) {
		if (!_lg_typecheck_GotoFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::GotoFrame(int d) function, expected prototype:\nvoid mglCanvasWnd::GotoFrame(int d)\nClass arguments details:\n");
		}

		int d=(int)lua_tointeger(L,2);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::GotoFrame(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->GotoFrame(d);

		return 0;
	}

	// void mglCanvasWnd::NextFrame()
	static int _bind_NextFrame(lua_State *L) {
		if (!_lg_typecheck_NextFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::NextFrame() function, expected prototype:\nvoid mglCanvasWnd::NextFrame()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::NextFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->NextFrame();

		return 0;
	}

	// void mglCanvasWnd::PrevFrame()
	static int _bind_PrevFrame(lua_State *L) {
		if (!_lg_typecheck_PrevFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::PrevFrame() function, expected prototype:\nvoid mglCanvasWnd::PrevFrame()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::PrevFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->PrevFrame();

		return 0;
	}

	// void mglCanvasWnd::Animation()
	static int _bind_Animation(lua_State *L) {
		if (!_lg_typecheck_Animation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::Animation() function, expected prototype:\nvoid mglCanvasWnd::Animation()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::Animation(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Animation();

		return 0;
	}

	// void mglCanvasWnd::ReLoad()
	static int _bind_ReLoad(lua_State *L) {
		if (!_lg_typecheck_ReLoad(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::ReLoad() function, expected prototype:\nvoid mglCanvasWnd::ReLoad()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::ReLoad(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ReLoad();

		return 0;
	}

	// mglPoint mglCanvasWnd::LastMousePos()
	static int _bind_getLastMousePos(lua_State *L) {
		if (!_lg_typecheck_getLastMousePos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglCanvasWnd::LastMousePos() function, expected prototype:\nmglPoint mglCanvasWnd::LastMousePos()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglCanvasWnd::LastMousePos(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const mglPoint* lret = &self->LastMousePos;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// void mglCanvasWnd::LastMousePos(mglPoint value)
	static int _bind_setLastMousePos(lua_State *L) {
		if (!_lg_typecheck_setLastMousePos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::LastMousePos(mglPoint value) function, expected prototype:\nvoid mglCanvasWnd::LastMousePos(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglCanvasWnd::LastMousePos function");
		}
		mglPoint value=*value_ptr;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::LastMousePos(mglPoint). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->LastMousePos = value;

		return 0;
	}

	// void mglCanvasWnd::base_SetAmbient(double bright = 0.5)
	static int _bind_base_SetAmbient(lua_State *L) {
		if (!_lg_typecheck_base_SetAmbient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_SetAmbient(double bright = 0.5) function, expected prototype:\nvoid mglCanvasWnd::base_SetAmbient(double bright = 0.5)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double bright=luatop>1 ? (double)lua_tonumber(L,2) : (double)0.5;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_SetAmbient(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::SetAmbient(bright);

		return 0;
	}

	// bool mglCanvasWnd::base_Alpha(bool enable)
	static int _bind_base_Alpha(lua_State *L) {
		if (!_lg_typecheck_base_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglCanvasWnd::base_Alpha(bool enable) function, expected prototype:\nbool mglCanvasWnd::base_Alpha(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglCanvasWnd::base_Alpha(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->mglCanvasWnd::Alpha(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglCanvasWnd::base_SetQuality(int qual = 2)
	static int _bind_base_SetQuality(lua_State *L) {
		if (!_lg_typecheck_base_SetQuality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_SetQuality(int qual = 2) function, expected prototype:\nvoid mglCanvasWnd::base_SetQuality(int qual = 2)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int qual=luatop>1 ? (int)lua_tointeger(L,2) : (int)2;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_SetQuality(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::SetQuality(qual);

		return 0;
	}

	// void mglCanvasWnd::base_Reserve(long n)
	static int _bind_base_Reserve(lua_State *L) {
		if (!_lg_typecheck_base_Reserve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_Reserve(long n) function, expected prototype:\nvoid mglCanvasWnd::base_Reserve(long n)\nClass arguments details:\n");
		}

		long n=(long)lua_tointeger(L,2);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_Reserve(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::Reserve(n);

		return 0;
	}

	// void mglCanvasWnd::base_View(double tetx, double tetz, double tety = 0)
	static int _bind_base_View(lua_State *L) {
		if (!_lg_typecheck_base_View(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_View(double tetx, double tetz, double tety = 0) function, expected prototype:\nvoid mglCanvasWnd::base_View(double tetx, double tetz, double tety = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double tetx=(double)lua_tonumber(L,2);
		double tetz=(double)lua_tonumber(L,3);
		double tety=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_View(double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::View(tetx, tetz, tety);

		return 0;
	}

	// void mglCanvasWnd::base_Zoom(double x1, double y1, double x2, double y2)
	static int _bind_base_Zoom(lua_State *L) {
		if (!_lg_typecheck_base_Zoom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_Zoom(double x1, double y1, double x2, double y2) function, expected prototype:\nvoid mglCanvasWnd::base_Zoom(double x1, double y1, double x2, double y2)\nClass arguments details:\n");
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_Zoom(double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::Zoom(x1, y1, x2, y2);

		return 0;
	}

	// void mglCanvasWnd::base_Clf(mglColor back = WC)
	static int _bind_base_Clf(lua_State *L) {
		if (!_lg_typecheck_base_Clf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_Clf(mglColor back = WC) function, expected prototype:\nvoid mglCanvasWnd::base_Clf(mglColor back = WC)\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		int luatop = lua_gettop(L);

		mglColor* back_ptr=luatop>1 ? (Luna< mglColor >::check(L,2)) : NULL;
		if( luatop>1 && !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in mglCanvasWnd::base_Clf function");
		}
		mglColor back=luatop>1 ? *back_ptr : (mglColor)WC;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_Clf(mglColor). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::Clf(back);

		return 0;
	}

	// double mglCanvasWnd::base_GetRatio() const
	static int _bind_base_GetRatio(lua_State *L) {
		if (!_lg_typecheck_base_GetRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglCanvasWnd::base_GetRatio() const function, expected prototype:\ndouble mglCanvasWnd::base_GetRatio() const\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglCanvasWnd::base_GetRatio() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->mglCanvasWnd::GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvasWnd::base_GetWidth() const
	static int _bind_base_GetWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvasWnd::base_GetWidth() const function, expected prototype:\nint mglCanvasWnd::base_GetWidth() const\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvasWnd::base_GetWidth() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->mglCanvasWnd::GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvasWnd::base_GetHeight() const
	static int _bind_base_GetHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvasWnd::base_GetHeight() const function, expected prototype:\nint mglCanvasWnd::base_GetHeight() const\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvasWnd::base_GetHeight() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->mglCanvasWnd::GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvasWnd::base_NewFrame()
	static int _bind_base_NewFrame(lua_State *L) {
		if (!_lg_typecheck_base_NewFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvasWnd::base_NewFrame() function, expected prototype:\nint mglCanvasWnd::base_NewFrame()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvasWnd::base_NewFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->mglCanvasWnd::NewFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvasWnd::base_Finish(bool fast = true)
	static int _bind_base_Finish(lua_State *L) {
		if (!_lg_typecheck_base_Finish(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_Finish(bool fast = true) function, expected prototype:\nvoid mglCanvasWnd::base_Finish(bool fast = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool fast=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_Finish(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::Finish(fast);

		return 0;
	}

	// void mglCanvasWnd::base_Fog(double d, double dz = 0.25)
	static int _bind_base_Fog(lua_State *L) {
		if (!_lg_typecheck_base_Fog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_Fog(double d, double dz = 0.25) function, expected prototype:\nvoid mglCanvasWnd::base_Fog(double d, double dz = 0.25)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double d=(double)lua_tonumber(L,2);
		double dz=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.25;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_Fog(double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::Fog(d, dz);

		return 0;
	}

	// void mglCanvasWnd::base_Light(int n, bool enable)
	static int _bind_base_Light(lua_State *L) {
		if (!_lg_typecheck_base_Light(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_Light(int n, bool enable) function, expected prototype:\nvoid mglCanvasWnd::base_Light(int n, bool enable)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_Light(int, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::Light(n, enable);

		return 0;
	}

	// void mglCanvasWnd::base_AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)
	static int _bind_base_AddLight(lua_State *L) {
		if (!_lg_typecheck_base_AddLight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0) function, expected prototype:\nvoid mglCanvasWnd::base_AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)\nClass arguments details:\narg 2 ID = 56902440\narg 3 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		int n=(int)lua_tointeger(L,2);
		mglPoint* r_ptr=(Luna< mglPoint >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglCanvasWnd::base_AddLight function");
		}
		mglPoint r=*r_ptr;
		mglPoint* d_ptr=(Luna< mglPoint >::check(L,4));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglCanvasWnd::base_AddLight function");
		}
		mglPoint d=*d_ptr;
		char c=luatop>4 ? (char)lua_tointeger(L,5) : (char)'w';
		double bright=luatop>5 ? (double)lua_tonumber(L,6) : (double)0.5;
		double ap=luatop>6 ? (double)lua_tonumber(L,7) : (double)0;

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_AddLight(int, mglPoint, mglPoint, char, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::AddLight(n, r, d, c, bright, ap);

		return 0;
	}

	// void mglCanvasWnd::base_StartAutoGroup(const char * arg1)
	static int _bind_base_StartAutoGroup(lua_State *L) {
		if (!_lg_typecheck_base_StartAutoGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_StartAutoGroup(const char * arg1) function, expected prototype:\nvoid mglCanvasWnd::base_StartAutoGroup(const char * arg1)\nClass arguments details:\n");
		}

		const char * _arg1=(const char *)lua_tostring(L,2);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_StartAutoGroup(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::StartAutoGroup(_arg1);

		return 0;
	}

	// void mglCanvasWnd::base_EndGroup()
	static int _bind_base_EndGroup(lua_State *L) {
		if (!_lg_typecheck_base_EndGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_EndGroup() function, expected prototype:\nvoid mglCanvasWnd::base_EndGroup()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_EndGroup(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::EndGroup();

		return 0;
	}

	// void mglCanvasWnd::base_SetSize(int w, int h)
	static int _bind_base_SetSize(lua_State *L) {
		if (!_lg_typecheck_base_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_SetSize(int w, int h) function, expected prototype:\nvoid mglCanvasWnd::base_SetSize(int w, int h)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_SetSize(int, int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::SetSize(w, h);

		return 0;
	}

	// void mglCanvasWnd::base_EndFrame()
	static int _bind_base_EndFrame(lua_State *L) {
		if (!_lg_typecheck_base_EndFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_EndFrame() function, expected prototype:\nvoid mglCanvasWnd::base_EndFrame()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_EndFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::EndFrame();

		return 0;
	}

	// void mglCanvasWnd::base_SetFrame(long i)
	static int _bind_base_SetFrame(lua_State *L) {
		if (!_lg_typecheck_base_SetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_SetFrame(long i) function, expected prototype:\nvoid mglCanvasWnd::base_SetFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_SetFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::SetFrame(i);

		return 0;
	}

	// void mglCanvasWnd::base_DelFrame(long i)
	static int _bind_base_DelFrame(lua_State *L) {
		if (!_lg_typecheck_base_DelFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_DelFrame(long i) function, expected prototype:\nvoid mglCanvasWnd::base_DelFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_DelFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::DelFrame(i);

		return 0;
	}

	// const unsigned char * mglCanvasWnd::base_GetBits()
	static int _bind_base_GetBits(lua_State *L) {
		if (!_lg_typecheck_base_GetBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * mglCanvasWnd::base_GetBits() function, expected prototype:\nconst unsigned char * mglCanvasWnd::base_GetBits()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * mglCanvasWnd::base_GetBits(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const unsigned char * lret = self->mglCanvasWnd::GetBits();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// void mglCanvasWnd::base_ResetFrames()
	static int _bind_base_ResetFrames(lua_State *L) {
		if (!_lg_typecheck_base_ResetFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_ResetFrames() function, expected prototype:\nvoid mglCanvasWnd::base_ResetFrames()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_ResetFrames(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::ResetFrames();

		return 0;
	}

	// void mglCanvasWnd::base_NextFrame()
	static int _bind_base_NextFrame(lua_State *L) {
		if (!_lg_typecheck_base_NextFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_NextFrame() function, expected prototype:\nvoid mglCanvasWnd::base_NextFrame()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_NextFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::NextFrame();

		return 0;
	}

	// void mglCanvasWnd::base_PrevFrame()
	static int _bind_base_PrevFrame(lua_State *L) {
		if (!_lg_typecheck_base_PrevFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvasWnd::base_PrevFrame() function, expected prototype:\nvoid mglCanvasWnd::base_PrevFrame()\nClass arguments details:\n");
		}


		mglCanvasWnd* self=Luna< mglBase >::checkSubType< mglCanvasWnd >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvasWnd::base_PrevFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvasWnd::PrevFrame();

		return 0;
	}


	// Operator binds:

};

mglCanvasWnd* LunaTraits< mglCanvasWnd >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglCanvasWnd::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void mglCanvasWnd::ToggleAlpha()
	// void mglCanvasWnd::ToggleLight()
	// void mglCanvasWnd::ToggleZoom()
	// void mglCanvasWnd::ToggleRotate()
	// void mglCanvasWnd::ToggleNo()
	// void mglCanvasWnd::Update()
	// void mglCanvasWnd::Adjust()
	// void mglCanvasWnd::GotoFrame(int d)
	// void mglCanvasWnd::Animation()
	// void mglCanvasWnd::Window(int argc, char ** argv, int(*)(mglBase *gr, void *p) draw, const char * title, void * par = NULL, void(*)(void *p) reload = NULL, bool maximize = false)
}

void LunaTraits< mglCanvasWnd >::_bind_dtor(mglCanvasWnd* obj) {
	delete obj;
}

const char LunaTraits< mglCanvasWnd >::className[] = "mglCanvasWnd";
const char LunaTraits< mglCanvasWnd >::fullName[] = "mglCanvasWnd";
const char LunaTraits< mglCanvasWnd >::moduleName[] = "mathgl";
const char* LunaTraits< mglCanvasWnd >::parents[] = {"mathgl.mglCanvas", 0};
const int LunaTraits< mglCanvasWnd >::hash = 87003303;
const int LunaTraits< mglCanvasWnd >::uniqueIDs[] = {88502113,0};

luna_RegType LunaTraits< mglCanvasWnd >::methods[] = {
	{"SetSize", &luna_wrapper_mglCanvasWnd::_bind_SetSize},
	{"EndFrame", &luna_wrapper_mglCanvasWnd::_bind_EndFrame},
	{"SetFrame", &luna_wrapper_mglCanvasWnd::_bind_SetFrame},
	{"DelFrame", &luna_wrapper_mglCanvasWnd::_bind_DelFrame},
	{"GetBits", &luna_wrapper_mglCanvasWnd::_bind_GetBits},
	{"GetNumFig", &luna_wrapper_mglCanvasWnd::_bind_GetNumFig},
	{"GetCurFig", &luna_wrapper_mglCanvasWnd::_bind_GetCurFig},
	{"SetCurFig", &luna_wrapper_mglCanvasWnd::_bind_SetCurFig},
	{"ResetFrames", &luna_wrapper_mglCanvasWnd::_bind_ResetFrames},
	{"GetMousePos", &luna_wrapper_mglCanvasWnd::_bind_GetMousePos},
	{"SetMousePos", &luna_wrapper_mglCanvasWnd::_bind_SetMousePos},
	{"Setup", &luna_wrapper_mglCanvasWnd::_bind_Setup},
	{"ToggleAlpha", &luna_wrapper_mglCanvasWnd::_bind_ToggleAlpha},
	{"ToggleLight", &luna_wrapper_mglCanvasWnd::_bind_ToggleLight},
	{"ToggleZoom", &luna_wrapper_mglCanvasWnd::_bind_ToggleZoom},
	{"ToggleRotate", &luna_wrapper_mglCanvasWnd::_bind_ToggleRotate},
	{"ToggleNo", &luna_wrapper_mglCanvasWnd::_bind_ToggleNo},
	{"Update", &luna_wrapper_mglCanvasWnd::_bind_Update},
	{"Adjust", &luna_wrapper_mglCanvasWnd::_bind_Adjust},
	{"GotoFrame", &luna_wrapper_mglCanvasWnd::_bind_GotoFrame},
	{"NextFrame", &luna_wrapper_mglCanvasWnd::_bind_NextFrame},
	{"PrevFrame", &luna_wrapper_mglCanvasWnd::_bind_PrevFrame},
	{"Animation", &luna_wrapper_mglCanvasWnd::_bind_Animation},
	{"ReLoad", &luna_wrapper_mglCanvasWnd::_bind_ReLoad},
	{"getLastMousePos", &luna_wrapper_mglCanvasWnd::_bind_getLastMousePos},
	{"setLastMousePos", &luna_wrapper_mglCanvasWnd::_bind_setLastMousePos},
	{"base_SetAmbient", &luna_wrapper_mglCanvasWnd::_bind_base_SetAmbient},
	{"base_Alpha", &luna_wrapper_mglCanvasWnd::_bind_base_Alpha},
	{"base_SetQuality", &luna_wrapper_mglCanvasWnd::_bind_base_SetQuality},
	{"base_Reserve", &luna_wrapper_mglCanvasWnd::_bind_base_Reserve},
	{"base_View", &luna_wrapper_mglCanvasWnd::_bind_base_View},
	{"base_Zoom", &luna_wrapper_mglCanvasWnd::_bind_base_Zoom},
	{"base_Clf", &luna_wrapper_mglCanvasWnd::_bind_base_Clf},
	{"base_GetRatio", &luna_wrapper_mglCanvasWnd::_bind_base_GetRatio},
	{"base_GetWidth", &luna_wrapper_mglCanvasWnd::_bind_base_GetWidth},
	{"base_GetHeight", &luna_wrapper_mglCanvasWnd::_bind_base_GetHeight},
	{"base_NewFrame", &luna_wrapper_mglCanvasWnd::_bind_base_NewFrame},
	{"base_Finish", &luna_wrapper_mglCanvasWnd::_bind_base_Finish},
	{"base_Fog", &luna_wrapper_mglCanvasWnd::_bind_base_Fog},
	{"base_Light", &luna_wrapper_mglCanvasWnd::_bind_base_Light},
	{"base_AddLight", &luna_wrapper_mglCanvasWnd::_bind_base_AddLight},
	{"base_StartAutoGroup", &luna_wrapper_mglCanvasWnd::_bind_base_StartAutoGroup},
	{"base_EndGroup", &luna_wrapper_mglCanvasWnd::_bind_base_EndGroup},
	{"base_SetSize", &luna_wrapper_mglCanvasWnd::_bind_base_SetSize},
	{"base_EndFrame", &luna_wrapper_mglCanvasWnd::_bind_base_EndFrame},
	{"base_SetFrame", &luna_wrapper_mglCanvasWnd::_bind_base_SetFrame},
	{"base_DelFrame", &luna_wrapper_mglCanvasWnd::_bind_base_DelFrame},
	{"base_GetBits", &luna_wrapper_mglCanvasWnd::_bind_base_GetBits},
	{"base_ResetFrames", &luna_wrapper_mglCanvasWnd::_bind_base_ResetFrames},
	{"base_NextFrame", &luna_wrapper_mglCanvasWnd::_bind_base_NextFrame},
	{"base_PrevFrame", &luna_wrapper_mglCanvasWnd::_bind_base_PrevFrame},
	{"__eq", &luna_wrapper_mglCanvasWnd::_bind___eq},
	{"fromVoid", &luna_wrapper_mglCanvasWnd::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglCanvasWnd::_bind_asVoid},
	{"getTable", &luna_wrapper_mglCanvasWnd::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglCanvasWnd >::converters[] = {
	{"mglBase", &luna_wrapper_mglCanvasWnd::_cast_from_mglBase},
	{0,0}
};

luna_RegEnumType LunaTraits< mglCanvasWnd >::enumValues[] = {
	{0,0}
};


