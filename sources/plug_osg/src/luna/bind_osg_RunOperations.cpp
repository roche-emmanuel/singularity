#include <plug_common.h>

class luna_wrapper_osg_RunOperations {
public:
	typedef Luna< osg::RunOperations > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::RunOperations* ptr= dynamic_cast< osg::RunOperations* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::RunOperations >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::RunOperations::RunOperations()
	static osg::RunOperations* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::RunOperations::RunOperations() function, expected prototype:\nosg::RunOperations::RunOperations()\nClass arguments details:\n");
		}


		return new osg::RunOperations();
	}


	// Function binds:

	// Operator binds:
	// void osg::RunOperations::operator()(osg::GraphicsContext * context)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::RunOperations::operator()(osg::GraphicsContext * context) function, expected prototype:\nvoid osg::RunOperations::operator()(osg::GraphicsContext * context)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::GraphicsContext* context=dynamic_cast< osg::GraphicsContext* >(Luna< osg::Referenced >::check(L,2));

		osg::RunOperations* self=dynamic_cast< osg::RunOperations* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::RunOperations::operator()(osg::GraphicsContext *)");
		}
		self->operator()(context);

		return 0;
	}


};

osg::RunOperations* LunaTraits< osg::RunOperations >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_RunOperations::_bind_ctor(L);
}

void LunaTraits< osg::RunOperations >::_bind_dtor(osg::RunOperations* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::RunOperations >::className[] = "RunOperations";
const char LunaTraits< osg::RunOperations >::fullName[] = "osg::RunOperations";
const char LunaTraits< osg::RunOperations >::moduleName[] = "osg";
const char* LunaTraits< osg::RunOperations >::parents[] = {"osg.GraphicsOperation", 0};
const int LunaTraits< osg::RunOperations >::hash = 88523164;
const int LunaTraits< osg::RunOperations >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::RunOperations >::methods[] = {
	{"op_call", &luna_wrapper_osg_RunOperations::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osg::RunOperations >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_RunOperations::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::RunOperations >::enumValues[] = {
	{0,0}
};

