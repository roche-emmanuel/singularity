#include <plug_common.h>

class luna_wrapper_osg_ShaderBinary {
public:
	typedef Luna< osg::ShaderBinary > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ShaderBinary* ptr= dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ShaderBinary >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readShaderBinaryFile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ShaderBinary::ShaderBinary()
	static osg::ShaderBinary* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderBinary::ShaderBinary() function, expected prototype:\nosg::ShaderBinary::ShaderBinary()\nClass arguments details:\n");
		}


		return new osg::ShaderBinary();
	}

	// osg::ShaderBinary::ShaderBinary(const osg::ShaderBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShaderBinary* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShaderBinary::ShaderBinary(const osg::ShaderBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShaderBinary::ShaderBinary(const osg::ShaderBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ShaderBinary* rhs_ptr=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::ShaderBinary::ShaderBinary function");
		}
		const osg::ShaderBinary & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShaderBinary::ShaderBinary function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ShaderBinary(rhs, copyop);
	}

	// Overload binder for osg::ShaderBinary::ShaderBinary
	static osg::ShaderBinary* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ShaderBinary, cannot match any of the overloads for function ShaderBinary:\n  ShaderBinary()\n  ShaderBinary(const osg::ShaderBinary &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShaderBinary::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderBinary::cloneType() const function, expected prototype:\nosg::Object * osg::ShaderBinary::cloneType() const\nClass arguments details:\n");
		}


		osg::ShaderBinary* self=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderBinary::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShaderBinary::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShaderBinary::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ShaderBinary::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShaderBinary::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShaderBinary* self=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShaderBinary::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShaderBinary::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShaderBinary::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShaderBinary::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ShaderBinary* self=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShaderBinary::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShaderBinary::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderBinary::libraryName() const function, expected prototype:\nconst char * osg::ShaderBinary::libraryName() const\nClass arguments details:\n");
		}


		osg::ShaderBinary* self=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShaderBinary::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShaderBinary::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShaderBinary::className() const function, expected prototype:\nconst char * osg::ShaderBinary::className() const\nClass arguments details:\n");
		}


		osg::ShaderBinary* self=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShaderBinary::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ShaderBinary::assign(unsigned int size, const unsigned char * data)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShaderBinary::assign(unsigned int size, const unsigned char * data) function, expected prototype:\nvoid osg::ShaderBinary::assign(unsigned int size, const unsigned char * data)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);
		unsigned char data = (unsigned char)(lua_tointeger(L,3));

		osg::ShaderBinary* self=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShaderBinary::assign(unsigned int, const unsigned char *)");
		}
		self->assign(size, &data);

		return 0;
	}

	// unsigned int osg::ShaderBinary::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::ShaderBinary::getSize() const function, expected prototype:\nunsigned int osg::ShaderBinary::getSize() const\nClass arguments details:\n");
		}


		osg::ShaderBinary* self=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::ShaderBinary::getSize() const");
		}
		unsigned int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * osg::ShaderBinary::getData()
	static int _bind_getData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char * osg::ShaderBinary::getData() function, expected prototype:\nunsigned char * osg::ShaderBinary::getData()\nClass arguments details:\n");
		}


		osg::ShaderBinary* self=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char * osg::ShaderBinary::getData()");
		}
		unsigned char * lret = self->getData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * osg::ShaderBinary::getData() const
	static int _bind_getData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::ShaderBinary::getData() const function, expected prototype:\nconst unsigned char * osg::ShaderBinary::getData() const\nClass arguments details:\n");
		}


		osg::ShaderBinary* self=dynamic_cast< osg::ShaderBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * osg::ShaderBinary::getData() const");
		}
		const unsigned char * lret = self->getData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for osg::ShaderBinary::getData
	static int _bind_getData(lua_State *L) {
		if (_lg_typecheck_getData_overload_1(L)) return _bind_getData_overload_1(L);
		if (_lg_typecheck_getData_overload_2(L)) return _bind_getData_overload_2(L);

		luaL_error(L, "error in function getData, cannot match any of the overloads for function getData:\n  getData()\n  getData()\n");
		return 0;
	}

	// static osg::ShaderBinary * osg::ShaderBinary::readShaderBinaryFile(const std::string & fileName)
	static int _bind_readShaderBinaryFile(lua_State *L) {
		if (!_lg_typecheck_readShaderBinaryFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ShaderBinary * osg::ShaderBinary::readShaderBinaryFile(const std::string & fileName) function, expected prototype:\nstatic osg::ShaderBinary * osg::ShaderBinary::readShaderBinaryFile(const std::string & fileName)\nClass arguments details:\n");
		}

		std::string fileName(lua_tostring(L,1),lua_objlen(L,1));

		osg::ShaderBinary * lret = osg::ShaderBinary::readShaderBinaryFile(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ShaderBinary >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osg::ShaderBinary* LunaTraits< osg::ShaderBinary >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShaderBinary::_bind_ctor(L);
}

void LunaTraits< osg::ShaderBinary >::_bind_dtor(osg::ShaderBinary* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ShaderBinary >::className[] = "ShaderBinary";
const char LunaTraits< osg::ShaderBinary >::fullName[] = "osg::ShaderBinary";
const char LunaTraits< osg::ShaderBinary >::moduleName[] = "osg";
const char* LunaTraits< osg::ShaderBinary >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::ShaderBinary >::hash = 69756848;
const int LunaTraits< osg::ShaderBinary >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ShaderBinary >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ShaderBinary::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ShaderBinary::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ShaderBinary::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ShaderBinary::_bind_libraryName},
	{"className", &luna_wrapper_osg_ShaderBinary::_bind_className},
	{"assign", &luna_wrapper_osg_ShaderBinary::_bind_assign},
	{"getSize", &luna_wrapper_osg_ShaderBinary::_bind_getSize},
	{"getData", &luna_wrapper_osg_ShaderBinary::_bind_getData},
	{"readShaderBinaryFile", &luna_wrapper_osg_ShaderBinary::_bind_readShaderBinaryFile},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShaderBinary >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ShaderBinary::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShaderBinary >::enumValues[] = {
	{0,0}
};


