#include <plug_common.h>

class luna_wrapper_osg_StencilTwoSided {
public:
	typedef Luna< osg::StencilTwoSided > luna_t;

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
		osg::StencilTwoSided* ptr= dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::StencilTwoSided >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunction_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunctionRef(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunctionRef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFunctionMask(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFunctionMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperation(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilFailOperation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilFailOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilPassAndDepthFailOperation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilPassAndDepthFailOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStencilPassAndDepthPassOperation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStencilPassAndDepthPassOperation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWriteMask(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// osg::StencilTwoSided::StencilTwoSided()
	static osg::StencilTwoSided* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::StencilTwoSided() function, expected prototype:\nosg::StencilTwoSided::StencilTwoSided()\nClass arguments details:\n");
		}


		return new osg::StencilTwoSided();
	}

	// osg::StencilTwoSided::StencilTwoSided(const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::StencilTwoSided* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::StencilTwoSided(const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::StencilTwoSided::StencilTwoSided(const osg::StencilTwoSided & stencil, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::StencilTwoSided* stencil_ptr=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if( !stencil_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stencil in osg::StencilTwoSided::StencilTwoSided function");
		}
		const osg::StencilTwoSided & stencil=*stencil_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::StencilTwoSided::StencilTwoSided function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::StencilTwoSided(stencil, copyop);
	}

