#include <plug_common.h>

class luna_wrapper_osg_FragmentProgram {
public:
	typedef Luna< osg::FragmentProgram > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::FragmentProgram* ptr= dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::FragmentProgram >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_getFragmentProgramID(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFragmentProgram_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFragmentProgram_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFragmentProgram(lua_State *L) {
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

		if( !Luna<void>::has_uniqueid(L,2,13846292) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,4745759) ) return false;
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

	inline static bool _lg_typecheck_dirtyFragmentProgramObject(lua_State *L) {
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

	inline static bool _lg_typecheck_deleteFragmentProgramObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_flushDeletedFragmentProgramObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_discardDeletedFragmentProgramObjects(lua_State *L) {
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
	// osg::FragmentProgram::FragmentProgram()
	static osg::FragmentProgram* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::FragmentProgram() function, expected prototype:\nosg::FragmentProgram::FragmentProgram()\nClass arguments details:\n");
		}


		return new osg::FragmentProgram();
	}

	// osg::FragmentProgram::FragmentProgram(const osg::FragmentProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::FragmentProgram* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::FragmentProgram(const osg::FragmentProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::FragmentProgram::FragmentProgram(const osg::FragmentProgram & vp, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::FragmentProgram* vp_ptr=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if( !vp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vp in osg::FragmentProgram::FragmentProgram function");
		}
		const osg::FragmentProgram & vp=*vp_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::FragmentProgram::FragmentProgram function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::FragmentProgram(vp, copyop);
	}

	// Overload binder for osg::FragmentProgram::FragmentProgram
	static osg::FragmentProgram* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FragmentProgram, cannot match any of the overloads for function FragmentProgram:\n  FragmentProgram()\n  FragmentProgram(const osg::FragmentProgram &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::FragmentProgram::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FragmentProgram::cloneType() const function, expected prototype:\nosg::Object * osg::FragmentProgram::cloneType() const\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::FragmentProgram::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::FragmentProgram::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::FragmentProgram::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osg::FragmentProgram::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::FragmentProgram::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::FragmentProgram::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FragmentProgram::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::FragmentProgram::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FragmentProgram::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::FragmentProgram::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::FragmentProgram::libraryName() const function, expected prototype:\nconst char * osg::FragmentProgram::libraryName() const\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::FragmentProgram::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::FragmentProgram::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::FragmentProgram::className() const function, expected prototype:\nconst char * osg::FragmentProgram::className() const\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::FragmentProgram::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::FragmentProgram::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::FragmentProgram::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::FragmentProgram::getType() const\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::FragmentProgram::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::FragmentProgram::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::FragmentProgram::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::FragmentProgram::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=dynamic_cast< osg::StateAttribute* >(Luna< osg::Referenced >::check(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::FragmentProgram::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::FragmentProgram::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::FragmentProgram::getModeUsage(osg::StateAttribute::ModeUsage & ) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::FragmentProgram::getModeUsage(osg::StateAttribute::ModeUsage & ) const function, expected prototype:\nbool osg::FragmentProgram::getModeUsage(osg::StateAttribute::ModeUsage & ) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::FragmentProgram::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int & osg::FragmentProgram::getFragmentProgramID(unsigned int contextID) const
	static int _bind_getFragmentProgramID(lua_State *L) {
		if (!_lg_typecheck_getFragmentProgramID(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int & osg::FragmentProgram::getFragmentProgramID(unsigned int contextID) const function, expected prototype:\nunsigned int & osg::FragmentProgram::getFragmentProgramID(unsigned int contextID) const\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int & osg::FragmentProgram::getFragmentProgramID(unsigned int) const");
		}
		unsigned int & lret = self->getFragmentProgramID(contextID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::FragmentProgram::setFragmentProgram(const char * program)
	static int _bind_setFragmentProgram_overload_1(lua_State *L) {
		if (!_lg_typecheck_setFragmentProgram_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setFragmentProgram(const char * program) function, expected prototype:\nvoid osg::FragmentProgram::setFragmentProgram(const char * program)\nClass arguments details:\n");
		}

		const char * program=(const char *)lua_tostring(L,2);

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setFragmentProgram(const char *)");
		}
		self->setFragmentProgram(program);

		return 0;
	}

	// void osg::FragmentProgram::setFragmentProgram(const std::string & program)
	static int _bind_setFragmentProgram_overload_2(lua_State *L) {
		if (!_lg_typecheck_setFragmentProgram_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setFragmentProgram(const std::string & program) function, expected prototype:\nvoid osg::FragmentProgram::setFragmentProgram(const std::string & program)\nClass arguments details:\n");
		}

		std::string program(lua_tostring(L,2),lua_objlen(L,2));

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setFragmentProgram(const std::string &)");
		}
		self->setFragmentProgram(program);

		return 0;
	}

	// Overload binder for osg::FragmentProgram::setFragmentProgram
	static int _bind_setFragmentProgram(lua_State *L) {
		if (_lg_typecheck_setFragmentProgram_overload_1(L)) return _bind_setFragmentProgram_overload_1(L);
		if (_lg_typecheck_setFragmentProgram_overload_2(L)) return _bind_setFragmentProgram_overload_2(L);

		luaL_error(L, "error in function setFragmentProgram, cannot match any of the overloads for function setFragmentProgram:\n  setFragmentProgram(const char *)\n  setFragmentProgram(const std::string &)\n");
		return 0;
	}

	// const std::string & osg::FragmentProgram::getFragmentProgram() const
	static int _bind_getFragmentProgram(lua_State *L) {
		if (!_lg_typecheck_getFragmentProgram(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::FragmentProgram::getFragmentProgram() const function, expected prototype:\nconst std::string & osg::FragmentProgram::getFragmentProgram() const\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::FragmentProgram::getFragmentProgram() const");
		}
		const std::string & lret = self->getFragmentProgram();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::FragmentProgram::setProgramLocalParameter(const unsigned int index, const osg::Vec4f & p)
	static int _bind_setProgramLocalParameter(lua_State *L) {
		if (!_lg_typecheck_setProgramLocalParameter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setProgramLocalParameter(const unsigned int index, const osg::Vec4f & p) function, expected prototype:\nvoid osg::FragmentProgram::setProgramLocalParameter(const unsigned int index, const osg::Vec4f & p)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4f* p_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in osg::FragmentProgram::setProgramLocalParameter function");
		}
		const osg::Vec4f & p=*p_ptr;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setProgramLocalParameter(const unsigned int, const osg::Vec4f &)");
		}
		self->setProgramLocalParameter(index, p);

		return 0;
	}

	// void osg::FragmentProgram::setLocalParameters(const osg::FragmentProgram::LocalParamList & lpl)
	static int _bind_setLocalParameters(lua_State *L) {
		if (!_lg_typecheck_setLocalParameters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setLocalParameters(const osg::FragmentProgram::LocalParamList & lpl) function, expected prototype:\nvoid osg::FragmentProgram::setLocalParameters(const osg::FragmentProgram::LocalParamList & lpl)\nClass arguments details:\narg 1 ID = 13846292\n");
		}

		const osg::FragmentProgram::LocalParamList* lpl_ptr=(Luna< osg::FragmentProgram::LocalParamList >::check(L,2));
		if( !lpl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lpl in osg::FragmentProgram::setLocalParameters function");
		}
		const osg::FragmentProgram::LocalParamList & lpl=*lpl_ptr;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setLocalParameters(const osg::FragmentProgram::LocalParamList &)");
		}
		self->setLocalParameters(lpl);

		return 0;
	}

	// osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters()
	static int _bind_getLocalParameters_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLocalParameters_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() function, expected prototype:\nosg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters()\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters()");
		}
		const osg::FragmentProgram::LocalParamList* lret = &self->getLocalParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::LocalParamList >::push(L,lret,false);

		return 1;
	}

	// const osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() const
	static int _bind_getLocalParameters_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLocalParameters_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() const function, expected prototype:\nconst osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() const\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::FragmentProgram::LocalParamList & osg::FragmentProgram::getLocalParameters() const");
		}
		const osg::FragmentProgram::LocalParamList* lret = &self->getLocalParameters();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::LocalParamList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FragmentProgram::getLocalParameters
	static int _bind_getLocalParameters(lua_State *L) {
		if (_lg_typecheck_getLocalParameters_overload_1(L)) return _bind_getLocalParameters_overload_1(L);
		if (_lg_typecheck_getLocalParameters_overload_2(L)) return _bind_getLocalParameters_overload_2(L);

		luaL_error(L, "error in function getLocalParameters, cannot match any of the overloads for function getLocalParameters:\n  getLocalParameters()\n  getLocalParameters()\n");
		return 0;
	}

	// void osg::FragmentProgram::setMatrix(const unsigned int mode, const osg::Matrixd & matrix)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setMatrix(const unsigned int mode, const osg::Matrixd & matrix) function, expected prototype:\nvoid osg::FragmentProgram::setMatrix(const unsigned int mode, const osg::Matrixd & matrix)\nClass arguments details:\narg 2 ID = 18903838\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osg::FragmentProgram::setMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setMatrix(const unsigned int, const osg::Matrixd &)");
		}
		self->setMatrix(mode, matrix);

		return 0;
	}

	// void osg::FragmentProgram::setMatrices(const osg::FragmentProgram::MatrixList & matrices)
	static int _bind_setMatrices(lua_State *L) {
		if (!_lg_typecheck_setMatrices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::setMatrices(const osg::FragmentProgram::MatrixList & matrices) function, expected prototype:\nvoid osg::FragmentProgram::setMatrices(const osg::FragmentProgram::MatrixList & matrices)\nClass arguments details:\narg 1 ID = 4745759\n");
		}

		const osg::FragmentProgram::MatrixList* matrices_ptr=(Luna< osg::FragmentProgram::MatrixList >::check(L,2));
		if( !matrices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrices in osg::FragmentProgram::setMatrices function");
		}
		const osg::FragmentProgram::MatrixList & matrices=*matrices_ptr;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::setMatrices(const osg::FragmentProgram::MatrixList &)");
		}
		self->setMatrices(matrices);

		return 0;
	}

	// osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices()
	static int _bind_getMatrices_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMatrices_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() function, expected prototype:\nosg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices()\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices()");
		}
		const osg::FragmentProgram::MatrixList* lret = &self->getMatrices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::MatrixList >::push(L,lret,false);

		return 1;
	}

	// const osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() const
	static int _bind_getMatrices_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMatrices_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() const function, expected prototype:\nconst osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() const\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::FragmentProgram::MatrixList & osg::FragmentProgram::getMatrices() const");
		}
		const osg::FragmentProgram::MatrixList* lret = &self->getMatrices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::MatrixList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::FragmentProgram::getMatrices
	static int _bind_getMatrices(lua_State *L) {
		if (_lg_typecheck_getMatrices_overload_1(L)) return _bind_getMatrices_overload_1(L);
		if (_lg_typecheck_getMatrices_overload_2(L)) return _bind_getMatrices_overload_2(L);

		luaL_error(L, "error in function getMatrices, cannot match any of the overloads for function getMatrices:\n  getMatrices()\n  getMatrices()\n");
		return 0;
	}

	// void osg::FragmentProgram::dirtyFragmentProgramObject()
	static int _bind_dirtyFragmentProgramObject(lua_State *L) {
		if (!_lg_typecheck_dirtyFragmentProgramObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::dirtyFragmentProgramObject() function, expected prototype:\nvoid osg::FragmentProgram::dirtyFragmentProgramObject()\nClass arguments details:\n");
		}


		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::dirtyFragmentProgramObject()");
		}
		self->dirtyFragmentProgramObject();

		return 0;
	}

	// void osg::FragmentProgram::apply(osg::State & ) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::apply(osg::State & ) const function, expected prototype:\nvoid osg::FragmentProgram::apply(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osg::FragmentProgram::compileGLObjects(osg::State & ) const
	static int _bind_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::compileGLObjects(osg::State & ) const function, expected prototype:\nvoid osg::FragmentProgram::compileGLObjects(osg::State & ) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::FragmentProgram::compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::compileGLObjects(osg::State &) const");
		}
		self->compileGLObjects(_arg1);

		return 0;
	}

	// void osg::FragmentProgram::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FragmentProgram::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::FragmentProgram::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::FragmentProgram* self=dynamic_cast< osg::FragmentProgram* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FragmentProgram::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// static void osg::FragmentProgram::deleteFragmentProgramObject(unsigned int contextID, unsigned int handle)
	static int _bind_deleteFragmentProgramObject(lua_State *L) {
		if (!_lg_typecheck_deleteFragmentProgramObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::FragmentProgram::deleteFragmentProgramObject(unsigned int contextID, unsigned int handle) function, expected prototype:\nstatic void osg::FragmentProgram::deleteFragmentProgramObject(unsigned int contextID, unsigned int handle)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		unsigned int handle=(unsigned int)lua_tointeger(L,2);

		osg::FragmentProgram::deleteFragmentProgramObject(contextID, handle);

		return 0;
	}

	// static void osg::FragmentProgram::flushDeletedFragmentProgramObjects(unsigned int contextID, double currentTime, double & availableTime)
	static int _bind_flushDeletedFragmentProgramObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedFragmentProgramObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::FragmentProgram::flushDeletedFragmentProgramObjects(unsigned int contextID, double currentTime, double & availableTime) function, expected prototype:\nstatic void osg::FragmentProgram::flushDeletedFragmentProgramObjects(unsigned int contextID, double currentTime, double & availableTime)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::FragmentProgram::flushDeletedFragmentProgramObjects(contextID, currentTime, availableTime);

		return 0;
	}

	// static void osg::FragmentProgram::discardDeletedFragmentProgramObjects(unsigned int contextID)
	static int _bind_discardDeletedFragmentProgramObjects(lua_State *L) {
		if (!_lg_typecheck_discardDeletedFragmentProgramObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::FragmentProgram::discardDeletedFragmentProgramObjects(unsigned int contextID) function, expected prototype:\nstatic void osg::FragmentProgram::discardDeletedFragmentProgramObjects(unsigned int contextID)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::FragmentProgram::discardDeletedFragmentProgramObjects(contextID);

		return 0;
	}

	// static osg::FragmentProgram::Extensions * osg::FragmentProgram::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::FragmentProgram::Extensions * osg::FragmentProgram::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::FragmentProgram::Extensions * osg::FragmentProgram::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::FragmentProgram::Extensions * lret = osg::FragmentProgram::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::FragmentProgram::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::FragmentProgram::setExtensions(unsigned int contextID, osg::FragmentProgram::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::FragmentProgram::setExtensions(unsigned int contextID, osg::FragmentProgram::Extensions * extensions) function, expected prototype:\nstatic void osg::FragmentProgram::setExtensions(unsigned int contextID, osg::FragmentProgram::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::FragmentProgram::Extensions* extensions=dynamic_cast< osg::FragmentProgram::Extensions* >(Luna< osg::Referenced >::check(L,2));

		osg::FragmentProgram::setExtensions(contextID, extensions);

		return 0;
	}


	// Operator binds:

};

