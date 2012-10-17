#include <plug_common.h>

class luna_wrapper_osg_ClearNode {
public:
	typedef Luna< osg::ClearNode > luna_t;

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
		osg::ClearNode* ptr= dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ClearNode >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setRequiresClear(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRequiresClear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ClearNode::ClearNode()
	static osg::ClearNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClearNode::ClearNode() function, expected prototype:\nosg::ClearNode::ClearNode()\nClass arguments details:\n");
		}


		return new osg::ClearNode();
	}

	// osg::ClearNode::ClearNode(const osg::ClearNode & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ClearNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ClearNode::ClearNode(const osg::ClearNode & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ClearNode::ClearNode(const osg::ClearNode & cs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ClearNode* cs_ptr=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if( !cs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cs in osg::ClearNode::ClearNode function");
		}
		const osg::ClearNode & cs=*cs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClearNode::ClearNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ClearNode(cs, copyop);
	}

	// Overload binder for osg::ClearNode::ClearNode
	static osg::ClearNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ClearNode, cannot match any of the overloads for function ClearNode:\n  ClearNode()\n  ClearNode(const osg::ClearNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ClearNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClearNode::cloneType() const function, expected prototype:\nosg::Object * osg::ClearNode::cloneType() const\nClass arguments details:\n");
		}


		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClearNode::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ClearNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ClearNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::ClearNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ClearNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ClearNode::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ClearNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClearNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ClearNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClearNode::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ClearNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClearNode::className() const function, expected prototype:\nconst char * osg::ClearNode::className() const\nClass arguments details:\n");
		}


		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClearNode::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ClearNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ClearNode::libraryName() const function, expected prototype:\nconst char * osg::ClearNode::libraryName() const\nClass arguments details:\n");
		}


		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ClearNode::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ClearNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClearNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::ClearNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::ClearNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClearNode::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::ClearNode::setRequiresClear(bool requiresClear)
	static int _bind_setRequiresClear(lua_State *L) {
		if (!_lg_typecheck_setRequiresClear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClearNode::setRequiresClear(bool requiresClear) function, expected prototype:\nvoid osg::ClearNode::setRequiresClear(bool requiresClear)\nClass arguments details:\n");
		}

		bool requiresClear=(bool)(lua_toboolean(L,2)==1);

		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClearNode::setRequiresClear(bool)");
		}
		self->setRequiresClear(requiresClear);

		return 0;
	}

	// bool osg::ClearNode::getRequiresClear() const
	static int _bind_getRequiresClear(lua_State *L) {
		if (!_lg_typecheck_getRequiresClear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ClearNode::getRequiresClear() const function, expected prototype:\nbool osg::ClearNode::getRequiresClear() const\nClass arguments details:\n");
		}


		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ClearNode::getRequiresClear() const");
		}
		bool lret = self->getRequiresClear();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ClearNode::setClearColor(const osg::Vec4f & color)
	static int _bind_setClearColor(lua_State *L) {
		if (!_lg_typecheck_setClearColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClearNode::setClearColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::ClearNode::setClearColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::ClearNode::setClearColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClearNode::setClearColor(const osg::Vec4f &)");
		}
		self->setClearColor(color);

		return 0;
	}

	// const osg::Vec4f & osg::ClearNode::getClearColor() const
	static int _bind_getClearColor(lua_State *L) {
		if (!_lg_typecheck_getClearColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::ClearNode::getClearColor() const function, expected prototype:\nconst osg::Vec4f & osg::ClearNode::getClearColor() const\nClass arguments details:\n");
		}


		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::ClearNode::getClearColor() const");
		}
		const osg::Vec4f* lret = &self->getClearColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::ClearNode::setClearMask(unsigned int mask)
	static int _bind_setClearMask(lua_State *L) {
		if (!_lg_typecheck_setClearMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ClearNode::setClearMask(unsigned int mask) function, expected prototype:\nvoid osg::ClearNode::setClearMask(unsigned int mask)\nClass arguments details:\n");
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ClearNode::setClearMask(unsigned int)");
		}
		self->setClearMask(mask);

		return 0;
	}

	// unsigned int osg::ClearNode::getClearMask() const
	static int _bind_getClearMask(lua_State *L) {
		if (!_lg_typecheck_getClearMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClearNode::getClearMask() const function, expected prototype:\nunsigned int osg::ClearNode::getClearMask() const\nClass arguments details:\n");
		}


		osg::ClearNode* self=dynamic_cast< osg::ClearNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ClearNode::getClearMask() const");
		}
		unsigned int lret = self->getClearMask();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ClearNode* LunaTraits< osg::ClearNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClearNode::_bind_ctor(L);
}

void LunaTraits< osg::ClearNode >::_bind_dtor(osg::ClearNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ClearNode >::className[] = "ClearNode";
const char LunaTraits< osg::ClearNode >::fullName[] = "osg::ClearNode";
const char LunaTraits< osg::ClearNode >::moduleName[] = "osg";
const char* LunaTraits< osg::ClearNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::ClearNode >::hash = 3689390;
const int LunaTraits< osg::ClearNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ClearNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ClearNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ClearNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ClearNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_ClearNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_ClearNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_ClearNode::_bind_accept},
	{"setRequiresClear", &luna_wrapper_osg_ClearNode::_bind_setRequiresClear},
	{"getRequiresClear", &luna_wrapper_osg_ClearNode::_bind_getRequiresClear},
	{"setClearColor", &luna_wrapper_osg_ClearNode::_bind_setClearColor},
	{"getClearColor", &luna_wrapper_osg_ClearNode::_bind_getClearColor},
	{"setClearMask", &luna_wrapper_osg_ClearNode::_bind_setClearMask},
	{"getClearMask", &luna_wrapper_osg_ClearNode::_bind_getClearMask},
	{"__eq", &luna_wrapper_osg_ClearNode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClearNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ClearNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClearNode >::enumValues[] = {
	{0,0}
};


