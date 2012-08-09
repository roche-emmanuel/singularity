#include <plug_common.h>

class luna_wrapper_osgUtil_RenderBin {
public:
	typedef Luna< osgUtil::RenderBin > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::RenderBin* ptr= dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderBin >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_createRenderBin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRenderBinPrototype(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addRenderBinPrototype(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeRenderBinPrototype(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultRenderBinSortMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultRenderBinSortMode(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBinNum(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateGraphList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateGraphList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderBinList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderBinList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderLeafList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderLeafList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_find_or_insert(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addStateGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_sort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sortImplementation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSortMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSortMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sortByState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sortByStateThenFrontToBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sortFrontToBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sortBackToFront(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sortTraversalOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSortCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSortCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSortCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95996950) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeNumberOfDynamicRenderLeaves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_copyLeavesFromStateGraphListToRenderLeafList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::RenderBin::RenderBin()
	static osgUtil::RenderBin* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::RenderBin() function, expected prototype:\nosgUtil::RenderBin::RenderBin()\nClass arguments details:\n");
		}


		return new osgUtil::RenderBin();
	}

	// osgUtil::RenderBin::RenderBin(osgUtil::RenderBin::SortMode mode)
	static osgUtil::RenderBin* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::RenderBin(osgUtil::RenderBin::SortMode mode) function, expected prototype:\nosgUtil::RenderBin::RenderBin(osgUtil::RenderBin::SortMode mode)\nClass arguments details:\n");
		}

		osgUtil::RenderBin::SortMode mode=(osgUtil::RenderBin::SortMode)lua_tointeger(L,1);

		return new osgUtil::RenderBin(mode);
	}

	// osgUtil::RenderBin::RenderBin(const osgUtil::RenderBin & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgUtil::RenderBin* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::RenderBin(const osgUtil::RenderBin & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgUtil::RenderBin::RenderBin(const osgUtil::RenderBin & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgUtil::RenderBin* rhs_ptr=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::RenderBin::RenderBin function");
		}
		const osgUtil::RenderBin & rhs=*rhs_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgUtil::RenderBin::RenderBin function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgUtil::RenderBin(rhs, copyop);
	}

