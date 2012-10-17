#include <plug_common.h>

class luna_wrapper_osgUtil_VertexCacheVisitor {
public:
	typedef Luna< osgUtil::VertexCacheVisitor > luna_t;

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
		osgUtil::VertexCacheVisitor* ptr= dynamic_cast< osgUtil::VertexCacheVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::VertexCacheVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85233381)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_optimizeVertices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_optimizeVertices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::VertexCacheVisitor::VertexCacheVisitor(osgUtil::Optimizer * optimizer = 0)
	static osgUtil::VertexCacheVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::VertexCacheVisitor::VertexCacheVisitor(osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::VertexCacheVisitor::VertexCacheVisitor(osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 1 ID = 85233381\n");
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>0 ? (Luna< osgUtil::Optimizer >::check(L,1)) : (osgUtil::Optimizer*)0;

		return new osgUtil::VertexCacheVisitor(optimizer);
	}


	// Function binds:
	// void osgUtil::VertexCacheVisitor::optimizeVertices(osg::Geometry & geom)
	static int _bind_optimizeVertices_overload_1(lua_State *L) {
		if (!_lg_typecheck_optimizeVertices_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheVisitor::optimizeVertices(osg::Geometry & geom) function, expected prototype:\nvoid osgUtil::VertexCacheVisitor::optimizeVertices(osg::Geometry & geom)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* geom_ptr=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2));
		if( !geom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geom in osgUtil::VertexCacheVisitor::optimizeVertices function");
		}
		osg::Geometry & geom=*geom_ptr;

		osgUtil::VertexCacheVisitor* self=dynamic_cast< osgUtil::VertexCacheVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheVisitor::optimizeVertices(osg::Geometry &)");
		}
		self->optimizeVertices(geom);

		return 0;
	}

	// void osgUtil::VertexCacheVisitor::optimizeVertices()
	static int _bind_optimizeVertices_overload_2(lua_State *L) {
		if (!_lg_typecheck_optimizeVertices_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheVisitor::optimizeVertices() function, expected prototype:\nvoid osgUtil::VertexCacheVisitor::optimizeVertices()\nClass arguments details:\n");
		}


		osgUtil::VertexCacheVisitor* self=dynamic_cast< osgUtil::VertexCacheVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheVisitor::optimizeVertices()");
		}
		self->optimizeVertices();

		return 0;
	}

	// Overload binder for osgUtil::VertexCacheVisitor::optimizeVertices
	static int _bind_optimizeVertices(lua_State *L) {
		if (_lg_typecheck_optimizeVertices_overload_1(L)) return _bind_optimizeVertices_overload_1(L);
		if (_lg_typecheck_optimizeVertices_overload_2(L)) return _bind_optimizeVertices_overload_2(L);

		luaL_error(L, "error in function optimizeVertices, cannot match any of the overloads for function optimizeVertices:\n  optimizeVertices(osg::Geometry &)\n  optimizeVertices()\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::VertexCacheVisitor* LunaTraits< osgUtil::VertexCacheVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_VertexCacheVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::VertexCacheVisitor >::_bind_dtor(osgUtil::VertexCacheVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::VertexCacheVisitor >::className[] = "VertexCacheVisitor";
const char LunaTraits< osgUtil::VertexCacheVisitor >::fullName[] = "osgUtil::VertexCacheVisitor";
const char LunaTraits< osgUtil::VertexCacheVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::VertexCacheVisitor >::parents[] = {"osgUtil.GeometryCollector", 0};
const int LunaTraits< osgUtil::VertexCacheVisitor >::hash = 81431095;
const int LunaTraits< osgUtil::VertexCacheVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::VertexCacheVisitor >::methods[] = {
	{"optimizeVertices", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_optimizeVertices},
	{"__eq", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::VertexCacheVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_VertexCacheVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::VertexCacheVisitor >::enumValues[] = {
	{0,0}
};


