#include <plug_common.h>

#include <luna/wrappers/wrapper_spark_SparkDrawable_DeferredSystemHandler.h>

class luna_wrapper_spark_SparkDrawable_DeferredSystemHandler {
public:
	typedef Luna< spark::SparkDrawable::DeferredSystemHandler > luna_t;

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
		//spark::SparkDrawable::DeferredSystemHandler* ptr= dynamic_cast< spark::SparkDrawable::DeferredSystemHandler* >(Luna< osg::Referenced >::check(L,1));
		spark::SparkDrawable::DeferredSystemHandler* ptr= luna_caster< osg::Referenced, spark::SparkDrawable::DeferredSystemHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< spark::SparkDrawable::DeferredSystemHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


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
	// spark::SparkDrawable::DeferredSystemHandler::DeferredSystemHandler()
	static spark::SparkDrawable::DeferredSystemHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::SparkDrawable::DeferredSystemHandler::DeferredSystemHandler() function, expected prototype:\nspark::SparkDrawable::DeferredSystemHandler::DeferredSystemHandler()\nClass arguments details:\n");
		}


		return new spark::SparkDrawable::DeferredSystemHandler();
	}

	// spark::SparkDrawable::DeferredSystemHandler::DeferredSystemHandler(lua_Table * data)
	static spark::SparkDrawable::DeferredSystemHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in spark::SparkDrawable::DeferredSystemHandler::DeferredSystemHandler(lua_Table * data) function, expected prototype:\nspark::SparkDrawable::DeferredSystemHandler::DeferredSystemHandler(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_spark_SparkDrawable_DeferredSystemHandler(L,NULL);
	}

	// Overload binder for spark::SparkDrawable::DeferredSystemHandler::DeferredSystemHandler
	static spark::SparkDrawable::DeferredSystemHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DeferredSystemHandler, cannot match any of the overloads for function DeferredSystemHandler:\n  DeferredSystemHandler()\n  DeferredSystemHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void spark::SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid spark::SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		spark::SparkDrawable::DeferredSystemHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkDrawable::DeferredSystemHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::DeferredSystemHandler::update(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->update(nv, drawable);

		return 0;
	}

	// void spark::SparkDrawable::DeferredSystemHandler::base_update(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void spark::SparkDrawable::DeferredSystemHandler::base_update(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid spark::SparkDrawable::DeferredSystemHandler::base_update(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		spark::SparkDrawable::DeferredSystemHandler* self=Luna< osg::Referenced >::checkSubType< spark::SparkDrawable::DeferredSystemHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void spark::SparkDrawable::DeferredSystemHandler::base_update(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->DeferredSystemHandler::update(nv, drawable);

		return 0;
	}


	// Operator binds:

};

spark::SparkDrawable::DeferredSystemHandler* LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_spark_SparkDrawable_DeferredSystemHandler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::_bind_dtor(spark::SparkDrawable::DeferredSystemHandler* obj) {
	delete obj;
}

const char LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::className[] = "SparkDrawable_DeferredSystemHandler";
const char LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::fullName[] = "spark::SparkDrawable::DeferredSystemHandler";
const char LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::moduleName[] = "spark";
const char* LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::parents[] = {"osg.Drawable_UpdateCallback", 0};
const int LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::hash = 23688382;
const int LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::uniqueIDs[] = {5213827,0};

luna_RegType LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::methods[] = {
	{"update", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler::_bind_update},
	{"base_update", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler::_bind_base_update},
	{"__eq", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler::_bind___eq},
	{"getTable", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::converters[] = {
	{"osg::Drawable::UpdateCallback", &luna_wrapper_spark_SparkDrawable_DeferredSystemHandler::_cast_from_UpdateCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< spark::SparkDrawable::DeferredSystemHandler >::enumValues[] = {
	{0,0}
};


