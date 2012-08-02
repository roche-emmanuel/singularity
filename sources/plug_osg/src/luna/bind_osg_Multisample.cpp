#include <plug_common.h>

class luna_wrapper_osg_Multisample {
public:
	typedef Luna< osg::Multisample > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Multisample* ptr= dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Multisample >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setSampleCoverage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCoverage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoverage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInvert(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInvert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHint(lua_State *L) {
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
	// osg::Multisample::Multisample()
	static osg::Multisample* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Multisample() function, expected prototype:\nosg::Multisample::Multisample()\nClass arguments details:\n");
		}


		return new osg::Multisample();
	}

	// osg::Multisample::Multisample(const osg::Multisample & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Multisample* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Multisample(const osg::Multisample & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Multisample::Multisample(const osg::Multisample & trans, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Multisample* trans_ptr=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if( !trans_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg trans in osg::Multisample::Multisample function");
		}
		const osg::Multisample & trans=*trans_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Multisample::Multisample function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Multisample(trans, copyop);
	}

	// Overload binder for osg::Multisample::Multisample
	static osg::Multisample* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Multisample, cannot match any of the overloads for function Multisample:\n  Multisample()\n  Multisample(const osg::Multisample &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Multisample::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Multisample::cloneType() const function, expected prototype:\nosg::Object * osg::Multisample::cloneType() const\nClass arguments details:\n");
		}


		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Multisample::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Multisample::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Multisample::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::Multisample::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Multisample::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Multisample::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Multisample::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Multisample::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Multisample::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Multisample::libraryName() const function, expected prototype:\nconst char * osg::Multisample::libraryName() const\nClass arguments details:\n");
		}


		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Multisample::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Multisample::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Multisample::className() const function, expected prototype:\nconst char * osg::Multisample::className() const\nClass arguments details:\n");
		}


		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Multisample::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Multisample::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Multisample::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Multisample::getType() const\nClass arguments details:\n");
		}


		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Multisample::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Multisample::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Multisample::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Multisample::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Multisample::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Multisample::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Multisample::setSampleCoverage(float coverage, bool invert)
	static int _bind_setSampleCoverage(lua_State *L) {
		if (!_lg_typecheck_setSampleCoverage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::setSampleCoverage(float coverage, bool invert) function, expected prototype:\nvoid osg::Multisample::setSampleCoverage(float coverage, bool invert)\nClass arguments details:\n");
		}

		float coverage=(float)lua_tonumber(L,2);
		bool invert=(bool)(lua_toboolean(L,3)==1);

		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::setSampleCoverage(float, bool)");
		}
		self->setSampleCoverage(coverage, invert);

		return 0;
	}

	// void osg::Multisample::setCoverage(float coverage)
	static int _bind_setCoverage(lua_State *L) {
		if (!_lg_typecheck_setCoverage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::setCoverage(float coverage) function, expected prototype:\nvoid osg::Multisample::setCoverage(float coverage)\nClass arguments details:\n");
		}

		float coverage=(float)lua_tonumber(L,2);

		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::setCoverage(float)");
		}
		self->setCoverage(coverage);

		return 0;
	}

	// float osg::Multisample::getCoverage() const
	static int _bind_getCoverage(lua_State *L) {
		if (!_lg_typecheck_getCoverage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Multisample::getCoverage() const function, expected prototype:\nfloat osg::Multisample::getCoverage() const\nClass arguments details:\n");
		}


		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Multisample::getCoverage() const");
		}
		float lret = self->getCoverage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Multisample::setInvert(bool invert)
	static int _bind_setInvert(lua_State *L) {
		if (!_lg_typecheck_setInvert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::setInvert(bool invert) function, expected prototype:\nvoid osg::Multisample::setInvert(bool invert)\nClass arguments details:\n");
		}

		bool invert=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::setInvert(bool)");
		}
		self->setInvert(invert);

		return 0;
	}

	// bool osg::Multisample::getInvert() const
	static int _bind_getInvert(lua_State *L) {
		if (!_lg_typecheck_getInvert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Multisample::getInvert() const function, expected prototype:\nbool osg::Multisample::getInvert() const\nClass arguments details:\n");
		}


		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Multisample::getInvert() const");
		}
		bool lret = self->getInvert();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Multisample::setHint(osg::Multisample::Mode mode)
	static int _bind_setHint(lua_State *L) {
		if (!_lg_typecheck_setHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::setHint(osg::Multisample::Mode mode) function, expected prototype:\nvoid osg::Multisample::setHint(osg::Multisample::Mode mode)\nClass arguments details:\n");
		}

		osg::Multisample::Mode mode=(osg::Multisample::Mode)lua_tointeger(L,2);

		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::setHint(osg::Multisample::Mode)");
		}
		self->setHint(mode);

		return 0;
	}

	// osg::Multisample::Mode osg::Multisample::getHint() const
	static int _bind_getHint(lua_State *L) {
		if (!_lg_typecheck_getHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Multisample::Mode osg::Multisample::getHint() const function, expected prototype:\nosg::Multisample::Mode osg::Multisample::getHint() const\nClass arguments details:\n");
		}


		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Multisample::Mode osg::Multisample::getHint() const");
		}
		osg::Multisample::Mode lret = self->getHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Multisample::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Multisample::apply(osg::State & ) const function, expected prototype:\nvoid osg::Multisample::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Multisample::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Multisample* self=dynamic_cast< osg::Multisample* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Multisample::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::Multisample::Extensions * osg::Multisample::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Multisample::Extensions * osg::Multisample::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::Multisample::Extensions * osg::Multisample::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::Multisample::Extensions * lret = osg::Multisample::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Multisample::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::Multisample::setExtensions(unsigned int contextID, osg::Multisample::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Multisample::setExtensions(unsigned int contextID, osg::Multisample::Extensions * extensions) function, expected prototype:\nstatic void osg::Multisample::setExtensions(unsigned int contextID, osg::Multisample::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::Multisample::Extensions* extensions=dynamic_cast< osg::Multisample::Extensions* >(Luna< osg::Referenced >::check(L,2));

		osg::Multisample::setExtensions(contextID, extensions);

		return 0;
	}


	// Operator binds:

};

