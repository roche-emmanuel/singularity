#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_HalfWayMapGenerator.h>

class luna_wrapper_osgUtil_HalfWayMapGenerator {
public:
	typedef Luna< osgUtil::HalfWayMapGenerator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
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

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgUtil::HalfWayMapGenerator* ptr= dynamic_cast< osgUtil::HalfWayMapGenerator* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::HalfWayMapGenerator* ptr= luna_caster< osg::Referenced, osgUtil::HalfWayMapGenerator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::HalfWayMapGenerator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osgUtil::HalfWayMapGenerator* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgUtil::HalfWayMapGenerator* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::HalfWayMapGenerator::HalfWayMapGenerator(const osg::Vec3f & light_direction, int texture_size = 64)
	static osgUtil::HalfWayMapGenerator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator(const osg::Vec3f & light_direction, int texture_size = 64) function, expected prototype:\nosgUtil::HalfWayMapGenerator::HalfWayMapGenerator(const osg::Vec3f & light_direction, int texture_size = 64)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* light_direction_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !light_direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg light_direction in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator function");
		}
		const osg::Vec3f & light_direction=*light_direction_ptr;
		int texture_size=luatop>1 ? (int)lua_tointeger(L,2) : 64;

		return new osgUtil::HalfWayMapGenerator(light_direction, texture_size);
	}

	// osgUtil::HalfWayMapGenerator::HalfWayMapGenerator(const osgUtil::HalfWayMapGenerator & copy, const osg::CopyOp & copyop)
	static osgUtil::HalfWayMapGenerator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator(const osgUtil::HalfWayMapGenerator & copy, const osg::CopyOp & copyop) function, expected prototype:\nosgUtil::HalfWayMapGenerator::HalfWayMapGenerator(const osgUtil::HalfWayMapGenerator & copy, const osg::CopyOp & copyop)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osgUtil::HalfWayMapGenerator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::HalfWayMapGenerator >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator function");
		}
		const osgUtil::HalfWayMapGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new osgUtil::HalfWayMapGenerator(copy, copyop);
	}

	// osgUtil::HalfWayMapGenerator::HalfWayMapGenerator(lua_Table * data, const osg::Vec3f & light_direction, int texture_size = 64)
	static osgUtil::HalfWayMapGenerator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator(lua_Table * data, const osg::Vec3f & light_direction, int texture_size = 64) function, expected prototype:\nosgUtil::HalfWayMapGenerator::HalfWayMapGenerator(lua_Table * data, const osg::Vec3f & light_direction, int texture_size = 64)\nClass arguments details:\narg 2 ID = 92303204\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* light_direction_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !light_direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg light_direction in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator function");
		}
		const osg::Vec3f & light_direction=*light_direction_ptr;
		int texture_size=luatop>2 ? (int)lua_tointeger(L,3) : 64;

		return new wrapper_osgUtil_HalfWayMapGenerator(L,NULL, light_direction, texture_size);
	}

	// osgUtil::HalfWayMapGenerator::HalfWayMapGenerator(lua_Table * data, const osgUtil::HalfWayMapGenerator & copy, const osg::CopyOp & copyop)
	static osgUtil::HalfWayMapGenerator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator(lua_Table * data, const osgUtil::HalfWayMapGenerator & copy, const osg::CopyOp & copyop) function, expected prototype:\nosgUtil::HalfWayMapGenerator::HalfWayMapGenerator(lua_Table * data, const osgUtil::HalfWayMapGenerator & copy, const osg::CopyOp & copyop)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		const osgUtil::HalfWayMapGenerator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::HalfWayMapGenerator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator function");
		}
		const osgUtil::HalfWayMapGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::HalfWayMapGenerator::HalfWayMapGenerator function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		return new wrapper_osgUtil_HalfWayMapGenerator(L,NULL, copy, copyop);
	}

	// Overload binder for osgUtil::HalfWayMapGenerator::HalfWayMapGenerator
	static osgUtil::HalfWayMapGenerator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function HalfWayMapGenerator, cannot match any of the overloads for function HalfWayMapGenerator:\n  HalfWayMapGenerator(const osg::Vec3f &, int)\n  HalfWayMapGenerator(const osgUtil::HalfWayMapGenerator &, const osg::CopyOp &)\n  HalfWayMapGenerator(lua_Table *, const osg::Vec3f &, int)\n  HalfWayMapGenerator(lua_Table *, const osgUtil::HalfWayMapGenerator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osgUtil::HalfWayMapGenerator* LunaTraits< osgUtil::HalfWayMapGenerator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_HalfWayMapGenerator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::HalfWayMapGenerator >::_bind_dtor(osgUtil::HalfWayMapGenerator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::HalfWayMapGenerator >::className[] = "HalfWayMapGenerator";
const char LunaTraits< osgUtil::HalfWayMapGenerator >::fullName[] = "osgUtil::HalfWayMapGenerator";
const char LunaTraits< osgUtil::HalfWayMapGenerator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::HalfWayMapGenerator >::parents[] = {"osgUtil.CubeMapGenerator", 0};
const int LunaTraits< osgUtil::HalfWayMapGenerator >::hash = 66551702;
const int LunaTraits< osgUtil::HalfWayMapGenerator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::HalfWayMapGenerator >::methods[] = {
	{"__eq", &luna_wrapper_osgUtil_HalfWayMapGenerator::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_HalfWayMapGenerator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::HalfWayMapGenerator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_HalfWayMapGenerator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::HalfWayMapGenerator >::enumValues[] = {
	{0,0}
};


