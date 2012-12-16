#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_VertexProgram.h>

class luna_wrapper_osg_VertexProgram {
public:
	typedef Luna< osg::VertexProgram > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osg::VertexProgram* ptr= dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
		osg::VertexProgram* ptr= luna_caster< osg::Referenced, osg::VertexProgram >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::VertexProgram >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexProgramID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProgramLocalParameter(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77412943) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalParameters_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalParameters_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMatrices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,89639670) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMatrices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMatrices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_dirtyVertexProgramObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_deleteVertexProgramObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedVertexProgramObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedVertexProgramObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::VertexProgram::VertexProgram()
	static osg::VertexProgram* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexProgram::VertexProgram() function, expected prototype:\nosg::VertexProgram::VertexProgram()\nClass arguments details:\n");
		}


		return new osg::VertexProgram();
	}

	// osg::VertexProgram::VertexProgram(const osg::VertexProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::VertexProgram* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexProgram::VertexProgram(const osg::VertexProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::VertexProgram::VertexProgram(const osg::VertexProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::VertexProgram* vp_ptr=(Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1));
		if( !vp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vp in osg::VertexProgram::VertexProgram function");
		}
		const osg::VertexProgram & vp=*vp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::VertexProgram::VertexProgram function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::VertexProgram(vp, copyop);
	}

	// osg::VertexProgram::VertexProgram(lua_Table * data)
	static osg::VertexProgram* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexProgram::VertexProgram(lua_Table * data) function, expected prototype:\nosg::VertexProgram::VertexProgram(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_VertexProgram(L,NULL);
	}

	// osg::VertexProgram::VertexProgram(lua_Table * data, const osg::VertexProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::VertexProgram* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexProgram::VertexProgram(lua_Table * data, const osg::VertexProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::VertexProgram::VertexProgram(lua_Table * data, const osg::VertexProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::VertexProgram* vp_ptr=(Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,2));
		if( !vp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vp in osg::VertexProgram::VertexProgram function");
		}
		const osg::VertexProgram & vp=*vp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::VertexProgram::VertexProgram function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_VertexProgram(L,NULL, vp, copyop);
	}

	// Overload binder for osg::VertexProgram::VertexProgram
	static osg::VertexProgram* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function VertexProgram, cannot match any of the overloads for function VertexProgram:\n  VertexProgram()\n  VertexProgram(const osg::VertexProgram &, const osg::CopyOp &)\n  VertexProgram(lua_Table *)\n  VertexProgram(lua_Table *, const osg::VertexProgram &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::VertexProgram::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexProgram::cloneType() const function, expected prototype:\nosg::Object * osg::VertexProgram::cloneType() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexProgram::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::VertexProgram::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexProgram::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::VertexProgram::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexProgram::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::VertexProgram::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::VertexProgram::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::VertexProgram::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::VertexProgram::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::VertexProgram::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::VertexProgram::libraryName() const function, expected prototype:\nconst char * osg::VertexProgram::libraryName() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::VertexProgram::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::VertexProgram::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::VertexProgram::className() const function, expected prototype:\nconst char * osg::VertexProgram::className() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::VertexProgram::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::VertexProgram::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::VertexProgram::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::VertexProgram::getType() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::VertexProgram::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::VertexProgram::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::VertexProgram::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::VertexProgram::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::VertexProgram::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::VertexProgram::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::VertexProgram::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::VertexProgram::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::VertexProgram::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::VertexProgram::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int & osg::VertexProgram::getVertexProgramID(unsigned int contextID) const
	static int _bind_getVertexProgramID(lua_State *L) {
		if (!_lg_typecheck_getVertexProgramID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::VertexProgram::getVertexProgramID(unsigned int contextID) const function, expected prototype:\nunsigned int & osg::VertexProgram::getVertexProgramID(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::VertexProgram::getVertexProgramID(unsigned int) const");
		}
		unsigned int & lret = self->getVertexProgramID(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::VertexProgram::setVertexProgram(const char * program)
	static int _bind_setVertexProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertexProgram_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::setVertexProgram(const char * program) function, expected prototype:\nvoid osg::VertexProgram::setVertexProgram(const char * program)\nClass arguments details:\n");
		}

		const char * program=(const char *)lua_tostring(L,2);

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::setVertexProgram(const char *)");
		}
		self->setVertexProgram(program);

		return 0;
	}

	// void osg::VertexProgram::setVertexProgram(const std::string & program)
	static int _bind_setVertexProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertexProgram_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::setVertexProgram(const std::string & program) function, expected prototype:\nvoid osg::VertexProgram::setVertexProgram(const std::string & program)\nClass arguments details:\n");
		}

		std::string program(lua_tostring(L,2),lua_objlen(L,2));

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::setVertexProgram(const std::string &)");
		}
		self->setVertexProgram(program);

		return 0;
	}

	// Overload binder for osg::VertexProgram::setVertexProgram
	static int _bind_setVertexProgram(lua_State *L) {
		if (_lg_typecheck_setVertexProgram_overload_1(L)) return _bind_setVertexProgram_overload_1(L);
		if (_lg_typecheck_setVertexProgram_overload_2(L)) return _bind_setVertexProgram_overload_2(L);

		luaL_error(L, "error in function setVertexProgram, cannot match any of the overloads for function setVertexProgram:\n  setVertexProgram(const char *)\n  setVertexProgram(const std::string &)\n");
		return 0;
	}

	// const std::string & osg::VertexProgram::getVertexProgram() const
	static int _bind_getVertexProgram(lua_State *L) {
		if (!_lg_typecheck_getVertexProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::VertexProgram::getVertexProgram() const function, expected prototype:\nconst std::string & osg::VertexProgram::getVertexProgram() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::VertexProgram::getVertexProgram() const");
		}
		const std::string & lret = self->getVertexProgram();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::VertexProgram::setProgramLocalParameter(const unsigned int index, const osg::Vec4f & p)
	static int _bind_setProgramLocalParameter(lua_State *L) {
		if (!_lg_typecheck_setProgramLocalParameter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::setProgramLocalParameter(const unsigned int index, const osg::Vec4f & p) function, expected prototype:\nvoid osg::VertexProgram::setProgramLocalParameter(const unsigned int index, const osg::Vec4f & p)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4f* p_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osg::VertexProgram::setProgramLocalParameter function");
		}
		const osg::Vec4f & p=*p_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::setProgramLocalParameter(const unsigned int, const osg::Vec4f &)");
		}
		self->setProgramLocalParameter(index, p);

		return 0;
	}

	// void osg::VertexProgram::setLocalParameters(const osg::VertexProgram::LocalParamList & lpl)
	static int _bind_setLocalParameters(lua_State *L) {
		if (!_lg_typecheck_setLocalParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::setLocalParameters(const osg::VertexProgram::LocalParamList & lpl) function, expected prototype:\nvoid osg::VertexProgram::setLocalParameters(const osg::VertexProgram::LocalParamList & lpl)\nClass arguments details:\narg 1 ID = 77412943\n");
		}

		const osg::VertexProgram::LocalParamList* lpl_ptr=(Luna< osg::VertexProgram::LocalParamList >::check(L,2));
		if( !lpl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lpl in osg::VertexProgram::setLocalParameters function");
		}
		const osg::VertexProgram::LocalParamList & lpl=*lpl_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::setLocalParameters(const osg::VertexProgram::LocalParamList &)");
		}
		self->setLocalParameters(lpl);

		return 0;
	}

	// osg::VertexProgram::LocalParamList & osg::VertexProgram::getLocalParameters()
	static int _bind_getLocalParameters_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLocalParameters_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexProgram::LocalParamList & osg::VertexProgram::getLocalParameters() function, expected prototype:\nosg::VertexProgram::LocalParamList & osg::VertexProgram::getLocalParameters()\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::VertexProgram::LocalParamList & osg::VertexProgram::getLocalParameters()");
		}
		const osg::VertexProgram::LocalParamList* lret = &self->getLocalParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexProgram::LocalParamList >::push(L,lret,false);

		return 1;
	}

	// const osg::VertexProgram::LocalParamList & osg::VertexProgram::getLocalParameters() const
	static int _bind_getLocalParameters_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLocalParameters_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::VertexProgram::LocalParamList & osg::VertexProgram::getLocalParameters() const function, expected prototype:\nconst osg::VertexProgram::LocalParamList & osg::VertexProgram::getLocalParameters() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::VertexProgram::LocalParamList & osg::VertexProgram::getLocalParameters() const");
		}
		const osg::VertexProgram::LocalParamList* lret = &self->getLocalParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexProgram::LocalParamList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::VertexProgram::getLocalParameters
	static int _bind_getLocalParameters(lua_State *L) {
		if (_lg_typecheck_getLocalParameters_overload_1(L)) return _bind_getLocalParameters_overload_1(L);
		if (_lg_typecheck_getLocalParameters_overload_2(L)) return _bind_getLocalParameters_overload_2(L);

		luaL_error(L, "error in function getLocalParameters, cannot match any of the overloads for function getLocalParameters:\n  getLocalParameters()\n  getLocalParameters()\n");
		return 0;
	}

	// void osg::VertexProgram::setMatrix(const unsigned int mode, const osg::Matrixd & matrix)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::setMatrix(const unsigned int mode, const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::VertexProgram::setMatrix(const unsigned int mode, const osg::Matrixd & matrix)\nClass arguments details:\narg 2 ID = 18903838\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::VertexProgram::setMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::setMatrix(const unsigned int, const osg::Matrixd &)");
		}
		self->setMatrix(mode, matrix);

		return 0;
	}

	// void osg::VertexProgram::setMatrices(const osg::VertexProgram::MatrixList & matrices)
	static int _bind_setMatrices(lua_State *L) {
		if (!_lg_typecheck_setMatrices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::setMatrices(const osg::VertexProgram::MatrixList & matrices) function, expected prototype:\nvoid osg::VertexProgram::setMatrices(const osg::VertexProgram::MatrixList & matrices)\nClass arguments details:\narg 1 ID = 89639670\n");
		}

		const osg::VertexProgram::MatrixList* matrices_ptr=(Luna< osg::VertexProgram::MatrixList >::check(L,2));
		if( !matrices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrices in osg::VertexProgram::setMatrices function");
		}
		const osg::VertexProgram::MatrixList & matrices=*matrices_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::setMatrices(const osg::VertexProgram::MatrixList &)");
		}
		self->setMatrices(matrices);

		return 0;
	}

	// osg::VertexProgram::MatrixList & osg::VertexProgram::getMatrices()
	static int _bind_getMatrices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrices_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::VertexProgram::MatrixList & osg::VertexProgram::getMatrices() function, expected prototype:\nosg::VertexProgram::MatrixList & osg::VertexProgram::getMatrices()\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::VertexProgram::MatrixList & osg::VertexProgram::getMatrices()");
		}
		const osg::VertexProgram::MatrixList* lret = &self->getMatrices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexProgram::MatrixList >::push(L,lret,false);

		return 1;
	}

	// const osg::VertexProgram::MatrixList & osg::VertexProgram::getMatrices() const
	static int _bind_getMatrices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrices_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::VertexProgram::MatrixList & osg::VertexProgram::getMatrices() const function, expected prototype:\nconst osg::VertexProgram::MatrixList & osg::VertexProgram::getMatrices() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::VertexProgram::MatrixList & osg::VertexProgram::getMatrices() const");
		}
		const osg::VertexProgram::MatrixList* lret = &self->getMatrices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexProgram::MatrixList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::VertexProgram::getMatrices
	static int _bind_getMatrices(lua_State *L) {
		if (_lg_typecheck_getMatrices_overload_1(L)) return _bind_getMatrices_overload_1(L);
		if (_lg_typecheck_getMatrices_overload_2(L)) return _bind_getMatrices_overload_2(L);

		luaL_error(L, "error in function getMatrices, cannot match any of the overloads for function getMatrices:\n  getMatrices()\n  getMatrices()\n");
		return 0;
	}

	// void osg::VertexProgram::dirtyVertexProgramObject()
	static int _bind_dirtyVertexProgramObject(lua_State *L) {
		if (!_lg_typecheck_dirtyVertexProgramObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::dirtyVertexProgramObject() function, expected prototype:\nvoid osg::VertexProgram::dirtyVertexProgramObject()\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::dirtyVertexProgramObject()");
		}
		self->dirtyVertexProgramObject();

		return 0;
	}

	// void osg::VertexProgram::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::VertexProgram::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::VertexProgram::compileGLObjects(osg::State & arg1) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::VertexProgram::compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::compileGLObjects(osg::State &) const");
		}
		self->compileGLObjects(_arg1);

		return 0;
	}

	// void osg::VertexProgram::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::VertexProgram::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// static void osg::VertexProgram::deleteVertexProgramObject(unsigned int contextID, unsigned int handle)
	static int _bind_deleteVertexProgramObject(lua_State *L) {
		if (!_lg_typecheck_deleteVertexProgramObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::VertexProgram::deleteVertexProgramObject(unsigned int contextID, unsigned int handle) function, expected prototype:\nstatic void osg::VertexProgram::deleteVertexProgramObject(unsigned int contextID, unsigned int handle)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int handle=(unsigned int)lua_tointeger(L,2);

		osg::VertexProgram::deleteVertexProgramObject(contextID, handle);

		return 0;
	}

	// static void osg::VertexProgram::flushDeletedVertexProgramObjects(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedVertexProgramObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedVertexProgramObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::VertexProgram::flushDeletedVertexProgramObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::VertexProgram::flushDeletedVertexProgramObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::VertexProgram::flushDeletedVertexProgramObjects(contextID, currentTime, availableTime);

		return 0;
	}

	// static void osg::VertexProgram::discardDeletedVertexProgramObjects(unsigned int contextID)
	static int _bind_discardDeletedVertexProgramObjects(lua_State *L) {
		if (!_lg_typecheck_discardDeletedVertexProgramObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::VertexProgram::discardDeletedVertexProgramObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::VertexProgram::discardDeletedVertexProgramObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::VertexProgram::discardDeletedVertexProgramObjects(contextID);

		return 0;
	}

	// static osg::VertexProgram::Extensions * osg::VertexProgram::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::VertexProgram::Extensions * osg::VertexProgram::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::VertexProgram::Extensions * osg::VertexProgram::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::VertexProgram::Extensions * lret = osg::VertexProgram::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::VertexProgram::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::VertexProgram::setExtensions(unsigned int contextID, osg::VertexProgram::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::VertexProgram::setExtensions(unsigned int contextID, osg::VertexProgram::Extensions * extensions) function, expected prototype:\nstatic void osg::VertexProgram::setExtensions(unsigned int contextID, osg::VertexProgram::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::VertexProgram::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::VertexProgram::Extensions >(L,2));

		osg::VertexProgram::setExtensions(contextID, extensions);

		return 0;
	}

	// void osg::VertexProgram::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::base_setName(const std::string & name) function, expected prototype:\nvoid osg::VertexProgram::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::base_setName(const std::string &)");
		}
		self->VertexProgram::setName(name);

		return 0;
	}

	// void osg::VertexProgram::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::base_computeDataVariance() function, expected prototype:\nvoid osg::VertexProgram::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::base_computeDataVariance()");
		}
		self->VertexProgram::computeDataVariance();

		return 0;
	}

	// void osg::VertexProgram::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::VertexProgram::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::base_setUserData(osg::Referenced *)");
		}
		self->VertexProgram::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::VertexProgram::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::VertexProgram::base_getUserData() function, expected prototype:\nosg::Referenced * osg::VertexProgram::base_getUserData()\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::VertexProgram::base_getUserData()");
		}
		osg::Referenced * lret = self->VertexProgram::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::VertexProgram::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::VertexProgram::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::VertexProgram::base_getUserData() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::VertexProgram::base_getUserData() const");
		}
		const osg::Referenced * lret = self->VertexProgram::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::VertexProgram::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::VertexProgram::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::VertexProgram::base_asTexture() function, expected prototype:\nosg::Texture * osg::VertexProgram::base_asTexture()\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::VertexProgram::base_asTexture()");
		}
		osg::Texture * lret = self->VertexProgram::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::VertexProgram::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::VertexProgram::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::VertexProgram::base_asTexture() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::VertexProgram::base_asTexture() const");
		}
		const osg::Texture * lret = self->VertexProgram::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::VertexProgram::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::VertexProgram::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::VertexProgram::base_getMember() const function, expected prototype:\nunsigned int osg::VertexProgram::base_getMember() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::VertexProgram::base_getMember() const");
		}
		unsigned int lret = self->VertexProgram::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::VertexProgram::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::VertexProgram::base_isTextureAttribute() const function, expected prototype:\nbool osg::VertexProgram::base_isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::VertexProgram::base_isTextureAttribute() const");
		}
		bool lret = self->VertexProgram::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::VertexProgram::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::VertexProgram::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::VertexProgram::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::VertexProgram::base_checkValidityOfAssociatedModes(osg::State &) const");
		}
		bool lret = self->VertexProgram::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Object * osg::VertexProgram::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexProgram::base_cloneType() const function, expected prototype:\nosg::Object * osg::VertexProgram::base_cloneType() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexProgram::base_cloneType() const");
		}
		osg::Object * lret = self->VertexProgram::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::VertexProgram::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexProgram::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::VertexProgram::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexProgram::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->VertexProgram::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::VertexProgram::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::VertexProgram::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::VertexProgram::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::VertexProgram::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->VertexProgram::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::VertexProgram::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::VertexProgram::base_libraryName() const function, expected prototype:\nconst char * osg::VertexProgram::base_libraryName() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::VertexProgram::base_libraryName() const");
		}
		const char * lret = self->VertexProgram::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::VertexProgram::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::VertexProgram::base_className() const function, expected prototype:\nconst char * osg::VertexProgram::base_className() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::VertexProgram::base_className() const");
		}
		const char * lret = self->VertexProgram::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::VertexProgram::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::VertexProgram::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::VertexProgram::base_getType() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::VertexProgram::base_getType() const");
		}
		osg::StateAttribute::Type lret = self->VertexProgram::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::VertexProgram::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::VertexProgram::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::VertexProgram::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::VertexProgram::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::VertexProgram::base_compare(const osg::StateAttribute &) const");
		}
		int lret = self->VertexProgram::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::VertexProgram::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::VertexProgram::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::VertexProgram::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::VertexProgram::base_getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->VertexProgram::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::VertexProgram::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::VertexProgram::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::base_apply(osg::State &) const");
		}
		self->VertexProgram::apply(_arg1);

		return 0;
	}

	// void osg::VertexProgram::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::VertexProgram::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::base_compileGLObjects(osg::State &) const");
		}
		self->VertexProgram::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::VertexProgram::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::VertexProgram::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::VertexProgram* self=Luna< osg::Referenced >::checkSubType< osg::VertexProgram >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::base_releaseGLObjects(osg::State *) const");
		}
		self->VertexProgram::releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osg::VertexProgram* LunaTraits< osg::VertexProgram >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_VertexProgram::_bind_ctor(L);
}

