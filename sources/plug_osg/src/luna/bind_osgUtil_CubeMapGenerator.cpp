#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_CubeMapGenerator.h>

class luna_wrapper_osgUtil_CubeMapGenerator {
public:
	typedef Luna< osgUtil::CubeMapGenerator > luna_t;

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
		//osgUtil::CubeMapGenerator* ptr= dynamic_cast< osgUtil::CubeMapGenerator* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::CubeMapGenerator* ptr= luna_caster< osg::Referenced, osgUtil::CubeMapGenerator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::CubeMapGenerator >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_getImage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateMap(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face)
	static int _bind_getImage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face) function, expected prototype:\nosg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face)\nClass arguments details:\n");
		}

		osg::TextureCubeMap::Face face=(osg::TextureCubeMap::Face)lua_tointeger(L,2);

		osgUtil::CubeMapGenerator* self=Luna< osg::Referenced >::checkSubType< osgUtil::CubeMapGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face)");
		}
		osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// const osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face) const
	static int _bind_getImage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face) const function, expected prototype:\nconst osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face face) const\nClass arguments details:\n");
		}

		osg::TextureCubeMap::Face face=(osg::TextureCubeMap::Face)lua_tointeger(L,2);

		osgUtil::CubeMapGenerator* self=Luna< osg::Referenced >::checkSubType< osgUtil::CubeMapGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Image * osgUtil::CubeMapGenerator::getImage(osg::TextureCubeMap::Face) const");
		}
		const osg::Image * lret = self->getImage(face);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::CubeMapGenerator::getImage
	static int _bind_getImage(lua_State *L) {
		if (_lg_typecheck_getImage_overload_1(L)) return _bind_getImage_overload_1(L);
		if (_lg_typecheck_getImage_overload_2(L)) return _bind_getImage_overload_2(L);

		luaL_error(L, "error in function getImage, cannot match any of the overloads for function getImage:\n  getImage(osg::TextureCubeMap::Face)\n  getImage(osg::TextureCubeMap::Face)\n");
		return 0;
	}

	// void osgUtil::CubeMapGenerator::generateMap(bool use_osg_system = true)
	static int _bind_generateMap(lua_State *L) {
		if (!_lg_typecheck_generateMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::CubeMapGenerator::generateMap(bool use_osg_system = true) function, expected prototype:\nvoid osgUtil::CubeMapGenerator::generateMap(bool use_osg_system = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool use_osg_system=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osgUtil::CubeMapGenerator* self=Luna< osg::Referenced >::checkSubType< osgUtil::CubeMapGenerator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::CubeMapGenerator::generateMap(bool)");
		}
		self->generateMap(use_osg_system);

		return 0;
	}


	// Operator binds:

};

osgUtil::CubeMapGenerator* LunaTraits< osgUtil::CubeMapGenerator >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Vec4f osgUtil::CubeMapGenerator::compute_color(const osg::Vec3f & R) const
}

void LunaTraits< osgUtil::CubeMapGenerator >::_bind_dtor(osgUtil::CubeMapGenerator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::CubeMapGenerator >::className[] = "CubeMapGenerator";
const char LunaTraits< osgUtil::CubeMapGenerator >::fullName[] = "osgUtil::CubeMapGenerator";
const char LunaTraits< osgUtil::CubeMapGenerator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::CubeMapGenerator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::CubeMapGenerator >::hash = 37216582;
const int LunaTraits< osgUtil::CubeMapGenerator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::CubeMapGenerator >::methods[] = {
	{"getImage", &luna_wrapper_osgUtil_CubeMapGenerator::_bind_getImage},
	{"generateMap", &luna_wrapper_osgUtil_CubeMapGenerator::_bind_generateMap},
	{"__eq", &luna_wrapper_osgUtil_CubeMapGenerator::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_CubeMapGenerator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::CubeMapGenerator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_CubeMapGenerator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::CubeMapGenerator >::enumValues[] = {
	{0,0}
};


