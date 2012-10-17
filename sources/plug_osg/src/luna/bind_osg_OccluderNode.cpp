#include <plug_common.h>

class luna_wrapper_osg_OccluderNode {
public:
	typedef Luna< osg::OccluderNode > luna_t;

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
		osg::OccluderNode* ptr= dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::OccluderNode >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOccluder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOccluder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOccluder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::OccluderNode::OccluderNode()
	static osg::OccluderNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::OccluderNode::OccluderNode() function, expected prototype:\nosg::OccluderNode::OccluderNode()\nClass arguments details:\n");
		}


		return new osg::OccluderNode();
	}

	// osg::OccluderNode::OccluderNode(const osg::OccluderNode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::OccluderNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::OccluderNode::OccluderNode(const osg::OccluderNode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::OccluderNode::OccluderNode(const osg::OccluderNode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::OccluderNode* _arg1_ptr=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::OccluderNode::OccluderNode function");
		}
		const osg::OccluderNode & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OccluderNode::OccluderNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::OccluderNode(_arg1, copyop);
	}

	// Overload binder for osg::OccluderNode::OccluderNode
	static osg::OccluderNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function OccluderNode, cannot match any of the overloads for function OccluderNode:\n  OccluderNode()\n  OccluderNode(const osg::OccluderNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::OccluderNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OccluderNode::cloneType() const function, expected prototype:\nosg::Object * osg::OccluderNode::cloneType() const\nClass arguments details:\n");
		}


		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::OccluderNode::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::OccluderNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::OccluderNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::OccluderNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::OccluderNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::OccluderNode::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::OccluderNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::OccluderNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::OccluderNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::OccluderNode::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::OccluderNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::OccluderNode::className() const function, expected prototype:\nconst char * osg::OccluderNode::className() const\nClass arguments details:\n");
		}


		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::OccluderNode::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::OccluderNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::OccluderNode::libraryName() const function, expected prototype:\nconst char * osg::OccluderNode::libraryName() const\nClass arguments details:\n");
		}


		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::OccluderNode::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::OccluderNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::OccluderNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::OccluderNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::OccluderNode::setOccluder(osg::ConvexPlanarOccluder * occluder)
	static int _bind_setOccluder(lua_State *L) {
		if (!_lg_typecheck_setOccluder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::OccluderNode::setOccluder(osg::ConvexPlanarOccluder * occluder) function, expected prototype:\nvoid osg::OccluderNode::setOccluder(osg::ConvexPlanarOccluder * occluder)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::ConvexPlanarOccluder* occluder=dynamic_cast< osg::ConvexPlanarOccluder* >(Luna< osg::Referenced >::check(L,2));

		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::OccluderNode::setOccluder(osg::ConvexPlanarOccluder *)");
		}
		self->setOccluder(occluder);

		return 0;
	}

	// osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder()
	static int _bind_getOccluder_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOccluder_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() function, expected prototype:\nosg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder()\nClass arguments details:\n");
		}


		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder()");
		}
		osg::ConvexPlanarOccluder * lret = self->getOccluder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarOccluder >::push(L,lret,false);

		return 1;
	}

	// const osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() const
	static int _bind_getOccluder_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOccluder_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() const function, expected prototype:\nconst osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() const\nClass arguments details:\n");
		}


		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ConvexPlanarOccluder * osg::OccluderNode::getOccluder() const");
		}
		const osg::ConvexPlanarOccluder * lret = self->getOccluder();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarOccluder >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::OccluderNode::getOccluder
	static int _bind_getOccluder(lua_State *L) {
		if (_lg_typecheck_getOccluder_overload_1(L)) return _bind_getOccluder_overload_1(L);
		if (_lg_typecheck_getOccluder_overload_2(L)) return _bind_getOccluder_overload_2(L);

		luaL_error(L, "error in function getOccluder, cannot match any of the overloads for function getOccluder:\n  getOccluder()\n  getOccluder()\n");
		return 0;
	}

	// osg::BoundingSpheref osg::OccluderNode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSpheref osg::OccluderNode::computeBound() const function, expected prototype:\nosg::BoundingSpheref osg::OccluderNode::computeBound() const\nClass arguments details:\n");
		}


		osg::OccluderNode* self=dynamic_cast< osg::OccluderNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSpheref osg::OccluderNode::computeBound() const");
		}
		osg::BoundingSpheref stack_lret = self->computeBound();
		osg::BoundingSpheref* lret = new osg::BoundingSpheref(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSpheref >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::OccluderNode* LunaTraits< osg::OccluderNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_OccluderNode::_bind_ctor(L);
}

void LunaTraits< osg::OccluderNode >::_bind_dtor(osg::OccluderNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::OccluderNode >::className[] = "OccluderNode";
const char LunaTraits< osg::OccluderNode >::fullName[] = "osg::OccluderNode";
const char LunaTraits< osg::OccluderNode >::moduleName[] = "osg";
const char* LunaTraits< osg::OccluderNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::OccluderNode >::hash = 97875440;
const int LunaTraits< osg::OccluderNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::OccluderNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_OccluderNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_OccluderNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_OccluderNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_OccluderNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_OccluderNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_OccluderNode::_bind_accept},
	{"setOccluder", &luna_wrapper_osg_OccluderNode::_bind_setOccluder},
	{"getOccluder", &luna_wrapper_osg_OccluderNode::_bind_getOccluder},
	{"computeBound", &luna_wrapper_osg_OccluderNode::_bind_computeBound},
	{"__eq", &luna_wrapper_osg_OccluderNode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::OccluderNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_OccluderNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::OccluderNode >::enumValues[] = {
	{0,0}
};


