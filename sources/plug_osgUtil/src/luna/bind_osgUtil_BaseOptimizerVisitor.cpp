#include <plug_common.h>

class luna_wrapper_osgUtil_BaseOptimizerVisitor {
public:
	typedef Luna< osgUtil::BaseOptimizerVisitor > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::BaseOptimizerVisitor* ptr= dynamic_cast< osgUtil::BaseOptimizerVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::BaseOptimizerVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85233381)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isOperationPermissibleForObject_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor(osgUtil::Optimizer * optimizer, unsigned int operation)
	static osgUtil::BaseOptimizerVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor(osgUtil::Optimizer * optimizer, unsigned int operation) function, expected prototype:\nosgUtil::BaseOptimizerVisitor::BaseOptimizerVisitor(osgUtil::Optimizer * optimizer, unsigned int operation)\nClass arguments details:\narg 1 ID = 85233381\n");
		}

		osgUtil::Optimizer* optimizer=(Luna< osgUtil::Optimizer >::check(L,1));
		unsigned int operation=(unsigned int)lua_tointeger(L,2);

		return new osgUtil::BaseOptimizerVisitor(optimizer, operation);
	}


	// Function binds:
	// bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateSet * object) const
	static int _bind_isOperationPermissibleForObject_overload_1(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateSet * object) const function, expected prototype:\nbool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateSet * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateSet* object=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::BaseOptimizerVisitor* self=dynamic_cast< osgUtil::BaseOptimizerVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateSet *) const");
		}
		bool lret = self->isOperationPermissibleForObject(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateAttribute * object) const
	static int _bind_isOperationPermissibleForObject_overload_2(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateAttribute * object) const function, expected prototype:\nbool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateAttribute * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* object=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::BaseOptimizerVisitor* self=dynamic_cast< osgUtil::BaseOptimizerVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::StateAttribute *) const");
		}
		bool lret = self->isOperationPermissibleForObject(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Drawable * object) const
	static int _bind_isOperationPermissibleForObject_overload_3(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Drawable * object) const function, expected prototype:\nbool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Drawable * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Drawable* object=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::BaseOptimizerVisitor* self=dynamic_cast< osgUtil::BaseOptimizerVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Drawable *) const");
		}
		bool lret = self->isOperationPermissibleForObject(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Node * object) const
	static int _bind_isOperationPermissibleForObject_overload_4(lua_State *L) {
		if (!_lg_typecheck_isOperationPermissibleForObject_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Node * object) const function, expected prototype:\nbool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Node * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* object=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::BaseOptimizerVisitor* self=dynamic_cast< osgUtil::BaseOptimizerVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject(const osg::Node *) const");
		}
		bool lret = self->isOperationPermissibleForObject(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgUtil::BaseOptimizerVisitor::isOperationPermissibleForObject
	static int _bind_isOperationPermissibleForObject(lua_State *L) {
		if (_lg_typecheck_isOperationPermissibleForObject_overload_1(L)) return _bind_isOperationPermissibleForObject_overload_1(L);
		if (_lg_typecheck_isOperationPermissibleForObject_overload_2(L)) return _bind_isOperationPermissibleForObject_overload_2(L);
		if (_lg_typecheck_isOperationPermissibleForObject_overload_3(L)) return _bind_isOperationPermissibleForObject_overload_3(L);
		if (_lg_typecheck_isOperationPermissibleForObject_overload_4(L)) return _bind_isOperationPermissibleForObject_overload_4(L);

		luaL_error(L, "error in function isOperationPermissibleForObject, cannot match any of the overloads for function isOperationPermissibleForObject:\n  isOperationPermissibleForObject(const osg::StateSet *)\n  isOperationPermissibleForObject(const osg::StateAttribute *)\n  isOperationPermissibleForObject(const osg::Drawable *)\n  isOperationPermissibleForObject(const osg::Node *)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::BaseOptimizerVisitor* LunaTraits< osgUtil::BaseOptimizerVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::BaseOptimizerVisitor >::_bind_dtor(osgUtil::BaseOptimizerVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::BaseOptimizerVisitor >::className[] = "BaseOptimizerVisitor";
const char LunaTraits< osgUtil::BaseOptimizerVisitor >::fullName[] = "osgUtil::BaseOptimizerVisitor";
const char LunaTraits< osgUtil::BaseOptimizerVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::BaseOptimizerVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::BaseOptimizerVisitor >::hash = 43624958;
const int LunaTraits< osgUtil::BaseOptimizerVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::BaseOptimizerVisitor >::methods[] = {
	{"isOperationPermissibleForObject", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_bind_isOperationPermissibleForObject},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::BaseOptimizerVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_BaseOptimizerVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::BaseOptimizerVisitor >::enumValues[] = {
	{0,0}
};


