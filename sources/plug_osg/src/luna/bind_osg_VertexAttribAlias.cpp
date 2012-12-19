#include <plug_common.h>

class luna_wrapper_osg_VertexAttribAlias {
public:
	typedef Luna< osg::VertexAttribAlias > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48453816) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::VertexAttribAlias*)");
		}

		osg::VertexAttribAlias* rhs =(Luna< osg::VertexAttribAlias >::check(L,2));
		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
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

		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::VertexAttribAlias");
		
		return luna_dynamicCast(L,converters,"osg::VertexAttribAlias",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48453816) ) return false;
		if( (!dynamic_cast< osg::VertexAttribAlias* >(Luna< osg::VertexAttribAlias >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::VertexAttribAlias::VertexAttribAlias()
	static osg::VertexAttribAlias* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexAttribAlias::VertexAttribAlias() function, expected prototype:\nosg::VertexAttribAlias::VertexAttribAlias()\nClass arguments details:\n");
		}


		return new osg::VertexAttribAlias();
	}

	// osg::VertexAttribAlias::VertexAttribAlias(const osg::VertexAttribAlias & rhs)
	static osg::VertexAttribAlias* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexAttribAlias::VertexAttribAlias(const osg::VertexAttribAlias & rhs) function, expected prototype:\nosg::VertexAttribAlias::VertexAttribAlias(const osg::VertexAttribAlias & rhs)\nClass arguments details:\narg 1 ID = 48453816\n");
		}

		const osg::VertexAttribAlias* rhs_ptr=(Luna< osg::VertexAttribAlias >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::VertexAttribAlias::VertexAttribAlias function");
		}
		const osg::VertexAttribAlias & rhs=*rhs_ptr;

		return new osg::VertexAttribAlias(rhs);
	}

	// osg::VertexAttribAlias::VertexAttribAlias(unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration)
	static osg::VertexAttribAlias* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexAttribAlias::VertexAttribAlias(unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration) function, expected prototype:\nosg::VertexAttribAlias::VertexAttribAlias(unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration)\nClass arguments details:\n");
		}

		unsigned int location=(unsigned int)lua_tointeger(L,1);
		std::string glName(lua_tostring(L,2),lua_objlen(L,2));
		std::string osgName(lua_tostring(L,3),lua_objlen(L,3));
		std::string declaration(lua_tostring(L,4),lua_objlen(L,4));

		return new osg::VertexAttribAlias(location, glName, osgName, declaration);
	}

	// Overload binder for osg::VertexAttribAlias::VertexAttribAlias
	static osg::VertexAttribAlias* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function VertexAttribAlias, cannot match any of the overloads for function VertexAttribAlias:\n  VertexAttribAlias()\n  VertexAttribAlias(const osg::VertexAttribAlias &)\n  VertexAttribAlias(unsigned int, const std::string, const std::string, const std::string &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::VertexAttribAlias* LunaTraits< osg::VertexAttribAlias >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_VertexAttribAlias::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::VertexAttribAlias >::_bind_dtor(osg::VertexAttribAlias* obj) {
	delete obj;
}

const char LunaTraits< osg::VertexAttribAlias >::className[] = "VertexAttribAlias";
const char LunaTraits< osg::VertexAttribAlias >::fullName[] = "osg::VertexAttribAlias";
const char LunaTraits< osg::VertexAttribAlias >::moduleName[] = "osg";
const char* LunaTraits< osg::VertexAttribAlias >::parents[] = {0};
const int LunaTraits< osg::VertexAttribAlias >::hash = 48453816;
const int LunaTraits< osg::VertexAttribAlias >::uniqueIDs[] = {48453816,0};

luna_RegType LunaTraits< osg::VertexAttribAlias >::methods[] = {
	{"dynCast", &luna_wrapper_osg_VertexAttribAlias::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_VertexAttribAlias::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VertexAttribAlias >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VertexAttribAlias >::enumValues[] = {
	{0,0}
};


