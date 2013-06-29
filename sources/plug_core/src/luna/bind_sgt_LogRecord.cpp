#include <plug_common.h>

class luna_wrapper_sgt_LogRecord {
public:
	typedef Luna< sgt::LogRecord > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34788330) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::LogRecord*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::LogRecord* rhs =(Luna< sgt::LogRecord >::check(L,2));
		sgt::LogRecord* self=(Luna< sgt::LogRecord >::check(L,1));
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

		sgt::LogRecord* self= (sgt::LogRecord*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::LogRecord >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34788330) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::LogRecord >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::LogRecord* self=(Luna< sgt::LogRecord >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::LogRecord");
		
		return luna_dynamicCast(L,converters,"sgt::LogRecord",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetStream(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::LogRecord::LogRecord()
	static sgt::LogRecord* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in sgt::LogRecord::LogRecord() function, expected prototype:\nsgt::LogRecord::LogRecord()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::LogRecord();
	}


	// Function binds:
	// std::ostream & sgt::LogRecord::GetStream(int level, std::string filename, int line, std::string trace)
	static int _bind_GetStream(lua_State *L) {
		if (!_lg_typecheck_GetStream(L)) {
			luaL_error(L, "luna typecheck failed in std::ostream & sgt::LogRecord::GetStream(int level, std::string filename, int line, std::string trace) function, expected prototype:\nstd::ostream & sgt::LogRecord::GetStream(int level, std::string filename, int line, std::string trace)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		std::string filename(lua_tostring(L,3),lua_objlen(L,3));
		int line=(int)lua_tointeger(L,4);
		std::string trace(lua_tostring(L,5),lua_objlen(L,5));

		sgt::LogRecord* self=(Luna< sgt::LogRecord >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::ostream & sgt::LogRecord::GetStream(int, std::string, int, std::string). Got : '%s'\n%s",typeid(Luna< sgt::LogRecord >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::ostream* lret = &self->GetStream(level, filename, line, trace);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::ostream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

sgt::LogRecord* LunaTraits< sgt::LogRecord >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_LogRecord::_bind_ctor(L);
}

void LunaTraits< sgt::LogRecord >::_bind_dtor(sgt::LogRecord* obj) {
	delete obj;
}

const char LunaTraits< sgt::LogRecord >::className[] = "LogRecord";
const char LunaTraits< sgt::LogRecord >::fullName[] = "sgt::LogRecord";
const char LunaTraits< sgt::LogRecord >::moduleName[] = "sgt";
const char* LunaTraits< sgt::LogRecord >::parents[] = {0};
const int LunaTraits< sgt::LogRecord >::hash = 34788330;
const int LunaTraits< sgt::LogRecord >::uniqueIDs[] = {34788330,0};

luna_RegType LunaTraits< sgt::LogRecord >::methods[] = {
	{"GetStream", &luna_wrapper_sgt_LogRecord::_bind_GetStream},
	{"dynCast", &luna_wrapper_sgt_LogRecord::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_LogRecord::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_LogRecord::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_LogRecord::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::LogRecord >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::LogRecord >::enumValues[] = {
	{0,0}
};


