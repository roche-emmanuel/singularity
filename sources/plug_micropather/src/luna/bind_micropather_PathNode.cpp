#include <plug_common.h>

class luna_wrapper_micropather_PathNode {
public:
	typedef Luna< micropather::PathNode > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73028343) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(micropather::PathNode*)");
		}

		micropather::PathNode* rhs =(Luna< micropather::PathNode >::check(L,2));
		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		micropather::PathNode* self= (micropather::PathNode*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< micropather::PathNode >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73028343) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< micropather::PathNode >::check(L,1));
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

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("micropather::PathNode");
		
		return luna_dynamicCast(L,converters,"micropather::PathNode",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Init(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,73028343)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitSentinel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Unlink(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddBefore(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73028343)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcTotalCost(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCostFromStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEstToGoal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalCost(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumAdjacent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCacheIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrev(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInOpen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInClosed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCostFromStart(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEstToGoal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTotalCost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73028343)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumAdjacent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCacheIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73028343)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrev(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,73028343)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInOpen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInClosed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void micropather::PathNode::Init(unsigned int _frame, void * _state, float _costFromStart, float _estToGoal, micropather::PathNode * _parent)
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::Init(unsigned int _frame, void * _state, float _costFromStart, float _estToGoal, micropather::PathNode * _parent) function, expected prototype:\nvoid micropather::PathNode::Init(unsigned int _frame, void * _state, float _costFromStart, float _estToGoal, micropather::PathNode * _parent)\nClass arguments details:\narg 5 ID = 73028343\n");
		}

		unsigned _frame=(unsigned)lua_tointeger(L,2);
		void* _state=(Luna< void >::check(L,3));
		float _costFromStart=(float)lua_tonumber(L,4);
		float _estToGoal=(float)lua_tonumber(L,5);
		micropather::PathNode* _parent=(Luna< micropather::PathNode >::check(L,6));

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::Init(unsigned int, void *, float, float, micropather::PathNode *). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->Init(_frame, _state, _costFromStart, _estToGoal, _parent);

		return 0;
	}

	// void micropather::PathNode::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::Clear() function, expected prototype:\nvoid micropather::PathNode::Clear()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::Clear(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->Clear();

		return 0;
	}

	// void micropather::PathNode::InitSentinel()
	static int _bind_InitSentinel(lua_State *L) {
		if (!_lg_typecheck_InitSentinel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::InitSentinel() function, expected prototype:\nvoid micropather::PathNode::InitSentinel()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::InitSentinel(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->InitSentinel();

		return 0;
	}

	// void micropather::PathNode::Unlink()
	static int _bind_Unlink(lua_State *L) {
		if (!_lg_typecheck_Unlink(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::Unlink() function, expected prototype:\nvoid micropather::PathNode::Unlink()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::Unlink(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->Unlink();

		return 0;
	}

	// void micropather::PathNode::AddBefore(micropather::PathNode * addThis)
	static int _bind_AddBefore(lua_State *L) {
		if (!_lg_typecheck_AddBefore(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::AddBefore(micropather::PathNode * addThis) function, expected prototype:\nvoid micropather::PathNode::AddBefore(micropather::PathNode * addThis)\nClass arguments details:\narg 1 ID = 73028343\n");
		}

		micropather::PathNode* addThis=(Luna< micropather::PathNode >::check(L,2));

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::AddBefore(micropather::PathNode *). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->AddBefore(addThis);

		return 0;
	}

	// void micropather::PathNode::CalcTotalCost()
	static int _bind_CalcTotalCost(lua_State *L) {
		if (!_lg_typecheck_CalcTotalCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::CalcTotalCost() function, expected prototype:\nvoid micropather::PathNode::CalcTotalCost()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::CalcTotalCost(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->CalcTotalCost();

		return 0;
	}

	// void * micropather::PathNode::state()
	static int _bind_getState(lua_State *L) {
		if (!_lg_typecheck_getState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * micropather::PathNode::state() function, expected prototype:\nvoid * micropather::PathNode::state()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * micropather::PathNode::state(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		void * lret = self->state;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// float micropather::PathNode::costFromStart()
	static int _bind_getCostFromStart(lua_State *L) {
		if (!_lg_typecheck_getCostFromStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float micropather::PathNode::costFromStart() function, expected prototype:\nfloat micropather::PathNode::costFromStart()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float micropather::PathNode::costFromStart(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		float lret = self->costFromStart;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float micropather::PathNode::estToGoal()
	static int _bind_getEstToGoal(lua_State *L) {
		if (!_lg_typecheck_getEstToGoal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float micropather::PathNode::estToGoal() function, expected prototype:\nfloat micropather::PathNode::estToGoal()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float micropather::PathNode::estToGoal(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		float lret = self->estToGoal;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float micropather::PathNode::totalCost()
	static int _bind_getTotalCost(lua_State *L) {
		if (!_lg_typecheck_getTotalCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float micropather::PathNode::totalCost() function, expected prototype:\nfloat micropather::PathNode::totalCost()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float micropather::PathNode::totalCost(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		float lret = self->totalCost;
		lua_pushnumber(L,lret);

		return 1;
	}

	// micropather::PathNode * micropather::PathNode::parent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in micropather::PathNode * micropather::PathNode::parent() function, expected prototype:\nmicropather::PathNode * micropather::PathNode::parent()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call micropather::PathNode * micropather::PathNode::parent(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		micropather::PathNode * lret = self->parent;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< micropather::PathNode >::push(L,lret,false);

		return 1;
	}

	// unsigned int micropather::PathNode::frame()
	static int _bind_getFrame(lua_State *L) {
		if (!_lg_typecheck_getFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int micropather::PathNode::frame() function, expected prototype:\nunsigned int micropather::PathNode::frame()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int micropather::PathNode::frame(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		unsigned int lret = self->frame;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int micropather::PathNode::numAdjacent()
	static int _bind_getNumAdjacent(lua_State *L) {
		if (!_lg_typecheck_getNumAdjacent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int micropather::PathNode::numAdjacent() function, expected prototype:\nint micropather::PathNode::numAdjacent()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int micropather::PathNode::numAdjacent(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		int lret = self->numAdjacent;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int micropather::PathNode::cacheIndex()
	static int _bind_getCacheIndex(lua_State *L) {
		if (!_lg_typecheck_getCacheIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int micropather::PathNode::cacheIndex() function, expected prototype:\nint micropather::PathNode::cacheIndex()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int micropather::PathNode::cacheIndex(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		int lret = self->cacheIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// micropather::PathNode * micropather::PathNode::next()
	static int _bind_getNext(lua_State *L) {
		if (!_lg_typecheck_getNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in micropather::PathNode * micropather::PathNode::next() function, expected prototype:\nmicropather::PathNode * micropather::PathNode::next()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call micropather::PathNode * micropather::PathNode::next(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		micropather::PathNode * lret = self->next;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< micropather::PathNode >::push(L,lret,false);

		return 1;
	}

	// micropather::PathNode * micropather::PathNode::prev()
	static int _bind_getPrev(lua_State *L) {
		if (!_lg_typecheck_getPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in micropather::PathNode * micropather::PathNode::prev() function, expected prototype:\nmicropather::PathNode * micropather::PathNode::prev()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call micropather::PathNode * micropather::PathNode::prev(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		micropather::PathNode * lret = self->prev;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< micropather::PathNode >::push(L,lret,false);

		return 1;
	}

	// bool micropather::PathNode::inOpen()
	static int _bind_getInOpen(lua_State *L) {
		if (!_lg_typecheck_getInOpen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool micropather::PathNode::inOpen() function, expected prototype:\nbool micropather::PathNode::inOpen()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool micropather::PathNode::inOpen(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		bool lret = self->inOpen;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool micropather::PathNode::inClosed()
	static int _bind_getInClosed(lua_State *L) {
		if (!_lg_typecheck_getInClosed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool micropather::PathNode::inClosed() function, expected prototype:\nbool micropather::PathNode::inClosed()\nClass arguments details:\n");
		}


		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool micropather::PathNode::inClosed(). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		bool lret = self->inClosed;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void micropather::PathNode::state(void * value)
	static int _bind_setState(lua_State *L) {
		if (!_lg_typecheck_setState(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::state(void * value) function, expected prototype:\nvoid micropather::PathNode::state(void * value)\nClass arguments details:\n");
		}

		void* value=(Luna< void >::check(L,2));

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::state(void *). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->state = value;

		return 0;
	}

	// void micropather::PathNode::costFromStart(float value)
	static int _bind_setCostFromStart(lua_State *L) {
		if (!_lg_typecheck_setCostFromStart(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::costFromStart(float value) function, expected prototype:\nvoid micropather::PathNode::costFromStart(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::costFromStart(float). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->costFromStart = value;

		return 0;
	}

	// void micropather::PathNode::estToGoal(float value)
	static int _bind_setEstToGoal(lua_State *L) {
		if (!_lg_typecheck_setEstToGoal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::estToGoal(float value) function, expected prototype:\nvoid micropather::PathNode::estToGoal(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::estToGoal(float). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->estToGoal = value;

		return 0;
	}

	// void micropather::PathNode::totalCost(float value)
	static int _bind_setTotalCost(lua_State *L) {
		if (!_lg_typecheck_setTotalCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::totalCost(float value) function, expected prototype:\nvoid micropather::PathNode::totalCost(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::totalCost(float). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->totalCost = value;

		return 0;
	}

	// void micropather::PathNode::parent(micropather::PathNode * value)
	static int _bind_setParent(lua_State *L) {
		if (!_lg_typecheck_setParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::parent(micropather::PathNode * value) function, expected prototype:\nvoid micropather::PathNode::parent(micropather::PathNode * value)\nClass arguments details:\narg 1 ID = 73028343\n");
		}

		micropather::PathNode* value=(Luna< micropather::PathNode >::check(L,2));

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::parent(micropather::PathNode *). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->parent = value;

		return 0;
	}

	// void micropather::PathNode::frame(unsigned int value)
	static int _bind_setFrame(lua_State *L) {
		if (!_lg_typecheck_setFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::frame(unsigned int value) function, expected prototype:\nvoid micropather::PathNode::frame(unsigned int value)\nClass arguments details:\n");
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::frame(unsigned int). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->frame = value;

		return 0;
	}

	// void micropather::PathNode::numAdjacent(int value)
	static int _bind_setNumAdjacent(lua_State *L) {
		if (!_lg_typecheck_setNumAdjacent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::numAdjacent(int value) function, expected prototype:\nvoid micropather::PathNode::numAdjacent(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::numAdjacent(int). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->numAdjacent = value;

		return 0;
	}

	// void micropather::PathNode::cacheIndex(int value)
	static int _bind_setCacheIndex(lua_State *L) {
		if (!_lg_typecheck_setCacheIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::cacheIndex(int value) function, expected prototype:\nvoid micropather::PathNode::cacheIndex(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::cacheIndex(int). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->cacheIndex = value;

		return 0;
	}

	// void micropather::PathNode::next(micropather::PathNode * value)
	static int _bind_setNext(lua_State *L) {
		if (!_lg_typecheck_setNext(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::next(micropather::PathNode * value) function, expected prototype:\nvoid micropather::PathNode::next(micropather::PathNode * value)\nClass arguments details:\narg 1 ID = 73028343\n");
		}

		micropather::PathNode* value=(Luna< micropather::PathNode >::check(L,2));

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::next(micropather::PathNode *). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->next = value;

		return 0;
	}

	// void micropather::PathNode::prev(micropather::PathNode * value)
	static int _bind_setPrev(lua_State *L) {
		if (!_lg_typecheck_setPrev(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::prev(micropather::PathNode * value) function, expected prototype:\nvoid micropather::PathNode::prev(micropather::PathNode * value)\nClass arguments details:\narg 1 ID = 73028343\n");
		}

		micropather::PathNode* value=(Luna< micropather::PathNode >::check(L,2));

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::prev(micropather::PathNode *). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->prev = value;

		return 0;
	}

	// void micropather::PathNode::inOpen(bool value)
	static int _bind_setInOpen(lua_State *L) {
		if (!_lg_typecheck_setInOpen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::inOpen(bool value) function, expected prototype:\nvoid micropather::PathNode::inOpen(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::inOpen(bool). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->inOpen = value;

		return 0;
	}

	// void micropather::PathNode::inClosed(bool value)
	static int _bind_setInClosed(lua_State *L) {
		if (!_lg_typecheck_setInClosed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void micropather::PathNode::inClosed(bool value) function, expected prototype:\nvoid micropather::PathNode::inClosed(bool value)\nClass arguments details:\n");
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		micropather::PathNode* self=(Luna< micropather::PathNode >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void micropather::PathNode::inClosed(bool). Got : '%s'",typeid(Luna< micropather::PathNode >::check(L,1)).name());
		}
		self->inClosed = value;

		return 0;
	}


	// Operator binds:

};

micropather::PathNode* LunaTraits< micropather::PathNode >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< micropather::PathNode >::_bind_dtor(micropather::PathNode* obj) {
	delete obj;
}

const char LunaTraits< micropather::PathNode >::className[] = "PathNode";
const char LunaTraits< micropather::PathNode >::fullName[] = "micropather::PathNode";
const char LunaTraits< micropather::PathNode >::moduleName[] = "micropather";
const char* LunaTraits< micropather::PathNode >::parents[] = {0};
const int LunaTraits< micropather::PathNode >::hash = 73028343;
const int LunaTraits< micropather::PathNode >::uniqueIDs[] = {73028343,0};

luna_RegType LunaTraits< micropather::PathNode >::methods[] = {
	{"Init", &luna_wrapper_micropather_PathNode::_bind_Init},
	{"Clear", &luna_wrapper_micropather_PathNode::_bind_Clear},
	{"InitSentinel", &luna_wrapper_micropather_PathNode::_bind_InitSentinel},
	{"Unlink", &luna_wrapper_micropather_PathNode::_bind_Unlink},
	{"AddBefore", &luna_wrapper_micropather_PathNode::_bind_AddBefore},
	{"CalcTotalCost", &luna_wrapper_micropather_PathNode::_bind_CalcTotalCost},
	{"getState", &luna_wrapper_micropather_PathNode::_bind_getState},
	{"getCostFromStart", &luna_wrapper_micropather_PathNode::_bind_getCostFromStart},
	{"getEstToGoal", &luna_wrapper_micropather_PathNode::_bind_getEstToGoal},
	{"getTotalCost", &luna_wrapper_micropather_PathNode::_bind_getTotalCost},
	{"getParent", &luna_wrapper_micropather_PathNode::_bind_getParent},
	{"getFrame", &luna_wrapper_micropather_PathNode::_bind_getFrame},
	{"getNumAdjacent", &luna_wrapper_micropather_PathNode::_bind_getNumAdjacent},
	{"getCacheIndex", &luna_wrapper_micropather_PathNode::_bind_getCacheIndex},
	{"getNext", &luna_wrapper_micropather_PathNode::_bind_getNext},
	{"getPrev", &luna_wrapper_micropather_PathNode::_bind_getPrev},
	{"getInOpen", &luna_wrapper_micropather_PathNode::_bind_getInOpen},
	{"getInClosed", &luna_wrapper_micropather_PathNode::_bind_getInClosed},
	{"setState", &luna_wrapper_micropather_PathNode::_bind_setState},
	{"setCostFromStart", &luna_wrapper_micropather_PathNode::_bind_setCostFromStart},
	{"setEstToGoal", &luna_wrapper_micropather_PathNode::_bind_setEstToGoal},
	{"setTotalCost", &luna_wrapper_micropather_PathNode::_bind_setTotalCost},
	{"setParent", &luna_wrapper_micropather_PathNode::_bind_setParent},
	{"setFrame", &luna_wrapper_micropather_PathNode::_bind_setFrame},
	{"setNumAdjacent", &luna_wrapper_micropather_PathNode::_bind_setNumAdjacent},
	{"setCacheIndex", &luna_wrapper_micropather_PathNode::_bind_setCacheIndex},
	{"setNext", &luna_wrapper_micropather_PathNode::_bind_setNext},
	{"setPrev", &luna_wrapper_micropather_PathNode::_bind_setPrev},
	{"setInOpen", &luna_wrapper_micropather_PathNode::_bind_setInOpen},
	{"setInClosed", &luna_wrapper_micropather_PathNode::_bind_setInClosed},
	{"dynCast", &luna_wrapper_micropather_PathNode::_bind_dynCast},
	{"__eq", &luna_wrapper_micropather_PathNode::_bind___eq},
	{"fromVoid", &luna_wrapper_micropather_PathNode::_bind_fromVoid},
	{"asVoid", &luna_wrapper_micropather_PathNode::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< micropather::PathNode >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< micropather::PathNode >::enumValues[] = {
	{0,0}
};


