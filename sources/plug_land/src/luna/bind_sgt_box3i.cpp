#include <plug_common.h>

class luna_wrapper_sgt_box3i {
public:
	typedef Luna< sgt::box3i > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58086976) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::box3i*)");
		}

		sgt::box3i* rhs =(Luna< sgt::box3i >::check(L,2));
		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
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

		sgt::box3i* self= (sgt::box3i*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::box3i >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58086976) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::box3i >::check(L,1));
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

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::box3i");
		
		return luna_dynamicCast(L,converters,"sgt::box3i",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239305) ) return false;
		if( (!(Luna< sgt::vec3i >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		if( (!(Luna< sgt::vec3i >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
		if( (!(Luna< sgt::vec3i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086976) ) return false;
		if( (!(Luna< sgt::box3i >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239305) ) return false;
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

	inline static bool _lg_typecheck_getZmin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZmax(lua_State *L) {
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

	inline static bool _lg_typecheck_setZmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::box3i::box3i()
	static sgt::box3i* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3i::box3i() function, expected prototype:\nsgt::box3i::box3i()\nClass arguments details:\n");
		}


		return new sgt::box3i();
	}

	// sgt::box3i::box3i(int xmin, int xmax, int ymin, int ymax, int zmin, int zmax)
	static sgt::box3i* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3i::box3i(int xmin, int xmax, int ymin, int ymax, int zmin, int zmax) function, expected prototype:\nsgt::box3i::box3i(int xmin, int xmax, int ymin, int ymax, int zmin, int zmax)\nClass arguments details:\n");
		}

		int xmin=(int)lua_tointeger(L,1);
		int xmax=(int)lua_tointeger(L,2);
		int ymin=(int)lua_tointeger(L,3);
		int ymax=(int)lua_tointeger(L,4);
		int zmin=(int)lua_tointeger(L,5);
		int zmax=(int)lua_tointeger(L,6);

		return new sgt::box3i(xmin, xmax, ymin, ymax, zmin, zmax);
	}

	// sgt::box3i::box3i(const sgt::vec3i & p, const sgt::vec3i & q)
	static sgt::box3i* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3i::box3i(const sgt::vec3i & p, const sgt::vec3i & q) function, expected prototype:\nsgt::box3i::box3i(const sgt::vec3i & p, const sgt::vec3i & q)\nClass arguments details:\narg 1 ID = 76239305\narg 2 ID = 76239305\n");
		}

		const sgt::vec3i* p_ptr=(Luna< sgt::vec3i >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box3i::box3i function");
		}
		const sgt::vec3i & p=*p_ptr;
		const sgt::vec3i* q_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in sgt::box3i::box3i function");
		}
		const sgt::vec3i & q=*q_ptr;

		return new sgt::box3i(p, q);
	}

	// Overload binder for sgt::box3i::box3i
	static sgt::box3i* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box3i, cannot match any of the overloads for function box3i:\n  box3i()\n  box3i(int, int, int, int, int, int)\n  box3i(const sgt::vec3i &, const sgt::vec3i &)\n");
		return NULL;
	}


	// Function binds:
	// sgt::vec3i sgt::box3i::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3i sgt::box3i::center() const function, expected prototype:\nsgt::vec3i sgt::box3i::center() const\nClass arguments details:\n");
		}


		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3i sgt::box3i::center() const. Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		sgt::vec3i stack_lret = self->center();
		sgt::vec3i* lret = new sgt::vec3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3i >::push(L,lret,true);

		return 1;
	}

	// sgt::box3i sgt::box3i::enlarge(const sgt::vec3i & p) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3i sgt::box3i::enlarge(const sgt::vec3i & p) const function, expected prototype:\nsgt::box3i sgt::box3i::enlarge(const sgt::vec3i & p) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* p_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box3i::enlarge function");
		}
		const sgt::vec3i & p=*p_ptr;

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box3i sgt::box3i::enlarge(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		sgt::box3i stack_lret = self->enlarge(p);
		sgt::box3i* lret = new sgt::box3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box3i >::push(L,lret,true);

		return 1;
	}

	// sgt::box3i sgt::box3i::enlarge(const sgt::box3i & r) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3i sgt::box3i::enlarge(const sgt::box3i & r) const function, expected prototype:\nsgt::box3i sgt::box3i::enlarge(const sgt::box3i & r) const\nClass arguments details:\narg 1 ID = 58086976\n");
		}

		const sgt::box3i* r_ptr=(Luna< sgt::box3i >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in sgt::box3i::enlarge function");
		}
		const sgt::box3i & r=*r_ptr;

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box3i sgt::box3i::enlarge(const sgt::box3i &) const. Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		sgt::box3i stack_lret = self->enlarge(r);
		sgt::box3i* lret = new sgt::box3i(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box3i >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::box3i::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(const sgt::vec3i &)\n  enlarge(const sgt::box3i &)\n");
		return 0;
	}

	// bool sgt::box3i::contains(const sgt::vec3i & p) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::box3i::contains(const sgt::vec3i & p) const function, expected prototype:\nbool sgt::box3i::contains(const sgt::vec3i & p) const\nClass arguments details:\narg 1 ID = 76239305\n");
		}

		const sgt::vec3i* p_ptr=(Luna< sgt::vec3i >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box3i::contains function");
		}
		const sgt::vec3i & p=*p_ptr;

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::box3i::contains(const sgt::vec3i &) const. Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int sgt::box3i::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box3i::xmin() function, expected prototype:\nint sgt::box3i::xmin()\nClass arguments details:\n");
		}


		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box3i::xmin(). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		int lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box3i::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box3i::xmax() function, expected prototype:\nint sgt::box3i::xmax()\nClass arguments details:\n");
		}


		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box3i::xmax(). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		int lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box3i::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box3i::ymin() function, expected prototype:\nint sgt::box3i::ymin()\nClass arguments details:\n");
		}


		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box3i::ymin(). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		int lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box3i::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box3i::ymax() function, expected prototype:\nint sgt::box3i::ymax()\nClass arguments details:\n");
		}


		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box3i::ymax(). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		int lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box3i::zmin()
	static int _bind_getZmin(lua_State *L) {
		if (!_lg_typecheck_getZmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box3i::zmin() function, expected prototype:\nint sgt::box3i::zmin()\nClass arguments details:\n");
		}


		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box3i::zmin(). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		int lret = self->zmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int sgt::box3i::zmax()
	static int _bind_getZmax(lua_State *L) {
		if (!_lg_typecheck_getZmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int sgt::box3i::zmax() function, expected prototype:\nint sgt::box3i::zmax()\nClass arguments details:\n");
		}


		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int sgt::box3i::zmax(). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		int lret = self->zmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::box3i::xmin(int value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3i::xmin(int value) function, expected prototype:\nvoid sgt::box3i::xmin(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3i::xmin(int). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		self->xmin = value;

		return 0;
	}

	// void sgt::box3i::xmax(int value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3i::xmax(int value) function, expected prototype:\nvoid sgt::box3i::xmax(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3i::xmax(int). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		self->xmax = value;

		return 0;
	}

	// void sgt::box3i::ymin(int value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3i::ymin(int value) function, expected prototype:\nvoid sgt::box3i::ymin(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3i::ymin(int). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		self->ymin = value;

		return 0;
	}

	// void sgt::box3i::ymax(int value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3i::ymax(int value) function, expected prototype:\nvoid sgt::box3i::ymax(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3i::ymax(int). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		self->ymax = value;

		return 0;
	}

	// void sgt::box3i::zmin(int value)
	static int _bind_setZmin(lua_State *L) {
		if (!_lg_typecheck_setZmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3i::zmin(int value) function, expected prototype:\nvoid sgt::box3i::zmin(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3i::zmin(int). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		self->zmin = value;

		return 0;
	}

	// void sgt::box3i::zmax(int value)
	static int _bind_setZmax(lua_State *L) {
		if (!_lg_typecheck_setZmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3i::zmax(int value) function, expected prototype:\nvoid sgt::box3i::zmax(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		sgt::box3i* self=(Luna< sgt::box3i >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3i::zmax(int). Got : '%s'",typeid(Luna< sgt::box3i >::check(L,1)).name());
		}
		self->zmax = value;

		return 0;
	}


	// Operator binds:

};

sgt::box3i* LunaTraits< sgt::box3i >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_box3i::_bind_ctor(L);
}

void LunaTraits< sgt::box3i >::_bind_dtor(sgt::box3i* obj) {
	delete obj;
}

const char LunaTraits< sgt::box3i >::className[] = "box3i";
const char LunaTraits< sgt::box3i >::fullName[] = "sgt::box3i";
const char LunaTraits< sgt::box3i >::moduleName[] = "sgt";
const char* LunaTraits< sgt::box3i >::parents[] = {0};
const int LunaTraits< sgt::box3i >::hash = 58086976;
const int LunaTraits< sgt::box3i >::uniqueIDs[] = {58086976,0};

luna_RegType LunaTraits< sgt::box3i >::methods[] = {
	{"center", &luna_wrapper_sgt_box3i::_bind_center},
	{"enlarge", &luna_wrapper_sgt_box3i::_bind_enlarge},
	{"contains", &luna_wrapper_sgt_box3i::_bind_contains},
	{"getXmin", &luna_wrapper_sgt_box3i::_bind_getXmin},
	{"getXmax", &luna_wrapper_sgt_box3i::_bind_getXmax},
	{"getYmin", &luna_wrapper_sgt_box3i::_bind_getYmin},
	{"getYmax", &luna_wrapper_sgt_box3i::_bind_getYmax},
	{"getZmin", &luna_wrapper_sgt_box3i::_bind_getZmin},
	{"getZmax", &luna_wrapper_sgt_box3i::_bind_getZmax},
	{"setXmin", &luna_wrapper_sgt_box3i::_bind_setXmin},
	{"setXmax", &luna_wrapper_sgt_box3i::_bind_setXmax},
	{"setYmin", &luna_wrapper_sgt_box3i::_bind_setYmin},
	{"setYmax", &luna_wrapper_sgt_box3i::_bind_setYmax},
	{"setZmin", &luna_wrapper_sgt_box3i::_bind_setZmin},
	{"setZmax", &luna_wrapper_sgt_box3i::_bind_setZmax},
	{"dynCast", &luna_wrapper_sgt_box3i::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_box3i::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_box3i::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_box3i::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::box3i >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::box3i >::enumValues[] = {
	{0,0}
};

