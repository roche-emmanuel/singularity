#include <plug_common.h>

#include <luna/wrappers/wrapper_btDbvt_IWriter.h>

class luna_wrapper_btDbvt_IWriter {
public:
	typedef Luna< btDbvt::IWriter > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btDbvt::IWriter* self=(Luna< btDbvt::IWriter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btDbvt::IWriter,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50167833) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvt::IWriter*)");
		}

		btDbvt::IWriter* rhs =(Luna< btDbvt::IWriter >::check(L,2));
		btDbvt::IWriter* self=(Luna< btDbvt::IWriter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		btDbvt::IWriter* self=(Luna< btDbvt::IWriter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvt::IWriter");
		
		return luna_dynamicCast(L,converters,"btDbvt::IWriter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Prepare(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteNode(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteLeaf(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDbvt::IWriter::IWriter(lua_Table * data)
	static btDbvt::IWriter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt::IWriter::IWriter(lua_Table * data) function, expected prototype:\nbtDbvt::IWriter::IWriter(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btDbvt_IWriter(L,NULL);
	}


	// Function binds:
	// void btDbvt::IWriter::Prepare(const btDbvtNode * root, int numnodes)
	static int _bind_Prepare(lua_State *L) {
		if (!_lg_typecheck_Prepare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::IWriter::Prepare(const btDbvtNode * root, int numnodes) function, expected prototype:\nvoid btDbvt::IWriter::Prepare(const btDbvtNode * root, int numnodes)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		const btDbvtNode* root=(Luna< btDbvtNode >::check(L,2));
		int numnodes=(int)lua_tointeger(L,3);

		btDbvt::IWriter* self=(Luna< btDbvt::IWriter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::IWriter::Prepare(const btDbvtNode *, int). Got : '%s'",typeid(Luna< btDbvt::IWriter >::check(L,1)).name());
		}
		self->Prepare(root, numnodes);

		return 0;
	}

	// void btDbvt::IWriter::WriteNode(const btDbvtNode * arg1, int index, int parent, int child0, int child1)
	static int _bind_WriteNode(lua_State *L) {
		if (!_lg_typecheck_WriteNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::IWriter::WriteNode(const btDbvtNode * arg1, int index, int parent, int child0, int child1) function, expected prototype:\nvoid btDbvt::IWriter::WriteNode(const btDbvtNode * arg1, int index, int parent, int child0, int child1)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));
		int index=(int)lua_tointeger(L,3);
		int parent=(int)lua_tointeger(L,4);
		int child0=(int)lua_tointeger(L,5);
		int child1=(int)lua_tointeger(L,6);

		btDbvt::IWriter* self=(Luna< btDbvt::IWriter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::IWriter::WriteNode(const btDbvtNode *, int, int, int, int). Got : '%s'",typeid(Luna< btDbvt::IWriter >::check(L,1)).name());
		}
		self->WriteNode(_arg1, index, parent, child0, child1);

		return 0;
	}

	// void btDbvt::IWriter::WriteLeaf(const btDbvtNode * arg1, int index, int parent)
	static int _bind_WriteLeaf(lua_State *L) {
		if (!_lg_typecheck_WriteLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::IWriter::WriteLeaf(const btDbvtNode * arg1, int index, int parent) function, expected prototype:\nvoid btDbvt::IWriter::WriteLeaf(const btDbvtNode * arg1, int index, int parent)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		const btDbvtNode* _arg1=(Luna< btDbvtNode >::check(L,2));
		int index=(int)lua_tointeger(L,3);
		int parent=(int)lua_tointeger(L,4);

		btDbvt::IWriter* self=(Luna< btDbvt::IWriter >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::IWriter::WriteLeaf(const btDbvtNode *, int, int). Got : '%s'",typeid(Luna< btDbvt::IWriter >::check(L,1)).name());
		}
		self->WriteLeaf(_arg1, index, parent);

		return 0;
	}


	// Operator binds:

};

btDbvt::IWriter* LunaTraits< btDbvt::IWriter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvt_IWriter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void btDbvt::IWriter::Prepare(const btDbvtNode * root, int numnodes)
	// void btDbvt::IWriter::WriteNode(const btDbvtNode * arg1, int index, int parent, int child0, int child1)
	// void btDbvt::IWriter::WriteLeaf(const btDbvtNode * arg1, int index, int parent)
}

void LunaTraits< btDbvt::IWriter >::_bind_dtor(btDbvt::IWriter* obj) {
	delete obj;
}

const char LunaTraits< btDbvt::IWriter >::className[] = "btDbvt_IWriter";
const char LunaTraits< btDbvt::IWriter >::fullName[] = "btDbvt::IWriter";
const char LunaTraits< btDbvt::IWriter >::moduleName[] = "bullet";
const char* LunaTraits< btDbvt::IWriter >::parents[] = {0};
const int LunaTraits< btDbvt::IWriter >::hash = 50167833;
const int LunaTraits< btDbvt::IWriter >::uniqueIDs[] = {50167833,0};

luna_RegType LunaTraits< btDbvt::IWriter >::methods[] = {
	{"Prepare", &luna_wrapper_btDbvt_IWriter::_bind_Prepare},
	{"WriteNode", &luna_wrapper_btDbvt_IWriter::_bind_WriteNode},
	{"WriteLeaf", &luna_wrapper_btDbvt_IWriter::_bind_WriteLeaf},
	{"dynCast", &luna_wrapper_btDbvt_IWriter::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvt_IWriter::_bind___eq},
	{"getTable", &luna_wrapper_btDbvt_IWriter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvt::IWriter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvt::IWriter >::enumValues[] = {
	{0,0}
};


