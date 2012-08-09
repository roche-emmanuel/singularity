#include <plug_common.h>

class luna_wrapper_osg_ObserverNodePath {
public:
	typedef Luna< osg::ObserverNodePath > luna_t;

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ObserverNodePath* self=(Luna< osg::ObserverNodePath >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ObserverNodePath");
		
		return luna_dynamicCast(L,converters,"osg::ObserverNodePath",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,5626651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52841328) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setNodePathTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNodePath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65202791) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNodePath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRefNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,65202791) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ObserverNodePath::ObserverNodePath()
	static osg::ObserverNodePath* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ObserverNodePath::ObserverNodePath() function, expected prototype:\nosg::ObserverNodePath::ObserverNodePath()\nClass arguments details:\n");
		}


		return new osg::ObserverNodePath();
	}

	// osg::ObserverNodePath::ObserverNodePath(const osg::ObserverNodePath & rhs)
	static osg::ObserverNodePath* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ObserverNodePath::ObserverNodePath(const osg::ObserverNodePath & rhs) function, expected prototype:\nosg::ObserverNodePath::ObserverNodePath(const osg::ObserverNodePath & rhs)\nClass arguments details:\narg 1 ID = 5626651\n");
		}

		const osg::ObserverNodePath* rhs_ptr=(Luna< osg::ObserverNodePath >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ObserverNodePath::ObserverNodePath function");
		}
		const osg::ObserverNodePath & rhs=*rhs_ptr;

		return new osg::ObserverNodePath(rhs);
	}

	// osg::ObserverNodePath::ObserverNodePath(const osg::NodePath & nodePath)
	static osg::ObserverNodePath* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ObserverNodePath::ObserverNodePath(const osg::NodePath & nodePath) function, expected prototype:\nosg::ObserverNodePath::ObserverNodePath(const osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n");
		}

		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,1));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::ObserverNodePath::ObserverNodePath function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;

		return new osg::ObserverNodePath(nodePath);
	}

	// Overload binder for osg::ObserverNodePath::ObserverNodePath
	static osg::ObserverNodePath* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function ObserverNodePath, cannot match any of the overloads for function ObserverNodePath:\n  ObserverNodePath()\n  ObserverNodePath(const osg::ObserverNodePath &)\n  ObserverNodePath(const osg::NodePath &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ObserverNodePath::setNodePathTo(osg::Node * node)
	static int _bind_setNodePathTo(lua_State *L) {
		if (!_lg_typecheck_setNodePathTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ObserverNodePath::setNodePathTo(osg::Node * node) function, expected prototype:\nvoid osg::ObserverNodePath::setNodePathTo(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::ObserverNodePath* self=(Luna< osg::ObserverNodePath >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ObserverNodePath::setNodePathTo(osg::Node *)");
		}
		self->setNodePathTo(node);

		return 0;
	}

	// void osg::ObserverNodePath::setNodePath(const osg::RefNodePath & nodePath)
	static int _bind_setNodePath_overload_1(lua_State *L) {
		if (!_lg_typecheck_setNodePath_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ObserverNodePath::setNodePath(const osg::RefNodePath & nodePath) function, expected prototype:\nvoid osg::ObserverNodePath::setNodePath(const osg::RefNodePath & nodePath)\nClass arguments details:\narg 1 ID = 65202791\n");
		}

		const osg::RefNodePath* nodePath_ptr=(Luna< osg::RefNodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::ObserverNodePath::setNodePath function");
		}
		const osg::RefNodePath & nodePath=*nodePath_ptr;

		osg::ObserverNodePath* self=(Luna< osg::ObserverNodePath >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ObserverNodePath::setNodePath(const osg::RefNodePath &)");
		}
		self->setNodePath(nodePath);

		return 0;
	}

	// void osg::ObserverNodePath::setNodePath(const osg::NodePath & nodePath)
	static int _bind_setNodePath_overload_2(lua_State *L) {
		if (!_lg_typecheck_setNodePath_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ObserverNodePath::setNodePath(const osg::NodePath & nodePath) function, expected prototype:\nvoid osg::ObserverNodePath::setNodePath(const osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n");
		}

		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::ObserverNodePath::setNodePath function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;

		osg::ObserverNodePath* self=(Luna< osg::ObserverNodePath >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ObserverNodePath::setNodePath(const osg::NodePath &)");
		}
		self->setNodePath(nodePath);

		return 0;
	}

	// Overload binder for osg::ObserverNodePath::setNodePath
	static int _bind_setNodePath(lua_State *L) {
		if (_lg_typecheck_setNodePath_overload_1(L)) return _bind_setNodePath_overload_1(L);
		if (_lg_typecheck_setNodePath_overload_2(L)) return _bind_setNodePath_overload_2(L);

		luaL_error(L, "error in function setNodePath, cannot match any of the overloads for function setNodePath:\n  setNodePath(const osg::RefNodePath &)\n  setNodePath(const osg::NodePath &)\n");
		return 0;
	}

	// void osg::ObserverNodePath::clearNodePath()
	static int _bind_clearNodePath(lua_State *L) {
		if (!_lg_typecheck_clearNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ObserverNodePath::clearNodePath() function, expected prototype:\nvoid osg::ObserverNodePath::clearNodePath()\nClass arguments details:\n");
		}


		osg::ObserverNodePath* self=(Luna< osg::ObserverNodePath >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ObserverNodePath::clearNodePath()");
		}
		self->clearNodePath();

		return 0;
	}

	// bool osg::ObserverNodePath::getRefNodePath(osg::RefNodePath & refNodePath) const
	static int _bind_getRefNodePath(lua_State *L) {
		if (!_lg_typecheck_getRefNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ObserverNodePath::getRefNodePath(osg::RefNodePath & refNodePath) const function, expected prototype:\nbool osg::ObserverNodePath::getRefNodePath(osg::RefNodePath & refNodePath) const\nClass arguments details:\narg 1 ID = 65202791\n");
		}

		osg::RefNodePath* refNodePath_ptr=(Luna< osg::RefNodePath >::check(L,2));
		if( !refNodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg refNodePath in osg::ObserverNodePath::getRefNodePath function");
		}
		osg::RefNodePath & refNodePath=*refNodePath_ptr;

		osg::ObserverNodePath* self=(Luna< osg::ObserverNodePath >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ObserverNodePath::getRefNodePath(osg::RefNodePath &) const");
		}
		bool lret = self->getRefNodePath(refNodePath);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ObserverNodePath::getNodePath(osg::NodePath & nodePath) const
	static int _bind_getNodePath(lua_State *L) {
		if (!_lg_typecheck_getNodePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ObserverNodePath::getNodePath(osg::NodePath & nodePath) const function, expected prototype:\nbool osg::ObserverNodePath::getNodePath(osg::NodePath & nodePath) const\nClass arguments details:\narg 1 ID = 52841328\n");
		}

		osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::ObserverNodePath::getNodePath function");
		}
		osg::NodePath & nodePath=*nodePath_ptr;

		osg::ObserverNodePath* self=(Luna< osg::ObserverNodePath >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ObserverNodePath::getNodePath(osg::NodePath &) const");
		}
		bool lret = self->getNodePath(nodePath);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::ObserverNodePath::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ObserverNodePath::empty() const function, expected prototype:\nbool osg::ObserverNodePath::empty() const\nClass arguments details:\n");
		}


		osg::ObserverNodePath* self=(Luna< osg::ObserverNodePath >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ObserverNodePath::empty() const");
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::ObserverNodePath* LunaTraits< osg::ObserverNodePath >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ObserverNodePath::_bind_ctor(L);
}

void LunaTraits< osg::ObserverNodePath >::_bind_dtor(osg::ObserverNodePath* obj) {
	delete obj;
}

const char LunaTraits< osg::ObserverNodePath >::className[] = "ObserverNodePath";
const char LunaTraits< osg::ObserverNodePath >::fullName[] = "osg::ObserverNodePath";
const char LunaTraits< osg::ObserverNodePath >::moduleName[] = "osg";
const char* LunaTraits< osg::ObserverNodePath >::parents[] = {0};
const int LunaTraits< osg::ObserverNodePath >::hash = 5626651;
const int LunaTraits< osg::ObserverNodePath >::uniqueIDs[] = {5626651,0};

luna_RegType LunaTraits< osg::ObserverNodePath >::methods[] = {
	{"setNodePathTo", &luna_wrapper_osg_ObserverNodePath::_bind_setNodePathTo},
	{"setNodePath", &luna_wrapper_osg_ObserverNodePath::_bind_setNodePath},
	{"clearNodePath", &luna_wrapper_osg_ObserverNodePath::_bind_clearNodePath},
	{"getRefNodePath", &luna_wrapper_osg_ObserverNodePath::_bind_getRefNodePath},
	{"getNodePath", &luna_wrapper_osg_ObserverNodePath::_bind_getNodePath},
	{"empty", &luna_wrapper_osg_ObserverNodePath::_bind_empty},
	{"dynCast", &luna_wrapper_osg_ObserverNodePath::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ObserverNodePath >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ObserverNodePath >::enumValues[] = {
	{0,0}
};

