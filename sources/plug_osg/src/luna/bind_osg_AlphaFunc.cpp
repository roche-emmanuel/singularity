#include <plug_common.h>

class luna_wrapper_osg_AlphaFunc {
public:
	typedef Luna< osg::AlphaFunc > luna_t;

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
		osg::AlphaFunc* ptr= dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::AlphaFunc >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_setReferenceValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceValue(lua_State *L) {
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
	// osg::AlphaFunc::AlphaFunc()
	static osg::AlphaFunc* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::AlphaFunc() function, expected prototype:\nosg::AlphaFunc::AlphaFunc()\nClass arguments details:\n");
		}


		return new osg::AlphaFunc();
	}

	// osg::AlphaFunc::AlphaFunc(osg::AlphaFunc::ComparisonFunction func, float ref)
	static osg::AlphaFunc* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::AlphaFunc(osg::AlphaFunc::ComparisonFunction func, float ref) function, expected prototype:\nosg::AlphaFunc::AlphaFunc(osg::AlphaFunc::ComparisonFunction func, float ref)\nClass arguments details:\n");
		}

		osg::AlphaFunc::ComparisonFunction func=(osg::AlphaFunc::ComparisonFunction)lua_tointeger(L,1);
		float ref=(float)lua_tonumber(L,2);

		return new osg::AlphaFunc(func, ref);
	}

	// osg::AlphaFunc::AlphaFunc(const osg::AlphaFunc & af, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::AlphaFunc* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::AlphaFunc(const osg::AlphaFunc & af, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::AlphaFunc::AlphaFunc(const osg::AlphaFunc & af, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::AlphaFunc* af_ptr=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if( !af_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg af in osg::AlphaFunc::AlphaFunc function");
		}
		const osg::AlphaFunc & af=*af_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::AlphaFunc::AlphaFunc function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::AlphaFunc(af, copyop);
	}

	// Overload binder for osg::AlphaFunc::AlphaFunc
	static osg::AlphaFunc* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function AlphaFunc, cannot match any of the overloads for function AlphaFunc:\n  AlphaFunc()\n  AlphaFunc(osg::AlphaFunc::ComparisonFunction, float)\n  AlphaFunc(const osg::AlphaFunc &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::AlphaFunc::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AlphaFunc::cloneType() const function, expected prototype:\nosg::Object * osg::AlphaFunc::cloneType() const\nClass arguments details:\n");
		}


		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AlphaFunc::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::AlphaFunc::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::AlphaFunc::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::AlphaFunc::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::AlphaFunc::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::AlphaFunc::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AlphaFunc::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::AlphaFunc::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AlphaFunc::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::AlphaFunc::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AlphaFunc::libraryName() const function, expected prototype:\nconst char * osg::AlphaFunc::libraryName() const\nClass arguments details:\n");
		}


		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AlphaFunc::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::AlphaFunc::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::AlphaFunc::className() const function, expected prototype:\nconst char * osg::AlphaFunc::className() const\nClass arguments details:\n");
		}


		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::AlphaFunc::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::AlphaFunc::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::AlphaFunc::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::AlphaFunc::getType() const\nClass arguments details:\n");
		}


		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::AlphaFunc::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::AlphaFunc::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::AlphaFunc::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::AlphaFunc::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::AlphaFunc::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::AlphaFunc::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::AlphaFunc::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::AlphaFunc::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::AlphaFunc::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::AlphaFunc::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func, float ref)
	static int _bind_setFunction_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func, float ref) function, expected prototype:\nvoid osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func, float ref)\nClass arguments details:\n");
		}

		osg::AlphaFunc::ComparisonFunction func=(osg::AlphaFunc::ComparisonFunction)lua_tointeger(L,2);
		float ref=(float)lua_tonumber(L,3);

		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction, float)");
		}
		self->setFunction(func, ref);

		return 0;
	}

	// void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func)
	static int _bind_setFunction_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFunction_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func) function, expected prototype:\nvoid osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction func)\nClass arguments details:\n");
		}

		osg::AlphaFunc::ComparisonFunction func=(osg::AlphaFunc::ComparisonFunction)lua_tointeger(L,2);

		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::setFunction(osg::AlphaFunc::ComparisonFunction)");
		}
		self->setFunction(func);

		return 0;
	}

	// Overload binder for osg::AlphaFunc::setFunction
	static int _bind_setFunction(lua_State *L) {
		if (_lg_typecheck_setFunction_overload_1(L)) return _bind_setFunction_overload_1(L);
		if (_lg_typecheck_setFunction_overload_2(L)) return _bind_setFunction_overload_2(L);

		luaL_error(L, "error in function setFunction, cannot match any of the overloads for function setFunction:\n  setFunction(osg::AlphaFunc::ComparisonFunction, float)\n  setFunction(osg::AlphaFunc::ComparisonFunction)\n");
		return 0;
	}

	// osg::AlphaFunc::ComparisonFunction osg::AlphaFunc::getFunction() const
	static int _bind_getFunction(lua_State *L) {
		if (!_lg_typecheck_getFunction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::AlphaFunc::ComparisonFunction osg::AlphaFunc::getFunction() const function, expected prototype:\nosg::AlphaFunc::ComparisonFunction osg::AlphaFunc::getFunction() const\nClass arguments details:\n");
		}


		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::AlphaFunc::ComparisonFunction osg::AlphaFunc::getFunction() const");
		}
		osg::AlphaFunc::ComparisonFunction lret = self->getFunction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AlphaFunc::setReferenceValue(float value)
	static int _bind_setReferenceValue(lua_State *L) {
		if (!_lg_typecheck_setReferenceValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::setReferenceValue(float value) function, expected prototype:\nvoid osg::AlphaFunc::setReferenceValue(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::setReferenceValue(float)");
		}
		self->setReferenceValue(value);

		return 0;
	}

	// float osg::AlphaFunc::getReferenceValue() const
	static int _bind_getReferenceValue(lua_State *L) {
		if (!_lg_typecheck_getReferenceValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::AlphaFunc::getReferenceValue() const function, expected prototype:\nfloat osg::AlphaFunc::getReferenceValue() const\nClass arguments details:\n");
		}


		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::AlphaFunc::getReferenceValue() const");
		}
		float lret = self->getReferenceValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::AlphaFunc::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::AlphaFunc::apply(osg::State & ) const function, expected prototype:\nvoid osg::AlphaFunc::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::AlphaFunc::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::AlphaFunc* self=dynamic_cast< osg::AlphaFunc* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::AlphaFunc::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::AlphaFunc* LunaTraits< osg::AlphaFunc >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_AlphaFunc::_bind_ctor(L);
}

