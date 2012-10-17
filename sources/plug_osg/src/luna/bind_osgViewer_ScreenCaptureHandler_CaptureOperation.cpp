#include <plug_common.h>

class luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation {
public:
	typedef Luna< osgViewer::ScreenCaptureHandler::CaptureOperation > luna_t;

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
		osgViewer::ScreenCaptureHandler::CaptureOperation* ptr= dynamic_cast< osgViewer::ScreenCaptureHandler::CaptureOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ScreenCaptureHandler::CaptureOperation >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function binds:

	// Operator binds:
	// void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* image_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osgViewer::ScreenCaptureHandler::CaptureOperation::operator() function");
		}
		const osg::Image & image=*image_ptr;
		unsigned int context_id=(unsigned int)lua_tointeger(L,3);

		osgViewer::ScreenCaptureHandler::CaptureOperation* self=dynamic_cast< osgViewer::ScreenCaptureHandler::CaptureOperation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image &, const unsigned int)");
		}
		self->operator()(image, context_id);

		return 0;
	}


};

osgViewer::ScreenCaptureHandler::CaptureOperation* LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:

	// Abstract operators:
	// void osgViewer::ScreenCaptureHandler::CaptureOperation::operator()(const osg::Image & image, const unsigned int context_id)
}

void LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::_bind_dtor(osgViewer::ScreenCaptureHandler::CaptureOperation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::className[] = "CaptureOperation";
const char LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::fullName[] = "osgViewer::ScreenCaptureHandler::CaptureOperation";
const char LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::hash = 72677450;
const int LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::methods[] = {
	{"op_call", &luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_bind_op_call},
	{"__eq", &luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ScreenCaptureHandler_CaptureOperation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ScreenCaptureHandler::CaptureOperation >::enumValues[] = {
	{0,0}
};


