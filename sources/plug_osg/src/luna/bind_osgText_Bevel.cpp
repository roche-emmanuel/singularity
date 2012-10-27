#include <plug_common.h>

class luna_wrapper_osgText_Bevel {
public:
	typedef Luna< osgText::Bevel > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgText::Bevel* ptr= dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Bevel >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_setBevelThickness(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBevelThickness(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flatBevel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_roundedBevel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_roundedBevel2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,78061823) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osgText::Bevel::Bevel()
	static osgText::Bevel* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Bevel::Bevel() function, expected prototype:\nosgText::Bevel::Bevel()\nClass arguments details:\n");
		}


		return new osgText::Bevel();
	}

	// osgText::Bevel::Bevel(const osgText::Bevel & bevel, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Bevel* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Bevel::Bevel(const osgText::Bevel & bevel, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Bevel::Bevel(const osgText::Bevel & bevel, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgText::Bevel* bevel_ptr=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if( !bevel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bevel in osgText::Bevel::Bevel function");
		}
		const osgText::Bevel & bevel=*bevel_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Bevel::Bevel function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgText::Bevel(bevel, copyop);
	}

	// Overload binder for osgText::Bevel::Bevel
	static osgText::Bevel* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Bevel, cannot match any of the overloads for function Bevel:\n  Bevel()\n  Bevel(const osgText::Bevel &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::Bevel::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Bevel::cloneType() const function, expected prototype:\nosg::Object * osgText::Bevel::cloneType() const\nClass arguments details:\n");
		}


		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Bevel::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Bevel::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Bevel::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgText::Bevel::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Bevel::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Bevel::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Bevel::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Bevel::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Bevel::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Bevel::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Bevel::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Bevel::libraryName() const function, expected prototype:\nconst char * osgText::Bevel::libraryName() const\nClass arguments details:\n");
		}


		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Bevel::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Bevel::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Bevel::className() const function, expected prototype:\nconst char * osgText::Bevel::className() const\nClass arguments details:\n");
		}


		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Bevel::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::Bevel::setBevelThickness(float thickness)
	static int _bind_setBevelThickness(lua_State *L) {
		if (!_lg_typecheck_setBevelThickness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::setBevelThickness(float thickness) function, expected prototype:\nvoid osgText::Bevel::setBevelThickness(float thickness)\nClass arguments details:\n");
		}

		float thickness=(float)lua_tonumber(L,2);

		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Bevel::setBevelThickness(float)");
		}
		self->setBevelThickness(thickness);

		return 0;
	}

	// float osgText::Bevel::getBevelThickness() const
	static int _bind_getBevelThickness(lua_State *L) {
		if (!_lg_typecheck_getBevelThickness(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Bevel::getBevelThickness() const function, expected prototype:\nfloat osgText::Bevel::getBevelThickness() const\nClass arguments details:\n");
		}


		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Bevel::getBevelThickness() const");
		}
		float lret = self->getBevelThickness();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Bevel::flatBevel(float width = 0.25f)
	static int _bind_flatBevel(lua_State *L) {
		if (!_lg_typecheck_flatBevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::flatBevel(float width = 0.25f) function, expected prototype:\nvoid osgText::Bevel::flatBevel(float width = 0.25f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float width=luatop>1 ? (float)lua_tonumber(L,2) : 0.25f;

		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Bevel::flatBevel(float)");
		}
		self->flatBevel(width);

		return 0;
	}

	// void osgText::Bevel::roundedBevel(float width = 0.5f, unsigned int numSteps = 10)
	static int _bind_roundedBevel(lua_State *L) {
		if (!_lg_typecheck_roundedBevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::roundedBevel(float width = 0.5f, unsigned int numSteps = 10) function, expected prototype:\nvoid osgText::Bevel::roundedBevel(float width = 0.5f, unsigned int numSteps = 10)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float width=luatop>1 ? (float)lua_tonumber(L,2) : 0.5f;
		unsigned int numSteps=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 10;

		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Bevel::roundedBevel(float, unsigned int)");
		}
		self->roundedBevel(width, numSteps);

		return 0;
	}

	// void osgText::Bevel::roundedBevel2(float width = 0.5f, unsigned int numSteps = 10)
	static int _bind_roundedBevel2(lua_State *L) {
		if (!_lg_typecheck_roundedBevel2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::roundedBevel2(float width = 0.5f, unsigned int numSteps = 10) function, expected prototype:\nvoid osgText::Bevel::roundedBevel2(float width = 0.5f, unsigned int numSteps = 10)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float width=luatop>1 ? (float)lua_tonumber(L,2) : 0.5f;
		unsigned int numSteps=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 10;

		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Bevel::roundedBevel2(float, unsigned int)");
		}
		self->roundedBevel2(width, numSteps);

		return 0;
	}

	// void osgText::Bevel::setVertices(const osgText::Bevel::Vertices & vertices)
	static int _bind_setVertices(lua_State *L) {
		if (!_lg_typecheck_setVertices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Bevel::setVertices(const osgText::Bevel::Vertices & vertices) function, expected prototype:\nvoid osgText::Bevel::setVertices(const osgText::Bevel::Vertices & vertices)\nClass arguments details:\narg 1 ID = 78061823\n");
		}

		const osgText::Bevel::Vertices* vertices_ptr=(Luna< osgText::Bevel::Vertices >::check(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in osgText::Bevel::setVertices function");
		}
		const osgText::Bevel::Vertices & vertices=*vertices_ptr;

		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Bevel::setVertices(const osgText::Bevel::Vertices &)");
		}
		self->setVertices(vertices);

		return 0;
	}

	// osgText::Bevel::Vertices & osgText::Bevel::getVertices()
	static int _bind_getVertices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertices_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Bevel::Vertices & osgText::Bevel::getVertices() function, expected prototype:\nosgText::Bevel::Vertices & osgText::Bevel::getVertices()\nClass arguments details:\n");
		}


		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Bevel::Vertices & osgText::Bevel::getVertices()");
		}
		const osgText::Bevel::Vertices* lret = &self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Bevel::Vertices >::push(L,lret,false);

		return 1;
	}

	// const osgText::Bevel::Vertices & osgText::Bevel::getVertices() const
	static int _bind_getVertices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertices_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Bevel::Vertices & osgText::Bevel::getVertices() const function, expected prototype:\nconst osgText::Bevel::Vertices & osgText::Bevel::getVertices() const\nClass arguments details:\n");
		}


		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Bevel::Vertices & osgText::Bevel::getVertices() const");
		}
		const osgText::Bevel::Vertices* lret = &self->getVertices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Bevel::Vertices >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Bevel::getVertices
	static int _bind_getVertices(lua_State *L) {
		if (_lg_typecheck_getVertices_overload_1(L)) return _bind_getVertices_overload_1(L);
		if (_lg_typecheck_getVertices_overload_2(L)) return _bind_getVertices_overload_2(L);

		luaL_error(L, "error in function getVertices, cannot match any of the overloads for function getVertices:\n  getVertices()\n  getVertices()\n");
		return 0;
	}


	// Operator binds:
	// bool osgText::Bevel::operator==(const osgText::Bevel & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Bevel::operator==(const osgText::Bevel & rhs) const function, expected prototype:\nbool osgText::Bevel::operator==(const osgText::Bevel & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgText::Bevel* rhs_ptr=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgText::Bevel::operator== function");
		}
		const osgText::Bevel & rhs=*rhs_ptr;

		osgText::Bevel* self=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Bevel::operator==(const osgText::Bevel &) const");
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgText::Bevel* LunaTraits< osgText::Bevel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Bevel::_bind_ctor(L);
}

