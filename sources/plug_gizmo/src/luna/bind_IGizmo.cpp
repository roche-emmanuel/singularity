#include <plug_common.h>

#include <luna/wrappers/wrapper_IGizmo.h>

class luna_wrapper_IGizmo {
public:
	typedef Luna< IGizmo > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IGizmo,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58746675) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IGizmo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IGizmo* rhs =(Luna< IGizmo >::check(L,2));
		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		IGizmo* self= (IGizmo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IGizmo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58746675) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IGizmo");
		
		return luna_dynamicCast(L,converters,"IGizmo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetEditMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCameraMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetScreenDimension(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDisplayScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnMouseDown(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnMouseMove(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnMouseUp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UseSnap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsUsingSnap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSnap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSnap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLocation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAxisMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Draw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IGizmo::IGizmo(lua_Table * data)
	static IGizmo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IGizmo::IGizmo(lua_Table * data) function, expected prototype:\nIGizmo::IGizmo(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IGizmo(L,NULL);
	}


	// Function binds:
	// void IGizmo::SetEditMatrix(float * pMatrix)
	static int _bind_SetEditMatrix(lua_State *L) {
		if (!_lg_typecheck_SetEditMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::SetEditMatrix(float * pMatrix) function, expected prototype:\nvoid IGizmo::SetEditMatrix(float * pMatrix)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float* pMatrix=(float*)Luna< void >::check(L,2);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::SetEditMatrix(float *). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEditMatrix(pMatrix);

		return 0;
	}

	// void IGizmo::SetCameraMatrix(const float * Model, const float * Proj)
	static int _bind_SetCameraMatrix(lua_State *L) {
		if (!_lg_typecheck_SetCameraMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::SetCameraMatrix(const float * Model, const float * Proj) function, expected prototype:\nvoid IGizmo::SetCameraMatrix(const float * Model, const float * Proj)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float* Model=(const float*)Luna< void >::check(L,2);
		const float* Proj=(const float*)Luna< void >::check(L,3);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::SetCameraMatrix(const float *, const float *). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCameraMatrix(Model, Proj);

		return 0;
	}

	// void IGizmo::SetScreenDimension(int screenWidth, int screenHeight)
	static int _bind_SetScreenDimension(lua_State *L) {
		if (!_lg_typecheck_SetScreenDimension(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::SetScreenDimension(int screenWidth, int screenHeight) function, expected prototype:\nvoid IGizmo::SetScreenDimension(int screenWidth, int screenHeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int screenWidth=(int)lua_tointeger(L,2);
		int screenHeight=(int)lua_tointeger(L,3);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::SetScreenDimension(int, int). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetScreenDimension(screenWidth, screenHeight);

		return 0;
	}

	// void IGizmo::SetDisplayScale(float aScale)
	static int _bind_SetDisplayScale(lua_State *L) {
		if (!_lg_typecheck_SetDisplayScale(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::SetDisplayScale(float aScale) function, expected prototype:\nvoid IGizmo::SetDisplayScale(float aScale)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float aScale=(float)lua_tonumber(L,2);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::SetDisplayScale(float). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDisplayScale(aScale);

		return 0;
	}

	// bool IGizmo::OnMouseDown(unsigned int x, unsigned int y)
	static int _bind_OnMouseDown(lua_State *L) {
		if (!_lg_typecheck_OnMouseDown(L)) {
			luaL_error(L, "luna typecheck failed in bool IGizmo::OnMouseDown(unsigned int x, unsigned int y) function, expected prototype:\nbool IGizmo::OnMouseDown(unsigned int x, unsigned int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int x=(unsigned int)lua_tointeger(L,2);
		unsigned int y=(unsigned int)lua_tointeger(L,3);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IGizmo::OnMouseDown(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnMouseDown(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void IGizmo::OnMouseMove(unsigned int x, unsigned int y)
	static int _bind_OnMouseMove(lua_State *L) {
		if (!_lg_typecheck_OnMouseMove(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::OnMouseMove(unsigned int x, unsigned int y) function, expected prototype:\nvoid IGizmo::OnMouseMove(unsigned int x, unsigned int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int x=(unsigned int)lua_tointeger(L,2);
		unsigned int y=(unsigned int)lua_tointeger(L,3);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::OnMouseMove(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnMouseMove(x, y);

		return 0;
	}

	// void IGizmo::OnMouseUp(unsigned int x, unsigned int y)
	static int _bind_OnMouseUp(lua_State *L) {
		if (!_lg_typecheck_OnMouseUp(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::OnMouseUp(unsigned int x, unsigned int y) function, expected prototype:\nvoid IGizmo::OnMouseUp(unsigned int x, unsigned int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int x=(unsigned int)lua_tointeger(L,2);
		unsigned int y=(unsigned int)lua_tointeger(L,3);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::OnMouseUp(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnMouseUp(x, y);

		return 0;
	}

	// void IGizmo::UseSnap(bool bUseSnap)
	static int _bind_UseSnap(lua_State *L) {
		if (!_lg_typecheck_UseSnap(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::UseSnap(bool bUseSnap) function, expected prototype:\nvoid IGizmo::UseSnap(bool bUseSnap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool bUseSnap=(bool)(lua_toboolean(L,2)==1);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::UseSnap(bool). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UseSnap(bUseSnap);

		return 0;
	}

	// bool IGizmo::IsUsingSnap()
	static int _bind_IsUsingSnap(lua_State *L) {
		if (!_lg_typecheck_IsUsingSnap(L)) {
			luaL_error(L, "luna typecheck failed in bool IGizmo::IsUsingSnap() function, expected prototype:\nbool IGizmo::IsUsingSnap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IGizmo::IsUsingSnap(). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsUsingSnap();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void IGizmo::SetSnap(float snapx, float snapy, float snapz)
	static int _bind_SetSnap_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetSnap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::SetSnap(float snapx, float snapy, float snapz) function, expected prototype:\nvoid IGizmo::SetSnap(float snapx, float snapy, float snapz)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float snapx=(float)lua_tonumber(L,2);
		float snapy=(float)lua_tonumber(L,3);
		float snapz=(float)lua_tonumber(L,4);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::SetSnap(float, float, float). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSnap(snapx, snapy, snapz);

		return 0;
	}

	// void IGizmo::SetSnap(const float snap)
	static int _bind_SetSnap_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetSnap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::SetSnap(const float snap) function, expected prototype:\nvoid IGizmo::SetSnap(const float snap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const float snap=(const float)lua_tonumber(L,2);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::SetSnap(const float). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSnap(snap);

		return 0;
	}

	// Overload binder for IGizmo::SetSnap
	static int _bind_SetSnap(lua_State *L) {
		if (_lg_typecheck_SetSnap_overload_1(L)) return _bind_SetSnap_overload_1(L);
		if (_lg_typecheck_SetSnap_overload_2(L)) return _bind_SetSnap_overload_2(L);

		luaL_error(L, "error in function SetSnap, cannot match any of the overloads for function SetSnap:\n  SetSnap(float, float, float)\n  SetSnap(const float)\n");
		return 0;
	}

	// void IGizmo::SetLocation(IGizmo::LOCATION aLocation)
	static int _bind_SetLocation(lua_State *L) {
		if (!_lg_typecheck_SetLocation(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::SetLocation(IGizmo::LOCATION aLocation) function, expected prototype:\nvoid IGizmo::SetLocation(IGizmo::LOCATION aLocation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		IGizmo::LOCATION aLocation=(IGizmo::LOCATION)lua_tointeger(L,2);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::SetLocation(IGizmo::LOCATION). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLocation(aLocation);

		return 0;
	}

	// IGizmo::LOCATION IGizmo::GetLocation()
	static int _bind_GetLocation(lua_State *L) {
		if (!_lg_typecheck_GetLocation(L)) {
			luaL_error(L, "luna typecheck failed in IGizmo::LOCATION IGizmo::GetLocation() function, expected prototype:\nIGizmo::LOCATION IGizmo::GetLocation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call IGizmo::LOCATION IGizmo::GetLocation(). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		IGizmo::LOCATION lret = self->GetLocation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void IGizmo::SetAxisMask(unsigned int mask)
	static int _bind_SetAxisMask(lua_State *L) {
		if (!_lg_typecheck_SetAxisMask(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::SetAxisMask(unsigned int mask) function, expected prototype:\nvoid IGizmo::SetAxisMask(unsigned int mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::SetAxisMask(unsigned int). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAxisMask(mask);

		return 0;
	}

	// void IGizmo::Draw()
	static int _bind_Draw(lua_State *L) {
		if (!_lg_typecheck_Draw(L)) {
			luaL_error(L, "luna typecheck failed in void IGizmo::Draw() function, expected prototype:\nvoid IGizmo::Draw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IGizmo* self=(Luna< IGizmo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IGizmo::Draw(). Got : '%s'\n%s",typeid(Luna< IGizmo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Draw();

		return 0;
	}


	// Operator binds:

};

IGizmo* LunaTraits< IGizmo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IGizmo::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void IGizmo::SetEditMatrix(float * pMatrix)
	// void IGizmo::SetCameraMatrix(const float * Model, const float * Proj)
	// void IGizmo::SetScreenDimension(int screenWidth, int screenHeight)
	// void IGizmo::SetDisplayScale(float aScale)
	// bool IGizmo::OnMouseDown(unsigned int x, unsigned int y)
	// void IGizmo::OnMouseMove(unsigned int x, unsigned int y)
	// void IGizmo::OnMouseUp(unsigned int x, unsigned int y)
	// void IGizmo::UseSnap(bool bUseSnap)
	// bool IGizmo::IsUsingSnap()
	// void IGizmo::SetSnap(float snapx, float snapy, float snapz)
	// void IGizmo::SetSnap(const float snap)
	// void IGizmo::SetLocation(IGizmo::LOCATION aLocation)
	// IGizmo::LOCATION IGizmo::GetLocation()
	// void IGizmo::SetAxisMask(unsigned int mask)
	// void IGizmo::Draw()
}

void LunaTraits< IGizmo >::_bind_dtor(IGizmo* obj) {
	delete obj;
}

const char LunaTraits< IGizmo >::className[] = "IGizmo";
const char LunaTraits< IGizmo >::fullName[] = "IGizmo";
const char LunaTraits< IGizmo >::moduleName[] = "gizmo";
const char* LunaTraits< IGizmo >::parents[] = {0};
const int LunaTraits< IGizmo >::hash = 58746675;
const int LunaTraits< IGizmo >::uniqueIDs[] = {58746675,0};

luna_RegType LunaTraits< IGizmo >::methods[] = {
	{"SetEditMatrix", &luna_wrapper_IGizmo::_bind_SetEditMatrix},
	{"SetCameraMatrix", &luna_wrapper_IGizmo::_bind_SetCameraMatrix},
	{"SetScreenDimension", &luna_wrapper_IGizmo::_bind_SetScreenDimension},
	{"SetDisplayScale", &luna_wrapper_IGizmo::_bind_SetDisplayScale},
	{"OnMouseDown", &luna_wrapper_IGizmo::_bind_OnMouseDown},
	{"OnMouseMove", &luna_wrapper_IGizmo::_bind_OnMouseMove},
	{"OnMouseUp", &luna_wrapper_IGizmo::_bind_OnMouseUp},
	{"UseSnap", &luna_wrapper_IGizmo::_bind_UseSnap},
	{"IsUsingSnap", &luna_wrapper_IGizmo::_bind_IsUsingSnap},
	{"SetSnap", &luna_wrapper_IGizmo::_bind_SetSnap},
	{"SetLocation", &luna_wrapper_IGizmo::_bind_SetLocation},
	{"GetLocation", &luna_wrapper_IGizmo::_bind_GetLocation},
	{"SetAxisMask", &luna_wrapper_IGizmo::_bind_SetAxisMask},
	{"Draw", &luna_wrapper_IGizmo::_bind_Draw},
	{"dynCast", &luna_wrapper_IGizmo::_bind_dynCast},
	{"__eq", &luna_wrapper_IGizmo::_bind___eq},
	{"fromVoid", &luna_wrapper_IGizmo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IGizmo::_bind_asVoid},
	{"getTable", &luna_wrapper_IGizmo::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IGizmo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IGizmo >::enumValues[] = {
	{"LOCATE_VIEW", IGizmo::LOCATE_VIEW},
	{"LOCATE_WORLD", IGizmo::LOCATE_WORLD},
	{"LOCATE_LOCAL", IGizmo::LOCATE_LOCAL},
	{"AXIS_X", IGizmo::AXIS_X},
	{"AXIS_Y", IGizmo::AXIS_Y},
	{"AXIS_Z", IGizmo::AXIS_Z},
	{"AXIS_TRACKBALL", IGizmo::AXIS_TRACKBALL},
	{"AXIS_SCREEN", IGizmo::AXIS_SCREEN},
	{"AXIS_ALL", IGizmo::AXIS_ALL},
	{0,0}
};


