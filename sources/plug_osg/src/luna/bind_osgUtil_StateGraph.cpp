#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_StateGraph.h>

class luna_wrapper_osgUtil_StateGraph {
public:
	typedef Luna< osgUtil::StateGraph > luna_t;

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
		//osgUtil::StateGraph* ptr= dynamic_cast< osgUtil::StateGraph* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::StateGraph* ptr= luna_caster< osg::Referenced, osgUtil::StateGraph >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::StateGraph >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_leaves_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAverageDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMinimumDistance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sortFrontToBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clean(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_prune(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_find_or_insert(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addLeaf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveStateGraph(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveToRootStateGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_numToPop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::StateGraph::StateGraph()
	static osgUtil::StateGraph* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph::StateGraph() function, expected prototype:\nosgUtil::StateGraph::StateGraph()\nClass arguments details:\n");
		}


		return new osgUtil::StateGraph();
	}

	// osgUtil::StateGraph::StateGraph(osgUtil::StateGraph * parent, const osg::StateSet * stateset)
	static osgUtil::StateGraph* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph::StateGraph(osgUtil::StateGraph * parent, const osg::StateSet * stateset) function, expected prototype:\nosgUtil::StateGraph::StateGraph(osgUtil::StateGraph * parent, const osg::StateSet * stateset)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osgUtil::StateGraph* parent=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1));
		const osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		return new osgUtil::StateGraph(parent, stateset);
	}

	// osgUtil::StateGraph::StateGraph(lua_Table * data)
	static osgUtil::StateGraph* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph::StateGraph(lua_Table * data) function, expected prototype:\nosgUtil::StateGraph::StateGraph(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_StateGraph(L,NULL);
	}

	// osgUtil::StateGraph::StateGraph(lua_Table * data, osgUtil::StateGraph * parent, const osg::StateSet * stateset)
	static osgUtil::StateGraph* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph::StateGraph(lua_Table * data, osgUtil::StateGraph * parent, const osg::StateSet * stateset) function, expected prototype:\nosgUtil::StateGraph::StateGraph(lua_Table * data, osgUtil::StateGraph * parent, const osg::StateSet * stateset)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		osgUtil::StateGraph* parent=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,2));
		const osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,3));

		return new wrapper_osgUtil_StateGraph(L,NULL, parent, stateset);
	}

	// Overload binder for osgUtil::StateGraph::StateGraph
	static osgUtil::StateGraph* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function StateGraph, cannot match any of the overloads for function StateGraph:\n  StateGraph()\n  StateGraph(osgUtil::StateGraph *, const osg::StateSet *)\n  StateGraph(lua_Table *)\n  StateGraph(lua_Table *, osgUtil::StateGraph *, const osg::StateSet *)\n");
		return NULL;
	}


	// Function binds:
	// osgUtil::StateGraph * osgUtil::StateGraph::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph * osgUtil::StateGraph::cloneType() const function, expected prototype:\nosgUtil::StateGraph * osgUtil::StateGraph::cloneType() const\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StateGraph * osgUtil::StateGraph::cloneType() const");
		}
		osgUtil::StateGraph * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::StateGraph::setUserData(osg::Referenced * obj)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateGraph::setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgUtil::StateGraph::setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateGraph::setUserData(osg::Referenced *)");
		}
		self->setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgUtil::StateGraph::getUserData()
	static int _bind_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgUtil::StateGraph::getUserData() function, expected prototype:\nosg::Referenced * osgUtil::StateGraph::getUserData()\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgUtil::StateGraph::getUserData()");
		}
		osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgUtil::StateGraph::getUserData() const
	static int _bind_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgUtil::StateGraph::getUserData() const function, expected prototype:\nconst osg::Referenced * osgUtil::StateGraph::getUserData() const\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgUtil::StateGraph::getUserData() const");
		}
		const osg::Referenced * lret = self->getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::StateGraph::getUserData
	static int _bind_getUserData(lua_State *L) {
		if (_lg_typecheck_getUserData_overload_1(L)) return _bind_getUserData_overload_1(L);
		if (_lg_typecheck_getUserData_overload_2(L)) return _bind_getUserData_overload_2(L);

		luaL_error(L, "error in function getUserData, cannot match any of the overloads for function getUserData:\n  getUserData()\n  getUserData()\n");
		return 0;
	}

	// const osg::StateSet * osgUtil::StateGraph::getStateSet() const
	static int _bind_getStateSet(lua_State *L) {
		if (!_lg_typecheck_getStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgUtil::StateGraph::getStateSet() const function, expected prototype:\nconst osg::StateSet * osgUtil::StateGraph::getStateSet() const\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgUtil::StateGraph::getStateSet() const");
		}
		const osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::StateGraph::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::StateGraph::empty() const function, expected prototype:\nbool osgUtil::StateGraph::empty() const\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::StateGraph::empty() const");
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::StateGraph::leaves_empty() const
	static int _bind_leaves_empty(lua_State *L) {
		if (!_lg_typecheck_leaves_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::StateGraph::leaves_empty() const function, expected prototype:\nbool osgUtil::StateGraph::leaves_empty() const\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::StateGraph::leaves_empty() const");
		}
		bool lret = self->leaves_empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float osgUtil::StateGraph::getAverageDistance() const
	static int _bind_getAverageDistance(lua_State *L) {
		if (!_lg_typecheck_getAverageDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::StateGraph::getAverageDistance() const function, expected prototype:\nfloat osgUtil::StateGraph::getAverageDistance() const\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::StateGraph::getAverageDistance() const");
		}
		float lret = self->getAverageDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::StateGraph::getMinimumDistance() const
	static int _bind_getMinimumDistance(lua_State *L) {
		if (!_lg_typecheck_getMinimumDistance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::StateGraph::getMinimumDistance() const function, expected prototype:\nfloat osgUtil::StateGraph::getMinimumDistance() const\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::StateGraph::getMinimumDistance() const");
		}
		float lret = self->getMinimumDistance();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::StateGraph::sortFrontToBack()
	static int _bind_sortFrontToBack(lua_State *L) {
		if (!_lg_typecheck_sortFrontToBack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateGraph::sortFrontToBack() function, expected prototype:\nvoid osgUtil::StateGraph::sortFrontToBack()\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateGraph::sortFrontToBack()");
		}
		self->sortFrontToBack();

		return 0;
	}

	// void osgUtil::StateGraph::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateGraph::reset() function, expected prototype:\nvoid osgUtil::StateGraph::reset()\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateGraph::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::StateGraph::clean()
	static int _bind_clean(lua_State *L) {
		if (!_lg_typecheck_clean(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateGraph::clean() function, expected prototype:\nvoid osgUtil::StateGraph::clean()\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateGraph::clean()");
		}
		self->clean();

		return 0;
	}

	// void osgUtil::StateGraph::prune()
	static int _bind_prune(lua_State *L) {
		if (!_lg_typecheck_prune(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateGraph::prune() function, expected prototype:\nvoid osgUtil::StateGraph::prune()\nClass arguments details:\n");
		}


		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateGraph::prune()");
		}
		self->prune();

		return 0;
	}

	// osgUtil::StateGraph * osgUtil::StateGraph::find_or_insert(const osg::StateSet * stateset)
	static int _bind_find_or_insert(lua_State *L) {
		if (!_lg_typecheck_find_or_insert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::StateGraph * osgUtil::StateGraph::find_or_insert(const osg::StateSet * stateset) function, expected prototype:\nosgUtil::StateGraph * osgUtil::StateGraph::find_or_insert(const osg::StateSet * stateset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::StateGraph * osgUtil::StateGraph::find_or_insert(const osg::StateSet *)");
		}
		osgUtil::StateGraph * lret = self->find_or_insert(stateset);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::StateGraph >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::StateGraph::addLeaf(osgUtil::RenderLeaf * leaf)
	static int _bind_addLeaf(lua_State *L) {
		if (!_lg_typecheck_addLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::StateGraph::addLeaf(osgUtil::RenderLeaf * leaf) function, expected prototype:\nvoid osgUtil::StateGraph::addLeaf(osgUtil::RenderLeaf * leaf)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::RenderLeaf* leaf=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,2));

		osgUtil::StateGraph* self=Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::StateGraph::addLeaf(osgUtil::RenderLeaf *)");
		}
		self->addLeaf(leaf);

		return 0;
	}

	// static void osgUtil::StateGraph::moveStateGraph(osg::State & state, osgUtil::StateGraph * sg_curr, osgUtil::StateGraph * sg_new)
	static int _bind_moveStateGraph(lua_State *L) {
		if (!_lg_typecheck_moveStateGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::StateGraph::moveStateGraph(osg::State & state, osgUtil::StateGraph * sg_curr, osgUtil::StateGraph * sg_new) function, expected prototype:\nstatic void osgUtil::StateGraph::moveStateGraph(osg::State & state, osgUtil::StateGraph * sg_curr, osgUtil::StateGraph * sg_new)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,1));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgUtil::StateGraph::moveStateGraph function");
		}
		osg::State & state=*state_ptr;
		osgUtil::StateGraph* sg_curr=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,2));
		osgUtil::StateGraph* sg_new=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,3));

		osgUtil::StateGraph::moveStateGraph(state, sg_curr, sg_new);

		return 0;
	}

	// static void osgUtil::StateGraph::moveToRootStateGraph(osg::State & state, osgUtil::StateGraph * sg_curr)
	static int _bind_moveToRootStateGraph(lua_State *L) {
		if (!_lg_typecheck_moveToRootStateGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osgUtil::StateGraph::moveToRootStateGraph(osg::State & state, osgUtil::StateGraph * sg_curr) function, expected prototype:\nstatic void osgUtil::StateGraph::moveToRootStateGraph(osg::State & state, osgUtil::StateGraph * sg_curr)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,1));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgUtil::StateGraph::moveToRootStateGraph function");
		}
		osg::State & state=*state_ptr;
		osgUtil::StateGraph* sg_curr=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,2));

		osgUtil::StateGraph::moveToRootStateGraph(state, sg_curr);

		return 0;
	}

	// static int osgUtil::StateGraph::numToPop(osgUtil::StateGraph * sg_curr)
	static int _bind_numToPop(lua_State *L) {
		if (!_lg_typecheck_numToPop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int osgUtil::StateGraph::numToPop(osgUtil::StateGraph * sg_curr) function, expected prototype:\nstatic int osgUtil::StateGraph::numToPop(osgUtil::StateGraph * sg_curr)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::StateGraph* sg_curr=(Luna< osg::Referenced >::checkSubType< osgUtil::StateGraph >(L,1));

		int lret = osgUtil::StateGraph::numToPop(sg_curr);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgUtil::StateGraph* LunaTraits< osgUtil::StateGraph >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_StateGraph::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::StateGraph >::_bind_dtor(osgUtil::StateGraph* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::StateGraph >::className[] = "StateGraph";
const char LunaTraits< osgUtil::StateGraph >::fullName[] = "osgUtil::StateGraph";
const char LunaTraits< osgUtil::StateGraph >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::StateGraph >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::StateGraph >::hash = 40778563;
const int LunaTraits< osgUtil::StateGraph >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::StateGraph >::methods[] = {
	{"cloneType", &luna_wrapper_osgUtil_StateGraph::_bind_cloneType},
	{"setUserData", &luna_wrapper_osgUtil_StateGraph::_bind_setUserData},
	{"getUserData", &luna_wrapper_osgUtil_StateGraph::_bind_getUserData},
	{"getStateSet", &luna_wrapper_osgUtil_StateGraph::_bind_getStateSet},
	{"empty", &luna_wrapper_osgUtil_StateGraph::_bind_empty},
	{"leaves_empty", &luna_wrapper_osgUtil_StateGraph::_bind_leaves_empty},
	{"getAverageDistance", &luna_wrapper_osgUtil_StateGraph::_bind_getAverageDistance},
	{"getMinimumDistance", &luna_wrapper_osgUtil_StateGraph::_bind_getMinimumDistance},
	{"sortFrontToBack", &luna_wrapper_osgUtil_StateGraph::_bind_sortFrontToBack},
	{"reset", &luna_wrapper_osgUtil_StateGraph::_bind_reset},
	{"clean", &luna_wrapper_osgUtil_StateGraph::_bind_clean},
	{"prune", &luna_wrapper_osgUtil_StateGraph::_bind_prune},
	{"find_or_insert", &luna_wrapper_osgUtil_StateGraph::_bind_find_or_insert},
	{"addLeaf", &luna_wrapper_osgUtil_StateGraph::_bind_addLeaf},
	{"moveStateGraph", &luna_wrapper_osgUtil_StateGraph::_bind_moveStateGraph},
	{"moveToRootStateGraph", &luna_wrapper_osgUtil_StateGraph::_bind_moveToRootStateGraph},
	{"numToPop", &luna_wrapper_osgUtil_StateGraph::_bind_numToPop},
	{"__eq", &luna_wrapper_osgUtil_StateGraph::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_StateGraph::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::StateGraph >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_StateGraph::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::StateGraph >::enumValues[] = {
	{0,0}
};


