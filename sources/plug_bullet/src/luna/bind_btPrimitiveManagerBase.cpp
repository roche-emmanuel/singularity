#include <plug_common.h>

#include <luna/wrappers/wrapper_btPrimitiveManagerBase.h>

class luna_wrapper_btPrimitiveManagerBase {
public:
	typedef Luna< btPrimitiveManagerBase > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btPrimitiveManagerBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85935800) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPrimitiveManagerBase*)");
		}

		btPrimitiveManagerBase* rhs =(Luna< btPrimitiveManagerBase >::check(L,2));
		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
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

		btPrimitiveManagerBase* self= (btPrimitiveManagerBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btPrimitiveManagerBase >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85935800) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btPrimitiveManagerBase >::check(L,1));
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

		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btPrimitiveManagerBase");
		
		return luna_dynamicCast(L,converters,"btPrimitiveManagerBase",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_is_trimesh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_primitive_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_primitive_box(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_primitive_triangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,79712881) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btPrimitiveManagerBase::btPrimitiveManagerBase(lua_Table * data)
	static btPrimitiveManagerBase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btPrimitiveManagerBase::btPrimitiveManagerBase(lua_Table * data) function, expected prototype:\nbtPrimitiveManagerBase::btPrimitiveManagerBase(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btPrimitiveManagerBase(L,NULL);
	}


	// Function binds:
	// bool btPrimitiveManagerBase::is_trimesh() const
	static int _bind_is_trimesh(lua_State *L) {
		if (!_lg_typecheck_is_trimesh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btPrimitiveManagerBase::is_trimesh() const function, expected prototype:\nbool btPrimitiveManagerBase::is_trimesh() const\nClass arguments details:\n");
		}


		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btPrimitiveManagerBase::is_trimesh() const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		bool lret = self->is_trimesh();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btPrimitiveManagerBase::get_primitive_count() const
	static int _bind_get_primitive_count(lua_State *L) {
		if (!_lg_typecheck_get_primitive_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btPrimitiveManagerBase::get_primitive_count() const function, expected prototype:\nint btPrimitiveManagerBase::get_primitive_count() const\nClass arguments details:\n");
		}


		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btPrimitiveManagerBase::get_primitive_count() const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		int lret = self->get_primitive_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btPrimitiveManagerBase::get_primitive_box(int prim_index, btAABB & primbox) const
	static int _bind_get_primitive_box(lua_State *L) {
		if (!_lg_typecheck_get_primitive_box(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPrimitiveManagerBase::get_primitive_box(int prim_index, btAABB & primbox) const function, expected prototype:\nvoid btPrimitiveManagerBase::get_primitive_box(int prim_index, btAABB & primbox) const\nClass arguments details:\narg 2 ID = 14786052\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btAABB* primbox_ptr=(Luna< btAABB >::check(L,3));
		if( !primbox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg primbox in btPrimitiveManagerBase::get_primitive_box function");
		}
		btAABB & primbox=*primbox_ptr;

		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPrimitiveManagerBase::get_primitive_box(int, btAABB &) const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		self->get_primitive_box(prim_index, primbox);

		return 0;
	}

	// void btPrimitiveManagerBase::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const
	static int _bind_get_primitive_triangle(lua_State *L) {
		if (!_lg_typecheck_get_primitive_triangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btPrimitiveManagerBase::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const function, expected prototype:\nvoid btPrimitiveManagerBase::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const\nClass arguments details:\narg 2 ID = 79712881\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btPrimitiveTriangle* triangle_ptr=(Luna< btPrimitiveTriangle >::check(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btPrimitiveManagerBase::get_primitive_triangle function");
		}
		btPrimitiveTriangle & triangle=*triangle_ptr;

		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btPrimitiveManagerBase::get_primitive_triangle(int, btPrimitiveTriangle &) const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		self->get_primitive_triangle(prim_index, triangle);

		return 0;
	}


	// Operator binds:

};

btPrimitiveManagerBase* LunaTraits< btPrimitiveManagerBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btPrimitiveManagerBase::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool btPrimitiveManagerBase::is_trimesh() const
	// int btPrimitiveManagerBase::get_primitive_count() const
	// void btPrimitiveManagerBase::get_primitive_box(int prim_index, btAABB & primbox) const
	// void btPrimitiveManagerBase::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const
}

void LunaTraits< btPrimitiveManagerBase >::_bind_dtor(btPrimitiveManagerBase* obj) {
	delete obj;
}

const char LunaTraits< btPrimitiveManagerBase >::className[] = "btPrimitiveManagerBase";
const char LunaTraits< btPrimitiveManagerBase >::fullName[] = "btPrimitiveManagerBase";
const char LunaTraits< btPrimitiveManagerBase >::moduleName[] = "bullet";
const char* LunaTraits< btPrimitiveManagerBase >::parents[] = {0};
const int LunaTraits< btPrimitiveManagerBase >::hash = 85935800;
const int LunaTraits< btPrimitiveManagerBase >::uniqueIDs[] = {85935800,0};

luna_RegType LunaTraits< btPrimitiveManagerBase >::methods[] = {
	{"is_trimesh", &luna_wrapper_btPrimitiveManagerBase::_bind_is_trimesh},
	{"get_primitive_count", &luna_wrapper_btPrimitiveManagerBase::_bind_get_primitive_count},
	{"get_primitive_box", &luna_wrapper_btPrimitiveManagerBase::_bind_get_primitive_box},
	{"get_primitive_triangle", &luna_wrapper_btPrimitiveManagerBase::_bind_get_primitive_triangle},
	{"dynCast", &luna_wrapper_btPrimitiveManagerBase::_bind_dynCast},
	{"__eq", &luna_wrapper_btPrimitiveManagerBase::_bind___eq},
	{"fromVoid", &luna_wrapper_btPrimitiveManagerBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btPrimitiveManagerBase::_bind_asVoid},
	{"getTable", &luna_wrapper_btPrimitiveManagerBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btPrimitiveManagerBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btPrimitiveManagerBase >::enumValues[] = {
	{0,0}
};


