#include <plug_common.h>

#include <luna/wrappers/wrapper_gizmo_GizmoDrawable_GizmoEventCallback.h>

class luna_wrapper_gizmo_GizmoDrawable_GizmoEventCallback {
public:
	typedef Luna< gizmo::GizmoDrawable::GizmoEventCallback > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		gizmo::GizmoDrawable::GizmoEventCallback* self= (gizmo::GizmoDrawable::GizmoEventCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< gizmo::GizmoDrawable::GizmoEventCallback >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_EventCallback(lua_State *L) {
		// all checked are already performed before reaching this point.
		//gizmo::GizmoDrawable::GizmoEventCallback* ptr= dynamic_cast< gizmo::GizmoDrawable::GizmoEventCallback* >(Luna< osg::Referenced >::check(L,1));
		gizmo::GizmoDrawable::GizmoEventCallback* ptr= luna_caster< osg::Referenced, gizmo::GizmoDrawable::GizmoEventCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< gizmo::GizmoDrawable::GizmoEventCallback >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// gizmo::GizmoDrawable::GizmoEventCallback::GizmoEventCallback()
	static gizmo::GizmoDrawable::GizmoEventCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in gizmo::GizmoDrawable::GizmoEventCallback::GizmoEventCallback() function, expected prototype:\ngizmo::GizmoDrawable::GizmoEventCallback::GizmoEventCallback()\nClass arguments details:\n");
		}


		return new gizmo::GizmoDrawable::GizmoEventCallback();
	}

	// gizmo::GizmoDrawable::GizmoEventCallback::GizmoEventCallback(lua_Table * data)
	static gizmo::GizmoDrawable::GizmoEventCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in gizmo::GizmoDrawable::GizmoEventCallback::GizmoEventCallback(lua_Table * data) function, expected prototype:\ngizmo::GizmoDrawable::GizmoEventCallback::GizmoEventCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_gizmo_GizmoDrawable_GizmoEventCallback(L,NULL);
	}

	// Overload binder for gizmo::GizmoDrawable::GizmoEventCallback::GizmoEventCallback
	static gizmo::GizmoDrawable::GizmoEventCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GizmoEventCallback, cannot match any of the overloads for function GizmoEventCallback:\n  GizmoEventCallback()\n  GizmoEventCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void gizmo::GizmoDrawable::GizmoEventCallback::event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_event(lua_State *L) {
		if (!_lg_typecheck_event(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void gizmo::GizmoDrawable::GizmoEventCallback::event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid gizmo::GizmoDrawable::GizmoEventCallback::event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		gizmo::GizmoDrawable::GizmoEventCallback* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable::GizmoEventCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void gizmo::GizmoDrawable::GizmoEventCallback::event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->event(nv, drawable);

		return 0;
	}

	// void gizmo::GizmoDrawable::GizmoEventCallback::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)
	static int _bind_base_event(lua_State *L) {
		if (!_lg_typecheck_base_event(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void gizmo::GizmoDrawable::GizmoEventCallback::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable) function, expected prototype:\nvoid gizmo::GizmoDrawable::GizmoEventCallback::base_event(osg::NodeVisitor * nv, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		gizmo::GizmoDrawable::GizmoEventCallback* self=Luna< osg::Referenced >::checkSubType< gizmo::GizmoDrawable::GizmoEventCallback >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void gizmo::GizmoDrawable::GizmoEventCallback::base_event(osg::NodeVisitor *, osg::Drawable *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->GizmoEventCallback::event(nv, drawable);

		return 0;
	}


	// Operator binds:

};

gizmo::GizmoDrawable::GizmoEventCallback* LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_gizmo_GizmoDrawable_GizmoEventCallback::_bind_ctor(L);
}

void LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::_bind_dtor(gizmo::GizmoDrawable::GizmoEventCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::className[] = "GizmoDrawable_GizmoEventCallback";
const char LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::fullName[] = "gizmo::GizmoDrawable::GizmoEventCallback";
const char LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::moduleName[] = "gizmo";
const char* LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::parents[] = {"osg.Drawable_EventCallback", 0};
const int LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::hash = 82782495;
const int LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::methods[] = {
	{"event", &luna_wrapper_gizmo_GizmoDrawable_GizmoEventCallback::_bind_event},
	{"base_event", &luna_wrapper_gizmo_GizmoDrawable_GizmoEventCallback::_bind_base_event},
	{"__eq", &luna_wrapper_gizmo_GizmoDrawable_GizmoEventCallback::_bind___eq},
	{"fromVoid", &luna_wrapper_gizmo_GizmoDrawable_GizmoEventCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_gizmo_GizmoDrawable_GizmoEventCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_gizmo_GizmoDrawable_GizmoEventCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::converters[] = {
	{"osg::Drawable::EventCallback", &luna_wrapper_gizmo_GizmoDrawable_GizmoEventCallback::_cast_from_EventCallback},
	{0,0}
};

luna_RegEnumType LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback >::enumValues[] = {
	{0,0}
};


