#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ShaderComponent.h>

class luna_wrapper_osg_ShaderComponent {
public:
	typedef Luna< osg::ShaderComponent > luna_t;

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
		osg::ShaderComponent* ptr= dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ShaderComponent >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_addShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShader_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShader_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumShaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ShaderComponent::ShaderComponent()
	static osg::ShaderComponent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderComponent::ShaderComponent() function, expected prototype:\nosg::ShaderComponent::ShaderComponent()\nClass arguments details:\n");
		}


		return new osg::ShaderComponent();
	}

	// osg::ShaderComponent::ShaderComponent(const osg::ShaderComponent & sc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShaderComponent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderComponent::ShaderComponent(const osg::ShaderComponent & sc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShaderComponent::ShaderComponent(const osg::ShaderComponent & sc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ShaderComponent* sc_ptr=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if( !sc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sc in osg::ShaderComponent::ShaderComponent function");
		}
		const osg::ShaderComponent & sc=*sc_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShaderComponent::ShaderComponent function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ShaderComponent(sc, copyop);
	}

	// osg::ShaderComponent::ShaderComponent(lua_Table * data)
	static osg::ShaderComponent* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderComponent::ShaderComponent(lua_Table * data) function, expected prototype:\nosg::ShaderComponent::ShaderComponent(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_ShaderComponent(L,NULL);
	}

	// osg::ShaderComponent::ShaderComponent(lua_Table * data, const osg::ShaderComponent & sc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShaderComponent* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderComponent::ShaderComponent(lua_Table * data, const osg::ShaderComponent & sc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShaderComponent::ShaderComponent(lua_Table * data, const osg::ShaderComponent & sc, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ShaderComponent* sc_ptr=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,2));
		if( !sc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sc in osg::ShaderComponent::ShaderComponent function");
		}
		const osg::ShaderComponent & sc=*sc_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShaderComponent::ShaderComponent function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_ShaderComponent(L,NULL, sc, copyop);
	}

	// Overload binder for osg::ShaderComponent::ShaderComponent
	static osg::ShaderComponent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ShaderComponent, cannot match any of the overloads for function ShaderComponent:\n  ShaderComponent()\n  ShaderComponent(const osg::ShaderComponent &, const osg::CopyOp &)\n  ShaderComponent(lua_Table *)\n  ShaderComponent(lua_Table *, const osg::ShaderComponent &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShaderComponent::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderComponent::cloneType() const function, expected prototype:\nosg::Object * osg::ShaderComponent::cloneType() const\nClass arguments details:\n");
		}


		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderComponent::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShaderComponent::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderComponent::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::ShaderComponent::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderComponent::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderComponent::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShaderComponent::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShaderComponent::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShaderComponent::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShaderComponent::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShaderComponent::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderComponent::libraryName() const function, expected prototype:\nconst char * osg::ShaderComponent::libraryName() const\nClass arguments details:\n");
		}


		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShaderComponent::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShaderComponent::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderComponent::className() const function, expected prototype:\nconst char * osg::ShaderComponent::className() const\nClass arguments details:\n");
		}


		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShaderComponent::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// unsigned int osg::ShaderComponent::addShader(osg::Shader * shader)
	static int _bind_addShader(lua_State *L) {
		if (!_lg_typecheck_addShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderComponent::addShader(osg::Shader * shader) function, expected prototype:\nunsigned int osg::ShaderComponent::addShader(osg::Shader * shader)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Shader* shader=dynamic_cast< osg::Shader* >(Luna< osg::Referenced >::check(L,2));

		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderComponent::addShader(osg::Shader *)");
		}
		unsigned int lret = self->addShader(shader);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShaderComponent::removeShader(unsigned int i)
	static int _bind_removeShader(lua_State *L) {
		if (!_lg_typecheck_removeShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderComponent::removeShader(unsigned int i) function, expected prototype:\nvoid osg::ShaderComponent::removeShader(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderComponent::removeShader(unsigned int)");
		}
		self->removeShader(i);

		return 0;
	}

	// osg::Shader * osg::ShaderComponent::getShader(unsigned int i)
	static int _bind_getShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShader_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader * osg::ShaderComponent::getShader(unsigned int i) function, expected prototype:\nosg::Shader * osg::ShaderComponent::getShader(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Shader * osg::ShaderComponent::getShader(unsigned int)");
		}
		osg::Shader * lret = self->getShader(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// const osg::Shader * osg::ShaderComponent::getShader(unsigned int i) const
	static int _bind_getShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShader_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Shader * osg::ShaderComponent::getShader(unsigned int i) const function, expected prototype:\nconst osg::Shader * osg::ShaderComponent::getShader(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Shader * osg::ShaderComponent::getShader(unsigned int) const");
		}
		const osg::Shader * lret = self->getShader(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShaderComponent::getShader
	static int _bind_getShader(lua_State *L) {
		if (_lg_typecheck_getShader_overload_1(L)) return _bind_getShader_overload_1(L);
		if (_lg_typecheck_getShader_overload_2(L)) return _bind_getShader_overload_2(L);

		luaL_error(L, "error in function getShader, cannot match any of the overloads for function getShader:\n  getShader(unsigned int)\n  getShader(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::ShaderComponent::getNumShaders() const
	static int _bind_getNumShaders(lua_State *L) {
		if (!_lg_typecheck_getNumShaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderComponent::getNumShaders() const function, expected prototype:\nunsigned int osg::ShaderComponent::getNumShaders() const\nClass arguments details:\n");
		}


		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderComponent::getNumShaders() const");
		}
		unsigned int lret = self->getNumShaders();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShaderComponent::compileGLObjects(osg::State & state) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderComponent::compileGLObjects(osg::State & state) const function, expected prototype:\nvoid osg::ShaderComponent::compileGLObjects(osg::State & state) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::ShaderComponent::compileGLObjects function");
		}
		osg::State & state=*state_ptr;

		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderComponent::compileGLObjects(osg::State &) const");
		}
		self->compileGLObjects(state);

		return 0;
	}

	// void osg::ShaderComponent::releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderComponent::releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::ShaderComponent::releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::ShaderComponent* self=dynamic_cast< osg::ShaderComponent* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderComponent::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::ShaderComponent* LunaTraits< osg::ShaderComponent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShaderComponent::_bind_ctor(L);
}

void LunaTraits< osg::ShaderComponent >::_bind_dtor(osg::ShaderComponent* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ShaderComponent >::className[] = "ShaderComponent";
const char LunaTraits< osg::ShaderComponent >::fullName[] = "osg::ShaderComponent";
const char LunaTraits< osg::ShaderComponent >::moduleName[] = "osg";
const char* LunaTraits< osg::ShaderComponent >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::ShaderComponent >::hash = 31389143;
const int LunaTraits< osg::ShaderComponent >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ShaderComponent >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ShaderComponent::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ShaderComponent::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ShaderComponent::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ShaderComponent::_bind_libraryName},
	{"className", &luna_wrapper_osg_ShaderComponent::_bind_className},
	{"addShader", &luna_wrapper_osg_ShaderComponent::_bind_addShader},
	{"removeShader", &luna_wrapper_osg_ShaderComponent::_bind_removeShader},
	{"getShader", &luna_wrapper_osg_ShaderComponent::_bind_getShader},
	{"getNumShaders", &luna_wrapper_osg_ShaderComponent::_bind_getNumShaders},
	{"compileGLObjects", &luna_wrapper_osg_ShaderComponent::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_ShaderComponent::_bind_releaseGLObjects},
	{"__eq", &luna_wrapper_osg_ShaderComponent::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShaderComponent >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ShaderComponent::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShaderComponent >::enumValues[] = {
	{0,0}
};


