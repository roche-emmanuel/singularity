#include <plug_common.h>

class luna_wrapper_osg_ConstShapeVisitor {
public:
	typedef Luna< osg::ConstShapeVisitor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45826538) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ConstShapeVisitor*)");
		}

		osg::ConstShapeVisitor* rhs =(Luna< osg::ConstShapeVisitor >::check(L,2));
		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
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

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ConstShapeVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ConstShapeVisitor",name);
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
	// osg::ConstShapeVisitor::ConstShapeVisitor()
	static osg::ConstShapeVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ConstShapeVisitor::ConstShapeVisitor() function, expected prototype:\nosg::ConstShapeVisitor::ConstShapeVisitor()\nClass arguments details:\n");
		}


		return new osg::ConstShapeVisitor();
	}


	// Function binds:
	// void osg::ConstShapeVisitor::apply(const osg::Shape & )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Shape & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Shape & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Shape* _arg1_ptr=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Shape & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Shape &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Sphere & )
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Sphere & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Sphere & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Sphere* _arg1_ptr=dynamic_cast< osg::Sphere* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Sphere & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Sphere &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Box & )
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Box & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Box & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Box* _arg1_ptr=dynamic_cast< osg::Box* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Box & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Box &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Cone & )
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Cone & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Cone & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Cone* _arg1_ptr=dynamic_cast< osg::Cone* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Cone & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Cone &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Cylinder & )
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Cylinder & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Cylinder & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Cylinder* _arg1_ptr=dynamic_cast< osg::Cylinder* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Cylinder & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Cylinder &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::Capsule & )
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::Capsule & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::Capsule & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Capsule* _arg1_ptr=dynamic_cast< osg::Capsule* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::Capsule & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::Capsule &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::InfinitePlane & )
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::InfinitePlane & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::InfinitePlane & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::InfinitePlane* _arg1_ptr=dynamic_cast< osg::InfinitePlane* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::InfinitePlane & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::InfinitePlane &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::TriangleMesh & )
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::TriangleMesh & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::TriangleMesh & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::TriangleMesh* _arg1_ptr=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::TriangleMesh & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::TriangleMesh &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::ConvexHull & )
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::ConvexHull & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::ConvexHull & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::ConvexHull* _arg1_ptr=dynamic_cast< osg::ConvexHull* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::ConvexHull & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::ConvexHull &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::HeightField & )
	static int _bind_apply_overload_10(lua_State *L) {
		if (!_lg_typecheck_apply_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::HeightField & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::HeightField & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::HeightField* _arg1_ptr=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::HeightField &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ConstShapeVisitor::apply(const osg::CompositeShape & )
	static int _bind_apply_overload_11(lua_State *L) {
		if (!_lg_typecheck_apply_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConstShapeVisitor::apply(const osg::CompositeShape & ) function, expected prototype:\nvoid osg::ConstShapeVisitor::apply(const osg::CompositeShape & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::CompositeShape* _arg1_ptr=dynamic_cast< osg::CompositeShape* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ConstShapeVisitor::apply function");
		}
		const osg::CompositeShape & _arg1=*_arg1_ptr;

		osg::ConstShapeVisitor* self=(Luna< osg::ConstShapeVisitor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConstShapeVisitor::apply(const osg::CompositeShape &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// Overload binder for osg::ConstShapeVisitor::apply
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

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(const osg::Shape &)\n  apply(const osg::Sphere &)\n  apply(const osg::Box &)\n  apply(const osg::Cone &)\n  apply(const osg::Cylinder &)\n  apply(const osg::Capsule &)\n  apply(const osg::InfinitePlane &)\n  apply(const osg::TriangleMesh &)\n  apply(const osg::ConvexHull &)\n  apply(const osg::HeightField &)\n  apply(const osg::CompositeShape &)\n");
		return 0;
	}


	// Operator binds:

};

osg::ConstShapeVisitor* LunaTraits< osg::ConstShapeVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ConstShapeVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ConstShapeVisitor >::_bind_dtor(osg::ConstShapeVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ConstShapeVisitor >::className[] = "ConstShapeVisitor";
const char LunaTraits< osg::ConstShapeVisitor >::fullName[] = "osg::ConstShapeVisitor";
const char LunaTraits< osg::ConstShapeVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ConstShapeVisitor >::parents[] = {0};
const int LunaTraits< osg::ConstShapeVisitor >::hash = 45826538;
const int LunaTraits< osg::ConstShapeVisitor >::uniqueIDs[] = {45826538,0};

luna_RegType LunaTraits< osg::ConstShapeVisitor >::methods[] = {
	{"apply", &luna_wrapper_osg_ConstShapeVisitor::_bind_apply},
	{"dynCast", &luna_wrapper_osg_ConstShapeVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ConstShapeVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ConstShapeVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ConstShapeVisitor >::enumValues[] = {
	{0,0}
};


