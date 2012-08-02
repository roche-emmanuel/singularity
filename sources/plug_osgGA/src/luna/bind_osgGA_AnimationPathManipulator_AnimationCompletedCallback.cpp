#include <plug_common.h>

class luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback {
public:
	typedef Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgGA::AnimationPathManipulator::AnimationCompletedCallback* ptr= dynamic_cast< osgGA::AnimationPathManipulator::AnimationCompletedCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_completed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator * apm)
	static int _bind_completed(lua_State *L) {
		if (!_lg_typecheck_completed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator * apm) function, expected prototype:\nvoid osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator * apm)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgGA::AnimationPathManipulator* apm=dynamic_cast< osgGA::AnimationPathManipulator* >(Luna< osg::Referenced >::check(L,2));

		osgGA::AnimationPathManipulator::AnimationCompletedCallback* self=dynamic_cast< osgGA::AnimationPathManipulator::AnimationCompletedCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator *)");
		}
		self->completed(apm);

		return 0;
	}


	// Operator binds:

};

osgGA::AnimationPathManipulator::AnimationCompletedCallback* LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgGA::AnimationPathManipulator::AnimationCompletedCallback::completed(const osgGA::AnimationPathManipulator * apm)

	// Abstract operators:
}

void LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::_bind_dtor(osgGA::AnimationPathManipulator::AnimationCompletedCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::className[] = "AnimationCompletedCallback";
const char LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::fullName[] = "osgGA::AnimationPathManipulator::AnimationCompletedCallback";
const char LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::hash = 63965896;
const int LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::methods[] = {
	{"completed", &luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback::_bind_completed},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_AnimationPathManipulator_AnimationCompletedCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::AnimationPathManipulator::AnimationCompletedCallback >::enumValues[] = {
	{0,0}
};