void LunaTraits< osg::AlphaFunc >::_bind_dtor(osg::AlphaFunc* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::AlphaFunc >::className[] = "AlphaFunc";
const char LunaTraits< osg::AlphaFunc >::fullName[] = "osg::AlphaFunc";
const char LunaTraits< osg::AlphaFunc >::moduleName[] = "osg";
const char* LunaTraits< osg::AlphaFunc >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::AlphaFunc >::hash = 68800325;
const int LunaTraits< osg::AlphaFunc >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::AlphaFunc >::methods[] = {
	{"cloneType", &luna_wrapper_osg_AlphaFunc::_bind_cloneType},
	{"clone", &luna_wrapper_osg_AlphaFunc::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_AlphaFunc::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_AlphaFunc::_bind_libraryName},
	{"className", &luna_wrapper_osg_AlphaFunc::_bind_className},
	{"getType", &luna_wrapper_osg_AlphaFunc::_bind_getType},
	{"compare", &luna_wrapper_osg_AlphaFunc::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_AlphaFunc::_bind_getModeUsage},
	{"setFunction", &luna_wrapper_osg_AlphaFunc::_bind_setFunction},
	{"getFunction", &luna_wrapper_osg_AlphaFunc::_bind_getFunction},
	{"setReferenceValue", &luna_wrapper_osg_AlphaFunc::_bind_setReferenceValue},
	{"getReferenceValue", &luna_wrapper_osg_AlphaFunc::_bind_getReferenceValue},
	{"apply", &luna_wrapper_osg_AlphaFunc::_bind_apply},
	{"__eq", &luna_wrapper_osg_AlphaFunc::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::AlphaFunc >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_AlphaFunc::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::AlphaFunc >::enumValues[] = {
	{"NEVER", osg::AlphaFunc::NEVER},
	{"LESS", osg::AlphaFunc::LESS},
	{"EQUAL", osg::AlphaFunc::EQUAL},
	{"LEQUAL", osg::AlphaFunc::LEQUAL},
	{"GREATER", osg::AlphaFunc::GREATER},
	{"NOTEQUAL", osg::AlphaFunc::NOTEQUAL},
	{"GEQUAL", osg::AlphaFunc::GEQUAL},
	{"ALWAYS", osg::AlphaFunc::ALWAYS},
	{0,0}
};


