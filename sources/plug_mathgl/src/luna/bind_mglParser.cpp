#include <plug_common.h>

class luna_wrapper_mglParser {
public:
	typedef Luna< mglParser > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51318766) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglParser*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		mglParser* rhs =(Luna< mglParser >::check(L,2));
		mglParser* self=(Luna< mglParser >::check(L,1));
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

		mglParser* self= (mglParser*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglParser >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51318766) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< mglParser >::check(L,1));
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

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglParser");
		
		return luna_dynamicCast(L,converters,"mglParser",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_FindCommand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Parse_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglBase >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Parse_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48672486)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglGraph >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Execute_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglBase >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Execute_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48672486)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglGraph >::check(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindVar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddVar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddNum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddParam(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddCommand(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,49342624)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RestoreOnce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteVar_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< mglDataA >::checkSubType< mglVar >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteVar_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllowSetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAllowFileIO(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCmd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInUse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDataList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,18996083)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllowSetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAllowFileIO(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCmd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,49342624)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInUse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglParser::mglParser(bool setsize = false)
	static mglParser* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in mglParser::mglParser(bool setsize = false) function, expected prototype:\nmglParser::mglParser(bool setsize = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool setsize=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)false;

		return new mglParser(setsize);
	}


	// Function binds:
	// mglCommand * mglParser::FindCommand(const char * name)
	static int _bind_FindCommand(lua_State *L) {
		if (!_lg_typecheck_FindCommand(L)) {
			luaL_error(L, "luna typecheck failed in mglCommand * mglParser::FindCommand(const char * name) function, expected prototype:\nmglCommand * mglParser::FindCommand(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglCommand * mglParser::FindCommand(const char *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglCommand * lret = self->FindCommand(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglCommand >::push(L,lret,false);

		return 1;
	}

	// int mglParser::Parse(mglBase * gr, const char * str, long pos = 0)
	static int _bind_Parse_overload_1(lua_State *L) {
		if (!_lg_typecheck_Parse_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int mglParser::Parse(mglBase * gr, const char * str, long pos = 0) function, expected prototype:\nint mglParser::Parse(mglBase * gr, const char * str, long pos = 0)\nClass arguments details:\narg 1 ID = 88502113\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglBase* gr=(Luna< mglBase >::check(L,2));
		const char * str=(const char *)lua_tostring(L,3);
		long pos=luatop>3 ? (long)lua_tonumber(L,4) : (long)0;

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglParser::Parse(mglBase *, const char *, long). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Parse(gr, str, pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglParser::Parse(mglGraph * gr, const char * str, long pos = 0)
	static int _bind_Parse_overload_2(lua_State *L) {
		if (!_lg_typecheck_Parse_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int mglParser::Parse(mglGraph * gr, const char * str, long pos = 0) function, expected prototype:\nint mglParser::Parse(mglGraph * gr, const char * str, long pos = 0)\nClass arguments details:\narg 1 ID = 48672486\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglGraph* gr=(Luna< mglGraph >::check(L,2));
		const char * str=(const char *)lua_tostring(L,3);
		long pos=luatop>3 ? (long)lua_tonumber(L,4) : (long)0;

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int mglParser::Parse(mglGraph *, const char *, long). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Parse(gr, str, pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for mglParser::Parse
	static int _bind_Parse(lua_State *L) {
		if (_lg_typecheck_Parse_overload_1(L)) return _bind_Parse_overload_1(L);
		if (_lg_typecheck_Parse_overload_2(L)) return _bind_Parse_overload_2(L);

		luaL_error(L, "error in function Parse, cannot match any of the overloads for function Parse:\n  Parse(mglBase *, const char *, long)\n  Parse(mglGraph *, const char *, long)\n");
		return 0;
	}

	// void mglParser::Execute(mglBase * gr, const char * text)
	static int _bind_Execute_overload_1(lua_State *L) {
		if (!_lg_typecheck_Execute_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::Execute(mglBase * gr, const char * text) function, expected prototype:\nvoid mglParser::Execute(mglBase * gr, const char * text)\nClass arguments details:\narg 1 ID = 88502113\n\n%s",luna_dumpStack(L).c_str());
		}

		mglBase* gr=(Luna< mglBase >::check(L,2));
		const char * text=(const char *)lua_tostring(L,3);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::Execute(mglBase *, const char *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Execute(gr, text);

		return 0;
	}

	// void mglParser::Execute(mglGraph * gr, const char * text)
	static int _bind_Execute_overload_2(lua_State *L) {
		if (!_lg_typecheck_Execute_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::Execute(mglGraph * gr, const char * text) function, expected prototype:\nvoid mglParser::Execute(mglGraph * gr, const char * text)\nClass arguments details:\narg 1 ID = 48672486\n\n%s",luna_dumpStack(L).c_str());
		}

		mglGraph* gr=(Luna< mglGraph >::check(L,2));
		const char * text=(const char *)lua_tostring(L,3);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::Execute(mglGraph *, const char *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Execute(gr, text);

		return 0;
	}

	// Overload binder for mglParser::Execute
	static int _bind_Execute(lua_State *L) {
		if (_lg_typecheck_Execute_overload_1(L)) return _bind_Execute_overload_1(L);
		if (_lg_typecheck_Execute_overload_2(L)) return _bind_Execute_overload_2(L);

		luaL_error(L, "error in function Execute, cannot match any of the overloads for function Execute:\n  Execute(mglBase *, const char *)\n  Execute(mglGraph *, const char *)\n");
		return 0;
	}

	// mglVar * mglParser::FindVar(const char * name)
	static int _bind_FindVar(lua_State *L) {
		if (!_lg_typecheck_FindVar(L)) {
			luaL_error(L, "luna typecheck failed in mglVar * mglParser::FindVar(const char * name) function, expected prototype:\nmglVar * mglParser::FindVar(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglVar * mglParser::FindVar(const char *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglVar * lret = self->FindVar(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglVar >::push(L,lret,false);

		return 1;
	}

	// mglVar * mglParser::AddVar(const char * name)
	static int _bind_AddVar(lua_State *L) {
		if (!_lg_typecheck_AddVar(L)) {
			luaL_error(L, "luna typecheck failed in mglVar * mglParser::AddVar(const char * name) function, expected prototype:\nmglVar * mglParser::AddVar(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglVar * mglParser::AddVar(const char *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglVar * lret = self->AddVar(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglVar >::push(L,lret,false);

		return 1;
	}

	// mglNum * mglParser::FindNum(const char * name)
	static int _bind_FindNum(lua_State *L) {
		if (!_lg_typecheck_FindNum(L)) {
			luaL_error(L, "luna typecheck failed in mglNum * mglParser::FindNum(const char * name) function, expected prototype:\nmglNum * mglParser::FindNum(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglNum * mglParser::FindNum(const char *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglNum * lret = self->FindNum(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglNum >::push(L,lret,false);

		return 1;
	}

	// mglNum * mglParser::AddNum(const char * name)
	static int _bind_AddNum(lua_State *L) {
		if (!_lg_typecheck_AddNum(L)) {
			luaL_error(L, "luna typecheck failed in mglNum * mglParser::AddNum(const char * name) function, expected prototype:\nmglNum * mglParser::AddNum(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglNum * mglParser::AddNum(const char *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglNum * lret = self->AddNum(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglNum >::push(L,lret,false);

		return 1;
	}

	// void mglParser::AddParam(int n, const char * str)
	static int _bind_AddParam(lua_State *L) {
		if (!_lg_typecheck_AddParam(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::AddParam(int n, const char * str) function, expected prototype:\nvoid mglParser::AddParam(int n, const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		const char * str=(const char *)lua_tostring(L,3);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::AddParam(int, const char *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddParam(n, str);

		return 0;
	}

	// void mglParser::AddCommand(mglCommand * cmd, int num = 0)
	static int _bind_AddCommand(lua_State *L) {
		if (!_lg_typecheck_AddCommand(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::AddCommand(mglCommand * cmd, int num = 0) function, expected prototype:\nvoid mglParser::AddCommand(mglCommand * cmd, int num = 0)\nClass arguments details:\narg 1 ID = 49342624\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		mglCommand* cmd=(Luna< mglCommand >::check(L,2));
		int num=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::AddCommand(mglCommand *, int). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddCommand(cmd, num);

		return 0;
	}

	// void mglParser::RestoreOnce()
	static int _bind_RestoreOnce(lua_State *L) {
		if (!_lg_typecheck_RestoreOnce(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::RestoreOnce() function, expected prototype:\nvoid mglParser::RestoreOnce()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::RestoreOnce(). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RestoreOnce();

		return 0;
	}

	// void mglParser::DeleteVar(mglVar * v)
	static int _bind_DeleteVar_overload_1(lua_State *L) {
		if (!_lg_typecheck_DeleteVar_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::DeleteVar(mglVar * v) function, expected prototype:\nvoid mglParser::DeleteVar(mglVar * v)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		mglVar* v=(Luna< mglDataA >::checkSubType< mglVar >(L,2));

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::DeleteVar(mglVar *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteVar(v);

		return 0;
	}

	// void mglParser::DeleteVar(const char * name)
	static int _bind_DeleteVar_overload_2(lua_State *L) {
		if (!_lg_typecheck_DeleteVar_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::DeleteVar(const char * name) function, expected prototype:\nvoid mglParser::DeleteVar(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::DeleteVar(const char *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteVar(name);

		return 0;
	}

	// Overload binder for mglParser::DeleteVar
	static int _bind_DeleteVar(lua_State *L) {
		if (_lg_typecheck_DeleteVar_overload_1(L)) return _bind_DeleteVar_overload_1(L);
		if (_lg_typecheck_DeleteVar_overload_2(L)) return _bind_DeleteVar_overload_2(L);

		luaL_error(L, "error in function DeleteVar, cannot match any of the overloads for function DeleteVar:\n  DeleteVar(mglVar *)\n  DeleteVar(const char *)\n");
		return 0;
	}

	// void mglParser::DeleteAll()
	static int _bind_DeleteAll(lua_State *L) {
		if (!_lg_typecheck_DeleteAll(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::DeleteAll() function, expected prototype:\nvoid mglParser::DeleteAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::DeleteAll(). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteAll();

		return 0;
	}

	// mglVar * mglParser::DataList()
	static int _bind_getDataList(lua_State *L) {
		if (!_lg_typecheck_getDataList(L)) {
			luaL_error(L, "luna typecheck failed in mglVar * mglParser::DataList() function, expected prototype:\nmglVar * mglParser::DataList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglVar * mglParser::DataList(). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglVar * lret = self->DataList;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglVar >::push(L,lret,false);

		return 1;
	}

	// mglNum * mglParser::NumList()
	static int _bind_getNumList(lua_State *L) {
		if (!_lg_typecheck_getNumList(L)) {
			luaL_error(L, "luna typecheck failed in mglNum * mglParser::NumList() function, expected prototype:\nmglNum * mglParser::NumList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglNum * mglParser::NumList(). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglNum * lret = self->NumList;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglNum >::push(L,lret,false);

		return 1;
	}

	// bool mglParser::AllowSetSize()
	static int _bind_getAllowSetSize(lua_State *L) {
		if (!_lg_typecheck_getAllowSetSize(L)) {
			luaL_error(L, "luna typecheck failed in bool mglParser::AllowSetSize() function, expected prototype:\nbool mglParser::AllowSetSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglParser::AllowSetSize(). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AllowSetSize;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglParser::AllowFileIO()
	static int _bind_getAllowFileIO(lua_State *L) {
		if (!_lg_typecheck_getAllowFileIO(L)) {
			luaL_error(L, "luna typecheck failed in bool mglParser::AllowFileIO() function, expected prototype:\nbool mglParser::AllowFileIO()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglParser::AllowFileIO(). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AllowFileIO;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglParser::Stop()
	static int _bind_getStop(lua_State *L) {
		if (!_lg_typecheck_getStop(L)) {
			luaL_error(L, "luna typecheck failed in bool mglParser::Stop() function, expected prototype:\nbool mglParser::Stop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool mglParser::Stop(). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Stop;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// mglCommand * mglParser::Cmd()
	static int _bind_getCmd(lua_State *L) {
		if (!_lg_typecheck_getCmd(L)) {
			luaL_error(L, "luna typecheck failed in mglCommand * mglParser::Cmd() function, expected prototype:\nmglCommand * mglParser::Cmd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call mglCommand * mglParser::Cmd(). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		mglCommand * lret = self->Cmd;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglCommand >::push(L,lret,false);

		return 1;
	}

	// long mglParser::InUse()
	static int _bind_getInUse(lua_State *L) {
		if (!_lg_typecheck_getInUse(L)) {
			luaL_error(L, "luna typecheck failed in long mglParser::InUse() function, expected prototype:\nlong mglParser::InUse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long mglParser::InUse(). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->InUse;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglParser::DataList(mglVar * value)
	static int _bind_setDataList(lua_State *L) {
		if (!_lg_typecheck_setDataList(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::DataList(mglVar * value) function, expected prototype:\nvoid mglParser::DataList(mglVar * value)\nClass arguments details:\narg 1 ID = 45413231\n\n%s",luna_dumpStack(L).c_str());
		}

		mglVar* value=(Luna< mglDataA >::checkSubType< mglVar >(L,2));

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::DataList(mglVar *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DataList = value;

		return 0;
	}

	// void mglParser::NumList(mglNum * value)
	static int _bind_setNumList(lua_State *L) {
		if (!_lg_typecheck_setNumList(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::NumList(mglNum * value) function, expected prototype:\nvoid mglParser::NumList(mglNum * value)\nClass arguments details:\narg 1 ID = 18996083\n\n%s",luna_dumpStack(L).c_str());
		}

		mglNum* value=(Luna< mglNum >::check(L,2));

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::NumList(mglNum *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NumList = value;

		return 0;
	}

	// void mglParser::AllowSetSize(bool value)
	static int _bind_setAllowSetSize(lua_State *L) {
		if (!_lg_typecheck_setAllowSetSize(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::AllowSetSize(bool value) function, expected prototype:\nvoid mglParser::AllowSetSize(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::AllowSetSize(bool). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AllowSetSize = value;

		return 0;
	}

	// void mglParser::AllowFileIO(bool value)
	static int _bind_setAllowFileIO(lua_State *L) {
		if (!_lg_typecheck_setAllowFileIO(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::AllowFileIO(bool value) function, expected prototype:\nvoid mglParser::AllowFileIO(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::AllowFileIO(bool). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AllowFileIO = value;

		return 0;
	}

	// void mglParser::Stop(bool value)
	static int _bind_setStop(lua_State *L) {
		if (!_lg_typecheck_setStop(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::Stop(bool value) function, expected prototype:\nvoid mglParser::Stop(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::Stop(bool). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Stop = value;

		return 0;
	}

	// void mglParser::Cmd(mglCommand * value)
	static int _bind_setCmd(lua_State *L) {
		if (!_lg_typecheck_setCmd(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::Cmd(mglCommand * value) function, expected prototype:\nvoid mglParser::Cmd(mglCommand * value)\nClass arguments details:\narg 1 ID = 49342624\n\n%s",luna_dumpStack(L).c_str());
		}

		mglCommand* value=(Luna< mglCommand >::check(L,2));

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::Cmd(mglCommand *). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Cmd = value;

		return 0;
	}

	// void mglParser::InUse(long value)
	static int _bind_setInUse(lua_State *L) {
		if (!_lg_typecheck_setInUse(L)) {
			luaL_error(L, "luna typecheck failed in void mglParser::InUse(long value) function, expected prototype:\nvoid mglParser::InUse(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		mglParser* self=(Luna< mglParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void mglParser::InUse(long). Got : '%s'\n%s",typeid(Luna< mglParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InUse = value;

		return 0;
	}


	// Operator binds:

};

mglParser* LunaTraits< mglParser >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglParser::_bind_ctor(L);
}

void LunaTraits< mglParser >::_bind_dtor(mglParser* obj) {
	delete obj;
}

const char LunaTraits< mglParser >::className[] = "mglParser";
const char LunaTraits< mglParser >::fullName[] = "mglParser";
const char LunaTraits< mglParser >::moduleName[] = "mathgl";
const char* LunaTraits< mglParser >::parents[] = {0};
const int LunaTraits< mglParser >::hash = 51318766;
const int LunaTraits< mglParser >::uniqueIDs[] = {51318766,0};

luna_RegType LunaTraits< mglParser >::methods[] = {
	{"FindCommand", &luna_wrapper_mglParser::_bind_FindCommand},
	{"Parse", &luna_wrapper_mglParser::_bind_Parse},
	{"Execute", &luna_wrapper_mglParser::_bind_Execute},
	{"FindVar", &luna_wrapper_mglParser::_bind_FindVar},
	{"AddVar", &luna_wrapper_mglParser::_bind_AddVar},
	{"FindNum", &luna_wrapper_mglParser::_bind_FindNum},
	{"AddNum", &luna_wrapper_mglParser::_bind_AddNum},
	{"AddParam", &luna_wrapper_mglParser::_bind_AddParam},
	{"AddCommand", &luna_wrapper_mglParser::_bind_AddCommand},
	{"RestoreOnce", &luna_wrapper_mglParser::_bind_RestoreOnce},
	{"DeleteVar", &luna_wrapper_mglParser::_bind_DeleteVar},
	{"DeleteAll", &luna_wrapper_mglParser::_bind_DeleteAll},
	{"getDataList", &luna_wrapper_mglParser::_bind_getDataList},
	{"getNumList", &luna_wrapper_mglParser::_bind_getNumList},
	{"getAllowSetSize", &luna_wrapper_mglParser::_bind_getAllowSetSize},
	{"getAllowFileIO", &luna_wrapper_mglParser::_bind_getAllowFileIO},
	{"getStop", &luna_wrapper_mglParser::_bind_getStop},
	{"getCmd", &luna_wrapper_mglParser::_bind_getCmd},
	{"getInUse", &luna_wrapper_mglParser::_bind_getInUse},
	{"setDataList", &luna_wrapper_mglParser::_bind_setDataList},
	{"setNumList", &luna_wrapper_mglParser::_bind_setNumList},
	{"setAllowSetSize", &luna_wrapper_mglParser::_bind_setAllowSetSize},
	{"setAllowFileIO", &luna_wrapper_mglParser::_bind_setAllowFileIO},
	{"setStop", &luna_wrapper_mglParser::_bind_setStop},
	{"setCmd", &luna_wrapper_mglParser::_bind_setCmd},
	{"setInUse", &luna_wrapper_mglParser::_bind_setInUse},
	{"dynCast", &luna_wrapper_mglParser::_bind_dynCast},
	{"__eq", &luna_wrapper_mglParser::_bind___eq},
	{"fromVoid", &luna_wrapper_mglParser::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglParser::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglParser >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglParser >::enumValues[] = {
	{0,0}
};


