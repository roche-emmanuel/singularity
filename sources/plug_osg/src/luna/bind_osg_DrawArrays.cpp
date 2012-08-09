#include <plug_common.h>

class luna_wrapper_osg_DrawArrays {
public:
	typedef Luna< osg::DrawArrays > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::DrawArrays* ptr= dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::DrawArrays >::push(L,ptr,false);
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
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
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
	// osg::DrawArrays::DrawArrays(unsigned int mode = 0)
	static osg::DrawArrays* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawArrays::DrawArrays(unsigned int mode = 0) function, expected prototype:\nosg::DrawArrays::DrawArrays(unsigned int mode = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : 0;

		return new osg::DrawArrays(mode);
	}

	// osg::DrawArrays::DrawArrays(unsigned int mode, int first, int count, int numInstances = 0)
	static osg::DrawArrays* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawArrays::DrawArrays(unsigned int mode, int first, int count, int numInstances = 0) function, expected prototype:\nosg::DrawArrays::DrawArrays(unsigned int mode, int first, int count, int numInstances = 0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int mode=(unsigned int)lua_tointeger(L,1);
		int first=(int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		int numInstances=luatop>3 ? (int)lua_tointeger(L,4) : 0;

		return new osg::DrawArrays(mode, first, count, numInstances);
	}

	// osg::DrawArrays::DrawArrays(const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::DrawArrays* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawArrays::DrawArrays(const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::DrawArrays::DrawArrays(const osg::DrawArrays & da, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::DrawArrays* da_ptr=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if( !da_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg da in osg::DrawArrays::DrawArrays function");
		}
		const osg::DrawArrays & da=*da_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::DrawArrays::DrawArrays function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::DrawArrays(da, copyop);
	}

	// Overload binder for osg::DrawArrays::DrawArrays
	static osg::DrawArrays* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function DrawArrays, cannot match any of the overloads for function DrawArrays:\n  DrawArrays(unsigned int)\n  DrawArrays(unsigned int, int, int, int)\n  DrawArrays(const osg::DrawArrays &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::DrawArrays::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrays::cloneType() const function, expected prototype:\nosg::Object * osg::DrawArrays::cloneType() const\nClass arguments details:\n");
		}


		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrays::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::DrawArrays::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::DrawArrays::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::DrawArrays::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::DrawArrays::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::DrawArrays::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::DrawArrays::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::DrawArrays::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::DrawArrays::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::DrawArrays::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::DrawArrays::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrays::libraryName() const function, expected prototype:\nconst char * osg::DrawArrays::libraryName() const\nClass arguments details:\n");
		}


		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrays::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::DrawArrays::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::DrawArrays::className() const function, expected prototype:\nconst char * osg::DrawArrays::className() const\nClass arguments details:\n");
		}


		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::DrawArrays::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::DrawArrays::set(unsigned int mode, int first, int count)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::set(unsigned int mode, int first, int count) function, expected prototype:\nvoid osg::DrawArrays::set(unsigned int mode, int first, int count)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);

		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::set(unsigned int, int, int)");
		}
		self->set(mode, first, count);

		return 0;
	}

	// void osg::DrawArrays::setFirst(int first)
	static int _bind_setFirst(lua_State *L) {
		if (!_lg_typecheck_setFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::setFirst(int first) function, expected prototype:\nvoid osg::DrawArrays::setFirst(int first)\nClass arguments details:\n");
		}

		int first=(int)lua_tointeger(L,2);

		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::setFirst(int)");
		}
		self->setFirst(first);

		return 0;
	}

	// int osg::DrawArrays::getFirst() const
	static int _bind_getFirst(lua_State *L) {
		if (!_lg_typecheck_getFirst(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::DrawArrays::getFirst() const function, expected prototype:\nint osg::DrawArrays::getFirst() const\nClass arguments details:\n");
		}


		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::DrawArrays::getFirst() const");
		}
		int lret = self->getFirst();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrays::setCount(int count)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::setCount(int count) function, expected prototype:\nvoid osg::DrawArrays::setCount(int count)\nClass arguments details:\n");
		}

		int count=(int)lua_tointeger(L,2);

		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::setCount(int)");
		}
		self->setCount(count);

		return 0;
	}

	// int osg::DrawArrays::getCount() const
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::DrawArrays::getCount() const function, expected prototype:\nint osg::DrawArrays::getCount() const\nClass arguments details:\n");
		}


		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::DrawArrays::getCount() const");
		}
		int lret = self->getCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrays::draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::DrawArrays::draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::DrawArrays::draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::draw(osg::State &, bool) const");
		}
		self->draw(state, useVertexBufferObjects);

		return 0;
	}

	// unsigned int osg::DrawArrays::getNumIndices() const
	static int _bind_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_getNumIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrays::getNumIndices() const function, expected prototype:\nunsigned int osg::DrawArrays::getNumIndices() const\nClass arguments details:\n");
		}


		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrays::getNumIndices() const");
		}
		unsigned int lret = self->getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::DrawArrays::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::DrawArrays::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::DrawArrays::index(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::DrawArrays::index(unsigned int) const");
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::DrawArrays::offsetIndices(int offset)
	static int _bind_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_offsetIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::DrawArrays::offsetIndices(int offset) function, expected prototype:\nvoid osg::DrawArrays::offsetIndices(int offset)\nClass arguments details:\n");
		}

		int offset=(int)lua_tointeger(L,2);

		osg::DrawArrays* self=dynamic_cast< osg::DrawArrays* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::DrawArrays::offsetIndices(int)");
		}
		self->offsetIndices(offset);

		return 0;
	}


	// Operator binds:

};

osg::DrawArrays* LunaTraits< osg::DrawArrays >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_DrawArrays::_bind_ctor(L);
}

void LunaTraits< osg::DrawArrays >::_bind_dtor(osg::DrawArrays* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::DrawArrays >::className[] = "DrawArrays";
const char LunaTraits< osg::DrawArrays >::fullName[] = "osg::DrawArrays";
const char LunaTraits< osg::DrawArrays >::moduleName[] = "osg";
const char* LunaTraits< osg::DrawArrays >::parents[] = {"osg.PrimitiveSet", 0};
const int LunaTraits< osg::DrawArrays >::hash = 84124321;
const int LunaTraits< osg::DrawArrays >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::DrawArrays >::methods[] = {
	{"cloneType", &luna_wrapper_osg_DrawArrays::_bind_cloneType},
	{"clone", &luna_wrapper_osg_DrawArrays::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_DrawArrays::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_DrawArrays::_bind_libraryName},
	{"className", &luna_wrapper_osg_DrawArrays::_bind_className},
	{"set", &luna_wrapper_osg_DrawArrays::_bind_set},
	{"setFirst", &luna_wrapper_osg_DrawArrays::_bind_setFirst},
	{"getFirst", &luna_wrapper_osg_DrawArrays::_bind_getFirst},
	{"setCount", &luna_wrapper_osg_DrawArrays::_bind_setCount},
	{"getCount", &luna_wrapper_osg_DrawArrays::_bind_getCount},
	{"draw", &luna_wrapper_osg_DrawArrays::_bind_draw},
	{"getNumIndices", &luna_wrapper_osg_DrawArrays::_bind_getNumIndices},
	{"index", &luna_wrapper_osg_DrawArrays::_bind_index},
	{"offsetIndices", &luna_wrapper_osg_DrawArrays::_bind_offsetIndices},
	{0,0}
};

luna_ConverterType LunaTraits< osg::DrawArrays >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_DrawArrays::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::DrawArrays >::enumValues[] = {
	{0,0}
};


