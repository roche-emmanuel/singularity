#include <plug_common.h>

class luna_wrapper_ork_MultithreadScheduler {
public:
	typedef Luna< ork::MultithreadScheduler > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::MultithreadScheduler* self= (ork::MultithreadScheduler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::MultithreadScheduler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::MultithreadScheduler* ptr= dynamic_cast< ork::MultithreadScheduler* >(Luna< ork::Object >::check(L,1));
		ork::MultithreadScheduler* ptr= luna_caster< ork::Object, ork::MultithreadScheduler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::MultithreadScheduler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::MultithreadScheduler::MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)
	static ork::MultithreadScheduler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::MultithreadScheduler::MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0) function, expected prototype:\nork::MultithreadScheduler::MultithreadScheduler(int prefetchRate = 0, int prefetchQueue = 0, float frameRate = 0.0f, int nThreads = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int prefetchRate=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;
		int prefetchQueue=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		float frameRate=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		int nThreads=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new ork::MultithreadScheduler(prefetchRate, prefetchQueue, frameRate, nThreads);
	}


	// Function binds:

	// Operator binds:

};

ork::MultithreadScheduler* LunaTraits< ork::MultithreadScheduler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_MultithreadScheduler::_bind_ctor(L);
}

void LunaTraits< ork::MultithreadScheduler >::_bind_dtor(ork::MultithreadScheduler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::MultithreadScheduler >::className[] = "MultithreadScheduler";
const char LunaTraits< ork::MultithreadScheduler >::fullName[] = "ork::MultithreadScheduler";
const char LunaTraits< ork::MultithreadScheduler >::moduleName[] = "ork";
const char* LunaTraits< ork::MultithreadScheduler >::parents[] = {"ork.Scheduler", 0};
const int LunaTraits< ork::MultithreadScheduler >::hash = 90054789;
const int LunaTraits< ork::MultithreadScheduler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::MultithreadScheduler >::methods[] = {
	{"fromVoid", &luna_wrapper_ork_MultithreadScheduler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_MultithreadScheduler::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::MultithreadScheduler >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_MultithreadScheduler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::MultithreadScheduler >::enumValues[] = {
	{0,0}
};


