#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_OperationArrayFunctor_osgUtil_AddRangeOperator {
public:
	typedef Luna< OperationArrayFunctor< osgUtil::AddRangeOperator > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88619900) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OperationArrayFunctor< osgUtil::AddRangeOperator >*)");
		}

		OperationArrayFunctor< osgUtil::AddRangeOperator >* rhs =(Luna< OperationArrayFunctor< osgUtil::AddRangeOperator > >::check(L,2));
		OperationArrayFunctor< osgUtil::AddRangeOperator >* self=(Luna< OperationArrayFunctor< osgUtil::AddRangeOperator > >::check(L,1));
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

		OperationArrayFunctor< osgUtil::AddRangeOperator >* self=(Luna< OperationArrayFunctor< osgUtil::AddRangeOperator > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OperationArrayFunctor< osgUtil::AddRangeOperator >");
		
		return luna_dynamicCast(L,converters,"OperationArrayFunctor< osgUtil::AddRangeOperator >",name);
	}

};

OperationArrayFunctor< osgUtil::AddRangeOperator >* LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::_bind_dtor(OperationArrayFunctor< osgUtil::AddRangeOperator >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::className[] = "OperationArrayFunctor_osgUtil_AddRangeOperator";
const char LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::fullName[] = "OperationArrayFunctor< osgUtil::AddRangeOperator >";
const char LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::moduleName[] = "osg";
const char* LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::parents[] = {0};
const int LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::hash = 88619900;
const int LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::uniqueIDs[] = {88619900,0};

luna_RegType LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::methods[] = {
	{"dynCast", &luna_wrapper_OperationArrayFunctor_osgUtil_AddRangeOperator::_bind_dynCast},
	{"__eq", &luna_wrapper_OperationArrayFunctor_osgUtil_AddRangeOperator::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OperationArrayFunctor< osgUtil::AddRangeOperator > >::enumValues[] = {
	{0,0}
};


