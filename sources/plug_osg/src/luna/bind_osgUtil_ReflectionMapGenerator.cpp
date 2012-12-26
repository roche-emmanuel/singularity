#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_ReflectionMapGenerator.h>

class luna_wrapper_osgUtil_ReflectionMapGenerator {
public:
	typedef Luna< osgUtil::ReflectionMapGenerator > luna_t;

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
		//osgUtil::ReflectionMapGenerator* ptr= dynamic_cast< osgUtil::ReflectionMapGenerator* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::ReflectionMapGenerator* ptr= luna_caster< osg::Referenced, osgUtil::ReflectionMapGenerator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::ReflectionMapGenerator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgUtil::ReflectionMapGenerator >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgUtil::ReflectionMapGenerator >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(int texture_size = 64)
	static osgUtil::ReflectionMapGenerator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(int texture_size = 64) function, expected prototype:\nosgUtil::ReflectionMapGenerator::ReflectionMapGenerator(int texture_size = 64)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int texture_size=luatop>0 ? (int)lua_tointeger(L,1) : 64;

		return new osgUtil::ReflectionMapGenerator(texture_size);
	}

	// osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::ReflectionMapGenerator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::ReflectionMapGenerator::ReflectionMapGenerator(const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgUtil::ReflectionMapGenerator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::ReflectionMapGenerator >(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator function");
		}
		const osgUtil::ReflectionMapGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgUtil::ReflectionMapGenerator(copy, copyop);
	}

	// osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, int texture_size = 64)
	static osgUtil::ReflectionMapGenerator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, int texture_size = 64) function, expected prototype:\nosgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, int texture_size = 64)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int texture_size=luatop>1 ? (int)lua_tointeger(L,2) : 64;

		return new wrapper_osgUtil_ReflectionMapGenerator(L,NULL, texture_size);
	}

	// osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::ReflectionMapGenerator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::ReflectionMapGenerator::ReflectionMapGenerator(lua_Table * data, const osgUtil::ReflectionMapGenerator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgUtil::ReflectionMapGenerator* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::ReflectionMapGenerator >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator function");
		}
		const osgUtil::ReflectionMapGenerator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::ReflectionMapGenerator::ReflectionMapGenerator function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgUtil_ReflectionMapGenerator(L,NULL, copy, copyop);
	}

	// Overload binder for osgUtil::ReflectionMapGenerator::ReflectionMapGenerator
	static osgUtil::ReflectionMapGenerator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ReflectionMapGenerator, cannot match any of the overloads for function ReflectionMapGenerator:\n  ReflectionMapGenerator(int)\n  ReflectionMapGenerator(const osgUtil::ReflectionMapGenerator &, const osg::CopyOp &)\n  ReflectionMapGenerator(lua_Table *, int)\n  ReflectionMapGenerator(lua_Table *, const osgUtil::ReflectionMapGenerator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osgUtil::ReflectionMapGenerator* LunaTraits< osgUtil::ReflectionMapGenerator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_ReflectionMapGenerator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::ReflectionMapGenerator >::_bind_dtor(osgUtil::ReflectionMapGenerator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::ReflectionMapGenerator >::className[] = "ReflectionMapGenerator";
const char LunaTraits< osgUtil::ReflectionMapGenerator >::fullName[] = "osgUtil::ReflectionMapGenerator";
const char LunaTraits< osgUtil::ReflectionMapGenerator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::ReflectionMapGenerator >::parents[] = {"osgUtil.CubeMapGenerator", 0};
const int LunaTraits< osgUtil::ReflectionMapGenerator >::hash = 6485642;
const int LunaTraits< osgUtil::ReflectionMapGenerator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::ReflectionMapGenerator >::methods[] = {
	{"__eq", &luna_wrapper_osgUtil_ReflectionMapGenerator::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_ReflectionMapGenerator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::ReflectionMapGenerator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_ReflectionMapGenerator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::ReflectionMapGenerator >::enumValues[] = {
	{0,0}
};


