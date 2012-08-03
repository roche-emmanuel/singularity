#include <plug_common.h>

class luna_wrapper_sgt_Object {
public:
	typedef Luna< sgt::Object > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		sgt::Object* ptr= dynamic_cast< sgt::Object* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::Object >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

sgt::Object* LunaTraits< sgt::Object >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const
	// const char * osg::Object::libraryName() const
	// const char * osg::Object::className() const

	// Abstract operators:
}

void LunaTraits< sgt::Object >::_bind_dtor(sgt::Object* obj) {
	delete obj;
}

const char LunaTraits< sgt::Object >::className[] = "Object";
const char LunaTraits< sgt::Object >::fullName[] = "sgt::Object";
const char LunaTraits< sgt::Object >::moduleName[] = "core";
const char* LunaTraits< sgt::Object >::parents[] = {"core.Object", 0};
const int LunaTraits< sgt::Object >::hash = 44367388;
const int LunaTraits< sgt::Object >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::Object >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Object >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_Object::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Object >::enumValues[] = {
	{0,0}
};


