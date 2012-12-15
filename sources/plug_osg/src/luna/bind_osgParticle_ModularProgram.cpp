#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ModularProgram.h>

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
		//osgParticle::ModularProgram* ptr= dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1));
		osgParticle::ModularProgram* ptr= luna_caster< osg::Referenced, osgParticle::ModularProgram >::cast(Luna< osg::Referenced >::check(L,1));
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
		if( (!dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgParticle::ModularProgram* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTransform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asSwitch_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ascend(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

		const osgParticle::ModularProgram* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1));
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

	// osgParticle::ModularProgram::ModularProgram(lua_Table * data)
	static osgParticle::ModularProgram* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ModularProgram::ModularProgram(lua_Table * data) function, expected prototype:\nosgParticle::ModularProgram::ModularProgram(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgParticle_ModularProgram(L,NULL);
	}

	// osgParticle::ModularProgram::ModularProgram(lua_Table * data, const osgParticle::ModularProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ModularProgram* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ModularProgram::ModularProgram(lua_Table * data, const osgParticle::ModularProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ModularProgram::ModularProgram(lua_Table * data, const osgParticle::ModularProgram & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ModularProgram* copy_ptr=(Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ModularProgram::ModularProgram function");
		}
		const osgParticle::ModularProgram & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularProgram::ModularProgram function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ModularProgram(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ModularProgram::ModularProgram
	static osgParticle::ModularProgram* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ModularProgram, cannot match any of the overloads for function ModularProgram:\n  ModularProgram()\n  ModularProgram(const osgParticle::ModularProgram &, const osg::CopyOp &)\n  ModularProgram(lua_Table *)\n  ModularProgram(lua_Table *, const osgParticle::ModularProgram &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ModularProgram::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularProgram::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ModularProgram::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ModularProgram::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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

		osgParticle::Operator* o=(Luna< osg::Referenced >::checkSubType< osgParticle::Operator >(L,2));

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
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

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::removeOperator(int)");
		}
		self->removeOperator(i);

		return 0;
	}

	// void osgParticle::ModularProgram::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::base_setName(const std::string & name) function, expected prototype:\nvoid osgParticle::ModularProgram::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::base_setName(const std::string &)");
		}
		self->ModularProgram::setName(name);

		return 0;
	}

	// void osgParticle::ModularProgram::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::base_computeDataVariance() function, expected prototype:\nvoid osgParticle::ModularProgram::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::base_computeDataVariance()");
		}
		self->ModularProgram::computeDataVariance();

		return 0;
	}

	// void osgParticle::ModularProgram::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgParticle::ModularProgram::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::base_setUserData(osg::Referenced *)");
		}
		self->ModularProgram::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgParticle::ModularProgram::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgParticle::ModularProgram::base_getUserData() function, expected prototype:\nosg::Referenced * osgParticle::ModularProgram::base_getUserData()\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgParticle::ModularProgram::base_getUserData()");
		}
		osg::Referenced * lret = self->ModularProgram::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgParticle::ModularProgram::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgParticle::ModularProgram::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgParticle::ModularProgram::base_getUserData() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgParticle::ModularProgram::base_getUserData() const");
		}
		const osg::Referenced * lret = self->ModularProgram::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularProgram::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Group * osgParticle::ModularProgram::base_asGroup()
	static int _bind_base_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Group * osgParticle::ModularProgram::base_asGroup() function, expected prototype:\nosg::Group * osgParticle::ModularProgram::base_asGroup()\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Group * osgParticle::ModularProgram::base_asGroup()");
		}
		osg::Group * lret = self->ModularProgram::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osgParticle::ModularProgram::base_asGroup() const
	static int _bind_base_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGroup_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Group * osgParticle::ModularProgram::base_asGroup() const function, expected prototype:\nconst osg::Group * osgParticle::ModularProgram::base_asGroup() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Group * osgParticle::ModularProgram::base_asGroup() const");
		}
		const osg::Group * lret = self->ModularProgram::asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularProgram::base_asGroup
	static int _bind_base_asGroup(lua_State *L) {
		if (_lg_typecheck_base_asGroup_overload_1(L)) return _bind_base_asGroup_overload_1(L);
		if (_lg_typecheck_base_asGroup_overload_2(L)) return _bind_base_asGroup_overload_2(L);

		luaL_error(L, "error in function base_asGroup, cannot match any of the overloads for function base_asGroup:\n  base_asGroup()\n  base_asGroup()\n");
		return 0;
	}

	// osg::Transform * osgParticle::ModularProgram::base_asTransform()
	static int _bind_base_asTransform_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Transform * osgParticle::ModularProgram::base_asTransform() function, expected prototype:\nosg::Transform * osgParticle::ModularProgram::base_asTransform()\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Transform * osgParticle::ModularProgram::base_asTransform()");
		}
		osg::Transform * lret = self->ModularProgram::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// const osg::Transform * osgParticle::ModularProgram::base_asTransform() const
	static int _bind_base_asTransform_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTransform_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Transform * osgParticle::ModularProgram::base_asTransform() const function, expected prototype:\nconst osg::Transform * osgParticle::ModularProgram::base_asTransform() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Transform * osgParticle::ModularProgram::base_asTransform() const");
		}
		const osg::Transform * lret = self->ModularProgram::asTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Transform >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularProgram::base_asTransform
	static int _bind_base_asTransform(lua_State *L) {
		if (_lg_typecheck_base_asTransform_overload_1(L)) return _bind_base_asTransform_overload_1(L);
		if (_lg_typecheck_base_asTransform_overload_2(L)) return _bind_base_asTransform_overload_2(L);

		luaL_error(L, "error in function base_asTransform, cannot match any of the overloads for function base_asTransform:\n  base_asTransform()\n  base_asTransform()\n");
		return 0;
	}

	// osg::Switch * osgParticle::ModularProgram::base_asSwitch()
	static int _bind_base_asSwitch_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Switch * osgParticle::ModularProgram::base_asSwitch() function, expected prototype:\nosg::Switch * osgParticle::ModularProgram::base_asSwitch()\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Switch * osgParticle::ModularProgram::base_asSwitch()");
		}
		osg::Switch * lret = self->ModularProgram::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// const osg::Switch * osgParticle::ModularProgram::base_asSwitch() const
	static int _bind_base_asSwitch_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asSwitch_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Switch * osgParticle::ModularProgram::base_asSwitch() const function, expected prototype:\nconst osg::Switch * osgParticle::ModularProgram::base_asSwitch() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Switch * osgParticle::ModularProgram::base_asSwitch() const");
		}
		const osg::Switch * lret = self->ModularProgram::asSwitch();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Switch >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularProgram::base_asSwitch
	static int _bind_base_asSwitch(lua_State *L) {
		if (_lg_typecheck_base_asSwitch_overload_1(L)) return _bind_base_asSwitch_overload_1(L);
		if (_lg_typecheck_base_asSwitch_overload_2(L)) return _bind_base_asSwitch_overload_2(L);

		luaL_error(L, "error in function base_asSwitch, cannot match any of the overloads for function base_asSwitch:\n  base_asSwitch()\n  base_asSwitch()\n");
		return 0;
	}

	// osg::Geode * osgParticle::ModularProgram::base_asGeode()
	static int _bind_base_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geode * osgParticle::ModularProgram::base_asGeode() function, expected prototype:\nosg::Geode * osgParticle::ModularProgram::base_asGeode()\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geode * osgParticle::ModularProgram::base_asGeode()");
		}
		osg::Geode * lret = self->ModularProgram::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osgParticle::ModularProgram::base_asGeode() const
	static int _bind_base_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Geode * osgParticle::ModularProgram::base_asGeode() const function, expected prototype:\nconst osg::Geode * osgParticle::ModularProgram::base_asGeode() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Geode * osgParticle::ModularProgram::base_asGeode() const");
		}
		const osg::Geode * lret = self->ModularProgram::asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ModularProgram::base_asGeode
	static int _bind_base_asGeode(lua_State *L) {
		if (_lg_typecheck_base_asGeode_overload_1(L)) return _bind_base_asGeode_overload_1(L);
		if (_lg_typecheck_base_asGeode_overload_2(L)) return _bind_base_asGeode_overload_2(L);

		luaL_error(L, "error in function base_asGeode, cannot match any of the overloads for function base_asGeode:\n  base_asGeode()\n  base_asGeode()\n");
		return 0;
	}

	// void osgParticle::ModularProgram::base_ascend(osg::NodeVisitor & nv)
	static int _bind_base_ascend(lua_State *L) {
		if (!_lg_typecheck_base_ascend(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::base_ascend(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ModularProgram::base_ascend(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ModularProgram::base_ascend function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::base_ascend(osg::NodeVisitor &)");
		}
		self->ModularProgram::ascend(nv);

		return 0;
	}

	// void osgParticle::ModularProgram::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgParticle::ModularProgram::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::base_releaseGLObjects(osg::State *) const");
		}
		self->ModularProgram::releaseGLObjects(_arg1);

		return 0;
	}

	// void osgParticle::ModularProgram::base_traverse(osg::NodeVisitor & arg1)
	static int _bind_base_traverse(lua_State *L) {
		if (!_lg_typecheck_base_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::base_traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::ModularProgram::base_traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ModularProgram::base_traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::base_traverse(osg::NodeVisitor &)");
		}
		self->ModularProgram::traverse(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::ModularProgram::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::ModularProgram::base_computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::ModularProgram::base_computeBound() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::ModularProgram::base_computeBound() const");
		}
		osg::BoundingSphered stack_lret = self->ModularProgram::computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}

	// osg::Object * osgParticle::ModularProgram::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularProgram::base_cloneType() const function, expected prototype:\nosg::Object * osgParticle::ModularProgram::base_cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularProgram::base_cloneType() const");
		}
		osg::Object * lret = self->ModularProgram::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ModularProgram::base_clone(const osg::CopyOp & copyop) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ModularProgram::base_clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ModularProgram::base_clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ModularProgram::base_clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ModularProgram::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->ModularProgram::clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ModularProgram::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ModularProgram::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ModularProgram::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ModularProgram::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->ModularProgram::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ModularProgram::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularProgram::base_className() const function, expected prototype:\nconst char * osgParticle::ModularProgram::base_className() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularProgram::base_className() const");
		}
		const char * lret = self->ModularProgram::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ModularProgram::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ModularProgram::base_libraryName() const function, expected prototype:\nconst char * osgParticle::ModularProgram::base_libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ModularProgram::base_libraryName() const");
		}
		const char * lret = self->ModularProgram::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ModularProgram::base_accept(osg::NodeVisitor & nv)
	static int _bind_base_accept(lua_State *L) {
		if (!_lg_typecheck_base_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ModularProgram::base_accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ModularProgram::base_accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ModularProgram::base_accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ModularProgram* self=Luna< osg::Referenced >::checkSubType< osgParticle::ModularProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ModularProgram::base_accept(osg::NodeVisitor &)");
		}
		self->ModularProgram::accept(nv);

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
	{"base_setName", &luna_wrapper_osgParticle_ModularProgram::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgParticle_ModularProgram::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgParticle_ModularProgram::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgParticle_ModularProgram::_bind_base_getUserData},
	{"base_asGroup", &luna_wrapper_osgParticle_ModularProgram::_bind_base_asGroup},
	{"base_asTransform", &luna_wrapper_osgParticle_ModularProgram::_bind_base_asTransform},
	{"base_asSwitch", &luna_wrapper_osgParticle_ModularProgram::_bind_base_asSwitch},
	{"base_asGeode", &luna_wrapper_osgParticle_ModularProgram::_bind_base_asGeode},
	{"base_ascend", &luna_wrapper_osgParticle_ModularProgram::_bind_base_ascend},
	{"base_releaseGLObjects", &luna_wrapper_osgParticle_ModularProgram::_bind_base_releaseGLObjects},
	{"base_traverse", &luna_wrapper_osgParticle_ModularProgram::_bind_base_traverse},
	{"base_computeBound", &luna_wrapper_osgParticle_ModularProgram::_bind_base_computeBound},
	{"base_cloneType", &luna_wrapper_osgParticle_ModularProgram::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgParticle_ModularProgram::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgParticle_ModularProgram::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgParticle_ModularProgram::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgParticle_ModularProgram::_bind_base_libraryName},
	{"base_accept", &luna_wrapper_osgParticle_ModularProgram::_bind_base_accept},
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


