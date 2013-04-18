#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_TerrainNode.h>

class luna_wrapper_sgt_TerrainNode {
public:
	typedef Luna< sgt::TerrainNode > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainNode* self=(Luna< sgt::TerrainNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<sgt::TerrainNode,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32276046) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::TerrainNode*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainNode* rhs =(Luna< sgt::TerrainNode >::check(L,2));
		sgt::TerrainNode* self=(Luna< sgt::TerrainNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::TerrainNode* self= (sgt::TerrainNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::TerrainNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32276046) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::TerrainNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::TerrainNode* self=(Luna< sgt::TerrainNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::TerrainNode");
		
		return luna_dynamicCast(L,converters,"sgt::TerrainNode",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getDeformedFrustumPlanes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::TerrainNode::TerrainNode()
	static sgt::TerrainNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TerrainNode::TerrainNode() function, expected prototype:\nsgt::TerrainNode::TerrainNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::TerrainNode();
	}

	// sgt::TerrainNode::TerrainNode(lua_Table * data)
	static sgt::TerrainNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::TerrainNode::TerrainNode(lua_Table * data) function, expected prototype:\nsgt::TerrainNode::TerrainNode(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_TerrainNode(L,NULL);
	}

	// Overload binder for sgt::TerrainNode::TerrainNode
	static sgt::TerrainNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TerrainNode, cannot match any of the overloads for function TerrainNode:\n  TerrainNode()\n  TerrainNode(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const osg::Polytope::PlaneList & sgt::TerrainNode::getDeformedFrustumPlanes() const
	static int _bind_getDeformedFrustumPlanes(lua_State *L) {
		if (!_lg_typecheck_getDeformedFrustumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Polytope::PlaneList & sgt::TerrainNode::getDeformedFrustumPlanes() const function, expected prototype:\nconst osg::Polytope::PlaneList & sgt::TerrainNode::getDeformedFrustumPlanes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::TerrainNode* self=(Luna< sgt::TerrainNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Polytope::PlaneList & sgt::TerrainNode::getDeformedFrustumPlanes() const. Got : '%s'\n%s",typeid(Luna< sgt::TerrainNode >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Polytope::PlaneList* lret = &self->getDeformedFrustumPlanes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Polytope::PlaneList >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

sgt::TerrainNode* LunaTraits< sgt::TerrainNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_TerrainNode::_bind_ctor(L);
}

void LunaTraits< sgt::TerrainNode >::_bind_dtor(sgt::TerrainNode* obj) {
	delete obj;
}

const char LunaTraits< sgt::TerrainNode >::className[] = "TerrainNode";
const char LunaTraits< sgt::TerrainNode >::fullName[] = "sgt::TerrainNode";
const char LunaTraits< sgt::TerrainNode >::moduleName[] = "sgt";
const char* LunaTraits< sgt::TerrainNode >::parents[] = {0};
const int LunaTraits< sgt::TerrainNode >::hash = 32276046;
const int LunaTraits< sgt::TerrainNode >::uniqueIDs[] = {32276046,0};

luna_RegType LunaTraits< sgt::TerrainNode >::methods[] = {
	{"getDeformedFrustumPlanes", &luna_wrapper_sgt_TerrainNode::_bind_getDeformedFrustumPlanes},
	{"dynCast", &luna_wrapper_sgt_TerrainNode::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_TerrainNode::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_TerrainNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_TerrainNode::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_TerrainNode::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::TerrainNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::TerrainNode >::enumValues[] = {
	{0,0}
};


