#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_LineWidth.h>

class luna_wrapper_osg_LineWidth {
public:
	typedef Luna< osg::LineWidth > luna_t;

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
		osg::LineWidth* ptr= dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LineWidth >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
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
	// osg::LineWidth::LineWidth(float width = 1.0f)
	static osg::LineWidth* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineWidth::LineWidth(float width = 1.0f) function, expected prototype:\nosg::LineWidth::LineWidth(float width = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float width=luatop>0 ? (float)lua_tonumber(L,1) : 1.0f;

		return new osg::LineWidth(width);
	}

	// osg::LineWidth::LineWidth(const osg::LineWidth & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LineWidth* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineWidth::LineWidth(const osg::LineWidth & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LineWidth::LineWidth(const osg::LineWidth & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::LineWidth* lw_ptr=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if( !lw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lw in osg::LineWidth::LineWidth function");
		}
		const osg::LineWidth & lw=*lw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LineWidth::LineWidth function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::LineWidth(lw, copyop);
	}

	// osg::LineWidth::LineWidth(lua_Table * data, float width = 1.0f)
	static osg::LineWidth* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineWidth::LineWidth(lua_Table * data, float width = 1.0f) function, expected prototype:\nosg::LineWidth::LineWidth(lua_Table * data, float width = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float width=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;

		return new wrapper_osg_LineWidth(L,NULL, width);
	}

	// osg::LineWidth::LineWidth(lua_Table * data, const osg::LineWidth & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LineWidth* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineWidth::LineWidth(lua_Table * data, const osg::LineWidth & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LineWidth::LineWidth(lua_Table * data, const osg::LineWidth & lw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::LineWidth* lw_ptr=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,2));
		if( !lw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lw in osg::LineWidth::LineWidth function");
		}
		const osg::LineWidth & lw=*lw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LineWidth::LineWidth function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_LineWidth(L,NULL, lw, copyop);
	}

	// Overload binder for osg::LineWidth::LineWidth
	static osg::LineWidth* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function LineWidth, cannot match any of the overloads for function LineWidth:\n  LineWidth(float)\n  LineWidth(const osg::LineWidth &, const osg::CopyOp &)\n  LineWidth(lua_Table *, float)\n  LineWidth(lua_Table *, const osg::LineWidth &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LineWidth::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LineWidth::cloneType() const function, expected prototype:\nosg::Object * osg::LineWidth::cloneType() const\nClass arguments details:\n");
		}


		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LineWidth::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LineWidth::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LineWidth::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::LineWidth::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LineWidth::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LineWidth::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LineWidth::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineWidth::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LineWidth::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineWidth::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LineWidth::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LineWidth::libraryName() const function, expected prototype:\nconst char * osg::LineWidth::libraryName() const\nClass arguments details:\n");
		}


		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LineWidth::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LineWidth::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LineWidth::className() const function, expected prototype:\nconst char * osg::LineWidth::className() const\nClass arguments details:\n");
		}


		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LineWidth::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::LineWidth::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::LineWidth::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::LineWidth::getType() const\nClass arguments details:\n");
		}


		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::LineWidth::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::LineWidth::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::LineWidth::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::LineWidth::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::LineWidth::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::LineWidth::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LineWidth::setWidth(float width)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LineWidth::setWidth(float width) function, expected prototype:\nvoid osg::LineWidth::setWidth(float width)\nClass arguments details:\n");
		}

		float width=(float)lua_tonumber(L,2);

		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LineWidth::setWidth(float)");
		}
		self->setWidth(width);

		return 0;
	}

	// float osg::LineWidth::getWidth() const
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::LineWidth::getWidth() const function, expected prototype:\nfloat osg::LineWidth::getWidth() const\nClass arguments details:\n");
		}


		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::LineWidth::getWidth() const");
		}
		float lret = self->getWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LineWidth::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LineWidth::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::LineWidth::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LineWidth::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::LineWidth* self=dynamic_cast< osg::LineWidth* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LineWidth::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::LineWidth* LunaTraits< osg::LineWidth >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LineWidth::_bind_ctor(L);
}

void LunaTraits< osg::LineWidth >::_bind_dtor(osg::LineWidth* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LineWidth >::className[] = "LineWidth";
const char LunaTraits< osg::LineWidth >::fullName[] = "osg::LineWidth";
const char LunaTraits< osg::LineWidth >::moduleName[] = "osg";
const char* LunaTraits< osg::LineWidth >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::LineWidth >::hash = 62240280;
const int LunaTraits< osg::LineWidth >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LineWidth >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LineWidth::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LineWidth::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LineWidth::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_LineWidth::_bind_libraryName},
	{"className", &luna_wrapper_osg_LineWidth::_bind_className},
	{"getType", &luna_wrapper_osg_LineWidth::_bind_getType},
	{"compare", &luna_wrapper_osg_LineWidth::_bind_compare},
	{"setWidth", &luna_wrapper_osg_LineWidth::_bind_setWidth},
	{"getWidth", &luna_wrapper_osg_LineWidth::_bind_getWidth},
	{"apply", &luna_wrapper_osg_LineWidth::_bind_apply},
	{"__eq", &luna_wrapper_osg_LineWidth::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LineWidth >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LineWidth::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LineWidth >::enumValues[] = {
	{0,0}
};