	// Overload binder for osgUtil::RenderBin::RenderBin
	static osgUtil::RenderBin* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function RenderBin, cannot match any of the overloads for function RenderBin:\n  RenderBin()\n  RenderBin(osgUtil::RenderBin::SortMode)\n  RenderBin(const osgUtil::RenderBin &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// static osgUtil::RenderBin * osgUtil::RenderBin::createRenderBin(const std::string & binName)
	static int _bind_createRenderBin(lua_State *L) {
		if (!_lg_typecheck_createRenderBin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osgUtil::RenderBin * osgUtil::RenderBin::createRenderBin(const std::string & binName) function, expected prototype:\nstatic osgUtil::RenderBin * osgUtil::RenderBin::createRenderBin(const std::string & binName)\nClass arguments details:\n");
		}

		std::string binName(lua_tostring(L,1),lua_objlen(L,1));

		osgUtil::RenderBin * lret = osgUtil::RenderBin::createRenderBin(binName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin >::push(L,lret,false);

		return 1;
	}

	// static osgUtil::RenderBin * osgUtil::RenderBin::getRenderBinPrototype(const std::string & binName)
	static int _bind_getRenderBinPrototype(lua_State *L) {
		if (!_lg_typecheck_getRenderBinPrototype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osgUtil::RenderBin * osgUtil::RenderBin::getRenderBinPrototype(const std::string & binName) function, expected prototype:\nstatic osgUtil::RenderBin * osgUtil::RenderBin::getRenderBinPrototype(const std::string & binName)\nClass arguments details:\n");
		}

		std::string binName(lua_tostring(L,1),lua_objlen(L,1));

		osgUtil::RenderBin * lret = osgUtil::RenderBin::getRenderBinPrototype(binName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin >::push(L,lret,false);

		return 1;
	}

	// static void osgUtil::RenderBin::addRenderBinPrototype(const std::string & binName, osgUtil::RenderBin * proto)
	static int _bind_addRenderBinPrototype(lua_State *L) {
		if (!_lg_typecheck_addRenderBinPrototype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::RenderBin::addRenderBinPrototype(const std::string & binName, osgUtil::RenderBin * proto) function, expected prototype:\nstatic void osgUtil::RenderBin::addRenderBinPrototype(const std::string & binName, osgUtil::RenderBin * proto)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string binName(lua_tostring(L,1),lua_objlen(L,1));
		osgUtil::RenderBin* proto=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderBin::addRenderBinPrototype(binName, proto);

		return 0;
	}

	// static void osgUtil::RenderBin::removeRenderBinPrototype(osgUtil::RenderBin * proto)
	static int _bind_removeRenderBinPrototype(lua_State *L) {
		if (!_lg_typecheck_removeRenderBinPrototype(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::RenderBin::removeRenderBinPrototype(osgUtil::RenderBin * proto) function, expected prototype:\nstatic void osgUtil::RenderBin::removeRenderBinPrototype(osgUtil::RenderBin * proto)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderBin* proto=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));

		osgUtil::RenderBin::removeRenderBinPrototype(proto);

		return 0;
	}

	// static void osgUtil::RenderBin::setDefaultRenderBinSortMode(osgUtil::RenderBin::SortMode mode)
	static int _bind_setDefaultRenderBinSortMode(lua_State *L) {
		if (!_lg_typecheck_setDefaultRenderBinSortMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::RenderBin::setDefaultRenderBinSortMode(osgUtil::RenderBin::SortMode mode) function, expected prototype:\nstatic void osgUtil::RenderBin::setDefaultRenderBinSortMode(osgUtil::RenderBin::SortMode mode)\nClass arguments details:\n");
		}

		osgUtil::RenderBin::SortMode mode=(osgUtil::RenderBin::SortMode)lua_tointeger(L,1);

		osgUtil::RenderBin::setDefaultRenderBinSortMode(mode);

		return 0;
	}

	// static osgUtil::RenderBin::SortMode osgUtil::RenderBin::getDefaultRenderBinSortMode()
	static int _bind_getDefaultRenderBinSortMode(lua_State *L) {
		if (!_lg_typecheck_getDefaultRenderBinSortMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osgUtil::RenderBin::SortMode osgUtil::RenderBin::getDefaultRenderBinSortMode() function, expected prototype:\nstatic osgUtil::RenderBin::SortMode osgUtil::RenderBin::getDefaultRenderBinSortMode()\nClass arguments details:\n");
		}


		osgUtil::RenderBin::SortMode lret = osgUtil::RenderBin::getDefaultRenderBinSortMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Object * osgUtil::RenderBin::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::RenderBin::cloneType() const function, expected prototype:\nosg::Object * osgUtil::RenderBin::cloneType() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::RenderBin::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgUtil::RenderBin::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::RenderBin::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgUtil::RenderBin::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::RenderBin::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::RenderBin::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::RenderBin::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderBin::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgUtil::RenderBin::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderBin::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgUtil::RenderBin::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::RenderBin::libraryName() const function, expected prototype:\nconst char * osgUtil::RenderBin::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::RenderBin::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::RenderBin::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::RenderBin::className() const function, expected prototype:\nconst char * osgUtil::RenderBin::className() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::RenderBin::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::RenderBin::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::reset() function, expected prototype:\nvoid osgUtil::RenderBin::reset()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::RenderBin::setStateSet(osg::StateSet * stateset)
	static int _bind_setStateSet(lua_State *L) {
		if (!_lg_typecheck_setStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::setStateSet(osg::StateSet * stateset) function, expected prototype:\nvoid osgUtil::RenderBin::setStateSet(osg::StateSet * stateset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateset=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::setStateSet(osg::StateSet *)");
		}
		self->setStateSet(stateset);

		return 0;
	}

	// osg::StateSet * osgUtil::RenderBin::getStateSet()
	static int _bind_getStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgUtil::RenderBin::getStateSet() function, expected prototype:\nosg::StateSet * osgUtil::RenderBin::getStateSet()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgUtil::RenderBin::getStateSet()");
		}
		osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osgUtil::RenderBin::getStateSet() const
	static int _bind_getStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgUtil::RenderBin::getStateSet() const function, expected prototype:\nconst osg::StateSet * osgUtil::RenderBin::getStateSet() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgUtil::RenderBin::getStateSet() const");
		}
		const osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderBin::getStateSet
	static int _bind_getStateSet(lua_State *L) {
		if (_lg_typecheck_getStateSet_overload_1(L)) return _bind_getStateSet_overload_1(L);
		if (_lg_typecheck_getStateSet_overload_2(L)) return _bind_getStateSet_overload_2(L);

		luaL_error(L, "error in function getStateSet, cannot match any of the overloads for function getStateSet:\n  getStateSet()\n  getStateSet()\n");
		return 0;
	}

	// osgUtil::RenderBin * osgUtil::RenderBin::getParent()
	static int _bind_getParent_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin * osgUtil::RenderBin::getParent() function, expected prototype:\nosgUtil::RenderBin * osgUtil::RenderBin::getParent()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderBin * osgUtil::RenderBin::getParent()");
		}
		osgUtil::RenderBin * lret = self->getParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderBin * osgUtil::RenderBin::getParent() const
	static int _bind_getParent_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParent_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderBin * osgUtil::RenderBin::getParent() const function, expected prototype:\nconst osgUtil::RenderBin * osgUtil::RenderBin::getParent() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderBin * osgUtil::RenderBin::getParent() const");
		}
		const osgUtil::RenderBin * lret = self->getParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderBin::getParent
	static int _bind_getParent(lua_State *L) {
		if (_lg_typecheck_getParent_overload_1(L)) return _bind_getParent_overload_1(L);
		if (_lg_typecheck_getParent_overload_2(L)) return _bind_getParent_overload_2(L);

		luaL_error(L, "error in function getParent, cannot match any of the overloads for function getParent:\n  getParent()\n  getParent()\n");
		return 0;
	}

	// osgUtil::RenderStage * osgUtil::RenderBin::getStage()
	static int _bind_getStage_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStage_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderStage * osgUtil::RenderBin::getStage() function, expected prototype:\nosgUtil::RenderStage * osgUtil::RenderBin::getStage()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderStage * osgUtil::RenderBin::getStage()");
		}
		osgUtil::RenderStage * lret = self->getStage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderStage * osgUtil::RenderBin::getStage() const
	static int _bind_getStage_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStage_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderStage * osgUtil::RenderBin::getStage() const function, expected prototype:\nconst osgUtil::RenderStage * osgUtil::RenderBin::getStage() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderStage * osgUtil::RenderBin::getStage() const");
		}
		const osgUtil::RenderStage * lret = self->getStage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderStage >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderBin::getStage
	static int _bind_getStage(lua_State *L) {
		if (_lg_typecheck_getStage_overload_1(L)) return _bind_getStage_overload_1(L);
		if (_lg_typecheck_getStage_overload_2(L)) return _bind_getStage_overload_2(L);

		luaL_error(L, "error in function getStage, cannot match any of the overloads for function getStage:\n  getStage()\n  getStage()\n");
		return 0;
	}

