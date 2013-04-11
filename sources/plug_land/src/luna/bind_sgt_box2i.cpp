#include <plug_common.h>

class luna_wrapper_sgt_box2i {
public:
	typedef Luna< sgt::box2i > luna_t;

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

		sgt::box2i* self= (sgt::box2i*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::box2i >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58086945) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::box2i >::check(L,1));
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

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::box2i");
		
		return luna_dynamicCast(L,converters,"sgt::box2i",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239274) ) return false;
		if( (!(Luna< sgt::vec2i >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		if( (!(Luna< sgt::vec2i >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_width(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_height(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_area(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		if( (!(Luna< sgt::vec2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086945) ) return false;
		if( (!(Luna< sgt::box2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		if( (!(Luna< sgt::vec2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086945) ) return false;
		if( (!(Luna< sgt::box2i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086945) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_nearestInnerPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_squaredDistanceTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239274) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getXmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getXmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYmax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setXmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setXmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086945) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086945) ) return false;
		return true;
	}


	// Constructor binds:
	// sgt::box2i::box2i()
	static sgt::box2i* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box2i::box2i() function, expected prototype:\nsgt::box2i::box2i()\nClass arguments details:\n");
		}


		return new sgt::box2i();
	}

	// sgt::box2i::box2i(int xmin, int xmax, int ymin, int ymax)
	static sgt::box2i* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box2i::box2i(int xmin, int xmax, int ymin, int ymax) function, expected prototype:\nsgt::box2i::box2i(int xmin, int xmax, int ymin, int ymax)\nClass arguments details:\n");
		}

		int xmin=(int)lua_tointeger(L,1);
		int xmax=(int)lua_tointeger(L,2);
		int ymin=(int)lua_tointeger(L,3);
		int ymax=(int)lua_tointeger(L,4);

		return new sgt::box2i(xmin, xmax, ymin, ymax);
	}

	// sgt::box2i::box2i(const sgt::vec2i & p, const sgt::vec2i & q)
	static sgt::box2i* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box2i::box2i(const sgt::vec2i & p, const sgt::vec2i & q) function, expected prototype:\nsgt::box2i::box2i(const sgt::vec2i & p, const sgt::vec2i & q)\nClass arguments details:\narg 1 ID = 76239274\narg 2 ID = 76239274\n");
		}

		const sgt::vec2i* p_ptr=(Luna< sgt::vec2i >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box2i::box2i function");
		}
		const sgt::vec2i & p=*p_ptr;
		const sgt::vec2i* q_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in sgt::box2i::box2i function");
		}
		const sgt::vec2i & q=*q_ptr;

		return new sgt::box2i(p, q);
	}

	// Overload binder for sgt::box2i::box2i
	static sgt::box2i* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box2i, cannot match any of the overloads for function box2i:\n  box2i()\n  box2i(int, int, int, int)\n  box2i(const sgt::vec2i &, const sgt::vec2i &)\n");
		return NULL;
	}


	// Function binds:
	// sgt::vec2i sgt::box2i::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::box2i::center() const function, expected prototype:\nsgt::vec2i sgt::box2i::center() const\nClass arguments details:\n");
		}


		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::box2i::center() const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->center();
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// int sgt::box2i::width() const
	static int _bind_width(lua_State *L) {
		if (!_lg_typecheck_width(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box2i::width() const function, expected prototype:\nint sgt::box2i::width() const\nClass arguments details:\n");
		}


		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box2i::width() const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		int lret = self->width();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box2i::height() const
	static int _bind_height(lua_State *L) {
		if (!_lg_typecheck_height(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box2i::height() const function, expected prototype:\nint sgt::box2i::height() const\nClass arguments details:\n");
		}


		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box2i::height() const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		int lret = self->height();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box2i::area() const
	static int _bind_area(lua_State *L) {
		if (!_lg_typecheck_area(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box2i::area() const function, expected prototype:\nint sgt::box2i::area() const\nClass arguments details:\n");
		}


		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box2i::area() const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		int lret = self->area();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::box2i sgt::box2i::enlarge(int w) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box2i sgt::box2i::enlarge(int w) const function, expected prototype:\nsgt::box2i sgt::box2i::enlarge(int w) const\nClass arguments details:\n");
		}

		int w=(int)lua_tointeger(L,2);

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box2i sgt::box2i::enlarge(int) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		sgt::box2i stack_lret = self->enlarge(w);
		sgt::box2i* lret = new sgt::box2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box2i >::push(L,lret,true);

		return 1;
	}

	// sgt::box2i sgt::box2i::enlarge(const sgt::vec2i & p) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box2i sgt::box2i::enlarge(const sgt::vec2i & p) const function, expected prototype:\nsgt::box2i sgt::box2i::enlarge(const sgt::vec2i & p) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* p_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box2i::enlarge function");
		}
		const sgt::vec2i & p=*p_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box2i sgt::box2i::enlarge(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		sgt::box2i stack_lret = self->enlarge(p);
		sgt::box2i* lret = new sgt::box2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box2i >::push(L,lret,true);

		return 1;
	}

	// sgt::box2i sgt::box2i::enlarge(const sgt::box2i & r) const
	static int _bind_enlarge_overload_3(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box2i sgt::box2i::enlarge(const sgt::box2i & r) const function, expected prototype:\nsgt::box2i sgt::box2i::enlarge(const sgt::box2i & r) const\nClass arguments details:\narg 1 ID = 58086945\n");
		}

		const sgt::box2i* r_ptr=(Luna< sgt::box2i >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in sgt::box2i::enlarge function");
		}
		const sgt::box2i & r=*r_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box2i sgt::box2i::enlarge(const sgt::box2i &) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		sgt::box2i stack_lret = self->enlarge(r);
		sgt::box2i* lret = new sgt::box2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box2i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::box2i::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);
		if (_lg_typecheck_enlarge_overload_3(L)) return _bind_enlarge_overload_3(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(int)\n  enlarge(const sgt::vec2i &)\n  enlarge(const sgt::box2i &)\n");
		return 0;
	}

	// bool sgt::box2i::contains(const sgt::vec2i & p) const
	static int _bind_contains_overload_1(lua_State *L) {
		if (!_lg_typecheck_contains_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::box2i::contains(const sgt::vec2i & p) const function, expected prototype:\nbool sgt::box2i::contains(const sgt::vec2i & p) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		const sgt::vec2i* p_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box2i::contains function");
		}
		const sgt::vec2i & p=*p_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::box2i::contains(const sgt::vec2i &) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::box2i::contains(const sgt::box2i & bb) const
	static int _bind_contains_overload_2(lua_State *L) {
		if (!_lg_typecheck_contains_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::box2i::contains(const sgt::box2i & bb) const function, expected prototype:\nbool sgt::box2i::contains(const sgt::box2i & bb) const\nClass arguments details:\narg 1 ID = 58086945\n");
		}

		const sgt::box2i* bb_ptr=(Luna< sgt::box2i >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in sgt::box2i::contains function");
		}
		const sgt::box2i & bb=*bb_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::box2i::contains(const sgt::box2i &) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		bool lret = self->contains(bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for sgt::box2i::contains
	static int _bind_contains(lua_State *L) {
		if (_lg_typecheck_contains_overload_1(L)) return _bind_contains_overload_1(L);
		if (_lg_typecheck_contains_overload_2(L)) return _bind_contains_overload_2(L);

		luaL_error(L, "error in function contains, cannot match any of the overloads for function contains:\n  contains(const sgt::vec2i &)\n  contains(const sgt::box2i &)\n");
		return 0;
	}

	// bool sgt::box2i::intersects(const sgt::box2i & a) const
	static int _bind_intersects(lua_State *L) {
		if (!_lg_typecheck_intersects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::box2i::intersects(const sgt::box2i & a) const function, expected prototype:\nbool sgt::box2i::intersects(const sgt::box2i & a) const\nClass arguments details:\narg 1 ID = 58086945\n");
		}

		const sgt::box2i* a_ptr=(Luna< sgt::box2i >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in sgt::box2i::intersects function");
		}
		const sgt::box2i & a=*a_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::box2i::intersects(const sgt::box2i &) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		bool lret = self->intersects(a);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::vec2i sgt::box2i::nearestInnerPoint(sgt::vec2i a) const
	static int _bind_nearestInnerPoint(lua_State *L) {
		if (!_lg_typecheck_nearestInnerPoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec2i sgt::box2i::nearestInnerPoint(sgt::vec2i a) const function, expected prototype:\nsgt::vec2i sgt::box2i::nearestInnerPoint(sgt::vec2i a) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		sgt::vec2i* a_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in sgt::box2i::nearestInnerPoint function");
		}
		sgt::vec2i a=*a_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec2i sgt::box2i::nearestInnerPoint(sgt::vec2i) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		sgt::vec2i stack_lret = self->nearestInnerPoint(a);
		sgt::vec2i* lret = new sgt::vec2i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2i >::push(L,lret,true);

		return 1;
	}

	// int sgt::box2i::distanceTo(sgt::vec2i a) const
	static int _bind_distanceTo(lua_State *L) {
		if (!_lg_typecheck_distanceTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box2i::distanceTo(sgt::vec2i a) const function, expected prototype:\nint sgt::box2i::distanceTo(sgt::vec2i a) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		sgt::vec2i* a_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in sgt::box2i::distanceTo function");
		}
		sgt::vec2i a=*a_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box2i::distanceTo(sgt::vec2i) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		int lret = self->distanceTo(a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box2i::squaredDistanceTo(sgt::vec2i a) const
	static int _bind_squaredDistanceTo(lua_State *L) {
		if (!_lg_typecheck_squaredDistanceTo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box2i::squaredDistanceTo(sgt::vec2i a) const function, expected prototype:\nint sgt::box2i::squaredDistanceTo(sgt::vec2i a) const\nClass arguments details:\narg 1 ID = 76239274\n");
		}

		sgt::vec2i* a_ptr=(Luna< sgt::vec2i >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in sgt::box2i::squaredDistanceTo function");
		}
		sgt::vec2i a=*a_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box2i::squaredDistanceTo(sgt::vec2i) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		int lret = self->squaredDistanceTo(a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box2i::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box2i::xmin() function, expected prototype:\nint sgt::box2i::xmin()\nClass arguments details:\n");
		}


		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box2i::xmin(). Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		int lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box2i::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box2i::xmax() function, expected prototype:\nint sgt::box2i::xmax()\nClass arguments details:\n");
		}


		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box2i::xmax(). Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		int lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box2i::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box2i::ymin() function, expected prototype:\nint sgt::box2i::ymin()\nClass arguments details:\n");
		}


		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box2i::ymin(). Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		int lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box2i::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box2i::ymax() function, expected prototype:\nint sgt::box2i::ymax()\nClass arguments details:\n");
		}


		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box2i::ymax(). Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		int lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::box2i::xmin(int value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box2i::xmin(int value) function, expected prototype:\nvoid sgt::box2i::xmin(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box2i::xmin(int). Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		self->xmin = value;

		return 0;
	}

	// void sgt::box2i::xmax(int value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box2i::xmax(int value) function, expected prototype:\nvoid sgt::box2i::xmax(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box2i::xmax(int). Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		self->xmax = value;

		return 0;
	}

	// void sgt::box2i::ymin(int value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box2i::ymin(int value) function, expected prototype:\nvoid sgt::box2i::ymin(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box2i::ymin(int). Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		self->ymin = value;

		return 0;
	}

	// void sgt::box2i::ymax(int value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box2i::ymax(int value) function, expected prototype:\nvoid sgt::box2i::ymax(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box2i::ymax(int). Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		self->ymax = value;

		return 0;
	}


	// Operator binds:
	// bool sgt::box2i::operator==(const sgt::box2i & b) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::box2i::operator==(const sgt::box2i & b) const function, expected prototype:\nbool sgt::box2i::operator==(const sgt::box2i & b) const\nClass arguments details:\narg 1 ID = 58086945\n");
		}

		const sgt::box2i* b_ptr=(Luna< sgt::box2i >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in sgt::box2i::operator== function");
		}
		const sgt::box2i & b=*b_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::box2i::operator==(const sgt::box2i &) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		bool lret = self->operator==(b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool sgt::box2i::operator!=(const sgt::box2i & b) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::box2i::operator!=(const sgt::box2i & b) const function, expected prototype:\nbool sgt::box2i::operator!=(const sgt::box2i & b) const\nClass arguments details:\narg 1 ID = 58086945\n");
		}

		const sgt::box2i* b_ptr=(Luna< sgt::box2i >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in sgt::box2i::operator!= function");
		}
		const sgt::box2i & b=*b_ptr;

		sgt::box2i* self=(Luna< sgt::box2i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::box2i::operator!=(const sgt::box2i &) const. Got : '%s'",typeid(Luna< sgt::box2i >::check(L,1)).name());
		}
		bool lret = self->operator!=(b);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

sgt::box2i* LunaTraits< sgt::box2i >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_box2i::_bind_ctor(L);
}

void LunaTraits< sgt::box2i >::_bind_dtor(sgt::box2i* obj) {
	delete obj;
}

const char LunaTraits< sgt::box2i >::className[] = "box2i";
const char LunaTraits< sgt::box2i >::fullName[] = "sgt::box2i";
const char LunaTraits< sgt::box2i >::moduleName[] = "sgt";
const char* LunaTraits< sgt::box2i >::parents[] = {0};
const int LunaTraits< sgt::box2i >::hash = 58086945;
const int LunaTraits< sgt::box2i >::uniqueIDs[] = {58086945,0};

luna_RegType LunaTraits< sgt::box2i >::methods[] = {
	{"center", &luna_wrapper_sgt_box2i::_bind_center},
	{"width", &luna_wrapper_sgt_box2i::_bind_width},
	{"height", &luna_wrapper_sgt_box2i::_bind_height},
	{"area", &luna_wrapper_sgt_box2i::_bind_area},
	{"enlarge", &luna_wrapper_sgt_box2i::_bind_enlarge},
	{"contains", &luna_wrapper_sgt_box2i::_bind_contains},
	{"intersects", &luna_wrapper_sgt_box2i::_bind_intersects},
	{"nearestInnerPoint", &luna_wrapper_sgt_box2i::_bind_nearestInnerPoint},
	{"distanceTo", &luna_wrapper_sgt_box2i::_bind_distanceTo},
	{"squaredDistanceTo", &luna_wrapper_sgt_box2i::_bind_squaredDistanceTo},
	{"getXmin", &luna_wrapper_sgt_box2i::_bind_getXmin},
	{"getXmax", &luna_wrapper_sgt_box2i::_bind_getXmax},
	{"getYmin", &luna_wrapper_sgt_box2i::_bind_getYmin},
	{"getYmax", &luna_wrapper_sgt_box2i::_bind_getYmax},
	{"setXmin", &luna_wrapper_sgt_box2i::_bind_setXmin},
	{"setXmax", &luna_wrapper_sgt_box2i::_bind_setXmax},
	{"setYmin", &luna_wrapper_sgt_box2i::_bind_setYmin},
	{"setYmax", &luna_wrapper_sgt_box2i::_bind_setYmax},
	{"__eq", &luna_wrapper_sgt_box2i::_bind___eq},
	{"op_neq", &luna_wrapper_sgt_box2i::_bind_op_neq},
	{"dynCast", &luna_wrapper_sgt_box2i::_bind_dynCast},
	{"fromVoid", &luna_wrapper_sgt_box2i::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_box2i::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::box2i >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::box2i >::enumValues[] = {
	{0,0}
};


