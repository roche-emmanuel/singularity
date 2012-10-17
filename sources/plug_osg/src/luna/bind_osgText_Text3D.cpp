#include <plug_common.h>

class luna_wrapper_osgText_Text3D {
public:
	typedef Luna< osgText::Text3D > luna_t;

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
		osgText::Text3D* ptr= dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Text3D >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getCharacterDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCharacterDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRenderMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWallStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWallStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateWallStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWallStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBackStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBackStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrCreateBackStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::Text3D::Text3D()
	static osgText::Text3D* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text3D::Text3D() function, expected prototype:\nosgText::Text3D::Text3D()\nClass arguments details:\n");
		}


		return new osgText::Text3D();
	}

	// osgText::Text3D::Text3D(const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Text3D* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text3D::Text3D(const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Text3D::Text3D(const osgText::Text3D & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgText::Text3D* text_ptr=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::Text3D::Text3D function");
		}
		const osgText::Text3D & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Text3D::Text3D function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgText::Text3D(text, copyop);
	}

	// Overload binder for osgText::Text3D::Text3D
	static osgText::Text3D* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Text3D, cannot match any of the overloads for function Text3D:\n  Text3D()\n  Text3D(const osgText::Text3D &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::Text3D::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text3D::cloneType() const function, expected prototype:\nosg::Object * osgText::Text3D::cloneType() const\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text3D::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Text3D::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Text3D::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgText::Text3D::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Text3D::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Text3D::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Text3D::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Text3D::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Text3D::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Text3D::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Text3D::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Text3D::libraryName() const function, expected prototype:\nconst char * osgText::Text3D::libraryName() const\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Text3D::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Text3D::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Text3D::className() const function, expected prototype:\nconst char * osgText::Text3D::className() const\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Text3D::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// float osgText::Text3D::getCharacterDepth() const
	static int _bind_getCharacterDepth(lua_State *L) {
		if (!_lg_typecheck_getCharacterDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Text3D::getCharacterDepth() const function, expected prototype:\nfloat osgText::Text3D::getCharacterDepth() const\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Text3D::getCharacterDepth() const");
		}
		float lret = self->getCharacterDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text3D::setCharacterDepth(float characterDepth)
	static int _bind_setCharacterDepth(lua_State *L) {
		if (!_lg_typecheck_setCharacterDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::setCharacterDepth(float characterDepth) function, expected prototype:\nvoid osgText::Text3D::setCharacterDepth(float characterDepth)\nClass arguments details:\n");
		}

		float characterDepth=(float)lua_tonumber(L,2);

		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text3D::setCharacterDepth(float)");
		}
		self->setCharacterDepth(characterDepth);

		return 0;
	}

	// osgText::Text3D::RenderMode osgText::Text3D::getRenderMode() const
	static int _bind_getRenderMode(lua_State *L) {
		if (!_lg_typecheck_getRenderMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text3D::RenderMode osgText::Text3D::getRenderMode() const function, expected prototype:\nosgText::Text3D::RenderMode osgText::Text3D::getRenderMode() const\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text3D::RenderMode osgText::Text3D::getRenderMode() const");
		}
		osgText::Text3D::RenderMode lret = self->getRenderMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Text3D::setRenderMode(osgText::Text3D::RenderMode renderMode)
	static int _bind_setRenderMode(lua_State *L) {
		if (!_lg_typecheck_setRenderMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::setRenderMode(osgText::Text3D::RenderMode renderMode) function, expected prototype:\nvoid osgText::Text3D::setRenderMode(osgText::Text3D::RenderMode renderMode)\nClass arguments details:\n");
		}

		osgText::Text3D::RenderMode renderMode=(osgText::Text3D::RenderMode)lua_tointeger(L,2);

		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text3D::setRenderMode(osgText::Text3D::RenderMode)");
		}
		self->setRenderMode(renderMode);

		return 0;
	}

	// osg::StateSet * osgText::Text3D::getWallStateSet()
	static int _bind_getWallStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getWallStateSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getWallStateSet() function, expected prototype:\nosg::StateSet * osgText::Text3D::getWallStateSet()\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getWallStateSet()");
		}
		osg::StateSet * lret = self->getWallStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osgText::Text3D::getWallStateSet() const
	static int _bind_getWallStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getWallStateSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgText::Text3D::getWallStateSet() const function, expected prototype:\nconst osg::StateSet * osgText::Text3D::getWallStateSet() const\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgText::Text3D::getWallStateSet() const");
		}
		const osg::StateSet * lret = self->getWallStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text3D::getWallStateSet
	static int _bind_getWallStateSet(lua_State *L) {
		if (_lg_typecheck_getWallStateSet_overload_1(L)) return _bind_getWallStateSet_overload_1(L);
		if (_lg_typecheck_getWallStateSet_overload_2(L)) return _bind_getWallStateSet_overload_2(L);

		luaL_error(L, "error in function getWallStateSet, cannot match any of the overloads for function getWallStateSet:\n  getWallStateSet()\n  getWallStateSet()\n");
		return 0;
	}

	// osg::StateSet * osgText::Text3D::getOrCreateWallStateSet()
	static int _bind_getOrCreateWallStateSet(lua_State *L) {
		if (!_lg_typecheck_getOrCreateWallStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getOrCreateWallStateSet() function, expected prototype:\nosg::StateSet * osgText::Text3D::getOrCreateWallStateSet()\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getOrCreateWallStateSet()");
		}
		osg::StateSet * lret = self->getOrCreateWallStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text3D::setWallStateSet(osg::StateSet * wallStateSet)
	static int _bind_setWallStateSet(lua_State *L) {
		if (!_lg_typecheck_setWallStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::setWallStateSet(osg::StateSet * wallStateSet) function, expected prototype:\nvoid osgText::Text3D::setWallStateSet(osg::StateSet * wallStateSet)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* wallStateSet=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));

		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text3D::setWallStateSet(osg::StateSet *)");
		}
		self->setWallStateSet(wallStateSet);

		return 0;
	}

	// osg::StateSet * osgText::Text3D::getBackStateSet()
	static int _bind_getBackStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBackStateSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getBackStateSet() function, expected prototype:\nosg::StateSet * osgText::Text3D::getBackStateSet()\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getBackStateSet()");
		}
		osg::StateSet * lret = self->getBackStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// osg::StateSet * osgText::Text3D::getBackStateSet() const
	static int _bind_getBackStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBackStateSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getBackStateSet() const function, expected prototype:\nosg::StateSet * osgText::Text3D::getBackStateSet() const\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getBackStateSet() const");
		}
		osg::StateSet * lret = self->getBackStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text3D::getBackStateSet
	static int _bind_getBackStateSet(lua_State *L) {
		if (_lg_typecheck_getBackStateSet_overload_1(L)) return _bind_getBackStateSet_overload_1(L);
		if (_lg_typecheck_getBackStateSet_overload_2(L)) return _bind_getBackStateSet_overload_2(L);

		luaL_error(L, "error in function getBackStateSet, cannot match any of the overloads for function getBackStateSet:\n  getBackStateSet()\n  getBackStateSet()\n");
		return 0;
	}

	// osg::StateSet * osgText::Text3D::getOrCreateBackStateSet()
	static int _bind_getOrCreateBackStateSet(lua_State *L) {
		if (!_lg_typecheck_getOrCreateBackStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Text3D::getOrCreateBackStateSet() function, expected prototype:\nosg::StateSet * osgText::Text3D::getOrCreateBackStateSet()\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Text3D::getOrCreateBackStateSet()");
		}
		osg::StateSet * lret = self->getOrCreateBackStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text3D::setBackStateSet(osg::StateSet * backStateSet)
	static int _bind_setBackStateSet(lua_State *L) {
		if (!_lg_typecheck_setBackStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::setBackStateSet(osg::StateSet * backStateSet) function, expected prototype:\nvoid osgText::Text3D::setBackStateSet(osg::StateSet * backStateSet)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* backStateSet=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));

		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text3D::setBackStateSet(osg::StateSet *)");
		}
		self->setBackStateSet(backStateSet);

		return 0;
	}

	// void osgText::Text3D::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::Text3D::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::Text3D::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text3D::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// void osgText::Text3D::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text3D::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::Text3D::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text3D::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// osg::BoundingBoxf osgText::Text3D::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxf osgText::Text3D::computeBound() const function, expected prototype:\nosg::BoundingBoxf osgText::Text3D::computeBound() const\nClass arguments details:\n");
		}


		osgText::Text3D* self=dynamic_cast< osgText::Text3D* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingBoxf osgText::Text3D::computeBound() const");
		}
		osg::BoundingBoxf stack_lret = self->computeBound();
		osg::BoundingBoxf* lret = new osg::BoundingBoxf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxf >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgText::Text3D* LunaTraits< osgText::Text3D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Text3D::_bind_ctor(L);
}