void LunaTraits< osgText::Bevel >::_bind_dtor(osgText::Bevel* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Bevel >::className[] = "Bevel";
const char LunaTraits< osgText::Bevel >::fullName[] = "osgText::Bevel";
const char LunaTraits< osgText::Bevel >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Bevel >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgText::Bevel >::hash = 1343651;
const int LunaTraits< osgText::Bevel >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Bevel >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_Bevel::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_Bevel::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_Bevel::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgText_Bevel::_bind_libraryName},
	{"className", &luna_wrapper_osgText_Bevel::_bind_className},
	{"setBevelThickness", &luna_wrapper_osgText_Bevel::_bind_setBevelThickness},
	{"getBevelThickness", &luna_wrapper_osgText_Bevel::_bind_getBevelThickness},
	{"flatBevel", &luna_wrapper_osgText_Bevel::_bind_flatBevel},
	{"roundedBevel", &luna_wrapper_osgText_Bevel::_bind_roundedBevel},
	{"roundedBevel2", &luna_wrapper_osgText_Bevel::_bind_roundedBevel2},
	{"setVertices", &luna_wrapper_osgText_Bevel::_bind_setVertices},
	{"getVertices", &luna_wrapper_osgText_Bevel::_bind_getVertices},
	{"__eq", &luna_wrapper_osgText_Bevel::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Bevel >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Bevel::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Bevel >::enumValues[] = {
	{0,0}
};


