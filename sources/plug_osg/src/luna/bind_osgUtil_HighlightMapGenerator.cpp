#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_HighlightMapGenerator.h>

class luna_wrapper_osgUtil_HighlightMapGenerator {
public:
	typedef Luna< osgUtil::HighlightMapGenerator > luna_t;

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
		//osgUtil::HighlightMapGenerator* ptr= dynamic_cast< osgUtil::HighlightMapGenerator* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::HighlightMapGenerator* ptr= luna_caster< osg::Referenced, osgUtil::HighlightMapGenerator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::HighlightMapGenerator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!dynamic_cast< osg::Vec4f* >(Luna< osg::Vec4f >::check(L,2))) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osgUtil::HighlightMapGenerator* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!dynamic_cast< osg::Vec4f* >(Luna< osg::Vec4f >::check(L,3))) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgUtil::HighlightMapGenerator* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::HighlightMapGenerator::HighlightMapGenerator(const osg::Vec3f & light_direction, const osg::Vec4f & light_color, float specular_exponent, int texture_size = 64)
	static osgUtil::HighlightMapGenerator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::HighlightMapGenerator::HighlightMapGenerator(const osg::Vec3f & light_direction, const osg::Vec4f & light_color, float specular_exponent, int texture_size = 64) function, expected prototype:\nosgUtil::HighlightMapGenerator::HighlightMapGenerator(const osg::Vec3f & light_direction, const osg::Vec4f & light_color, float specular_exponent, int texture_size = 64)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303235\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* light_direction_ptr=(Luna< osg::Vec3f >::check(L,1));
		if( !light_direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg light_direction in osgUtil::HighlightMapGenerator::HighlightMapGenerator function");
		}
		const osg::Vec3f & light_direction=*light_direction_ptr;
		const osg::Vec4f* light_color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !light_color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg light_color in osgUtil::HighlightMapGenerator::HighlightMapGenerator function");
		}
		const osg::Vec4f & light_color=*light_color_ptr;
		float specular_exponent=(float)lua_tonumber(L,3);
		int texture_size=luatop>3 ? (int)lua_tointeger(L,4) : 64;

		return new osgUtil::HighlightMapGenerator(light_direction, light_color, specular_exponent, texture_size);
	}

	// osgUtil::HighlightMapGenerator::HighlightMapGenerator(const osgUtil::HighlightMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::HighlightMapGenerator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::HighlightMapGenerator::HighlightMapGenerator(const osgUtil::HighlightMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::HighlightMapGenerator::HighlightMapGenerator(const osgUtil::HighlightMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgUtil::HighlightMapGenerator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::HighlightMapGenerator >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::HighlightMapGenerator::HighlightMapGenerator function");
		}
		const osgUtil::HighlightMapGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::HighlightMapGenerator::HighlightMapGenerator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgUtil::HighlightMapGenerator(copy, copyop);
	}

	// osgUtil::HighlightMapGenerator::HighlightMapGenerator(lua_Table * data, const osg::Vec3f & light_direction, const osg::Vec4f & light_color, float specular_exponent, int texture_size = 64)
	static osgUtil::HighlightMapGenerator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::HighlightMapGenerator::HighlightMapGenerator(lua_Table * data, const osg::Vec3f & light_direction, const osg::Vec4f & light_color, float specular_exponent, int texture_size = 64) function, expected prototype:\nosgUtil::HighlightMapGenerator::HighlightMapGenerator(lua_Table * data, const osg::Vec3f & light_direction, const osg::Vec4f & light_color, float specular_exponent, int texture_size = 64)\nClass arguments details:\narg 2 ID = 92303204\narg 3 ID = 92303235\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec3f* light_direction_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !light_direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg light_direction in osgUtil::HighlightMapGenerator::HighlightMapGenerator function");
		}
		const osg::Vec3f & light_direction=*light_direction_ptr;
		const osg::Vec4f* light_color_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !light_color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg light_color in osgUtil::HighlightMapGenerator::HighlightMapGenerator function");
		}
		const osg::Vec4f & light_color=*light_color_ptr;
		float specular_exponent=(float)lua_tonumber(L,4);
		int texture_size=luatop>4 ? (int)lua_tointeger(L,5) : 64;

		return new wrapper_osgUtil_HighlightMapGenerator(L,NULL, light_direction, light_color, specular_exponent, texture_size);
	}

	// osgUtil::HighlightMapGenerator::HighlightMapGenerator(lua_Table * data, const osgUtil::HighlightMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::HighlightMapGenerator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::HighlightMapGenerator::HighlightMapGenerator(lua_Table * data, const osgUtil::HighlightMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::HighlightMapGenerator::HighlightMapGenerator(lua_Table * data, const osgUtil::HighlightMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgUtil::HighlightMapGenerator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::HighlightMapGenerator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::HighlightMapGenerator::HighlightMapGenerator function");
		}
		const osgUtil::HighlightMapGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::HighlightMapGenerator::HighlightMapGenerator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgUtil_HighlightMapGenerator(L,NULL, copy, copyop);
	}

	// Overload binder for osgUtil::HighlightMapGenerator::HighlightMapGenerator
	static osgUtil::HighlightMapGenerator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function HighlightMapGenerator, cannot match any of the overloads for function HighlightMapGenerator:\n  HighlightMapGenerator(const osg::Vec3f &, const osg::Vec4f &, float, int)\n  HighlightMapGenerator(const osgUtil::HighlightMapGenerator &, const osg::CopyOp &)\n  HighlightMapGenerator(lua_Table *, const osg::Vec3f &, const osg::Vec4f &, float, int)\n  HighlightMapGenerator(lua_Table *, const osgUtil::HighlightMapGenerator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osgUtil::HighlightMapGenerator* LunaTraits< osgUtil::HighlightMapGenerator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_HighlightMapGenerator::_bind_ctor(L);
}

void LunaTraits< osgUtil::HighlightMapGenerator >::_bind_dtor(osgUtil::HighlightMapGenerator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::HighlightMapGenerator >::className[] = "HighlightMapGenerator";
const char LunaTraits< osgUtil::HighlightMapGenerator >::fullName[] = "osgUtil::HighlightMapGenerator";
const char LunaTraits< osgUtil::HighlightMapGenerator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::HighlightMapGenerator >::parents[] = {"osgUtil.CubeMapGenerator", 0};
const int LunaTraits< osgUtil::HighlightMapGenerator >::hash = 88222417;
const int LunaTraits< osgUtil::HighlightMapGenerator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::HighlightMapGenerator >::methods[] = {
	{"__eq", &luna_wrapper_osgUtil_HighlightMapGenerator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::HighlightMapGenerator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_HighlightMapGenerator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::HighlightMapGenerator >::enumValues[] = {
	{0,0}
};


