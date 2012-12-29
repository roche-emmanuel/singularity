#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_EdgeCollector_Edge.h>

class luna_wrapper_osgUtil_EdgeCollector_Edge {
public:
	typedef Luna< osgUtil::EdgeCollector::Edge > luna_t;

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

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgUtil::EdgeCollector::Edge* ptr= dynamic_cast< osgUtil::EdgeCollector::Edge* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::EdgeCollector::Edge* ptr= luna_caster< osg::Referenced, osgUtil::EdgeCollector::Edge >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::EdgeCollector::Edge >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOrderedPoints(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addTriangle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBoundaryEdge(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isAdjacentToBoundary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_endConnected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginConnected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	// void osgUtil::EdgeCollector::Edge::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::clear() function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::clear()\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::clear()");
		}
		self->clear();

		return 0;
	}

	// void osgUtil::EdgeCollector::Edge::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2)
	static int _bind_setOrderedPoints(lua_State *L) {
		if (!_lg_typecheck_setOrderedPoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osgUtil::EdgeCollector::Point* p1=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,2));
		osgUtil::EdgeCollector::Point* p2=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,3));

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::setOrderedPoints(osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *)");
		}
		self->setOrderedPoints(p1, p2);

		return 0;
	}

	// void osgUtil::EdgeCollector::Edge::addTriangle(osgUtil::EdgeCollector::Triangle * triangle)
	static int _bind_addTriangle(lua_State *L) {
		if (!_lg_typecheck_addTriangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::addTriangle(osgUtil::EdgeCollector::Triangle * triangle) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::addTriangle(osgUtil::EdgeCollector::Triangle * triangle)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::EdgeCollector::Triangle* triangle=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,2));

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::addTriangle(osgUtil::EdgeCollector::Triangle *)");
		}
		self->addTriangle(triangle);

		return 0;
	}

	// bool osgUtil::EdgeCollector::Edge::isBoundaryEdge() const
	static int _bind_isBoundaryEdge(lua_State *L) {
		if (!_lg_typecheck_isBoundaryEdge(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::isBoundaryEdge() const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::isBoundaryEdge() const\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::isBoundaryEdge() const");
		}
		bool lret = self->isBoundaryEdge();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::isAdjacentToBoundary() const
	static int _bind_isAdjacentToBoundary(lua_State *L) {
		if (!_lg_typecheck_isAdjacentToBoundary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::isAdjacentToBoundary() const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::isAdjacentToBoundary() const\nClass arguments details:\n");
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::isAdjacentToBoundary() const");
		}
		bool lret = self->isAdjacentToBoundary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::endConnected(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind_endConnected(lua_State *L) {
		if (!_lg_typecheck_endConnected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::endConnected(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::endConnected(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::endConnected function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::endConnected(const osgUtil::EdgeCollector::Edge &) const");
		}
		bool lret = self->endConnected(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::beginConnected(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind_beginConnected(lua_State *L) {
		if (!_lg_typecheck_beginConnected(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::beginConnected(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::beginConnected(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::beginConnected function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::beginConnected(const osgUtil::EdgeCollector::Edge &) const");
		}
		bool lret = self->beginConnected(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// bool osgUtil::EdgeCollector::Edge::operator<(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::operator<(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::operator<(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::operator< function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::operator<(const osgUtil::EdgeCollector::Edge &) const");
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::operator==(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::operator==(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::operator==(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::operator== function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::operator==(const osgUtil::EdgeCollector::Edge &) const");
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::operator!=(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::operator!=(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::operator!=(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::operator!= function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::operator!=(const osgUtil::EdgeCollector::Edge &) const");
		}
		bool lret = self->operator!=(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::EdgeCollector::Edge* LunaTraits< osgUtil::EdgeCollector::Edge >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::EdgeCollector::Edge >::_bind_dtor(osgUtil::EdgeCollector::Edge* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::EdgeCollector::Edge >::className[] = "EdgeCollector_Edge";
const char LunaTraits< osgUtil::EdgeCollector::Edge >::fullName[] = "osgUtil::EdgeCollector::Edge";
const char LunaTraits< osgUtil::EdgeCollector::Edge >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::Edge >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::EdgeCollector::Edge >::hash = 2207058;
const int LunaTraits< osgUtil::EdgeCollector::Edge >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::Edge >::methods[] = {
	{"clear", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_clear},
	{"setOrderedPoints", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_setOrderedPoints},
	{"addTriangle", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_addTriangle},
	{"isBoundaryEdge", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_isBoundaryEdge},
	{"isAdjacentToBoundary", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_isAdjacentToBoundary},
	{"endConnected", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_endConnected},
	{"beginConnected", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_beginConnected},
	{"__lt", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind___lt},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind___eq},
	{"op_neq", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_op_neq},
	{"getTable", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::Edge >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_EdgeCollector_Edge::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::Edge >::enumValues[] = {
	{0,0}
};


