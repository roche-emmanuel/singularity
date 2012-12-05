#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Drawable_EventCallback.h>

class luna_wrapper_osg_Drawable_EventCallback {
public:
	typedef Luna< osg::Drawable::EventCallback > luna_t;

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
		osg::Drawable::EventCallback* ptr= dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Drawable::EventCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_event(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Drawable::EventCallback::EventCallback()
	static osg::Drawable::EventCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::EventCallback::EventCallback() function, expected prototype:\nosg::Drawable::EventCallback::EventCallback()\nClass arguments details:\n");
		}


		return new osg::Drawable::EventCallback();
	}

	// osg::Drawable::EventCallback::EventCallback(const osg::Drawable::EventCallback & arg1, const osg::CopyOp & arg2)
	static osg::Drawable::EventCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::EventCallback::EventCallback(const osg::Drawable::EventCallback & arg1, const osg::CopyOp & arg2) function, expected prototype:\nosg::Drawable::EventCallback::EventCallback(const osg::Drawable::EventCallback & arg1, const osg::CopyOp & arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::Drawable::EventCallback* _arg1_ptr=dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::EventCallback::EventCallback function");
		}
		const osg::Drawable::EventCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::EventCallback::EventCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Drawable::EventCallback(_arg1, _arg2);
	}

	// osg::Drawable::EventCallback::EventCallback(lua_Table * data)
	static osg::Drawable::EventCallback* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::EventCallback::EventCallback(lua_Table * data) function, expected prototype:\nosg::Drawable::EventCallback::EventCallback(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Drawable_EventCallback(L,NULL);
	}

	// osg::Drawable::EventCallback::EventCallback(lua_Table * data, const osg::Drawable::EventCallback & arg2, const osg::CopyOp & arg3)
	static osg::Drawable::EventCallback* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::EventCallback::EventCallback(lua_Table * data, const osg::Drawable::EventCallback & arg2, const osg::CopyOp & arg3) function, expected prototype:\nosg::Drawable::EventCallback::EventCallback(lua_Table * data, const osg::Drawable::EventCallback & arg2, const osg::CopyOp & arg3)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		const osg::Drawable::EventCallback* _arg2_ptr=dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::EventCallback::EventCallback function");
		}
		const osg::Drawable::EventCallback & _arg2=*_arg2_ptr;
		const osg::CopyOp* _arg3_ptr=(Luna< osg::CopyOp >::check(L,3));
		if( !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osg::Drawable::EventCallback::EventCallback function");
		}
		const osg::CopyOp & _arg3=*_arg3_ptr;

		return new wrapper_osg_Drawable_EventCallback(L,NULL, _arg2, _arg3);
	}

	// Overload binder for osg::Drawable::EventCallback::EventCallback
	static osg::Drawable::EventCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function EventCallback, cannot match any of the overloads for function EventCallback:\n  EventCallback()\n  EventCallback(const osg::Drawable::EventCallback &, const osg::CopyOp &)\n  EventCallback(lua_Table *)\n  EventCallback(lua_Table *, const osg::Drawable::EventCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Drawable::EventCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::EventCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::EventCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::Drawable::EventCallback* self=dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::EventCallback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::EventCallback::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::EventCallback::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Drawable::EventCallback::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::EventCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::EventCallback* self=dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::EventCallback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::EventCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::EventCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::EventCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Drawable::EventCallback* self=dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::EventCallback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::EventCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::EventCallback::libraryName() const function, expected prototype:\nconst char * osg::Drawable::EventCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::Drawable::EventCallback* self=dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::EventCallback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::EventCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::EventCallback::className() const function, expected prototype:\nconst char * osg::Drawable::EventCallback::className() const\nClass arguments details:\n");
		}


		osg::Drawable::EventCallback* self=dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::EventCallback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Drawable::EventCallback::event(osg::NodeVisitor * arg1, osg::Drawable * arg2)
	static int _bind_event(lua_State *L) {
		if (!_lg_typecheck_event(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::EventCallback::event(osg::NodeVisitor * arg1, osg::Drawable * arg2) function, expected prototype:\nvoid osg::Drawable::EventCallback::event(osg::NodeVisitor * arg1, osg::Drawable * arg2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		osg::Drawable* _arg2=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));

		osg::Drawable::EventCallback* self=dynamic_cast< osg::Drawable::EventCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::EventCallback::event(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->event(_arg1, _arg2);

		return 0;
	}


	// Operator binds:

};

osg::Drawable::EventCallback* LunaTraits< osg::Drawable::EventCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Drawable_EventCallback::_bind_ctor(L);
}

void LunaTraits< osg::Drawable::EventCallback >::_bind_dtor(osg::Drawable::EventCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Drawable::EventCallback >::className[] = "EventCallback";
const char LunaTraits< osg::Drawable::EventCallback >::fullName[] = "osg::Drawable::EventCallback";
const char LunaTraits< osg::Drawable::EventCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::EventCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Drawable::EventCallback >::hash = 62866000;
const int LunaTraits< osg::Drawable::EventCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Drawable::EventCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Drawable_EventCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Drawable_EventCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Drawable_EventCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Drawable_EventCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Drawable_EventCallback::_bind_className},
	{"event", &luna_wrapper_osg_Drawable_EventCallback::_bind_event},
	{"__eq", &luna_wrapper_osg_Drawable_EventCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::EventCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Drawable_EventCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::EventCallback >::enumValues[] = {
	{0,0}
};


