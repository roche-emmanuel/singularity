#include <plug_common.h>

#include <luna/wrappers/wrapper_mglCanvas.h>

class luna_wrapper_mglCanvas {
public:
	typedef Luna< mglCanvas > luna_t;

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

		mglCanvas* self= (mglCanvas*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglCanvas >::push(L,self,false);
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
		//mglCanvas* ptr= dynamic_cast< mglCanvas* >(Luna< mglBase >::check(L,1));
		mglCanvas* ptr= luna_caster< mglBase, mglCanvas >::cast(Luna< mglBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< mglCanvas >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DefaultPlotParam(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_View(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Zoom(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Restore(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Identity(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Push(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPlotFactor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPlotFactor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Pop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clf(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StickPlot(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InPlot_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InPlot_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Title(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Aspect(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Rotate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RotateN(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Perspective(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRGBA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Combine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MPI_Send(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MPI_Recv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDelay(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcXYZ(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcScr_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcScr_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetObjId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetObjId(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSplId(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsActive(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NewFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DelFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartGIF(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CloseGIF(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Finish(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExportMGLD(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ImportMGLD(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteJSON(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTranspType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fog(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Light(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddLight_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,4))) ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddLight_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( (!(Luna< mglPoint >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTicksVal_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTicksVal_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,45413231)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< mglDataA >::check(L,3)) ) ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickTempl(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickTime(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTicks(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AdjustTicks(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTuneTicks(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAxisStl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickLen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Box(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Axis(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Grid(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Label(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Colorbar_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Colorbar_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Colorbar_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Colorbar_overload_4(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::check(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Legend_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Legend_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Legend_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64344026) ) return false;
		if( (!(Luna< std::vector< mglText > >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Legend_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64344026) ) return false;
		if( (!(Luna< std::vector< mglText > >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isstring(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLegendMarks(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartAutoGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88935222) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickShift(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetBits(lua_State *L) {
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

	inline static bool _lg_typecheck_base_EndFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ResetFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DelFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglCanvas::mglCanvas(int w = 800, int h = 600)
	static mglCanvas* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglCanvas::mglCanvas(int w = 800, int h = 600) function, expected prototype:\nmglCanvas::mglCanvas(int w = 800, int h = 600)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int w=luatop>0 ? (int)lua_tointeger(L,1) : (int)800;
		int h=luatop>1 ? (int)lua_tointeger(L,2) : (int)600;

		return new mglCanvas(w, h);
	}

	// mglCanvas::mglCanvas(lua_Table * data, int w = 800, int h = 600)
	static mglCanvas* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglCanvas::mglCanvas(lua_Table * data, int w = 800, int h = 600) function, expected prototype:\nmglCanvas::mglCanvas(lua_Table * data, int w = 800, int h = 600)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int w=luatop>1 ? (int)lua_tointeger(L,2) : (int)800;
		int h=luatop>2 ? (int)lua_tointeger(L,3) : (int)600;

		return new wrapper_mglCanvas(L,NULL, w, h);
	}

	// Overload binder for mglCanvas::mglCanvas
	static mglCanvas* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function mglCanvas, cannot match any of the overloads for function mglCanvas:\n  mglCanvas(int, int)\n  mglCanvas(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// void mglCanvas::DefaultPlotParam()
	static int _bind_DefaultPlotParam(lua_State *L) {
		if (!_lg_typecheck_DefaultPlotParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::DefaultPlotParam() function, expected prototype:\nvoid mglCanvas::DefaultPlotParam()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::DefaultPlotParam(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->DefaultPlotParam();

		return 0;
	}

	// void mglCanvas::View(double tetx, double tetz, double tety = 0)
	static int _bind_View(lua_State *L) {
		if (!_lg_typecheck_View(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::View(double tetx, double tetz, double tety = 0) function, expected prototype:\nvoid mglCanvas::View(double tetx, double tetz, double tety = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double tetx=(double)lua_tonumber(L,2);
		double tetz=(double)lua_tonumber(L,3);
		double tety=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::View(double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->View(tetx, tetz, tety);

		return 0;
	}

	// void mglCanvas::Zoom(double x1, double y1, double x2, double y2)
	static int _bind_Zoom(lua_State *L) {
		if (!_lg_typecheck_Zoom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Zoom(double x1, double y1, double x2, double y2) function, expected prototype:\nvoid mglCanvas::Zoom(double x1, double y1, double x2, double y2)\nClass arguments details:\n");
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Zoom(double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Zoom(x1, y1, x2, y2);

		return 0;
	}

	// void mglCanvas::Restore()
	static int _bind_Restore(lua_State *L) {
		if (!_lg_typecheck_Restore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Restore() function, expected prototype:\nvoid mglCanvas::Restore()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Restore(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Restore();

		return 0;
	}

	// void mglCanvas::Identity(bool rel = false)
	static int _bind_Identity(lua_State *L) {
		if (!_lg_typecheck_Identity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Identity(bool rel = false) function, expected prototype:\nvoid mglCanvas::Identity(bool rel = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool rel=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Identity(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Identity(rel);

		return 0;
	}

	// void mglCanvas::Push()
	static int _bind_Push(lua_State *L) {
		if (!_lg_typecheck_Push(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Push() function, expected prototype:\nvoid mglCanvas::Push()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Push(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Push();

		return 0;
	}

	// void mglCanvas::SetPlotFactor(double val)
	static int _bind_SetPlotFactor(lua_State *L) {
		if (!_lg_typecheck_SetPlotFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetPlotFactor(double val) function, expected prototype:\nvoid mglCanvas::SetPlotFactor(double val)\nClass arguments details:\n");
		}

		double val=(double)lua_tonumber(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetPlotFactor(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetPlotFactor(val);

		return 0;
	}

	// double mglCanvas::GetPlotFactor()
	static int _bind_GetPlotFactor(lua_State *L) {
		if (!_lg_typecheck_GetPlotFactor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglCanvas::GetPlotFactor() function, expected prototype:\ndouble mglCanvas::GetPlotFactor()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglCanvas::GetPlotFactor(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetPlotFactor();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvas::Pop()
	static int _bind_Pop(lua_State *L) {
		if (!_lg_typecheck_Pop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Pop() function, expected prototype:\nvoid mglCanvas::Pop()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Pop(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Pop();

		return 0;
	}

	// void mglCanvas::Clf(mglColor back = WC)
	static int _bind_Clf(lua_State *L) {
		if (!_lg_typecheck_Clf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Clf(mglColor back = WC) function, expected prototype:\nvoid mglCanvas::Clf(mglColor back = WC)\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		int luatop = lua_gettop(L);

		mglColor* back_ptr=luatop>1 ? (Luna< mglColor >::check(L,2)) : NULL;
		if( luatop>1 && !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in mglCanvas::Clf function");
		}
		mglColor back=luatop>1 ? *back_ptr : (mglColor)WC;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Clf(mglColor). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Clf(back);

		return 0;
	}

	// void mglCanvas::StickPlot(int num, int i, double tet, double phi)
	static int _bind_StickPlot(lua_State *L) {
		if (!_lg_typecheck_StickPlot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::StickPlot(int num, int i, double tet, double phi) function, expected prototype:\nvoid mglCanvas::StickPlot(int num, int i, double tet, double phi)\nClass arguments details:\n");
		}

		int num=(int)lua_tointeger(L,2);
		int i=(int)lua_tointeger(L,3);
		double tet=(double)lua_tonumber(L,4);
		double phi=(double)lua_tonumber(L,5);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::StickPlot(int, int, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->StickPlot(num, i, tet, phi);

		return 0;
	}

	// void mglCanvas::InPlot(double x1, double x2, double y1, double y2, bool rel = true)
	static int _bind_InPlot_overload_1(lua_State *L) {
		if (!_lg_typecheck_InPlot_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::InPlot(double x1, double x2, double y1, double y2, bool rel = true) function, expected prototype:\nvoid mglCanvas::InPlot(double x1, double x2, double y1, double y2, bool rel = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x1=(double)lua_tonumber(L,2);
		double x2=(double)lua_tonumber(L,3);
		double y1=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);
		bool rel=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::InPlot(double, double, double, double, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->InPlot(x1, x2, y1, y2, rel);

		return 0;
	}

	// void mglCanvas::InPlot(double x1, double x2, double y1, double y2, const char * style)
	static int _bind_InPlot_overload_2(lua_State *L) {
		if (!_lg_typecheck_InPlot_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::InPlot(double x1, double x2, double y1, double y2, const char * style) function, expected prototype:\nvoid mglCanvas::InPlot(double x1, double x2, double y1, double y2, const char * style)\nClass arguments details:\n");
		}

		double x1=(double)lua_tonumber(L,2);
		double x2=(double)lua_tonumber(L,3);
		double y1=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);
		const char * style=(const char *)lua_tostring(L,6);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::InPlot(double, double, double, double, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->InPlot(x1, x2, y1, y2, style);

		return 0;
	}

	// Overload binder for mglCanvas::InPlot
	static int _bind_InPlot(lua_State *L) {
		if (_lg_typecheck_InPlot_overload_1(L)) return _bind_InPlot_overload_1(L);
		if (_lg_typecheck_InPlot_overload_2(L)) return _bind_InPlot_overload_2(L);

		luaL_error(L, "error in function InPlot, cannot match any of the overloads for function InPlot:\n  InPlot(double, double, double, double, bool)\n  InPlot(double, double, double, double, const char *)\n");
		return 0;
	}

	// void mglCanvas::Title(const char * title, const char * stl = "#", double size = -2)
	static int _bind_Title(lua_State *L) {
		if (!_lg_typecheck_Title(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Title(const char * title, const char * stl = \"#\", double size = -2) function, expected prototype:\nvoid mglCanvas::Title(const char * title, const char * stl = \"#\", double size = -2)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * title=(const char *)lua_tostring(L,2);
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)"#";
		double size=luatop>3 ? (double)lua_tonumber(L,4) : (double)-2;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Title(const char *, const char *, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Title(title, stl, size);

		return 0;
	}

	// void mglCanvas::Aspect(double Ax, double Ay, double Az)
	static int _bind_Aspect(lua_State *L) {
		if (!_lg_typecheck_Aspect(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Aspect(double Ax, double Ay, double Az) function, expected prototype:\nvoid mglCanvas::Aspect(double Ax, double Ay, double Az)\nClass arguments details:\n");
		}

		double Ax=(double)lua_tonumber(L,2);
		double Ay=(double)lua_tonumber(L,3);
		double Az=(double)lua_tonumber(L,4);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Aspect(double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Aspect(Ax, Ay, Az);

		return 0;
	}

	// void mglCanvas::Rotate(double TetX, double TetZ, double TetY = 0)
	static int _bind_Rotate(lua_State *L) {
		if (!_lg_typecheck_Rotate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Rotate(double TetX, double TetZ, double TetY = 0) function, expected prototype:\nvoid mglCanvas::Rotate(double TetX, double TetZ, double TetY = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double TetX=(double)lua_tonumber(L,2);
		double TetZ=(double)lua_tonumber(L,3);
		double TetY=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Rotate(double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Rotate(TetX, TetZ, TetY);

		return 0;
	}

	// void mglCanvas::RotateN(double Tet, double x, double y, double z)
	static int _bind_RotateN(lua_State *L) {
		if (!_lg_typecheck_RotateN(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::RotateN(double Tet, double x, double y, double z) function, expected prototype:\nvoid mglCanvas::RotateN(double Tet, double x, double y, double z)\nClass arguments details:\n");
		}

		double Tet=(double)lua_tonumber(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double z=(double)lua_tonumber(L,5);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::RotateN(double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->RotateN(Tet, x, y, z);

		return 0;
	}

	// void mglCanvas::Perspective(double a)
	static int _bind_Perspective(lua_State *L) {
		if (!_lg_typecheck_Perspective(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Perspective(double a) function, expected prototype:\nvoid mglCanvas::Perspective(double a)\nClass arguments details:\n");
		}

		double a=(double)lua_tonumber(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Perspective(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Perspective(a);

		return 0;
	}

	// void mglCanvas::SetSize(int w, int h)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetSize(int w, int h) function, expected prototype:\nvoid mglCanvas::SetSize(int w, int h)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetSize(int, int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetSize(w, h);

		return 0;
	}

	// double mglCanvas::GetRatio() const
	static int _bind_GetRatio(lua_State *L) {
		if (!_lg_typecheck_GetRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglCanvas::GetRatio() const function, expected prototype:\ndouble mglCanvas::GetRatio() const\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglCanvas::GetRatio() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * mglCanvas::GetBits()
	static int _bind_GetBits(lua_State *L) {
		if (!_lg_typecheck_GetBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * mglCanvas::GetBits() function, expected prototype:\nconst unsigned char * mglCanvas::GetBits()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * mglCanvas::GetBits(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const unsigned char * lret = self->GetBits();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * mglCanvas::GetRGBA()
	static int _bind_GetRGBA(lua_State *L) {
		if (!_lg_typecheck_GetRGBA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * mglCanvas::GetRGBA() function, expected prototype:\nconst unsigned char * mglCanvas::GetRGBA()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * mglCanvas::GetRGBA(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const unsigned char * lret = self->GetRGBA();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int mglCanvas::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::GetWidth() const function, expected prototype:\nint mglCanvas::GetWidth() const\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::GetWidth() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvas::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::GetHeight() const function, expected prototype:\nint mglCanvas::GetHeight() const\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::GetHeight() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvas::Combine(const mglCanvas * gr)
	static int _bind_Combine(lua_State *L) {
		if (!_lg_typecheck_Combine(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Combine(const mglCanvas * gr) function, expected prototype:\nvoid mglCanvas::Combine(const mglCanvas * gr)\nClass arguments details:\narg 1 ID = 88502113\n");
		}

		const mglCanvas* gr=(Luna< mglBase >::checkSubType< mglCanvas >(L,2));

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Combine(const mglCanvas *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Combine(gr);

		return 0;
	}

	// void mglCanvas::MPI_Send(int id)
	static int _bind_MPI_Send(lua_State *L) {
		if (!_lg_typecheck_MPI_Send(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::MPI_Send(int id) function, expected prototype:\nvoid mglCanvas::MPI_Send(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::MPI_Send(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->MPI_Send(id);

		return 0;
	}

	// void mglCanvas::MPI_Recv(int id)
	static int _bind_MPI_Recv(lua_State *L) {
		if (!_lg_typecheck_MPI_Recv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::MPI_Recv(int id) function, expected prototype:\nvoid mglCanvas::MPI_Recv(int id)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::MPI_Recv(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->MPI_Recv(id);

		return 0;
	}

	// double mglCanvas::GetDelay() const
	static int _bind_GetDelay(lua_State *L) {
		if (!_lg_typecheck_GetDelay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglCanvas::GetDelay() const function, expected prototype:\ndouble mglCanvas::GetDelay() const\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglCanvas::GetDelay() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->GetDelay();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvas::SetDelay(double d)
	static int _bind_SetDelay(lua_State *L) {
		if (!_lg_typecheck_SetDelay(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetDelay(double d) function, expected prototype:\nvoid mglCanvas::SetDelay(double d)\nClass arguments details:\n");
		}

		double d=(double)lua_tonumber(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetDelay(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetDelay(d);

		return 0;
	}

	// mglPoint mglCanvas::CalcXYZ(int xs, int ys, bool real = false) const
	static int _bind_CalcXYZ(lua_State *L) {
		if (!_lg_typecheck_CalcXYZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglCanvas::CalcXYZ(int xs, int ys, bool real = false) const function, expected prototype:\nmglPoint mglCanvas::CalcXYZ(int xs, int ys, bool real = false) const\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int xs=(int)lua_tointeger(L,2);
		int ys=(int)lua_tointeger(L,3);
		bool real=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglCanvas::CalcXYZ(int, int, bool) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		mglPoint stack_lret = self->CalcXYZ(xs, ys, real);
		mglPoint* lret = new mglPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,true);

		return 1;
	}

	// void mglCanvas::CalcScr(mglPoint p, int * xs, int * ys) const
	static int _bind_CalcScr_overload_1(lua_State *L) {
		if (!_lg_typecheck_CalcScr_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::CalcScr(mglPoint p, int * xs, int * ys) const function, expected prototype:\nvoid mglCanvas::CalcScr(mglPoint p, int * xs, int * ys) const\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglCanvas::CalcScr function");
		}
		mglPoint p=*p_ptr;
		int* xs=(int*)Luna< void >::check(L,3);
		int* ys=(int*)Luna< void >::check(L,4);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::CalcScr(mglPoint, int *, int *) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->CalcScr(p, xs, ys);

		return 0;
	}

	// mglPoint mglCanvas::CalcScr(mglPoint p) const
	static int _bind_CalcScr_overload_2(lua_State *L) {
		if (!_lg_typecheck_CalcScr_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglCanvas::CalcScr(mglPoint p) const function, expected prototype:\nmglPoint mglCanvas::CalcScr(mglPoint p) const\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglCanvas::CalcScr function");
		}
		mglPoint p=*p_ptr;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglCanvas::CalcScr(mglPoint) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		mglPoint stack_lret = self->CalcScr(p);
		mglPoint* lret = new mglPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for mglCanvas::CalcScr
	static int _bind_CalcScr(lua_State *L) {
		if (_lg_typecheck_CalcScr_overload_1(L)) return _bind_CalcScr_overload_1(L);
		if (_lg_typecheck_CalcScr_overload_2(L)) return _bind_CalcScr_overload_2(L);

		luaL_error(L, "error in function CalcScr, cannot match any of the overloads for function CalcScr:\n  CalcScr(mglPoint, int *, int *)\n  CalcScr(mglPoint)\n");
		return 0;
	}

	// void mglCanvas::SetObjId(long id)
	static int _bind_SetObjId(lua_State *L) {
		if (!_lg_typecheck_SetObjId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetObjId(long id) function, expected prototype:\nvoid mglCanvas::SetObjId(long id)\nClass arguments details:\n");
		}

		long id=(long)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetObjId(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetObjId(id);

		return 0;
	}

	// int mglCanvas::GetObjId(long xs, long ys) const
	static int _bind_GetObjId(lua_State *L) {
		if (!_lg_typecheck_GetObjId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::GetObjId(long xs, long ys) const function, expected prototype:\nint mglCanvas::GetObjId(long xs, long ys) const\nClass arguments details:\n");
		}

		long xs=(long)lua_tointeger(L,2);
		long ys=(long)lua_tointeger(L,3);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::GetObjId(long, long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetObjId(xs, ys);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvas::GetSplId(long xs, long ys) const
	static int _bind_GetSplId(lua_State *L) {
		if (!_lg_typecheck_GetSplId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::GetSplId(long xs, long ys) const function, expected prototype:\nint mglCanvas::GetSplId(long xs, long ys) const\nClass arguments details:\n");
		}

		long xs=(long)lua_tointeger(L,2);
		long ys=(long)lua_tointeger(L,3);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::GetSplId(long, long) const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetSplId(xs, ys);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvas::IsActive(int xs, int ys, int & n)
	static int _bind_IsActive(lua_State *L) {
		if (!_lg_typecheck_IsActive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::IsActive(int xs, int ys, int & n) function, expected prototype:\nint mglCanvas::IsActive(int xs, int ys, int & n)\nClass arguments details:\n");
		}

		int xs=(int)lua_tointeger(L,2);
		int ys=(int)lua_tointeger(L,3);
		int n=(int)lua_tointeger(L,4);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::IsActive(int, int, int &). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->IsActive(xs, ys, n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvas::NewFrame()
	static int _bind_NewFrame(lua_State *L) {
		if (!_lg_typecheck_NewFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::NewFrame() function, expected prototype:\nint mglCanvas::NewFrame()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::NewFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->NewFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvas::EndFrame()
	static int _bind_EndFrame(lua_State *L) {
		if (!_lg_typecheck_EndFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::EndFrame() function, expected prototype:\nvoid mglCanvas::EndFrame()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::EndFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->EndFrame();

		return 0;
	}

	// int mglCanvas::GetNumFrame() const
	static int _bind_GetNumFrame(lua_State *L) {
		if (!_lg_typecheck_GetNumFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::GetNumFrame() const function, expected prototype:\nint mglCanvas::GetNumFrame() const\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::GetNumFrame() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->GetNumFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvas::ResetFrames()
	static int _bind_ResetFrames(lua_State *L) {
		if (!_lg_typecheck_ResetFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::ResetFrames() function, expected prototype:\nvoid mglCanvas::ResetFrames()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::ResetFrames(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ResetFrames();

		return 0;
	}

	// void mglCanvas::DelFrame(long i)
	static int _bind_DelFrame(lua_State *L) {
		if (!_lg_typecheck_DelFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::DelFrame(long i) function, expected prototype:\nvoid mglCanvas::DelFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::DelFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->DelFrame(i);

		return 0;
	}

	// void mglCanvas::GetFrame(long i)
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::GetFrame(long i) function, expected prototype:\nvoid mglCanvas::GetFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::GetFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->GetFrame(i);

		return 0;
	}

	// void mglCanvas::SetFrame(long i)
	static int _bind_SetFrame(lua_State *L) {
		if (!_lg_typecheck_SetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetFrame(long i) function, expected prototype:\nvoid mglCanvas::SetFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetFrame(i);

		return 0;
	}

	// void mglCanvas::ShowFrame(long i)
	static int _bind_ShowFrame(lua_State *L) {
		if (!_lg_typecheck_ShowFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::ShowFrame(long i) function, expected prototype:\nvoid mglCanvas::ShowFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::ShowFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->ShowFrame(i);

		return 0;
	}

	// void mglCanvas::StartGIF(const char * fname, int ms = 100)
	static int _bind_StartGIF(lua_State *L) {
		if (!_lg_typecheck_StartGIF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::StartGIF(const char * fname, int ms = 100) function, expected prototype:\nvoid mglCanvas::StartGIF(const char * fname, int ms = 100)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		int ms=luatop>2 ? (int)lua_tointeger(L,3) : (int)100;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::StartGIF(const char *, int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->StartGIF(fname, ms);

		return 0;
	}

	// void mglCanvas::CloseGIF()
	static int _bind_CloseGIF(lua_State *L) {
		if (!_lg_typecheck_CloseGIF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::CloseGIF() function, expected prototype:\nvoid mglCanvas::CloseGIF()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::CloseGIF(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->CloseGIF();

		return 0;
	}

	// void mglCanvas::Finish(bool fast = true)
	static int _bind_Finish(lua_State *L) {
		if (!_lg_typecheck_Finish(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Finish(bool fast = true) function, expected prototype:\nvoid mglCanvas::Finish(bool fast = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool fast=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Finish(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Finish(fast);

		return 0;
	}

	// bool mglCanvas::ExportMGLD(const char * fname, const char * descr = 0)
	static int _bind_ExportMGLD(lua_State *L) {
		if (!_lg_typecheck_ExportMGLD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglCanvas::ExportMGLD(const char * fname, const char * descr = 0) function, expected prototype:\nbool mglCanvas::ExportMGLD(const char * fname, const char * descr = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		const char * descr=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglCanvas::ExportMGLD(const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->ExportMGLD(fname, descr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglCanvas::ImportMGLD(const char * fname, bool add = false)
	static int _bind_ImportMGLD(lua_State *L) {
		if (!_lg_typecheck_ImportMGLD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglCanvas::ImportMGLD(const char * fname, bool add = false) function, expected prototype:\nbool mglCanvas::ImportMGLD(const char * fname, bool add = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * fname=(const char *)lua_tostring(L,2);
		bool add=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglCanvas::ImportMGLD(const char *, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->ImportMGLD(fname, add);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglCanvas::WriteJSON(const char * fname)
	static int _bind_WriteJSON(lua_State *L) {
		if (!_lg_typecheck_WriteJSON(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglCanvas::WriteJSON(const char * fname) function, expected prototype:\nbool mglCanvas::WriteJSON(const char * fname)\nClass arguments details:\n");
		}

		const char * fname=(const char *)lua_tostring(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglCanvas::WriteJSON(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->WriteJSON(fname);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglCanvas::SetTranspType(int val)
	static int _bind_SetTranspType(lua_State *L) {
		if (!_lg_typecheck_SetTranspType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetTranspType(int val) function, expected prototype:\nvoid mglCanvas::SetTranspType(int val)\nClass arguments details:\n");
		}

		int val=(int)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetTranspType(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTranspType(val);

		return 0;
	}

	// void mglCanvas::Fog(double d, double dz = 0.25)
	static int _bind_Fog(lua_State *L) {
		if (!_lg_typecheck_Fog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Fog(double d, double dz = 0.25) function, expected prototype:\nvoid mglCanvas::Fog(double d, double dz = 0.25)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double d=(double)lua_tonumber(L,2);
		double dz=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.25;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Fog(double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Fog(d, dz);

		return 0;
	}

	// void mglCanvas::Light(int n, bool enable)
	static int _bind_Light(lua_State *L) {
		if (!_lg_typecheck_Light(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Light(int n, bool enable) function, expected prototype:\nvoid mglCanvas::Light(int n, bool enable)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Light(int, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Light(n, enable);

		return 0;
	}

	// void mglCanvas::AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)
	static int _bind_AddLight_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddLight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0) function, expected prototype:\nvoid mglCanvas::AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)\nClass arguments details:\narg 2 ID = 56902440\narg 3 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		int n=(int)lua_tointeger(L,2);
		mglPoint* r_ptr=(Luna< mglPoint >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglCanvas::AddLight function");
		}
		mglPoint r=*r_ptr;
		mglPoint* d_ptr=(Luna< mglPoint >::check(L,4));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglCanvas::AddLight function");
		}
		mglPoint d=*d_ptr;
		char c=luatop>4 ? (char)lua_tointeger(L,5) : (char)'w';
		double bright=luatop>5 ? (double)lua_tonumber(L,6) : (double)0.5;
		double ap=luatop>6 ? (double)lua_tonumber(L,7) : (double)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::AddLight(int, mglPoint, mglPoint, char, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->AddLight(n, r, d, c, bright, ap);

		return 0;
	}

	// void mglCanvas::AddLight(int n, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)
	static int _bind_AddLight_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddLight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::AddLight(int n, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0) function, expected prototype:\nvoid mglCanvas::AddLight(int n, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)\nClass arguments details:\narg 2 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		int n=(int)lua_tointeger(L,2);
		mglPoint* d_ptr=(Luna< mglPoint >::check(L,3));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglCanvas::AddLight function");
		}
		mglPoint d=*d_ptr;
		char c=luatop>3 ? (char)lua_tointeger(L,4) : (char)'w';
		double bright=luatop>4 ? (double)lua_tonumber(L,5) : (double)0.5;
		double ap=luatop>5 ? (double)lua_tonumber(L,6) : (double)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::AddLight(int, mglPoint, char, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->AddLight(n, d, c, bright, ap);

		return 0;
	}

	// Overload binder for mglCanvas::AddLight
	static int _bind_AddLight(lua_State *L) {
		if (_lg_typecheck_AddLight_overload_1(L)) return _bind_AddLight_overload_1(L);
		if (_lg_typecheck_AddLight_overload_2(L)) return _bind_AddLight_overload_2(L);

		luaL_error(L, "error in function AddLight, cannot match any of the overloads for function AddLight:\n  AddLight(int, mglPoint, mglPoint, char, double, double)\n  AddLight(int, mglPoint, char, double, double)\n");
		return 0;
	}

	// void mglCanvas::SetTicksVal(char dir, const char * lbl, bool add = false)
	static int _bind_SetTicksVal_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetTicksVal_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetTicksVal(char dir, const char * lbl, bool add = false) function, expected prototype:\nvoid mglCanvas::SetTicksVal(char dir, const char * lbl, bool add = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		const char * lbl=(const char *)lua_tostring(L,3);
		bool add=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetTicksVal(char, const char *, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTicksVal(dir, lbl, add);

		return 0;
	}

	// void mglCanvas::SetTicksVal(char dir, const mglDataA * v, const char * lbl, bool add = false)
	static int _bind_SetTicksVal_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetTicksVal_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetTicksVal(char dir, const mglDataA * v, const char * lbl, bool add = false) function, expected prototype:\nvoid mglCanvas::SetTicksVal(char dir, const mglDataA * v, const char * lbl, bool add = false)\nClass arguments details:\narg 2 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		const mglDataA* v=(Luna< mglDataA >::check(L,3));
		const char * lbl=(const char *)lua_tostring(L,4);
		bool add=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetTicksVal(char, const mglDataA *, const char *, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTicksVal(dir, v, lbl, add);

		return 0;
	}

	// Overload binder for mglCanvas::SetTicksVal
	static int _bind_SetTicksVal(lua_State *L) {
		if (_lg_typecheck_SetTicksVal_overload_1(L)) return _bind_SetTicksVal_overload_1(L);
		if (_lg_typecheck_SetTicksVal_overload_2(L)) return _bind_SetTicksVal_overload_2(L);

		luaL_error(L, "error in function SetTicksVal, cannot match any of the overloads for function SetTicksVal:\n  SetTicksVal(char, const char *, bool)\n  SetTicksVal(char, const mglDataA *, const char *, bool)\n");
		return 0;
	}

	// void mglCanvas::SetTickTempl(char dir, const char * t)
	static int _bind_SetTickTempl(lua_State *L) {
		if (!_lg_typecheck_SetTickTempl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetTickTempl(char dir, const char * t) function, expected prototype:\nvoid mglCanvas::SetTickTempl(char dir, const char * t)\nClass arguments details:\n");
		}

		char dir=(char)lua_tointeger(L,2);
		const char * t=(const char *)lua_tostring(L,3);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetTickTempl(char, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTickTempl(dir, t);

		return 0;
	}

	// void mglCanvas::SetTickTime(char dir, double d = 0, const char * t = "")
	static int _bind_SetTickTime(lua_State *L) {
		if (!_lg_typecheck_SetTickTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetTickTime(char dir, double d = 0, const char * t = \"\") function, expected prototype:\nvoid mglCanvas::SetTickTime(char dir, double d = 0, const char * t = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		double d=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		const char * t=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)"";

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetTickTime(char, double, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTickTime(dir, d, t);

		return 0;
	}

	// void mglCanvas::SetTicks(char dir, double d = 0, int ns = 0, double org = NAN)
	static int _bind_SetTicks(lua_State *L) {
		if (!_lg_typecheck_SetTicks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetTicks(char dir, double d = 0, int ns = 0, double org = NAN) function, expected prototype:\nvoid mglCanvas::SetTicks(char dir, double d = 0, int ns = 0, double org = NAN)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		double d=luatop>2 ? (double)lua_tonumber(L,3) : (double)0;
		int ns=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		double org=luatop>4 ? (double)lua_tonumber(L,5) : (double)NAN;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetTicks(char, double, int, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTicks(dir, d, ns, org);

		return 0;
	}

	// void mglCanvas::AdjustTicks(const char * dir = "xyzc", bool force = false)
	static int _bind_AdjustTicks(lua_State *L) {
		if (!_lg_typecheck_AdjustTicks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::AdjustTicks(const char * dir = \"xyzc\", bool force = false) function, expected prototype:\nvoid mglCanvas::AdjustTicks(const char * dir = \"xyzc\", bool force = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * dir=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)"xyzc";
		bool force=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::AdjustTicks(const char *, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->AdjustTicks(dir, force);

		return 0;
	}

	// void mglCanvas::SetTuneTicks(int tune, double pos = 1.15)
	static int _bind_SetTuneTicks(lua_State *L) {
		if (!_lg_typecheck_SetTuneTicks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetTuneTicks(int tune, double pos = 1.15) function, expected prototype:\nvoid mglCanvas::SetTuneTicks(int tune, double pos = 1.15)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int tune=(int)lua_tointeger(L,2);
		double pos=luatop>2 ? (double)lua_tonumber(L,3) : (double)1.15;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetTuneTicks(int, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTuneTicks(tune, pos);

		return 0;
	}

	// void mglCanvas::SetAxisStl(const char * stl = "k", const char * tck = 0, const char * sub = 0)
	static int _bind_SetAxisStl(lua_State *L) {
		if (!_lg_typecheck_SetAxisStl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetAxisStl(const char * stl = \"k\", const char * tck = 0, const char * sub = 0) function, expected prototype:\nvoid mglCanvas::SetAxisStl(const char * stl = \"k\", const char * tck = 0, const char * sub = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * stl=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)"k";
		const char * tck=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)0;
		const char * sub=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetAxisStl(const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetAxisStl(stl, tck, sub);

		return 0;
	}

	// void mglCanvas::SetTickLen(double tlen, double stt = 1.)
	static int _bind_SetTickLen(lua_State *L) {
		if (!_lg_typecheck_SetTickLen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetTickLen(double tlen, double stt = 1.) function, expected prototype:\nvoid mglCanvas::SetTickLen(double tlen, double stt = 1.)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double tlen=(double)lua_tonumber(L,2);
		double stt=luatop>2 ? (double)lua_tonumber(L,3) : (double)1.;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetTickLen(double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTickLen(tlen, stt);

		return 0;
	}

	// void mglCanvas::Box(const char * col = 0, bool ticks = true)
	static int _bind_Box(lua_State *L) {
		if (!_lg_typecheck_Box(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Box(const char * col = 0, bool ticks = true) function, expected prototype:\nvoid mglCanvas::Box(const char * col = 0, bool ticks = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * col=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)0;
		bool ticks=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Box(const char *, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Box(col, ticks);

		return 0;
	}

	// void mglCanvas::Axis(const char * dir = "xyzt", const char * stl = "", const char * opt = "")
	static int _bind_Axis(lua_State *L) {
		if (!_lg_typecheck_Axis(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Axis(const char * dir = \"xyzt\", const char * stl = \"\", const char * opt = \"\") function, expected prototype:\nvoid mglCanvas::Axis(const char * dir = \"xyzt\", const char * stl = \"\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * dir=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)"xyzt";
		const char * stl=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)"";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)"";

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Axis(const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Axis(dir, stl, opt);

		return 0;
	}

	// void mglCanvas::Grid(const char * dir = "xyzt", const char * pen = "B-", const char * opt = "")
	static int _bind_Grid(lua_State *L) {
		if (!_lg_typecheck_Grid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Grid(const char * dir = \"xyzt\", const char * pen = \"B-\", const char * opt = \"\") function, expected prototype:\nvoid mglCanvas::Grid(const char * dir = \"xyzt\", const char * pen = \"B-\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * dir=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)"xyzt";
		const char * pen=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)"B-";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)"";

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Grid(const char *, const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Grid(dir, pen, opt);

		return 0;
	}

	// void mglCanvas::Label(char dir, const char * text, double pos = 0, const char * opt = "")
	static int _bind_Label(lua_State *L) {
		if (!_lg_typecheck_Label(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Label(char dir, const char * text, double pos = 0, const char * opt = \"\") function, expected prototype:\nvoid mglCanvas::Label(char dir, const char * text, double pos = 0, const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char dir=(char)lua_tointeger(L,2);
		const char * text=(const char *)lua_tostring(L,3);
		double pos=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : (const char*)"";

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Label(char, const char *, double, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Label(dir, text, pos, opt);

		return 0;
	}

	// void mglCanvas::Colorbar(const char * sch = 0)
	static int _bind_Colorbar_overload_1(lua_State *L) {
		if (!_lg_typecheck_Colorbar_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Colorbar(const char * sch = 0) function, expected prototype:\nvoid mglCanvas::Colorbar(const char * sch = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * sch=luatop>1 ? (const char *)lua_tostring(L,2) : (const char*)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Colorbar(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Colorbar(sch);

		return 0;
	}

	// void mglCanvas::Colorbar(const char * sch, double x, double y, double w, double h)
	static int _bind_Colorbar_overload_2(lua_State *L) {
		if (!_lg_typecheck_Colorbar_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Colorbar(const char * sch, double x, double y, double w, double h) function, expected prototype:\nvoid mglCanvas::Colorbar(const char * sch, double x, double y, double w, double h)\nClass arguments details:\n");
		}

		const char * sch=(const char *)lua_tostring(L,2);
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		double w=(double)lua_tonumber(L,5);
		double h=(double)lua_tonumber(L,6);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Colorbar(const char *, double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Colorbar(sch, x, y, w, h);

		return 0;
	}

	// void mglCanvas::Colorbar(const mglDataA * v, const char * sch = 0)
	static int _bind_Colorbar_overload_3(lua_State *L) {
		if (!_lg_typecheck_Colorbar_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Colorbar(const mglDataA * v, const char * sch = 0) function, expected prototype:\nvoid mglCanvas::Colorbar(const mglDataA * v, const char * sch = 0)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		int luatop = lua_gettop(L);

		const mglDataA* v=(Luna< mglDataA >::check(L,2));
		const char * sch=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Colorbar(const mglDataA *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Colorbar(v, sch);

		return 0;
	}

	// void mglCanvas::Colorbar(const mglDataA * v, const char * sch, double x, double y, double w, double h)
	static int _bind_Colorbar_overload_4(lua_State *L) {
		if (!_lg_typecheck_Colorbar_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Colorbar(const mglDataA * v, const char * sch, double x, double y, double w, double h) function, expected prototype:\nvoid mglCanvas::Colorbar(const mglDataA * v, const char * sch, double x, double y, double w, double h)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		const mglDataA* v=(Luna< mglDataA >::check(L,2));
		const char * sch=(const char *)lua_tostring(L,3);
		double x=(double)lua_tonumber(L,4);
		double y=(double)lua_tonumber(L,5);
		double w=(double)lua_tonumber(L,6);
		double h=(double)lua_tonumber(L,7);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Colorbar(const mglDataA *, const char *, double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Colorbar(v, sch, x, y, w, h);

		return 0;
	}

	// Overload binder for mglCanvas::Colorbar
	static int _bind_Colorbar(lua_State *L) {
		if (_lg_typecheck_Colorbar_overload_1(L)) return _bind_Colorbar_overload_1(L);
		if (_lg_typecheck_Colorbar_overload_2(L)) return _bind_Colorbar_overload_2(L);
		if (_lg_typecheck_Colorbar_overload_3(L)) return _bind_Colorbar_overload_3(L);
		if (_lg_typecheck_Colorbar_overload_4(L)) return _bind_Colorbar_overload_4(L);

		luaL_error(L, "error in function Colorbar, cannot match any of the overloads for function Colorbar:\n  Colorbar(const char *)\n  Colorbar(const char *, double, double, double, double)\n  Colorbar(const mglDataA *, const char *)\n  Colorbar(const mglDataA *, const char *, double, double, double, double)\n");
		return 0;
	}

	// void mglCanvas::Legend(double x, double y, const char * font = "#", const char * opt = "")
	static int _bind_Legend_overload_1(lua_State *L) {
		if (!_lg_typecheck_Legend_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Legend(double x, double y, const char * font = \"#\", const char * opt = \"\") function, expected prototype:\nvoid mglCanvas::Legend(double x, double y, const char * font = \"#\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		const char * font=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)"#";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : (const char*)"";

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Legend(double, double, const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Legend(x, y, font, opt);

		return 0;
	}

	// void mglCanvas::Legend(int where = 0x3, const char * font = "#", const char * opt = "")
	static int _bind_Legend_overload_2(lua_State *L) {
		if (!_lg_typecheck_Legend_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Legend(int where = 0x3, const char * font = \"#\", const char * opt = \"\") function, expected prototype:\nvoid mglCanvas::Legend(int where = 0x3, const char * font = \"#\", const char * opt = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int where=luatop>1 ? (int)lua_tointeger(L,2) : (int)0x3;
		const char * font=luatop>2 ? (const char *)lua_tostring(L,3) : (const char*)"#";
		const char * opt=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)"";

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Legend(int, const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Legend(where, font, opt);

		return 0;
	}

	// void mglCanvas::Legend(const std::vector< mglText > & leg, int where = 3, const char * font = "#", const char * opt = "")
	static int _bind_Legend_overload_3(lua_State *L) {
		if (!_lg_typecheck_Legend_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Legend(const std::vector< mglText > & leg, int where = 3, const char * font = \"#\", const char * opt = \"\") function, expected prototype:\nvoid mglCanvas::Legend(const std::vector< mglText > & leg, int where = 3, const char * font = \"#\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		int luatop = lua_gettop(L);

		const std::vector< mglText >* leg_ptr=(Luna< std::vector< mglText > >::check(L,2));
		if( !leg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg leg in mglCanvas::Legend function");
		}
		const std::vector< mglText > & leg=*leg_ptr;
		int where=luatop>2 ? (int)lua_tointeger(L,3) : (int)3;
		const char * font=luatop>3 ? (const char *)lua_tostring(L,4) : (const char*)"#";
		const char * opt=luatop>4 ? (const char *)lua_tostring(L,5) : (const char*)"";

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Legend(const std::vector< mglText > &, int, const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Legend(leg, where, font, opt);

		return 0;
	}

	// void mglCanvas::Legend(const std::vector< mglText > & leg, double x, double y, const char * font = "#", const char * opt = "")
	static int _bind_Legend_overload_4(lua_State *L) {
		if (!_lg_typecheck_Legend_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::Legend(const std::vector< mglText > & leg, double x, double y, const char * font = \"#\", const char * opt = \"\") function, expected prototype:\nvoid mglCanvas::Legend(const std::vector< mglText > & leg, double x, double y, const char * font = \"#\", const char * opt = \"\")\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		int luatop = lua_gettop(L);

		const std::vector< mglText >* leg_ptr=(Luna< std::vector< mglText > >::check(L,2));
		if( !leg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg leg in mglCanvas::Legend function");
		}
		const std::vector< mglText > & leg=*leg_ptr;
		double x=(double)lua_tonumber(L,3);
		double y=(double)lua_tonumber(L,4);
		const char * font=luatop>4 ? (const char *)lua_tostring(L,5) : (const char*)"#";
		const char * opt=luatop>5 ? (const char *)lua_tostring(L,6) : (const char*)"";

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::Legend(const std::vector< mglText > &, double, double, const char *, const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->Legend(leg, x, y, font, opt);

		return 0;
	}

	// Overload binder for mglCanvas::Legend
	static int _bind_Legend(lua_State *L) {
		if (_lg_typecheck_Legend_overload_1(L)) return _bind_Legend_overload_1(L);
		if (_lg_typecheck_Legend_overload_2(L)) return _bind_Legend_overload_2(L);
		if (_lg_typecheck_Legend_overload_3(L)) return _bind_Legend_overload_3(L);
		if (_lg_typecheck_Legend_overload_4(L)) return _bind_Legend_overload_4(L);

		luaL_error(L, "error in function Legend, cannot match any of the overloads for function Legend:\n  Legend(double, double, const char *, const char *)\n  Legend(int, const char *, const char *)\n  Legend(const std::vector< mglText > &, int, const char *, const char *)\n  Legend(const std::vector< mglText > &, double, double, const char *, const char *)\n");
		return 0;
	}

	// void mglCanvas::SetLegendMarks(int num = 1)
	static int _bind_SetLegendMarks(lua_State *L) {
		if (!_lg_typecheck_SetLegendMarks(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetLegendMarks(int num = 1) function, expected prototype:\nvoid mglCanvas::SetLegendMarks(int num = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int num=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetLegendMarks(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetLegendMarks(num);

		return 0;
	}

	// void mglCanvas::StartAutoGroup(const char * arg1)
	static int _bind_StartAutoGroup(lua_State *L) {
		if (!_lg_typecheck_StartAutoGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::StartAutoGroup(const char * arg1) function, expected prototype:\nvoid mglCanvas::StartAutoGroup(const char * arg1)\nClass arguments details:\n");
		}

		const char * _arg1=(const char *)lua_tostring(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::StartAutoGroup(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->StartAutoGroup(_arg1);

		return 0;
	}

	// void mglCanvas::EndGroup()
	static int _bind_EndGroup(lua_State *L) {
		if (!_lg_typecheck_EndGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::EndGroup() function, expected prototype:\nvoid mglCanvas::EndGroup()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::EndGroup(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->EndGroup();

		return 0;
	}

	// mglColor mglCanvas::GetColor(const mglPrim & p)
	static int _bind_GetColor(lua_State *L) {
		if (!_lg_typecheck_GetColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglColor mglCanvas::GetColor(const mglPrim & p) function, expected prototype:\nmglColor mglCanvas::GetColor(const mglPrim & p)\nClass arguments details:\narg 1 ID = 88935222\n");
		}

		const mglPrim* p_ptr=(Luna< mglPrim >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglCanvas::GetColor function");
		}
		const mglPrim & p=*p_ptr;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglColor mglCanvas::GetColor(const mglPrim &). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		mglColor stack_lret = self->GetColor(p);
		mglColor* lret = new mglColor(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglColor >::push(L,lret,true);

		return 1;
	}

	// void mglCanvas::SetTickShift(mglPoint p)
	static int _bind_SetTickShift(lua_State *L) {
		if (!_lg_typecheck_SetTickShift(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::SetTickShift(mglPoint p) function, expected prototype:\nvoid mglCanvas::SetTickShift(mglPoint p)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* p_ptr=(Luna< mglPoint >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglCanvas::SetTickShift function");
		}
		mglPoint p=*p_ptr;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::SetTickShift(mglPoint). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->SetTickShift(p);

		return 0;
	}

	// void mglCanvas::base_SetAmbient(double bright = 0.5)
	static int _bind_base_SetAmbient(lua_State *L) {
		if (!_lg_typecheck_base_SetAmbient(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_SetAmbient(double bright = 0.5) function, expected prototype:\nvoid mglCanvas::base_SetAmbient(double bright = 0.5)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double bright=luatop>1 ? (double)lua_tonumber(L,2) : (double)0.5;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_SetAmbient(double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::SetAmbient(bright);

		return 0;
	}

	// bool mglCanvas::base_Alpha(bool enable)
	static int _bind_base_Alpha(lua_State *L) {
		if (!_lg_typecheck_base_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglCanvas::base_Alpha(bool enable) function, expected prototype:\nbool mglCanvas::base_Alpha(bool enable)\nClass arguments details:\n");
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglCanvas::base_Alpha(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		bool lret = self->mglCanvas::Alpha(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglCanvas::base_SetQuality(int qual = 2)
	static int _bind_base_SetQuality(lua_State *L) {
		if (!_lg_typecheck_base_SetQuality(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_SetQuality(int qual = 2) function, expected prototype:\nvoid mglCanvas::base_SetQuality(int qual = 2)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int qual=luatop>1 ? (int)lua_tointeger(L,2) : (int)2;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_SetQuality(int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::SetQuality(qual);

		return 0;
	}

	// void mglCanvas::base_Reserve(long n)
	static int _bind_base_Reserve(lua_State *L) {
		if (!_lg_typecheck_base_Reserve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_Reserve(long n) function, expected prototype:\nvoid mglCanvas::base_Reserve(long n)\nClass arguments details:\n");
		}

		long n=(long)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_Reserve(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::Reserve(n);

		return 0;
	}

	// void mglCanvas::base_View(double tetx, double tetz, double tety = 0)
	static int _bind_base_View(lua_State *L) {
		if (!_lg_typecheck_base_View(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_View(double tetx, double tetz, double tety = 0) function, expected prototype:\nvoid mglCanvas::base_View(double tetx, double tetz, double tety = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double tetx=(double)lua_tonumber(L,2);
		double tetz=(double)lua_tonumber(L,3);
		double tety=luatop>3 ? (double)lua_tonumber(L,4) : (double)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_View(double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::View(tetx, tetz, tety);

		return 0;
	}

	// void mglCanvas::base_Zoom(double x1, double y1, double x2, double y2)
	static int _bind_base_Zoom(lua_State *L) {
		if (!_lg_typecheck_base_Zoom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_Zoom(double x1, double y1, double x2, double y2) function, expected prototype:\nvoid mglCanvas::base_Zoom(double x1, double y1, double x2, double y2)\nClass arguments details:\n");
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_Zoom(double, double, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::Zoom(x1, y1, x2, y2);

		return 0;
	}

	// void mglCanvas::base_Clf(mglColor back = WC)
	static int _bind_base_Clf(lua_State *L) {
		if (!_lg_typecheck_base_Clf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_Clf(mglColor back = WC) function, expected prototype:\nvoid mglCanvas::base_Clf(mglColor back = WC)\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		int luatop = lua_gettop(L);

		mglColor* back_ptr=luatop>1 ? (Luna< mglColor >::check(L,2)) : NULL;
		if( luatop>1 && !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in mglCanvas::base_Clf function");
		}
		mglColor back=luatop>1 ? *back_ptr : (mglColor)WC;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_Clf(mglColor). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::Clf(back);

		return 0;
	}

	// void mglCanvas::base_SetSize(int w, int h)
	static int _bind_base_SetSize(lua_State *L) {
		if (!_lg_typecheck_base_SetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_SetSize(int w, int h) function, expected prototype:\nvoid mglCanvas::base_SetSize(int w, int h)\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_SetSize(int, int). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::SetSize(w, h);

		return 0;
	}

	// double mglCanvas::base_GetRatio() const
	static int _bind_base_GetRatio(lua_State *L) {
		if (!_lg_typecheck_base_GetRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglCanvas::base_GetRatio() const function, expected prototype:\ndouble mglCanvas::base_GetRatio() const\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglCanvas::base_GetRatio() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		double lret = self->mglCanvas::GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * mglCanvas::base_GetBits()
	static int _bind_base_GetBits(lua_State *L) {
		if (!_lg_typecheck_base_GetBits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * mglCanvas::base_GetBits() function, expected prototype:\nconst unsigned char * mglCanvas::base_GetBits()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * mglCanvas::base_GetBits(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		const unsigned char * lret = self->mglCanvas::GetBits();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int mglCanvas::base_GetWidth() const
	static int _bind_base_GetWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::base_GetWidth() const function, expected prototype:\nint mglCanvas::base_GetWidth() const\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::base_GetWidth() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->mglCanvas::GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvas::base_GetHeight() const
	static int _bind_base_GetHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::base_GetHeight() const function, expected prototype:\nint mglCanvas::base_GetHeight() const\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::base_GetHeight() const. Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->mglCanvas::GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvas::base_NewFrame()
	static int _bind_base_NewFrame(lua_State *L) {
		if (!_lg_typecheck_base_NewFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglCanvas::base_NewFrame() function, expected prototype:\nint mglCanvas::base_NewFrame()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglCanvas::base_NewFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		int lret = self->mglCanvas::NewFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvas::base_EndFrame()
	static int _bind_base_EndFrame(lua_State *L) {
		if (!_lg_typecheck_base_EndFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_EndFrame() function, expected prototype:\nvoid mglCanvas::base_EndFrame()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_EndFrame(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::EndFrame();

		return 0;
	}

	// void mglCanvas::base_ResetFrames()
	static int _bind_base_ResetFrames(lua_State *L) {
		if (!_lg_typecheck_base_ResetFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_ResetFrames() function, expected prototype:\nvoid mglCanvas::base_ResetFrames()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_ResetFrames(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::ResetFrames();

		return 0;
	}

	// void mglCanvas::base_DelFrame(long i)
	static int _bind_base_DelFrame(lua_State *L) {
		if (!_lg_typecheck_base_DelFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_DelFrame(long i) function, expected prototype:\nvoid mglCanvas::base_DelFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_DelFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::DelFrame(i);

		return 0;
	}

	// void mglCanvas::base_SetFrame(long i)
	static int _bind_base_SetFrame(lua_State *L) {
		if (!_lg_typecheck_base_SetFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_SetFrame(long i) function, expected prototype:\nvoid mglCanvas::base_SetFrame(long i)\nClass arguments details:\n");
		}

		long i=(long)lua_tointeger(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_SetFrame(long). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::SetFrame(i);

		return 0;
	}

	// void mglCanvas::base_Finish(bool fast = true)
	static int _bind_base_Finish(lua_State *L) {
		if (!_lg_typecheck_base_Finish(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_Finish(bool fast = true) function, expected prototype:\nvoid mglCanvas::base_Finish(bool fast = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool fast=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_Finish(bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::Finish(fast);

		return 0;
	}

	// void mglCanvas::base_Fog(double d, double dz = 0.25)
	static int _bind_base_Fog(lua_State *L) {
		if (!_lg_typecheck_base_Fog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_Fog(double d, double dz = 0.25) function, expected prototype:\nvoid mglCanvas::base_Fog(double d, double dz = 0.25)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double d=(double)lua_tonumber(L,2);
		double dz=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.25;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_Fog(double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::Fog(d, dz);

		return 0;
	}

	// void mglCanvas::base_Light(int n, bool enable)
	static int _bind_base_Light(lua_State *L) {
		if (!_lg_typecheck_base_Light(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_Light(int n, bool enable) function, expected prototype:\nvoid mglCanvas::base_Light(int n, bool enable)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_Light(int, bool). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::Light(n, enable);

		return 0;
	}

	// void mglCanvas::base_AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)
	static int _bind_base_AddLight(lua_State *L) {
		if (!_lg_typecheck_base_AddLight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0) function, expected prototype:\nvoid mglCanvas::base_AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)\nClass arguments details:\narg 2 ID = 56902440\narg 3 ID = 56902440\n");
		}

		int luatop = lua_gettop(L);

		int n=(int)lua_tointeger(L,2);
		mglPoint* r_ptr=(Luna< mglPoint >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglCanvas::base_AddLight function");
		}
		mglPoint r=*r_ptr;
		mglPoint* d_ptr=(Luna< mglPoint >::check(L,4));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglCanvas::base_AddLight function");
		}
		mglPoint d=*d_ptr;
		char c=luatop>4 ? (char)lua_tointeger(L,5) : (char)'w';
		double bright=luatop>5 ? (double)lua_tonumber(L,6) : (double)0.5;
		double ap=luatop>6 ? (double)lua_tonumber(L,7) : (double)0;

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_AddLight(int, mglPoint, mglPoint, char, double, double). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::AddLight(n, r, d, c, bright, ap);

		return 0;
	}

	// void mglCanvas::base_StartAutoGroup(const char * arg1)
	static int _bind_base_StartAutoGroup(lua_State *L) {
		if (!_lg_typecheck_base_StartAutoGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_StartAutoGroup(const char * arg1) function, expected prototype:\nvoid mglCanvas::base_StartAutoGroup(const char * arg1)\nClass arguments details:\n");
		}

		const char * _arg1=(const char *)lua_tostring(L,2);

		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_StartAutoGroup(const char *). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::StartAutoGroup(_arg1);

		return 0;
	}

	// void mglCanvas::base_EndGroup()
	static int _bind_base_EndGroup(lua_State *L) {
		if (!_lg_typecheck_base_EndGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglCanvas::base_EndGroup() function, expected prototype:\nvoid mglCanvas::base_EndGroup()\nClass arguments details:\n");
		}


		mglCanvas* self=Luna< mglBase >::checkSubType< mglCanvas >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglCanvas::base_EndGroup(). Got : '%s'",typeid(Luna< mglBase >::check(L,1)).name());
		}
		self->mglCanvas::EndGroup();

		return 0;
	}


	// Operator binds:

};

mglCanvas* LunaTraits< mglCanvas >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglCanvas::_bind_ctor(L);
}

void LunaTraits< mglCanvas >::_bind_dtor(mglCanvas* obj) {
	delete obj;
}

const char LunaTraits< mglCanvas >::className[] = "mglCanvas";
const char LunaTraits< mglCanvas >::fullName[] = "mglCanvas";
const char LunaTraits< mglCanvas >::moduleName[] = "mathgl";
const char* LunaTraits< mglCanvas >::parents[] = {"mathgl.mglBase", 0};
const int LunaTraits< mglCanvas >::hash = 79023435;
const int LunaTraits< mglCanvas >::uniqueIDs[] = {88502113,0};

luna_RegType LunaTraits< mglCanvas >::methods[] = {
	{"DefaultPlotParam", &luna_wrapper_mglCanvas::_bind_DefaultPlotParam},
	{"View", &luna_wrapper_mglCanvas::_bind_View},
	{"Zoom", &luna_wrapper_mglCanvas::_bind_Zoom},
	{"Restore", &luna_wrapper_mglCanvas::_bind_Restore},
	{"Identity", &luna_wrapper_mglCanvas::_bind_Identity},
	{"Push", &luna_wrapper_mglCanvas::_bind_Push},
	{"SetPlotFactor", &luna_wrapper_mglCanvas::_bind_SetPlotFactor},
	{"GetPlotFactor", &luna_wrapper_mglCanvas::_bind_GetPlotFactor},
	{"Pop", &luna_wrapper_mglCanvas::_bind_Pop},
	{"Clf", &luna_wrapper_mglCanvas::_bind_Clf},
	{"StickPlot", &luna_wrapper_mglCanvas::_bind_StickPlot},
	{"InPlot", &luna_wrapper_mglCanvas::_bind_InPlot},
	{"Title", &luna_wrapper_mglCanvas::_bind_Title},
	{"Aspect", &luna_wrapper_mglCanvas::_bind_Aspect},
	{"Rotate", &luna_wrapper_mglCanvas::_bind_Rotate},
	{"RotateN", &luna_wrapper_mglCanvas::_bind_RotateN},
	{"Perspective", &luna_wrapper_mglCanvas::_bind_Perspective},
	{"SetSize", &luna_wrapper_mglCanvas::_bind_SetSize},
	{"GetRatio", &luna_wrapper_mglCanvas::_bind_GetRatio},
	{"GetBits", &luna_wrapper_mglCanvas::_bind_GetBits},
	{"GetRGBA", &luna_wrapper_mglCanvas::_bind_GetRGBA},
	{"GetWidth", &luna_wrapper_mglCanvas::_bind_GetWidth},
	{"GetHeight", &luna_wrapper_mglCanvas::_bind_GetHeight},
	{"Combine", &luna_wrapper_mglCanvas::_bind_Combine},
	{"MPI_Send", &luna_wrapper_mglCanvas::_bind_MPI_Send},
	{"MPI_Recv", &luna_wrapper_mglCanvas::_bind_MPI_Recv},
	{"GetDelay", &luna_wrapper_mglCanvas::_bind_GetDelay},
	{"SetDelay", &luna_wrapper_mglCanvas::_bind_SetDelay},
	{"CalcXYZ", &luna_wrapper_mglCanvas::_bind_CalcXYZ},
	{"CalcScr", &luna_wrapper_mglCanvas::_bind_CalcScr},
	{"SetObjId", &luna_wrapper_mglCanvas::_bind_SetObjId},
	{"GetObjId", &luna_wrapper_mglCanvas::_bind_GetObjId},
	{"GetSplId", &luna_wrapper_mglCanvas::_bind_GetSplId},
	{"IsActive", &luna_wrapper_mglCanvas::_bind_IsActive},
	{"NewFrame", &luna_wrapper_mglCanvas::_bind_NewFrame},
	{"EndFrame", &luna_wrapper_mglCanvas::_bind_EndFrame},
	{"GetNumFrame", &luna_wrapper_mglCanvas::_bind_GetNumFrame},
	{"ResetFrames", &luna_wrapper_mglCanvas::_bind_ResetFrames},
	{"DelFrame", &luna_wrapper_mglCanvas::_bind_DelFrame},
	{"GetFrame", &luna_wrapper_mglCanvas::_bind_GetFrame},
	{"SetFrame", &luna_wrapper_mglCanvas::_bind_SetFrame},
	{"ShowFrame", &luna_wrapper_mglCanvas::_bind_ShowFrame},
	{"StartGIF", &luna_wrapper_mglCanvas::_bind_StartGIF},
	{"CloseGIF", &luna_wrapper_mglCanvas::_bind_CloseGIF},
	{"Finish", &luna_wrapper_mglCanvas::_bind_Finish},
	{"ExportMGLD", &luna_wrapper_mglCanvas::_bind_ExportMGLD},
	{"ImportMGLD", &luna_wrapper_mglCanvas::_bind_ImportMGLD},
	{"WriteJSON", &luna_wrapper_mglCanvas::_bind_WriteJSON},
	{"SetTranspType", &luna_wrapper_mglCanvas::_bind_SetTranspType},
	{"Fog", &luna_wrapper_mglCanvas::_bind_Fog},
	{"Light", &luna_wrapper_mglCanvas::_bind_Light},
	{"AddLight", &luna_wrapper_mglCanvas::_bind_AddLight},
	{"SetTicksVal", &luna_wrapper_mglCanvas::_bind_SetTicksVal},
	{"SetTickTempl", &luna_wrapper_mglCanvas::_bind_SetTickTempl},
	{"SetTickTime", &luna_wrapper_mglCanvas::_bind_SetTickTime},
	{"SetTicks", &luna_wrapper_mglCanvas::_bind_SetTicks},
	{"AdjustTicks", &luna_wrapper_mglCanvas::_bind_AdjustTicks},
	{"SetTuneTicks", &luna_wrapper_mglCanvas::_bind_SetTuneTicks},
	{"SetAxisStl", &luna_wrapper_mglCanvas::_bind_SetAxisStl},
	{"SetTickLen", &luna_wrapper_mglCanvas::_bind_SetTickLen},
	{"Box", &luna_wrapper_mglCanvas::_bind_Box},
	{"Axis", &luna_wrapper_mglCanvas::_bind_Axis},
	{"Grid", &luna_wrapper_mglCanvas::_bind_Grid},
	{"Label", &luna_wrapper_mglCanvas::_bind_Label},
	{"Colorbar", &luna_wrapper_mglCanvas::_bind_Colorbar},
	{"Legend", &luna_wrapper_mglCanvas::_bind_Legend},
	{"SetLegendMarks", &luna_wrapper_mglCanvas::_bind_SetLegendMarks},
	{"StartAutoGroup", &luna_wrapper_mglCanvas::_bind_StartAutoGroup},
	{"EndGroup", &luna_wrapper_mglCanvas::_bind_EndGroup},
	{"GetColor", &luna_wrapper_mglCanvas::_bind_GetColor},
	{"SetTickShift", &luna_wrapper_mglCanvas::_bind_SetTickShift},
	{"base_SetAmbient", &luna_wrapper_mglCanvas::_bind_base_SetAmbient},
	{"base_Alpha", &luna_wrapper_mglCanvas::_bind_base_Alpha},
	{"base_SetQuality", &luna_wrapper_mglCanvas::_bind_base_SetQuality},
	{"base_Reserve", &luna_wrapper_mglCanvas::_bind_base_Reserve},
	{"base_View", &luna_wrapper_mglCanvas::_bind_base_View},
	{"base_Zoom", &luna_wrapper_mglCanvas::_bind_base_Zoom},
	{"base_Clf", &luna_wrapper_mglCanvas::_bind_base_Clf},
	{"base_SetSize", &luna_wrapper_mglCanvas::_bind_base_SetSize},
	{"base_GetRatio", &luna_wrapper_mglCanvas::_bind_base_GetRatio},
	{"base_GetBits", &luna_wrapper_mglCanvas::_bind_base_GetBits},
	{"base_GetWidth", &luna_wrapper_mglCanvas::_bind_base_GetWidth},
	{"base_GetHeight", &luna_wrapper_mglCanvas::_bind_base_GetHeight},
	{"base_NewFrame", &luna_wrapper_mglCanvas::_bind_base_NewFrame},
	{"base_EndFrame", &luna_wrapper_mglCanvas::_bind_base_EndFrame},
	{"base_ResetFrames", &luna_wrapper_mglCanvas::_bind_base_ResetFrames},
	{"base_DelFrame", &luna_wrapper_mglCanvas::_bind_base_DelFrame},
	{"base_SetFrame", &luna_wrapper_mglCanvas::_bind_base_SetFrame},
	{"base_Finish", &luna_wrapper_mglCanvas::_bind_base_Finish},
	{"base_Fog", &luna_wrapper_mglCanvas::_bind_base_Fog},
	{"base_Light", &luna_wrapper_mglCanvas::_bind_base_Light},
	{"base_AddLight", &luna_wrapper_mglCanvas::_bind_base_AddLight},
	{"base_StartAutoGroup", &luna_wrapper_mglCanvas::_bind_base_StartAutoGroup},
	{"base_EndGroup", &luna_wrapper_mglCanvas::_bind_base_EndGroup},
	{"fromVoid", &luna_wrapper_mglCanvas::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglCanvas::_bind_asVoid},
	{"getTable", &luna_wrapper_mglCanvas::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglCanvas >::converters[] = {
	{"mglBase", &luna_wrapper_mglCanvas::_cast_from_mglBase},
	{0,0}
};

luna_RegEnumType LunaTraits< mglCanvas >::enumValues[] = {
	{0,0}
};


