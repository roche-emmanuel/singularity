#include <plug_common.h>

class luna_wrapper_osg_Drawable_UpdateCallback {
public:
	typedef Luna< osg::Drawable::UpdateCallback > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Drawable::UpdateCallback* ptr= dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Drawable::UpdateCallback >::push(L,ptr,false);
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
		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Drawable::UpdateCallback::UpdateCallback()
	static osg::Drawable::UpdateCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::UpdateCallback::UpdateCallback() function, expected prototype:\nosg::Drawable::UpdateCallback::UpdateCallback()\nClass arguments details:\n");
		}


		return new osg::Drawable::UpdateCallback();
	}

	// osg::Drawable::UpdateCallback::UpdateCallback(const osg::Drawable::UpdateCallback & , const osg::CopyOp & )
	static osg::Drawable::UpdateCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::UpdateCallback::UpdateCallback(const osg::Drawable::UpdateCallback & , const osg::CopyOp & ) function, expected prototype:\nosg::Drawable::UpdateCallback::UpdateCallback(const osg::Drawable::UpdateCallback & , const osg::CopyOp & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::Drawable::UpdateCallback* _arg1_ptr=dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::UpdateCallback::UpdateCallback function");
		}
		const osg::Drawable::UpdateCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::UpdateCallback::UpdateCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Drawable::UpdateCallback(_arg1, _arg2);
	}

	// Overload binder for osg::Drawable::UpdateCallback::UpdateCallback
	static osg::Drawable::UpdateCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function UpdateCallback, cannot match any of the overloads for function UpdateCallback:\n  UpdateCallback()\n  UpdateCallback(const osg::Drawable::UpdateCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Drawable::UpdateCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::UpdateCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::UpdateCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::UpdateCallback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::UpdateCallback::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::UpdateCallback::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Drawable::UpdateCallback::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::UpdateCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::UpdateCallback* self=dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::UpdateCallback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::UpdateCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::UpdateCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::UpdateCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Drawable::UpdateCallback* self=dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::UpdateCallback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::UpdateCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::UpdateCallback::libraryName() const function, expected prototype:\nconst char * osg::Drawable::UpdateCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::UpdateCallback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::UpdateCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::UpdateCallback::className() const function, expected prototype:\nconst char * osg::Drawable::UpdateCallback::className() const\nClass arguments details:\n");
		}


		osg::Drawable::UpdateCallback* self=dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::UpdateCallback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Drawable::UpdateCallback::update(osg::NodeVisitor * , osg::Drawable * )
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::UpdateCallback::update(osg::NodeVisitor * , osg::Drawable * ) function, expected prototype:\nvoid osg::Drawable::UpdateCallback::update(osg::NodeVisitor * , osg::Drawable * )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		osg::Drawable* _arg2=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));

		osg::Drawable::UpdateCallback* self=dynamic_cast< osg::Drawable::UpdateCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::UpdateCallback::update(osg::NodeVisitor *, osg::Drawable *)");
		}
		self->update(_arg1, _arg2);

		return 0;
	}


	// Operator binds:

};

osg::Drawable::UpdateCallback* LunaTraits< osg::Drawable::UpdateCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Drawable_UpdateCallback::_bind_ctor(L);
}

void LunaTraits< osg::Drawable::UpdateCallback >::_bind_dtor(osg::Drawable::UpdateCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Drawable::UpdateCallback >::className[] = "UpdateCallback";
const char LunaTraits< osg::Drawable::UpdateCallback >::fullName[] = "osg::Drawable::UpdateCallback";
const char LunaTraits< osg::Drawable::UpdateCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::UpdateCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Drawable::UpdateCallback >::hash = 5213827;
const int LunaTraits< osg::Drawable::UpdateCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Drawable::UpdateCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_className},
	{"update", &luna_wrapper_osg_Drawable_UpdateCallback::_bind_update},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::UpdateCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Drawable_UpdateCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::UpdateCallback >::enumValues[] = {
	{0,0}
};


