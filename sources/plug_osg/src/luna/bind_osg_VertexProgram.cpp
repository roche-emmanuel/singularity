#include <plug_common.h>

class luna_wrapper_osg_VertexProgram {
public:
	typedef Luna< osg::VertexProgram > luna_t;

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
		osg::VertexProgram* ptr= dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		const osg::VertexProgram* vp_ptr=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

	// Overload binder for osg::VertexProgram::VertexProgram
	static osg::VertexProgram* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function VertexProgram, cannot match any of the overloads for function VertexProgram:\n  VertexProgram()\n  VertexProgram(const osg::VertexProgram &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::VertexProgram::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexProgram::cloneType() const function, expected prototype:\nosg::Object * osg::VertexProgram::cloneType() const\nClass arguments details:\n");
		}


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::VertexProgram::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::VertexProgram::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::VertexProgram::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::VertexProgram::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::VertexProgram::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::VertexProgram::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::VertexProgram::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::VertexProgram::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::VertexProgram::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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


		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::dirtyVertexProgramObject()");
		}
		self->dirtyVertexProgramObject();

		return 0;
	}

	// void osg::VertexProgram::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::apply(osg::State & ) const function, expected prototype:\nvoid osg::VertexProgram::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::VertexProgram::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::VertexProgram::compileGLObjects(osg::State & ) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::VertexProgram::compileGLObjects(osg::State & ) const function, expected prototype:\nvoid osg::VertexProgram::compileGLObjects(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::VertexProgram::compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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

		osg::State* state=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::VertexProgram* self=dynamic_cast< osg::VertexProgram* >(Luna< osg::Referenced >::check(L,1));
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
		osg::VertexProgram::Extensions* extensions=dynamic_cast< osg::VertexProgram::Extensions* >(Luna< osg::Referenced >::check(L,2));

		osg::VertexProgram::setExtensions(contextID, extensions);

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
	{"__eq", &luna_wrapper_osg_VertexProgram::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VertexProgram >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_VertexProgram::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VertexProgram >::enumValues[] = {
	{0,0}
};


