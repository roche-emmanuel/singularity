#include <plug_common.h>

class luna_wrapper_b2TreeNode {
public:
	typedef Luna< b2TreeNode > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87178389) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(b2TreeNode*)");
		}

		b2TreeNode* rhs =(Luna< b2TreeNode >::check(L,2));
		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		b2TreeNode* self= (b2TreeNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< b2TreeNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87178389) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< b2TreeNode >::check(L,1));
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
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("b2TreeNode");
		
		return luna_dynamicCast(L,converters,"b2TreeNode",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_IsLeaf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAabb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUserData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChild1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChild2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAabb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53833672) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChild1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChild2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool b2TreeNode::IsLeaf() const
	static int _bind_IsLeaf(lua_State *L) {
		if (!_lg_typecheck_IsLeaf(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool b2TreeNode::IsLeaf() const function, expected prototype:\nbool b2TreeNode::IsLeaf() const\nClass arguments details:\n");
		}


		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool b2TreeNode::IsLeaf() const. Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		bool lret = self->IsLeaf();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// b2AABB b2TreeNode::aabb()
	static int _bind_getAabb(lua_State *L) {
		if (!_lg_typecheck_getAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in b2AABB b2TreeNode::aabb() function, expected prototype:\nb2AABB b2TreeNode::aabb()\nClass arguments details:\n");
		}


		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call b2AABB b2TreeNode::aabb(). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		const b2AABB* lret = &self->aabb;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2AABB >::push(L,lret,false);

		return 1;
	}

	// void * b2TreeNode::userData()
	static int _bind_getUserData(lua_State *L) {
		if (!_lg_typecheck_getUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * b2TreeNode::userData() function, expected prototype:\nvoid * b2TreeNode::userData()\nClass arguments details:\n");
		}


		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * b2TreeNode::userData(). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		void * lret = self->userData;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// signed int b2TreeNode::parent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2TreeNode::parent() function, expected prototype:\nsigned int b2TreeNode::parent()\nClass arguments details:\n");
		}


		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2TreeNode::parent(). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		signed int lret = self->parent;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2TreeNode::next()
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2TreeNode::next() function, expected prototype:\nsigned int b2TreeNode::next()\nClass arguments details:\n");
		}


		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2TreeNode::next(). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		signed int lret = self->next;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2TreeNode::child1()
	static int _bind_getChild1(lua_State *L) {
		if (!_lg_typecheck_getChild1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2TreeNode::child1() function, expected prototype:\nsigned int b2TreeNode::child1()\nClass arguments details:\n");
		}


		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2TreeNode::child1(). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		signed int lret = self->child1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2TreeNode::child2()
	static int _bind_getChild2(lua_State *L) {
		if (!_lg_typecheck_getChild2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2TreeNode::child2() function, expected prototype:\nsigned int b2TreeNode::child2()\nClass arguments details:\n");
		}


		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2TreeNode::child2(). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		signed int lret = self->child2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// signed int b2TreeNode::height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in signed int b2TreeNode::height() function, expected prototype:\nsigned int b2TreeNode::height()\nClass arguments details:\n");
		}


		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call signed int b2TreeNode::height(). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		signed int lret = self->height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void b2TreeNode::aabb(b2AABB value)
	static int _bind_setAabb(lua_State *L) {
		if (!_lg_typecheck_setAabb(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TreeNode::aabb(b2AABB value) function, expected prototype:\nvoid b2TreeNode::aabb(b2AABB value)\nClass arguments details:\narg 1 ID = 53833672\n");
		}

		b2AABB* value_ptr=(Luna< b2AABB >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in b2TreeNode::aabb function");
		}
		b2AABB value=*value_ptr;

		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TreeNode::aabb(b2AABB). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		self->aabb = value;

		return 0;
	}

	// void b2TreeNode::userData(void * value)
	static int _bind_setUserData(lua_State *L) {
		if (!_lg_typecheck_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TreeNode::userData(void * value) function, expected prototype:\nvoid b2TreeNode::userData(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TreeNode::userData(void *). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		self->userData = value;

		return 0;
	}

	// void b2TreeNode::parent(signed int value)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TreeNode::parent(signed int value) function, expected prototype:\nvoid b2TreeNode::parent(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TreeNode::parent(signed int). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		self->parent = value;

		return 0;
	}

	// void b2TreeNode::next(signed int value)
	static int _bind_setNext(lua_State *L) {
		if (!_lg_typecheck_setNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TreeNode::next(signed int value) function, expected prototype:\nvoid b2TreeNode::next(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TreeNode::next(signed int). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		self->next = value;

		return 0;
	}

	// void b2TreeNode::child1(signed int value)
	static int _bind_setChild1(lua_State *L) {
		if (!_lg_typecheck_setChild1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TreeNode::child1(signed int value) function, expected prototype:\nvoid b2TreeNode::child1(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TreeNode::child1(signed int). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		self->child1 = value;

		return 0;
	}

	// void b2TreeNode::child2(signed int value)
	static int _bind_setChild2(lua_State *L) {
		if (!_lg_typecheck_setChild2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TreeNode::child2(signed int value) function, expected prototype:\nvoid b2TreeNode::child2(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TreeNode::child2(signed int). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		self->child2 = value;

		return 0;
	}

	// void b2TreeNode::height(signed int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2TreeNode::height(signed int value) function, expected prototype:\nvoid b2TreeNode::height(signed int value)\nClass arguments details:\n");
		}

		signed int value=(signed int)lua_tointeger(L,2);

		b2TreeNode* self=(Luna< b2TreeNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2TreeNode::height(signed int). Got : '%s'",typeid(Luna< b2TreeNode >::check(L,1)).name());
		}
		self->height = value;

		return 0;
	}


	// Operator binds:

};

b2TreeNode* LunaTraits< b2TreeNode >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< b2TreeNode >::_bind_dtor(b2TreeNode* obj) {
	delete obj;
}

const char LunaTraits< b2TreeNode >::className[] = "b2TreeNode";
const char LunaTraits< b2TreeNode >::fullName[] = "b2TreeNode";
const char LunaTraits< b2TreeNode >::moduleName[] = "box2d";
const char* LunaTraits< b2TreeNode >::parents[] = {0};
const int LunaTraits< b2TreeNode >::hash = 87178389;
const int LunaTraits< b2TreeNode >::uniqueIDs[] = {87178389,0};

luna_RegType LunaTraits< b2TreeNode >::methods[] = {
	{"IsLeaf", &luna_wrapper_b2TreeNode::_bind_IsLeaf},
	{"getAabb", &luna_wrapper_b2TreeNode::_bind_getAabb},
	{"getUserData", &luna_wrapper_b2TreeNode::_bind_getUserData},
	{"getParent", &luna_wrapper_b2TreeNode::_bind_getParent},
	{"getNext", &luna_wrapper_b2TreeNode::_bind_getNext},
	{"getChild1", &luna_wrapper_b2TreeNode::_bind_getChild1},
	{"getChild2", &luna_wrapper_b2TreeNode::_bind_getChild2},
	{"getHeight", &luna_wrapper_b2TreeNode::_bind_getHeight},
	{"setAabb", &luna_wrapper_b2TreeNode::_bind_setAabb},
	{"setUserData", &luna_wrapper_b2TreeNode::_bind_setUserData},
	{"setParent", &luna_wrapper_b2TreeNode::_bind_setParent},
	{"setNext", &luna_wrapper_b2TreeNode::_bind_setNext},
	{"setChild1", &luna_wrapper_b2TreeNode::_bind_setChild1},
	{"setChild2", &luna_wrapper_b2TreeNode::_bind_setChild2},
	{"setHeight", &luna_wrapper_b2TreeNode::_bind_setHeight},
	{"dynCast", &luna_wrapper_b2TreeNode::_bind_dynCast},
	{"__eq", &luna_wrapper_b2TreeNode::_bind___eq},
	{"fromVoid", &luna_wrapper_b2TreeNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_b2TreeNode::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< b2TreeNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< b2TreeNode >::enumValues[] = {
	{0,0}
};


