#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_ShaderGenVisitor.h>

class luna_wrapper_osgUtil_ShaderGenVisitor {
public:
	typedef Luna< osgUtil::ShaderGenVisitor > luna_t;

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
		osgUtil::ShaderGenVisitor* ptr= dynamic_cast< osgUtil::ShaderGenVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::ShaderGenVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setStateCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRootStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRootStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::ShaderGenVisitor::ShaderGenVisitor()
	static osgUtil::ShaderGenVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenVisitor::ShaderGenVisitor() function, expected prototype:\nosgUtil::ShaderGenVisitor::ShaderGenVisitor()\nClass arguments details:\n");
		}


		return new osgUtil::ShaderGenVisitor();
	}

	// osgUtil::ShaderGenVisitor::ShaderGenVisitor(osgUtil::ShaderGenCache * stateCache)
	static osgUtil::ShaderGenVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenVisitor::ShaderGenVisitor(osgUtil::ShaderGenCache * stateCache) function, expected prototype:\nosgUtil::ShaderGenVisitor::ShaderGenVisitor(osgUtil::ShaderGenCache * stateCache)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::ShaderGenCache* stateCache=dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,1));

		return new osgUtil::ShaderGenVisitor(stateCache);
	}

	// osgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data)
	static osgUtil::ShaderGenVisitor* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data) function, expected prototype:\nosgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_ShaderGenVisitor(L,NULL);
	}

	// osgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data, osgUtil::ShaderGenCache * stateCache)
	static osgUtil::ShaderGenVisitor* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data, osgUtil::ShaderGenCache * stateCache) function, expected prototype:\nosgUtil::ShaderGenVisitor::ShaderGenVisitor(lua_Table * data, osgUtil::ShaderGenCache * stateCache)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osgUtil::ShaderGenCache* stateCache=dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,2));

		return new wrapper_osgUtil_ShaderGenVisitor(L,NULL, stateCache);
	}

	// Overload binder for osgUtil::ShaderGenVisitor::ShaderGenVisitor
	static osgUtil::ShaderGenVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ShaderGenVisitor, cannot match any of the overloads for function ShaderGenVisitor:\n  ShaderGenVisitor()\n  ShaderGenVisitor(osgUtil::ShaderGenCache *)\n  ShaderGenVisitor(lua_Table *)\n  ShaderGenVisitor(lua_Table *, osgUtil::ShaderGenCache *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::ShaderGenVisitor::setStateCache(osgUtil::ShaderGenCache * stateCache)
	static int _bind_setStateCache(lua_State *L) {
		if (!_lg_typecheck_setStateCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::setStateCache(osgUtil::ShaderGenCache * stateCache) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::setStateCache(osgUtil::ShaderGenCache * stateCache)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::ShaderGenCache* stateCache=dynamic_cast< osgUtil::ShaderGenCache* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::ShaderGenVisitor* self=dynamic_cast< osgUtil::ShaderGenVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::setStateCache(osgUtil::ShaderGenCache *)");
		}
		self->setStateCache(stateCache);

		return 0;
	}

	// osgUtil::ShaderGenCache * osgUtil::ShaderGenVisitor::getStateCache() const
	static int _bind_getStateCache(lua_State *L) {
		if (!_lg_typecheck_getStateCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::ShaderGenCache * osgUtil::ShaderGenVisitor::getStateCache() const function, expected prototype:\nosgUtil::ShaderGenCache * osgUtil::ShaderGenVisitor::getStateCache() const\nClass arguments details:\n");
		}


		osgUtil::ShaderGenVisitor* self=dynamic_cast< osgUtil::ShaderGenVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::ShaderGenCache * osgUtil::ShaderGenVisitor::getStateCache() const");
		}
		osgUtil::ShaderGenCache * lret = self->getStateCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::ShaderGenCache >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::ShaderGenVisitor::setRootStateSet(osg::StateSet * stateSet)
	static int _bind_setRootStateSet(lua_State *L) {
		if (!_lg_typecheck_setRootStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::setRootStateSet(osg::StateSet * stateSet) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::setRootStateSet(osg::StateSet * stateSet)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateSet=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::ShaderGenVisitor* self=dynamic_cast< osgUtil::ShaderGenVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::setRootStateSet(osg::StateSet *)");
		}
		self->setRootStateSet(stateSet);

		return 0;
	}

	// osg::StateSet * osgUtil::ShaderGenVisitor::getRootStateSet() const
	static int _bind_getRootStateSet(lua_State *L) {
		if (!_lg_typecheck_getRootStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::ShaderGenVisitor::getRootStateSet() const function, expected prototype:\nosg::StateSet * osgUtil::ShaderGenVisitor::getRootStateSet() const\nClass arguments details:\n");
		}


		osgUtil::ShaderGenVisitor* self=dynamic_cast< osgUtil::ShaderGenVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::ShaderGenVisitor::getRootStateSet() const");
		}
		osg::StateSet * lret = self->getRootStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::ShaderGenVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::ShaderGenVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::ShaderGenVisitor* self=dynamic_cast< osgUtil::ShaderGenVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::ShaderGenVisitor::apply(osg::Geode & geode)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::ShaderGenVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::ShaderGenVisitor* self=dynamic_cast< osgUtil::ShaderGenVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// Overload binder for osgUtil::ShaderGenVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n");
		return 0;
	}

	// void osgUtil::ShaderGenVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::ShaderGenVisitor::reset() function, expected prototype:\nvoid osgUtil::ShaderGenVisitor::reset()\nClass arguments details:\n");
		}


		osgUtil::ShaderGenVisitor* self=dynamic_cast< osgUtil::ShaderGenVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::ShaderGenVisitor::reset()");
		}
		self->reset();

		return 0;
	}


	// Operator binds:

};

osgUtil::ShaderGenVisitor* LunaTraits< osgUtil::ShaderGenVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_ShaderGenVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::ShaderGenVisitor >::_bind_dtor(osgUtil::ShaderGenVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::ShaderGenVisitor >::className[] = "ShaderGenVisitor";
const char LunaTraits< osgUtil::ShaderGenVisitor >::fullName[] = "osgUtil::ShaderGenVisitor";
const char LunaTraits< osgUtil::ShaderGenVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::ShaderGenVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::ShaderGenVisitor >::hash = 71090722;
const int LunaTraits< osgUtil::ShaderGenVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::ShaderGenVisitor >::methods[] = {
	{"setStateCache", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_setStateCache},
	{"getStateCache", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_getStateCache},
	{"setRootStateSet", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_setRootStateSet},
	{"getRootStateSet", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_getRootStateSet},
	{"apply", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_apply},
	{"reset", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind_reset},
	{"__eq", &luna_wrapper_osgUtil_ShaderGenVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::ShaderGenVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_ShaderGenVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::ShaderGenVisitor >::enumValues[] = {
	{0,0}
};


