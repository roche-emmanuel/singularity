#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_OperationArrayFunctor_osgUtil_MultiplyRangeOperator {
public:
	typedef Luna< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31183598) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OperationArrayFunctor< osgUtil::MultiplyRangeOperator >*)");
		}

		OperationArrayFunctor< osgUtil::MultiplyRangeOperator >* rhs =(Luna< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::check(L,2));
		OperationArrayFunctor< osgUtil::MultiplyRangeOperator >* self=(Luna< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::check(L,1));
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

		OperationArrayFunctor< osgUtil::MultiplyRangeOperator >* self=(Luna< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OperationArrayFunctor< osgUtil::MultiplyRangeOperator >");
		
		return luna_dynamicCast(L,converters,"OperationArrayFunctor< osgUtil::MultiplyRangeOperator >",name);
	}

};

OperationArrayFunctor< osgUtil::MultiplyRangeOperator >* LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::_bind_dtor(OperationArrayFunctor< osgUtil::MultiplyRangeOperator >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::className[] = "OperationArrayFunctor_osgUtil_MultiplyRangeOperator";
const char LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::fullName[] = "OperationArrayFunctor< osgUtil::MultiplyRangeOperator >";
const char LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::moduleName[] = "osg";
const char* LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::parents[] = {0};
const int LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::hash = 31183598;
const int LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::uniqueIDs[] = {31183598,0};

luna_RegType LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::methods[] = {
	{"dynCast", &luna_wrapper_OperationArrayFunctor_osgUtil_MultiplyRangeOperator::_bind_dynCast},
	{"__eq", &luna_wrapper_OperationArrayFunctor_osgUtil_MultiplyRangeOperator::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OperationArrayFunctor< osgUtil::MultiplyRangeOperator > >::enumValues[] = {
	{0,0}
};


