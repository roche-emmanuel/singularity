#include <plug_common.h>

#include <luna/wrappers/wrapper_mglCanvasGL.h>

class luna_wrapper_mglCanvasGL {
public:
	typedef Luna< mglCanvasGL > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglCanvasGL* self= (mglCanvasGL*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglCanvasGL >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88502113) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
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
		//mglCanvasGL* ptr= dynamic_cast< mglCanvasGL* >(Luna< mglBase >::check(L,1));
		mglCanvasGL* ptr= luna_caster< mglBase, mglCanvasGL >::cast(Luna< mglBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< mglCanvasGL >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetQuality(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Finish(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_View(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Zoom(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_DelFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fog(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Light_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Light_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddLight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56902440) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clf(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetAmbient(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Reserve(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_ResetFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_StartAutoGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EndGroup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetQuality(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Finish(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_View(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Zoom(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_DelFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Fog(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Light_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Light_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddLight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56902440) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56902440) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clf(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglCanvasGL::mglCanvasGL()
	static mglCanvasGL* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in mglCanvasGL::mglCanvasGL() function, expected prototype:\nmglCanvasGL::mglCanvasGL()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new mglCanvasGL();
	}

	// mglCanvasGL::mglCanvasGL(lua_Table * data)
	static mglCanvasGL* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in mglCanvasGL::mglCanvasGL(lua_Table * data) function, expected prototype:\nmglCanvasGL::mglCanvasGL(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_mglCanvasGL(L,NULL);
	}

	// Overload binder for mglCanvasGL::mglCanvasGL
	static mglCanvasGL* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function mglCanvasGL, cannot match any of the overloads for function mglCanvasGL:\n  mglCanvasGL()\n  mglCanvasGL(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void mglCanvasGL::SetQuality(int qual = 0)
	static int _bind_SetQuality(lua_State *L) {
		if (!_lg_typecheck_SetQuality(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::SetQuality(int qual = 0) function, expected prototype:\nvoid mglCanvasGL::SetQuality(int qual = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int qual=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::SetQuality(int). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetQuality(qual);

		return 0;
	}

	// void mglCanvasGL::Finish(bool fast = true)
	static int _bind_Finish(lua_State *L) {
		if (!_lg_typecheck_Finish(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::Finish(bool fast = true) function, expected prototype:\nvoid mglCanvasGL::Finish(bool fast = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool fast=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::Finish(bool). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Finish(fast);

		return 0;
	}

	// void mglCanvasGL::SetSize(int w, int h)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::SetSize(int w, int h) function, expected prototype:\nvoid mglCanvasGL::SetSize(int w, int h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::SetSize(int, int). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSize(w, h);

		return 0;
	}

	// void mglCanvasGL::View(double tetx, double tetz, double tety)
	static int _bind_View(lua_State *L) {
		if (!_lg_typecheck_View(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::View(double tetx, double tetz, double tety) function, expected prototype:\nvoid mglCanvasGL::View(double tetx, double tetz, double tety)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double tetx=(double)lua_tonumber(L,2);
		double tetz=(double)lua_tonumber(L,3);
		double tety=(double)lua_tonumber(L,4);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::View(double, double, double). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->View(tetx, tetz, tety);

		return 0;
	}

	// void mglCanvasGL::Zoom(double x1, double y1, double x2, double y2)
	static int _bind_Zoom(lua_State *L) {
		if (!_lg_typecheck_Zoom(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::Zoom(double x1, double y1, double x2, double y2) function, expected prototype:\nvoid mglCanvasGL::Zoom(double x1, double y1, double x2, double y2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::Zoom(double, double, double, double). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Zoom(x1, y1, x2, y2);

		return 0;
	}

	// int mglCanvasGL::NewFrame()
	static int _bind_NewFrame(lua_State *L) {
		if (!_lg_typecheck_NewFrame(L)) {
			luaL_error(L, "luna typecheck failed in int mglCanvasGL::NewFrame() function, expected prototype:\nint mglCanvasGL::NewFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglCanvasGL::NewFrame(). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->NewFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvasGL::EndFrame()
	static int _bind_EndFrame(lua_State *L) {
		if (!_lg_typecheck_EndFrame(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::EndFrame() function, expected prototype:\nvoid mglCanvasGL::EndFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::EndFrame(). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EndFrame();

		return 0;
	}

	// void mglCanvasGL::DelFrame(long i)
	static int _bind_DelFrame(lua_State *L) {
		if (!_lg_typecheck_DelFrame(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::DelFrame(long i) function, expected prototype:\nvoid mglCanvasGL::DelFrame(long i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long i=(long)lua_tonumber(L,2);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::DelFrame(long). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelFrame(i);

		return 0;
	}

	// bool mglCanvasGL::Alpha(bool enable)
	static int _bind_Alpha(lua_State *L) {
		if (!_lg_typecheck_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in bool mglCanvasGL::Alpha(bool enable) function, expected prototype:\nbool mglCanvasGL::Alpha(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglCanvasGL::Alpha(bool). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Alpha(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglCanvasGL::Fog(double d, double dz = 0.25)
	static int _bind_Fog(lua_State *L) {
		if (!_lg_typecheck_Fog(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::Fog(double d, double dz = 0.25) function, expected prototype:\nvoid mglCanvasGL::Fog(double d, double dz = 0.25)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double d=(double)lua_tonumber(L,2);
		double dz=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.25;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::Fog(double, double). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Fog(d, dz);

		return 0;
	}

	// bool mglCanvasGL::Light(bool enable)
	static int _bind_Light_overload_1(lua_State *L) {
		if (!_lg_typecheck_Light_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool mglCanvasGL::Light(bool enable) function, expected prototype:\nbool mglCanvasGL::Light(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglCanvasGL::Light(bool). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Light(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglCanvasGL::Light(int n, bool enable)
	static int _bind_Light_overload_2(lua_State *L) {
		if (!_lg_typecheck_Light_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::Light(int n, bool enable) function, expected prototype:\nvoid mglCanvasGL::Light(int n, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::Light(int, bool). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Light(n, enable);

		return 0;
	}

	// Overload binder for mglCanvasGL::Light
	static int _bind_Light(lua_State *L) {
		if (_lg_typecheck_Light_overload_1(L)) return _bind_Light_overload_1(L);
		if (_lg_typecheck_Light_overload_2(L)) return _bind_Light_overload_2(L);

		luaL_error(L, "error in function Light, cannot match any of the overloads for function Light:\n  Light(bool)\n  Light(int, bool)\n");
		return 0;
	}

	// void mglCanvasGL::AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)
	static int _bind_AddLight(lua_State *L) {
		if (!_lg_typecheck_AddLight(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0) function, expected prototype:\nvoid mglCanvasGL::AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)\nClass arguments details:\narg 2 ID = 56902440\narg 3 ID = 56902440\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int n=(int)lua_tointeger(L,2);
		mglPoint* r_ptr=(Luna< mglPoint >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglCanvasGL::AddLight function");
		}
		mglPoint r=*r_ptr;
		mglPoint* d_ptr=(Luna< mglPoint >::check(L,4));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglCanvasGL::AddLight function");
		}
		mglPoint d=*d_ptr;
		char c=luatop>4 ? (char)lua_tointeger(L,5) : (char)'w';
		double bright=luatop>5 ? (double)lua_tonumber(L,6) : (double)0.5;
		double ap=luatop>6 ? (double)lua_tonumber(L,7) : (double)0;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::AddLight(int, mglPoint, mglPoint, char, double, double). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddLight(n, r, d, c, bright, ap);

		return 0;
	}

	// void mglCanvasGL::Clf(mglColor back = WC)
	static int _bind_Clf(lua_State *L) {
		if (!_lg_typecheck_Clf(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::Clf(mglColor back = WC) function, expected prototype:\nvoid mglCanvasGL::Clf(mglColor back = WC)\nClass arguments details:\narg 1 ID = 44899579\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglColor* back_ptr=luatop>1 ? (Luna< mglColor >::check(L,2)) : NULL;
		if( luatop>1 && !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in mglCanvasGL::Clf function");
		}
		mglColor back=luatop>1 ? *back_ptr : (mglColor)WC;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::Clf(mglColor). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clf(back);

		return 0;
	}

	// void mglCanvasGL::base_SetAmbient(double bright = 0.5)
	static int _bind_base_SetAmbient(lua_State *L) {
		if (!_lg_typecheck_base_SetAmbient(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_SetAmbient(double bright = 0.5) function, expected prototype:\nvoid mglCanvasGL::base_SetAmbient(double bright = 0.5)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double bright=luatop>1 ? (double)lua_tonumber(L,2) : (double)0.5;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_SetAmbient(double). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::SetAmbient(bright);

		return 0;
	}

	// void mglCanvasGL::base_Reserve(long n)
	static int _bind_base_Reserve(lua_State *L) {
		if (!_lg_typecheck_base_Reserve(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_Reserve(long n) function, expected prototype:\nvoid mglCanvasGL::base_Reserve(long n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long n=(long)lua_tonumber(L,2);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_Reserve(long). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::Reserve(n);

		return 0;
	}

	// double mglCanvasGL::base_GetRatio() const
	static int _bind_base_GetRatio(lua_State *L) {
		if (!_lg_typecheck_base_GetRatio(L)) {
			luaL_error(L, "luna typecheck failed in double mglCanvasGL::base_GetRatio() const function, expected prototype:\ndouble mglCanvasGL::base_GetRatio() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double mglCanvasGL::base_GetRatio() const. Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->mglCanvasGL::GetRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const unsigned char * mglCanvasGL::base_GetBits()
	static int _bind_base_GetBits(lua_State *L) {
		if (!_lg_typecheck_base_GetBits(L)) {
			luaL_error(L, "luna typecheck failed in const unsigned char * mglCanvasGL::base_GetBits() function, expected prototype:\nconst unsigned char * mglCanvasGL::base_GetBits()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const unsigned char * mglCanvasGL::base_GetBits(). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const unsigned char * lret = self->mglCanvasGL::GetBits();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// int mglCanvasGL::base_GetWidth() const
	static int _bind_base_GetWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int mglCanvasGL::base_GetWidth() const function, expected prototype:\nint mglCanvasGL::base_GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglCanvasGL::base_GetWidth() const. Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->mglCanvasGL::GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglCanvasGL::base_GetHeight() const
	static int _bind_base_GetHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetHeight(L)) {
			luaL_error(L, "luna typecheck failed in int mglCanvasGL::base_GetHeight() const function, expected prototype:\nint mglCanvasGL::base_GetHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglCanvasGL::base_GetHeight() const. Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->mglCanvasGL::GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvasGL::base_ResetFrames()
	static int _bind_base_ResetFrames(lua_State *L) {
		if (!_lg_typecheck_base_ResetFrames(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_ResetFrames() function, expected prototype:\nvoid mglCanvasGL::base_ResetFrames()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_ResetFrames(). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::ResetFrames();

		return 0;
	}

	// void mglCanvasGL::base_SetFrame(long i)
	static int _bind_base_SetFrame(lua_State *L) {
		if (!_lg_typecheck_base_SetFrame(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_SetFrame(long i) function, expected prototype:\nvoid mglCanvasGL::base_SetFrame(long i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long i=(long)lua_tonumber(L,2);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_SetFrame(long). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::SetFrame(i);

		return 0;
	}

	// void mglCanvasGL::base_StartAutoGroup(const char * arg1)
	static int _bind_base_StartAutoGroup(lua_State *L) {
		if (!_lg_typecheck_base_StartAutoGroup(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_StartAutoGroup(const char * arg1) function, expected prototype:\nvoid mglCanvasGL::base_StartAutoGroup(const char * arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * _arg1=(const char *)lua_tostring(L,2);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_StartAutoGroup(const char *). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::StartAutoGroup(_arg1);

		return 0;
	}

	// void mglCanvasGL::base_EndGroup()
	static int _bind_base_EndGroup(lua_State *L) {
		if (!_lg_typecheck_base_EndGroup(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_EndGroup() function, expected prototype:\nvoid mglCanvasGL::base_EndGroup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_EndGroup(). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::EndGroup();

		return 0;
	}

	// void mglCanvasGL::base_SetQuality(int qual = 0)
	static int _bind_base_SetQuality(lua_State *L) {
		if (!_lg_typecheck_base_SetQuality(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_SetQuality(int qual = 0) function, expected prototype:\nvoid mglCanvasGL::base_SetQuality(int qual = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int qual=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_SetQuality(int). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::SetQuality(qual);

		return 0;
	}

	// void mglCanvasGL::base_Finish(bool fast = true)
	static int _bind_base_Finish(lua_State *L) {
		if (!_lg_typecheck_base_Finish(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_Finish(bool fast = true) function, expected prototype:\nvoid mglCanvasGL::base_Finish(bool fast = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool fast=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_Finish(bool). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::Finish(fast);

		return 0;
	}

	// void mglCanvasGL::base_SetSize(int w, int h)
	static int _bind_base_SetSize(lua_State *L) {
		if (!_lg_typecheck_base_SetSize(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_SetSize(int w, int h) function, expected prototype:\nvoid mglCanvasGL::base_SetSize(int w, int h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);
		int h=(int)lua_tointeger(L,3);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_SetSize(int, int). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::SetSize(w, h);

		return 0;
	}

	// void mglCanvasGL::base_View(double tetx, double tetz, double tety)
	static int _bind_base_View(lua_State *L) {
		if (!_lg_typecheck_base_View(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_View(double tetx, double tetz, double tety) function, expected prototype:\nvoid mglCanvasGL::base_View(double tetx, double tetz, double tety)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double tetx=(double)lua_tonumber(L,2);
		double tetz=(double)lua_tonumber(L,3);
		double tety=(double)lua_tonumber(L,4);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_View(double, double, double). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::View(tetx, tetz, tety);

		return 0;
	}

	// void mglCanvasGL::base_Zoom(double x1, double y1, double x2, double y2)
	static int _bind_base_Zoom(lua_State *L) {
		if (!_lg_typecheck_base_Zoom(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_Zoom(double x1, double y1, double x2, double y2) function, expected prototype:\nvoid mglCanvasGL::base_Zoom(double x1, double y1, double x2, double y2)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_Zoom(double, double, double, double). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::Zoom(x1, y1, x2, y2);

		return 0;
	}

	// int mglCanvasGL::base_NewFrame()
	static int _bind_base_NewFrame(lua_State *L) {
		if (!_lg_typecheck_base_NewFrame(L)) {
			luaL_error(L, "luna typecheck failed in int mglCanvasGL::base_NewFrame() function, expected prototype:\nint mglCanvasGL::base_NewFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglCanvasGL::base_NewFrame(). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->mglCanvasGL::NewFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglCanvasGL::base_EndFrame()
	static int _bind_base_EndFrame(lua_State *L) {
		if (!_lg_typecheck_base_EndFrame(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_EndFrame() function, expected prototype:\nvoid mglCanvasGL::base_EndFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_EndFrame(). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::EndFrame();

		return 0;
	}

	// void mglCanvasGL::base_DelFrame(long i)
	static int _bind_base_DelFrame(lua_State *L) {
		if (!_lg_typecheck_base_DelFrame(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_DelFrame(long i) function, expected prototype:\nvoid mglCanvasGL::base_DelFrame(long i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long i=(long)lua_tonumber(L,2);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_DelFrame(long). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::DelFrame(i);

		return 0;
	}

	// bool mglCanvasGL::base_Alpha(bool enable)
	static int _bind_base_Alpha(lua_State *L) {
		if (!_lg_typecheck_base_Alpha(L)) {
			luaL_error(L, "luna typecheck failed in bool mglCanvasGL::base_Alpha(bool enable) function, expected prototype:\nbool mglCanvasGL::base_Alpha(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglCanvasGL::base_Alpha(bool). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mglCanvasGL::Alpha(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglCanvasGL::base_Fog(double d, double dz = 0.25)
	static int _bind_base_Fog(lua_State *L) {
		if (!_lg_typecheck_base_Fog(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_Fog(double d, double dz = 0.25) function, expected prototype:\nvoid mglCanvasGL::base_Fog(double d, double dz = 0.25)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double d=(double)lua_tonumber(L,2);
		double dz=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.25;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_Fog(double, double). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::Fog(d, dz);

		return 0;
	}

	// bool mglCanvasGL::base_Light(bool enable)
	static int _bind_base_Light_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Light_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool mglCanvasGL::base_Light(bool enable) function, expected prototype:\nbool mglCanvasGL::base_Light(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglCanvasGL::base_Light(bool). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mglCanvasGL::Light(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglCanvasGL::base_Light(int n, bool enable)
	static int _bind_base_Light_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Light_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_Light(int n, bool enable) function, expected prototype:\nvoid mglCanvasGL::base_Light(int n, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_Light(int, bool). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::Light(n, enable);

		return 0;
	}

	// Overload binder for mglCanvasGL::base_Light
	static int _bind_base_Light(lua_State *L) {
		if (_lg_typecheck_base_Light_overload_1(L)) return _bind_base_Light_overload_1(L);
		if (_lg_typecheck_base_Light_overload_2(L)) return _bind_base_Light_overload_2(L);

		luaL_error(L, "error in function base_Light, cannot match any of the overloads for function base_Light:\n  base_Light(bool)\n  base_Light(int, bool)\n");
		return 0;
	}

	// void mglCanvasGL::base_AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)
	static int _bind_base_AddLight(lua_State *L) {
		if (!_lg_typecheck_base_AddLight(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0) function, expected prototype:\nvoid mglCanvasGL::base_AddLight(int n, mglPoint r, mglPoint d, char c = 'w', double bright = 0.5, double ap = 0)\nClass arguments details:\narg 2 ID = 56902440\narg 3 ID = 56902440\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int n=(int)lua_tointeger(L,2);
		mglPoint* r_ptr=(Luna< mglPoint >::check(L,3));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in mglCanvasGL::base_AddLight function");
		}
		mglPoint r=*r_ptr;
		mglPoint* d_ptr=(Luna< mglPoint >::check(L,4));
		if( !d_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg d in mglCanvasGL::base_AddLight function");
		}
		mglPoint d=*d_ptr;
		char c=luatop>4 ? (char)lua_tointeger(L,5) : (char)'w';
		double bright=luatop>5 ? (double)lua_tonumber(L,6) : (double)0.5;
		double ap=luatop>6 ? (double)lua_tonumber(L,7) : (double)0;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_AddLight(int, mglPoint, mglPoint, char, double, double). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::AddLight(n, r, d, c, bright, ap);

		return 0;
	}

	// void mglCanvasGL::base_Clf(mglColor back = WC)
	static int _bind_base_Clf(lua_State *L) {
		if (!_lg_typecheck_base_Clf(L)) {
			luaL_error(L, "luna typecheck failed in void mglCanvasGL::base_Clf(mglColor back = WC) function, expected prototype:\nvoid mglCanvasGL::base_Clf(mglColor back = WC)\nClass arguments details:\narg 1 ID = 44899579\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglColor* back_ptr=luatop>1 ? (Luna< mglColor >::check(L,2)) : NULL;
		if( luatop>1 && !back_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg back in mglCanvasGL::base_Clf function");
		}
		mglColor back=luatop>1 ? *back_ptr : (mglColor)WC;

		mglCanvasGL* self=Luna< mglBase >::checkSubType< mglCanvasGL >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglCanvasGL::base_Clf(mglColor). Got : '%s'\n%s",typeid(Luna< mglBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglCanvasGL::Clf(back);

		return 0;
	}


	// Operator binds:

};

mglCanvasGL* LunaTraits< mglCanvasGL >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglCanvasGL::_bind_ctor(L);
}

void LunaTraits< mglCanvasGL >::_bind_dtor(mglCanvasGL* obj) {
	delete obj;
}

const char LunaTraits< mglCanvasGL >::className[] = "mglCanvasGL";
const char LunaTraits< mglCanvasGL >::fullName[] = "mglCanvasGL";
const char LunaTraits< mglCanvasGL >::moduleName[] = "mathgl";
const char* LunaTraits< mglCanvasGL >::parents[] = {"mathgl.mglCanvas", 0};
const int LunaTraits< mglCanvasGL >::hash = 41515707;
const int LunaTraits< mglCanvasGL >::uniqueIDs[] = {88502113,0};

luna_RegType LunaTraits< mglCanvasGL >::methods[] = {
	{"SetQuality", &luna_wrapper_mglCanvasGL::_bind_SetQuality},
	{"Finish", &luna_wrapper_mglCanvasGL::_bind_Finish},
	{"SetSize", &luna_wrapper_mglCanvasGL::_bind_SetSize},
	{"View", &luna_wrapper_mglCanvasGL::_bind_View},
	{"Zoom", &luna_wrapper_mglCanvasGL::_bind_Zoom},
	{"NewFrame", &luna_wrapper_mglCanvasGL::_bind_NewFrame},
	{"EndFrame", &luna_wrapper_mglCanvasGL::_bind_EndFrame},
	{"DelFrame", &luna_wrapper_mglCanvasGL::_bind_DelFrame},
	{"Alpha", &luna_wrapper_mglCanvasGL::_bind_Alpha},
	{"Fog", &luna_wrapper_mglCanvasGL::_bind_Fog},
	{"Light", &luna_wrapper_mglCanvasGL::_bind_Light},
	{"AddLight", &luna_wrapper_mglCanvasGL::_bind_AddLight},
	{"Clf", &luna_wrapper_mglCanvasGL::_bind_Clf},
	{"base_SetAmbient", &luna_wrapper_mglCanvasGL::_bind_base_SetAmbient},
	{"base_Reserve", &luna_wrapper_mglCanvasGL::_bind_base_Reserve},
	{"base_GetRatio", &luna_wrapper_mglCanvasGL::_bind_base_GetRatio},
	{"base_GetBits", &luna_wrapper_mglCanvasGL::_bind_base_GetBits},
	{"base_GetWidth", &luna_wrapper_mglCanvasGL::_bind_base_GetWidth},
	{"base_GetHeight", &luna_wrapper_mglCanvasGL::_bind_base_GetHeight},
	{"base_ResetFrames", &luna_wrapper_mglCanvasGL::_bind_base_ResetFrames},
	{"base_SetFrame", &luna_wrapper_mglCanvasGL::_bind_base_SetFrame},
	{"base_StartAutoGroup", &luna_wrapper_mglCanvasGL::_bind_base_StartAutoGroup},
	{"base_EndGroup", &luna_wrapper_mglCanvasGL::_bind_base_EndGroup},
	{"base_SetQuality", &luna_wrapper_mglCanvasGL::_bind_base_SetQuality},
	{"base_Finish", &luna_wrapper_mglCanvasGL::_bind_base_Finish},
	{"base_SetSize", &luna_wrapper_mglCanvasGL::_bind_base_SetSize},
	{"base_View", &luna_wrapper_mglCanvasGL::_bind_base_View},
	{"base_Zoom", &luna_wrapper_mglCanvasGL::_bind_base_Zoom},
	{"base_NewFrame", &luna_wrapper_mglCanvasGL::_bind_base_NewFrame},
	{"base_EndFrame", &luna_wrapper_mglCanvasGL::_bind_base_EndFrame},
	{"base_DelFrame", &luna_wrapper_mglCanvasGL::_bind_base_DelFrame},
	{"base_Alpha", &luna_wrapper_mglCanvasGL::_bind_base_Alpha},
	{"base_Fog", &luna_wrapper_mglCanvasGL::_bind_base_Fog},
	{"base_Light", &luna_wrapper_mglCanvasGL::_bind_base_Light},
	{"base_AddLight", &luna_wrapper_mglCanvasGL::_bind_base_AddLight},
	{"base_Clf", &luna_wrapper_mglCanvasGL::_bind_base_Clf},
	{"fromVoid", &luna_wrapper_mglCanvasGL::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglCanvasGL::_bind_asVoid},
	{"getTable", &luna_wrapper_mglCanvasGL::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglCanvasGL >::converters[] = {
	{"mglBase", &luna_wrapper_mglCanvasGL::_cast_from_mglBase},
	{0,0}
};

luna_RegEnumType LunaTraits< mglCanvasGL >::enumValues[] = {
	{0,0}
};


