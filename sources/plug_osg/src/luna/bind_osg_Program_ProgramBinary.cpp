#include <plug_common.h>

class luna_wrapper_osg_Program_ProgramBinary {
public:
	typedef Luna< osg::Program::ProgramBinary > luna_t;

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
		osg::Program::ProgramBinary* ptr= dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Program::ProgramBinary >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Program::ProgramBinary::ProgramBinary()
	static osg::Program::ProgramBinary* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::ProgramBinary::ProgramBinary() function, expected prototype:\nosg::Program::ProgramBinary::ProgramBinary()\nClass arguments details:\n");
		}


		return new osg::Program::ProgramBinary();
	}

	// osg::Program::ProgramBinary::ProgramBinary(const osg::Program::ProgramBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Program::ProgramBinary* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Program::ProgramBinary::ProgramBinary(const osg::Program::ProgramBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Program::ProgramBinary::ProgramBinary(const osg::Program::ProgramBinary & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Program::ProgramBinary* rhs_ptr=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Program::ProgramBinary::ProgramBinary function");
		}
		const osg::Program::ProgramBinary & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Program::ProgramBinary::ProgramBinary function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Program::ProgramBinary(rhs, copyop);
	}

	// Overload binder for osg::Program::ProgramBinary::ProgramBinary
	static osg::Program::ProgramBinary* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ProgramBinary, cannot match any of the overloads for function ProgramBinary:\n  ProgramBinary()\n  ProgramBinary(const osg::Program::ProgramBinary &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Program::ProgramBinary::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::ProgramBinary::cloneType() const function, expected prototype:\nosg::Object * osg::Program::ProgramBinary::cloneType() const\nClass arguments details:\n");
		}


		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::ProgramBinary::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Program::ProgramBinary::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Program::ProgramBinary::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Program::ProgramBinary::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Program::ProgramBinary::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Program::ProgramBinary::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Program::ProgramBinary::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Program::ProgramBinary::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Program::ProgramBinary::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Program::ProgramBinary::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Program::ProgramBinary::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Program::ProgramBinary::libraryName() const function, expected prototype:\nconst char * osg::Program::ProgramBinary::libraryName() const\nClass arguments details:\n");
		}


		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Program::ProgramBinary::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Program::ProgramBinary::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Program::ProgramBinary::className() const function, expected prototype:\nconst char * osg::Program::ProgramBinary::className() const\nClass arguments details:\n");
		}


		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Program::ProgramBinary::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Program::ProgramBinary::assign(unsigned int size, const unsigned char * data)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Program::ProgramBinary::assign(unsigned int size, const unsigned char * data) function, expected prototype:\nvoid osg::Program::ProgramBinary::assign(unsigned int size, const unsigned char * data)\nClass arguments details:\n");
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);
		unsigned char data = (unsigned char)(lua_tointeger(L,3));

		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Program::ProgramBinary::assign(unsigned int, const unsigned char *)");
		}
		self->assign(size, &data);

		return 0;
	}

	// void osg::Program::ProgramBinary::setFormat(unsigned int format)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Program::ProgramBinary::setFormat(unsigned int format) function, expected prototype:\nvoid osg::Program::ProgramBinary::setFormat(unsigned int format)\nClass arguments details:\n");
		}

		unsigned int format=(unsigned int)lua_tointeger(L,2);

		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Program::ProgramBinary::setFormat(unsigned int)");
		}
		self->setFormat(format);

		return 0;
	}

	// unsigned int osg::Program::ProgramBinary::getFormat() const
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::ProgramBinary::getFormat() const function, expected prototype:\nunsigned int osg::Program::ProgramBinary::getFormat() const\nClass arguments details:\n");
		}


		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::ProgramBinary::getFormat() const");
		}
		unsigned int lret = self->getFormat();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Program::ProgramBinary::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::ProgramBinary::getSize() const function, expected prototype:\nunsigned int osg::Program::ProgramBinary::getSize() const\nClass arguments details:\n");
		}


		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::ProgramBinary::getSize() const");
		}
		unsigned int lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char * osg::Program::ProgramBinary::getData()
	static int _bind_getData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned char * osg::Program::ProgramBinary::getData() function, expected prototype:\nunsigned char * osg::Program::ProgramBinary::getData()\nClass arguments details:\n");
		}


		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned char * osg::Program::ProgramBinary::getData()");
		}
		unsigned char * lret = self->getData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// const unsigned char * osg::Program::ProgramBinary::getData() const
	static int _bind_getData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const unsigned char * osg::Program::ProgramBinary::getData() const function, expected prototype:\nconst unsigned char * osg::Program::ProgramBinary::getData() const\nClass arguments details:\n");
		}


		osg::Program::ProgramBinary* self=dynamic_cast< osg::Program::ProgramBinary* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const unsigned char * osg::Program::ProgramBinary::getData() const");
		}
		const unsigned char * lret = self->getData();
		luaL_error(L,"Trying to convert pointer on unsigned char lret to lua. This usage should be clarifierd.");

		return 1;
	}

	// Overload binder for osg::Program::ProgramBinary::getData
	static int _bind_getData(lua_State *L) {
		if (_lg_typecheck_getData_overload_1(L)) return _bind_getData_overload_1(L);
		if (_lg_typecheck_getData_overload_2(L)) return _bind_getData_overload_2(L);

		luaL_error(L, "error in function getData, cannot match any of the overloads for function getData:\n  getData()\n  getData()\n");
		return 0;
	}


	// Operator binds:

};

osg::Program::ProgramBinary* LunaTraits< osg::Program::ProgramBinary >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program_ProgramBinary::_bind_ctor(L);
}

void LunaTraits< osg::Program::ProgramBinary >::_bind_dtor(osg::Program::ProgramBinary* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Program::ProgramBinary >::className[] = "ProgramBinary";
const char LunaTraits< osg::Program::ProgramBinary >::fullName[] = "osg::Program::ProgramBinary";
const char LunaTraits< osg::Program::ProgramBinary >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::ProgramBinary >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::Program::ProgramBinary >::hash = 72344532;
const int LunaTraits< osg::Program::ProgramBinary >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Program::ProgramBinary >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Program_ProgramBinary::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Program_ProgramBinary::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Program_ProgramBinary::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Program_ProgramBinary::_bind_libraryName},
	{"className", &luna_wrapper_osg_Program_ProgramBinary::_bind_className},
	{"assign", &luna_wrapper_osg_Program_ProgramBinary::_bind_assign},
	{"setFormat", &luna_wrapper_osg_Program_ProgramBinary::_bind_setFormat},
	{"getFormat", &luna_wrapper_osg_Program_ProgramBinary::_bind_getFormat},
	{"getSize", &luna_wrapper_osg_Program_ProgramBinary::_bind_getSize},
	{"getData", &luna_wrapper_osg_Program_ProgramBinary::_bind_getData},
	{"__eq", &luna_wrapper_osg_Program_ProgramBinary::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::ProgramBinary >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Program_ProgramBinary::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::ProgramBinary >::enumValues[] = {
	{0,0}
};


