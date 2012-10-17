#include <plug_common.h>

class luna_wrapper_osg_TriangleMesh {
public:
	typedef Luna< osg::TriangleMesh > luna_t;

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
		osg::TriangleMesh* ptr= dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TriangleMesh >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,36301858) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,45826538) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7204710)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIndices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TriangleMesh::TriangleMesh()
	static osg::TriangleMesh* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TriangleMesh::TriangleMesh() function, expected prototype:\nosg::TriangleMesh::TriangleMesh()\nClass arguments details:\n");
		}


		return new osg::TriangleMesh();
	}

	// osg::TriangleMesh::TriangleMesh(const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TriangleMesh* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TriangleMesh::TriangleMesh(const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TriangleMesh::TriangleMesh(const osg::TriangleMesh & mesh, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TriangleMesh* mesh_ptr=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in osg::TriangleMesh::TriangleMesh function");
		}
		const osg::TriangleMesh & mesh=*mesh_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TriangleMesh::TriangleMesh function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TriangleMesh(mesh, copyop);
	}

	// Overload binder for osg::TriangleMesh::TriangleMesh
	static osg::TriangleMesh* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TriangleMesh, cannot match any of the overloads for function TriangleMesh:\n  TriangleMesh()\n  TriangleMesh(const osg::TriangleMesh &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TriangleMesh::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TriangleMesh::cloneType() const function, expected prototype:\nosg::Object * osg::TriangleMesh::cloneType() const\nClass arguments details:\n");
		}


		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TriangleMesh::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TriangleMesh::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TriangleMesh::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::TriangleMesh::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TriangleMesh::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TriangleMesh::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TriangleMesh::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TriangleMesh::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TriangleMesh::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TriangleMesh::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TriangleMesh::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TriangleMesh::libraryName() const function, expected prototype:\nconst char * osg::TriangleMesh::libraryName() const\nClass arguments details:\n");
		}


		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TriangleMesh::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TriangleMesh::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TriangleMesh::className() const function, expected prototype:\nconst char * osg::TriangleMesh::className() const\nClass arguments details:\n");
		}


		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TriangleMesh::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::TriangleMesh::accept(osg::ShapeVisitor & )
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::accept(osg::ShapeVisitor & ) function, expected prototype:\nvoid osg::TriangleMesh::accept(osg::ShapeVisitor & )\nClass arguments details:\narg 1 ID = 36301858\n");
		}

		osg::ShapeVisitor* _arg1_ptr=(Luna< osg::ShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TriangleMesh::accept function");
		}
		osg::ShapeVisitor & _arg1=*_arg1_ptr;

		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::accept(osg::ShapeVisitor &)");
		}
		self->accept(_arg1);

		return 0;
	}

	// void osg::TriangleMesh::accept(osg::ConstShapeVisitor & ) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::accept(osg::ConstShapeVisitor & ) const function, expected prototype:\nvoid osg::TriangleMesh::accept(osg::ConstShapeVisitor & ) const\nClass arguments details:\narg 1 ID = 45826538\n");
		}

		osg::ConstShapeVisitor* _arg1_ptr=(Luna< osg::ConstShapeVisitor >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TriangleMesh::accept function");
		}
		osg::ConstShapeVisitor & _arg1=*_arg1_ptr;

		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::accept(osg::ConstShapeVisitor &) const");
		}
		self->accept(_arg1);

		return 0;
	}

	// Overload binder for osg::TriangleMesh::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ShapeVisitor &)\n  accept(osg::ConstShapeVisitor &)\n");
		return 0;
	}

	// void osg::TriangleMesh::setVertices(osg::Vec3Array * vertices)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::setVertices(osg::Vec3Array * vertices) function, expected prototype:\nvoid osg::TriangleMesh::setVertices(osg::Vec3Array * vertices)\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		osg::Vec3Array* vertices=(Luna< osg::Vec3Array >::check(L,2));

		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::setVertices(osg::Vec3Array *)");
		}
		self->setVertices(vertices);

		return 0;
	}

	// osg::Vec3Array * osg::TriangleMesh::getVertices()
	static int _bind_getVertices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertices_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osg::TriangleMesh::getVertices() function, expected prototype:\nosg::Vec3Array * osg::TriangleMesh::getVertices()\nClass arguments details:\n");
		}


		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osg::TriangleMesh::getVertices()");
		}
		osg::Vec3Array * lret = self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3Array * osg::TriangleMesh::getVertices() const
	static int _bind_getVertices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertices_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3Array * osg::TriangleMesh::getVertices() const function, expected prototype:\nconst osg::Vec3Array * osg::TriangleMesh::getVertices() const\nClass arguments details:\n");
		}


		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3Array * osg::TriangleMesh::getVertices() const");
		}
		const osg::Vec3Array * lret = self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TriangleMesh::getVertices
	static int _bind_getVertices(lua_State *L) {
		if (_lg_typecheck_getVertices_overload_1(L)) return _bind_getVertices_overload_1(L);
		if (_lg_typecheck_getVertices_overload_2(L)) return _bind_getVertices_overload_2(L);

		luaL_error(L, "error in function getVertices, cannot match any of the overloads for function getVertices:\n  getVertices()\n  getVertices()\n");
		return 0;
	}

	// void osg::TriangleMesh::setIndices(osg::IndexArray * indices)
	static int _bind_setIndices(lua_State *L) {
		if (!_lg_typecheck_setIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TriangleMesh::setIndices(osg::IndexArray * indices) function, expected prototype:\nvoid osg::TriangleMesh::setIndices(osg::IndexArray * indices)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::IndexArray* indices=dynamic_cast< osg::IndexArray* >(Luna< osg::Referenced >::check(L,2));

		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TriangleMesh::setIndices(osg::IndexArray *)");
		}
		self->setIndices(indices);

		return 0;
	}

	// osg::IndexArray * osg::TriangleMesh::getIndices()
	static int _bind_getIndices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getIndices_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::IndexArray * osg::TriangleMesh::getIndices() function, expected prototype:\nosg::IndexArray * osg::TriangleMesh::getIndices()\nClass arguments details:\n");
		}


		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::IndexArray * osg::TriangleMesh::getIndices()");
		}
		osg::IndexArray * lret = self->getIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// const osg::IndexArray * osg::TriangleMesh::getIndices() const
	static int _bind_getIndices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getIndices_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::IndexArray * osg::TriangleMesh::getIndices() const function, expected prototype:\nconst osg::IndexArray * osg::TriangleMesh::getIndices() const\nClass arguments details:\n");
		}


		osg::TriangleMesh* self=dynamic_cast< osg::TriangleMesh* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::IndexArray * osg::TriangleMesh::getIndices() const");
		}
		const osg::IndexArray * lret = self->getIndices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::IndexArray >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TriangleMesh::getIndices
	static int _bind_getIndices(lua_State *L) {
		if (_lg_typecheck_getIndices_overload_1(L)) return _bind_getIndices_overload_1(L);
		if (_lg_typecheck_getIndices_overload_2(L)) return _bind_getIndices_overload_2(L);

		luaL_error(L, "error in function getIndices, cannot match any of the overloads for function getIndices:\n  getIndices()\n  getIndices()\n");
		return 0;
	}


	// Operator binds:

};

