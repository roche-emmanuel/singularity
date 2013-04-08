#include <plug_common.h>

class luna_wrapper_btDbvt {
public:
	typedef Luna< btDbvt > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14908800) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvt*)");
		}

		btDbvt* rhs =(Luna< btDbvt >::check(L,2));
		btDbvt* self=(Luna< btDbvt >::check(L,1));
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

		btDbvt* self= (btDbvt*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDbvt >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14908800) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< btDbvt >::check(L,1));
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

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvt");
		
		return luna_dynamicCast(L,converters,"btDbvt",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_optimizeBottomUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_optimizeTopDown(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_optimizeIncremental(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insert(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88504824) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,88504824) ) return false;
		if( (!(Luna< btDbvtAabbMm >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,88504824) ) return false;
		if( (!(Luna< btDbvtAabbMm >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,88504824) ) return false;
		if( (!(Luna< btDbvtAabbMm >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (!(Luna< btVector3 >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btDbvtNode >::check(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,88504824) ) return false;
		if( (!(Luna< btDbvtAabbMm >::check(L,3))) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_write(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50167833)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14908800) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,8781183)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collideTT(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91335778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,21779918) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collideTTpersistentStack(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,91335778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,21779918) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collideTV(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,88504824) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,21779918) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_maxdepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_countLeaves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_extractLeaves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,275816) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_benchmark(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enumNodes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,21779918) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enumLeaves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,21779918) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_rayTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,21779918) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collideKDOP(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,21779918) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collideOCL(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91544891)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,91544891) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,21779918) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_collideTU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91335778)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,21779918) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_nearest(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,12671008)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_allocate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41950488) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91616889) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,12671008) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLkhd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLeaves(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOpath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStkStack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRayTestStack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFree(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,91335778)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLkhd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLeaves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOpath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStkStack(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64242255) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRayTestStack(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,275816) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btDbvt::btDbvt()
	static btDbvt* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvt::btDbvt() function, expected prototype:\nbtDbvt::btDbvt()\nClass arguments details:\n");
		}


		return new btDbvt();
	}


	// Function binds:
	// void btDbvt::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::clear() function, expected prototype:\nvoid btDbvt::clear()\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::clear(). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->clear();

		return 0;
	}

	// bool btDbvt::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDbvt::empty() const function, expected prototype:\nbool btDbvt::empty() const\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDbvt::empty() const. Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void btDbvt::optimizeBottomUp()
	static int _bind_optimizeBottomUp(lua_State *L) {
		if (!_lg_typecheck_optimizeBottomUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::optimizeBottomUp() function, expected prototype:\nvoid btDbvt::optimizeBottomUp()\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::optimizeBottomUp(). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->optimizeBottomUp();

		return 0;
	}

	// void btDbvt::optimizeTopDown(int bu_treshold = 128)
	static int _bind_optimizeTopDown(lua_State *L) {
		if (!_lg_typecheck_optimizeTopDown(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::optimizeTopDown(int bu_treshold = 128) function, expected prototype:\nvoid btDbvt::optimizeTopDown(int bu_treshold = 128)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int bu_treshold=luatop>1 ? (int)lua_tointeger(L,2) : (int)128;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::optimizeTopDown(int). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->optimizeTopDown(bu_treshold);

		return 0;
	}

	// void btDbvt::optimizeIncremental(int passes)
	static int _bind_optimizeIncremental(lua_State *L) {
		if (!_lg_typecheck_optimizeIncremental(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::optimizeIncremental(int passes) function, expected prototype:\nvoid btDbvt::optimizeIncremental(int passes)\nClass arguments details:\n");
		}

		int passes=(int)lua_tointeger(L,2);

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::optimizeIncremental(int). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->optimizeIncremental(passes);

		return 0;
	}

	// btDbvtNode * btDbvt::insert(const btDbvtAabbMm & box, void * data)
	static int _bind_insert(lua_State *L) {
		if (!_lg_typecheck_insert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtNode * btDbvt::insert(const btDbvtAabbMm & box, void * data) function, expected prototype:\nbtDbvtNode * btDbvt::insert(const btDbvtAabbMm & box, void * data)\nClass arguments details:\narg 1 ID = 88504824\n");
		}

		const btDbvtAabbMm* box_ptr=(Luna< btDbvtAabbMm >::check(L,2));
		if( !box_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg box in btDbvt::insert function");
		}
		const btDbvtAabbMm & box=*box_ptr;
		void* data=(Luna< void >::check(L,3));

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDbvtNode * btDbvt::insert(const btDbvtAabbMm &, void *). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		btDbvtNode * lret = self->insert(box, data);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// void btDbvt::update(btDbvtNode * leaf, int lookahead = -1)
	static int _bind_update_overload_1(lua_State *L) {
		if (!_lg_typecheck_update_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::update(btDbvtNode * leaf, int lookahead = -1) function, expected prototype:\nvoid btDbvt::update(btDbvtNode * leaf, int lookahead = -1)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		int luatop = lua_gettop(L);

		btDbvtNode* leaf=(Luna< btDbvtNode >::check(L,2));
		int lookahead=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::update(btDbvtNode *, int). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->update(leaf, lookahead);

		return 0;
	}

	// void btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume)
	static int _bind_update_overload_2(lua_State *L) {
		if (!_lg_typecheck_update_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume) function, expected prototype:\nvoid btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 88504824\n");
		}

		btDbvtNode* leaf=(Luna< btDbvtNode >::check(L,2));
		btDbvtAabbMm* volume_ptr=(Luna< btDbvtAabbMm >::check(L,3));
		if( !volume_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg volume in btDbvt::update function");
		}
		btDbvtAabbMm & volume=*volume_ptr;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::update(btDbvtNode *, btDbvtAabbMm &). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->update(leaf, volume);

		return 0;
	}

	// bool btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume, const btVector3 & velocity, float margin)
	static int _bind_update_overload_3(lua_State *L) {
		if (!_lg_typecheck_update_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume, const btVector3 & velocity, float margin) function, expected prototype:\nbool btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume, const btVector3 & velocity, float margin)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 88504824\narg 3 ID = 91544891\n");
		}

		btDbvtNode* leaf=(Luna< btDbvtNode >::check(L,2));
		btDbvtAabbMm* volume_ptr=(Luna< btDbvtAabbMm >::check(L,3));
		if( !volume_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg volume in btDbvt::update function");
		}
		btDbvtAabbMm & volume=*volume_ptr;
		const btVector3* velocity_ptr=(Luna< btVector3 >::check(L,4));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in btDbvt::update function");
		}
		const btVector3 & velocity=*velocity_ptr;
		float margin=(float)lua_tonumber(L,5);

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDbvt::update(btDbvtNode *, btDbvtAabbMm &, const btVector3 &, float). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		bool lret = self->update(leaf, volume, velocity, margin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume, const btVector3 & velocity)
	static int _bind_update_overload_4(lua_State *L) {
		if (!_lg_typecheck_update_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume, const btVector3 & velocity) function, expected prototype:\nbool btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume, const btVector3 & velocity)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 88504824\narg 3 ID = 91544891\n");
		}

		btDbvtNode* leaf=(Luna< btDbvtNode >::check(L,2));
		btDbvtAabbMm* volume_ptr=(Luna< btDbvtAabbMm >::check(L,3));
		if( !volume_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg volume in btDbvt::update function");
		}
		btDbvtAabbMm & volume=*volume_ptr;
		const btVector3* velocity_ptr=(Luna< btVector3 >::check(L,4));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in btDbvt::update function");
		}
		const btVector3 & velocity=*velocity_ptr;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDbvt::update(btDbvtNode *, btDbvtAabbMm &, const btVector3 &). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		bool lret = self->update(leaf, volume, velocity);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume, float margin)
	static int _bind_update_overload_5(lua_State *L) {
		if (!_lg_typecheck_update_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume, float margin) function, expected prototype:\nbool btDbvt::update(btDbvtNode * leaf, btDbvtAabbMm & volume, float margin)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 88504824\n");
		}

		btDbvtNode* leaf=(Luna< btDbvtNode >::check(L,2));
		btDbvtAabbMm* volume_ptr=(Luna< btDbvtAabbMm >::check(L,3));
		if( !volume_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg volume in btDbvt::update function");
		}
		btDbvtAabbMm & volume=*volume_ptr;
		float margin=(float)lua_tonumber(L,4);

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btDbvt::update(btDbvtNode *, btDbvtAabbMm &, float). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		bool lret = self->update(leaf, volume, margin);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for btDbvt::update
	static int _bind_update(lua_State *L) {
		if (_lg_typecheck_update_overload_1(L)) return _bind_update_overload_1(L);
		if (_lg_typecheck_update_overload_2(L)) return _bind_update_overload_2(L);
		if (_lg_typecheck_update_overload_3(L)) return _bind_update_overload_3(L);
		if (_lg_typecheck_update_overload_4(L)) return _bind_update_overload_4(L);
		if (_lg_typecheck_update_overload_5(L)) return _bind_update_overload_5(L);

		luaL_error(L, "error in function update, cannot match any of the overloads for function update:\n  update(btDbvtNode *, int)\n  update(btDbvtNode *, btDbvtAabbMm &)\n  update(btDbvtNode *, btDbvtAabbMm &, const btVector3 &, float)\n  update(btDbvtNode *, btDbvtAabbMm &, const btVector3 &)\n  update(btDbvtNode *, btDbvtAabbMm &, float)\n");
		return 0;
	}

	// void btDbvt::remove(btDbvtNode * leaf)
	static int _bind_remove(lua_State *L) {
		if (!_lg_typecheck_remove(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::remove(btDbvtNode * leaf) function, expected prototype:\nvoid btDbvt::remove(btDbvtNode * leaf)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		btDbvtNode* leaf=(Luna< btDbvtNode >::check(L,2));

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::remove(btDbvtNode *). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->remove(leaf);

		return 0;
	}

	// void btDbvt::write(btDbvt::IWriter * iwriter) const
	static int _bind_write(lua_State *L) {
		if (!_lg_typecheck_write(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::write(btDbvt::IWriter * iwriter) const function, expected prototype:\nvoid btDbvt::write(btDbvt::IWriter * iwriter) const\nClass arguments details:\narg 1 ID = 50167833\n");
		}

		btDbvt::IWriter* iwriter=(Luna< btDbvt::IWriter >::check(L,2));

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::write(btDbvt::IWriter *) const. Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->write(iwriter);

		return 0;
	}

	// void btDbvt::clone(btDbvt & dest, btDbvt::IClone * iclone = 0) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::clone(btDbvt & dest, btDbvt::IClone * iclone = 0) const function, expected prototype:\nvoid btDbvt::clone(btDbvt & dest, btDbvt::IClone * iclone = 0) const\nClass arguments details:\narg 1 ID = 14908800\narg 2 ID = 8781183\n");
		}

		int luatop = lua_gettop(L);

		btDbvt* dest_ptr=(Luna< btDbvt >::check(L,2));
		if( !dest_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dest in btDbvt::clone function");
		}
		btDbvt & dest=*dest_ptr;
		btDbvt::IClone* iclone=luatop>2 ? (Luna< btDbvt::IClone >::check(L,3)) : (btDbvt::IClone*)0;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::clone(btDbvt &, btDbvt::IClone *) const. Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->clone(dest, iclone);

		return 0;
	}

	// void btDbvt::collideTT(const btDbvtNode * root0, const btDbvtNode * root1, btDbvt::ICollide & policy)
	static int _bind_collideTT(lua_State *L) {
		if (!_lg_typecheck_collideTT(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::collideTT(const btDbvtNode * root0, const btDbvtNode * root1, btDbvt::ICollide & policy) function, expected prototype:\nvoid btDbvt::collideTT(const btDbvtNode * root0, const btDbvtNode * root1, btDbvt::ICollide & policy)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 91335778\narg 3 ID = 21779918\n");
		}

		const btDbvtNode* root0=(Luna< btDbvtNode >::check(L,2));
		const btDbvtNode* root1=(Luna< btDbvtNode >::check(L,3));
		btDbvt::ICollide* policy_ptr=(Luna< btDbvt::ICollide >::check(L,4));
		if( !policy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg policy in btDbvt::collideTT function");
		}
		btDbvt::ICollide & policy=*policy_ptr;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::collideTT(const btDbvtNode *, const btDbvtNode *, btDbvt::ICollide &). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->collideTT(root0, root1, policy);

		return 0;
	}

	// void btDbvt::collideTTpersistentStack(const btDbvtNode * root0, const btDbvtNode * root1, btDbvt::ICollide & policy)
	static int _bind_collideTTpersistentStack(lua_State *L) {
		if (!_lg_typecheck_collideTTpersistentStack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::collideTTpersistentStack(const btDbvtNode * root0, const btDbvtNode * root1, btDbvt::ICollide & policy) function, expected prototype:\nvoid btDbvt::collideTTpersistentStack(const btDbvtNode * root0, const btDbvtNode * root1, btDbvt::ICollide & policy)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 91335778\narg 3 ID = 21779918\n");
		}

		const btDbvtNode* root0=(Luna< btDbvtNode >::check(L,2));
		const btDbvtNode* root1=(Luna< btDbvtNode >::check(L,3));
		btDbvt::ICollide* policy_ptr=(Luna< btDbvt::ICollide >::check(L,4));
		if( !policy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg policy in btDbvt::collideTTpersistentStack function");
		}
		btDbvt::ICollide & policy=*policy_ptr;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::collideTTpersistentStack(const btDbvtNode *, const btDbvtNode *, btDbvt::ICollide &). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->collideTTpersistentStack(root0, root1, policy);

		return 0;
	}

	// void btDbvt::collideTV(const btDbvtNode * root, const btDbvtAabbMm & volume, btDbvt::ICollide & policy) const
	static int _bind_collideTV(lua_State *L) {
		if (!_lg_typecheck_collideTV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::collideTV(const btDbvtNode * root, const btDbvtAabbMm & volume, btDbvt::ICollide & policy) const function, expected prototype:\nvoid btDbvt::collideTV(const btDbvtNode * root, const btDbvtAabbMm & volume, btDbvt::ICollide & policy) const\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 88504824\narg 3 ID = 21779918\n");
		}

		const btDbvtNode* root=(Luna< btDbvtNode >::check(L,2));
		const btDbvtAabbMm* volume_ptr=(Luna< btDbvtAabbMm >::check(L,3));
		if( !volume_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg volume in btDbvt::collideTV function");
		}
		const btDbvtAabbMm & volume=*volume_ptr;
		btDbvt::ICollide* policy_ptr=(Luna< btDbvt::ICollide >::check(L,4));
		if( !policy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg policy in btDbvt::collideTV function");
		}
		btDbvt::ICollide & policy=*policy_ptr;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::collideTV(const btDbvtNode *, const btDbvtAabbMm &, btDbvt::ICollide &) const. Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->collideTV(root, volume, policy);

		return 0;
	}

	// static int btDbvt::maxdepth(const btDbvtNode * node)
	static int _bind_maxdepth(lua_State *L) {
		if (!_lg_typecheck_maxdepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int btDbvt::maxdepth(const btDbvtNode * node) function, expected prototype:\nstatic int btDbvt::maxdepth(const btDbvtNode * node)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		const btDbvtNode* node=(Luna< btDbvtNode >::check(L,1));

		int lret = btDbvt::maxdepth(node);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int btDbvt::countLeaves(const btDbvtNode * node)
	static int _bind_countLeaves(lua_State *L) {
		if (!_lg_typecheck_countLeaves(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int btDbvt::countLeaves(const btDbvtNode * node) function, expected prototype:\nstatic int btDbvt::countLeaves(const btDbvtNode * node)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		const btDbvtNode* node=(Luna< btDbvtNode >::check(L,1));

		int lret = btDbvt::countLeaves(node);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void btDbvt::extractLeaves(const btDbvtNode * node, btAlignedObjectArray< const btDbvtNode * > & leaves)
	static int _bind_extractLeaves(lua_State *L) {
		if (!_lg_typecheck_extractLeaves(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btDbvt::extractLeaves(const btDbvtNode * node, btAlignedObjectArray< const btDbvtNode * > & leaves) function, expected prototype:\nstatic void btDbvt::extractLeaves(const btDbvtNode * node, btAlignedObjectArray< const btDbvtNode * > & leaves)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = [unknown]\n");
		}

		const btDbvtNode* node=(Luna< btDbvtNode >::check(L,1));
		btAlignedObjectArray< const btDbvtNode * >* leaves_ptr=(Luna< btAlignedObjectArray< const btDbvtNode * > >::check(L,2));
		if( !leaves_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg leaves in btDbvt::extractLeaves function");
		}
		btAlignedObjectArray< const btDbvtNode * > & leaves=*leaves_ptr;

		btDbvt::extractLeaves(node, leaves);

		return 0;
	}

	// static void btDbvt::benchmark()
	static int _bind_benchmark(lua_State *L) {
		if (!_lg_typecheck_benchmark(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btDbvt::benchmark() function, expected prototype:\nstatic void btDbvt::benchmark()\nClass arguments details:\n");
		}


		btDbvt::benchmark();

		return 0;
	}

	// static void btDbvt::enumNodes(const btDbvtNode * root, btDbvt::ICollide & policy)
	static int _bind_enumNodes(lua_State *L) {
		if (!_lg_typecheck_enumNodes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btDbvt::enumNodes(const btDbvtNode * root, btDbvt::ICollide & policy) function, expected prototype:\nstatic void btDbvt::enumNodes(const btDbvtNode * root, btDbvt::ICollide & policy)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 21779918\n");
		}

		const btDbvtNode* root=(Luna< btDbvtNode >::check(L,1));
		btDbvt::ICollide* policy_ptr=(Luna< btDbvt::ICollide >::check(L,2));
		if( !policy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg policy in btDbvt::enumNodes function");
		}
		btDbvt::ICollide & policy=*policy_ptr;

		btDbvt::enumNodes(root, policy);

		return 0;
	}

	// static void btDbvt::enumLeaves(const btDbvtNode * root, btDbvt::ICollide & policy)
	static int _bind_enumLeaves(lua_State *L) {
		if (!_lg_typecheck_enumLeaves(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btDbvt::enumLeaves(const btDbvtNode * root, btDbvt::ICollide & policy) function, expected prototype:\nstatic void btDbvt::enumLeaves(const btDbvtNode * root, btDbvt::ICollide & policy)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 21779918\n");
		}

		const btDbvtNode* root=(Luna< btDbvtNode >::check(L,1));
		btDbvt::ICollide* policy_ptr=(Luna< btDbvt::ICollide >::check(L,2));
		if( !policy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg policy in btDbvt::enumLeaves function");
		}
		btDbvt::ICollide & policy=*policy_ptr;

		btDbvt::enumLeaves(root, policy);

		return 0;
	}

	// static void btDbvt::rayTest(const btDbvtNode * root, const btVector3 & rayFrom, const btVector3 & rayTo, btDbvt::ICollide & policy)
	static int _bind_rayTest(lua_State *L) {
		if (!_lg_typecheck_rayTest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btDbvt::rayTest(const btDbvtNode * root, const btVector3 & rayFrom, const btVector3 & rayTo, btDbvt::ICollide & policy) function, expected prototype:\nstatic void btDbvt::rayTest(const btDbvtNode * root, const btVector3 & rayFrom, const btVector3 & rayTo, btDbvt::ICollide & policy)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 91544891\narg 3 ID = 91544891\narg 4 ID = 21779918\n");
		}

		const btDbvtNode* root=(Luna< btDbvtNode >::check(L,1));
		const btVector3* rayFrom_ptr=(Luna< btVector3 >::check(L,2));
		if( !rayFrom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayFrom in btDbvt::rayTest function");
		}
		const btVector3 & rayFrom=*rayFrom_ptr;
		const btVector3* rayTo_ptr=(Luna< btVector3 >::check(L,3));
		if( !rayTo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rayTo in btDbvt::rayTest function");
		}
		const btVector3 & rayTo=*rayTo_ptr;
		btDbvt::ICollide* policy_ptr=(Luna< btDbvt::ICollide >::check(L,4));
		if( !policy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg policy in btDbvt::rayTest function");
		}
		btDbvt::ICollide & policy=*policy_ptr;

		btDbvt::rayTest(root, rayFrom, rayTo, policy);

		return 0;
	}

	// static void btDbvt::collideKDOP(const btDbvtNode * root, const btVector3 * normals, const float * offsets, int count, btDbvt::ICollide & policy)
	static int _bind_collideKDOP(lua_State *L) {
		if (!_lg_typecheck_collideKDOP(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btDbvt::collideKDOP(const btDbvtNode * root, const btVector3 * normals, const float * offsets, int count, btDbvt::ICollide & policy) function, expected prototype:\nstatic void btDbvt::collideKDOP(const btDbvtNode * root, const btVector3 * normals, const float * offsets, int count, btDbvt::ICollide & policy)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 91544891\narg 5 ID = 21779918\n");
		}

		const btDbvtNode* root=(Luna< btDbvtNode >::check(L,1));
		const btVector3* normals=(Luna< btVector3 >::check(L,2));
		const float* offsets=(const float*)Luna< void >::check(L,3);
		int count=(int)lua_tointeger(L,4);
		btDbvt::ICollide* policy_ptr=(Luna< btDbvt::ICollide >::check(L,5));
		if( !policy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg policy in btDbvt::collideKDOP function");
		}
		btDbvt::ICollide & policy=*policy_ptr;

		btDbvt::collideKDOP(root, normals, offsets, count, policy);

		return 0;
	}

	// static void btDbvt::collideOCL(const btDbvtNode * root, const btVector3 * normals, const float * offsets, const btVector3 & sortaxis, int count, btDbvt::ICollide & policy, bool fullsort = true)
	static int _bind_collideOCL(lua_State *L) {
		if (!_lg_typecheck_collideOCL(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btDbvt::collideOCL(const btDbvtNode * root, const btVector3 * normals, const float * offsets, const btVector3 & sortaxis, int count, btDbvt::ICollide & policy, bool fullsort = true) function, expected prototype:\nstatic void btDbvt::collideOCL(const btDbvtNode * root, const btVector3 * normals, const float * offsets, const btVector3 & sortaxis, int count, btDbvt::ICollide & policy, bool fullsort = true)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 91544891\narg 4 ID = 91544891\narg 6 ID = 21779918\n");
		}

		int luatop = lua_gettop(L);

		const btDbvtNode* root=(Luna< btDbvtNode >::check(L,1));
		const btVector3* normals=(Luna< btVector3 >::check(L,2));
		const float* offsets=(const float*)Luna< void >::check(L,3);
		const btVector3* sortaxis_ptr=(Luna< btVector3 >::check(L,4));
		if( !sortaxis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sortaxis in btDbvt::collideOCL function");
		}
		const btVector3 & sortaxis=*sortaxis_ptr;
		int count=(int)lua_tointeger(L,5);
		btDbvt::ICollide* policy_ptr=(Luna< btDbvt::ICollide >::check(L,6));
		if( !policy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg policy in btDbvt::collideOCL function");
		}
		btDbvt::ICollide & policy=*policy_ptr;
		bool fullsort=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)true;

		btDbvt::collideOCL(root, normals, offsets, sortaxis, count, policy, fullsort);

		return 0;
	}

	// static void btDbvt::collideTU(const btDbvtNode * root, btDbvt::ICollide & policy)
	static int _bind_collideTU(lua_State *L) {
		if (!_lg_typecheck_collideTU(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void btDbvt::collideTU(const btDbvtNode * root, btDbvt::ICollide & policy) function, expected prototype:\nstatic void btDbvt::collideTU(const btDbvtNode * root, btDbvt::ICollide & policy)\nClass arguments details:\narg 1 ID = 91335778\narg 2 ID = 21779918\n");
		}

		const btDbvtNode* root=(Luna< btDbvtNode >::check(L,1));
		btDbvt::ICollide* policy_ptr=(Luna< btDbvt::ICollide >::check(L,2));
		if( !policy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg policy in btDbvt::collideTU function");
		}
		btDbvt::ICollide & policy=*policy_ptr;

		btDbvt::collideTU(root, policy);

		return 0;
	}

	// static int btDbvt::nearest(const int * i, const btDbvt::sStkNPS * a, float v, int l, int h)
	static int _bind_nearest(lua_State *L) {
		if (!_lg_typecheck_nearest(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int btDbvt::nearest(const int * i, const btDbvt::sStkNPS * a, float v, int l, int h) function, expected prototype:\nstatic int btDbvt::nearest(const int * i, const btDbvt::sStkNPS * a, float v, int l, int h)\nClass arguments details:\narg 2 ID = 12671008\n");
		}

		const int* i=(const int*)Luna< void >::check(L,1);
		const btDbvt::sStkNPS* a=(Luna< btDbvt::sStkNPS >::check(L,2));
		float v=(float)lua_tonumber(L,3);
		int l=(int)lua_tointeger(L,4);
		int h=(int)lua_tointeger(L,5);

		int lret = btDbvt::nearest(i, a, v, l, h);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int btDbvt::allocate(btAlignedObjectArray< int > & ifree, btAlignedObjectArray< btDbvt::sStkNPS > & stock, const btDbvt::sStkNPS & value)
	static int _bind_allocate(lua_State *L) {
		if (!_lg_typecheck_allocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static int btDbvt::allocate(btAlignedObjectArray< int > & ifree, btAlignedObjectArray< btDbvt::sStkNPS > & stock, const btDbvt::sStkNPS & value) function, expected prototype:\nstatic int btDbvt::allocate(btAlignedObjectArray< int > & ifree, btAlignedObjectArray< btDbvt::sStkNPS > & stock, const btDbvt::sStkNPS & value)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = 12671008\n");
		}

		btAlignedObjectArray< int >* ifree_ptr=(Luna< btAlignedObjectArray< int > >::check(L,1));
		if( !ifree_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ifree in btDbvt::allocate function");
		}
		btAlignedObjectArray< int > & ifree=*ifree_ptr;
		btAlignedObjectArray< btDbvt::sStkNPS >* stock_ptr=(Luna< btAlignedObjectArray< btDbvt::sStkNPS > >::check(L,2));
		if( !stock_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stock in btDbvt::allocate function");
		}
		btAlignedObjectArray< btDbvt::sStkNPS > & stock=*stock_ptr;
		const btDbvt::sStkNPS* value_ptr=(Luna< btDbvt::sStkNPS >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDbvt::allocate function");
		}
		const btDbvt::sStkNPS & value=*value_ptr;

		int lret = btDbvt::allocate(ifree, stock, value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btDbvtNode * btDbvt::m_root()
	static int _bind_getRoot(lua_State *L) {
		if (!_lg_typecheck_getRoot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtNode * btDbvt::m_root() function, expected prototype:\nbtDbvtNode * btDbvt::m_root()\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDbvtNode * btDbvt::m_root(). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		btDbvtNode * lret = self->m_root;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// btDbvtNode * btDbvt::m_free()
	static int _bind_getFree(lua_State *L) {
		if (!_lg_typecheck_getFree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btDbvtNode * btDbvt::m_free() function, expected prototype:\nbtDbvtNode * btDbvt::m_free()\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btDbvtNode * btDbvt::m_free(). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		btDbvtNode * lret = self->m_free;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtNode >::push(L,lret,false);

		return 1;
	}

	// int btDbvt::m_lkhd()
	static int _bind_getLkhd(lua_State *L) {
		if (!_lg_typecheck_getLkhd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvt::m_lkhd() function, expected prototype:\nint btDbvt::m_lkhd()\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvt::m_lkhd(). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		int lret = self->m_lkhd;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int btDbvt::m_leaves()
	static int _bind_getLeaves(lua_State *L) {
		if (!_lg_typecheck_getLeaves(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btDbvt::m_leaves() function, expected prototype:\nint btDbvt::m_leaves()\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btDbvt::m_leaves(). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		int lret = self->m_leaves;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int btDbvt::m_opath()
	static int _bind_getOpath(lua_State *L) {
		if (!_lg_typecheck_getOpath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int btDbvt::m_opath() function, expected prototype:\nunsigned int btDbvt::m_opath()\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int btDbvt::m_opath(). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		unsigned int lret = self->m_opath;
		lua_pushnumber(L,lret);

		return 1;
	}

	// btAlignedObjectArray< btDbvt::sStkNN > btDbvt::m_stkStack()
	static int _bind_getStkStack(lua_State *L) {
		if (!_lg_typecheck_getStkStack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< btDbvt::sStkNN > btDbvt::m_stkStack() function, expected prototype:\nbtAlignedObjectArray< btDbvt::sStkNN > btDbvt::m_stkStack()\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< btDbvt::sStkNN > btDbvt::m_stkStack(). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		const btAlignedObjectArray< btDbvt::sStkNN >* lret = &self->m_stkStack;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< btDbvt::sStkNN > >::push(L,lret,false);

		return 1;
	}

	// btAlignedObjectArray< const btDbvtNode * > btDbvt::m_rayTestStack()
	static int _bind_getRayTestStack(lua_State *L) {
		if (!_lg_typecheck_getRayTestStack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btAlignedObjectArray< const btDbvtNode * > btDbvt::m_rayTestStack() function, expected prototype:\nbtAlignedObjectArray< const btDbvtNode * > btDbvt::m_rayTestStack()\nClass arguments details:\n");
		}


		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btAlignedObjectArray< const btDbvtNode * > btDbvt::m_rayTestStack(). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		const btAlignedObjectArray< const btDbvtNode * >* lret = &self->m_rayTestStack;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btAlignedObjectArray< const btDbvtNode * > >::push(L,lret,false);

		return 1;
	}

	// void btDbvt::m_root(btDbvtNode * value)
	static int _bind_setRoot(lua_State *L) {
		if (!_lg_typecheck_setRoot(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::m_root(btDbvtNode * value) function, expected prototype:\nvoid btDbvt::m_root(btDbvtNode * value)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		btDbvtNode* value=(Luna< btDbvtNode >::check(L,2));

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::m_root(btDbvtNode *). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->m_root = value;

		return 0;
	}

	// void btDbvt::m_free(btDbvtNode * value)
	static int _bind_setFree(lua_State *L) {
		if (!_lg_typecheck_setFree(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::m_free(btDbvtNode * value) function, expected prototype:\nvoid btDbvt::m_free(btDbvtNode * value)\nClass arguments details:\narg 1 ID = 91335778\n");
		}

		btDbvtNode* value=(Luna< btDbvtNode >::check(L,2));

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::m_free(btDbvtNode *). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->m_free = value;

		return 0;
	}

	// void btDbvt::m_lkhd(int value)
	static int _bind_setLkhd(lua_State *L) {
		if (!_lg_typecheck_setLkhd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::m_lkhd(int value) function, expected prototype:\nvoid btDbvt::m_lkhd(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::m_lkhd(int). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->m_lkhd = value;

		return 0;
	}

	// void btDbvt::m_leaves(int value)
	static int _bind_setLeaves(lua_State *L) {
		if (!_lg_typecheck_setLeaves(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::m_leaves(int value) function, expected prototype:\nvoid btDbvt::m_leaves(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::m_leaves(int). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->m_leaves = value;

		return 0;
	}

	// void btDbvt::m_opath(unsigned int value)
	static int _bind_setOpath(lua_State *L) {
		if (!_lg_typecheck_setOpath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::m_opath(unsigned int value) function, expected prototype:\nvoid btDbvt::m_opath(unsigned int value)\nClass arguments details:\n");
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::m_opath(unsigned int). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->m_opath = value;

		return 0;
	}

	// void btDbvt::m_stkStack(btAlignedObjectArray< btDbvt::sStkNN > value)
	static int _bind_setStkStack(lua_State *L) {
		if (!_lg_typecheck_setStkStack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::m_stkStack(btAlignedObjectArray< btDbvt::sStkNN > value) function, expected prototype:\nvoid btDbvt::m_stkStack(btAlignedObjectArray< btDbvt::sStkNN > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< btDbvt::sStkNN >* value_ptr=(Luna< btAlignedObjectArray< btDbvt::sStkNN > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDbvt::m_stkStack function");
		}
		btAlignedObjectArray< btDbvt::sStkNN > value=*value_ptr;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::m_stkStack(btAlignedObjectArray< btDbvt::sStkNN >). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->m_stkStack = value;

		return 0;
	}

	// void btDbvt::m_rayTestStack(btAlignedObjectArray< const btDbvtNode * > value)
	static int _bind_setRayTestStack(lua_State *L) {
		if (!_lg_typecheck_setRayTestStack(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btDbvt::m_rayTestStack(btAlignedObjectArray< const btDbvtNode * > value) function, expected prototype:\nvoid btDbvt::m_rayTestStack(btAlignedObjectArray< const btDbvtNode * > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		btAlignedObjectArray< const btDbvtNode * >* value_ptr=(Luna< btAlignedObjectArray< const btDbvtNode * > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in btDbvt::m_rayTestStack function");
		}
		btAlignedObjectArray< const btDbvtNode * > value=*value_ptr;

		btDbvt* self=(Luna< btDbvt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btDbvt::m_rayTestStack(btAlignedObjectArray< const btDbvtNode * >). Got : '%s'",typeid(Luna< btDbvt >::check(L,1)).name());
		}
		self->m_rayTestStack = value;

		return 0;
	}


	// Operator binds:

};

btDbvt* LunaTraits< btDbvt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btDbvt::_bind_ctor(L);
}

void LunaTraits< btDbvt >::_bind_dtor(btDbvt* obj) {
	delete obj;
}

const char LunaTraits< btDbvt >::className[] = "btDbvt";
const char LunaTraits< btDbvt >::fullName[] = "btDbvt";
const char LunaTraits< btDbvt >::moduleName[] = "bullet";
const char* LunaTraits< btDbvt >::parents[] = {0};
const int LunaTraits< btDbvt >::hash = 14908800;
const int LunaTraits< btDbvt >::uniqueIDs[] = {14908800,0};

luna_RegType LunaTraits< btDbvt >::methods[] = {
	{"clear", &luna_wrapper_btDbvt::_bind_clear},
	{"empty", &luna_wrapper_btDbvt::_bind_empty},
	{"optimizeBottomUp", &luna_wrapper_btDbvt::_bind_optimizeBottomUp},
	{"optimizeTopDown", &luna_wrapper_btDbvt::_bind_optimizeTopDown},
	{"optimizeIncremental", &luna_wrapper_btDbvt::_bind_optimizeIncremental},
	{"insert", &luna_wrapper_btDbvt::_bind_insert},
	{"update", &luna_wrapper_btDbvt::_bind_update},
	{"remove", &luna_wrapper_btDbvt::_bind_remove},
	{"write", &luna_wrapper_btDbvt::_bind_write},
	{"clone", &luna_wrapper_btDbvt::_bind_clone},
	{"collideTT", &luna_wrapper_btDbvt::_bind_collideTT},
	{"collideTTpersistentStack", &luna_wrapper_btDbvt::_bind_collideTTpersistentStack},
	{"collideTV", &luna_wrapper_btDbvt::_bind_collideTV},
	{"maxdepth", &luna_wrapper_btDbvt::_bind_maxdepth},
	{"countLeaves", &luna_wrapper_btDbvt::_bind_countLeaves},
	{"extractLeaves", &luna_wrapper_btDbvt::_bind_extractLeaves},
	{"benchmark", &luna_wrapper_btDbvt::_bind_benchmark},
	{"enumNodes", &luna_wrapper_btDbvt::_bind_enumNodes},
	{"enumLeaves", &luna_wrapper_btDbvt::_bind_enumLeaves},
	{"rayTest", &luna_wrapper_btDbvt::_bind_rayTest},
	{"collideKDOP", &luna_wrapper_btDbvt::_bind_collideKDOP},
	{"collideOCL", &luna_wrapper_btDbvt::_bind_collideOCL},
	{"collideTU", &luna_wrapper_btDbvt::_bind_collideTU},
	{"nearest", &luna_wrapper_btDbvt::_bind_nearest},
	{"allocate", &luna_wrapper_btDbvt::_bind_allocate},
	{"getRoot", &luna_wrapper_btDbvt::_bind_getRoot},
	{"getFree", &luna_wrapper_btDbvt::_bind_getFree},
	{"getLkhd", &luna_wrapper_btDbvt::_bind_getLkhd},
	{"getLeaves", &luna_wrapper_btDbvt::_bind_getLeaves},
	{"getOpath", &luna_wrapper_btDbvt::_bind_getOpath},
	{"getStkStack", &luna_wrapper_btDbvt::_bind_getStkStack},
	{"getRayTestStack", &luna_wrapper_btDbvt::_bind_getRayTestStack},
	{"setRoot", &luna_wrapper_btDbvt::_bind_setRoot},
	{"setFree", &luna_wrapper_btDbvt::_bind_setFree},
	{"setLkhd", &luna_wrapper_btDbvt::_bind_setLkhd},
	{"setLeaves", &luna_wrapper_btDbvt::_bind_setLeaves},
	{"setOpath", &luna_wrapper_btDbvt::_bind_setOpath},
	{"setStkStack", &luna_wrapper_btDbvt::_bind_setStkStack},
	{"setRayTestStack", &luna_wrapper_btDbvt::_bind_setRayTestStack},
	{"dynCast", &luna_wrapper_btDbvt::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvt::_bind___eq},
	{"fromVoid", &luna_wrapper_btDbvt::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDbvt::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvt >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvt >::enumValues[] = {
	{"SIMPLE_STACKSIZE", btDbvt::SIMPLE_STACKSIZE},
	{"DOUBLE_STACKSIZE", btDbvt::DOUBLE_STACKSIZE},
	{0,0}
};


