#include <plug_common.h>

class luna_wrapper_osg_ShaderComposer {
public:
	typedef Luna< osg::ShaderComposer > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ShaderComposer* ptr= dynamic_cast< osg::ShaderComposer* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ShaderComposer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_getOrCreateProgram(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73063359) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ShaderComposer::ShaderComposer()
	static osg::ShaderComposer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderComposer::ShaderComposer() function, expected prototype:\nosg::ShaderComposer::ShaderComposer()\nClass arguments details:\n");
		}


		return new osg::ShaderComposer();
	}

	// osg::ShaderComposer::ShaderComposer(const osg::ShaderComposer & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShaderComposer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderComposer::ShaderComposer(const osg::ShaderComposer & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShaderComposer::ShaderComposer(const osg::ShaderComposer & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ShaderComposer* sa_ptr=dynamic_cast< osg::ShaderComposer* >(Luna< osg::Referenced >::check(L,1));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShaderComposer::ShaderComposer function");
		}
		const osg::ShaderComposer & sa=*sa_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShaderComposer::ShaderComposer function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ShaderComposer(sa, copyop);
	}

	// Overload binder for osg::ShaderComposer::ShaderComposer
	static osg::ShaderComposer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ShaderComposer, cannot match any of the overloads for function ShaderComposer:\n  ShaderComposer()\n  ShaderComposer(const osg::ShaderComposer &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShaderComposer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderComposer::cloneType() const function, expected prototype:\nosg::Object * osg::ShaderComposer::cloneType() const\nClass arguments details:\n");
		}


		osg::ShaderComposer* self=dynamic_cast< osg::ShaderComposer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderComposer::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShaderComposer::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderComposer::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ShaderComposer::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderComposer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShaderComposer* self=dynamic_cast< osg::ShaderComposer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderComposer::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShaderComposer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShaderComposer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShaderComposer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ShaderComposer* self=dynamic_cast< osg::ShaderComposer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShaderComposer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShaderComposer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderComposer::libraryName() const function, expected prototype:\nconst char * osg::ShaderComposer::libraryName() const\nClass arguments details:\n");
		}


		osg::ShaderComposer* self=dynamic_cast< osg::ShaderComposer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShaderComposer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShaderComposer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderComposer::className() const function, expected prototype:\nconst char * osg::ShaderComposer::className() const\nClass arguments details:\n");
		}


		osg::ShaderComposer* self=dynamic_cast< osg::ShaderComposer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShaderComposer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Program * osg::ShaderComposer::getOrCreateProgram(const osg::ShaderComponents & shaderComponents)
	static int _bind_getOrCreateProgram(lua_State *L) {
		if (!_lg_typecheck_getOrCreateProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program * osg::ShaderComposer::getOrCreateProgram(const osg::ShaderComponents & shaderComponents) function, expected prototype:\nosg::Program * osg::ShaderComposer::getOrCreateProgram(const osg::ShaderComponents & shaderComponents)\nClass arguments details:\narg 1 ID = 73063359\n");
		}

		const osg::ShaderComponents* shaderComponents_ptr=(Luna< osg::ShaderComponents >::check(L,2));
		if( !shaderComponents_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg shaderComponents in osg::ShaderComposer::getOrCreateProgram function");
		}
		const osg::ShaderComponents & shaderComponents=*shaderComponents_ptr;

		osg::ShaderComposer* self=dynamic_cast< osg::ShaderComposer* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Program * osg::ShaderComposer::getOrCreateProgram(const osg::ShaderComponents &)");
		}
		osg::Program * lret = self->getOrCreateProgram(shaderComponents);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Program >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osg::ShaderComposer* LunaTraits< osg::ShaderComposer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShaderComposer::_bind_ctor(L);
}

void LunaTraits< osg::ShaderComposer >::_bind_dtor(osg::ShaderComposer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ShaderComposer >::className[] = "ShaderComposer";
const char LunaTraits< osg::ShaderComposer >::fullName[] = "osg::ShaderComposer";
const char LunaTraits< osg::ShaderComposer >::moduleName[] = "osg";
const char* LunaTraits< osg::ShaderComposer >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::ShaderComposer >::hash = 59081886;
const int LunaTraits< osg::ShaderComposer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ShaderComposer >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ShaderComposer::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ShaderComposer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ShaderComposer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ShaderComposer::_bind_libraryName},
	{"className", &luna_wrapper_osg_ShaderComposer::_bind_className},
	{"getOrCreateProgram", &luna_wrapper_osg_ShaderComposer::_bind_getOrCreateProgram},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShaderComposer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ShaderComposer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShaderComposer >::enumValues[] = {
	{0,0}
};

