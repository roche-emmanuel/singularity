#include <plug_common.h>

#include <luna/wrappers/wrapper_mglWnd.h>

class luna_wrapper_mglWnd {
public:
	typedef Luna< mglWnd > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglGraph* self=(Luna< mglGraph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<mglGraph,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		mglWnd* self= (mglWnd*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglWnd >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48672486) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglGraph >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_mglGraph(lua_State *L) {
		// all checked are already performed before reaching this point.
		//mglWnd* ptr= dynamic_cast< mglWnd* >(Luna< mglGraph >::check(L,1));
		mglWnd* ptr= luna_caster< mglGraph, mglWnd >::cast(Luna< mglGraph >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< mglWnd >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_ReLoad(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Adjust(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_SetDelay(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Setup(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LastMousePos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFontSizePT(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglWnd::mglWnd(lua_Table * data)
	static mglWnd* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in mglWnd::mglWnd(lua_Table * data) function, expected prototype:\nmglWnd::mglWnd(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_mglWnd(L,NULL);
	}


	// Function binds:
	// int mglWnd::Run()
	static int _bind_Run(lua_State *L) {
		if (!_lg_typecheck_Run(L)) {
			luaL_error(L, "luna typecheck failed in int mglWnd::Run() function, expected prototype:\nint mglWnd::Run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglWnd::Run(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Run();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglWnd::ToggleAlpha()
	static int _bind_ToggleAlpha(lua_State *L) {
		if (!_lg_typecheck_ToggleAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::ToggleAlpha() function, expected prototype:\nvoid mglWnd::ToggleAlpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::ToggleAlpha(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ToggleAlpha();

		return 0;
	}

	// void mglWnd::ToggleLight()
	static int _bind_ToggleLight(lua_State *L) {
		if (!_lg_typecheck_ToggleLight(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::ToggleLight() function, expected prototype:\nvoid mglWnd::ToggleLight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::ToggleLight(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ToggleLight();

		return 0;
	}

	// void mglWnd::ToggleZoom()
	static int _bind_ToggleZoom(lua_State *L) {
		if (!_lg_typecheck_ToggleZoom(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::ToggleZoom() function, expected prototype:\nvoid mglWnd::ToggleZoom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::ToggleZoom(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ToggleZoom();

		return 0;
	}

	// void mglWnd::ToggleRotate()
	static int _bind_ToggleRotate(lua_State *L) {
		if (!_lg_typecheck_ToggleRotate(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::ToggleRotate() function, expected prototype:\nvoid mglWnd::ToggleRotate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::ToggleRotate(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ToggleRotate();

		return 0;
	}

	// void mglWnd::ToggleNo()
	static int _bind_ToggleNo(lua_State *L) {
		if (!_lg_typecheck_ToggleNo(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::ToggleNo() function, expected prototype:\nvoid mglWnd::ToggleNo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::ToggleNo(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ToggleNo();

		return 0;
	}

	// void mglWnd::Update()
	static int _bind_Update(lua_State *L) {
		if (!_lg_typecheck_Update(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::Update() function, expected prototype:\nvoid mglWnd::Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::Update(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Update();

		return 0;
	}

	// void mglWnd::ReLoad()
	static int _bind_ReLoad(lua_State *L) {
		if (!_lg_typecheck_ReLoad(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::ReLoad() function, expected prototype:\nvoid mglWnd::ReLoad()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::ReLoad(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReLoad();

		return 0;
	}

	// void mglWnd::Adjust()
	static int _bind_Adjust(lua_State *L) {
		if (!_lg_typecheck_Adjust(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::Adjust() function, expected prototype:\nvoid mglWnd::Adjust()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::Adjust(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Adjust();

		return 0;
	}

	// void mglWnd::NextFrame()
	static int _bind_NextFrame(lua_State *L) {
		if (!_lg_typecheck_NextFrame(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::NextFrame() function, expected prototype:\nvoid mglWnd::NextFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::NextFrame(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NextFrame();

		return 0;
	}

	// void mglWnd::PrevFrame()
	static int _bind_PrevFrame(lua_State *L) {
		if (!_lg_typecheck_PrevFrame(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::PrevFrame() function, expected prototype:\nvoid mglWnd::PrevFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::PrevFrame(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrevFrame();

		return 0;
	}

	// void mglWnd::Animation()
	static int _bind_Animation(lua_State *L) {
		if (!_lg_typecheck_Animation(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::Animation() function, expected prototype:\nvoid mglWnd::Animation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::Animation(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Animation();

		return 0;
	}

	// void mglWnd::SetDelay(double dt)
	static int _bind_SetDelay(lua_State *L) {
		if (!_lg_typecheck_SetDelay(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::SetDelay(double dt) function, expected prototype:\nvoid mglWnd::SetDelay(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::SetDelay(double). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDelay(dt);

		return 0;
	}

	// void mglWnd::Setup(bool clf_upd = true, bool showpos = false)
	static int _bind_Setup(lua_State *L) {
		if (!_lg_typecheck_Setup(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::Setup(bool clf_upd = true, bool showpos = false) function, expected prototype:\nvoid mglWnd::Setup(bool clf_upd = true, bool showpos = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool clf_upd=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool showpos=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::Setup(bool, bool). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Setup(clf_upd, showpos);

		return 0;
	}

	// mglPoint mglWnd::LastMousePos()
	static int _bind_LastMousePos(lua_State *L) {
		if (!_lg_typecheck_LastMousePos(L)) {
			luaL_error(L, "luna typecheck failed in mglPoint mglWnd::LastMousePos() function, expected prototype:\nmglPoint mglWnd::LastMousePos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call mglPoint mglWnd::LastMousePos(). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglPoint stack_lret = self->LastMousePos();
		mglPoint* lret = new mglPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,true);

		return 1;
	}

	// void mglWnd::base_SetFontSizePT(double pt, int dpi = 72)
	static int _bind_base_SetFontSizePT(lua_State *L) {
		if (!_lg_typecheck_base_SetFontSizePT(L)) {
			luaL_error(L, "luna typecheck failed in void mglWnd::base_SetFontSizePT(double pt, int dpi = 72) function, expected prototype:\nvoid mglWnd::base_SetFontSizePT(double pt, int dpi = 72)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double pt=(double)lua_tonumber(L,2);
		int dpi=luatop>2 ? (int)lua_tointeger(L,3) : (int)72;

		mglWnd* self=Luna< mglGraph >::checkSubType< mglWnd >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglWnd::base_SetFontSizePT(double, int). Got : '%s'\n%s",typeid(Luna< mglGraph >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mglWnd::SetFontSizePT(pt, dpi);

		return 0;
	}


	// Operator binds:

};

mglWnd* LunaTraits< mglWnd >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglWnd::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int mglWnd::Run()
}

void LunaTraits< mglWnd >::_bind_dtor(mglWnd* obj) {
	delete obj;
}

const char LunaTraits< mglWnd >::className[] = "mglWnd";
const char LunaTraits< mglWnd >::fullName[] = "mglWnd";
const char LunaTraits< mglWnd >::moduleName[] = "mathgl";
const char* LunaTraits< mglWnd >::parents[] = {"mathgl.mglGraph", 0};
const int LunaTraits< mglWnd >::hash = 19004506;
const int LunaTraits< mglWnd >::uniqueIDs[] = {48672486,0};

luna_RegType LunaTraits< mglWnd >::methods[] = {
	{"Run", &luna_wrapper_mglWnd::_bind_Run},
	{"ToggleAlpha", &luna_wrapper_mglWnd::_bind_ToggleAlpha},
	{"ToggleLight", &luna_wrapper_mglWnd::_bind_ToggleLight},
	{"ToggleZoom", &luna_wrapper_mglWnd::_bind_ToggleZoom},
	{"ToggleRotate", &luna_wrapper_mglWnd::_bind_ToggleRotate},
	{"ToggleNo", &luna_wrapper_mglWnd::_bind_ToggleNo},
	{"Update", &luna_wrapper_mglWnd::_bind_Update},
	{"ReLoad", &luna_wrapper_mglWnd::_bind_ReLoad},
	{"Adjust", &luna_wrapper_mglWnd::_bind_Adjust},
	{"NextFrame", &luna_wrapper_mglWnd::_bind_NextFrame},
	{"PrevFrame", &luna_wrapper_mglWnd::_bind_PrevFrame},
	{"Animation", &luna_wrapper_mglWnd::_bind_Animation},
	{"SetDelay", &luna_wrapper_mglWnd::_bind_SetDelay},
	{"Setup", &luna_wrapper_mglWnd::_bind_Setup},
	{"LastMousePos", &luna_wrapper_mglWnd::_bind_LastMousePos},
	{"base_SetFontSizePT", &luna_wrapper_mglWnd::_bind_base_SetFontSizePT},
	{"fromVoid", &luna_wrapper_mglWnd::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglWnd::_bind_asVoid},
	{"getTable", &luna_wrapper_mglWnd::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglWnd >::converters[] = {
	{"mglGraph", &luna_wrapper_mglWnd::_cast_from_mglGraph},
	{0,0}
};

luna_RegEnumType LunaTraits< mglWnd >::enumValues[] = {
	{0,0}
};


