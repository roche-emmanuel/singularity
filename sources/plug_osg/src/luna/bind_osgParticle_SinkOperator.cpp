#include <plug_common.h>

class luna_wrapper_osgParticle_SinkOperator {
public:
	typedef Luna< osgParticle::SinkOperator > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::SinkOperator* ptr= dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::SinkOperator >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setSinkTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSinkTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSinkStrategy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSinkStrategy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_beginOperate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::SinkOperator::SinkOperator()
	static osgParticle::SinkOperator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkOperator() function, expected prototype:\nosgParticle::SinkOperator::SinkOperator()\nClass arguments details:\n");
		}


		return new osgParticle::SinkOperator();
	}

	// osgParticle::SinkOperator::SinkOperator(const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::SinkOperator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkOperator(const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::SinkOperator::SinkOperator(const osgParticle::SinkOperator & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::SinkOperator* copy_ptr=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::SinkOperator::SinkOperator function");
		}
		const osgParticle::SinkOperator & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::SinkOperator::SinkOperator function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::SinkOperator(copy, copyop);
	}

	// Overload binder for osgParticle::SinkOperator::SinkOperator
	static osgParticle::SinkOperator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SinkOperator, cannot match any of the overloads for function SinkOperator:\n  SinkOperator()\n  SinkOperator(const osgParticle::SinkOperator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::SinkOperator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SinkOperator::cloneType() const function, expected prototype:\nosg::Object * osgParticle::SinkOperator::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SinkOperator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::SinkOperator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::SinkOperator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgParticle::SinkOperator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::SinkOperator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::SinkOperator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::SinkOperator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::SinkOperator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::SinkOperator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::SinkOperator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::SinkOperator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SinkOperator::libraryName() const function, expected prototype:\nconst char * osgParticle::SinkOperator::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::SinkOperator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::SinkOperator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::SinkOperator::className() const function, expected prototype:\nconst char * osgParticle::SinkOperator::className() const\nClass arguments details:\n");
		}


		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::SinkOperator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::SinkOperator::setSinkTarget(osgParticle::SinkOperator::SinkTarget so)
	static int _bind_setSinkTarget(lua_State *L) {
		if (!_lg_typecheck_setSinkTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::setSinkTarget(osgParticle::SinkOperator::SinkTarget so) function, expected prototype:\nvoid osgParticle::SinkOperator::setSinkTarget(osgParticle::SinkOperator::SinkTarget so)\nClass arguments details:\n");
		}

		osgParticle::SinkOperator::SinkTarget so=(osgParticle::SinkOperator::SinkTarget)lua_tointeger(L,2);

		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::setSinkTarget(osgParticle::SinkOperator::SinkTarget)");
		}
		self->setSinkTarget(so);

		return 0;
	}

	// osgParticle::SinkOperator::SinkTarget osgParticle::SinkOperator::getSinkTarget() const
	static int _bind_getSinkTarget(lua_State *L) {
		if (!_lg_typecheck_getSinkTarget(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkTarget osgParticle::SinkOperator::getSinkTarget() const function, expected prototype:\nosgParticle::SinkOperator::SinkTarget osgParticle::SinkOperator::getSinkTarget() const\nClass arguments details:\n");
		}


		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::SinkOperator::SinkTarget osgParticle::SinkOperator::getSinkTarget() const");
		}
		osgParticle::SinkOperator::SinkTarget lret = self->getSinkTarget();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::SinkOperator::setSinkStrategy(osgParticle::SinkOperator::SinkStrategy ss)
	static int _bind_setSinkStrategy(lua_State *L) {
		if (!_lg_typecheck_setSinkStrategy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::setSinkStrategy(osgParticle::SinkOperator::SinkStrategy ss) function, expected prototype:\nvoid osgParticle::SinkOperator::setSinkStrategy(osgParticle::SinkOperator::SinkStrategy ss)\nClass arguments details:\n");
		}

		osgParticle::SinkOperator::SinkStrategy ss=(osgParticle::SinkOperator::SinkStrategy)lua_tointeger(L,2);

		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::setSinkStrategy(osgParticle::SinkOperator::SinkStrategy)");
		}
		self->setSinkStrategy(ss);

		return 0;
	}

	// osgParticle::SinkOperator::SinkStrategy osgParticle::SinkOperator::getSinkStrategy() const
	static int _bind_getSinkStrategy(lua_State *L) {
		if (!_lg_typecheck_getSinkStrategy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::SinkOperator::SinkStrategy osgParticle::SinkOperator::getSinkStrategy() const function, expected prototype:\nosgParticle::SinkOperator::SinkStrategy osgParticle::SinkOperator::getSinkStrategy() const\nClass arguments details:\n");
		}


		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::SinkOperator::SinkStrategy osgParticle::SinkOperator::getSinkStrategy() const");
		}
		osgParticle::SinkOperator::SinkStrategy lret = self->getSinkStrategy();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::SinkOperator::beginOperate(osgParticle::Program * prg)
	static int _bind_beginOperate(lua_State *L) {
		if (!_lg_typecheck_beginOperate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::SinkOperator::beginOperate(osgParticle::Program * prg) function, expected prototype:\nvoid osgParticle::SinkOperator::beginOperate(osgParticle::Program * prg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Program* prg=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::SinkOperator* self=dynamic_cast< osgParticle::SinkOperator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::SinkOperator::beginOperate(osgParticle::Program *)");
		}
		self->beginOperate(prg);

		return 0;
	}


	// Operator binds:

};

osgParticle::SinkOperator* LunaTraits< osgParticle::SinkOperator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_SinkOperator::_bind_ctor(L);
}

void LunaTraits< osgParticle::SinkOperator >::_bind_dtor(osgParticle::SinkOperator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::SinkOperator >::className[] = "SinkOperator";
const char LunaTraits< osgParticle::SinkOperator >::fullName[] = "osgParticle::SinkOperator";
const char LunaTraits< osgParticle::SinkOperator >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::SinkOperator >::parents[] = {"osgParticle.DomainOperator", 0};
const int LunaTraits< osgParticle::SinkOperator >::hash = 50198331;
const int LunaTraits< osgParticle::SinkOperator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::SinkOperator >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_SinkOperator::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_SinkOperator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_SinkOperator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgParticle_SinkOperator::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_SinkOperator::_bind_className},
	{"setSinkTarget", &luna_wrapper_osgParticle_SinkOperator::_bind_setSinkTarget},
	{"getSinkTarget", &luna_wrapper_osgParticle_SinkOperator::_bind_getSinkTarget},
	{"setSinkStrategy", &luna_wrapper_osgParticle_SinkOperator::_bind_setSinkStrategy},
	{"getSinkStrategy", &luna_wrapper_osgParticle_SinkOperator::_bind_getSinkStrategy},
	{"beginOperate", &luna_wrapper_osgParticle_SinkOperator::_bind_beginOperate},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::SinkOperator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_SinkOperator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::SinkOperator >::enumValues[] = {
	{"SINK_POSITION", osgParticle::SinkOperator::SINK_POSITION},
	{"SINK_VELOCITY", osgParticle::SinkOperator::SINK_VELOCITY},
	{"SINK_ANGULAR_VELOCITY", osgParticle::SinkOperator::SINK_ANGULAR_VELOCITY},
	{"SINK_INSIDE", osgParticle::SinkOperator::SINK_INSIDE},
	{"SINK_OUTSIDE", osgParticle::SinkOperator::SINK_OUTSIDE},
	{0,0}
};


