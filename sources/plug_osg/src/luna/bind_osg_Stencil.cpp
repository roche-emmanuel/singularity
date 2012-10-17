#include <plug_common.h>

class luna_wrapper_osg_Stencil {
public:
	typedef Luna< osg::Stencil > luna_t;

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
		osg::Stencil* ptr= dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Stencil >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunction_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunction_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFunctionRef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunctionRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFunctionMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunctionMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOperation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilFailOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilFailOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStencilPassAndDepthFailOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilPassAndDepthFailOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStencilPassAndDepthPassOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilPassAndDepthPassOperation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWriteMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Stencil::Stencil()
	static osg::Stencil* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stencil::Stencil() function, expected prototype:\nosg::Stencil::Stencil()\nClass arguments details:\n");
		}


		return new osg::Stencil();
	}

	// osg::Stencil::Stencil(const osg::Stencil & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Stencil* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stencil::Stencil(const osg::Stencil & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Stencil::Stencil(const osg::Stencil & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Stencil* stencil_ptr=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if( !stencil_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stencil in osg::Stencil::Stencil function");
		}
		const osg::Stencil & stencil=*stencil_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Stencil::Stencil function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Stencil(stencil, copyop);
	}

	// Overload binder for osg::Stencil::Stencil
	static osg::Stencil* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Stencil, cannot match any of the overloads for function Stencil:\n  Stencil()\n  Stencil(const osg::Stencil &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Stencil::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Stencil::cloneType() const function, expected prototype:\nosg::Object * osg::Stencil::cloneType() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Stencil::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Stencil::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Stencil::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Stencil::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Stencil::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Stencil::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Stencil::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Stencil::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Stencil::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Stencil::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Stencil::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Stencil::libraryName() const function, expected prototype:\nconst char * osg::Stencil::libraryName() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Stencil::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Stencil::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Stencil::className() const function, expected prototype:\nconst char * osg::Stencil::className() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Stencil::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Stencil::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Stencil::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Stencil::getType() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Stencil::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Stencil::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Stencil::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Stencil::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Stencil::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Stencil::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Stencil::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Stencil::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::Stencil::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Stencil::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Stencil::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Stencil::setFunction(osg::Stencil::Function func, int ref, unsigned int mask)
	static int _bind_setFunction_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::setFunction(osg::Stencil::Function func, int ref, unsigned int mask) function, expected prototype:\nvoid osg::Stencil::setFunction(osg::Stencil::Function func, int ref, unsigned int mask)\nClass arguments details:\n");
		}

		osg::Stencil::Function func=(osg::Stencil::Function)lua_tointeger(L,2);
		int ref=(int)lua_tointeger(L,3);
		unsigned int mask=(unsigned int)lua_tointeger(L,4);

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::setFunction(osg::Stencil::Function, int, unsigned int)");
		}
		self->setFunction(func, ref, mask);

		return 0;
	}

	// void osg::Stencil::setFunction(osg::Stencil::Function func)
	static int _bind_setFunction_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::setFunction(osg::Stencil::Function func) function, expected prototype:\nvoid osg::Stencil::setFunction(osg::Stencil::Function func)\nClass arguments details:\n");
		}

		osg::Stencil::Function func=(osg::Stencil::Function)lua_tointeger(L,2);

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::setFunction(osg::Stencil::Function)");
		}
		self->setFunction(func);

		return 0;
	}

	// Overload binder for osg::Stencil::setFunction
	static int _bind_setFunction(lua_State *L) {
		if (_lg_typecheck_setFunction_overload_1(L)) return _bind_setFunction_overload_1(L);
		if (_lg_typecheck_setFunction_overload_2(L)) return _bind_setFunction_overload_2(L);

		luaL_error(L, "error in function setFunction, cannot match any of the overloads for function setFunction:\n  setFunction(osg::Stencil::Function, int, unsigned int)\n  setFunction(osg::Stencil::Function)\n");
		return 0;
	}

	// osg::Stencil::Function osg::Stencil::getFunction() const
	static int _bind_getFunction(lua_State *L) {
		if (!_lg_typecheck_getFunction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stencil::Function osg::Stencil::getFunction() const function, expected prototype:\nosg::Stencil::Function osg::Stencil::getFunction() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Stencil::Function osg::Stencil::getFunction() const");
		}
		osg::Stencil::Function lret = self->getFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Stencil::setFunctionRef(int ref)
	static int _bind_setFunctionRef(lua_State *L) {
		if (!_lg_typecheck_setFunctionRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::setFunctionRef(int ref) function, expected prototype:\nvoid osg::Stencil::setFunctionRef(int ref)\nClass arguments details:\n");
		}

		int ref=(int)lua_tointeger(L,2);

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::setFunctionRef(int)");
		}
		self->setFunctionRef(ref);

		return 0;
	}

	// int osg::Stencil::getFunctionRef() const
	static int _bind_getFunctionRef(lua_State *L) {
		if (!_lg_typecheck_getFunctionRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Stencil::getFunctionRef() const function, expected prototype:\nint osg::Stencil::getFunctionRef() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Stencil::getFunctionRef() const");
		}
		int lret = self->getFunctionRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Stencil::setFunctionMask(unsigned int mask)
	static int _bind_setFunctionMask(lua_State *L) {
		if (!_lg_typecheck_setFunctionMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::setFunctionMask(unsigned int mask) function, expected prototype:\nvoid osg::Stencil::setFunctionMask(unsigned int mask)\nClass arguments details:\n");
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::setFunctionMask(unsigned int)");
		}
		self->setFunctionMask(mask);

		return 0;
	}

	// unsigned int osg::Stencil::getFunctionMask() const
	static int _bind_getFunctionMask(lua_State *L) {
		if (!_lg_typecheck_getFunctionMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Stencil::getFunctionMask() const function, expected prototype:\nunsigned int osg::Stencil::getFunctionMask() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Stencil::getFunctionMask() const");
		}
		unsigned int lret = self->getFunctionMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Stencil::setOperation(osg::Stencil::Operation sfail, osg::Stencil::Operation zfail, osg::Stencil::Operation zpass)
	static int _bind_setOperation(lua_State *L) {
		if (!_lg_typecheck_setOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::setOperation(osg::Stencil::Operation sfail, osg::Stencil::Operation zfail, osg::Stencil::Operation zpass) function, expected prototype:\nvoid osg::Stencil::setOperation(osg::Stencil::Operation sfail, osg::Stencil::Operation zfail, osg::Stencil::Operation zpass)\nClass arguments details:\n");
		}

		osg::Stencil::Operation sfail=(osg::Stencil::Operation)lua_tointeger(L,2);
		osg::Stencil::Operation zfail=(osg::Stencil::Operation)lua_tointeger(L,3);
		osg::Stencil::Operation zpass=(osg::Stencil::Operation)lua_tointeger(L,4);

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::setOperation(osg::Stencil::Operation, osg::Stencil::Operation, osg::Stencil::Operation)");
		}
		self->setOperation(sfail, zfail, zpass);

		return 0;
	}

	// void osg::Stencil::setStencilFailOperation(osg::Stencil::Operation sfail)
	static int _bind_setStencilFailOperation(lua_State *L) {
		if (!_lg_typecheck_setStencilFailOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::setStencilFailOperation(osg::Stencil::Operation sfail) function, expected prototype:\nvoid osg::Stencil::setStencilFailOperation(osg::Stencil::Operation sfail)\nClass arguments details:\n");
		}

		osg::Stencil::Operation sfail=(osg::Stencil::Operation)lua_tointeger(L,2);

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::setStencilFailOperation(osg::Stencil::Operation)");
		}
		self->setStencilFailOperation(sfail);

		return 0;
	}

	// osg::Stencil::Operation osg::Stencil::getStencilFailOperation() const
	static int _bind_getStencilFailOperation(lua_State *L) {
		if (!_lg_typecheck_getStencilFailOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stencil::Operation osg::Stencil::getStencilFailOperation() const function, expected prototype:\nosg::Stencil::Operation osg::Stencil::getStencilFailOperation() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Stencil::Operation osg::Stencil::getStencilFailOperation() const");
		}
		osg::Stencil::Operation lret = self->getStencilFailOperation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Stencil::setStencilPassAndDepthFailOperation(osg::Stencil::Operation zfail)
	static int _bind_setStencilPassAndDepthFailOperation(lua_State *L) {
		if (!_lg_typecheck_setStencilPassAndDepthFailOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::setStencilPassAndDepthFailOperation(osg::Stencil::Operation zfail) function, expected prototype:\nvoid osg::Stencil::setStencilPassAndDepthFailOperation(osg::Stencil::Operation zfail)\nClass arguments details:\n");
		}

		osg::Stencil::Operation zfail=(osg::Stencil::Operation)lua_tointeger(L,2);

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::setStencilPassAndDepthFailOperation(osg::Stencil::Operation)");
		}
		self->setStencilPassAndDepthFailOperation(zfail);

		return 0;
	}

	// osg::Stencil::Operation osg::Stencil::getStencilPassAndDepthFailOperation() const
	static int _bind_getStencilPassAndDepthFailOperation(lua_State *L) {
		if (!_lg_typecheck_getStencilPassAndDepthFailOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stencil::Operation osg::Stencil::getStencilPassAndDepthFailOperation() const function, expected prototype:\nosg::Stencil::Operation osg::Stencil::getStencilPassAndDepthFailOperation() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Stencil::Operation osg::Stencil::getStencilPassAndDepthFailOperation() const");
		}
		osg::Stencil::Operation lret = self->getStencilPassAndDepthFailOperation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Stencil::setStencilPassAndDepthPassOperation(osg::Stencil::Operation zpass)
	static int _bind_setStencilPassAndDepthPassOperation(lua_State *L) {
		if (!_lg_typecheck_setStencilPassAndDepthPassOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::setStencilPassAndDepthPassOperation(osg::Stencil::Operation zpass) function, expected prototype:\nvoid osg::Stencil::setStencilPassAndDepthPassOperation(osg::Stencil::Operation zpass)\nClass arguments details:\n");
		}

		osg::Stencil::Operation zpass=(osg::Stencil::Operation)lua_tointeger(L,2);

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::setStencilPassAndDepthPassOperation(osg::Stencil::Operation)");
		}
		self->setStencilPassAndDepthPassOperation(zpass);

		return 0;
	}

	// osg::Stencil::Operation osg::Stencil::getStencilPassAndDepthPassOperation() const
	static int _bind_getStencilPassAndDepthPassOperation(lua_State *L) {
		if (!_lg_typecheck_getStencilPassAndDepthPassOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Stencil::Operation osg::Stencil::getStencilPassAndDepthPassOperation() const function, expected prototype:\nosg::Stencil::Operation osg::Stencil::getStencilPassAndDepthPassOperation() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Stencil::Operation osg::Stencil::getStencilPassAndDepthPassOperation() const");
		}
		osg::Stencil::Operation lret = self->getStencilPassAndDepthPassOperation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Stencil::setWriteMask(unsigned int mask)
	static int _bind_setWriteMask(lua_State *L) {
		if (!_lg_typecheck_setWriteMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::setWriteMask(unsigned int mask) function, expected prototype:\nvoid osg::Stencil::setWriteMask(unsigned int mask)\nClass arguments details:\n");
		}

		unsigned int mask=(unsigned int)lua_tointeger(L,2);

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::setWriteMask(unsigned int)");
		}
		self->setWriteMask(mask);

		return 0;
	}

	// unsigned int osg::Stencil::getWriteMask() const
	static int _bind_getWriteMask(lua_State *L) {
		if (!_lg_typecheck_getWriteMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Stencil::getWriteMask() const function, expected prototype:\nunsigned int osg::Stencil::getWriteMask() const\nClass arguments details:\n");
		}


		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Stencil::getWriteMask() const");
		}
		unsigned int lret = self->getWriteMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Stencil::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Stencil::apply(osg::State & ) const function, expected prototype:\nvoid osg::Stencil::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Stencil::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Stencil* self=dynamic_cast< osg::Stencil* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Stencil::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::Stencil::Extensions * osg::Stencil::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Stencil::Extensions * osg::Stencil::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::Stencil::Extensions * osg::Stencil::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::Stencil::Extensions * lret = osg::Stencil::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Stencil::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::Stencil::setExtensions(unsigned int contextID, osg::Stencil::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Stencil::setExtensions(unsigned int contextID, osg::Stencil::Extensions * extensions) function, expected prototype:\nstatic void osg::Stencil::setExtensions(unsigned int contextID, osg::Stencil::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::Stencil::Extensions* extensions=dynamic_cast< osg::Stencil::Extensions* >(Luna< osg::Referenced >::check(L,2));

		osg::Stencil::setExtensions(contextID, extensions);

		return 0;
	}


	// Operator binds:

};

