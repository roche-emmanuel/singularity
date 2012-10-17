#include <plug_common.h>

class luna_wrapper_osg_TexEnvFilter {
public:
	typedef Luna< osg::TexEnvFilter > luna_t;

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
		osg::TexEnvFilter* ptr= dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TexEnvFilter >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLodBias(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLodBias(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TexEnvFilter::TexEnvFilter(float lodBias = 0.0f)
	static osg::TexEnvFilter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexEnvFilter::TexEnvFilter(float lodBias = 0.0f) function, expected prototype:\nosg::TexEnvFilter::TexEnvFilter(float lodBias = 0.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float lodBias=luatop>0 ? (float)lua_tonumber(L,1) : 0.0f;

		return new osg::TexEnvFilter(lodBias);
	}

	// osg::TexEnvFilter::TexEnvFilter(const osg::TexEnvFilter & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexEnvFilter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexEnvFilter::TexEnvFilter(const osg::TexEnvFilter & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexEnvFilter::TexEnvFilter(const osg::TexEnvFilter & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TexEnvFilter* texenv_ptr=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if( !texenv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texenv in osg::TexEnvFilter::TexEnvFilter function");
		}
		const osg::TexEnvFilter & texenv=*texenv_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexEnvFilter::TexEnvFilter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TexEnvFilter(texenv, copyop);
	}

	// Overload binder for osg::TexEnvFilter::TexEnvFilter
	static osg::TexEnvFilter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TexEnvFilter, cannot match any of the overloads for function TexEnvFilter:\n  TexEnvFilter(float)\n  TexEnvFilter(const osg::TexEnvFilter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TexEnvFilter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnvFilter::cloneType() const function, expected prototype:\nosg::Object * osg::TexEnvFilter::cloneType() const\nClass arguments details:\n");
		}


		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnvFilter::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexEnvFilter::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnvFilter::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::TexEnvFilter::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvFilter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnvFilter::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexEnvFilter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvFilter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexEnvFilter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexEnvFilter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexEnvFilter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnvFilter::libraryName() const function, expected prototype:\nconst char * osg::TexEnvFilter::libraryName() const\nClass arguments details:\n");
		}


		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexEnvFilter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexEnvFilter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnvFilter::className() const function, expected prototype:\nconst char * osg::TexEnvFilter::className() const\nClass arguments details:\n");
		}


		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexEnvFilter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TexEnvFilter::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TexEnvFilter::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TexEnvFilter::getType() const\nClass arguments details:\n");
		}


		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TexEnvFilter::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexEnvFilter::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvFilter::isTextureAttribute() const function, expected prototype:\nbool osg::TexEnvFilter::isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexEnvFilter::isTextureAttribute() const");
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TexEnvFilter::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvFilter::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::TexEnvFilter::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::TexEnvFilter::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvFilter::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvFilter::setLodBias(float lodBias)
	static int _bind_setLodBias(lua_State *L) {
		if (!_lg_typecheck_setLodBias(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvFilter::setLodBias(float lodBias) function, expected prototype:\nvoid osg::TexEnvFilter::setLodBias(float lodBias)\nClass arguments details:\n");
		}

		float lodBias=(float)lua_tonumber(L,2);

		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvFilter::setLodBias(float)");
		}
		self->setLodBias(lodBias);

		return 0;
	}

	// float osg::TexEnvFilter::getLodBias() const
	static int _bind_getLodBias(lua_State *L) {
		if (!_lg_typecheck_getLodBias(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::TexEnvFilter::getLodBias() const function, expected prototype:\nfloat osg::TexEnvFilter::getLodBias() const\nClass arguments details:\n");
		}


		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::TexEnvFilter::getLodBias() const");
		}
		float lret = self->getLodBias();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvFilter::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvFilter::apply(osg::State & ) const function, expected prototype:\nvoid osg::TexEnvFilter::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvFilter::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnvFilter* self=dynamic_cast< osg::TexEnvFilter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvFilter::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::TexEnvFilter* LunaTraits< osg::TexEnvFilter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TexEnvFilter::_bind_ctor(L);
}

void LunaTraits< osg::TexEnvFilter >::_bind_dtor(osg::TexEnvFilter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TexEnvFilter >::className[] = "TexEnvFilter";
const char LunaTraits< osg::TexEnvFilter >::fullName[] = "osg::TexEnvFilter";
const char LunaTraits< osg::TexEnvFilter >::moduleName[] = "osg";
const char* LunaTraits< osg::TexEnvFilter >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::TexEnvFilter >::hash = 27474112;
const int LunaTraits< osg::TexEnvFilter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TexEnvFilter >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TexEnvFilter::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TexEnvFilter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TexEnvFilter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TexEnvFilter::_bind_libraryName},
	{"className", &luna_wrapper_osg_TexEnvFilter::_bind_className},
	{"getType", &luna_wrapper_osg_TexEnvFilter::_bind_getType},
	{"isTextureAttribute", &luna_wrapper_osg_TexEnvFilter::_bind_isTextureAttribute},
	{"compare", &luna_wrapper_osg_TexEnvFilter::_bind_compare},
	{"setLodBias", &luna_wrapper_osg_TexEnvFilter::_bind_setLodBias},
	{"getLodBias", &luna_wrapper_osg_TexEnvFilter::_bind_getLodBias},
	{"apply", &luna_wrapper_osg_TexEnvFilter::_bind_apply},
	{"__eq", &luna_wrapper_osg_TexEnvFilter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TexEnvFilter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TexEnvFilter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TexEnvFilter >::enumValues[] = {
	{0,0}
};


