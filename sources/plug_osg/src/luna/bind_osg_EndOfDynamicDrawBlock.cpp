#include <plug_common.h>

class luna_wrapper_osg_EndOfDynamicDrawBlock {
public:
	typedef Luna< osg::EndOfDynamicDrawBlock > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::EndOfDynamicDrawBlock* ptr= dynamic_cast< osg::EndOfDynamicDrawBlock* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::EndOfDynamicDrawBlock >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_completed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(unsigned int)
	static osg::EndOfDynamicDrawBlock* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(unsigned int) function, expected prototype:\nosg::EndOfDynamicDrawBlock::EndOfDynamicDrawBlock(unsigned int)\nClass arguments details:\n");
		}

		unsigned int _arg1=(unsigned int)lua_tointeger(L,1);

		return new osg::EndOfDynamicDrawBlock(_arg1);
	}


	// Function binds:
	// void osg::EndOfDynamicDrawBlock::completed(osg::State * state)
	static int _bind_completed(lua_State *L) {
		if (!_lg_typecheck_completed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::EndOfDynamicDrawBlock::completed(osg::State * state) function, expected prototype:\nvoid osg::EndOfDynamicDrawBlock::completed(osg::State * state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));

		osg::EndOfDynamicDrawBlock* self=dynamic_cast< osg::EndOfDynamicDrawBlock* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::EndOfDynamicDrawBlock::completed(osg::State *)");
		}
		self->completed(state);

		return 0;
	}


	// Operator binds:

};

osg::EndOfDynamicDrawBlock* LunaTraits< osg::EndOfDynamicDrawBlock >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_ctor(L);
}

void LunaTraits< osg::EndOfDynamicDrawBlock >::_bind_dtor(osg::EndOfDynamicDrawBlock* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::EndOfDynamicDrawBlock >::className[] = "EndOfDynamicDrawBlock";
const char LunaTraits< osg::EndOfDynamicDrawBlock >::fullName[] = "osg::EndOfDynamicDrawBlock";
const char LunaTraits< osg::EndOfDynamicDrawBlock >::moduleName[] = "osg";
const char* LunaTraits< osg::EndOfDynamicDrawBlock >::parents[] = {"osg.DynamicObjectRenderingCompletedCallback", 0};
const int LunaTraits< osg::EndOfDynamicDrawBlock >::hash = 64833397;
const int LunaTraits< osg::EndOfDynamicDrawBlock >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::EndOfDynamicDrawBlock >::methods[] = {
	{"completed", &luna_wrapper_osg_EndOfDynamicDrawBlock::_bind_completed},
	{0,0}
};

luna_ConverterType LunaTraits< osg::EndOfDynamicDrawBlock >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_EndOfDynamicDrawBlock::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::EndOfDynamicDrawBlock >::enumValues[] = {
	{0,0}
};


