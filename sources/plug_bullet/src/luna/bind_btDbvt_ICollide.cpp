#include <plug_common.h>

#include <luna/wrappers/wrapper_btDbvt_ICollide.h>

class luna_wrapper_btDbvt_ICollide {
public:
	typedef Luna< btDbvt::ICollide > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btDbvt::ICollide,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21779918) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvt::ICollide*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btDbvt::ICollide* rhs =(Luna< btDbvt::ICollide >::check(L,2));
		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
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

		btDbvt::ICollide* self= (btDbvt::ICollide*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDbvt::ICollide >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21779918) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btDbvt::ICollide >::check(L,1));
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

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvt::ICollide");
		
		return luna_dynamicCast(L,converters,"btDbvt::ICollide",name);
	}


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
	inline static bool _lg_typecheck_Process_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91335778)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btDbvtNode >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Process_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Process_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Descent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AllLeaves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Process_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91335778)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< btDbvtNode >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Process_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Process_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Descent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AllLeaves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDbvt::ICollide::ICollide()
	static btDbvt::ICollide* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in btDbvt::ICollide::ICollide() function, expected prototype:\nbtDbvt::ICollide::ICollide()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new btDbvt::ICollide();
	}

	// btDbvt::ICollide::ICollide(lua_Table * data)
	static btDbvt::ICollide* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in btDbvt::ICollide::ICollide(lua_Table * data) function, expected prototype:\nbtDbvt::ICollide::ICollide(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_btDbvt_ICollide(L,NULL);
	}

	// Overload binder for btDbvt::ICollide::ICollide
	static btDbvt::ICollide* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ICollide, cannot match any of the overloads for function ICollide:\n  ICollide()\n  ICollide(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btDbvt::ICollide::Process(const btDbvtNode * arg1, const btDbvtNode * arg2)
	static int _bind_Process_overload_1(lua_State *L) {
		if (!_lg_typecheck_Process_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void btDbvt::ICollide::Process(const btDbvtNode * arg1, const btDbvtNode * arg2) function, expected prototype:\nvoid btDbvt::ICollide::Process(const btDbvtNode * arg1, const btDbvtNode * arg2)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));
		const btDbvtNode* _arg2=(Luna< btDbvtNode >::check(L,3));

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDbvt::ICollide::Process(const btDbvtNode *, const btDbvtNode *). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Process(_arg1, _arg2);

		return 0;
	}

	// void btDbvt::ICollide::Process(const btDbvtNode * arg1)
	static int _bind_Process_overload_2(lua_State *L) {
		if (!_lg_typecheck_Process_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void btDbvt::ICollide::Process(const btDbvtNode * arg1) function, expected prototype:\nvoid btDbvt::ICollide::Process(const btDbvtNode * arg1)\nClass arguments details:\narg 1 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDbvt::ICollide::Process(const btDbvtNode *). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Process(_arg1);

		return 0;
	}

	// void btDbvt::ICollide::Process(const btDbvtNode * n, float arg2)
	static int _bind_Process_overload_3(lua_State *L) {
		if (!_lg_typecheck_Process_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void btDbvt::ICollide::Process(const btDbvtNode * n, float arg2) function, expected prototype:\nvoid btDbvt::ICollide::Process(const btDbvtNode * n, float arg2)\nClass arguments details:\narg 1 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* n=(Luna< btDbvtNode >::check(L,2));
		float _arg2=(float)lua_tonumber(L,3);

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDbvt::ICollide::Process(const btDbvtNode *, float). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Process(n, _arg2);

		return 0;
	}

	// Overload binder for btDbvt::ICollide::Process
	static int _bind_Process(lua_State *L) {
		if (_lg_typecheck_Process_overload_1(L)) return _bind_Process_overload_1(L);
		if (_lg_typecheck_Process_overload_2(L)) return _bind_Process_overload_2(L);
		if (_lg_typecheck_Process_overload_3(L)) return _bind_Process_overload_3(L);

		luaL_error(L, "error in function Process, cannot match any of the overloads for function Process:\n  Process(const btDbvtNode *, const btDbvtNode *)\n  Process(const btDbvtNode *)\n  Process(const btDbvtNode *, float)\n");
		return 0;
	}

	// bool btDbvt::ICollide::Descent(const btDbvtNode * arg1)
	static int _bind_Descent(lua_State *L) {
		if (!_lg_typecheck_Descent(L)) {
			luaL_error(L, "luna typecheck failed in bool btDbvt::ICollide::Descent(const btDbvtNode * arg1) function, expected prototype:\nbool btDbvt::ICollide::Descent(const btDbvtNode * arg1)\nClass arguments details:\narg 1 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btDbvt::ICollide::Descent(const btDbvtNode *). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Descent(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDbvt::ICollide::AllLeaves(const btDbvtNode * arg1)
	static int _bind_AllLeaves(lua_State *L) {
		if (!_lg_typecheck_AllLeaves(L)) {
			luaL_error(L, "luna typecheck failed in bool btDbvt::ICollide::AllLeaves(const btDbvtNode * arg1) function, expected prototype:\nbool btDbvt::ICollide::AllLeaves(const btDbvtNode * arg1)\nClass arguments details:\narg 1 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btDbvt::ICollide::AllLeaves(const btDbvtNode *). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AllLeaves(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btDbvt::ICollide::base_Process(const btDbvtNode * arg1, const btDbvtNode * arg2)
	static int _bind_base_Process_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Process_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void btDbvt::ICollide::base_Process(const btDbvtNode * arg1, const btDbvtNode * arg2) function, expected prototype:\nvoid btDbvt::ICollide::base_Process(const btDbvtNode * arg1, const btDbvtNode * arg2)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));
		const btDbvtNode* _arg2=(Luna< btDbvtNode >::check(L,3));

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDbvt::ICollide::base_Process(const btDbvtNode *, const btDbvtNode *). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ICollide::Process(_arg1, _arg2);

		return 0;
	}

	// void btDbvt::ICollide::base_Process(const btDbvtNode * arg1)
	static int _bind_base_Process_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Process_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void btDbvt::ICollide::base_Process(const btDbvtNode * arg1) function, expected prototype:\nvoid btDbvt::ICollide::base_Process(const btDbvtNode * arg1)\nClass arguments details:\narg 1 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDbvt::ICollide::base_Process(const btDbvtNode *). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ICollide::Process(_arg1);

		return 0;
	}

	// void btDbvt::ICollide::base_Process(const btDbvtNode * n, float arg2)
	static int _bind_base_Process_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Process_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void btDbvt::ICollide::base_Process(const btDbvtNode * n, float arg2) function, expected prototype:\nvoid btDbvt::ICollide::base_Process(const btDbvtNode * n, float arg2)\nClass arguments details:\narg 1 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* n=(Luna< btDbvtNode >::check(L,2));
		float _arg2=(float)lua_tonumber(L,3);

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDbvt::ICollide::base_Process(const btDbvtNode *, float). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ICollide::Process(n, _arg2);

		return 0;
	}

	// Overload binder for btDbvt::ICollide::base_Process
	static int _bind_base_Process(lua_State *L) {
		if (_lg_typecheck_base_Process_overload_1(L)) return _bind_base_Process_overload_1(L);
		if (_lg_typecheck_base_Process_overload_2(L)) return _bind_base_Process_overload_2(L);
		if (_lg_typecheck_base_Process_overload_3(L)) return _bind_base_Process_overload_3(L);

		luaL_error(L, "error in function base_Process, cannot match any of the overloads for function base_Process:\n  base_Process(const btDbvtNode *, const btDbvtNode *)\n  base_Process(const btDbvtNode *)\n  base_Process(const btDbvtNode *, float)\n");
		return 0;
	}

	// bool btDbvt::ICollide::base_Descent(const btDbvtNode * arg1)
	static int _bind_base_Descent(lua_State *L) {
		if (!_lg_typecheck_base_Descent(L)) {
			luaL_error(L, "luna typecheck failed in bool btDbvt::ICollide::base_Descent(const btDbvtNode * arg1) function, expected prototype:\nbool btDbvt::ICollide::base_Descent(const btDbvtNode * arg1)\nClass arguments details:\narg 1 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btDbvt::ICollide::base_Descent(const btDbvtNode *). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ICollide::Descent(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDbvt::ICollide::base_AllLeaves(const btDbvtNode * arg1)
	static int _bind_base_AllLeaves(lua_State *L) {
		if (!_lg_typecheck_base_AllLeaves(L)) {
			luaL_error(L, "luna typecheck failed in bool btDbvt::ICollide::base_AllLeaves(const btDbvtNode * arg1) function, expected prototype:\nbool btDbvt::ICollide::base_AllLeaves(const btDbvtNode * arg1)\nClass arguments details:\narg 1 ID = 91335778\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));

		btDbvt::ICollide* self=(Luna< btDbvt::ICollide >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btDbvt::ICollide::base_AllLeaves(const btDbvtNode *). Got : '%s'\n%s",typeid(Luna< btDbvt::ICollide >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ICollide::AllLeaves(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

btDbvt::ICollide* LunaTraits< btDbvt::ICollide >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvt_ICollide::_bind_ctor(L);
}

void LunaTraits< btDbvt::ICollide >::_bind_dtor(btDbvt::ICollide* obj) {
	delete obj;
}

const char LunaTraits< btDbvt::ICollide >::className[] = "btDbvt_ICollide";
const char LunaTraits< btDbvt::ICollide >::fullName[] = "btDbvt::ICollide";
const char LunaTraits< btDbvt::ICollide >::moduleName[] = "bullet";
const char* LunaTraits< btDbvt::ICollide >::parents[] = {0};
const int LunaTraits< btDbvt::ICollide >::hash = 21779918;
const int LunaTraits< btDbvt::ICollide >::uniqueIDs[] = {21779918,0};

luna_RegType LunaTraits< btDbvt::ICollide >::methods[] = {
	{"Process", &luna_wrapper_btDbvt_ICollide::_bind_Process},
	{"Descent", &luna_wrapper_btDbvt_ICollide::_bind_Descent},
	{"AllLeaves", &luna_wrapper_btDbvt_ICollide::_bind_AllLeaves},
	{"base_Process", &luna_wrapper_btDbvt_ICollide::_bind_base_Process},
	{"base_Descent", &luna_wrapper_btDbvt_ICollide::_bind_base_Descent},
	{"base_AllLeaves", &luna_wrapper_btDbvt_ICollide::_bind_base_AllLeaves},
	{"dynCast", &luna_wrapper_btDbvt_ICollide::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvt_ICollide::_bind___eq},
	{"fromVoid", &luna_wrapper_btDbvt_ICollide::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDbvt_ICollide::_bind_asVoid},
	{"getTable", &luna_wrapper_btDbvt_ICollide::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvt::ICollide >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvt::ICollide >::enumValues[] = {
	{0,0}
};