void LunaTraits< osg::VertexProgram >::_bind_dtor(osg::VertexProgram* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::VertexProgram >::className[] = "VertexProgram";
const char LunaTraits< osg::VertexProgram >::fullName[] = "osg::VertexProgram";
const char LunaTraits< osg::VertexProgram >::moduleName[] = "osg";
const char* LunaTraits< osg::VertexProgram >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::VertexProgram >::hash = 51995062;
const int LunaTraits< osg::VertexProgram >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::VertexProgram >::methods[] = {
	{"cloneType", &luna_wrapper_osg_VertexProgram::_bind_cloneType},
	{"clone", &luna_wrapper_osg_VertexProgram::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_VertexProgram::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_VertexProgram::_bind_libraryName},
	{"className", &luna_wrapper_osg_VertexProgram::_bind_className},
	{"getType", &luna_wrapper_osg_VertexProgram::_bind_getType},
	{"compare", &luna_wrapper_osg_VertexProgram::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_VertexProgram::_bind_getModeUsage},
	{"getVertexProgramID", &luna_wrapper_osg_VertexProgram::_bind_getVertexProgramID},
	{"setVertexProgram", &luna_wrapper_osg_VertexProgram::_bind_setVertexProgram},
	{"getVertexProgram", &luna_wrapper_osg_VertexProgram::_bind_getVertexProgram},
	{"setProgramLocalParameter", &luna_wrapper_osg_VertexProgram::_bind_setProgramLocalParameter},
	{"setLocalParameters", &luna_wrapper_osg_VertexProgram::_bind_setLocalParameters},
	{"getLocalParameters", &luna_wrapper_osg_VertexProgram::_bind_getLocalParameters},
	{"setMatrix", &luna_wrapper_osg_VertexProgram::_bind_setMatrix},
	{"setMatrices", &luna_wrapper_osg_VertexProgram::_bind_setMatrices},
	{"getMatrices", &luna_wrapper_osg_VertexProgram::_bind_getMatrices},
	{"dirtyVertexProgramObject", &luna_wrapper_osg_VertexProgram::_bind_dirtyVertexProgramObject},
	{"apply", &luna_wrapper_osg_VertexProgram::_bind_apply},
	{"compileGLObjects", &luna_wrapper_osg_VertexProgram::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_VertexProgram::_bind_releaseGLObjects},
	{"deleteVertexProgramObject", &luna_wrapper_osg_VertexProgram::_bind_deleteVertexProgramObject},
	{"flushDeletedVertexProgramObjects", &luna_wrapper_osg_VertexProgram::_bind_flushDeletedVertexProgramObjects},
	{"discardDeletedVertexProgramObjects", &luna_wrapper_osg_VertexProgram::_bind_discardDeletedVertexProgramObjects},
	{"getExtensions", &luna_wrapper_osg_VertexProgram::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_VertexProgram::_bind_setExtensions},
	{"base_setName", &luna_wrapper_osg_VertexProgram::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_VertexProgram::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_VertexProgram::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_VertexProgram::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_VertexProgram::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_VertexProgram::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_VertexProgram::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_VertexProgram::_bind_base_checkValidityOfAssociatedModes},
	{"base_cloneType", &luna_wrapper_osg_VertexProgram::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_VertexProgram::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_VertexProgram::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_VertexProgram::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_VertexProgram::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_VertexProgram::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_VertexProgram::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_VertexProgram::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_VertexProgram::_bind_base_apply},
	{"base_compileGLObjects", &luna_wrapper_osg_VertexProgram::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_VertexProgram::_bind_base_releaseGLObjects},
	{"__eq", &luna_wrapper_osg_VertexProgram::_bind___eq},
	{"getTable", &luna_wrapper_osg_VertexProgram::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VertexProgram >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_VertexProgram::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VertexProgram >::enumValues[] = {
	{0,0}
};


