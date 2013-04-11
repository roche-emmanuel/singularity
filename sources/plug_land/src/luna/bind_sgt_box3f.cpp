#include <plug_common.h>

class luna_wrapper_sgt_box3f {
public:
	typedef Luna< sgt::box3f > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58086973) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::box3f*)");
		}

		sgt::box3f* rhs =(Luna< sgt::box3f >::check(L,2));
		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
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

		sgt::box3f* self= (sgt::box3f*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::box3f >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58086973) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::box3f >::check(L,1));
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

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::box3f");
		
		return luna_dynamicCast(L,converters,"sgt::box3f",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239302) ) return false;
		if( (!(Luna< sgt::vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086973) ) return false;
		if( (!(Luna< sgt::box3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239302) ) return false;
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

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setXmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZmin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZmax(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::box3f::box3f()
	static sgt::box3f* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3f::box3f() function, expected prototype:\nsgt::box3f::box3f()\nClass arguments details:\n");
		}


		return new sgt::box3f();
	}

	// sgt::box3f::box3f(float xmin, float xmax, float ymin, float ymax, float zmin, float zmax)
	static sgt::box3f* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3f::box3f(float xmin, float xmax, float ymin, float ymax, float zmin, float zmax) function, expected prototype:\nsgt::box3f::box3f(float xmin, float xmax, float ymin, float ymax, float zmin, float zmax)\nClass arguments details:\n");
		}

		float xmin=(float)lua_tonumber(L,1);
		float xmax=(float)lua_tonumber(L,2);
		float ymin=(float)lua_tonumber(L,3);
		float ymax=(float)lua_tonumber(L,4);
		float zmin=(float)lua_tonumber(L,5);
		float zmax=(float)lua_tonumber(L,6);

		return new sgt::box3f(xmin, xmax, ymin, ymax, zmin, zmax);
	}

	// sgt::box3f::box3f(const sgt::vec3f & p, const sgt::vec3f & q)
	static sgt::box3f* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3f::box3f(const sgt::vec3f & p, const sgt::vec3f & q) function, expected prototype:\nsgt::box3f::box3f(const sgt::vec3f & p, const sgt::vec3f & q)\nClass arguments details:\narg 1 ID = 76239302\narg 2 ID = 76239302\n");
		}

		const sgt::vec3f* p_ptr=(Luna< sgt::vec3f >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box3f::box3f function");
		}
		const sgt::vec3f & p=*p_ptr;
		const sgt::vec3f* q_ptr=(Luna< sgt::vec3f >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in sgt::box3f::box3f function");
		}
		const sgt::vec3f & q=*q_ptr;

		return new sgt::box3f(p, q);
	}

	// Overload binder for sgt::box3f::box3f
	static sgt::box3f* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box3f, cannot match any of the overloads for function box3f:\n  box3f()\n  box3f(float, float, float, float, float, float)\n  box3f(const sgt::vec3f &, const sgt::vec3f &)\n");
		return NULL;
	}


	// Function binds:
	// sgt::vec3f sgt::box3f::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3f sgt::box3f::center() const function, expected prototype:\nsgt::vec3f sgt::box3f::center() const\nClass arguments details:\n");
		}


		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3f sgt::box3f::center() const. Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		sgt::vec3f stack_lret = self->center();
		sgt::vec3f* lret = new sgt::vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3f >::push(L,lret,true);

		return 1;
	}

	// sgt::box3f sgt::box3f::enlarge(const sgt::vec3f & p) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3f sgt::box3f::enlarge(const sgt::vec3f & p) const function, expected prototype:\nsgt::box3f sgt::box3f::enlarge(const sgt::vec3f & p) const\nClass arguments details:\narg 1 ID = 76239302\n");
		}

		const sgt::vec3f* p_ptr=(Luna< sgt::vec3f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box3f::enlarge function");
		}
		const sgt::vec3f & p=*p_ptr;

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box3f sgt::box3f::enlarge(const sgt::vec3f &) const. Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		sgt::box3f stack_lret = self->enlarge(p);
		sgt::box3f* lret = new sgt::box3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box3f >::push(L,lret,true);

		return 1;
	}

	// sgt::box3f sgt::box3f::enlarge(const sgt::box3f & r) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3f sgt::box3f::enlarge(const sgt::box3f & r) const function, expected prototype:\nsgt::box3f sgt::box3f::enlarge(const sgt::box3f & r) const\nClass arguments details:\narg 1 ID = 58086973\n");
		}

		const sgt::box3f* r_ptr=(Luna< sgt::box3f >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in sgt::box3f::enlarge function");
		}
		const sgt::box3f & r=*r_ptr;

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box3f sgt::box3f::enlarge(const sgt::box3f &) const. Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		sgt::box3f stack_lret = self->enlarge(r);
		sgt::box3f* lret = new sgt::box3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box3f >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::box3f::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(const sgt::vec3f &)\n  enlarge(const sgt::box3f &)\n");
		return 0;
	}

	// bool sgt::box3f::contains(const sgt::vec3f & p) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::box3f::contains(const sgt::vec3f & p) const function, expected prototype:\nbool sgt::box3f::contains(const sgt::vec3f & p) const\nClass arguments details:\narg 1 ID = 76239302\n");
		}

		const sgt::vec3f* p_ptr=(Luna< sgt::vec3f >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box3f::contains function");
		}
		const sgt::vec3f & p=*p_ptr;

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::box3f::contains(const sgt::vec3f &) const. Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float sgt::box3f::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::box3f::xmin() function, expected prototype:\nfloat sgt::box3f::xmin()\nClass arguments details:\n");
		}


		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::box3f::xmin(). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		float lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::box3f::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::box3f::xmax() function, expected prototype:\nfloat sgt::box3f::xmax()\nClass arguments details:\n");
		}


		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::box3f::xmax(). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		float lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::box3f::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::box3f::ymin() function, expected prototype:\nfloat sgt::box3f::ymin()\nClass arguments details:\n");
		}


		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::box3f::ymin(). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		float lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::box3f::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::box3f::ymax() function, expected prototype:\nfloat sgt::box3f::ymax()\nClass arguments details:\n");
		}


		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::box3f::ymax(). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		float lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::box3f::zmin()
	static int _bind_getZmin(lua_State *L) {
		if (!_lg_typecheck_getZmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::box3f::zmin() function, expected prototype:\nfloat sgt::box3f::zmin()\nClass arguments details:\n");
		}


		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::box3f::zmin(). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		float lret = self->zmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float sgt::box3f::zmax()
	static int _bind_getZmax(lua_State *L) {
		if (!_lg_typecheck_getZmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float sgt::box3f::zmax() function, expected prototype:\nfloat sgt::box3f::zmax()\nClass arguments details:\n");
		}


		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float sgt::box3f::zmax(). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		float lret = self->zmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::box3f::xmin(float value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3f::xmin(float value) function, expected prototype:\nvoid sgt::box3f::xmin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3f::xmin(float). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		self->xmin = value;

		return 0;
	}

	// void sgt::box3f::xmax(float value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3f::xmax(float value) function, expected prototype:\nvoid sgt::box3f::xmax(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3f::xmax(float). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		self->xmax = value;

		return 0;
	}

	// void sgt::box3f::ymin(float value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3f::ymin(float value) function, expected prototype:\nvoid sgt::box3f::ymin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3f::ymin(float). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		self->ymin = value;

		return 0;
	}

	// void sgt::box3f::ymax(float value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3f::ymax(float value) function, expected prototype:\nvoid sgt::box3f::ymax(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3f::ymax(float). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		self->ymax = value;

		return 0;
	}

	// void sgt::box3f::zmin(float value)
	static int _bind_setZmin(lua_State *L) {
		if (!_lg_typecheck_setZmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3f::zmin(float value) function, expected prototype:\nvoid sgt::box3f::zmin(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3f::zmin(float). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		self->zmin = value;

		return 0;
	}

	// void sgt::box3f::zmax(float value)
	static int _bind_setZmax(lua_State *L) {
		if (!_lg_typecheck_setZmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3f::zmax(float value) function, expected prototype:\nvoid sgt::box3f::zmax(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		sgt::box3f* self=(Luna< sgt::box3f >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3f::zmax(float). Got : '%s'",typeid(Luna< sgt::box3f >::check(L,1)).name());
		}
		self->zmax = value;

		return 0;
	}


	// Operator binds:

};

sgt::box3f* LunaTraits< sgt::box3f >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_box3f::_bind_ctor(L);
}

void LunaTraits< sgt::box3f >::_bind_dtor(sgt::box3f* obj) {
	delete obj;
}

const char LunaTraits< sgt::box3f >::className[] = "box3f";
const char LunaTraits< sgt::box3f >::fullName[] = "sgt::box3f";
const char LunaTraits< sgt::box3f >::moduleName[] = "sgt";
const char* LunaTraits< sgt::box3f >::parents[] = {0};
const int LunaTraits< sgt::box3f >::hash = 58086973;
const int LunaTraits< sgt::box3f >::uniqueIDs[] = {58086973,0};

luna_RegType LunaTraits< sgt::box3f >::methods[] = {
	{"center", &luna_wrapper_sgt_box3f::_bind_center},
	{"enlarge", &luna_wrapper_sgt_box3f::_bind_enlarge},
	{"contains", &luna_wrapper_sgt_box3f::_bind_contains},
	{"getXmin", &luna_wrapper_sgt_box3f::_bind_getXmin},
	{"getXmax", &luna_wrapper_sgt_box3f::_bind_getXmax},
	{"getYmin", &luna_wrapper_sgt_box3f::_bind_getYmin},
	{"getYmax", &luna_wrapper_sgt_box3f::_bind_getYmax},
	{"getZmin", &luna_wrapper_sgt_box3f::_bind_getZmin},
	{"getZmax", &luna_wrapper_sgt_box3f::_bind_getZmax},
	{"setXmin", &luna_wrapper_sgt_box3f::_bind_setXmin},
	{"setXmax", &luna_wrapper_sgt_box3f::_bind_setXmax},
	{"setYmin", &luna_wrapper_sgt_box3f::_bind_setYmin},
	{"setYmax", &luna_wrapper_sgt_box3f::_bind_setYmax},
	{"setZmin", &luna_wrapper_sgt_box3f::_bind_setZmin},
	{"setZmax", &luna_wrapper_sgt_box3f::_bind_setZmax},
	{"dynCast", &luna_wrapper_sgt_box3f::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_box3f::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_box3f::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_box3f::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::box3f >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::box3f >::enumValues[] = {
	{0,0}
};


