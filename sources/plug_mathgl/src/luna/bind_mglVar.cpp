#include <plug_common.h>

#include <luna/wrappers/wrapper_mglVar.h>

class luna_wrapper_mglVar {
public:
	typedef Luna< mglVar > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		mglDataA* self=(Luna< mglDataA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<mglDataA,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45413231) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglDataA*)");
		}

		mglDataA* rhs =(Luna< mglDataA >::check(L,2));
		mglDataA* self=(Luna< mglDataA >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		mglVar* self= (mglVar*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglVar >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45413231) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglDataA >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_mglDataA(lua_State *L) {
		// all checked are already performed before reaching this point.
		//mglVar* ptr= dynamic_cast< mglVar* >(Luna< mglDataA >::check(L,1));
		mglVar* ptr= luna_caster< mglDataA, mglVar >::cast(Luna< mglDataA >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< mglVar >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_MoveAfter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getO(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTemp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setO(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrev(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,45413231)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTemp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetNx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetNy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetNz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Maximal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Minimal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglVar::mglVar()
	static mglVar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglVar::mglVar() function, expected prototype:\nmglVar::mglVar()\nClass arguments details:\n");
		}


		return new mglVar();
	}

	// mglVar::mglVar(lua_Table * data)
	static mglVar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglVar::mglVar(lua_Table * data) function, expected prototype:\nmglVar::mglVar(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_mglVar(L,NULL);
	}

	// Overload binder for mglVar::mglVar
	static mglVar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function mglVar, cannot match any of the overloads for function mglVar:\n  mglVar()\n  mglVar(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void mglVar::MoveAfter(mglVar * var)
	static int _bind_MoveAfter(lua_State *L) {
		if (!_lg_typecheck_MoveAfter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglVar::MoveAfter(mglVar * var) function, expected prototype:\nvoid mglVar::MoveAfter(mglVar * var)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		mglVar* var=(Luna< mglDataA >::checkSubType< mglVar >(L,2));

		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglVar::MoveAfter(mglVar *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->MoveAfter(var);

		return 0;
	}

	// std::wstring mglVar::s()
	static int _bind_getS(lua_State *L) {
		if (!_lg_typecheck_getS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::wstring mglVar::s() function, expected prototype:\nstd::wstring mglVar::s()\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::wstring mglVar::s(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		std::wstring lret = self->s;
		std::string lret_str = sgt::ws2s(lret);
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// void * mglVar::o()
	static int _bind_getO(lua_State *L) {
		if (!_lg_typecheck_getO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * mglVar::o() function, expected prototype:\nvoid * mglVar::o()\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * mglVar::o(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		void * lret = self->o;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// mglVar * mglVar::next()
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglVar * mglVar::next() function, expected prototype:\nmglVar * mglVar::next()\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglVar * mglVar::next(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglVar * lret = self->next;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglVar >::push(L,lret,false);

		return 1;
	}

	// mglVar * mglVar::prev()
	static int _bind_getPrev(lua_State *L) {
		if (!_lg_typecheck_getPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglVar * mglVar::prev() function, expected prototype:\nmglVar * mglVar::prev()\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglVar * mglVar::prev(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		mglVar * lret = self->prev;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglVar >::push(L,lret,false);

		return 1;
	}

	// bool mglVar::temp()
	static int _bind_getTemp(lua_State *L) {
		if (!_lg_typecheck_getTemp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglVar::temp() function, expected prototype:\nbool mglVar::temp()\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglVar::temp(). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		bool lret = self->temp;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglVar::s(std::wstring value)
	static int _bind_setS(lua_State *L) {
		if (!_lg_typecheck_setS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglVar::s(std::wstring value) function, expected prototype:\nvoid mglVar::s(std::wstring value)\nClass arguments details:\n");
		}

		std::string value_str(lua_tostring(L,2),lua_objlen(L,2));
		std::wstring value = sgt::s2ws(value_str);

		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglVar::s(std::wstring). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->s = value;

		return 0;
	}

	// void mglVar::o(void * value)
	static int _bind_setO(lua_State *L) {
		if (!_lg_typecheck_setO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglVar::o(void * value) function, expected prototype:\nvoid mglVar::o(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglVar::o(void *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->o = value;

		return 0;
	}

	// void mglVar::next(mglVar * value)
	static int _bind_setNext(lua_State *L) {
		if (!_lg_typecheck_setNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglVar::next(mglVar * value) function, expected prototype:\nvoid mglVar::next(mglVar * value)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		mglVar* value=(Luna< mglDataA >::checkSubType< mglVar >(L,2));

		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglVar::next(mglVar *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->next = value;

		return 0;
	}

	// void mglVar::prev(mglVar * value)
	static int _bind_setPrev(lua_State *L) {
		if (!_lg_typecheck_setPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglVar::prev(mglVar * value) function, expected prototype:\nvoid mglVar::prev(mglVar * value)\nClass arguments details:\narg 1 ID = 45413231\n");
		}

		mglVar* value=(Luna< mglDataA >::checkSubType< mglVar >(L,2));

		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglVar::prev(mglVar *). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->prev = value;

		return 0;
	}

	// void mglVar::temp(bool value)
	static int _bind_setTemp(lua_State *L) {
		if (!_lg_typecheck_setTemp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglVar::temp(bool value) function, expected prototype:\nvoid mglVar::temp(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglVar::temp(bool). Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		self->temp = value;

		return 0;
	}

	// long mglVar::base_GetNx() const
	static int _bind_base_GetNx(lua_State *L) {
		if (!_lg_typecheck_base_GetNx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglVar::base_GetNx() const function, expected prototype:\nlong mglVar::base_GetNx() const\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglVar::base_GetNx() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->mglVar::GetNx();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglVar::base_GetNy() const
	static int _bind_base_GetNy(lua_State *L) {
		if (!_lg_typecheck_base_GetNy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglVar::base_GetNy() const function, expected prototype:\nlong mglVar::base_GetNy() const\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglVar::base_GetNy() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->mglVar::GetNy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long mglVar::base_GetNz() const
	static int _bind_base_GetNz(lua_State *L) {
		if (!_lg_typecheck_base_GetNz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in long mglVar::base_GetNz() const function, expected prototype:\nlong mglVar::base_GetNz() const\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call long mglVar::base_GetNz() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		long lret = self->mglVar::GetNz();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglVar::base_Maximal() const
	static int _bind_base_Maximal(lua_State *L) {
		if (!_lg_typecheck_base_Maximal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglVar::base_Maximal() const function, expected prototype:\ndouble mglVar::base_Maximal() const\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglVar::base_Maximal() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->mglVar::Maximal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglVar::base_Minimal() const
	static int _bind_base_Minimal(lua_State *L) {
		if (!_lg_typecheck_base_Minimal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglVar::base_Minimal() const function, expected prototype:\ndouble mglVar::base_Minimal() const\nClass arguments details:\n");
		}


		mglVar* self=Luna< mglDataA >::checkSubType< mglVar >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglVar::base_Minimal() const. Got : '%s'",typeid(Luna< mglDataA >::check(L,1)).name());
		}
		double lret = self->mglVar::Minimal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

mglVar* LunaTraits< mglVar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglVar::_bind_ctor(L);
}

void LunaTraits< mglVar >::_bind_dtor(mglVar* obj) {
	delete obj;
}

const char LunaTraits< mglVar >::className[] = "mglVar";
const char LunaTraits< mglVar >::fullName[] = "mglVar";
const char LunaTraits< mglVar >::moduleName[] = "mathgl";
const char* LunaTraits< mglVar >::parents[] = {"mathgl.mglData", 0};
const int LunaTraits< mglVar >::hash = 19003156;
const int LunaTraits< mglVar >::uniqueIDs[] = {45413231,0};

luna_RegType LunaTraits< mglVar >::methods[] = {
	{"MoveAfter", &luna_wrapper_mglVar::_bind_MoveAfter},
	{"getS", &luna_wrapper_mglVar::_bind_getS},
	{"getO", &luna_wrapper_mglVar::_bind_getO},
	{"getNext", &luna_wrapper_mglVar::_bind_getNext},
	{"getPrev", &luna_wrapper_mglVar::_bind_getPrev},
	{"getTemp", &luna_wrapper_mglVar::_bind_getTemp},
	{"setS", &luna_wrapper_mglVar::_bind_setS},
	{"setO", &luna_wrapper_mglVar::_bind_setO},
	{"setNext", &luna_wrapper_mglVar::_bind_setNext},
	{"setPrev", &luna_wrapper_mglVar::_bind_setPrev},
	{"setTemp", &luna_wrapper_mglVar::_bind_setTemp},
	{"base_GetNx", &luna_wrapper_mglVar::_bind_base_GetNx},
	{"base_GetNy", &luna_wrapper_mglVar::_bind_base_GetNy},
	{"base_GetNz", &luna_wrapper_mglVar::_bind_base_GetNz},
	{"base_Maximal", &luna_wrapper_mglVar::_bind_base_Maximal},
	{"base_Minimal", &luna_wrapper_mglVar::_bind_base_Minimal},
	{"__eq", &luna_wrapper_mglVar::_bind___eq},
	{"fromVoid", &luna_wrapper_mglVar::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglVar::_bind_asVoid},
	{"getTable", &luna_wrapper_mglVar::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< mglVar >::converters[] = {
	{"mglDataA", &luna_wrapper_mglVar::_cast_from_mglDataA},
	{0,0}
};

luna_RegEnumType LunaTraits< mglVar >::enumValues[] = {
	{0,0}
};