osg::FragmentProgram* LunaTraits< osg::FragmentProgram >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_FragmentProgram::_bind_ctor(L);
}

void LunaTraits< osg::FragmentProgram >::_bind_dtor(osg::FragmentProgram* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::FragmentProgram >::className[] = "FragmentProgram";
const char LunaTraits< osg::FragmentProgram >::fullName[] = "osg::FragmentProgram";
const char LunaTraits< osg::FragmentProgram >::moduleName[] = "osg";
const char* LunaTraits< osg::FragmentProgram >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::FragmentProgram >::hash = 34007291;
const int LunaTraits< osg::FragmentProgram >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::FragmentProgram >::methods[] = {
	{"cloneType", &luna_wrapper_osg_FragmentProgram::_bind_cloneType},
	{"clone", &luna_wrapper_osg_FragmentProgram::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_FragmentProgram::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_FragmentProgram::_bind_libraryName},
	{"className", &luna_wrapper_osg_FragmentProgram::_bind_className},
	{"getType", &luna_wrapper_osg_FragmentProgram::_bind_getType},
	{"compare", &luna_wrapper_osg_FragmentProgram::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_FragmentProgram::_bind_getModeUsage},
	{"getFragmentProgramID", &luna_wrapper_osg_FragmentProgram::_bind_getFragmentProgramID},
	{"setFragmentProgram", &luna_wrapper_osg_FragmentProgram::_bind_setFragmentProgram},
	{"getFragmentProgram", &luna_wrapper_osg_FragmentProgram::_bind_getFragmentProgram},
	{"setProgramLocalParameter", &luna_wrapper_osg_FragmentProgram::_bind_setProgramLocalParameter},
	{"setLocalParameters", &luna_wrapper_osg_FragmentProgram::_bind_setLocalParameters},
	{"getLocalParameters", &luna_wrapper_osg_FragmentProgram::_bind_getLocalParameters},
	{"setMatrix", &luna_wrapper_osg_FragmentProgram::_bind_setMatrix},
	{"setMatrices", &luna_wrapper_osg_FragmentProgram::_bind_setMatrices},
	{"getMatrices", &luna_wrapper_osg_FragmentProgram::_bind_getMatrices},
	{"dirtyFragmentProgramObject", &luna_wrapper_osg_FragmentProgram::_bind_dirtyFragmentProgramObject},
	{"apply", &luna_wrapper_osg_FragmentProgram::_bind_apply},
	{"compileGLObjects", &luna_wrapper_osg_FragmentProgram::_bind_compileGLObjects},
	{"releaseGLObjects", &luna_wrapper_osg_FragmentProgram::_bind_releaseGLObjects},
	{"deleteFragmentProgramObject", &luna_wrapper_osg_FragmentProgram::_bind_deleteFragmentProgramObject},
	{"flushDeletedFragmentProgramObjects", &luna_wrapper_osg_FragmentProgram::_bind_flushDeletedFragmentProgramObjects},
	{"discardDeletedFragmentProgramObjects", &luna_wrapper_osg_FragmentProgram::_bind_discardDeletedFragmentProgramObjects},
	{"getExtensions", &luna_wrapper_osg_FragmentProgram::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_FragmentProgram::_bind_setExtensions},
	{0,0}
};

luna_ConverterType LunaTraits< osg::FragmentProgram >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_FragmentProgram::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::FragmentProgram >::enumValues[] = {
	{0,0}
};

