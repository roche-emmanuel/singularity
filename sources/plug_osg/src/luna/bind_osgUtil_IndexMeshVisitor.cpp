#include <plug_common.h>

class luna_wrapper_osgUtil_IndexMeshVisitor {
public:
	typedef Luna< osgUtil::IndexMeshVisitor > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::IndexMeshVisitor* ptr= dynamic_cast< osgUtil::IndexMeshVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IndexMeshVisitor >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_makeMesh_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeMesh_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::IndexMeshVisitor::IndexMeshVisitor(osgUtil::Optimizer * optimizer = 0)
	static osgUtil::IndexMeshVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IndexMeshVisitor::IndexMeshVisitor(osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::IndexMeshVisitor::IndexMeshVisitor(osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 1 ID = 85233381\n");
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>0 ? (Luna< osgUtil::Optimizer >::check(L,1)) : (osgUtil::Optimizer*)0;

		return new osgUtil::IndexMeshVisitor(optimizer);
	}


	// Function binds:
	// void osgUtil::IndexMeshVisitor::makeMesh(osg::Geometry & geom)
	static int _bind_makeMesh_overload_1(lua_State *L) {
		if (!_lg_typecheck_makeMesh_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IndexMeshVisitor::makeMesh(osg::Geometry & geom) function, expected prototype:\nvoid osgUtil::IndexMeshVisitor::makeMesh(osg::Geometry & geom)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* geom_ptr=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2));
		if( !geom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geom in osgUtil::IndexMeshVisitor::makeMesh function");
		}
		osg::Geometry & geom=*geom_ptr;

		osgUtil::IndexMeshVisitor* self=dynamic_cast< osgUtil::IndexMeshVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IndexMeshVisitor::makeMesh(osg::Geometry &)");
		}
		self->makeMesh(geom);

		return 0;
	}

	// void osgUtil::IndexMeshVisitor::makeMesh()
	static int _bind_makeMesh_overload_2(lua_State *L) {
		if (!_lg_typecheck_makeMesh_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IndexMeshVisitor::makeMesh() function, expected prototype:\nvoid osgUtil::IndexMeshVisitor::makeMesh()\nClass arguments details:\n");
		}


		osgUtil::IndexMeshVisitor* self=dynamic_cast< osgUtil::IndexMeshVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IndexMeshVisitor::makeMesh()");
		}
		self->makeMesh();

		return 0;
	}

	// Overload binder for osgUtil::IndexMeshVisitor::makeMesh
	static int _bind_makeMesh(lua_State *L) {
		if (_lg_typecheck_makeMesh_overload_1(L)) return _bind_makeMesh_overload_1(L);
		if (_lg_typecheck_makeMesh_overload_2(L)) return _bind_makeMesh_overload_2(L);

		luaL_error(L, "error in function makeMesh, cannot match any of the overloads for function makeMesh:\n  makeMesh(osg::Geometry &)\n  makeMesh()\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::IndexMeshVisitor* LunaTraits< osgUtil::IndexMeshVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_IndexMeshVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::IndexMeshVisitor >::_bind_dtor(osgUtil::IndexMeshVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IndexMeshVisitor >::className[] = "IndexMeshVisitor";
const char LunaTraits< osgUtil::IndexMeshVisitor >::fullName[] = "osgUtil::IndexMeshVisitor";
const char LunaTraits< osgUtil::IndexMeshVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IndexMeshVisitor >::parents[] = {"osgUtil.GeometryCollector", 0};
const int LunaTraits< osgUtil::IndexMeshVisitor >::hash = 6251060;
const int LunaTraits< osgUtil::IndexMeshVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IndexMeshVisitor >::methods[] = {
	{"makeMesh", &luna_wrapper_osgUtil_IndexMeshVisitor::_bind_makeMesh},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IndexMeshVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IndexMeshVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IndexMeshVisitor >::enumValues[] = {
	{0,0}
};