osg::Stencil* LunaTraits< osg::Stencil >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Stencil::_bind_ctor(L);
}

void LunaTraits< osg::Stencil >::_bind_dtor(osg::Stencil* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Stencil >::className[] = "Stencil";
const char LunaTraits< osg::Stencil >::fullName[] = "osg::Stencil";
const char LunaTraits< osg::Stencil >::moduleName[] = "osg";
const char* LunaTraits< osg::Stencil >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Stencil >::hash = 73900926;
const int LunaTraits< osg::Stencil >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Stencil >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Stencil::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Stencil::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Stencil::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Stencil::_bind_libraryName},
	{"className", &luna_wrapper_osg_Stencil::_bind_className},
	{"getType", &luna_wrapper_osg_Stencil::_bind_getType},
	{"compare", &luna_wrapper_osg_Stencil::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_Stencil::_bind_getModeUsage},
	{"setFunction", &luna_wrapper_osg_Stencil::_bind_setFunction},
	{"getFunction", &luna_wrapper_osg_Stencil::_bind_getFunction},
	{"setFunctionRef", &luna_wrapper_osg_Stencil::_bind_setFunctionRef},
	{"getFunctionRef", &luna_wrapper_osg_Stencil::_bind_getFunctionRef},
	{"setFunctionMask", &luna_wrapper_osg_Stencil::_bind_setFunctionMask},
	{"getFunctionMask", &luna_wrapper_osg_Stencil::_bind_getFunctionMask},
	{"setOperation", &luna_wrapper_osg_Stencil::_bind_setOperation},
	{"setStencilFailOperation", &luna_wrapper_osg_Stencil::_bind_setStencilFailOperation},
	{"getStencilFailOperation", &luna_wrapper_osg_Stencil::_bind_getStencilFailOperation},
	{"setStencilPassAndDepthFailOperation", &luna_wrapper_osg_Stencil::_bind_setStencilPassAndDepthFailOperation},
	{"getStencilPassAndDepthFailOperation", &luna_wrapper_osg_Stencil::_bind_getStencilPassAndDepthFailOperation},
	{"setStencilPassAndDepthPassOperation", &luna_wrapper_osg_Stencil::_bind_setStencilPassAndDepthPassOperation},
	{"getStencilPassAndDepthPassOperation", &luna_wrapper_osg_Stencil::_bind_getStencilPassAndDepthPassOperation},
	{"setWriteMask", &luna_wrapper_osg_Stencil::_bind_setWriteMask},
	{"getWriteMask", &luna_wrapper_osg_Stencil::_bind_getWriteMask},
	{"apply", &luna_wrapper_osg_Stencil::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_Stencil::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_Stencil::_bind_setExtensions},
	{"__eq", &luna_wrapper_osg_Stencil::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Stencil >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Stencil::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Stencil >::enumValues[] = {
	{"NEVER", osg::Stencil::NEVER},
	{"LESS", osg::Stencil::LESS},
	{"EQUAL", osg::Stencil::EQUAL},
	{"LEQUAL", osg::Stencil::LEQUAL},
	{"GREATER", osg::Stencil::GREATER},
	{"NOTEQUAL", osg::Stencil::NOTEQUAL},
	{"GEQUAL", osg::Stencil::GEQUAL},
	{"ALWAYS", osg::Stencil::ALWAYS},
	{"KEEP", osg::Stencil::KEEP},
	{"ZERO", osg::Stencil::ZERO},
	{"REPLACE", osg::Stencil::REPLACE},
	{"INCR", osg::Stencil::INCR},
	{"DECR", osg::Stencil::DECR},
	{"INVERT", osg::Stencil::INVERT},
	{"INCR_WRAP", osg::Stencil::INCR_WRAP},
	{"DECR_WRAP", osg::Stencil::DECR_WRAP},
	{0,0}
};


