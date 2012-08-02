#include <plug_common.h>

class luna_wrapper_osg_Shader_PerContextShader {
public:
	typedef Luna< osg::Shader::PerContextShader > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Shader::PerContextShader* ptr= dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Shader::PerContextShader >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_requestCompile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_needsCompile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isCompiled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInfoLog(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_attachShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_detachShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Shader::PerContextShader::PerContextShader(const osg::Shader * shader, unsigned int contextID)
	static osg::Shader::PerContextShader* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Shader::PerContextShader::PerContextShader(const osg::Shader * shader, unsigned int contextID) function, expected prototype:\nosg::Shader::PerContextShader::PerContextShader(const osg::Shader * shader, unsigned int contextID)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Shader* shader=dynamic_cast< osg::Shader* >(Luna< osg::Referenced >::check(L,1));
		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new osg::Shader::PerContextShader(shader, contextID);
	}


	// Function binds:
	// unsigned int osg::Shader::PerContextShader::getHandle() const
	static int _bind_getHandle(lua_State *L) {
		if (!_lg_typecheck_getHandle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Shader::PerContextShader::getHandle() const function, expected prototype:\nunsigned int osg::Shader::PerContextShader::getHandle() const\nClass arguments details:\n");
		}


		osg::Shader::PerContextShader* self=dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Shader::PerContextShader::getHandle() const");
		}
		unsigned int lret = self->getHandle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Shader::PerContextShader::requestCompile()
	static int _bind_requestCompile(lua_State *L) {
		if (!_lg_typecheck_requestCompile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::PerContextShader::requestCompile() function, expected prototype:\nvoid osg::Shader::PerContextShader::requestCompile()\nClass arguments details:\n");
		}


		osg::Shader::PerContextShader* self=dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::PerContextShader::requestCompile()");
		}
		self->requestCompile();

		return 0;
	}

	// void osg::Shader::PerContextShader::compileShader(osg::State & state)
	static int _bind_compileShader(lua_State *L) {
		if (!_lg_typecheck_compileShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::PerContextShader::compileShader(osg::State & state) function, expected prototype:\nvoid osg::Shader::PerContextShader::compileShader(osg::State & state)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::Shader::PerContextShader::compileShader function");
		}
		osg::State & state=*state_ptr;

		osg::Shader::PerContextShader* self=dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::PerContextShader::compileShader(osg::State &)");
		}
		self->compileShader(state);

		return 0;
	}

	// bool osg::Shader::PerContextShader::needsCompile() const
	static int _bind_needsCompile(lua_State *L) {
		if (!_lg_typecheck_needsCompile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Shader::PerContextShader::needsCompile() const function, expected prototype:\nbool osg::Shader::PerContextShader::needsCompile() const\nClass arguments details:\n");
		}


		osg::Shader::PerContextShader* self=dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Shader::PerContextShader::needsCompile() const");
		}
		bool lret = self->needsCompile();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Shader::PerContextShader::isCompiled() const
	static int _bind_isCompiled(lua_State *L) {
		if (!_lg_typecheck_isCompiled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Shader::PerContextShader::isCompiled() const function, expected prototype:\nbool osg::Shader::PerContextShader::isCompiled() const\nClass arguments details:\n");
		}


		osg::Shader::PerContextShader* self=dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Shader::PerContextShader::isCompiled() const");
		}
		bool lret = self->isCompiled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Shader::PerContextShader::getInfoLog(std::string & infoLog) const
	static int _bind_getInfoLog(lua_State *L) {
		if (!_lg_typecheck_getInfoLog(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Shader::PerContextShader::getInfoLog(std::string & infoLog) const function, expected prototype:\nbool osg::Shader::PerContextShader::getInfoLog(std::string & infoLog) const\nClass arguments details:\n");
		}

		std::string infoLog(lua_tostring(L,2),lua_objlen(L,2));

		osg::Shader::PerContextShader* self=dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Shader::PerContextShader::getInfoLog(std::string &) const");
		}
		bool lret = self->getInfoLog(infoLog);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Shader::PerContextShader::attachShader(unsigned int program) const
	static int _bind_attachShader(lua_State *L) {
		if (!_lg_typecheck_attachShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::PerContextShader::attachShader(unsigned int program) const function, expected prototype:\nvoid osg::Shader::PerContextShader::attachShader(unsigned int program) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::Shader::PerContextShader* self=dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::PerContextShader::attachShader(unsigned int) const");
		}
		self->attachShader(program);

		return 0;
	}

	// void osg::Shader::PerContextShader::detachShader(unsigned int program) const
	static int _bind_detachShader(lua_State *L) {
		if (!_lg_typecheck_detachShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Shader::PerContextShader::detachShader(unsigned int program) const function, expected prototype:\nvoid osg::Shader::PerContextShader::detachShader(unsigned int program) const\nClass arguments details:\n");
		}

		unsigned int program=(unsigned int)lua_tointeger(L,2);

		osg::Shader::PerContextShader* self=dynamic_cast< osg::Shader::PerContextShader* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Shader::PerContextShader::detachShader(unsigned int) const");
		}
		self->detachShader(program);

		return 0;
	}


	// Operator binds:

};

osg::Shader::PerContextShader* LunaTraits< osg::Shader::PerContextShader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Shader_PerContextShader::_bind_ctor(L);
}

void LunaTraits< osg::Shader::PerContextShader >::_bind_dtor(osg::Shader::PerContextShader* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Shader::PerContextShader >::className[] = "PerContextShader";
const char LunaTraits< osg::Shader::PerContextShader >::fullName[] = "osg::Shader::PerContextShader";
const char LunaTraits< osg::Shader::PerContextShader >::moduleName[] = "osg";
const char* LunaTraits< osg::Shader::PerContextShader >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::Shader::PerContextShader >::hash = 71172613;
const int LunaTraits< osg::Shader::PerContextShader >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Shader::PerContextShader >::methods[] = {
	{"getHandle", &luna_wrapper_osg_Shader_PerContextShader::_bind_getHandle},
	{"requestCompile", &luna_wrapper_osg_Shader_PerContextShader::_bind_requestCompile},
	{"compileShader", &luna_wrapper_osg_Shader_PerContextShader::_bind_compileShader},
	{"needsCompile", &luna_wrapper_osg_Shader_PerContextShader::_bind_needsCompile},
	{"isCompiled", &luna_wrapper_osg_Shader_PerContextShader::_bind_isCompiled},
	{"getInfoLog", &luna_wrapper_osg_Shader_PerContextShader::_bind_getInfoLog},
	{"attachShader", &luna_wrapper_osg_Shader_PerContextShader::_bind_attachShader},
	{"detachShader", &luna_wrapper_osg_Shader_PerContextShader::_bind_detachShader},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Shader::PerContextShader >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Shader_PerContextShader::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Shader::PerContextShader >::enumValues[] = {
	{0,0}
};