	// Overload binder for osg::StencilTwoSided::StencilTwoSided
	static osg::StencilTwoSided* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function StencilTwoSided, cannot match any of the overloads for function StencilTwoSided:\n  StencilTwoSided()\n  StencilTwoSided(const osg::StencilTwoSided &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::StencilTwoSided::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StencilTwoSided::cloneType() const function, expected prototype:\nosg::Object * osg::StencilTwoSided::cloneType() const\nClass arguments details:\n");
		}


		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::StencilTwoSided::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::StencilTwoSided::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::StencilTwoSided::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::StencilTwoSided::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::StencilTwoSided::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::StencilTwoSided::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::StencilTwoSided::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::StencilTwoSided::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::StencilTwoSided::libraryName() const function, expected prototype:\nconst char * osg::StencilTwoSided::libraryName() const\nClass arguments details:\n");
		}


		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::StencilTwoSided::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::StencilTwoSided::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::StencilTwoSided::className() const function, expected prototype:\nconst char * osg::StencilTwoSided::className() const\nClass arguments details:\n");
		}


		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::StencilTwoSided::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::StencilTwoSided::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::StencilTwoSided::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::StencilTwoSided::getType() const\nClass arguments details:\n");
		}


		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::StencilTwoSided::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::StencilTwoSided::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::StencilTwoSided::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::StencilTwoSided::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::StencilTwoSided::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::StencilTwoSided::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::StencilTwoSided::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::StencilTwoSided::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::StencilTwoSided::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::StencilTwoSided::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func, int ref, unsigned int mask)
	static int _bind_setFunction_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func, int ref, unsigned int mask) function, expected prototype:\nvoid osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func, int ref, unsigned int mask)\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Function func=(osg::StencilTwoSided::Function)lua_tointeger(L,3);
		int ref=(int)lua_tointeger(L,4);
		unsigned int mask=(unsigned int)lua_tointeger(L,5);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face, osg::StencilTwoSided::Function, int, unsigned int)");
		}
		self->setFunction(face, func, ref, mask);

		return 0;
	}

	// void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func)
	static int _bind_setFunction_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func) function, expected prototype:\nvoid osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Function func)\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Function func=(osg::StencilTwoSided::Function)lua_tointeger(L,3);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setFunction(osg::StencilTwoSided::Face, osg::StencilTwoSided::Function)");
		}
		self->setFunction(face, func);

		return 0;
	}

	// Overload binder for osg::StencilTwoSided::setFunction
	static int _bind_setFunction(lua_State *L) {
		if (_lg_typecheck_setFunction_overload_1(L)) return _bind_setFunction_overload_1(L);
		if (_lg_typecheck_setFunction_overload_2(L)) return _bind_setFunction_overload_2(L);

		luaL_error(L, "error in function setFunction, cannot match any of the overloads for function setFunction:\n  setFunction(osg::StencilTwoSided::Face, osg::StencilTwoSided::Function, int, unsigned int)\n  setFunction(osg::StencilTwoSided::Face, osg::StencilTwoSided::Function)\n");
		return 0;
	}

	// osg::StencilTwoSided::Function osg::StencilTwoSided::getFunction(osg::StencilTwoSided::Face face) const
	static int _bind_getFunction(lua_State *L) {
		if (!_lg_typecheck_getFunction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::Function osg::StencilTwoSided::getFunction(osg::StencilTwoSided::Face face) const function, expected prototype:\nosg::StencilTwoSided::Function osg::StencilTwoSided::getFunction(osg::StencilTwoSided::Face face) const\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StencilTwoSided::Function osg::StencilTwoSided::getFunction(osg::StencilTwoSided::Face) const");
		}
		osg::StencilTwoSided::Function lret = self->getFunction(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setFunctionRef(osg::StencilTwoSided::Face face, int ref)
	static int _bind_setFunctionRef(lua_State *L) {
		if (!_lg_typecheck_setFunctionRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setFunctionRef(osg::StencilTwoSided::Face face, int ref) function, expected prototype:\nvoid osg::StencilTwoSided::setFunctionRef(osg::StencilTwoSided::Face face, int ref)\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		int ref=(int)lua_tointeger(L,3);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setFunctionRef(osg::StencilTwoSided::Face, int)");
		}
		self->setFunctionRef(face, ref);

		return 0;
	}

	// int osg::StencilTwoSided::getFunctionRef(osg::StencilTwoSided::Face face) const
	static int _bind_getFunctionRef(lua_State *L) {
		if (!_lg_typecheck_getFunctionRef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::StencilTwoSided::getFunctionRef(osg::StencilTwoSided::Face face) const function, expected prototype:\nint osg::StencilTwoSided::getFunctionRef(osg::StencilTwoSided::Face face) const\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::StencilTwoSided::getFunctionRef(osg::StencilTwoSided::Face) const");
		}
		int lret = self->getFunctionRef(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setFunctionMask(osg::StencilTwoSided::Face face, unsigned int mask)
	static int _bind_setFunctionMask(lua_State *L) {
		if (!_lg_typecheck_setFunctionMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setFunctionMask(osg::StencilTwoSided::Face face, unsigned int mask) function, expected prototype:\nvoid osg::StencilTwoSided::setFunctionMask(osg::StencilTwoSided::Face face, unsigned int mask)\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		unsigned int mask=(unsigned int)lua_tointeger(L,3);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setFunctionMask(osg::StencilTwoSided::Face, unsigned int)");
		}
		self->setFunctionMask(face, mask);

		return 0;
	}

	// unsigned int osg::StencilTwoSided::getFunctionMask(osg::StencilTwoSided::Face face) const
	static int _bind_getFunctionMask(lua_State *L) {
		if (!_lg_typecheck_getFunctionMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::StencilTwoSided::getFunctionMask(osg::StencilTwoSided::Face face) const function, expected prototype:\nunsigned int osg::StencilTwoSided::getFunctionMask(osg::StencilTwoSided::Face face) const\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::StencilTwoSided::getFunctionMask(osg::StencilTwoSided::Face) const");
		}
		unsigned int lret = self->getFunctionMask(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail, osg::StencilTwoSided::Operation zfail, osg::StencilTwoSided::Operation zpass)
	static int _bind_setOperation(lua_State *L) {
		if (!_lg_typecheck_setOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail, osg::StencilTwoSided::Operation zfail, osg::StencilTwoSided::Operation zpass) function, expected prototype:\nvoid osg::StencilTwoSided::setOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail, osg::StencilTwoSided::Operation zfail, osg::StencilTwoSided::Operation zpass)\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Operation sfail=(osg::StencilTwoSided::Operation)lua_tointeger(L,3);
		osg::StencilTwoSided::Operation zfail=(osg::StencilTwoSided::Operation)lua_tointeger(L,4);
		osg::StencilTwoSided::Operation zpass=(osg::StencilTwoSided::Operation)lua_tointeger(L,5);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setOperation(osg::StencilTwoSided::Face, osg::StencilTwoSided::Operation, osg::StencilTwoSided::Operation, osg::StencilTwoSided::Operation)");
		}
		self->setOperation(face, sfail, zfail, zpass);

		return 0;
	}

	// void osg::StencilTwoSided::setStencilFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail)
	static int _bind_setStencilFailOperation(lua_State *L) {
		if (!_lg_typecheck_setStencilFailOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setStencilFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail) function, expected prototype:\nvoid osg::StencilTwoSided::setStencilFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation sfail)\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Operation sfail=(osg::StencilTwoSided::Operation)lua_tointeger(L,3);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setStencilFailOperation(osg::StencilTwoSided::Face, osg::StencilTwoSided::Operation)");
		}
		self->setStencilFailOperation(face, sfail);

		return 0;
	}

	// osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilFailOperation(osg::StencilTwoSided::Face face) const
	static int _bind_getStencilFailOperation(lua_State *L) {
		if (!_lg_typecheck_getStencilFailOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilFailOperation(osg::StencilTwoSided::Face face) const function, expected prototype:\nosg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilFailOperation(osg::StencilTwoSided::Face face) const\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilFailOperation(osg::StencilTwoSided::Face) const");
		}
		osg::StencilTwoSided::Operation lret = self->getStencilFailOperation(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zfail)
	static int _bind_setStencilPassAndDepthFailOperation(lua_State *L) {
		if (!_lg_typecheck_setStencilPassAndDepthFailOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zfail) function, expected prototype:\nvoid osg::StencilTwoSided::setStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zfail)\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Operation zfail=(osg::StencilTwoSided::Operation)lua_tointeger(L,3);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face, osg::StencilTwoSided::Operation)");
		}
		self->setStencilPassAndDepthFailOperation(face, zfail);

		return 0;
	}

	// osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face) const
	static int _bind_getStencilPassAndDepthFailOperation(lua_State *L) {
		if (!_lg_typecheck_getStencilPassAndDepthFailOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face) const function, expected prototype:\nosg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face face) const\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthFailOperation(osg::StencilTwoSided::Face) const");
		}
		osg::StencilTwoSided::Operation lret = self->getStencilPassAndDepthFailOperation(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zpass)
	static int _bind_setStencilPassAndDepthPassOperation(lua_State *L) {
		if (!_lg_typecheck_setStencilPassAndDepthPassOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zpass) function, expected prototype:\nvoid osg::StencilTwoSided::setStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face, osg::StencilTwoSided::Operation zpass)\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		osg::StencilTwoSided::Operation zpass=(osg::StencilTwoSided::Operation)lua_tointeger(L,3);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face, osg::StencilTwoSided::Operation)");
		}
		self->setStencilPassAndDepthPassOperation(face, zpass);

		return 0;
	}

	// osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face) const
	static int _bind_getStencilPassAndDepthPassOperation(lua_State *L) {
		if (!_lg_typecheck_getStencilPassAndDepthPassOperation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face) const function, expected prototype:\nosg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face face) const\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StencilTwoSided::Operation osg::StencilTwoSided::getStencilPassAndDepthPassOperation(osg::StencilTwoSided::Face) const");
		}
		osg::StencilTwoSided::Operation lret = self->getStencilPassAndDepthPassOperation(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::setWriteMask(osg::StencilTwoSided::Face face, unsigned int mask)
	static int _bind_setWriteMask(lua_State *L) {
		if (!_lg_typecheck_setWriteMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::setWriteMask(osg::StencilTwoSided::Face face, unsigned int mask) function, expected prototype:\nvoid osg::StencilTwoSided::setWriteMask(osg::StencilTwoSided::Face face, unsigned int mask)\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);
		unsigned int mask=(unsigned int)lua_tointeger(L,3);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::setWriteMask(osg::StencilTwoSided::Face, unsigned int)");
		}
		self->setWriteMask(face, mask);

		return 0;
	}

	// unsigned int osg::StencilTwoSided::getWriteMask(osg::StencilTwoSided::Face face) const
	static int _bind_getWriteMask(lua_State *L) {
		if (!_lg_typecheck_getWriteMask(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::StencilTwoSided::getWriteMask(osg::StencilTwoSided::Face face) const function, expected prototype:\nunsigned int osg::StencilTwoSided::getWriteMask(osg::StencilTwoSided::Face face) const\nClass arguments details:\n");
		}

		osg::StencilTwoSided::Face face=(osg::StencilTwoSided::Face)lua_tointeger(L,2);

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::StencilTwoSided::getWriteMask(osg::StencilTwoSided::Face) const");
		}
		unsigned int lret = self->getWriteMask(face);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StencilTwoSided::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StencilTwoSided::apply(osg::State & ) const function, expected prototype:\nvoid osg::StencilTwoSided::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::StencilTwoSided::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::StencilTwoSided* self=dynamic_cast< osg::StencilTwoSided* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StencilTwoSided::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::StencilTwoSided::Extensions * osg::StencilTwoSided::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::StencilTwoSided::Extensions * osg::StencilTwoSided::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::StencilTwoSided::Extensions * osg::StencilTwoSided::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::StencilTwoSided::Extensions * lret = osg::StencilTwoSided::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StencilTwoSided::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::StencilTwoSided::setExtensions(unsigned int contextID, osg::StencilTwoSided::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::StencilTwoSided::setExtensions(unsigned int contextID, osg::StencilTwoSided::Extensions * extensions) function, expected prototype:\nstatic void osg::StencilTwoSided::setExtensions(unsigned int contextID, osg::StencilTwoSided::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::StencilTwoSided::Extensions* extensions=dynamic_cast< osg::StencilTwoSided::Extensions* >(Luna< osg::Referenced >::check(L,2));

		osg::StencilTwoSided::setExtensions(contextID, extensions);

		return 0;
	}


	// Operator binds:

};

osg::StencilTwoSided* LunaTraits< osg::StencilTwoSided >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_StencilTwoSided::_bind_ctor(L);
}

