#include <plug_common.h>

class luna_wrapper_osg_DrawArrayLengths {
public:
	typedef Luna< osg::DrawArrayLengths > luna_t;

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
		osg::DrawArrayLengths* ptr= dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawArrayLengths >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_setFirst(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFirst(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_offsetIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode = 0)
	static osg::DrawArrayLengths* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode = 0) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(unsigned int mode = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : 0;

		return new osg::DrawArrayLengths(mode);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawArrayLengths* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(const osg::DrawArrayLengths & dal, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::DrawArrayLengths* dal_ptr=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if( !dal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dal in osg::DrawArrayLengths::DrawArrayLengths function");
		}
		const osg::DrawArrayLengths & dal=*dal_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawArrayLengths::DrawArrayLengths function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::DrawArrayLengths(dal, copyop);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no, int * ptr)
	static osg::DrawArrayLengths* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no, int * ptr) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no, int * ptr)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		int first=(int)lua_tointeger(L,2);
		unsigned int no=(unsigned int)lua_tointeger(L,3);
		int ptr=(int)lua_tointeger(L,4);

		return new osg::DrawArrayLengths(mode, first, no, &ptr);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no)
	static osg::DrawArrayLengths* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first, unsigned int no)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		int first=(int)lua_tointeger(L,2);
		unsigned int no=(unsigned int)lua_tointeger(L,3);

		return new osg::DrawArrayLengths(mode, first, no);
	}

	// osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first)
	static osg::DrawArrayLengths* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first) function, expected prototype:\nosg::DrawArrayLengths::DrawArrayLengths(unsigned int mode, int first)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		int first=(int)lua_tointeger(L,2);

		return new osg::DrawArrayLengths(mode, first);
	}

	// Overload binder for osg::DrawArrayLengths::DrawArrayLengths
	static osg::DrawArrayLengths* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);

		luaL_error(L, "error in function DrawArrayLengths, cannot match any of the overloads for function DrawArrayLengths:\n  DrawArrayLengths(unsigned int)\n  DrawArrayLengths(const osg::DrawArrayLengths &, const osg::CopyOp &)\n  DrawArrayLengths(unsigned int, int, unsigned int, int *)\n  DrawArrayLengths(unsigned int, int, unsigned int)\n  DrawArrayLengths(unsigned int, int)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DrawArrayLengths::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrayLengths::cloneType() const function, expected prototype:\nosg::Object * osg::DrawArrayLengths::cloneType() const\nClass arguments details:\n");
		}


		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrayLengths::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawArrayLengths::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrayLengths::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::DrawArrayLengths::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawArrayLengths::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrayLengths::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawArrayLengths::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawArrayLengths::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawArrayLengths::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawArrayLengths::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawArrayLengths::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrayLengths::libraryName() const function, expected prototype:\nconst char * osg::DrawArrayLengths::libraryName() const\nClass arguments details:\n");
		}


		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrayLengths::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawArrayLengths::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrayLengths::className() const function, expected prototype:\nconst char * osg::DrawArrayLengths::className() const\nClass arguments details:\n");
		}


		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrayLengths::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DrawArrayLengths::setFirst(int first)
	static int _bind_setFirst(lua_State *L) {
		if (!_lg_typecheck_setFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::setFirst(int first) function, expected prototype:\nvoid osg::DrawArrayLengths::setFirst(int first)\nClass arguments details:\n");
		}

		int first=(int)lua_tointeger(L,2);

		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::setFirst(int)");
		}
		self->setFirst(first);

		return 0;
	}

	// int osg::DrawArrayLengths::getFirst() const
	static int _bind_getFirst(lua_State *L) {
		if (!_lg_typecheck_getFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::DrawArrayLengths::getFirst() const function, expected prototype:\nint osg::DrawArrayLengths::getFirst() const\nClass arguments details:\n");
		}


		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::DrawArrayLengths::getFirst() const");
		}
		int lret = self->getFirst();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrayLengths::draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawArrayLengths::draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawArrayLengths::draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::draw(osg::State &, bool) const");
		}
		self->draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawArrayLengths::getNumIndices() const
	static int _bind_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_getNumIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrayLengths::getNumIndices() const function, expected prototype:\nunsigned int osg::DrawArrayLengths::getNumIndices() const\nClass arguments details:\n");
		}


		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrayLengths::getNumIndices() const");
		}
		unsigned int lret = self->getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawArrayLengths::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrayLengths::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawArrayLengths::index(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrayLengths::index(unsigned int) const");
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrayLengths::offsetIndices(int offset)
	static int _bind_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_offsetIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawArrayLengths::offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawArrayLengths::offsetIndices(int offset)\nClass arguments details:\n");
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawArrayLengths* self=dynamic_cast< osg::DrawArrayLengths* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawArrayLengths::offsetIndices(int)");
		}
		self->offsetIndices(offset);

		return 0;
	}


	// Operator binds:

};

osg::DrawArrayLengths* LunaTraits< osg::DrawArrayLengths >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DrawArrayLengths::_bind_ctor(L);
}

void LunaTraits< osg::DrawArrayLengths >::_bind_dtor(osg::DrawArrayLengths* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawArrayLengths >::className[] = "DrawArrayLengths";
const char LunaTraits< osg::DrawArrayLengths >::fullName[] = "osg::DrawArrayLengths";
const char LunaTraits< osg::DrawArrayLengths >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawArrayLengths >::parents[] = {"osg.PrimitiveSet", 0};
const int LunaTraits< osg::DrawArrayLengths >::hash = 84437536;
const int LunaTraits< osg::DrawArrayLengths >::uniqueIDs[] = {50169651, 59037247,0};

luna_RegType LunaTraits< osg::DrawArrayLengths >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DrawArrayLengths::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DrawArrayLengths::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DrawArrayLengths::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DrawArrayLengths::_bind_libraryName},
	{"className", &luna_wrapper_osg_DrawArrayLengths::_bind_className},
	{"setFirst", &luna_wrapper_osg_DrawArrayLengths::_bind_setFirst},
	{"getFirst", &luna_wrapper_osg_DrawArrayLengths::_bind_getFirst},
	{"draw", &luna_wrapper_osg_DrawArrayLengths::_bind_draw},
	{"getNumIndices", &luna_wrapper_osg_DrawArrayLengths::_bind_getNumIndices},
	{"index", &luna_wrapper_osg_DrawArrayLengths::_bind_index},
	{"offsetIndices", &luna_wrapper_osg_DrawArrayLengths::_bind_offsetIndices},
	{"__eq", &luna_wrapper_osg_DrawArrayLengths::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawArrayLengths >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawArrayLengths::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawArrayLengths >::enumValues[] = {
	{0,0}
};


