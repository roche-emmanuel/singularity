#include <plug_common.h>

class luna_wrapper_osg_ComputeBoundsVisitor {
public:
	typedef Luna< osg::ComputeBoundsVisitor > luna_t;

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
		osg::ComputeBoundsVisitor* ptr= dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ComputeBoundsVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPolytope(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBase(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_applyDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ComputeBoundsVisitor::ComputeBoundsVisitor(osg::NodeVisitor::TraversalMode traversalMode = osg::NodeVisitor::TRAVERSE_ALL_CHILDREN)
	static osg::ComputeBoundsVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ComputeBoundsVisitor::ComputeBoundsVisitor(osg::NodeVisitor::TraversalMode traversalMode = osg::NodeVisitor::TRAVERSE_ALL_CHILDREN) function, expected prototype:\nosg::ComputeBoundsVisitor::ComputeBoundsVisitor(osg::NodeVisitor::TraversalMode traversalMode = osg::NodeVisitor::TRAVERSE_ALL_CHILDREN)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		osg::NodeVisitor::TraversalMode traversalMode=luatop>0 ? (osg::NodeVisitor::TraversalMode)lua_tointeger(L,1) : osg::NodeVisitor::TRAVERSE_ALL_CHILDREN;

		return new osg::ComputeBoundsVisitor(traversalMode);
	}


	// Function binds:
	// const char * osg::ComputeBoundsVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ComputeBoundsVisitor::libraryName() const function, expected prototype:\nconst char * osg::ComputeBoundsVisitor::libraryName() const\nClass arguments details:\n");
		}


		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ComputeBoundsVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ComputeBoundsVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ComputeBoundsVisitor::className() const function, expected prototype:\nconst char * osg::ComputeBoundsVisitor::className() const\nClass arguments details:\n");
		}


		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ComputeBoundsVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ComputeBoundsVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::reset() function, expected prototype:\nvoid osg::ComputeBoundsVisitor::reset()\nClass arguments details:\n");
		}


		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// osg::BoundingBoxd & osg::ComputeBoundsVisitor::getBoundingBox()
	static int _bind_getBoundingBox(lua_State *L) {
		if (!_lg_typecheck_getBoundingBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd & osg::ComputeBoundsVisitor::getBoundingBox() function, expected prototype:\nosg::BoundingBoxd & osg::ComputeBoundsVisitor::getBoundingBox()\nClass arguments details:\n");
		}


		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd & osg::ComputeBoundsVisitor::getBoundingBox()");
		}
		const osg::BoundingBoxd* lret = &self->getBoundingBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,false);

		return 1;
	}

	// void osg::ComputeBoundsVisitor::getPolytope(osg::Polytope & polytope, float margin = 0.1) const
	static int _bind_getPolytope(lua_State *L) {
		if (!_lg_typecheck_getPolytope(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::getPolytope(osg::Polytope & polytope, float margin = 0.1) const function, expected prototype:\nvoid osg::ComputeBoundsVisitor::getPolytope(osg::Polytope & polytope, float margin = 0.1) const\nClass arguments details:\narg 1 ID = 26652350\n");
		}

		int luatop = lua_gettop(L);

		osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osg::ComputeBoundsVisitor::getPolytope function");
		}
		osg::Polytope & polytope=*polytope_ptr;
		float margin=luatop>2 ? (float)lua_tonumber(L,3) : 0.1;

		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::getPolytope(osg::Polytope &, float) const");
		}
		self->getPolytope(polytope, margin);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::getBase(osg::Polytope & polytope, float margin = 0.1) const
	static int _bind_getBase(lua_State *L) {
		if (!_lg_typecheck_getBase(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::getBase(osg::Polytope & polytope, float margin = 0.1) const function, expected prototype:\nvoid osg::ComputeBoundsVisitor::getBase(osg::Polytope & polytope, float margin = 0.1) const\nClass arguments details:\narg 1 ID = 26652350\n");
		}

		int luatop = lua_gettop(L);

		osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osg::ComputeBoundsVisitor::getBase function");
		}
		osg::Polytope & polytope=*polytope_ptr;
		float margin=luatop>2 ? (float)lua_tonumber(L,3) : 0.1;

		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::getBase(osg::Polytope &, float) const");
		}
		self->getBase(polytope, margin);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::ComputeBoundsVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::apply(osg::Transform & transform)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::apply(osg::Transform & transform) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::apply(osg::Transform & transform)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* transform_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in osg::ComputeBoundsVisitor::apply function");
		}
		osg::Transform & transform=*transform_ptr;

		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::apply(osg::Transform &)");
		}
		self->apply(transform);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::apply(osg::Geode & geode)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osg::ComputeBoundsVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// Overload binder for osg::ComputeBoundsVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Transform &)\n  apply(osg::Geode &)\n");
		return 0;
	}

	// void osg::ComputeBoundsVisitor::pushMatrix(osg::Matrixd & matrix)
	static int _bind_pushMatrix(lua_State *L) {
		if (!_lg_typecheck_pushMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::pushMatrix(osg::Matrixd & matrix) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::pushMatrix(osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::ComputeBoundsVisitor::pushMatrix function");
		}
		osg::Matrixd & matrix=*matrix_ptr;

		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::pushMatrix(osg::Matrixd &)");
		}
		self->pushMatrix(matrix);

		return 0;
	}

	// void osg::ComputeBoundsVisitor::popMatrix()
	static int _bind_popMatrix(lua_State *L) {
		if (!_lg_typecheck_popMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::popMatrix() function, expected prototype:\nvoid osg::ComputeBoundsVisitor::popMatrix()\nClass arguments details:\n");
		}


		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::popMatrix()");
		}
		self->popMatrix();

		return 0;
	}

	// void osg::ComputeBoundsVisitor::applyDrawable(osg::Drawable * drawable)
	static int _bind_applyDrawable(lua_State *L) {
		if (!_lg_typecheck_applyDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ComputeBoundsVisitor::applyDrawable(osg::Drawable * drawable) function, expected prototype:\nvoid osg::ComputeBoundsVisitor::applyDrawable(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osg::ComputeBoundsVisitor* self=dynamic_cast< osg::ComputeBoundsVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ComputeBoundsVisitor::applyDrawable(osg::Drawable *)");
		}
		self->applyDrawable(drawable);

		return 0;
	}


	// Operator binds:

};

osg::ComputeBoundsVisitor* LunaTraits< osg::ComputeBoundsVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ComputeBoundsVisitor::_bind_ctor(L);
}

void LunaTraits< osg::ComputeBoundsVisitor >::_bind_dtor(osg::ComputeBoundsVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ComputeBoundsVisitor >::className[] = "ComputeBoundsVisitor";
const char LunaTraits< osg::ComputeBoundsVisitor >::fullName[] = "osg::ComputeBoundsVisitor";
const char LunaTraits< osg::ComputeBoundsVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ComputeBoundsVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osg::ComputeBoundsVisitor >::hash = 55263521;
const int LunaTraits< osg::ComputeBoundsVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ComputeBoundsVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_className},
	{"reset", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_reset},
	{"getBoundingBox", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_getBoundingBox},
	{"getPolytope", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_getPolytope},
	{"getBase", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_getBase},
	{"apply", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_apply},
	{"pushMatrix", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_pushMatrix},
	{"popMatrix", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_popMatrix},
	{"applyDrawable", &luna_wrapper_osg_ComputeBoundsVisitor::_bind_applyDrawable},
	{"__eq", &luna_wrapper_osg_ComputeBoundsVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ComputeBoundsVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ComputeBoundsVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ComputeBoundsVisitor >::enumValues[] = {
	{0,0}
};