void LunaTraits< osg::StencilTwoSided >::_bind_dtor(osg::StencilTwoSided* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::StencilTwoSided >::className[] = "StencilTwoSided";
const char LunaTraits< osg::StencilTwoSided >::fullName[] = "osg::StencilTwoSided";
const char LunaTraits< osg::StencilTwoSided >::moduleName[] = "osg";
const char* LunaTraits< osg::StencilTwoSided >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::StencilTwoSided >::hash = 87137523;
const int LunaTraits< osg::StencilTwoSided >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::StencilTwoSided >::methods[] = {
	{"cloneType", &luna_wrapper_osg_StencilTwoSided::_bind_cloneType},
	{"clone", &luna_wrapper_osg_StencilTwoSided::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_StencilTwoSided::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_StencilTwoSided::_bind_libraryName},
	{"className", &luna_wrapper_osg_StencilTwoSided::_bind_className},
	{"getType", &luna_wrapper_osg_StencilTwoSided::_bind_getType},
	{"compare", &luna_wrapper_osg_StencilTwoSided::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_StencilTwoSided::_bind_getModeUsage},
	{"setFunction", &luna_wrapper_osg_StencilTwoSided::_bind_setFunction},
	{"getFunction", &luna_wrapper_osg_StencilTwoSided::_bind_getFunction},
	{"setFunctionRef", &luna_wrapper_osg_StencilTwoSided::_bind_setFunctionRef},
	{"getFunctionRef", &luna_wrapper_osg_StencilTwoSided::_bind_getFunctionRef},
	{"setFunctionMask", &luna_wrapper_osg_StencilTwoSided::_bind_setFunctionMask},
	{"getFunctionMask", &luna_wrapper_osg_StencilTwoSided::_bind_getFunctionMask},
	{"setOperation", &luna_wrapper_osg_StencilTwoSided::_bind_setOperation},
	{"setStencilFailOperation", &luna_wrapper_osg_StencilTwoSided::_bind_setStencilFailOperation},
	{"getStencilFailOperation", &luna_wrapper_osg_StencilTwoSided::_bind_getStencilFailOperation},
	{"setStencilPassAndDepthFailOperation", &luna_wrapper_osg_StencilTwoSided::_bind_setStencilPassAndDepthFailOperation},
	{"getStencilPassAndDepthFailOperation", &luna_wrapper_osg_StencilTwoSided::_bind_getStencilPassAndDepthFailOperation},
	{"setStencilPassAndDepthPassOperation", &luna_wrapper_osg_StencilTwoSided::_bind_setStencilPassAndDepthPassOperation},
	{"getStencilPassAndDepthPassOperation", &luna_wrapper_osg_StencilTwoSided::_bind_getStencilPassAndDepthPassOperation},
	{"setWriteMask", &luna_wrapper_osg_StencilTwoSided::_bind_setWriteMask},
	{"getWriteMask", &luna_wrapper_osg_StencilTwoSided::_bind_getWriteMask},
	{"apply", &luna_wrapper_osg_StencilTwoSided::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_StencilTwoSided::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_StencilTwoSided::_bind_setExtensions},
	{"__eq", &luna_wrapper_osg_StencilTwoSided::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StencilTwoSided >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_StencilTwoSided::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StencilTwoSided >::enumValues[] = {
	{"FRONT", osg::StencilTwoSided::FRONT},
	{"BACK", osg::StencilTwoSided::BACK},
	{"NEVER", osg::StencilTwoSided::NEVER},
	{"LESS", osg::StencilTwoSided::LESS},
	{"EQUAL", osg::StencilTwoSided::EQUAL},
	{"LEQUAL", osg::StencilTwoSided::LEQUAL},
	{"GREATER", osg::StencilTwoSided::GREATER},
	{"NOTEQUAL", osg::StencilTwoSided::NOTEQUAL},
	{"GEQUAL", osg::StencilTwoSided::GEQUAL},
	{"ALWAYS", osg::StencilTwoSided::ALWAYS},
	{"KEEP", osg::StencilTwoSided::KEEP},
	{"ZERO", osg::StencilTwoSided::ZERO},
	{"REPLACE", osg::StencilTwoSided::REPLACE},
	{"INCR", osg::StencilTwoSided::INCR},
	{"DECR", osg::StencilTwoSided::DECR},
	{"INVERT", osg::StencilTwoSided::INVERT},
	{"INCR_WRAP", osg::StencilTwoSided::INCR_WRAP},
	{"DECR_WRAP", osg::StencilTwoSided::DECR_WRAP},
	{0,0}
};


