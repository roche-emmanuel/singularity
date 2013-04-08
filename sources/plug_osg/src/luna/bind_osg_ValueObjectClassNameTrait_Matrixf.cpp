#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_Matrixf {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< Matrixf > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33242627) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< Matrixf >*)");
		}

		osg::ValueObjectClassNameTrait< Matrixf >* rhs =(Luna< osg::ValueObjectClassNameTrait< Matrixf > >::check(L,2));
		osg::ValueObjectClassNameTrait< Matrixf >* self=(Luna< osg::ValueObjectClassNameTrait< Matrixf > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< Matrixf >* self= (osg::ValueObjectClassNameTrait< Matrixf >*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ValueObjectClassNameTrait< Matrixf > >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33242627) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::ValueObjectClassNameTrait< Matrixf > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< Matrixf >* self=(Luna< osg::ValueObjectClassNameTrait< Matrixf > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< Matrixf >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< Matrixf >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< Matrixf >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< Matrixf >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< Matrixf >::className()\nClass arguments details:\n");
		}


		const char * lret = osg::ValueObjectClassNameTrait< Matrixf >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< Matrixf >* LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::_bind_dtor(osg::ValueObjectClassNameTrait< Matrixf >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::className[] = "ValueObjectClassNameTrait_Matrixf";
const char LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::fullName[] = "osg::ValueObjectClassNameTrait< Matrixf >";
const char LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::hash = 33242627;
const int LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::uniqueIDs[] = {33242627,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_Matrixf::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_Matrixf::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_Matrixf::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ValueObjectClassNameTrait_Matrixf::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ValueObjectClassNameTrait_Matrixf::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< Matrixf > >::enumValues[] = {
	{0,0}
};


