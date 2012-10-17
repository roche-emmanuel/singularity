#include <plug_common.h>

class luna_wrapper_osgParticle_ModularProgram {
public:
	typedef Luna< osgParticle::ModularProgram > luna_t;

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
		osgParticle::ModularProgram* ptr= dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ModularProgram >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_numOperators(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addOperator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOperator_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOperator_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOperator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ModularProgram::ModularProgram()
	static osgParticle::ModularProgram* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ModularProgram::ModularProgram() function, expected prototype:\nosgParticle::ModularProgram::ModularProgram()\nClass arguments details:\n");
		}


		return new osgParticle::ModularProgram();
	}

	// osgParticle::ModularProgram::ModularProgram(const osgParticle::ModularProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ModularProgram* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ModularProgram::ModularProgram(const osgParticle::ModularProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ModularProgram::ModularProgram(const osgParticle::ModularProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ModularProgram* copy_ptr=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ModularProgram::ModularProgram function");
		}
		const osgParticle::ModularProgram & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularProgram::ModularProgram function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ModularProgram(copy, copyop);
	}

	// Overload binder for osgParticle::ModularProgram::ModularProgram
	static osgParticle::ModularProgram* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ModularProgram, cannot match any of the overloads for function ModularProgram:\n  ModularProgram()\n  ModularProgram(const osgParticle::ModularProgram &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ModularProgram::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularProgram::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ModularProgram::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularProgram::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ModularProgram::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularProgram::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ModularProgram::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularProgram::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularProgram::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ModularProgram::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ModularProgram::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ModularProgram::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ModularProgram::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ModularProgram::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularProgram::className() const function, expected prototype:\nconst char * osgParticle::ModularProgram::className() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularProgram::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ModularProgram::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularProgram::libraryName() const function, expected prototype:\nconst char * osgParticle::ModularProgram::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularProgram::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ModularProgram::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ModularProgram::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ModularProgram::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// int osgParticle::ModularProgram::numOperators() const
	static int _bind_numOperators(lua_State *L) {
		if (!_lg_typecheck_numOperators(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::ModularProgram::numOperators() const function, expected prototype:\nint osgParticle::ModularProgram::numOperators() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::ModularProgram::numOperators() const");
		}
		int lret = self->numOperators();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ModularProgram::addOperator(osgParticle::Operator * o)
	static int _bind_addOperator(lua_State *L) {
		if (!_lg_typecheck_addOperator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::addOperator(osgParticle::Operator * o) function, expected prototype:\nvoid osgParticle::ModularProgram::addOperator(osgParticle::Operator * o)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::Operator* o=dynamic_cast< osgParticle::Operator* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::addOperator(osgParticle::Operator *)");
		}
		self->addOperator(o);

		return 0;
	}

	// osgParticle::Operator * osgParticle::ModularProgram::getOperator(int i)
	static int _bind_getOperator_overload_1(lua_State *L) {
		if (!_lg_typecheck_getOperator_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::Operator * osgParticle::ModularProgram::getOperator(int i) function, expected prototype:\nosgParticle::Operator * osgParticle::ModularProgram::getOperator(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::Operator * osgParticle::ModularProgram::getOperator(int)");
		}
		osgParticle::Operator * lret = self->getOperator(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Operator >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::Operator * osgParticle::ModularProgram::getOperator(int i) const
	static int _bind_getOperator_overload_2(lua_State *L) {
		if (!_lg_typecheck_getOperator_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::Operator * osgParticle::ModularProgram::getOperator(int i) const function, expected prototype:\nconst osgParticle::Operator * osgParticle::ModularProgram::getOperator(int i) const\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::Operator * osgParticle::ModularProgram::getOperator(int) const");
		}
		const osgParticle::Operator * lret = self->getOperator(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::Operator >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularProgram::getOperator
	static int _bind_getOperator(lua_State *L) {
		if (_lg_typecheck_getOperator_overload_1(L)) return _bind_getOperator_overload_1(L);
		if (_lg_typecheck_getOperator_overload_2(L)) return _bind_getOperator_overload_2(L);

		luaL_error(L, "error in function getOperator, cannot match any of the overloads for function getOperator:\n  getOperator(int)\n  getOperator(int)\n");
		return 0;
	}

	// void osgParticle::ModularProgram::removeOperator(int i)
	static int _bind_removeOperator(lua_State *L) {
		if (!_lg_typecheck_removeOperator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::removeOperator(int i) function, expected prototype:\nvoid osgParticle::ModularProgram::removeOperator(int i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgParticle::ModularProgram* self=dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::removeOperator(int)");
		}
		self->removeOperator(i);

		return 0;
	}


	// Operator binds:

};

osgParticle::ModularProgram* LunaTraits< osgParticle::ModularProgram >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ModularProgram::_bind_ctor(L);
}

void LunaTraits< osgParticle::ModularProgram >::_bind_dtor(osgParticle::ModularProgram* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ModularProgram >::className[] = "ModularProgram";
const char LunaTraits< osgParticle::ModularProgram >::fullName[] = "osgParticle::ModularProgram";
const char LunaTraits< osgParticle::ModularProgram >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ModularProgram >::parents[] = {"osgParticle.Program", 0};
const int LunaTraits< osgParticle::ModularProgram >::hash = 90286319;
const int LunaTraits< osgParticle::ModularProgram >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ModularProgram >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ModularProgram::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ModularProgram::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ModularProgram::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_ModularProgram::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_ModularProgram::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_ModularProgram::_bind_accept},
	{"numOperators", &luna_wrapper_osgParticle_ModularProgram::_bind_numOperators},
	{"addOperator", &luna_wrapper_osgParticle_ModularProgram::_bind_addOperator},
	{"getOperator", &luna_wrapper_osgParticle_ModularProgram::_bind_getOperator},
	{"removeOperator", &luna_wrapper_osgParticle_ModularProgram::_bind_removeOperator},
	{"__eq", &luna_wrapper_osgParticle_ModularProgram::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ModularProgram >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ModularProgram::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ModularProgram >::enumValues[] = {
	{0,0}
};


