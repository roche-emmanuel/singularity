#include <plug_common.h>

class luna_wrapper_osg_PagedLOD {
public:
	typedef Luna< osg::PagedLOD > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::PagedLOD* ptr= dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PagedLOD >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isstring(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		if( luatop>6 && lua_isnumber(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDatabaseOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseOptions_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabaseOptions_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFileName(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumFileNames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPriorityOffset(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPriorityOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPriorityOffsets(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPriorityScale(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPriorityScale(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPriorityScales(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeStamp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumTimeStamps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumFrameNumbers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRequest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrameNumberOfLastTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameNumberOfLastTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumChildrenThatCannotBeExpired(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumChildrenThatCannotBeExpired(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDisableExternalChildrenPaging(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDisableExternalChildrenPaging(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_removeExpiredChildren(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,52729833) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::PagedLOD::PagedLOD()
	static osg::PagedLOD* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PagedLOD() function, expected prototype:\nosg::PagedLOD::PagedLOD()\nClass arguments details:\n");
		}


		return new osg::PagedLOD();
	}

	// osg::PagedLOD::PagedLOD(const osg::PagedLOD & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::PagedLOD* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PagedLOD::PagedLOD(const osg::PagedLOD & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::PagedLOD::PagedLOD(const osg::PagedLOD & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::PagedLOD* _arg1_ptr=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PagedLOD::PagedLOD function");
		}
		const osg::PagedLOD & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PagedLOD::PagedLOD function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::PagedLOD(_arg1, copyop);
	}

	// Overload binder for osg::PagedLOD::PagedLOD
	static osg::PagedLOD* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PagedLOD, cannot match any of the overloads for function PagedLOD:\n  PagedLOD()\n  PagedLOD(const osg::PagedLOD &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::PagedLOD::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PagedLOD::cloneType() const function, expected prototype:\nosg::Object * osg::PagedLOD::cloneType() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PagedLOD::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::PagedLOD::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::PagedLOD::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::PagedLOD::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::PagedLOD::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::PagedLOD::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::PagedLOD::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PagedLOD::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PagedLOD::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PagedLOD::className() const function, expected prototype:\nconst char * osg::PagedLOD::className() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PagedLOD::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PagedLOD::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PagedLOD::libraryName() const function, expected prototype:\nconst char * osg::PagedLOD::libraryName() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PagedLOD::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::PagedLOD::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::PagedLOD::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::PagedLOD::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::PagedLOD::traverse(osg::NodeVisitor & )
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::traverse(osg::NodeVisitor & ) function, expected prototype:\nvoid osg::PagedLOD::traverse(osg::NodeVisitor & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::PagedLOD::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::traverse(osg::NodeVisitor &)");
		}
		self->traverse(_arg1);

		return 0;
	}

	// bool osg::PagedLOD::addChild(osg::Node * child)
	static int _bind_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::addChild(osg::Node * child) function, expected prototype:\nbool osg::PagedLOD::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::addChild(osg::Node *)");
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::addChild(osg::Node * child, float min, float max)
	static int _bind_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::addChild(osg::Node * child, float min, float max) function, expected prototype:\nbool osg::PagedLOD::addChild(osg::Node * child, float min, float max)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::addChild(osg::Node *, float, float)");
		}
		bool lret = self->addChild(child, min, max);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f)
	static int _bind_addChild_overload_3(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f) function, expected prototype:\nbool osg::PagedLOD::addChild(osg::Node * child, float min, float max, const std::string & filename, float priorityOffset = 0.0f, float priorityScale = 1.0f)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);
		std::string filename(lua_tostring(L,5),lua_objlen(L,5));
		float priorityOffset=luatop>5 ? (float)lua_tonumber(L,6) : 0.0f;
		float priorityScale=luatop>6 ? (float)lua_tonumber(L,7) : 1.0f;

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::addChild(osg::Node *, float, float, const std::string &, float, float)");
		}
		bool lret = self->addChild(child, min, max, filename, priorityOffset, priorityScale);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::PagedLOD::addChild
	static int _bind_addChild(lua_State *L) {
		if (_lg_typecheck_addChild_overload_1(L)) return _bind_addChild_overload_1(L);
		if (_lg_typecheck_addChild_overload_2(L)) return _bind_addChild_overload_2(L);
		if (_lg_typecheck_addChild_overload_3(L)) return _bind_addChild_overload_3(L);

		luaL_error(L, "error in function addChild, cannot match any of the overloads for function addChild:\n  addChild(osg::Node *)\n  addChild(osg::Node *, float, float)\n  addChild(osg::Node *, float, float, const std::string &, float, float)\n");
		return 0;
	}

	// bool osg::PagedLOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1) function, expected prototype:\nbool osg::PagedLOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 1;

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::removeChildren(unsigned int, unsigned int)");
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::PagedLOD::setDatabaseOptions(osg::Referenced * options)
	static int _bind_setDatabaseOptions(lua_State *L) {
		if (!_lg_typecheck_setDatabaseOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setDatabaseOptions(osg::Referenced * options) function, expected prototype:\nvoid osg::PagedLOD::setDatabaseOptions(osg::Referenced * options)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* options=(Luna< osg::Referenced >::check(L,2));

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setDatabaseOptions(osg::Referenced *)");
		}
		self->setDatabaseOptions(options);

		return 0;
	}

	// osg::Referenced * osg::PagedLOD::getDatabaseOptions()
	static int _bind_getDatabaseOptions_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabaseOptions_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::PagedLOD::getDatabaseOptions() function, expected prototype:\nosg::Referenced * osg::PagedLOD::getDatabaseOptions()\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::PagedLOD::getDatabaseOptions()");
		}
		osg::Referenced * lret = self->getDatabaseOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::PagedLOD::getDatabaseOptions() const
	static int _bind_getDatabaseOptions_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabaseOptions_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::PagedLOD::getDatabaseOptions() const function, expected prototype:\nconst osg::Referenced * osg::PagedLOD::getDatabaseOptions() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::PagedLOD::getDatabaseOptions() const");
		}
		const osg::Referenced * lret = self->getDatabaseOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::getDatabaseOptions
	static int _bind_getDatabaseOptions(lua_State *L) {
		if (_lg_typecheck_getDatabaseOptions_overload_1(L)) return _bind_getDatabaseOptions_overload_1(L);
		if (_lg_typecheck_getDatabaseOptions_overload_2(L)) return _bind_getDatabaseOptions_overload_2(L);

		luaL_error(L, "error in function getDatabaseOptions, cannot match any of the overloads for function getDatabaseOptions:\n  getDatabaseOptions()\n  getDatabaseOptions()\n");
		return 0;
	}

	// void osg::PagedLOD::setDatabasePath(const std::string & path)
	static int _bind_setDatabasePath(lua_State *L) {
		if (!_lg_typecheck_setDatabasePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setDatabasePath(const std::string & path) function, expected prototype:\nvoid osg::PagedLOD::setDatabasePath(const std::string & path)\nClass arguments details:\n");
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setDatabasePath(const std::string &)");
		}
		self->setDatabasePath(path);

		return 0;
	}

	// const std::string & osg::PagedLOD::getDatabasePath() const
	static int _bind_getDatabasePath(lua_State *L) {
		if (!_lg_typecheck_getDatabasePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::PagedLOD::getDatabasePath() const function, expected prototype:\nconst std::string & osg::PagedLOD::getDatabasePath() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::PagedLOD::getDatabasePath() const");
		}
		const std::string & lret = self->getDatabasePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::PagedLOD::setFileName(unsigned int childNo, const std::string & filename)
	static int _bind_setFileName(lua_State *L) {
		if (!_lg_typecheck_setFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setFileName(unsigned int childNo, const std::string & filename) function, expected prototype:\nvoid osg::PagedLOD::setFileName(unsigned int childNo, const std::string & filename)\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		std::string filename(lua_tostring(L,3),lua_objlen(L,3));

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setFileName(unsigned int, const std::string &)");
		}
		self->setFileName(childNo, filename);

		return 0;
	}

	// const std::string & osg::PagedLOD::getFileName(unsigned int childNo) const
	static int _bind_getFileName(lua_State *L) {
		if (!_lg_typecheck_getFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::PagedLOD::getFileName(unsigned int childNo) const function, expected prototype:\nconst std::string & osg::PagedLOD::getFileName(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::PagedLOD::getFileName(unsigned int) const");
		}
		const std::string & lret = self->getFileName(childNo);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumFileNames() const
	static int _bind_getNumFileNames(lua_State *L) {
		if (!_lg_typecheck_getNumFileNames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumFileNames() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumFileNames() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumFileNames() const");
		}
		unsigned int lret = self->getNumFileNames();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setPriorityOffset(unsigned int childNo, float priorityOffset)
	static int _bind_setPriorityOffset(lua_State *L) {
		if (!_lg_typecheck_setPriorityOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setPriorityOffset(unsigned int childNo, float priorityOffset) function, expected prototype:\nvoid osg::PagedLOD::setPriorityOffset(unsigned int childNo, float priorityOffset)\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		float priorityOffset=(float)lua_tonumber(L,3);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setPriorityOffset(unsigned int, float)");
		}
		self->setPriorityOffset(childNo, priorityOffset);

		return 0;
	}

	// float osg::PagedLOD::getPriorityOffset(unsigned int childNo) const
	static int _bind_getPriorityOffset(lua_State *L) {
		if (!_lg_typecheck_getPriorityOffset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::PagedLOD::getPriorityOffset(unsigned int childNo) const function, expected prototype:\nfloat osg::PagedLOD::getPriorityOffset(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::PagedLOD::getPriorityOffset(unsigned int) const");
		}
		float lret = self->getPriorityOffset(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumPriorityOffsets() const
	static int _bind_getNumPriorityOffsets(lua_State *L) {
		if (!_lg_typecheck_getNumPriorityOffsets(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumPriorityOffsets() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumPriorityOffsets() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumPriorityOffsets() const");
		}
		unsigned int lret = self->getNumPriorityOffsets();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setPriorityScale(unsigned int childNo, float priorityScale)
	static int _bind_setPriorityScale(lua_State *L) {
		if (!_lg_typecheck_setPriorityScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setPriorityScale(unsigned int childNo, float priorityScale) function, expected prototype:\nvoid osg::PagedLOD::setPriorityScale(unsigned int childNo, float priorityScale)\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		float priorityScale=(float)lua_tonumber(L,3);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setPriorityScale(unsigned int, float)");
		}
		self->setPriorityScale(childNo, priorityScale);

		return 0;
	}

	// float osg::PagedLOD::getPriorityScale(unsigned int childNo) const
	static int _bind_getPriorityScale(lua_State *L) {
		if (!_lg_typecheck_getPriorityScale(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::PagedLOD::getPriorityScale(unsigned int childNo) const function, expected prototype:\nfloat osg::PagedLOD::getPriorityScale(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::PagedLOD::getPriorityScale(unsigned int) const");
		}
		float lret = self->getPriorityScale(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumPriorityScales() const
	static int _bind_getNumPriorityScales(lua_State *L) {
		if (!_lg_typecheck_getNumPriorityScales(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumPriorityScales() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumPriorityScales() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumPriorityScales() const");
		}
		unsigned int lret = self->getNumPriorityScales();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setTimeStamp(unsigned int childNo, double timeStamp)
	static int _bind_setTimeStamp(lua_State *L) {
		if (!_lg_typecheck_setTimeStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setTimeStamp(unsigned int childNo, double timeStamp) function, expected prototype:\nvoid osg::PagedLOD::setTimeStamp(unsigned int childNo, double timeStamp)\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		double timeStamp=(double)lua_tonumber(L,3);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setTimeStamp(unsigned int, double)");
		}
		self->setTimeStamp(childNo, timeStamp);

		return 0;
	}

	// double osg::PagedLOD::getTimeStamp(unsigned int childNo) const
	static int _bind_getTimeStamp(lua_State *L) {
		if (!_lg_typecheck_getTimeStamp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::PagedLOD::getTimeStamp(unsigned int childNo) const function, expected prototype:\ndouble osg::PagedLOD::getTimeStamp(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::PagedLOD::getTimeStamp(unsigned int) const");
		}
		double lret = self->getTimeStamp(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumTimeStamps() const
	static int _bind_getNumTimeStamps(lua_State *L) {
		if (!_lg_typecheck_getNumTimeStamps(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumTimeStamps() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumTimeStamps() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumTimeStamps() const");
		}
		unsigned int lret = self->getNumTimeStamps();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setFrameNumber(unsigned int childNo, unsigned int frameNumber)
	static int _bind_setFrameNumber(lua_State *L) {
		if (!_lg_typecheck_setFrameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setFrameNumber(unsigned int childNo, unsigned int frameNumber) function, expected prototype:\nvoid osg::PagedLOD::setFrameNumber(unsigned int childNo, unsigned int frameNumber)\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		unsigned int frameNumber=(unsigned int)lua_tointeger(L,3);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setFrameNumber(unsigned int, unsigned int)");
		}
		self->setFrameNumber(childNo, frameNumber);

		return 0;
	}

	// unsigned osg::PagedLOD::getFrameNumber(unsigned int childNo) const
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned osg::PagedLOD::getFrameNumber(unsigned int childNo) const function, expected prototype:\nunsigned osg::PagedLOD::getFrameNumber(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned osg::PagedLOD::getFrameNumber(unsigned int) const");
		}
		unsigned lret = self->getFrameNumber(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PagedLOD::getNumFrameNumbers() const
	static int _bind_getNumFrameNumbers(lua_State *L) {
		if (!_lg_typecheck_getNumFrameNumbers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumFrameNumbers() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumFrameNumbers() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumFrameNumbers() const");
		}
		unsigned int lret = self->getNumFrameNumbers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo)
	static int _bind_getDatabaseRequest_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequest_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo) function, expected prototype:\nosg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo)\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int)");
		}
		osg::ref_ptr< osg::Referenced > & lret = self->getDatabaseRequest(childNo);
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// const osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo) const
	static int _bind_getDatabaseRequest_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRequest_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo) const function, expected prototype:\nconst osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ref_ptr< osg::Referenced > & osg::PagedLOD::getDatabaseRequest(unsigned int) const");
		}
		const osg::ref_ptr< osg::Referenced > & lret = self->getDatabaseRequest(childNo);
		Luna< osg::Referenced >::push(L,lret.get(),false);

		return 1;
	}

	// Overload binder for osg::PagedLOD::getDatabaseRequest
	static int _bind_getDatabaseRequest(lua_State *L) {
		if (_lg_typecheck_getDatabaseRequest_overload_1(L)) return _bind_getDatabaseRequest_overload_1(L);
		if (_lg_typecheck_getDatabaseRequest_overload_2(L)) return _bind_getDatabaseRequest_overload_2(L);

		luaL_error(L, "error in function getDatabaseRequest, cannot match any of the overloads for function getDatabaseRequest:\n  getDatabaseRequest(unsigned int)\n  getDatabaseRequest(unsigned int)\n");
		return 0;
	}

	// void osg::PagedLOD::setFrameNumberOfLastTraversal(unsigned int frameNumber)
	static int _bind_setFrameNumberOfLastTraversal(lua_State *L) {
		if (!_lg_typecheck_setFrameNumberOfLastTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setFrameNumberOfLastTraversal(unsigned int frameNumber) function, expected prototype:\nvoid osg::PagedLOD::setFrameNumberOfLastTraversal(unsigned int frameNumber)\nClass arguments details:\n");
		}

		unsigned int frameNumber=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setFrameNumberOfLastTraversal(unsigned int)");
		}
		self->setFrameNumberOfLastTraversal(frameNumber);

		return 0;
	}

	// unsigned int osg::PagedLOD::getFrameNumberOfLastTraversal() const
	static int _bind_getFrameNumberOfLastTraversal(lua_State *L) {
		if (!_lg_typecheck_getFrameNumberOfLastTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getFrameNumberOfLastTraversal() const function, expected prototype:\nunsigned int osg::PagedLOD::getFrameNumberOfLastTraversal() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getFrameNumberOfLastTraversal() const");
		}
		unsigned int lret = self->getFrameNumberOfLastTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setNumChildrenThatCannotBeExpired(unsigned int num)
	static int _bind_setNumChildrenThatCannotBeExpired(lua_State *L) {
		if (!_lg_typecheck_setNumChildrenThatCannotBeExpired(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setNumChildrenThatCannotBeExpired(unsigned int num) function, expected prototype:\nvoid osg::PagedLOD::setNumChildrenThatCannotBeExpired(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setNumChildrenThatCannotBeExpired(unsigned int)");
		}
		self->setNumChildrenThatCannotBeExpired(num);

		return 0;
	}

	// unsigned int osg::PagedLOD::getNumChildrenThatCannotBeExpired() const
	static int _bind_getNumChildrenThatCannotBeExpired(lua_State *L) {
		if (!_lg_typecheck_getNumChildrenThatCannotBeExpired(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PagedLOD::getNumChildrenThatCannotBeExpired() const function, expected prototype:\nunsigned int osg::PagedLOD::getNumChildrenThatCannotBeExpired() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PagedLOD::getNumChildrenThatCannotBeExpired() const");
		}
		unsigned int lret = self->getNumChildrenThatCannotBeExpired();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PagedLOD::setDisableExternalChildrenPaging(bool flag)
	static int _bind_setDisableExternalChildrenPaging(lua_State *L) {
		if (!_lg_typecheck_setDisableExternalChildrenPaging(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PagedLOD::setDisableExternalChildrenPaging(bool flag) function, expected prototype:\nvoid osg::PagedLOD::setDisableExternalChildrenPaging(bool flag)\nClass arguments details:\n");
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PagedLOD::setDisableExternalChildrenPaging(bool)");
		}
		self->setDisableExternalChildrenPaging(flag);

		return 0;
	}

	// bool osg::PagedLOD::getDisableExternalChildrenPaging() const
	static int _bind_getDisableExternalChildrenPaging(lua_State *L) {
		if (!_lg_typecheck_getDisableExternalChildrenPaging(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::getDisableExternalChildrenPaging() const function, expected prototype:\nbool osg::PagedLOD::getDisableExternalChildrenPaging() const\nClass arguments details:\n");
		}


		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::getDisableExternalChildrenPaging() const");
		}
		bool lret = self->getDisableExternalChildrenPaging();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::PagedLOD::removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren)
	static int _bind_removeExpiredChildren(lua_State *L) {
		if (!_lg_typecheck_removeExpiredChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PagedLOD::removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren) function, expected prototype:\nbool osg::PagedLOD::removeExpiredChildren(double expiryTime, unsigned int expiryFrame, osg::NodeList & removedChildren)\nClass arguments details:\narg 3 ID = 52729833\n");
		}

		double expiryTime=(double)lua_tonumber(L,2);
		unsigned int expiryFrame=(unsigned int)lua_tointeger(L,3);
		osg::NodeList* removedChildren_ptr=(Luna< osg::NodeList >::check(L,4));
		if( !removedChildren_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg removedChildren in osg::PagedLOD::removeExpiredChildren function");
		}
		osg::NodeList & removedChildren=*removedChildren_ptr;

		osg::PagedLOD* self=dynamic_cast< osg::PagedLOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PagedLOD::removeExpiredChildren(double, unsigned int, osg::NodeList &)");
		}
		bool lret = self->removeExpiredChildren(expiryTime, expiryFrame, removedChildren);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::PagedLOD* LunaTraits< osg::PagedLOD >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_PagedLOD::_bind_ctor(L);
}

void LunaTraits< osg::PagedLOD >::_bind_dtor(osg::PagedLOD* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PagedLOD >::className[] = "PagedLOD";
const char LunaTraits< osg::PagedLOD >::fullName[] = "osg::PagedLOD";
const char LunaTraits< osg::PagedLOD >::moduleName[] = "osg";
const char* LunaTraits< osg::PagedLOD >::parents[] = {"osg.LOD", 0};
const int LunaTraits< osg::PagedLOD >::hash = 39474808;
const int LunaTraits< osg::PagedLOD >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PagedLOD >::methods[] = {
	{"cloneType", &luna_wrapper_osg_PagedLOD::_bind_cloneType},
	{"clone", &luna_wrapper_osg_PagedLOD::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_PagedLOD::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_PagedLOD::_bind_className},
	{"libraryName", &luna_wrapper_osg_PagedLOD::_bind_libraryName},
	{"accept", &luna_wrapper_osg_PagedLOD::_bind_accept},
	{"traverse", &luna_wrapper_osg_PagedLOD::_bind_traverse},
	{"addChild", &luna_wrapper_osg_PagedLOD::_bind_addChild},
	{"removeChildren", &luna_wrapper_osg_PagedLOD::_bind_removeChildren},
	{"setDatabaseOptions", &luna_wrapper_osg_PagedLOD::_bind_setDatabaseOptions},
	{"getDatabaseOptions", &luna_wrapper_osg_PagedLOD::_bind_getDatabaseOptions},
	{"setDatabasePath", &luna_wrapper_osg_PagedLOD::_bind_setDatabasePath},
	{"getDatabasePath", &luna_wrapper_osg_PagedLOD::_bind_getDatabasePath},
	{"setFileName", &luna_wrapper_osg_PagedLOD::_bind_setFileName},
	{"getFileName", &luna_wrapper_osg_PagedLOD::_bind_getFileName},
	{"getNumFileNames", &luna_wrapper_osg_PagedLOD::_bind_getNumFileNames},
	{"setPriorityOffset", &luna_wrapper_osg_PagedLOD::_bind_setPriorityOffset},
	{"getPriorityOffset", &luna_wrapper_osg_PagedLOD::_bind_getPriorityOffset},
	{"getNumPriorityOffsets", &luna_wrapper_osg_PagedLOD::_bind_getNumPriorityOffsets},
	{"setPriorityScale", &luna_wrapper_osg_PagedLOD::_bind_setPriorityScale},
	{"getPriorityScale", &luna_wrapper_osg_PagedLOD::_bind_getPriorityScale},
	{"getNumPriorityScales", &luna_wrapper_osg_PagedLOD::_bind_getNumPriorityScales},
	{"setTimeStamp", &luna_wrapper_osg_PagedLOD::_bind_setTimeStamp},
	{"getTimeStamp", &luna_wrapper_osg_PagedLOD::_bind_getTimeStamp},
	{"getNumTimeStamps", &luna_wrapper_osg_PagedLOD::_bind_getNumTimeStamps},
	{"setFrameNumber", &luna_wrapper_osg_PagedLOD::_bind_setFrameNumber},
	{"getFrameNumber", &luna_wrapper_osg_PagedLOD::_bind_getFrameNumber},
	{"getNumFrameNumbers", &luna_wrapper_osg_PagedLOD::_bind_getNumFrameNumbers},
	{"getDatabaseRequest", &luna_wrapper_osg_PagedLOD::_bind_getDatabaseRequest},
	{"setFrameNumberOfLastTraversal", &luna_wrapper_osg_PagedLOD::_bind_setFrameNumberOfLastTraversal},
	{"getFrameNumberOfLastTraversal", &luna_wrapper_osg_PagedLOD::_bind_getFrameNumberOfLastTraversal},
	{"setNumChildrenThatCannotBeExpired", &luna_wrapper_osg_PagedLOD::_bind_setNumChildrenThatCannotBeExpired},
	{"getNumChildrenThatCannotBeExpired", &luna_wrapper_osg_PagedLOD::_bind_getNumChildrenThatCannotBeExpired},
	{"setDisableExternalChildrenPaging", &luna_wrapper_osg_PagedLOD::_bind_setDisableExternalChildrenPaging},
	{"getDisableExternalChildrenPaging", &luna_wrapper_osg_PagedLOD::_bind_getDisableExternalChildrenPaging},
	{"removeExpiredChildren", &luna_wrapper_osg_PagedLOD::_bind_removeExpiredChildren},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PagedLOD >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PagedLOD::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PagedLOD >::enumValues[] = {
	{0,0}
};

