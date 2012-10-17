#include <plug_common.h>

class luna_wrapper_osg_Drawable_CullCallback {
public:
	typedef Luna< osg::Drawable::CullCallback > luna_t;

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
		osg::Drawable::CullCallback* ptr= dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Drawable::CullCallback >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_cull_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cull_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,2286263)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Drawable::CullCallback::CullCallback()
	static osg::Drawable::CullCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::CullCallback::CullCallback() function, expected prototype:\nosg::Drawable::CullCallback::CullCallback()\nClass arguments details:\n");
		}


		return new osg::Drawable::CullCallback();
	}

	// osg::Drawable::CullCallback::CullCallback(const osg::Drawable::CullCallback & , const osg::CopyOp & )
	static osg::Drawable::CullCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable::CullCallback::CullCallback(const osg::Drawable::CullCallback & , const osg::CopyOp & ) function, expected prototype:\nosg::Drawable::CullCallback::CullCallback(const osg::Drawable::CullCallback & , const osg::CopyOp & )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		const osg::Drawable::CullCallback* _arg1_ptr=dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::CullCallback::CullCallback function");
		}
		const osg::Drawable::CullCallback & _arg1=*_arg1_ptr;
		const osg::CopyOp* _arg2_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osg::Drawable::CullCallback::CullCallback function");
		}
		const osg::CopyOp & _arg2=*_arg2_ptr;

		return new osg::Drawable::CullCallback(_arg1, _arg2);
	}

	// Overload binder for osg::Drawable::CullCallback::CullCallback
	static osg::Drawable::CullCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CullCallback, cannot match any of the overloads for function CullCallback:\n  CullCallback()\n  CullCallback(const osg::Drawable::CullCallback &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Drawable::CullCallback::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::CullCallback::cloneType() const function, expected prototype:\nosg::Object * osg::Drawable::CullCallback::cloneType() const\nClass arguments details:\n");
		}


		osg::Drawable::CullCallback* self=dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::CullCallback::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Drawable::CullCallback::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Drawable::CullCallback::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Drawable::CullCallback::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Drawable::CullCallback::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Drawable::CullCallback* self=dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Drawable::CullCallback::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Drawable::CullCallback::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::CullCallback::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Drawable::CullCallback::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Drawable::CullCallback* self=dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::CullCallback::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Drawable::CullCallback::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::CullCallback::libraryName() const function, expected prototype:\nconst char * osg::Drawable::CullCallback::libraryName() const\nClass arguments details:\n");
		}


		osg::Drawable::CullCallback* self=dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::CullCallback::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Drawable::CullCallback::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Drawable::CullCallback::className() const function, expected prototype:\nconst char * osg::Drawable::CullCallback::className() const\nClass arguments details:\n");
		}


		osg::Drawable::CullCallback* self=dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Drawable::CullCallback::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osg::Drawable::CullCallback::cull(osg::NodeVisitor * , osg::Drawable * , osg::State * ) const
	static int _bind_cull_overload_1(lua_State *L) {
		if (!_lg_typecheck_cull_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::CullCallback::cull(osg::NodeVisitor * , osg::Drawable * , osg::State * ) const function, expected prototype:\nbool osg::Drawable::CullCallback::cull(osg::NodeVisitor * , osg::Drawable * , osg::State * ) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		osg::Drawable* _arg2=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));
		osg::State* _arg3=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,4));

		osg::Drawable::CullCallback* self=dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::CullCallback::cull(osg::NodeVisitor *, osg::Drawable *, osg::State *) const");
		}
		bool lret = self->cull(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Drawable::CullCallback::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const
	static int _bind_cull_overload_2(lua_State *L) {
		if (!_lg_typecheck_cull_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Drawable::CullCallback::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const function, expected prototype:\nbool osg::Drawable::CullCallback::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 2286263\n");
		}

		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));
		osg::RenderInfo* renderInfo=(Luna< osg::RenderInfo >::check(L,4));

		osg::Drawable::CullCallback* self=dynamic_cast< osg::Drawable::CullCallback* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Drawable::CullCallback::cull(osg::NodeVisitor *, osg::Drawable *, osg::RenderInfo *) const");
		}
		bool lret = self->cull(nv, drawable, renderInfo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Drawable::CullCallback::cull
	static int _bind_cull(lua_State *L) {
		if (_lg_typecheck_cull_overload_1(L)) return _bind_cull_overload_1(L);
		if (_lg_typecheck_cull_overload_2(L)) return _bind_cull_overload_2(L);

		luaL_error(L, "error in function cull, cannot match any of the overloads for function cull:\n  cull(osg::NodeVisitor *, osg::Drawable *, osg::State *)\n  cull(osg::NodeVisitor *, osg::Drawable *, osg::RenderInfo *)\n");
		return 0;
	}


	// Operator binds:

};

osg::Drawable::CullCallback* LunaTraits< osg::Drawable::CullCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Drawable_CullCallback::_bind_ctor(L);
}

void LunaTraits< osg::Drawable::CullCallback >::_bind_dtor(osg::Drawable::CullCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Drawable::CullCallback >::className[] = "CullCallback";
const char LunaTraits< osg::Drawable::CullCallback >::fullName[] = "osg::Drawable::CullCallback";
const char LunaTraits< osg::Drawable::CullCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::Drawable::CullCallback >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Drawable::CullCallback >::hash = 93939871;
const int LunaTraits< osg::Drawable::CullCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Drawable::CullCallback >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Drawable_CullCallback::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Drawable_CullCallback::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Drawable_CullCallback::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Drawable_CullCallback::_bind_libraryName},
	{"className", &luna_wrapper_osg_Drawable_CullCallback::_bind_className},
	{"cull", &luna_wrapper_osg_Drawable_CullCallback::_bind_cull},
	{"__eq", &luna_wrapper_osg_Drawable_CullCallback::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Drawable::CullCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Drawable_CullCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Drawable::CullCallback >::enumValues[] = {
	{0,0}
};


