#include <plug_common.h>

class luna_wrapper_osg_BlendEquation {
public:
	typedef Luna< osg::BlendEquation > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::BlendEquation* ptr= dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::BlendEquation >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
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

	inline static bool _lg_typecheck_setEquation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEquation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEquationRGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEquationRGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEquationAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEquationAlpha(lua_State *L) {
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
	// osg::BlendEquation::BlendEquation()
	static osg::BlendEquation* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation() function, expected prototype:\nosg::BlendEquation::BlendEquation()\nClass arguments details:\n");
		}


		return new osg::BlendEquation();
	}

	// osg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equation)
	static osg::BlendEquation* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equation) function, expected prototype:\nosg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equation)\nClass arguments details:\n");
		}

		osg::BlendEquation::Equation equation=(osg::BlendEquation::Equation)lua_tointeger(L,1);

		return new osg::BlendEquation(equation);
	}

	// osg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equationRGB, osg::BlendEquation::Equation equationAlpha)
	static osg::BlendEquation* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equationRGB, osg::BlendEquation::Equation equationAlpha) function, expected prototype:\nosg::BlendEquation::BlendEquation(osg::BlendEquation::Equation equationRGB, osg::BlendEquation::Equation equationAlpha)\nClass arguments details:\n");
		}

		osg::BlendEquation::Equation equationRGB=(osg::BlendEquation::Equation)lua_tointeger(L,1);
		osg::BlendEquation::Equation equationAlpha=(osg::BlendEquation::Equation)lua_tointeger(L,2);

		return new osg::BlendEquation(equationRGB, equationAlpha);
	}

	// osg::BlendEquation::BlendEquation(const osg::BlendEquation & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::BlendEquation* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::BlendEquation(const osg::BlendEquation & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::BlendEquation::BlendEquation(const osg::BlendEquation & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::BlendEquation* trans_ptr=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::BlendEquation::BlendEquation function");
		}
		const osg::BlendEquation & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::BlendEquation::BlendEquation function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::BlendEquation(trans, copyop);
	}

	// Overload binder for osg::BlendEquation::BlendEquation
	static osg::BlendEquation* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function BlendEquation, cannot match any of the overloads for function BlendEquation:\n  BlendEquation()\n  BlendEquation(osg::BlendEquation::Equation)\n  BlendEquation(osg::BlendEquation::Equation, osg::BlendEquation::Equation)\n  BlendEquation(const osg::BlendEquation &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::BlendEquation::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendEquation::cloneType() const function, expected prototype:\nosg::Object * osg::BlendEquation::cloneType() const\nClass arguments details:\n");
		}


		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendEquation::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::BlendEquation::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::BlendEquation::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::BlendEquation::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::BlendEquation::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::BlendEquation::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::BlendEquation::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::BlendEquation::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BlendEquation::libraryName() const function, expected prototype:\nconst char * osg::BlendEquation::libraryName() const\nClass arguments details:\n");
		}


		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BlendEquation::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::BlendEquation::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::BlendEquation::className() const function, expected prototype:\nconst char * osg::BlendEquation::className() const\nClass arguments details:\n");
		}


		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::BlendEquation::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::BlendEquation::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::BlendEquation::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::BlendEquation::getType() const\nClass arguments details:\n");
		}


		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::BlendEquation::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::BlendEquation::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::BlendEquation::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::BlendEquation::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::BlendEquation::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::BlendEquation::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::BlendEquation::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BlendEquation::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::BlendEquation::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BlendEquation::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::BlendEquation::setEquation(osg::BlendEquation::Equation equation)
	static int _bind_setEquation(lua_State *L) {
		if (!_lg_typecheck_setEquation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::setEquation(osg::BlendEquation::Equation equation) function, expected prototype:\nvoid osg::BlendEquation::setEquation(osg::BlendEquation::Equation equation)\nClass arguments details:\n");
		}

		osg::BlendEquation::Equation equation=(osg::BlendEquation::Equation)lua_tointeger(L,2);

		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::setEquation(osg::BlendEquation::Equation)");
		}
		self->setEquation(equation);

		return 0;
	}

	// osg::BlendEquation::Equation osg::BlendEquation::getEquation() const
	static int _bind_getEquation(lua_State *L) {
		if (!_lg_typecheck_getEquation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::Equation osg::BlendEquation::getEquation() const function, expected prototype:\nosg::BlendEquation::Equation osg::BlendEquation::getEquation() const\nClass arguments details:\n");
		}


		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BlendEquation::Equation osg::BlendEquation::getEquation() const");
		}
		osg::BlendEquation::Equation lret = self->getEquation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendEquation::setEquationRGB(osg::BlendEquation::Equation equation)
	static int _bind_setEquationRGB(lua_State *L) {
		if (!_lg_typecheck_setEquationRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::setEquationRGB(osg::BlendEquation::Equation equation) function, expected prototype:\nvoid osg::BlendEquation::setEquationRGB(osg::BlendEquation::Equation equation)\nClass arguments details:\n");
		}

		osg::BlendEquation::Equation equation=(osg::BlendEquation::Equation)lua_tointeger(L,2);

		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::setEquationRGB(osg::BlendEquation::Equation)");
		}
		self->setEquationRGB(equation);

		return 0;
	}

	// osg::BlendEquation::Equation osg::BlendEquation::getEquationRGB() const
	static int _bind_getEquationRGB(lua_State *L) {
		if (!_lg_typecheck_getEquationRGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::Equation osg::BlendEquation::getEquationRGB() const function, expected prototype:\nosg::BlendEquation::Equation osg::BlendEquation::getEquationRGB() const\nClass arguments details:\n");
		}


		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BlendEquation::Equation osg::BlendEquation::getEquationRGB() const");
		}
		osg::BlendEquation::Equation lret = self->getEquationRGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendEquation::setEquationAlpha(osg::BlendEquation::Equation equation)
	static int _bind_setEquationAlpha(lua_State *L) {
		if (!_lg_typecheck_setEquationAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::setEquationAlpha(osg::BlendEquation::Equation equation) function, expected prototype:\nvoid osg::BlendEquation::setEquationAlpha(osg::BlendEquation::Equation equation)\nClass arguments details:\n");
		}

		osg::BlendEquation::Equation equation=(osg::BlendEquation::Equation)lua_tointeger(L,2);

		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::setEquationAlpha(osg::BlendEquation::Equation)");
		}
		self->setEquationAlpha(equation);

		return 0;
	}

	// osg::BlendEquation::Equation osg::BlendEquation::getEquationAlpha() const
	static int _bind_getEquationAlpha(lua_State *L) {
		if (!_lg_typecheck_getEquationAlpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BlendEquation::Equation osg::BlendEquation::getEquationAlpha() const function, expected prototype:\nosg::BlendEquation::Equation osg::BlendEquation::getEquationAlpha() const\nClass arguments details:\n");
		}


		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BlendEquation::Equation osg::BlendEquation::getEquationAlpha() const");
		}
		osg::BlendEquation::Equation lret = self->getEquationAlpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::BlendEquation::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BlendEquation::apply(osg::State & ) const function, expected prototype:\nvoid osg::BlendEquation::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::BlendEquation::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::BlendEquation* self=dynamic_cast< osg::BlendEquation* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BlendEquation::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::BlendEquation::Extensions * osg::BlendEquation::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::BlendEquation::Extensions * osg::BlendEquation::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::BlendEquation::Extensions * osg::BlendEquation::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::BlendEquation::Extensions * lret = osg::BlendEquation::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BlendEquation::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::BlendEquation::setExtensions(unsigned int contextID, osg::BlendEquation::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::BlendEquation::setExtensions(unsigned int contextID, osg::BlendEquation::Extensions * extensions) function, expected prototype:\nstatic void osg::BlendEquation::setExtensions(unsigned int contextID, osg::BlendEquation::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::BlendEquation::Extensions* extensions=dynamic_cast< osg::BlendEquation::Extensions* >(Luna< osg::Referenced >::check(L,2));

		osg::BlendEquation::setExtensions(contextID, extensions);

		return 0;
	}


	// Operator binds:

};

