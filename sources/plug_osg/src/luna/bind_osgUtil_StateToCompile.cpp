#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_StateToCompile.h>

class luna_wrapper_osgUtil_StateToCompile {
public:
	typedef Luna< osgUtil::StateToCompile > luna_t;

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
		osgUtil::StateToCompile* ptr= dynamic_cast< osgUtil::StateToCompile* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::StateToCompile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_empty(lua_State *L) {
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

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::StateToCompile::StateToCompile(unsigned int mode)
	static osgUtil::StateToCompile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::StateToCompile(unsigned int mode) function, expected prototype:\nosgUtil::StateToCompile::StateToCompile(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);

		return new osgUtil::StateToCompile(mode);
	}

	// osgUtil::StateToCompile::StateToCompile(lua_Table * data, unsigned int mode)
	static osgUtil::StateToCompile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateToCompile::StateToCompile(lua_Table * data, unsigned int mode) function, expected prototype:\nosgUtil::StateToCompile::StateToCompile(lua_Table * data, unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osgUtil_StateToCompile(L,NULL, mode);
	}

	// Overload binder for osgUtil::StateToCompile::StateToCompile
	static osgUtil::StateToCompile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StateToCompile, cannot match any of the overloads for function StateToCompile:\n  StateToCompile(unsigned int)\n  StateToCompile(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// bool osgUtil::StateToCompile::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::StateToCompile::empty() const function, expected prototype:\nbool osgUtil::StateToCompile::empty() const\nClass arguments details:\n");
		}


		osgUtil::StateToCompile* self=dynamic_cast< osgUtil::StateToCompile* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::StateToCompile::empty() const");
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::StateToCompile::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::StateToCompile* self=dynamic_cast< osgUtil::StateToCompile* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Node &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::StateToCompile::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::StateToCompile* self=dynamic_cast< osgUtil::StateToCompile* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::Drawable & drawable)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Drawable & drawable) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Drawable & drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* drawable_ptr=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));
		if( !drawable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg drawable in osgUtil::StateToCompile::apply function");
		}
		osg::Drawable & drawable=*drawable_ptr;

		osgUtil::StateToCompile* self=dynamic_cast< osgUtil::StateToCompile* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Drawable &)");
		}
		self->apply(drawable);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::StateSet & stateset)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::StateSet & stateset) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::StateSet & stateset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateset_ptr=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));
		if( !stateset_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stateset in osgUtil::StateToCompile::apply function");
		}
		osg::StateSet & stateset=*stateset_ptr;

		osgUtil::StateToCompile* self=dynamic_cast< osgUtil::StateToCompile* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::StateSet &)");
		}
		self->apply(stateset);

		return 0;
	}

	// void osgUtil::StateToCompile::apply(osg::Texture & texture)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateToCompile::apply(osg::Texture & texture) function, expected prototype:\nvoid osgUtil::StateToCompile::apply(osg::Texture & texture)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Texture* texture_ptr=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2));
		if( !texture_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texture in osgUtil::StateToCompile::apply function");
		}
		osg::Texture & texture=*texture_ptr;

		osgUtil::StateToCompile* self=dynamic_cast< osgUtil::StateToCompile* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateToCompile::apply(osg::Texture &)");
		}
		self->apply(texture);

		return 0;
	}

	// Overload binder for osgUtil::StateToCompile::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Drawable &)\n  apply(osg::StateSet &)\n  apply(osg::Texture &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::StateToCompile* LunaTraits< osgUtil::StateToCompile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_StateToCompile::_bind_ctor(L);
}

void LunaTraits< osgUtil::StateToCompile >::_bind_dtor(osgUtil::StateToCompile* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::StateToCompile >::className[] = "StateToCompile";
const char LunaTraits< osgUtil::StateToCompile >::fullName[] = "osgUtil::StateToCompile";
const char LunaTraits< osgUtil::StateToCompile >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StateToCompile >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::StateToCompile >::hash = 49506188;
const int LunaTraits< osgUtil::StateToCompile >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::StateToCompile >::methods[] = {
	{"empty", &luna_wrapper_osgUtil_StateToCompile::_bind_empty},
	{"apply", &luna_wrapper_osgUtil_StateToCompile::_bind_apply},
	{"__eq", &luna_wrapper_osgUtil_StateToCompile::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StateToCompile >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_StateToCompile::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StateToCompile >::enumValues[] = {
	{0,0}
};


