#include <plug_common.h>

class luna_wrapper_osg_NodeAcceptOp {
public:
	typedef Luna< osg::NodeAcceptOp > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69073940) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::NodeAcceptOp*)");
		}

		osg::NodeAcceptOp* rhs =(Luna< osg::NodeAcceptOp >::check(L,2));
		osg::NodeAcceptOp* self=(Luna< osg::NodeAcceptOp >::check(L,1));
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

		osg::NodeAcceptOp* self=(Luna< osg::NodeAcceptOp >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::NodeAcceptOp");
		
		return luna_dynamicCast(L,converters,"osg::NodeAcceptOp",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69073940) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_call_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,39128346) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::NodeAcceptOp::NodeAcceptOp(osg::NodeVisitor & nv)
	static osg::NodeAcceptOp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeAcceptOp::NodeAcceptOp(osg::NodeVisitor & nv) function, expected prototype:\nosg::NodeAcceptOp::NodeAcceptOp(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,1));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::NodeAcceptOp::NodeAcceptOp function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		return new osg::NodeAcceptOp(nv);
	}

	// osg::NodeAcceptOp::NodeAcceptOp(const osg::NodeAcceptOp & naop)
	static osg::NodeAcceptOp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodeAcceptOp::NodeAcceptOp(const osg::NodeAcceptOp & naop) function, expected prototype:\nosg::NodeAcceptOp::NodeAcceptOp(const osg::NodeAcceptOp & naop)\nClass arguments details:\narg 1 ID = 69073940\n");
		}

		const osg::NodeAcceptOp* naop_ptr=(Luna< osg::NodeAcceptOp >::check(L,1));
		if( !naop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg naop in osg::NodeAcceptOp::NodeAcceptOp function");
		}
		const osg::NodeAcceptOp & naop=*naop_ptr;

		return new osg::NodeAcceptOp(naop);
	}

	// Overload binder for osg::NodeAcceptOp::NodeAcceptOp
	static osg::NodeAcceptOp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function NodeAcceptOp, cannot match any of the overloads for function NodeAcceptOp:\n  NodeAcceptOp(osg::NodeVisitor &)\n  NodeAcceptOp(const osg::NodeAcceptOp &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:
	// void osg::NodeAcceptOp::operator()(osg::Node * node)
	static int _bind_op_call_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeAcceptOp::operator()(osg::Node * node) function, expected prototype:\nvoid osg::NodeAcceptOp::operator()(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeAcceptOp* self=(Luna< osg::NodeAcceptOp >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeAcceptOp::operator()(osg::Node *)");
		}
		self->operator()(node);

		return 0;
	}

	// void osg::NodeAcceptOp::operator()(osg::ref_ptr< osg::Node > node)
	static int _bind_op_call_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_call_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeAcceptOp::operator()(osg::ref_ptr< osg::Node > node) function, expected prototype:\nvoid osg::NodeAcceptOp::operator()(osg::ref_ptr< osg::Node > node)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::ref_ptr< osg::Node > node = dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::NodeAcceptOp* self=(Luna< osg::NodeAcceptOp >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeAcceptOp::operator()(osg::ref_ptr< osg::Node >)");
		}
		self->operator()(node);

		return 0;
	}

	// Overload binder for osg::NodeAcceptOp::operator()
	static int _bind_op_call(lua_State *L) {
		if (_lg_typecheck_op_call_overload_1(L)) return _bind_op_call_overload_1(L);
		if (_lg_typecheck_op_call_overload_2(L)) return _bind_op_call_overload_2(L);

		luaL_error(L, "error in function operator(), cannot match any of the overloads for function operator():\n  operator()(osg::Node *)\n  operator()(osg::ref_ptr< osg::Node >)\n");
		return 0;
	}


};

osg::NodeAcceptOp* LunaTraits< osg::NodeAcceptOp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_NodeAcceptOp::_bind_ctor(L);
}

void LunaTraits< osg::NodeAcceptOp >::_bind_dtor(osg::NodeAcceptOp* obj) {
	delete obj;
}

const char LunaTraits< osg::NodeAcceptOp >::className[] = "NodeAcceptOp";
const char LunaTraits< osg::NodeAcceptOp >::fullName[] = "osg::NodeAcceptOp";
const char LunaTraits< osg::NodeAcceptOp >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeAcceptOp >::parents[] = {0};
const int LunaTraits< osg::NodeAcceptOp >::hash = 69073940;
const int LunaTraits< osg::NodeAcceptOp >::uniqueIDs[] = {69073940,0};

luna_RegType LunaTraits< osg::NodeAcceptOp >::methods[] = {
	{"op_call", &luna_wrapper_osg_NodeAcceptOp::_bind_op_call},
	{"dynCast", &luna_wrapper_osg_NodeAcceptOp::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_NodeAcceptOp::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeAcceptOp >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeAcceptOp >::enumValues[] = {
	{0,0}
};


