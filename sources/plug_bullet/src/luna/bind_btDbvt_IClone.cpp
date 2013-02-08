#include <plug_common.h>

#include <luna/wrappers/wrapper_btDbvt_IClone.h>

class luna_wrapper_btDbvt_IClone {
public:
	typedef Luna< btDbvt::IClone > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btDbvt::IClone* self=(Luna< btDbvt::IClone >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btDbvt::IClone,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8781183) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvt::IClone*)");
		}

		btDbvt::IClone* rhs =(Luna< btDbvt::IClone >::check(L,2));
		btDbvt::IClone* self=(Luna< btDbvt::IClone >::check(L,1));
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

		btDbvt::IClone* self= (btDbvt::IClone*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDbvt::IClone >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8781183) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btDbvt::IClone >::check(L,1));
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

		btDbvt::IClone* self=(Luna< btDbvt::IClone >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvt::IClone");
		
		return luna_dynamicCast(L,converters,"btDbvt::IClone",name);
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
	inline static bool _lg_typecheck_CloneLeaf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CloneLeaf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDbvt::IClone::IClone()
	static btDbvt::IClone* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt::IClone::IClone() function, expected prototype:\nbtDbvt::IClone::IClone()\nClass arguments details:\n");
		}


		return new btDbvt::IClone();
	}

	// btDbvt::IClone::IClone(lua_Table * data)
	static btDbvt::IClone* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt::IClone::IClone(lua_Table * data) function, expected prototype:\nbtDbvt::IClone::IClone(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btDbvt_IClone(L,NULL);
	}

	// Overload binder for btDbvt::IClone::IClone
	static btDbvt::IClone* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function IClone, cannot match any of the overloads for function IClone:\n  IClone()\n  IClone(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void btDbvt::IClone::CloneLeaf(btDbvtNode * arg1)
	static int _bind_CloneLeaf(lua_State *L) {
		if (!_lg_typecheck_CloneLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::IClone::CloneLeaf(btDbvtNode * arg1) function, expected prototype:\nvoid btDbvt::IClone::CloneLeaf(btDbvtNode * arg1)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));

		btDbvt::IClone* self=(Luna< btDbvt::IClone >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::IClone::CloneLeaf(btDbvtNode *). Got : '%s'",typeid(Luna< btDbvt::IClone >::check(L,1)).name());
		}
		self->CloneLeaf(_arg1);

		return 0;
	}

	// void btDbvt::IClone::base_CloneLeaf(btDbvtNode * arg1)
	static int _bind_base_CloneLeaf(lua_State *L) {
		if (!_lg_typecheck_base_CloneLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::IClone::base_CloneLeaf(btDbvtNode * arg1) function, expected prototype:\nvoid btDbvt::IClone::base_CloneLeaf(btDbvtNode * arg1)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));

		btDbvt::IClone* self=(Luna< btDbvt::IClone >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::IClone::base_CloneLeaf(btDbvtNode *). Got : '%s'",typeid(Luna< btDbvt::IClone >::check(L,1)).name());
		}
		self->IClone::CloneLeaf(_arg1);

		return 0;
	}


	// Operator binds:

};

btDbvt::IClone* LunaTraits< btDbvt::IClone >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvt_IClone::_bind_ctor(L);
}

void LunaTraits< btDbvt::IClone >::_bind_dtor(btDbvt::IClone* obj) {
	delete obj;
}

const char LunaTraits< btDbvt::IClone >::className[] = "btDbvt_IClone";
const char LunaTraits< btDbvt::IClone >::fullName[] = "btDbvt::IClone";
const char LunaTraits< btDbvt::IClone >::moduleName[] = "bullet";
const char* LunaTraits< btDbvt::IClone >::parents[] = {0};
const int LunaTraits< btDbvt::IClone >::hash = 8781183;
const int LunaTraits< btDbvt::IClone >::uniqueIDs[] = {8781183,0};

luna_RegType LunaTraits< btDbvt::IClone >::methods[] = {
	{"CloneLeaf", &luna_wrapper_btDbvt_IClone::_bind_CloneLeaf},
	{"base_CloneLeaf", &luna_wrapper_btDbvt_IClone::_bind_base_CloneLeaf},
	{"dynCast", &luna_wrapper_btDbvt_IClone::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvt_IClone::_bind___eq},
	{"fromVoid", &luna_wrapper_btDbvt_IClone::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDbvt_IClone::_bind_asVoid},
	{"getTable", &luna_wrapper_btDbvt_IClone::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvt::IClone >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvt::IClone >::enumValues[] = {
	{0,0}
};