osg::BlendEquation* LunaTraits< osg::BlendEquation >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BlendEquation::_bind_ctor(L);
}

void LunaTraits< osg::BlendEquation >::_bind_dtor(osg::BlendEquation* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::BlendEquation >::className[] = "BlendEquation";
const char LunaTraits< osg::BlendEquation >::fullName[] = "osg::BlendEquation";
const char LunaTraits< osg::BlendEquation >::moduleName[] = "osg";
const char* LunaTraits< osg::BlendEquation >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::BlendEquation >::hash = 54255330;
const int LunaTraits< osg::BlendEquation >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::BlendEquation >::methods[] = {
	{"cloneType", &luna_wrapper_osg_BlendEquation::_bind_cloneType},
	{"clone", &luna_wrapper_osg_BlendEquation::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_BlendEquation::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_BlendEquation::_bind_libraryName},
	{"className", &luna_wrapper_osg_BlendEquation::_bind_className},
	{"getType", &luna_wrapper_osg_BlendEquation::_bind_getType},
	{"compare", &luna_wrapper_osg_BlendEquation::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_BlendEquation::_bind_getModeUsage},
	{"setEquation", &luna_wrapper_osg_BlendEquation::_bind_setEquation},
	{"getEquation", &luna_wrapper_osg_BlendEquation::_bind_getEquation},
	{"setEquationRGB", &luna_wrapper_osg_BlendEquation::_bind_setEquationRGB},
	{"getEquationRGB", &luna_wrapper_osg_BlendEquation::_bind_getEquationRGB},
	{"setEquationAlpha", &luna_wrapper_osg_BlendEquation::_bind_setEquationAlpha},
	{"getEquationAlpha", &luna_wrapper_osg_BlendEquation::_bind_getEquationAlpha},
	{"apply", &luna_wrapper_osg_BlendEquation::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_BlendEquation::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_BlendEquation::_bind_setExtensions},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BlendEquation >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_BlendEquation::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BlendEquation >::enumValues[] = {
	{"RGBA_MIN", osg::BlendEquation::RGBA_MIN},
	{"RGBA_MAX", osg::BlendEquation::RGBA_MAX},
	{"ALPHA_MIN", osg::BlendEquation::ALPHA_MIN},
	{"ALPHA_MAX", osg::BlendEquation::ALPHA_MAX},
	{"LOGIC_OP", osg::BlendEquation::LOGIC_OP},
	{"FUNC_ADD", osg::BlendEquation::FUNC_ADD},
	{"FUNC_SUBTRACT", osg::BlendEquation::FUNC_SUBTRACT},
	{"FUNC_REVERSE_SUBTRACT", osg::BlendEquation::FUNC_REVERSE_SUBTRACT},
	{0,0}
};


