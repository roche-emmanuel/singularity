#include <plug_common.h>

#include <luna/wrappers/wrapper_SparkDrawable_DeferredSystemHandler.h>

class luna_wrapper_SparkDrawable_DeferredSystemHandler {
public:
	typedef Luna< SparkDrawable::DeferredSystemHandler > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
	static int _cast_from_UpdateCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SparkDrawable::DeferredSystemHandler* ptr= dynamic_cast< SparkDrawable::DeferredSystemHandler* >(Luna< osg::Referenced >::check(L,1));
		SparkDrawable::DeferredSystemHandler* ptr= luna_caster< osg::Referenced, SparkDrawable::DeferredSystemHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SparkDrawable::DeferredSystemHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		SparkDrawable::DeferredSystemHandler* self=Luna< osg::Referenced >::checkSubType< SparkDrawable::DeferredSystemHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->update(nv, drawable);

		return 0;
	}

	// void SparkDrawable::DeferredSystemHandler::base_update(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SparkDrawable::DeferredSystemHandler::base_update(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid SparkDrawable::DeferredSystemHandler::base_update(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		SparkDrawable::DeferredSystemHandler* self=Luna< osg::Referenced >::checkSubType< SparkDrawable::DeferredSystemHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SparkDrawable::DeferredSystemHandler::base_update(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->DeferredSystemHandler::update(nv, drawable);

		return 0;
	}


	// Operator binds:

};

SparkDrawable::DeferredSystemHandler* LunaTraits< SparkDrawable::DeferredSystemHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SparkDrawable::DeferredSystemHandler >::_bind_dtor(SparkDrawable::DeferredSystemHandler* obj) {
	delete obj;
}

const char LunaTraits< SparkDrawable::DeferredSystemHandler >::className[] = "SparkDrawable_DeferredSystemHandler";
const char LunaTraits< SparkDrawable::DeferredSystemHandler >::fullName[] = "SparkDrawable::DeferredSystemHandler";
const char LunaTraits< SparkDrawable::DeferredSystemHandler >::moduleName[] = "SparkDrawable";
const char* LunaTraits< SparkDrawable::DeferredSystemHandler >::parents[] = {"osg.Drawable_UpdateCallback", 0};
const int LunaTraits< SparkDrawable::DeferredSystemHandler >::hash = 4324218;
const int LunaTraits< SparkDrawable::DeferredSystemHandler >::uniqueIDs[] = {5213827,0};

luna_RegType LunaTraits< SparkDrawable::DeferredSystemHandler >::methods[] = {
	{"update", &luna_wrapper_SparkDrawable_DeferredSystemHandler::_bind_update},
	{"base_update", &luna_wrapper_SparkDrawable_DeferredSystemHandler::_bind_base_update},
	{"__eq", &luna_wrapper_SparkDrawable_DeferredSystemHandler::_bind___eq},
	{"getTable", &luna_wrapper_SparkDrawable_DeferredSystemHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SparkDrawable::DeferredSystemHandler >::converters[] = {
	{"osg::Drawable::UpdateCallback", &luna_wrapper_SparkDrawable_DeferredSystemHandler::_cast_from_UpdateCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< SparkDrawable::DeferredSystemHandler >::enumValues[] = {
	{0,0}
};


