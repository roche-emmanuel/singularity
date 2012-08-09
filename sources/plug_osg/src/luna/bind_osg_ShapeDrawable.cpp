#include <plug_common.h>

class luna_wrapper_osg_ShapeDrawable {
public:
	typedef Luna< osg::ShapeDrawable > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::ShapeDrawable* ptr= dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ShapeDrawable >::push(L,ptr,false);
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

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_setColor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTessellationHints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTessellationHints_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTessellationHints_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ShapeDrawable::ShapeDrawable()
	static osg::ShapeDrawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable::ShapeDrawable() function, expected prototype:\nosg::ShapeDrawable::ShapeDrawable()\nClass arguments details:\n");
		}


		return new osg::ShapeDrawable();
	}

	// osg::ShapeDrawable::ShapeDrawable(osg::Shape * shape, osg::TessellationHints * hints = 0)
	static osg::ShapeDrawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable::ShapeDrawable(osg::Shape * shape, osg::TessellationHints * hints = 0) function, expected prototype:\nosg::ShapeDrawable::ShapeDrawable(osg::Shape * shape, osg::TessellationHints * hints = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Shape* shape=dynamic_cast< osg::Shape* >(Luna< osg::Referenced >::check(L,1));
		osg::TessellationHints* hints=luatop>1 ? dynamic_cast< osg::TessellationHints* >(Luna< osg::Referenced >::check(L,2)) : (osg::TessellationHints*)0;

		return new osg::ShapeDrawable(shape, hints);
	}

	// osg::ShapeDrawable::ShapeDrawable(const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::ShapeDrawable* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ShapeDrawable::ShapeDrawable(const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::ShapeDrawable::ShapeDrawable(const osg::ShapeDrawable & pg, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::ShapeDrawable* pg_ptr=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if( !pg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pg in osg::ShapeDrawable::ShapeDrawable function");
		}
		const osg::ShapeDrawable & pg=*pg_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::ShapeDrawable::ShapeDrawable function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::ShapeDrawable(pg, copyop);
	}

	// Overload binder for osg::ShapeDrawable::ShapeDrawable
	static osg::ShapeDrawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function ShapeDrawable, cannot match any of the overloads for function ShapeDrawable:\n  ShapeDrawable()\n  ShapeDrawable(osg::Shape *, osg::TessellationHints *)\n  ShapeDrawable(const osg::ShapeDrawable &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::ShapeDrawable::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShapeDrawable::cloneType() const function, expected prototype:\nosg::Object * osg::ShapeDrawable::cloneType() const\nClass arguments details:\n");
		}


		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShapeDrawable::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::ShapeDrawable::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::ShapeDrawable::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::ShapeDrawable::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::ShapeDrawable::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::ShapeDrawable::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::ShapeDrawable::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::ShapeDrawable::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::ShapeDrawable::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::ShapeDrawable::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::ShapeDrawable::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShapeDrawable::libraryName() const function, expected prototype:\nconst char * osg::ShapeDrawable::libraryName() const\nClass arguments details:\n");
		}


		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShapeDrawable::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::ShapeDrawable::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::ShapeDrawable::className() const function, expected prototype:\nconst char * osg::ShapeDrawable::className() const\nClass arguments details:\n");
		}


		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::ShapeDrawable::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::ShapeDrawable::setColor(const osg::Vec4f & color)
	static int _bind_setColor(lua_State *L) {
		if (!_lg_typecheck_setColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::setColor(const osg::Vec4f & color) function, expected prototype:\nvoid osg::ShapeDrawable::setColor(const osg::Vec4f & color)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* color_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in osg::ShapeDrawable::setColor function");
		}
		const osg::Vec4f & color=*color_ptr;

		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::setColor(const osg::Vec4f &)");
		}
		self->setColor(color);

		return 0;
	}

	// const osg::Vec4f & osg::ShapeDrawable::getColor() const
	static int _bind_getColor(lua_State *L) {
		if (!_lg_typecheck_getColor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec4f & osg::ShapeDrawable::getColor() const function, expected prototype:\nconst osg::Vec4f & osg::ShapeDrawable::getColor() const\nClass arguments details:\n");
		}


		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec4f & osg::ShapeDrawable::getColor() const");
		}
		const osg::Vec4f* lret = &self->getColor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,false);

		return 1;
	}

	// void osg::ShapeDrawable::setTessellationHints(osg::TessellationHints * hints)
	static int _bind_setTessellationHints(lua_State *L) {
		if (!_lg_typecheck_setTessellationHints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::setTessellationHints(osg::TessellationHints * hints) function, expected prototype:\nvoid osg::ShapeDrawable::setTessellationHints(osg::TessellationHints * hints)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::TessellationHints* hints=dynamic_cast< osg::TessellationHints* >(Luna< osg::Referenced >::check(L,2));

		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::setTessellationHints(osg::TessellationHints *)");
		}
		self->setTessellationHints(hints);

		return 0;
	}

	// osg::TessellationHints * osg::ShapeDrawable::getTessellationHints()
	static int _bind_getTessellationHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTessellationHints_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() function, expected prototype:\nosg::TessellationHints * osg::ShapeDrawable::getTessellationHints()\nClass arguments details:\n");
		}


		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::TessellationHints * osg::ShapeDrawable::getTessellationHints()");
		}
		osg::TessellationHints * lret = self->getTessellationHints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TessellationHints >::push(L,lret,false);

		return 1;
	}

	// const osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() const
	static int _bind_getTessellationHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTessellationHints_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() const function, expected prototype:\nconst osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() const\nClass arguments details:\n");
		}


		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::TessellationHints * osg::ShapeDrawable::getTessellationHints() const");
		}
		const osg::TessellationHints * lret = self->getTessellationHints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TessellationHints >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ShapeDrawable::getTessellationHints
	static int _bind_getTessellationHints(lua_State *L) {
		if (_lg_typecheck_getTessellationHints_overload_1(L)) return _bind_getTessellationHints_overload_1(L);
		if (_lg_typecheck_getTessellationHints_overload_2(L)) return _bind_getTessellationHints_overload_2(L);

		luaL_error(L, "error in function getTessellationHints, cannot match any of the overloads for function getTessellationHints:\n  getTessellationHints()\n  getTessellationHints()\n");
		return 0;
	}

	// void osg::ShapeDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ShapeDrawable::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osg::ShapeDrawable::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::ShapeDrawable::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ShapeDrawable::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBoxf osg::ShapeDrawable::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxf osg::ShapeDrawable::computeBound() const function, expected prototype:\nosg::BoundingBoxf osg::ShapeDrawable::computeBound() const\nClass arguments details:\n");
		}


		osg::ShapeDrawable* self=dynamic_cast< osg::ShapeDrawable* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingBoxf osg::ShapeDrawable::computeBound() const");
		}
		osg::BoundingBoxf stack_lret = self->computeBound();
		osg::BoundingBoxf* lret = new osg::BoundingBoxf(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxf >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::ShapeDrawable* LunaTraits< osg::ShapeDrawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ShapeDrawable::_bind_ctor(L);
}