	// int osgUtil::RenderBin::getBinNum() const
	static int _bind_getBinNum(lua_State *L) {
		if (!_lg_typecheck_getBinNum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgUtil::RenderBin::getBinNum() const function, expected prototype:\nint osgUtil::RenderBin::getBinNum() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgUtil::RenderBin::getBinNum() const");
		}
		int lret = self->getBinNum();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::RenderBin::StateGraphList & osgUtil::RenderBin::getStateGraphList()
	static int _bind_getStateGraphList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateGraphList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::StateGraphList & osgUtil::RenderBin::getStateGraphList() function, expected prototype:\nosgUtil::RenderBin::StateGraphList & osgUtil::RenderBin::getStateGraphList()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderBin::StateGraphList & osgUtil::RenderBin::getStateGraphList()");
		}
		const osgUtil::RenderBin::StateGraphList* lret = &self->getStateGraphList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::StateGraphList >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderBin::StateGraphList & osgUtil::RenderBin::getStateGraphList() const
	static int _bind_getStateGraphList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateGraphList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderBin::StateGraphList & osgUtil::RenderBin::getStateGraphList() const function, expected prototype:\nconst osgUtil::RenderBin::StateGraphList & osgUtil::RenderBin::getStateGraphList() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderBin::StateGraphList & osgUtil::RenderBin::getStateGraphList() const");
		}
		const osgUtil::RenderBin::StateGraphList* lret = &self->getStateGraphList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::StateGraphList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderBin::getStateGraphList
	static int _bind_getStateGraphList(lua_State *L) {
		if (_lg_typecheck_getStateGraphList_overload_1(L)) return _bind_getStateGraphList_overload_1(L);
		if (_lg_typecheck_getStateGraphList_overload_2(L)) return _bind_getStateGraphList_overload_2(L);

		luaL_error(L, "error in function getStateGraphList, cannot match any of the overloads for function getStateGraphList:\n  getStateGraphList()\n  getStateGraphList()\n");
		return 0;
	}

	// osgUtil::RenderBin::RenderBinList & osgUtil::RenderBin::getRenderBinList()
	static int _bind_getRenderBinList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderBinList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::RenderBinList & osgUtil::RenderBin::getRenderBinList() function, expected prototype:\nosgUtil::RenderBin::RenderBinList & osgUtil::RenderBin::getRenderBinList()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderBin::RenderBinList & osgUtil::RenderBin::getRenderBinList()");
		}
		const osgUtil::RenderBin::RenderBinList* lret = &self->getRenderBinList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::RenderBinList >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderBin::RenderBinList & osgUtil::RenderBin::getRenderBinList() const
	static int _bind_getRenderBinList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderBinList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderBin::RenderBinList & osgUtil::RenderBin::getRenderBinList() const function, expected prototype:\nconst osgUtil::RenderBin::RenderBinList & osgUtil::RenderBin::getRenderBinList() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderBin::RenderBinList & osgUtil::RenderBin::getRenderBinList() const");
		}
		const osgUtil::RenderBin::RenderBinList* lret = &self->getRenderBinList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::RenderBinList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderBin::getRenderBinList
	static int _bind_getRenderBinList(lua_State *L) {
		if (_lg_typecheck_getRenderBinList_overload_1(L)) return _bind_getRenderBinList_overload_1(L);
		if (_lg_typecheck_getRenderBinList_overload_2(L)) return _bind_getRenderBinList_overload_2(L);

		luaL_error(L, "error in function getRenderBinList, cannot match any of the overloads for function getRenderBinList:\n  getRenderBinList()\n  getRenderBinList()\n");
		return 0;
	}

	// osgUtil::RenderBin::RenderLeafList & osgUtil::RenderBin::getRenderLeafList()
	static int _bind_getRenderLeafList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getRenderLeafList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::RenderLeafList & osgUtil::RenderBin::getRenderLeafList() function, expected prototype:\nosgUtil::RenderBin::RenderLeafList & osgUtil::RenderBin::getRenderLeafList()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderBin::RenderLeafList & osgUtil::RenderBin::getRenderLeafList()");
		}
		const osgUtil::RenderBin::RenderLeafList* lret = &self->getRenderLeafList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::RenderLeafList >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderBin::RenderLeafList & osgUtil::RenderBin::getRenderLeafList() const
	static int _bind_getRenderLeafList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getRenderLeafList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderBin::RenderLeafList & osgUtil::RenderBin::getRenderLeafList() const function, expected prototype:\nconst osgUtil::RenderBin::RenderLeafList & osgUtil::RenderBin::getRenderLeafList() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderBin::RenderLeafList & osgUtil::RenderBin::getRenderLeafList() const");
		}
		const osgUtil::RenderBin::RenderLeafList* lret = &self->getRenderLeafList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::RenderLeafList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderBin::getRenderLeafList
	static int _bind_getRenderLeafList(lua_State *L) {
		if (_lg_typecheck_getRenderLeafList_overload_1(L)) return _bind_getRenderLeafList_overload_1(L);
		if (_lg_typecheck_getRenderLeafList_overload_2(L)) return _bind_getRenderLeafList_overload_2(L);

		luaL_error(L, "error in function getRenderLeafList, cannot match any of the overloads for function getRenderLeafList:\n  getRenderLeafList()\n  getRenderLeafList()\n");
		return 0;
	}

	// osgUtil::RenderBin * osgUtil::RenderBin::find_or_insert(int binNum, const std::string & binName)
	static int _bind_find_or_insert(lua_State *L) {
		if (!_lg_typecheck_find_or_insert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin * osgUtil::RenderBin::find_or_insert(int binNum, const std::string & binName) function, expected prototype:\nosgUtil::RenderBin * osgUtil::RenderBin::find_or_insert(int binNum, const std::string & binName)\nClass arguments details:\n");
		}

		int binNum=(int)lua_tointeger(L,2);
		std::string binName(lua_tostring(L,3),lua_objlen(L,3));

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderBin * osgUtil::RenderBin::find_or_insert(int, const std::string &)");
		}
		osgUtil::RenderBin * lret = self->find_or_insert(binNum, binName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderBin::addStateGraph(osgUtil::StateGraph * rg)
	static int _bind_addStateGraph(lua_State *L) {
		if (!_lg_typecheck_addStateGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::addStateGraph(osgUtil::StateGraph * rg) function, expected prototype:\nvoid osgUtil::RenderBin::addStateGraph(osgUtil::StateGraph * rg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::StateGraph* rg=dynamic_cast< osgUtil::StateGraph* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::addStateGraph(osgUtil::StateGraph *)");
		}
		self->addStateGraph(rg);

		return 0;
	}

	// void osgUtil::RenderBin::sort()
	static int _bind_sort(lua_State *L) {
		if (!_lg_typecheck_sort(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::sort() function, expected prototype:\nvoid osgUtil::RenderBin::sort()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::sort()");
		}
		self->sort();

		return 0;
	}

	// void osgUtil::RenderBin::sortImplementation()
	static int _bind_sortImplementation(lua_State *L) {
		if (!_lg_typecheck_sortImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::sortImplementation() function, expected prototype:\nvoid osgUtil::RenderBin::sortImplementation()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::sortImplementation()");
		}
		self->sortImplementation();

		return 0;
	}

	// void osgUtil::RenderBin::setSortMode(osgUtil::RenderBin::SortMode mode)
	static int _bind_setSortMode(lua_State *L) {
		if (!_lg_typecheck_setSortMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::setSortMode(osgUtil::RenderBin::SortMode mode) function, expected prototype:\nvoid osgUtil::RenderBin::setSortMode(osgUtil::RenderBin::SortMode mode)\nClass arguments details:\n");
		}

		osgUtil::RenderBin::SortMode mode=(osgUtil::RenderBin::SortMode)lua_tointeger(L,2);

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::setSortMode(osgUtil::RenderBin::SortMode)");
		}
		self->setSortMode(mode);

		return 0;
	}

	// osgUtil::RenderBin::SortMode osgUtil::RenderBin::getSortMode() const
	static int _bind_getSortMode(lua_State *L) {
		if (!_lg_typecheck_getSortMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::SortMode osgUtil::RenderBin::getSortMode() const function, expected prototype:\nosgUtil::RenderBin::SortMode osgUtil::RenderBin::getSortMode() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderBin::SortMode osgUtil::RenderBin::getSortMode() const");
		}
		osgUtil::RenderBin::SortMode lret = self->getSortMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderBin::sortByState()
	static int _bind_sortByState(lua_State *L) {
		if (!_lg_typecheck_sortByState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::sortByState() function, expected prototype:\nvoid osgUtil::RenderBin::sortByState()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::sortByState()");
		}
		self->sortByState();

		return 0;
	}

	// void osgUtil::RenderBin::sortByStateThenFrontToBack()
	static int _bind_sortByStateThenFrontToBack(lua_State *L) {
		if (!_lg_typecheck_sortByStateThenFrontToBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::sortByStateThenFrontToBack() function, expected prototype:\nvoid osgUtil::RenderBin::sortByStateThenFrontToBack()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::sortByStateThenFrontToBack()");
		}
		self->sortByStateThenFrontToBack();

		return 0;
	}

	// void osgUtil::RenderBin::sortFrontToBack()
	static int _bind_sortFrontToBack(lua_State *L) {
		if (!_lg_typecheck_sortFrontToBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::sortFrontToBack() function, expected prototype:\nvoid osgUtil::RenderBin::sortFrontToBack()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::sortFrontToBack()");
		}
		self->sortFrontToBack();

		return 0;
	}

	// void osgUtil::RenderBin::sortBackToFront()
	static int _bind_sortBackToFront(lua_State *L) {
		if (!_lg_typecheck_sortBackToFront(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::sortBackToFront() function, expected prototype:\nvoid osgUtil::RenderBin::sortBackToFront()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::sortBackToFront()");
		}
		self->sortBackToFront();

		return 0;
	}

	// void osgUtil::RenderBin::sortTraversalOrder()
	static int _bind_sortTraversalOrder(lua_State *L) {
		if (!_lg_typecheck_sortTraversalOrder(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::sortTraversalOrder() function, expected prototype:\nvoid osgUtil::RenderBin::sortTraversalOrder()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::sortTraversalOrder()");
		}
		self->sortTraversalOrder();

		return 0;
	}

	// void osgUtil::RenderBin::setSortCallback(osgUtil::RenderBin::SortCallback * sortCallback)
	static int _bind_setSortCallback(lua_State *L) {
		if (!_lg_typecheck_setSortCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::setSortCallback(osgUtil::RenderBin::SortCallback * sortCallback) function, expected prototype:\nvoid osgUtil::RenderBin::setSortCallback(osgUtil::RenderBin::SortCallback * sortCallback)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderBin::SortCallback* sortCallback=dynamic_cast< osgUtil::RenderBin::SortCallback* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::setSortCallback(osgUtil::RenderBin::SortCallback *)");
		}
		self->setSortCallback(sortCallback);

		return 0;
	}

	// osgUtil::RenderBin::SortCallback * osgUtil::RenderBin::getSortCallback()
	static int _bind_getSortCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSortCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::SortCallback * osgUtil::RenderBin::getSortCallback() function, expected prototype:\nosgUtil::RenderBin::SortCallback * osgUtil::RenderBin::getSortCallback()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderBin::SortCallback * osgUtil::RenderBin::getSortCallback()");
		}
		osgUtil::RenderBin::SortCallback * lret = self->getSortCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::SortCallback >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderBin::SortCallback * osgUtil::RenderBin::getSortCallback() const
	static int _bind_getSortCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSortCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderBin::SortCallback * osgUtil::RenderBin::getSortCallback() const function, expected prototype:\nconst osgUtil::RenderBin::SortCallback * osgUtil::RenderBin::getSortCallback() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderBin::SortCallback * osgUtil::RenderBin::getSortCallback() const");
		}
		const osgUtil::RenderBin::SortCallback * lret = self->getSortCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::SortCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderBin::getSortCallback
	static int _bind_getSortCallback(lua_State *L) {
		if (_lg_typecheck_getSortCallback_overload_1(L)) return _bind_getSortCallback_overload_1(L);
		if (_lg_typecheck_getSortCallback_overload_2(L)) return _bind_getSortCallback_overload_2(L);

		luaL_error(L, "error in function getSortCallback, cannot match any of the overloads for function getSortCallback:\n  getSortCallback()\n  getSortCallback()\n");
		return 0;
	}

	// void osgUtil::RenderBin::draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderBin::draw(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderBin::draw function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::draw(osg::RenderInfo &, osgUtil::RenderLeaf *&)");
		}
		self->draw(renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderBin::drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous) function, expected prototype:\nvoid osgUtil::RenderBin::drawImplementation(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf *& previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderBin::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::drawImplementation(osg::RenderInfo &, osgUtil::RenderLeaf *&)");
		}
		self->drawImplementation(renderInfo, previous);

		return 0;
	}

	// void osgUtil::RenderBin::setDrawCallback(osgUtil::RenderBin::DrawCallback * drawCallback)
	static int _bind_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_setDrawCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::setDrawCallback(osgUtil::RenderBin::DrawCallback * drawCallback) function, expected prototype:\nvoid osgUtil::RenderBin::setDrawCallback(osgUtil::RenderBin::DrawCallback * drawCallback)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderBin::DrawCallback* drawCallback=dynamic_cast< osgUtil::RenderBin::DrawCallback* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::setDrawCallback(osgUtil::RenderBin::DrawCallback *)");
		}
		self->setDrawCallback(drawCallback);

		return 0;
	}

	// osgUtil::RenderBin::DrawCallback * osgUtil::RenderBin::getDrawCallback()
	static int _bind_getDrawCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDrawCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderBin::DrawCallback * osgUtil::RenderBin::getDrawCallback() function, expected prototype:\nosgUtil::RenderBin::DrawCallback * osgUtil::RenderBin::getDrawCallback()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::RenderBin::DrawCallback * osgUtil::RenderBin::getDrawCallback()");
		}
		osgUtil::RenderBin::DrawCallback * lret = self->getDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::RenderBin::DrawCallback * osgUtil::RenderBin::getDrawCallback() const
	static int _bind_getDrawCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDrawCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::RenderBin::DrawCallback * osgUtil::RenderBin::getDrawCallback() const function, expected prototype:\nconst osgUtil::RenderBin::DrawCallback * osgUtil::RenderBin::getDrawCallback() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::RenderBin::DrawCallback * osgUtil::RenderBin::getDrawCallback() const");
		}
		const osgUtil::RenderBin::DrawCallback * lret = self->getDrawCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::RenderBin::DrawCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::RenderBin::getDrawCallback
	static int _bind_getDrawCallback(lua_State *L) {
		if (_lg_typecheck_getDrawCallback_overload_1(L)) return _bind_getDrawCallback_overload_1(L);
		if (_lg_typecheck_getDrawCallback_overload_2(L)) return _bind_getDrawCallback_overload_2(L);

		luaL_error(L, "error in function getDrawCallback, cannot match any of the overloads for function getDrawCallback:\n  getDrawCallback()\n  getDrawCallback()\n");
		return 0;
	}

	// bool osgUtil::RenderBin::getStats(osgUtil::Statistics & primStats) const
	static int _bind_getStats(lua_State *L) {
		if (!_lg_typecheck_getStats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::RenderBin::getStats(osgUtil::Statistics & primStats) const function, expected prototype:\nbool osgUtil::RenderBin::getStats(osgUtil::Statistics & primStats) const\nClass arguments details:\narg 1 ID = 95996950\n");
		}

		osgUtil::Statistics* primStats_ptr=(Luna< osgUtil::Statistics >::check(L,2));
		if( !primStats_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg primStats in osgUtil::RenderBin::getStats function");
		}
		osgUtil::Statistics & primStats=*primStats_ptr;

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::RenderBin::getStats(osgUtil::Statistics &) const");
		}
		bool lret = self->getStats(primStats);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osgUtil::RenderBin::computeNumberOfDynamicRenderLeaves() const
	static int _bind_computeNumberOfDynamicRenderLeaves(lua_State *L) {
		if (!_lg_typecheck_computeNumberOfDynamicRenderLeaves(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderBin::computeNumberOfDynamicRenderLeaves() const function, expected prototype:\nunsigned int osgUtil::RenderBin::computeNumberOfDynamicRenderLeaves() const\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderBin::computeNumberOfDynamicRenderLeaves() const");
		}
		unsigned int lret = self->computeNumberOfDynamicRenderLeaves();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderBin::copyLeavesFromStateGraphListToRenderLeafList()
	static int _bind_copyLeavesFromStateGraphListToRenderLeafList(lua_State *L) {
		if (!_lg_typecheck_copyLeavesFromStateGraphListToRenderLeafList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::copyLeavesFromStateGraphListToRenderLeafList() function, expected prototype:\nvoid osgUtil::RenderBin::copyLeavesFromStateGraphListToRenderLeafList()\nClass arguments details:\n");
		}


		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::copyLeavesFromStateGraphListToRenderLeafList()");
		}
		self->copyLeavesFromStateGraphListToRenderLeafList();

		return 0;
	}

	// void osgUtil::RenderBin::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderBin::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgUtil::RenderBin::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osgUtil::RenderBin* self=dynamic_cast< osgUtil::RenderBin* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderBin::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderBin* LunaTraits< osgUtil::RenderBin >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_RenderBin::_bind_ctor(L);
}

