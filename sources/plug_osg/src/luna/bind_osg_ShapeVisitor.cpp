#include <plug_common.h>

class luna_wrapper_osg_ShapeVisitor {
public:
	typedef Luna< osg::ShapeVisitor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36301858) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ShapeVisitor*)");
		}

		osg::ShapeVisitor* rhs =(Luna< osg::ShapeVisitor >::check(L,2));
		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
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

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ShapeVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ShapeVisitor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Cone* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Capsule* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_10(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ShapeVisitor::ShapeVisitor()
	static osg::ShapeVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShapeVisitor::ShapeVisitor() function, expected prototype:\nosg::ShapeVisitor::ShapeVisitor()\nClass arguments details:\n");
		}


		return new osg::ShapeVisitor();
	}


	// Function binds:
	// void osg::ShapeVisitor::apply(osg::Shape & )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Shape & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Shape & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Shape* _arg1_ptr=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Shape & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Shape &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Sphere & )
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Sphere & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Sphere & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Sphere* _arg1_ptr=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Sphere & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Sphere &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Box & )
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Box & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Box & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Box* _arg1_ptr=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Box & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Box &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Cone & )
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Cone & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Cone & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Cone* _arg1_ptr=dynamic_cast< osg::Cone* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Cone & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Cone &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Cylinder & )
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Cylinder & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Cylinder & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Cylinder* _arg1_ptr=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Cylinder & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Cylinder &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::Capsule & )
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::Capsule & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::Capsule & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Capsule* _arg1_ptr=dynamic_cast< osg::Capsule* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::Capsule & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::Capsule &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::InfinitePlane & )
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::InfinitePlane & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::InfinitePlane & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::InfinitePlane* _arg1_ptr=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::InfinitePlane & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::InfinitePlane &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::TriangleMesh & )
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::TriangleMesh & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::TriangleMesh & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::TriangleMesh* _arg1_ptr=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::TriangleMesh & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::TriangleMesh &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::ConvexHull & )
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::ConvexHull & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::ConvexHull & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ConvexHull* _arg1_ptr=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::ConvexHull & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::ConvexHull &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::HeightField & )
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::HeightField & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::HeightField & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::HeightField* _arg1_ptr=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::HeightField & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::HeightField &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShapeVisitor::apply(osg::CompositeShape & )
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeVisitor::apply(osg::CompositeShape & ) function, expected prototype:\nvoid osg::ShapeVisitor::apply(osg::CompositeShape & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::CompositeShape* _arg1_ptr=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeVisitor::apply function");
		}
		osg::CompositeShape & _arg1=*_arg1_ptr;

		osg::ShapeVisitor* self=(Luna< osg::ShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeVisitor::apply(osg::CompositeShape &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ShapeVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);
		if (_lg_typecheck_apply_overload_8(L)) return _bind_apply_overload_8(L);
		if (_lg_typecheck_apply_overload_9(L)) return _bind_apply_overload_9(L);
		if (_lg_typecheck_apply_overload_10(L)) return _bind_apply_overload_10(L);
		if (_lg_typecheck_apply_overload_11(L)) return _bind_apply_overload_11(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Shape &)\n  apply(osg::Sphere &)\n  apply(osg::Box &)\n  apply(osg::Cone &)\n  apply(osg::Cylinder &)\n  apply(osg::Capsule &)\n  apply(osg::InfinitePlane &)\n  apply(osg::TriangleMesh &)\n  apply(osg::ConvexHull &)\n  apply(osg::HeightField &)\n  apply(osg::CompositeShape &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ShapeVisitor* LunaTraits< osg::ShapeVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShapeVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ShapeVisitor >::_bind_dtor(osg::ShapeVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ShapeVisitor >::className[] = "ShapeVisitor";
const char LunaTraits< osg::ShapeVisitor >::fullName[] = "osg::ShapeVisitor";
const char LunaTraits< osg::ShapeVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ShapeVisitor >::parents[] = {0};
const int LunaTraits< osg::ShapeVisitor >::hash = 36301858;
const int LunaTraits< osg::ShapeVisitor >::uniqueIDs[] = {36301858,0};

luna_RegType LunaTraits< osg::ShapeVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ShapeVisitor::_bind_apply},
	{"dynCast", &luna_wrapper_osg_ShapeVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ShapeVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShapeVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShapeVisitor >::enumValues[] = {
	{0,0}
};


