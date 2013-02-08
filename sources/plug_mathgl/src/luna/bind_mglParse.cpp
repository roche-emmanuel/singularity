#include <plug_common.h>

class luna_wrapper_mglParse {
public:
	typedef Luna< mglParse > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56494155) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglParse*)");
		}

		mglParse* rhs =(Luna< mglParse >::check(L,2));
		mglParse* self=(Luna< mglParse >::check(L,1));
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

		mglParse* self= (mglParse*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglParse >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56494155) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglParse >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglParse");
		
		return luna_dynamicCast(L,converters,"mglParse",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,51318766)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< mglParser >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56494155) ) return false;
		if( (!(Luna< mglParse >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Self(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Parse(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48672486)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Execute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,48672486)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CmdType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CmdFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CmdDesc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCmdName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCmdNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddParam(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RestoreOnce(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AllowSetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AllowFileIO(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Calc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddVar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindVar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteVar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglParse::mglParse(mglParser * p)
	static mglParse* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglParse::mglParse(mglParser * p) function, expected prototype:\nmglParse::mglParse(mglParser * p)\nClass arguments details:\narg 1 ID = 51318766\n");
		}

		mglParser* p=(Luna< mglParser >::check(L,1));

		return new mglParse(p);
	}

	// mglParse::mglParse(mglParse & p)
	static mglParse* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglParse::mglParse(mglParse & p) function, expected prototype:\nmglParse::mglParse(mglParse & p)\nClass arguments details:\narg 1 ID = 56494155\n");
		}

		mglParse* p_ptr=(Luna< mglParse >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in mglParse::mglParse function");
		}
		mglParse & p=*p_ptr;

		return new mglParse(p);
	}

	// mglParse::mglParse(bool setsize = false)
	static mglParse* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglParse::mglParse(bool setsize = false) function, expected prototype:\nmglParse::mglParse(bool setsize = false)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool setsize=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : false;

		return new mglParse(setsize);
	}

	// Overload binder for mglParse::mglParse
	static mglParse* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function mglParse, cannot match any of the overloads for function mglParse:\n  mglParse(mglParser *)\n  mglParse(mglParse &)\n  mglParse(bool)\n");
		return NULL;
	}


	// Function binds:
	// mglParser * mglParse::Self()
	static int _bind_Self(lua_State *L) {
		if (!_lg_typecheck_Self(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglParser * mglParse::Self() function, expected prototype:\nmglParser * mglParse::Self()\nClass arguments details:\n");
		}


		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglParser * mglParse::Self(). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		mglParser * lret = self->Self();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglParser >::push(L,lret,false);

		return 1;
	}

	// int mglParse::Parse(mglGraph * gr, const char * str, int pos)
	static int _bind_Parse(lua_State *L) {
		if (!_lg_typecheck_Parse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglParse::Parse(mglGraph * gr, const char * str, int pos) function, expected prototype:\nint mglParse::Parse(mglGraph * gr, const char * str, int pos)\nClass arguments details:\narg 1 ID = 48672486\n");
		}

		mglGraph* gr=(Luna< mglGraph >::check(L,2));
		const char * str=(const char *)lua_tostring(L,3);
		int pos=(int)lua_tointeger(L,4);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglParse::Parse(mglGraph *, const char *, int). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		int lret = self->Parse(gr, str, pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglParse::Execute(mglGraph * gr, const char * str)
	static int _bind_Execute(lua_State *L) {
		if (!_lg_typecheck_Execute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglParse::Execute(mglGraph * gr, const char * str) function, expected prototype:\nvoid mglParse::Execute(mglGraph * gr, const char * str)\nClass arguments details:\narg 1 ID = 48672486\n");
		}

		mglGraph* gr=(Luna< mglGraph >::check(L,2));
		const char * str=(const char *)lua_tostring(L,3);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglParse::Execute(mglGraph *, const char *). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		self->Execute(gr, str);

		return 0;
	}

	// int mglParse::CmdType(const char * name)
	static int _bind_CmdType(lua_State *L) {
		if (!_lg_typecheck_CmdType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglParse::CmdType(const char * name) function, expected prototype:\nint mglParse::CmdType(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglParse::CmdType(const char *). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		int lret = self->CmdType(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * mglParse::CmdFormat(const char * name)
	static int _bind_CmdFormat(lua_State *L) {
		if (!_lg_typecheck_CmdFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglParse::CmdFormat(const char * name) function, expected prototype:\nconst char * mglParse::CmdFormat(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglParse::CmdFormat(const char *). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		const char * lret = self->CmdFormat(name);
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * mglParse::CmdDesc(const char * name)
	static int _bind_CmdDesc(lua_State *L) {
		if (!_lg_typecheck_CmdDesc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglParse::CmdDesc(const char * name) function, expected prototype:\nconst char * mglParse::CmdDesc(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglParse::CmdDesc(const char *). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		const char * lret = self->CmdDesc(name);
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * mglParse::GetCmdName(long n)
	static int _bind_GetCmdName(lua_State *L) {
		if (!_lg_typecheck_GetCmdName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * mglParse::GetCmdName(long n) function, expected prototype:\nconst char * mglParse::GetCmdName(long n)\nClass arguments details:\n");
		}

		long n=(long)lua_tointeger(L,2);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * mglParse::GetCmdName(long). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		const char * lret = self->GetCmdName(n);
		lua_pushstring(L,lret);

		return 1;
	}

	// long mglParse::GetCmdNum()
	static int _bind_GetCmdNum(lua_State *L) {
		if (!_lg_typecheck_GetCmdNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglParse::GetCmdNum() function, expected prototype:\nlong mglParse::GetCmdNum()\nClass arguments details:\n");
		}


		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglParse::GetCmdNum(). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		long lret = self->GetCmdNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglParse::AddParam(int id, const char * str)
	static int _bind_AddParam(lua_State *L) {
		if (!_lg_typecheck_AddParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglParse::AddParam(int id, const char * str) function, expected prototype:\nvoid mglParse::AddParam(int id, const char * str)\nClass arguments details:\n");
		}

		int id=(int)lua_tointeger(L,2);
		const char * str=(const char *)lua_tostring(L,3);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglParse::AddParam(int, const char *). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		self->AddParam(id, str);

		return 0;
	}

	// void mglParse::RestoreOnce()
	static int _bind_RestoreOnce(lua_State *L) {
		if (!_lg_typecheck_RestoreOnce(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglParse::RestoreOnce() function, expected prototype:\nvoid mglParse::RestoreOnce()\nClass arguments details:\n");
		}


		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglParse::RestoreOnce(). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		self->RestoreOnce();

		return 0;
	}

	// void mglParse::AllowSetSize(bool allow)
	static int _bind_AllowSetSize(lua_State *L) {
		if (!_lg_typecheck_AllowSetSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglParse::AllowSetSize(bool allow) function, expected prototype:\nvoid mglParse::AllowSetSize(bool allow)\nClass arguments details:\n");
		}

		bool allow=(bool)(lua_toboolean(L,2)==1);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglParse::AllowSetSize(bool). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		self->AllowSetSize(allow);

		return 0;
	}

	// void mglParse::AllowFileIO(bool allow)
	static int _bind_AllowFileIO(lua_State *L) {
		if (!_lg_typecheck_AllowFileIO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglParse::AllowFileIO(bool allow) function, expected prototype:\nvoid mglParse::AllowFileIO(bool allow)\nClass arguments details:\n");
		}

		bool allow=(bool)(lua_toboolean(L,2)==1);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglParse::AllowFileIO(bool). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		self->AllowFileIO(allow);

		return 0;
	}

	// void mglParse::Stop()
	static int _bind_Stop(lua_State *L) {
		if (!_lg_typecheck_Stop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglParse::Stop() function, expected prototype:\nvoid mglParse::Stop()\nClass arguments details:\n");
		}


		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglParse::Stop(). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		self->Stop();

		return 0;
	}

	// mglData mglParse::Calc(const char * formula)
	static int _bind_Calc(lua_State *L) {
		if (!_lg_typecheck_Calc(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglData mglParse::Calc(const char * formula) function, expected prototype:\nmglData mglParse::Calc(const char * formula)\nClass arguments details:\n");
		}

		const char * formula=(const char *)lua_tostring(L,2);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglData mglParse::Calc(const char *). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		mglData stack_lret = self->Calc(formula);
		mglData* lret = new mglData(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglData >::push(L,lret,true);

		return 1;
	}

	// mglVar * mglParse::AddVar(const char * name)
	static int _bind_AddVar(lua_State *L) {
		if (!_lg_typecheck_AddVar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglVar * mglParse::AddVar(const char * name) function, expected prototype:\nmglVar * mglParse::AddVar(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglVar * mglParse::AddVar(const char *). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		mglVar * lret = self->AddVar(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglVar >::push(L,lret,false);

		return 1;
	}

	// mglVar * mglParse::FindVar(const char * name)
	static int _bind_FindVar(lua_State *L) {
		if (!_lg_typecheck_FindVar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglVar * mglParse::FindVar(const char * name) function, expected prototype:\nmglVar * mglParse::FindVar(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglVar * mglParse::FindVar(const char *). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		mglVar * lret = self->FindVar(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglVar >::push(L,lret,false);

		return 1;
	}

	// void mglParse::DeleteVar(const char * name)
	static int _bind_DeleteVar(lua_State *L) {
		if (!_lg_typecheck_DeleteVar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglParse::DeleteVar(const char * name) function, expected prototype:\nvoid mglParse::DeleteVar(const char * name)\nClass arguments details:\n");
		}

		const char * name=(const char *)lua_tostring(L,2);

		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglParse::DeleteVar(const char *). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		self->DeleteVar(name);

		return 0;
	}

	// void mglParse::DeleteAll()
	static int _bind_DeleteAll(lua_State *L) {
		if (!_lg_typecheck_DeleteAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglParse::DeleteAll() function, expected prototype:\nvoid mglParse::DeleteAll()\nClass arguments details:\n");
		}


		mglParse* self=(Luna< mglParse >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglParse::DeleteAll(). Got : '%s'",typeid(Luna< mglParse >::check(L,1)).name());
		}
		self->DeleteAll();

		return 0;
	}


	// Operator binds:

};

mglParse* LunaTraits< mglParse >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglParse::_bind_ctor(L);
}

void LunaTraits< mglParse >::_bind_dtor(mglParse* obj) {
	delete obj;
}

const char LunaTraits< mglParse >::className[] = "mglParse";
const char LunaTraits< mglParse >::fullName[] = "mglParse";
const char LunaTraits< mglParse >::moduleName[] = "mathgl";
const char* LunaTraits< mglParse >::parents[] = {0};
const int LunaTraits< mglParse >::hash = 56494155;
const int LunaTraits< mglParse >::uniqueIDs[] = {56494155,0};

luna_RegType LunaTraits< mglParse >::methods[] = {
	{"Self", &luna_wrapper_mglParse::_bind_Self},
	{"Parse", &luna_wrapper_mglParse::_bind_Parse},
	{"Execute", &luna_wrapper_mglParse::_bind_Execute},
	{"CmdType", &luna_wrapper_mglParse::_bind_CmdType},
	{"CmdFormat", &luna_wrapper_mglParse::_bind_CmdFormat},
	{"CmdDesc", &luna_wrapper_mglParse::_bind_CmdDesc},
	{"GetCmdName", &luna_wrapper_mglParse::_bind_GetCmdName},
	{"GetCmdNum", &luna_wrapper_mglParse::_bind_GetCmdNum},
	{"AddParam", &luna_wrapper_mglParse::_bind_AddParam},
	{"RestoreOnce", &luna_wrapper_mglParse::_bind_RestoreOnce},
	{"AllowSetSize", &luna_wrapper_mglParse::_bind_AllowSetSize},
	{"AllowFileIO", &luna_wrapper_mglParse::_bind_AllowFileIO},
	{"Stop", &luna_wrapper_mglParse::_bind_Stop},
	{"Calc", &luna_wrapper_mglParse::_bind_Calc},
	{"AddVar", &luna_wrapper_mglParse::_bind_AddVar},
	{"FindVar", &luna_wrapper_mglParse::_bind_FindVar},
	{"DeleteVar", &luna_wrapper_mglParse::_bind_DeleteVar},
	{"DeleteAll", &luna_wrapper_mglParse::_bind_DeleteAll},
	{"dynCast", &luna_wrapper_mglParse::_bind_dynCast},
	{"__eq", &luna_wrapper_mglParse::_bind___eq},
	{"fromVoid", &luna_wrapper_mglParse::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglParse::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglParse >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglParse >::enumValues[] = {
	{0,0}
};


