#include <plug_common.h>

class luna_wrapper_osgDB_ObjectMark {
public:
	typedef Luna< osgDB::ObjectMark > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60066730) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ObjectMark*)");
		}

		osgDB::ObjectMark* rhs =(Luna< osgDB::ObjectMark >::check(L,2));
		osgDB::ObjectMark* self=(Luna< osgDB::ObjectMark >::check(L,1));
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

		osgDB::ObjectMark* self= (osgDB::ObjectMark*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ObjectMark >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60066730) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osgDB::ObjectMark >::check(L,1));
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

		osgDB::ObjectMark* self=(Luna< osgDB::ObjectMark >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectMark");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectMark",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60066730) ) return false;
		if( (!(Luna< osgDB::ObjectMark >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndentDelta(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndentDelta(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ObjectMark::ObjectMark()
	static osgDB::ObjectMark* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ObjectMark::ObjectMark() function, expected prototype:\nosgDB::ObjectMark::ObjectMark()\nClass arguments details:\n");
		}


		return new osgDB::ObjectMark();
	}

	// osgDB::ObjectMark::ObjectMark(const osgDB::ObjectMark & copy)
	static osgDB::ObjectMark* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ObjectMark::ObjectMark(const osgDB::ObjectMark & copy) function, expected prototype:\nosgDB::ObjectMark::ObjectMark(const osgDB::ObjectMark & copy)\nClass arguments details:\narg 1 ID = 60066730\n");
		}

		const osgDB::ObjectMark* copy_ptr=(Luna< osgDB::ObjectMark >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgDB::ObjectMark::ObjectMark function");
		}
		const osgDB::ObjectMark & copy=*copy_ptr;

		return new osgDB::ObjectMark(copy);
	}

	// Overload binder for osgDB::ObjectMark::ObjectMark
	static osgDB::ObjectMark* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ObjectMark, cannot match any of the overloads for function ObjectMark:\n  ObjectMark()\n  ObjectMark(const osgDB::ObjectMark &)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::ObjectMark::set(const char * name, int delta = 0)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectMark::set(const char * name, int delta = 0) function, expected prototype:\nvoid osgDB::ObjectMark::set(const char * name, int delta = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		const char * name=(const char *)lua_tostring(L,2);
		int delta=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		osgDB::ObjectMark* self=(Luna< osgDB::ObjectMark >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectMark::set(const char *, int). Got : '%s'",typeid(Luna< osgDB::ObjectMark >::check(L,1)).name());
		}
		self->set(name, delta);

		return 0;
	}

	// std::string osgDB::ObjectMark::_name()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::ObjectMark::_name() function, expected prototype:\nstd::string osgDB::ObjectMark::_name()\nClass arguments details:\n");
		}


		osgDB::ObjectMark* self=(Luna< osgDB::ObjectMark >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::ObjectMark::_name(). Got : '%s'",typeid(Luna< osgDB::ObjectMark >::check(L,1)).name());
		}
		std::string lret = self->_name;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int osgDB::ObjectMark::_indentDelta()
	static int _bind_getIndentDelta(lua_State *L) {
		if (!_lg_typecheck_getIndentDelta(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::ObjectMark::_indentDelta() function, expected prototype:\nint osgDB::ObjectMark::_indentDelta()\nClass arguments details:\n");
		}


		osgDB::ObjectMark* self=(Luna< osgDB::ObjectMark >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::ObjectMark::_indentDelta(). Got : '%s'",typeid(Luna< osgDB::ObjectMark >::check(L,1)).name());
		}
		int lret = self->_indentDelta;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::ObjectMark::_name(std::string value)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectMark::_name(std::string value) function, expected prototype:\nvoid osgDB::ObjectMark::_name(std::string value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ObjectMark* self=(Luna< osgDB::ObjectMark >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectMark::_name(std::string). Got : '%s'",typeid(Luna< osgDB::ObjectMark >::check(L,1)).name());
		}
		self->_name = value;

		return 0;
	}

	// void osgDB::ObjectMark::_indentDelta(int value)
	static int _bind_setIndentDelta(lua_State *L) {
		if (!_lg_typecheck_setIndentDelta(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectMark::_indentDelta(int value) function, expected prototype:\nvoid osgDB::ObjectMark::_indentDelta(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osgDB::ObjectMark* self=(Luna< osgDB::ObjectMark >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectMark::_indentDelta(int). Got : '%s'",typeid(Luna< osgDB::ObjectMark >::check(L,1)).name());
		}
		self->_indentDelta = value;

		return 0;
	}


	// Operator binds:

};

osgDB::ObjectMark* LunaTraits< osgDB::ObjectMark >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ObjectMark::_bind_ctor(L);
}

void LunaTraits< osgDB::ObjectMark >::_bind_dtor(osgDB::ObjectMark* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectMark >::className[] = "ObjectMark";
const char LunaTraits< osgDB::ObjectMark >::fullName[] = "osgDB::ObjectMark";
const char LunaTraits< osgDB::ObjectMark >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectMark >::parents[] = {0};
const int LunaTraits< osgDB::ObjectMark >::hash = 60066730;
const int LunaTraits< osgDB::ObjectMark >::uniqueIDs[] = {60066730,0};

luna_RegType LunaTraits< osgDB::ObjectMark >::methods[] = {
	{"set", &luna_wrapper_osgDB_ObjectMark::_bind_set},
	{"getName", &luna_wrapper_osgDB_ObjectMark::_bind_getName},
	{"getIndentDelta", &luna_wrapper_osgDB_ObjectMark::_bind_getIndentDelta},
	{"setName", &luna_wrapper_osgDB_ObjectMark::_bind_setName},
	{"setIndentDelta", &luna_wrapper_osgDB_ObjectMark::_bind_setIndentDelta},
	{"dynCast", &luna_wrapper_osgDB_ObjectMark::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ObjectMark::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ObjectMark::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ObjectMark::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectMark >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectMark >::enumValues[] = {
	{0,0}
};


