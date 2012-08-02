#include <plug_common.h>

class luna_wrapper_osg_GraphicsThread {
public:
	typedef Luna< osg::GraphicsThread > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::GraphicsThread* ptr= dynamic_cast< osg::GraphicsThread* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsThread >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GraphicsThread::GraphicsThread()
	static osg::GraphicsThread* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsThread::GraphicsThread() function, expected prototype:\nosg::GraphicsThread::GraphicsThread()\nClass arguments details:\n");
		}


		return new osg::GraphicsThread();
	}


	// Function binds:
	// void osg::GraphicsThread::run()
	static int _bind_run(lua_State *L) {
		if (!_lg_typecheck_run(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsThread::run() function, expected prototype:\nvoid osg::GraphicsThread::run()\nClass arguments details:\n");
		}


		osg::GraphicsThread* self=dynamic_cast< osg::GraphicsThread* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsThread::run()");
		}
		self->run();

		return 0;
	}


	// Operator binds:

};

osg::GraphicsThread* LunaTraits< osg::GraphicsThread >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsThread::_bind_ctor(L);
}

void LunaTraits< osg::GraphicsThread >::_bind_dtor(osg::GraphicsThread* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsThread >::className[] = "GraphicsThread";
const char LunaTraits< osg::GraphicsThread >::fullName[] = "osg::GraphicsThread";
const char LunaTraits< osg::GraphicsThread >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsThread >::parents[] = {"osg.OperationThread", 0};
const int LunaTraits< osg::GraphicsThread >::hash = 55022762;
const int LunaTraits< osg::GraphicsThread >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsThread >::methods[] = {
	{"run", &luna_wrapper_osg_GraphicsThread::_bind_run},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsThread >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsThread::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsThread >::enumValues[] = {
	{0,0}
};