void LunaTraits< osgText::Text3D >::_bind_dtor(osgText::Text3D* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Text3D >::className[] = "Text3D";
const char LunaTraits< osgText::Text3D >::fullName[] = "osgText::Text3D";
const char LunaTraits< osgText::Text3D >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Text3D >::parents[] = {"osgText.TextBase", 0};
const int LunaTraits< osgText::Text3D >::hash = 57050122;
const int LunaTraits< osgText::Text3D >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Text3D >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_Text3D::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_Text3D::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_Text3D::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgText_Text3D::_bind_libraryName},
	{"className", &luna_wrapper_osgText_Text3D::_bind_className},
	{"getCharacterDepth", &luna_wrapper_osgText_Text3D::_bind_getCharacterDepth},
	{"setCharacterDepth", &luna_wrapper_osgText_Text3D::_bind_setCharacterDepth},
	{"getRenderMode", &luna_wrapper_osgText_Text3D::_bind_getRenderMode},
	{"setRenderMode", &luna_wrapper_osgText_Text3D::_bind_setRenderMode},
	{"getWallStateSet", &luna_wrapper_osgText_Text3D::_bind_getWallStateSet},
	{"getOrCreateWallStateSet", &luna_wrapper_osgText_Text3D::_bind_getOrCreateWallStateSet},
	{"setWallStateSet", &luna_wrapper_osgText_Text3D::_bind_setWallStateSet},
	{"getBackStateSet", &luna_wrapper_osgText_Text3D::_bind_getBackStateSet},
	{"getOrCreateBackStateSet", &luna_wrapper_osgText_Text3D::_bind_getOrCreateBackStateSet},
	{"setBackStateSet", &luna_wrapper_osgText_Text3D::_bind_setBackStateSet},
	{"drawImplementation", &luna_wrapper_osgText_Text3D::_bind_drawImplementation},
	{"releaseGLObjects", &luna_wrapper_osgText_Text3D::_bind_releaseGLObjects},
	{"computeBound", &luna_wrapper_osgText_Text3D::_bind_computeBound},
	{"__eq", &luna_wrapper_osgText_Text3D::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Text3D >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Text3D::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Text3D >::enumValues[] = {
	{"PER_FACE", osgText::Text3D::PER_FACE},
	{"PER_GLYPH", osgText::Text3D::PER_GLYPH},
	{0,0}
};


