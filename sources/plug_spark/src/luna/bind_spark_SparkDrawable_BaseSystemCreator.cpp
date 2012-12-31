#include <plug_common.h>

#include <luna/wrappers/wrapper_spark_SparkDrawable_BaseSystemCreator.h>

class luna_wrapper_spark_SparkDrawable_BaseSystemCreator {
public:
	typedef Luna< spark::SparkDrawable::BaseSystemCreator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		spark::SparkDrawable::BaseSystemCreator* self=(Luna< spark::SparkDrawable::BaseSystemCreator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47219211) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(spark::SparkDrawable::BaseSystemCreator*)");
		}

		spark::SparkDrawable::BaseSystemCreator* rhs =(Luna< spark::SparkDrawable::BaseSystemCreator >::check(L,2));
		spark::SparkDrawable::BaseSystemCreator* self=(Luna< spark::SparkDrawable::BaseSystemCreator >::check(L,1));
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

		spark::SparkDrawable::BaseSystemCreator* self=(Luna< spark::SparkDrawable::BaseSystemCreator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("spark::SparkDrawable::BaseSystemCreator");
		
		return luna_dynamicCast(L,converters,"spark::SparkDrawable::BaseSystemCreator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14771105) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Constructor binds:
	// spark::SparkDrawable::BaseSystemCreator::BaseSystemCreator(lua_Table * data)
	static spark::SparkDrawable::BaseSystemCreator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::SparkDrawable::BaseSystemCreator::BaseSystemCreator(lua_Table * data) function, expected prototype:\nspark::SparkDrawable::BaseSystemCreator::BaseSystemCreator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_spark_SparkDrawable_BaseSystemCreator(L,NULL);
	}


	// Function binds:

	// Operator binds:
	// unsigned long spark::SparkDrawable::BaseSystemCreator::operator()(const spark::SparkDrawable::TextureIDMap & arg1, int width, int height)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned long spark::SparkDrawable::BaseSystemCreator::operator()(const spark::SparkDrawable::TextureIDMap & arg1, int width, int height) function, expected prototype:\nunsigned long spark::SparkDrawable::BaseSystemCreator::operator()(const spark::SparkDrawable::TextureIDMap & arg1, int width, int height)\nClass arguments details:\narg 1 ID = 65712176\n");
		}

		const spark::SparkDrawable::TextureIDMap* _arg1_ptr=(Luna< spark::SparkDrawable::TextureIDMap >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in spark::SparkDrawable::BaseSystemCreator::operator() function");
		}
		const spark::SparkDrawable::TextureIDMap & _arg1=*_arg1_ptr;
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		spark::SparkDrawable::BaseSystemCreator* self=(Luna< spark::SparkDrawable::BaseSystemCreator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned long spark::SparkDrawable::BaseSystemCreator::operator()(const spark::SparkDrawable::TextureIDMap &, int, int)");
		}
		unsigned long lret = self->operator()(_arg1, width, height);
		lua_pushnumber(L,lret);

		return 1;
	}


};

spark::SparkDrawable::BaseSystemCreator* LunaTraits< spark::SparkDrawable::BaseSystemCreator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_spark_SparkDrawable_BaseSystemCreator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// unsigned long spark::SparkDrawable::BaseSystemCreator::operator()(const spark::SparkDrawable::TextureIDMap & arg1, int width, int height)
}

void LunaTraits< spark::SparkDrawable::BaseSystemCreator >::_bind_dtor(spark::SparkDrawable::BaseSystemCreator* obj) {
	delete obj;
}

const char LunaTraits< spark::SparkDrawable::BaseSystemCreator >::className[] = "SparkDrawable_BaseSystemCreator";
const char LunaTraits< spark::SparkDrawable::BaseSystemCreator >::fullName[] = "spark::SparkDrawable::BaseSystemCreator";
const char LunaTraits< spark::SparkDrawable::BaseSystemCreator >::moduleName[] = "spark";
const char* LunaTraits< spark::SparkDrawable::BaseSystemCreator >::parents[] = {0};
const int LunaTraits< spark::SparkDrawable::BaseSystemCreator >::hash = 47219211;
const int LunaTraits< spark::SparkDrawable::BaseSystemCreator >::uniqueIDs[] = {47219211,0};

luna_RegType LunaTraits< spark::SparkDrawable::BaseSystemCreator >::methods[] = {
	{"op_call", &luna_wrapper_spark_SparkDrawable_BaseSystemCreator::_bind_op_call},
	{"dynCast", &luna_wrapper_spark_SparkDrawable_BaseSystemCreator::_bind_dynCast},
	{"__eq", &luna_wrapper_spark_SparkDrawable_BaseSystemCreator::_bind___eq},
	{"getTable", &luna_wrapper_spark_SparkDrawable_BaseSystemCreator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< spark::SparkDrawable::BaseSystemCreator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< spark::SparkDrawable::BaseSystemCreator >::enumValues[] = {
	{0,0}
};


