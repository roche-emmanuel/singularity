#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_AttributeDispatch.h>

class luna_wrapper_osg_AttributeDispatch {
public:
	typedef Luna< osg::AttributeDispatch > luna_t;

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
		//osg::AttributeDispatch* ptr= dynamic_cast< osg::AttributeDispatch* >(Luna< osg::Referenced >::check(L,1));
		osg::AttributeDispatch* ptr= luna_caster< osg::Referenced, osg::AttributeDispatch >::cast(Luna< osg::Referenced >::check(L,1));
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

	inline static bool _lg_typecheck_base_assign(lua_State *L) {
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
	// void osg::AttributeDispatch::assign(const void * arg1, const osg::IndexArray * arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AttributeDispatch::assign(const void * arg1, const osg::IndexArray * arg2) function, expected prototype:\nvoid osg::AttributeDispatch::assign(const void * arg1, const osg::IndexArray * arg2)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		void* _arg1=(Luna< void >::check(L,2));
		const osg::IndexArray* _arg2=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::AttributeDispatch* self=Luna< osg::Referenced >::checkSubType< osg::AttributeDispatch >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AttributeDispatch::assign(const void *, const osg::IndexArray *)");
		}
		self->assign(_arg1, _arg2);

		return 0;
	}

	// void osg::AttributeDispatch::base_assign(const void * arg1, const osg::IndexArray * arg2)
	static int _bind_base_assign(lua_State *L) {
		if (!_lg_typecheck_base_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AttributeDispatch::base_assign(const void * arg1, const osg::IndexArray * arg2) function, expected prototype:\nvoid osg::AttributeDispatch::base_assign(const void * arg1, const osg::IndexArray * arg2)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		void* _arg1=(Luna< void >::check(L,2));
		const osg::IndexArray* _arg2=(Luna< osg::Referenced >::checkSubType< osg::IndexArray >(L,3));

		osg::AttributeDispatch* self=Luna< osg::Referenced >::checkSubType< osg::AttributeDispatch >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AttributeDispatch::base_assign(const void *, const osg::IndexArray *)");
		}
		self->AttributeDispatch::assign(_arg1, _arg2);

		return 0;
	}


	// Operator binds:
	// void osg::AttributeDispatch::operator()(unsigned int arg1)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AttributeDispatch::operator()(unsigned int arg1) function, expected prototype:\nvoid osg::AttributeDispatch::operator()(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned _arg1=(unsigned)lua_tointeger(L,2);

		osg::AttributeDispatch* self=Luna< osg::Referenced >::checkSubType< osg::AttributeDispatch >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AttributeDispatch::operator()(unsigned int)");
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
	{"base_assign", &luna_wrapper_osg_AttributeDispatch::_bind_base_assign},
	{"op_call", &luna_wrapper_osg_AttributeDispatch::_bind_op_call},
	{"__eq", &luna_wrapper_osg_AttributeDispatch::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AttributeDispatch >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AttributeDispatch::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AttributeDispatch >::enumValues[] = {
	{0,0}
};