osg::Multisample* LunaTraits< osg::Multisample >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Multisample::_bind_ctor(L);
}

void LunaTraits< osg::Multisample >::_bind_dtor(osg::Multisample* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Multisample >::className[] = "Multisample";
const char LunaTraits< osg::Multisample >::fullName[] = "osg::Multisample";
const char LunaTraits< osg::Multisample >::moduleName[] = "osg";
const char* LunaTraits< osg::Multisample >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Multisample >::hash = 23439217;
const int LunaTraits< osg::Multisample >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Multisample >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Multisample::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Multisample::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Multisample::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Multisample::_bind_libraryName},
	{"className", &luna_wrapper_osg_Multisample::_bind_className},
	{"getType", &luna_wrapper_osg_Multisample::_bind_getType},
	{"compare", &luna_wrapper_osg_Multisample::_bind_compare},
	{"setSampleCoverage", &luna_wrapper_osg_Multisample::_bind_setSampleCoverage},
	{"setCoverage", &luna_wrapper_osg_Multisample::_bind_setCoverage},
	{"getCoverage", &luna_wrapper_osg_Multisample::_bind_getCoverage},
	{"setInvert", &luna_wrapper_osg_Multisample::_bind_setInvert},
	{"getInvert", &luna_wrapper_osg_Multisample::_bind_getInvert},
	{"setHint", &luna_wrapper_osg_Multisample::_bind_setHint},
	{"getHint", &luna_wrapper_osg_Multisample::_bind_getHint},
	{"apply", &luna_wrapper_osg_Multisample::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_Multisample::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_Multisample::_bind_setExtensions},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Multisample >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Multisample::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Multisample >::enumValues[] = {
	{"FASTEST", osg::Multisample::FASTEST},
	{"NICEST", osg::Multisample::NICEST},
	{"DONT_CARE", osg::Multisample::DONT_CARE},
	{0,0}
};


