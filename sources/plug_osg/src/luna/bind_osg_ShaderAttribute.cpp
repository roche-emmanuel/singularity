#include <plug_common.h>

class luna_wrapper_osg_ShaderAttribute {
public:
	typedef Luna< osg::ShaderAttribute > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ShaderAttribute* ptr= dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ShaderAttribute >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
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

	inline static bool _lg_typecheck_getNumShaders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_addUniform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeUniform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumUniforms(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUniform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUniform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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
	// osg::ShaderAttribute::ShaderAttribute()
	static osg::ShaderAttribute* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderAttribute::ShaderAttribute() function, expected prototype:\nosg::ShaderAttribute::ShaderAttribute()\nClass arguments details:\n");
		}


		return new osg::ShaderAttribute();
	}

	// osg::ShaderAttribute::ShaderAttribute(const osg::ShaderAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShaderAttribute* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderAttribute::ShaderAttribute(const osg::ShaderAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShaderAttribute::ShaderAttribute(const osg::ShaderAttribute & sa, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ShaderAttribute* sa_ptr=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShaderAttribute::ShaderAttribute function");
		}
		const osg::ShaderAttribute & sa=*sa_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShaderAttribute::ShaderAttribute function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ShaderAttribute(sa, copyop);
	}

	// Overload binder for osg::ShaderAttribute::ShaderAttribute
	static osg::ShaderAttribute* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ShaderAttribute, cannot match any of the overloads for function ShaderAttribute:\n  ShaderAttribute()\n  ShaderAttribute(const osg::ShaderAttribute &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShaderAttribute::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderAttribute::cloneType() const function, expected prototype:\nosg::Object * osg::ShaderAttribute::cloneType() const\nClass arguments details:\n");
		}


		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderAttribute::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShaderAttribute::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderAttribute::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ShaderAttribute::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderAttribute::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShaderAttribute::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShaderAttribute::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShaderAttribute::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShaderAttribute::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShaderAttribute::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderAttribute::libraryName() const function, expected prototype:\nconst char * osg::ShaderAttribute::libraryName() const\nClass arguments details:\n");
		}


		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShaderAttribute::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShaderAttribute::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderAttribute::className() const function, expected prototype:\nconst char * osg::ShaderAttribute::className() const\nClass arguments details:\n");
		}


		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShaderAttribute::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// int osg::ShaderAttribute::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::ShaderAttribute::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::ShaderAttribute::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::ShaderAttribute::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::ShaderAttribute::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShaderAttribute::setType(osg::StateAttribute::Type type)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::setType(osg::StateAttribute::Type type) function, expected prototype:\nvoid osg::ShaderAttribute::setType(osg::StateAttribute::Type type)\nClass arguments details:\n");
		}

		osg::StateAttribute::Type type=(osg::StateAttribute::Type)lua_tointeger(L,2);

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::setType(osg::StateAttribute::Type)");
		}
		self->setType(type);

		return 0;
	}

	// osg::StateAttribute::Type osg::ShaderAttribute::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::ShaderAttribute::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::ShaderAttribute::getType() const\nClass arguments details:\n");
		}


		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::ShaderAttribute::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::ShaderAttribute::addShader(osg::Shader * shader)
	static int _bind_addShader(lua_State *L) {
		if (!_lg_typecheck_addShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderAttribute::addShader(osg::Shader * shader) function, expected prototype:\nunsigned int osg::ShaderAttribute::addShader(osg::Shader * shader)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Shader* shader=dynamic_cast< osg::Shader* >(Luna< osg::Referenced >::check(L,2));

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderAttribute::addShader(osg::Shader *)");
		}
		unsigned int lret = self->addShader(shader);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShaderAttribute::removeShader(unsigned int i)
	static int _bind_removeShader(lua_State *L) {
		if (!_lg_typecheck_removeShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::removeShader(unsigned int i) function, expected prototype:\nvoid osg::ShaderAttribute::removeShader(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::removeShader(unsigned int)");
		}
		self->removeShader(i);

		return 0;
	}

	// unsigned int osg::ShaderAttribute::getNumShaders() const
	static int _bind_getNumShaders(lua_State *L) {
		if (!_lg_typecheck_getNumShaders(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderAttribute::getNumShaders() const function, expected prototype:\nunsigned int osg::ShaderAttribute::getNumShaders() const\nClass arguments details:\n");
		}


		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderAttribute::getNumShaders() const");
		}
		unsigned int lret = self->getNumShaders();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Shader * osg::ShaderAttribute::getShader(unsigned int i)
	static int _bind_getShader_overload_1(lua_State *L) {
		if (!_lg_typecheck_getShader_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader * osg::ShaderAttribute::getShader(unsigned int i) function, expected prototype:\nosg::Shader * osg::ShaderAttribute::getShader(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Shader * osg::ShaderAttribute::getShader(unsigned int)");
		}
		osg::Shader * lret = self->getShader(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// const osg::Shader * osg::ShaderAttribute::getShader(unsigned int i) const
	static int _bind_getShader_overload_2(lua_State *L) {
		if (!_lg_typecheck_getShader_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Shader * osg::ShaderAttribute::getShader(unsigned int i) const function, expected prototype:\nconst osg::Shader * osg::ShaderAttribute::getShader(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Shader * osg::ShaderAttribute::getShader(unsigned int) const");
		}
		const osg::Shader * lret = self->getShader(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Shader >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShaderAttribute::getShader
	static int _bind_getShader(lua_State *L) {
		if (_lg_typecheck_getShader_overload_1(L)) return _bind_getShader_overload_1(L);
		if (_lg_typecheck_getShader_overload_2(L)) return _bind_getShader_overload_2(L);

		luaL_error(L, "error in function getShader, cannot match any of the overloads for function getShader:\n  getShader(unsigned int)\n  getShader(unsigned int)\n");
		return 0;
	}

	// unsigned int osg::ShaderAttribute::addUniform(osg::Uniform * uniform)
	static int _bind_addUniform(lua_State *L) {
		if (!_lg_typecheck_addUniform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderAttribute::addUniform(osg::Uniform * uniform) function, expected prototype:\nunsigned int osg::ShaderAttribute::addUniform(osg::Uniform * uniform)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Uniform* uniform=dynamic_cast< osg::Uniform* >(Luna< osg::Referenced >::check(L,2));

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderAttribute::addUniform(osg::Uniform *)");
		}
		unsigned int lret = self->addUniform(uniform);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ShaderAttribute::removeUniform(unsigned int i)
	static int _bind_removeUniform(lua_State *L) {
		if (!_lg_typecheck_removeUniform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::removeUniform(unsigned int i) function, expected prototype:\nvoid osg::ShaderAttribute::removeUniform(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::removeUniform(unsigned int)");
		}
		self->removeUniform(i);

		return 0;
	}

	// unsigned int osg::ShaderAttribute::getNumUniforms() const
	static int _bind_getNumUniforms(lua_State *L) {
		if (!_lg_typecheck_getNumUniforms(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderAttribute::getNumUniforms() const function, expected prototype:\nunsigned int osg::ShaderAttribute::getNumUniforms() const\nClass arguments details:\n");
		}


		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderAttribute::getNumUniforms() const");
		}
		unsigned int lret = self->getNumUniforms();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i)
	static int _bind_getUniform_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUniform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i) function, expected prototype:\nosg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int)");
		}
		osg::Uniform * lret = self->getUniform(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// const osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i) const
	static int _bind_getUniform_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUniform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i) const function, expected prototype:\nconst osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Uniform * osg::ShaderAttribute::getUniform(unsigned int) const");
		}
		const osg::Uniform * lret = self->getUniform(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Uniform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShaderAttribute::getUniform
	static int _bind_getUniform(lua_State *L) {
		if (_lg_typecheck_getUniform_overload_1(L)) return _bind_getUniform_overload_1(L);
		if (_lg_typecheck_getUniform_overload_2(L)) return _bind_getUniform_overload_2(L);

		luaL_error(L, "error in function getUniform, cannot match any of the overloads for function getUniform:\n  getUniform(unsigned int)\n  getUniform(unsigned int)\n");
		return 0;
	}

	// bool osg::ShaderAttribute::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShaderAttribute::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::ShaderAttribute::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShaderAttribute::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::ShaderAttribute::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::apply(osg::State & ) const function, expected prototype:\nvoid osg::ShaderAttribute::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::ShaderAttribute::compileGLObjects(osg::State & ) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::compileGLObjects(osg::State & ) const function, expected prototype:\nvoid osg::ShaderAttribute::compileGLObjects(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderAttribute::compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::compileGLObjects(osg::State &) const");
		}
		self->compileGLObjects(_arg1);

		return 0;
	}

	// void osg::ShaderAttribute::releaseGLObjects(osg::State *  = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderAttribute::releaseGLObjects(osg::State *  = 0) const function, expected prototype:\nvoid osg::ShaderAttribute::releaseGLObjects(osg::State *  = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::ShaderAttribute* self=dynamic_cast< osg::ShaderAttribute* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderAttribute::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::ShaderAttribute* LunaTraits< osg::ShaderAttribute >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShaderAttribute::_bind_ctor(L);
}

void LunaTraits< osg::ShaderAttribute >::_bind_dtor(osg::ShaderAttribute* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ShaderAttribute >::className[] = "ShaderAttribute";
const char LunaTraits< osg::ShaderAttribute >::fullName[] = "osg::ShaderAttribute";
const char LunaTraits< osg::ShaderAttribute >::moduleName[] = "osg";
const char* LunaTraits< osg::ShaderAttribute >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::ShaderAttribute >::hash = 76536462;
const int LunaTraits< osg::ShaderAttribute >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ShaderAttribute >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ShaderAttribute::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ShaderAttribute::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ShaderAttribute::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ShaderAttribute::_bind_libraryName},
	{"className", &luna_wrapper_osg_ShaderAttribute::_bind_className},
	{"compare", &luna_wrapper_osg_ShaderAttribute::_bind_compare},
	{"setType", &luna_wrapper_osg_ShaderAttribute::_bind_setType},
	{"getType", &luna_wrapper_osg_ShaderAttribute::_bind_getType},
	{"addShader", &luna_wrapper_osg_ShaderAttribute::_bind_addShader},
	{"removeShader", &luna_wrapper_osg_ShaderAttribute::_bind_removeShader},
	{"getNumShaders", &luna_wrapper_osg_ShaderAttribute::_bind_getNumShaders},
	{"getShader", &luna_wrapper_osg_ShaderAttribute::_bind_getShader},
	{"addUniform", &luna_wrapper_osg_ShaderAttribute::_bind_addUniform},
	{"removeUniform", &luna_wrapper_osg_ShaderAttribute::_bind_removeUniform},
	{"getNumUniforms", &luna_wrapper_osg_ShaderAttribute::_bind_getNumUniforms},
	{"getUniform", &luna_wrapper_osg_ShaderAttribute::_bind_getUniform},
	{"getModeUsage", &luna_wrapper_osg_ShaderAttribute::_bind_getModeUsage},
	{"apply", &luna_wrapper_osg_ShaderAttribute::_bind_apply},
	{"compileGLObjects", &luna_wrapper_osg_ShaderAttribute::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_ShaderAttribute::_bind_releaseGLObjects},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShaderAttribute >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ShaderAttribute::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShaderAttribute >::enumValues[] = {
	{0,0}
};

