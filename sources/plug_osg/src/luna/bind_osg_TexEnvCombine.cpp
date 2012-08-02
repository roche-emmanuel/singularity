#include <plug_common.h>

class luna_wrapper_osg_TexEnvCombine {
public:
	typedef Luna< osg::TexEnvCombine > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::TexEnvCombine* ptr= dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TexEnvCombine >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCombine_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCombine_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCombine_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCombine_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSource0_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource1_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource2_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource0_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource1_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSource2_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSource0_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource1_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource2_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource0_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource1_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSource2_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOperand0_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand1_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand2_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand0_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand1_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOperand2_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOperand0_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand1_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand2_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand0_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand1_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOperand2_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScale_RGB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScale_Alpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScale_RGB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScale_Alpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConstantColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstantColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setConstantColorAsLightDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getConstantColorAsLightDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TexEnvCombine::TexEnvCombine()
	static osg::TexEnvCombine* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexEnvCombine::TexEnvCombine() function, expected prototype:\nosg::TexEnvCombine::TexEnvCombine()\nClass arguments details:\n");
		}


		return new osg::TexEnvCombine();
	}

	// osg::TexEnvCombine::TexEnvCombine(const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexEnvCombine* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexEnvCombine::TexEnvCombine(const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexEnvCombine::TexEnvCombine(const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TexEnvCombine* texenv_ptr=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if( !texenv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg texenv in osg::TexEnvCombine::TexEnvCombine function");
		}
		const osg::TexEnvCombine & texenv=*texenv_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexEnvCombine::TexEnvCombine function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TexEnvCombine(texenv, copyop);
	}

	// Overload binder for osg::TexEnvCombine::TexEnvCombine
	static osg::TexEnvCombine* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TexEnvCombine, cannot match any of the overloads for function TexEnvCombine:\n  TexEnvCombine()\n  TexEnvCombine(const osg::TexEnvCombine &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TexEnvCombine::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnvCombine::cloneType() const function, expected prototype:\nosg::Object * osg::TexEnvCombine::cloneType() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnvCombine::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexEnvCombine::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexEnvCombine::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::TexEnvCombine::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvCombine::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexEnvCombine::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexEnvCombine::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvCombine::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexEnvCombine::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexEnvCombine::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexEnvCombine::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnvCombine::libraryName() const function, expected prototype:\nconst char * osg::TexEnvCombine::libraryName() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexEnvCombine::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexEnvCombine::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexEnvCombine::className() const function, expected prototype:\nconst char * osg::TexEnvCombine::className() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexEnvCombine::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::TexEnvCombine::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::TexEnvCombine::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::TexEnvCombine::getType() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::TexEnvCombine::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::TexEnvCombine::isTextureAttribute() const
	static int _bind_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvCombine::isTextureAttribute() const function, expected prototype:\nbool osg::TexEnvCombine::isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexEnvCombine::isTextureAttribute() const");
		}
		bool lret = self->isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osg::TexEnvCombine::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::TexEnvCombine::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::TexEnvCombine::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setCombine_RGB(int cm)
	static int _bind_setCombine_RGB(lua_State *L) {
		if (!_lg_typecheck_setCombine_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setCombine_RGB(int cm) function, expected prototype:\nvoid osg::TexEnvCombine::setCombine_RGB(int cm)\nClass arguments details:\n");
		}

		int cm=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setCombine_RGB(int)");
		}
		self->setCombine_RGB(cm);

		return 0;
	}

	// void osg::TexEnvCombine::setCombine_Alpha(int cm)
	static int _bind_setCombine_Alpha(lua_State *L) {
		if (!_lg_typecheck_setCombine_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setCombine_Alpha(int cm) function, expected prototype:\nvoid osg::TexEnvCombine::setCombine_Alpha(int cm)\nClass arguments details:\n");
		}

		int cm=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setCombine_Alpha(int)");
		}
		self->setCombine_Alpha(cm);

		return 0;
	}

	// int osg::TexEnvCombine::getCombine_RGB() const
	static int _bind_getCombine_RGB(lua_State *L) {
		if (!_lg_typecheck_getCombine_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getCombine_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getCombine_RGB() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getCombine_RGB() const");
		}
		int lret = self->getCombine_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getCombine_Alpha() const
	static int _bind_getCombine_Alpha(lua_State *L) {
		if (!_lg_typecheck_getCombine_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getCombine_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getCombine_Alpha() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getCombine_Alpha() const");
		}
		int lret = self->getCombine_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setSource0_RGB(int sp)
	static int _bind_setSource0_RGB(lua_State *L) {
		if (!_lg_typecheck_setSource0_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource0_RGB(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource0_RGB(int sp)\nClass arguments details:\n");
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource0_RGB(int)");
		}
		self->setSource0_RGB(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource1_RGB(int sp)
	static int _bind_setSource1_RGB(lua_State *L) {
		if (!_lg_typecheck_setSource1_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource1_RGB(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource1_RGB(int sp)\nClass arguments details:\n");
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource1_RGB(int)");
		}
		self->setSource1_RGB(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource2_RGB(int sp)
	static int _bind_setSource2_RGB(lua_State *L) {
		if (!_lg_typecheck_setSource2_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource2_RGB(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource2_RGB(int sp)\nClass arguments details:\n");
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource2_RGB(int)");
		}
		self->setSource2_RGB(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource0_Alpha(int sp)
	static int _bind_setSource0_Alpha(lua_State *L) {
		if (!_lg_typecheck_setSource0_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource0_Alpha(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource0_Alpha(int sp)\nClass arguments details:\n");
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource0_Alpha(int)");
		}
		self->setSource0_Alpha(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource1_Alpha(int sp)
	static int _bind_setSource1_Alpha(lua_State *L) {
		if (!_lg_typecheck_setSource1_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource1_Alpha(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource1_Alpha(int sp)\nClass arguments details:\n");
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource1_Alpha(int)");
		}
		self->setSource1_Alpha(sp);

		return 0;
	}

	// void osg::TexEnvCombine::setSource2_Alpha(int sp)
	static int _bind_setSource2_Alpha(lua_State *L) {
		if (!_lg_typecheck_setSource2_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setSource2_Alpha(int sp) function, expected prototype:\nvoid osg::TexEnvCombine::setSource2_Alpha(int sp)\nClass arguments details:\n");
		}

		int sp=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setSource2_Alpha(int)");
		}
		self->setSource2_Alpha(sp);

		return 0;
	}

	// int osg::TexEnvCombine::getSource0_RGB() const
	static int _bind_getSource0_RGB(lua_State *L) {
		if (!_lg_typecheck_getSource0_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource0_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getSource0_RGB() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource0_RGB() const");
		}
		int lret = self->getSource0_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource1_RGB() const
	static int _bind_getSource1_RGB(lua_State *L) {
		if (!_lg_typecheck_getSource1_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource1_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getSource1_RGB() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource1_RGB() const");
		}
		int lret = self->getSource1_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource2_RGB() const
	static int _bind_getSource2_RGB(lua_State *L) {
		if (!_lg_typecheck_getSource2_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource2_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getSource2_RGB() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource2_RGB() const");
		}
		int lret = self->getSource2_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource0_Alpha() const
	static int _bind_getSource0_Alpha(lua_State *L) {
		if (!_lg_typecheck_getSource0_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource0_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getSource0_Alpha() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource0_Alpha() const");
		}
		int lret = self->getSource0_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource1_Alpha() const
	static int _bind_getSource1_Alpha(lua_State *L) {
		if (!_lg_typecheck_getSource1_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource1_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getSource1_Alpha() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource1_Alpha() const");
		}
		int lret = self->getSource1_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getSource2_Alpha() const
	static int _bind_getSource2_Alpha(lua_State *L) {
		if (!_lg_typecheck_getSource2_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getSource2_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getSource2_Alpha() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getSource2_Alpha() const");
		}
		int lret = self->getSource2_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setOperand0_RGB(int op)
	static int _bind_setOperand0_RGB(lua_State *L) {
		if (!_lg_typecheck_setOperand0_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand0_RGB(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand0_RGB(int op)\nClass arguments details:\n");
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand0_RGB(int)");
		}
		self->setOperand0_RGB(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand1_RGB(int op)
	static int _bind_setOperand1_RGB(lua_State *L) {
		if (!_lg_typecheck_setOperand1_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand1_RGB(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand1_RGB(int op)\nClass arguments details:\n");
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand1_RGB(int)");
		}
		self->setOperand1_RGB(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand2_RGB(int op)
	static int _bind_setOperand2_RGB(lua_State *L) {
		if (!_lg_typecheck_setOperand2_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand2_RGB(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand2_RGB(int op)\nClass arguments details:\n");
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand2_RGB(int)");
		}
		self->setOperand2_RGB(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand0_Alpha(int op)
	static int _bind_setOperand0_Alpha(lua_State *L) {
		if (!_lg_typecheck_setOperand0_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand0_Alpha(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand0_Alpha(int op)\nClass arguments details:\n");
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand0_Alpha(int)");
		}
		self->setOperand0_Alpha(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand1_Alpha(int op)
	static int _bind_setOperand1_Alpha(lua_State *L) {
		if (!_lg_typecheck_setOperand1_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand1_Alpha(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand1_Alpha(int op)\nClass arguments details:\n");
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand1_Alpha(int)");
		}
		self->setOperand1_Alpha(op);

		return 0;
	}

	// void osg::TexEnvCombine::setOperand2_Alpha(int op)
	static int _bind_setOperand2_Alpha(lua_State *L) {
		if (!_lg_typecheck_setOperand2_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setOperand2_Alpha(int op) function, expected prototype:\nvoid osg::TexEnvCombine::setOperand2_Alpha(int op)\nClass arguments details:\n");
		}

		int op=(int)lua_tointeger(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setOperand2_Alpha(int)");
		}
		self->setOperand2_Alpha(op);

		return 0;
	}

	// int osg::TexEnvCombine::getOperand0_RGB() const
	static int _bind_getOperand0_RGB(lua_State *L) {
		if (!_lg_typecheck_getOperand0_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand0_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getOperand0_RGB() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand0_RGB() const");
		}
		int lret = self->getOperand0_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand1_RGB() const
	static int _bind_getOperand1_RGB(lua_State *L) {
		if (!_lg_typecheck_getOperand1_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand1_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getOperand1_RGB() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand1_RGB() const");
		}
		int lret = self->getOperand1_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand2_RGB() const
	static int _bind_getOperand2_RGB(lua_State *L) {
		if (!_lg_typecheck_getOperand2_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand2_RGB() const function, expected prototype:\nint osg::TexEnvCombine::getOperand2_RGB() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand2_RGB() const");
		}
		int lret = self->getOperand2_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand0_Alpha() const
	static int _bind_getOperand0_Alpha(lua_State *L) {
		if (!_lg_typecheck_getOperand0_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand0_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getOperand0_Alpha() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand0_Alpha() const");
		}
		int lret = self->getOperand0_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand1_Alpha() const
	static int _bind_getOperand1_Alpha(lua_State *L) {
		if (!_lg_typecheck_getOperand1_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand1_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getOperand1_Alpha() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand1_Alpha() const");
		}
		int lret = self->getOperand1_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::TexEnvCombine::getOperand2_Alpha() const
	static int _bind_getOperand2_Alpha(lua_State *L) {
		if (!_lg_typecheck_getOperand2_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::TexEnvCombine::getOperand2_Alpha() const function, expected prototype:\nint osg::TexEnvCombine::getOperand2_Alpha() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::TexEnvCombine::getOperand2_Alpha() const");
		}
		int lret = self->getOperand2_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setScale_RGB(float scale)
	static int _bind_setScale_RGB(lua_State *L) {
		if (!_lg_typecheck_setScale_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setScale_RGB(float scale) function, expected prototype:\nvoid osg::TexEnvCombine::setScale_RGB(float scale)\nClass arguments details:\n");
		}

		float scale=(float)lua_tonumber(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setScale_RGB(float)");
		}
		self->setScale_RGB(scale);

		return 0;
	}

	// void osg::TexEnvCombine::setScale_Alpha(float scale)
	static int _bind_setScale_Alpha(lua_State *L) {
		if (!_lg_typecheck_setScale_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setScale_Alpha(float scale) function, expected prototype:\nvoid osg::TexEnvCombine::setScale_Alpha(float scale)\nClass arguments details:\n");
		}

		float scale=(float)lua_tonumber(L,2);

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setScale_Alpha(float)");
		}
		self->setScale_Alpha(scale);

		return 0;
	}

	// float osg::TexEnvCombine::getScale_RGB() const
	static int _bind_getScale_RGB(lua_State *L) {
		if (!_lg_typecheck_getScale_RGB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::TexEnvCombine::getScale_RGB() const function, expected prototype:\nfloat osg::TexEnvCombine::getScale_RGB() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::TexEnvCombine::getScale_RGB() const");
		}
		float lret = self->getScale_RGB();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::TexEnvCombine::getScale_Alpha() const
	static int _bind_getScale_Alpha(lua_State *L) {
		if (!_lg_typecheck_getScale_Alpha(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::TexEnvCombine::getScale_Alpha() const function, expected prototype:\nfloat osg::TexEnvCombine::getScale_Alpha() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::TexEnvCombine::getScale_Alpha() const");
		}
		float lret = self->getScale_Alpha();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexEnvCombine::setConstantColor(const osg::Vec4f & color)
	static int _bind_setConstantColor(lua_State *L) {
		if (!_lg_typecheck_setConstantColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setConstantColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::TexEnvCombine::setConstantColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::TexEnvCombine::setConstantColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setConstantColor(const osg::Vec4f &)");
		}
		self->setConstantColor(color);

		return 0;
	}

	// const osg::Vec4f & osg::TexEnvCombine::getConstantColor() const
	static int _bind_getConstantColor(lua_State *L) {
		if (!_lg_typecheck_getConstantColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::TexEnvCombine::getConstantColor() const function, expected prototype:\nconst osg::Vec4f & osg::TexEnvCombine::getConstantColor() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::TexEnvCombine::getConstantColor() const");
		}
		const osg::Vec4f* lret = &self->getConstantColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::TexEnvCombine::setConstantColorAsLightDirection(const osg::Vec3f & direction)
	static int _bind_setConstantColorAsLightDirection(lua_State *L) {
		if (!_lg_typecheck_setConstantColorAsLightDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::setConstantColorAsLightDirection(const osg::Vec3f & direction) function, expected prototype:\nvoid osg::TexEnvCombine::setConstantColorAsLightDirection(const osg::Vec3f & direction)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* direction_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !direction_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg direction in osg::TexEnvCombine::setConstantColorAsLightDirection function");
		}
		const osg::Vec3f & direction=*direction_ptr;

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::setConstantColorAsLightDirection(const osg::Vec3f &)");
		}
		self->setConstantColorAsLightDirection(direction);

		return 0;
	}

	// osg::Vec3f osg::TexEnvCombine::getConstantColorAsLightDirection() const
	static int _bind_getConstantColorAsLightDirection(lua_State *L) {
		if (!_lg_typecheck_getConstantColorAsLightDirection(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::TexEnvCombine::getConstantColorAsLightDirection() const function, expected prototype:\nosg::Vec3f osg::TexEnvCombine::getConstantColorAsLightDirection() const\nClass arguments details:\n");
		}


		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::TexEnvCombine::getConstantColorAsLightDirection() const");
		}
		osg::Vec3f stack_lret = self->getConstantColorAsLightDirection();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osg::TexEnvCombine::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::apply(osg::State & ) const function, expected prototype:\nvoid osg::TexEnvCombine::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TexEnvCombine::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::TexEnvCombine* self=dynamic_cast< osg::TexEnvCombine* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::TexEnvCombine* LunaTraits< osg::TexEnvCombine >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TexEnvCombine::_bind_ctor(L);
}

void LunaTraits< osg::TexEnvCombine >::_bind_dtor(osg::TexEnvCombine* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TexEnvCombine >::className[] = "TexEnvCombine";
const char LunaTraits< osg::TexEnvCombine >::fullName[] = "osg::TexEnvCombine";
const char LunaTraits< osg::TexEnvCombine >::moduleName[] = "osg";
const char* LunaTraits< osg::TexEnvCombine >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::TexEnvCombine >::hash = 61352714;
const int LunaTraits< osg::TexEnvCombine >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TexEnvCombine >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TexEnvCombine::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TexEnvCombine::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TexEnvCombine::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TexEnvCombine::_bind_libraryName},
	{"className", &luna_wrapper_osg_TexEnvCombine::_bind_className},
	{"getType", &luna_wrapper_osg_TexEnvCombine::_bind_getType},
	{"isTextureAttribute", &luna_wrapper_osg_TexEnvCombine::_bind_isTextureAttribute},
	{"compare", &luna_wrapper_osg_TexEnvCombine::_bind_compare},
	{"setCombine_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setCombine_RGB},
	{"setCombine_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setCombine_Alpha},
	{"getCombine_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getCombine_RGB},
	{"getCombine_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getCombine_Alpha},
	{"setSource0_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setSource0_RGB},
	{"setSource1_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setSource1_RGB},
	{"setSource2_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setSource2_RGB},
	{"setSource0_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setSource0_Alpha},
	{"setSource1_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setSource1_Alpha},
	{"setSource2_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setSource2_Alpha},
	{"getSource0_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getSource0_RGB},
	{"getSource1_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getSource1_RGB},
	{"getSource2_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getSource2_RGB},
	{"getSource0_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getSource0_Alpha},
	{"getSource1_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getSource1_Alpha},
	{"getSource2_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getSource2_Alpha},
	{"setOperand0_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand0_RGB},
	{"setOperand1_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand1_RGB},
	{"setOperand2_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand2_RGB},
	{"setOperand0_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand0_Alpha},
	{"setOperand1_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand1_Alpha},
	{"setOperand2_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setOperand2_Alpha},
	{"getOperand0_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand0_RGB},
	{"getOperand1_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand1_RGB},
	{"getOperand2_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand2_RGB},
	{"getOperand0_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand0_Alpha},
	{"getOperand1_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand1_Alpha},
	{"getOperand2_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getOperand2_Alpha},
	{"setScale_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_setScale_RGB},
	{"setScale_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_setScale_Alpha},
	{"getScale_RGB", &luna_wrapper_osg_TexEnvCombine::_bind_getScale_RGB},
	{"getScale_Alpha", &luna_wrapper_osg_TexEnvCombine::_bind_getScale_Alpha},
	{"setConstantColor", &luna_wrapper_osg_TexEnvCombine::_bind_setConstantColor},
	{"getConstantColor", &luna_wrapper_osg_TexEnvCombine::_bind_getConstantColor},
	{"setConstantColorAsLightDirection", &luna_wrapper_osg_TexEnvCombine::_bind_setConstantColorAsLightDirection},
	{"getConstantColorAsLightDirection", &luna_wrapper_osg_TexEnvCombine::_bind_getConstantColorAsLightDirection},
	{"apply", &luna_wrapper_osg_TexEnvCombine::_bind_apply},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TexEnvCombine >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TexEnvCombine::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TexEnvCombine >::enumValues[] = {
	{"REPLACE", osg::TexEnvCombine::REPLACE},
	{"MODULATE", osg::TexEnvCombine::MODULATE},
	{"ADD", osg::TexEnvCombine::ADD},
	{"ADD_SIGNED", osg::TexEnvCombine::ADD_SIGNED},
	{"INTERPOLATE", osg::TexEnvCombine::INTERPOLATE},
	{"SUBTRACT", osg::TexEnvCombine::SUBTRACT},
	{"DOT3_RGB", osg::TexEnvCombine::DOT3_RGB},
	{"DOT3_RGBA", osg::TexEnvCombine::DOT3_RGBA},
	{"CONSTANT", osg::TexEnvCombine::CONSTANT},
	{"PRIMARY_COLOR", osg::TexEnvCombine::PRIMARY_COLOR},
	{"PREVIOUS", osg::TexEnvCombine::PREVIOUS},
	{"TEXTURE", osg::TexEnvCombine::TEXTURE},
	{"TEXTURE0", osg::TexEnvCombine::TEXTURE0},
	{"TEXTURE1", osg::TexEnvCombine::TEXTURE1},
	{"TEXTURE2", osg::TexEnvCombine::TEXTURE2},
	{"TEXTURE3", osg::TexEnvCombine::TEXTURE3},
	{"TEXTURE4", osg::TexEnvCombine::TEXTURE4},
	{"TEXTURE5", osg::TexEnvCombine::TEXTURE5},
	{"TEXTURE6", osg::TexEnvCombine::TEXTURE6},
	{"TEXTURE7", osg::TexEnvCombine::TEXTURE7},
	{"SRC_COLOR", osg::TexEnvCombine::SRC_COLOR},
	{"ONE_MINUS_SRC_COLOR", osg::TexEnvCombine::ONE_MINUS_SRC_COLOR},
	{"SRC_ALPHA", osg::TexEnvCombine::SRC_ALPHA},
	{"ONE_MINUS_SRC_ALPHA", osg::TexEnvCombine::ONE_MINUS_SRC_ALPHA},
	{0,0}
};


