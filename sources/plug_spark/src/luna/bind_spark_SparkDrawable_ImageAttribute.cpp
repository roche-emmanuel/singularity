#include <plug_common.h>

class luna_wrapper_spark_SparkDrawable_ImageAttribute {
public:
	typedef Luna< spark::SparkDrawable::ImageAttribute > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84449872) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(spark::SparkDrawable::ImageAttribute*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		spark::SparkDrawable::ImageAttribute* rhs =(Luna< spark::SparkDrawable::ImageAttribute >::check(L,2));
		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
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
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		spark::SparkDrawable::ImageAttribute* self= (spark::SparkDrawable::ImageAttribute*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< spark::SparkDrawable::ImageAttribute >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84449872) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("spark::SparkDrawable::ImageAttribute");
		
		return luna_dynamicCast(L,converters,"spark::SparkDrawable::ImageAttribute",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClamp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15557275) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// osg::ref_ptr< osg::Image > spark::SparkDrawable::ImageAttribute::image()
	static int _bind_getImage(lua_State *L) {
		if (!_lg_typecheck_getImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > spark::SparkDrawable::ImageAttribute::image() function, expected prototype:\nosg::ref_ptr< osg::Image > spark::SparkDrawable::ImageAttribute::image()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Image > spark::SparkDrawable::ImageAttribute::image(). Got : '%s'\n%s",typeid(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Image > lret = self->image;
		Luna< osg::Image >::push(L,lret.get(),false);

		return 1;
	}

	// unsigned int spark::SparkDrawable::ImageAttribute::type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int spark::SparkDrawable::ImageAttribute::type() function, expected prototype:\nunsigned int spark::SparkDrawable::ImageAttribute::type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int spark::SparkDrawable::ImageAttribute::type(). Got : '%s'\n%s",typeid(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int spark::SparkDrawable::ImageAttribute::clamp()
	static int _bind_getClamp(lua_State *L) {
		if (!_lg_typecheck_getClamp(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int spark::SparkDrawable::ImageAttribute::clamp() function, expected prototype:\nunsigned int spark::SparkDrawable::ImageAttribute::clamp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int spark::SparkDrawable::ImageAttribute::clamp(). Got : '%s'\n%s",typeid(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->clamp;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void spark::SparkDrawable::ImageAttribute::image(osg::ref_ptr< osg::Image > value)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::ImageAttribute::image(osg::ref_ptr< osg::Image > value) function, expected prototype:\nvoid spark::SparkDrawable::ImageAttribute::image(osg::ref_ptr< osg::Image > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Image > value = dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::ImageAttribute::image(osg::ref_ptr< osg::Image >). Got : '%s'\n%s",typeid(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->image = value;

		return 0;
	}

	// void spark::SparkDrawable::ImageAttribute::type(unsigned int value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::ImageAttribute::type(unsigned int value) function, expected prototype:\nvoid spark::SparkDrawable::ImageAttribute::type(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::ImageAttribute::type(unsigned int). Got : '%s'\n%s",typeid(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->type = value;

		return 0;
	}

	// void spark::SparkDrawable::ImageAttribute::clamp(unsigned int value)
	static int _bind_setClamp(lua_State *L) {
		if (!_lg_typecheck_setClamp(L)) {
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::ImageAttribute::clamp(unsigned int value) function, expected prototype:\nvoid spark::SparkDrawable::ImageAttribute::clamp(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		spark::SparkDrawable::ImageAttribute* self=(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::ImageAttribute::clamp(unsigned int). Got : '%s'\n%s",typeid(Luna< spark::SparkDrawable::ImageAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clamp = value;

		return 0;
	}


	// Operator binds:

};

spark::SparkDrawable::ImageAttribute* LunaTraits< spark::SparkDrawable::ImageAttribute >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< spark::SparkDrawable::ImageAttribute >::_bind_dtor(spark::SparkDrawable::ImageAttribute* obj) {
	delete obj;
}

const char LunaTraits< spark::SparkDrawable::ImageAttribute >::className[] = "SparkDrawable_ImageAttribute";
const char LunaTraits< spark::SparkDrawable::ImageAttribute >::fullName[] = "spark::SparkDrawable::ImageAttribute";
const char LunaTraits< spark::SparkDrawable::ImageAttribute >::moduleName[] = "spark";
const char* LunaTraits< spark::SparkDrawable::ImageAttribute >::parents[] = {0};
const int LunaTraits< spark::SparkDrawable::ImageAttribute >::hash = 84449872;
const int LunaTraits< spark::SparkDrawable::ImageAttribute >::uniqueIDs[] = {84449872,0};

luna_RegType LunaTraits< spark::SparkDrawable::ImageAttribute >::methods[] = {
	{"getImage", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_getImage},
	{"getType", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_getType},
	{"getClamp", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_getClamp},
	{"setImage", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_setImage},
	{"setType", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_setType},
	{"setClamp", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_setClamp},
	{"dynCast", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_dynCast},
	{"__eq", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind___eq},
	{"fromVoid", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_fromVoid},
	{"asVoid", &luna_wrapper_spark_SparkDrawable_ImageAttribute::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< spark::SparkDrawable::ImageAttribute >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< spark::SparkDrawable::ImageAttribute >::enumValues[] = {
	{0,0}
};