void LunaTraits< osg::ShapeDrawable >::_bind_dtor(osg::ShapeDrawable* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ShapeDrawable >::className[] = "ShapeDrawable";
const char LunaTraits< osg::ShapeDrawable >::fullName[] = "osg::ShapeDrawable";
const char LunaTraits< osg::ShapeDrawable >::moduleName[] = "osg";
const char* LunaTraits< osg::ShapeDrawable >::parents[] = {"osg.Drawable", 0};
const int LunaTraits< osg::ShapeDrawable >::hash = 82940632;
const int LunaTraits< osg::ShapeDrawable >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ShapeDrawable >::methods[] = {
	{"cloneType", &luna_wrapper_osg_ShapeDrawable::_bind_cloneType},
	{"clone", &luna_wrapper_osg_ShapeDrawable::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_ShapeDrawable::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_ShapeDrawable::_bind_libraryName},
	{"className", &luna_wrapper_osg_ShapeDrawable::_bind_className},
	{"setColor", &luna_wrapper_osg_ShapeDrawable::_bind_setColor},
	{"getColor", &luna_wrapper_osg_ShapeDrawable::_bind_getColor},
	{"setTessellationHints", &luna_wrapper_osg_ShapeDrawable::_bind_setTessellationHints},
	{"getTessellationHints", &luna_wrapper_osg_ShapeDrawable::_bind_getTessellationHints},
	{"drawImplementation", &luna_wrapper_osg_ShapeDrawable::_bind_drawImplementation},
	{"computeBound", &luna_wrapper_osg_ShapeDrawable::_bind_computeBound},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ShapeDrawable >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ShapeDrawable::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ShapeDrawable >::enumValues[] = {
	{0,0}
};