osg::TriangleMesh* LunaTraits< osg::TriangleMesh >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TriangleMesh::_bind_ctor(L);
}

void LunaTraits< osg::TriangleMesh >::_bind_dtor(osg::TriangleMesh* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TriangleMesh >::className[] = "TriangleMesh";
const char LunaTraits< osg::TriangleMesh >::fullName[] = "osg::TriangleMesh";
const char LunaTraits< osg::TriangleMesh >::moduleName[] = "osg";
const char* LunaTraits< osg::TriangleMesh >::parents[] = {"osg.Shape", 0};
const int LunaTraits< osg::TriangleMesh >::hash = 23977023;
const int LunaTraits< osg::TriangleMesh >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TriangleMesh >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TriangleMesh::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TriangleMesh::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TriangleMesh::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TriangleMesh::_bind_libraryName},
	{"className", &luna_wrapper_osg_TriangleMesh::_bind_className},
	{"accept", &luna_wrapper_osg_TriangleMesh::_bind_accept},
	{"setVertices", &luna_wrapper_osg_TriangleMesh::_bind_setVertices},
	{"getVertices", &luna_wrapper_osg_TriangleMesh::_bind_getVertices},
	{"setIndices", &luna_wrapper_osg_TriangleMesh::_bind_setIndices},
	{"getIndices", &luna_wrapper_osg_TriangleMesh::_bind_getIndices},
	{"__eq", &luna_wrapper_osg_TriangleMesh::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TriangleMesh >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TriangleMesh::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TriangleMesh >::enumValues[] = {
	{0,0}
};


