#include <plug_common.h>

class luna_wrapper_osg_AttributeDispatch {
public:
	typedef Luna< osg::AttributeDispatch > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::AttributeDispatch* ptr= dynamic_cast< osg::AttributeDispatch* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AttributeDispatch >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	// void osg::AttributeDispatch::assign(const void * , const osg::IndexArray * )
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AttributeDispatch::assign(const void * , const osg::IndexArray * ) function, expected prototype:\nvoid osg::AttributeDispatch::assign(const void * , const osg::IndexArray * )\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		void* _arg1=(Luna< void >::check(L,2));
		const osg::IndexArray* _arg2=dynamic_cast< osg::IndexArray* >(Luna< osg::Referenced >::check(L,3));

		osg::AttributeDispatch* self=dynamic_cast< osg::AttributeDispatch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AttributeDispatch::assign(const void *, const osg::IndexArray *)");
		}
		self->assign(_arg1, _arg2);

		return 0;
	}


	// Operator binds:
	// void osg::AttributeDispatch::operator()(unsigned int)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AttributeDispatch::operator()(unsigned int) function, expected prototype:\nvoid osg::AttributeDispatch::operator()(unsigned int)\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,2);

		osg::AttributeDispatch* self=dynamic_cast< osg::AttributeDispatch* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AttributeDispatch::operator()(unsigned)");
		}
		self->operator()(_arg1);

		return 0;
	}


};

osg::AttributeDispatch* LunaTraits< osg::AttributeDispatch >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::AttributeDispatch >::_bind_dtor(osg::AttributeDispatch* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AttributeDispatch >::className[] = "AttributeDispatch";
const char LunaTraits< osg::AttributeDispatch >::fullName[] = "osg::AttributeDispatch";
const char LunaTraits< osg::AttributeDispatch >::moduleName[] = "osg";
const char* LunaTraits< osg::AttributeDispatch >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::AttributeDispatch >::hash = 35330505;
const int LunaTraits< osg::AttributeDispatch >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AttributeDispatch >::methods[] = {
	{"assign", &luna_wrapper_osg_AttributeDispatch::_bind_assign},
	{"op_call", &luna_wrapper_osg_AttributeDispatch::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AttributeDispatch >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AttributeDispatch::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AttributeDispatch >::enumValues[] = {
	{0,0}
};


