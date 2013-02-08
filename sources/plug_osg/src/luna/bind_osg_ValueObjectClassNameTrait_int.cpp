#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_int {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40033589) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< int >*)");
		}

		osg::ValueObjectClassNameTrait< int >* rhs =(Luna< osg::ValueObjectClassNameTrait< int > >::check(L,2));
		osg::ValueObjectClassNameTrait< int >* self=(Luna< osg::ValueObjectClassNameTrait< int > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< int >* self= (osg::ValueObjectClassNameTrait< int >*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ValueObjectClassNameTrait< int > >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40033589) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::ValueObjectClassNameTrait< int > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< int >* self=(Luna< osg::ValueObjectClassNameTrait< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< int >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< int >",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static const char * osg::ValueObjectClassNameTrait< int >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< int >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< int >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< int >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< int >* LunaTraits< osg::ValueObjectClassNameTrait< int > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< int > >::_bind_dtor(osg::ValueObjectClassNameTrait< int >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< int > >::className[] = "ValueObjectClassNameTrait_int";
const char LunaTraits< osg::ValueObjectClassNameTrait< int > >::fullName[] = "osg::ValueObjectClassNameTrait< int >";
const char LunaTraits< osg::ValueObjectClassNameTrait< int > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< int > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< int > >::hash = 40033589;
const int LunaTraits< osg::ValueObjectClassNameTrait< int > >::uniqueIDs[] = {40033589,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< int > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_int::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_int::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_int::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ValueObjectClassNameTrait_int::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ValueObjectClassNameTrait_int::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< int > >::enumValues[] = {
	{0,0}
};