void LunaTraits< osgUtil::RenderBin >::_bind_dtor(osgUtil::RenderBin* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderBin >::className[] = "RenderBin";
const char LunaTraits< osgUtil::RenderBin >::fullName[] = "osgUtil::RenderBin";
const char LunaTraits< osgUtil::RenderBin >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderBin >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgUtil::RenderBin >::hash = 43888398;
const int LunaTraits< osgUtil::RenderBin >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderBin >::methods[] = {
	{"createRenderBin", &luna_wrapper_osgUtil_RenderBin::_bind_createRenderBin},
	{"getRenderBinPrototype", &luna_wrapper_osgUtil_RenderBin::_bind_getRenderBinPrototype},
	{"addRenderBinPrototype", &luna_wrapper_osgUtil_RenderBin::_bind_addRenderBinPrototype},
	{"removeRenderBinPrototype", &luna_wrapper_osgUtil_RenderBin::_bind_removeRenderBinPrototype},
	{"setDefaultRenderBinSortMode", &luna_wrapper_osgUtil_RenderBin::_bind_setDefaultRenderBinSortMode},
	{"getDefaultRenderBinSortMode", &luna_wrapper_osgUtil_RenderBin::_bind_getDefaultRenderBinSortMode},
	{"cloneType", &luna_wrapper_osgUtil_RenderBin::_bind_cloneType},
	{"clone", &luna_wrapper_osgUtil_RenderBin::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgUtil_RenderBin::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgUtil_RenderBin::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_RenderBin::_bind_className},
	{"reset", &luna_wrapper_osgUtil_RenderBin::_bind_reset},
	{"setStateSet", &luna_wrapper_osgUtil_RenderBin::_bind_setStateSet},
	{"getStateSet", &luna_wrapper_osgUtil_RenderBin::_bind_getStateSet},
	{"getParent", &luna_wrapper_osgUtil_RenderBin::_bind_getParent},
	{"getStage", &luna_wrapper_osgUtil_RenderBin::_bind_getStage},
	{"getBinNum", &luna_wrapper_osgUtil_RenderBin::_bind_getBinNum},
	{"getStateGraphList", &luna_wrapper_osgUtil_RenderBin::_bind_getStateGraphList},
	{"getRenderBinList", &luna_wrapper_osgUtil_RenderBin::_bind_getRenderBinList},
	{"getRenderLeafList", &luna_wrapper_osgUtil_RenderBin::_bind_getRenderLeafList},
	{"find_or_insert", &luna_wrapper_osgUtil_RenderBin::_bind_find_or_insert},
	{"addStateGraph", &luna_wrapper_osgUtil_RenderBin::_bind_addStateGraph},
	{"sort", &luna_wrapper_osgUtil_RenderBin::_bind_sort},
	{"sortImplementation", &luna_wrapper_osgUtil_RenderBin::_bind_sortImplementation},
	{"setSortMode", &luna_wrapper_osgUtil_RenderBin::_bind_setSortMode},
	{"getSortMode", &luna_wrapper_osgUtil_RenderBin::_bind_getSortMode},
	{"sortByState", &luna_wrapper_osgUtil_RenderBin::_bind_sortByState},
	{"sortByStateThenFrontToBack", &luna_wrapper_osgUtil_RenderBin::_bind_sortByStateThenFrontToBack},
	{"sortFrontToBack", &luna_wrapper_osgUtil_RenderBin::_bind_sortFrontToBack},
	{"sortBackToFront", &luna_wrapper_osgUtil_RenderBin::_bind_sortBackToFront},
	{"sortTraversalOrder", &luna_wrapper_osgUtil_RenderBin::_bind_sortTraversalOrder},
	{"setSortCallback", &luna_wrapper_osgUtil_RenderBin::_bind_setSortCallback},
	{"getSortCallback", &luna_wrapper_osgUtil_RenderBin::_bind_getSortCallback},
	{"draw", &luna_wrapper_osgUtil_RenderBin::_bind_draw},
	{"drawImplementation", &luna_wrapper_osgUtil_RenderBin::_bind_drawImplementation},
	{"setDrawCallback", &luna_wrapper_osgUtil_RenderBin::_bind_setDrawCallback},
	{"getDrawCallback", &luna_wrapper_osgUtil_RenderBin::_bind_getDrawCallback},
	{"getStats", &luna_wrapper_osgUtil_RenderBin::_bind_getStats},
	{"computeNumberOfDynamicRenderLeaves", &luna_wrapper_osgUtil_RenderBin::_bind_computeNumberOfDynamicRenderLeaves},
	{"copyLeavesFromStateGraphListToRenderLeafList", &luna_wrapper_osgUtil_RenderBin::_bind_copyLeavesFromStateGraphListToRenderLeafList},
	{"releaseGLObjects", &luna_wrapper_osgUtil_RenderBin::_bind_releaseGLObjects},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderBin >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderBin::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderBin >::enumValues[] = {
	{"SORT_BY_STATE", osgUtil::RenderBin::SORT_BY_STATE},
	{"SORT_BY_STATE_THEN_FRONT_TO_BACK", osgUtil::RenderBin::SORT_BY_STATE_THEN_FRONT_TO_BACK},
	{"SORT_FRONT_TO_BACK", osgUtil::RenderBin::SORT_FRONT_TO_BACK},
	{"SORT_BACK_TO_FRONT", osgUtil::RenderBin::SORT_BACK_TO_FRONT},
	{"TRAVERSAL_ORDER", osgUtil::RenderBin::TRAVERSAL_ORDER},
	{0,0}
};

