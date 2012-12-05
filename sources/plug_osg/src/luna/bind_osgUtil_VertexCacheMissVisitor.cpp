#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_VertexCacheMissVisitor.h>

class luna_wrapper_osgUtil_VertexCacheMissVisitor {
public:
	typedef Luna< osgUtil::VertexCacheMissVisitor > luna_t;

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
		osgUtil::VertexCacheMissVisitor* ptr= dynamic_cast< osgUtil::VertexCacheMissVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::VertexCacheMissVisitor >::push(L,ptr,false);
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

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_doGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(unsigned int cacheSize = 16)
	static osgUtil::VertexCacheMissVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(unsigned int cacheSize = 16) function, expected prototype:\nosgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(unsigned int cacheSize = 16)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned cacheSize=luatop>0 ? (unsigned)lua_tointeger(L,1) : 16;

		return new osgUtil::VertexCacheMissVisitor(cacheSize);
	}

	// osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(lua_Table * data, unsigned int cacheSize = 16)
	static osgUtil::VertexCacheMissVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(lua_Table * data, unsigned int cacheSize = 16) function, expected prototype:\nosgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor(lua_Table * data, unsigned int cacheSize = 16)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned cacheSize=luatop>1 ? (unsigned)lua_tointeger(L,2) : 16;

		return new wrapper_osgUtil_VertexCacheMissVisitor(L,NULL, cacheSize);
	}

	// Overload binder for osgUtil::VertexCacheMissVisitor::VertexCacheMissVisitor
	static osgUtil::VertexCacheMissVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function VertexCacheMissVisitor, cannot match any of the overloads for function VertexCacheMissVisitor:\n  VertexCacheMissVisitor(unsigned int)\n  VertexCacheMissVisitor(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::VertexCacheMissVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::reset() function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::reset()\nClass arguments details:\n");
		}


		osgUtil::VertexCacheMissVisitor* self=dynamic_cast< osgUtil::VertexCacheMissVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::VertexCacheMissVisitor::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::VertexCacheMissVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::VertexCacheMissVisitor* self=dynamic_cast< osgUtil::VertexCacheMissVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::VertexCacheMissVisitor::doGeometry(osg::Geometry & geom)
	static int _bind_doGeometry(lua_State *L) {
		if (!_lg_typecheck_doGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheMissVisitor::doGeometry(osg::Geometry & geom) function, expected prototype:\nvoid osgUtil::VertexCacheMissVisitor::doGeometry(osg::Geometry & geom)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* geom_ptr=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2));
		if( !geom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geom in osgUtil::VertexCacheMissVisitor::doGeometry function");
		}
		osg::Geometry & geom=*geom_ptr;

		osgUtil::VertexCacheMissVisitor* self=dynamic_cast< osgUtil::VertexCacheMissVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheMissVisitor::doGeometry(osg::Geometry &)");
		}
		self->doGeometry(geom);

		return 0;
	}


	// Operator binds:

};

osgUtil::VertexCacheMissVisitor* LunaTraits< osgUtil::VertexCacheMissVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::VertexCacheMissVisitor >::_bind_dtor(osgUtil::VertexCacheMissVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::VertexCacheMissVisitor >::className[] = "VertexCacheMissVisitor";
const char LunaTraits< osgUtil::VertexCacheMissVisitor >::fullName[] = "osgUtil::VertexCacheMissVisitor";
const char LunaTraits< osgUtil::VertexCacheMissVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::VertexCacheMissVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::VertexCacheMissVisitor >::hash = 61441161;
const int LunaTraits< osgUtil::VertexCacheMissVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::VertexCacheMissVisitor >::methods[] = {
	{"reset", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_reset},
	{"apply", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_apply},
	{"doGeometry", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind_doGeometry},
	{"__eq", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::VertexCacheMissVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_VertexCacheMissVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::VertexCacheMissVisitor >::enumValues[] = {
	{0,0}
};


