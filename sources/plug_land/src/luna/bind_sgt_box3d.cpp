#include <plug_common.h>

class luna_wrapper_sgt_box3d {
public:
	typedef Luna< sgt::box3d > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58086971) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::box3d*)");
		}

		sgt::box3d* rhs =(Luna< sgt::box3d >::check(L,2));
		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
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

		sgt::box3d* self= (sgt::box3d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::box3d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58086971) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< sgt::box3d >::check(L,1));
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

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::box3d");
		
		return luna_dynamicCast(L,converters,"sgt::box3d",name);
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

		if( !Luna<void>::has_uniqueid(L,1,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
		if( (!(Luna< sgt::vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enlarge_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58086971) ) return false;
		if( (!(Luna< sgt::box3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,76239300) ) return false;
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
	// sgt::box3d::box3d()
	static sgt::box3d* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3d::box3d() function, expected prototype:\nsgt::box3d::box3d()\nClass arguments details:\n");
		}


		return new sgt::box3d();
	}

	// sgt::box3d::box3d(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)
	static sgt::box3d* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3d::box3d(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax) function, expected prototype:\nsgt::box3d::box3d(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax)\nClass arguments details:\n");
		}

		double xmin=(double)lua_tonumber(L,1);
		double xmax=(double)lua_tonumber(L,2);
		double ymin=(double)lua_tonumber(L,3);
		double ymax=(double)lua_tonumber(L,4);
		double zmin=(double)lua_tonumber(L,5);
		double zmax=(double)lua_tonumber(L,6);

		return new sgt::box3d(xmin, xmax, ymin, ymax, zmin, zmax);
	}

	// sgt::box3d::box3d(const sgt::vec3d & p, const sgt::vec3d & q)
	static sgt::box3d* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3d::box3d(const sgt::vec3d & p, const sgt::vec3d & q) function, expected prototype:\nsgt::box3d::box3d(const sgt::vec3d & p, const sgt::vec3d & q)\nClass arguments details:\narg 1 ID = 76239300\narg 2 ID = 76239300\n");
		}

		const sgt::vec3d* p_ptr=(Luna< sgt::vec3d >::check(L,1));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box3d::box3d function");
		}
		const sgt::vec3d & p=*p_ptr;
		const sgt::vec3d* q_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !q_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg q in sgt::box3d::box3d function");
		}
		const sgt::vec3d & q=*q_ptr;

		return new sgt::box3d(p, q);
	}

	// Overload binder for sgt::box3d::box3d
	static sgt::box3d* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function box3d, cannot match any of the overloads for function box3d:\n  box3d()\n  box3d(double, double, double, double, double, double)\n  box3d(const sgt::vec3d &, const sgt::vec3d &)\n");
		return NULL;
	}


	// Function binds:
	// sgt::vec3d sgt::box3d::center() const
	static int _bind_center(lua_State *L) {
		if (!_lg_typecheck_center(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::vec3d sgt::box3d::center() const function, expected prototype:\nsgt::vec3d sgt::box3d::center() const\nClass arguments details:\n");
		}


		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::vec3d sgt::box3d::center() const. Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		sgt::vec3d stack_lret = self->center();
		sgt::vec3d* lret = new sgt::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3d >::push(L,lret,true);

		return 1;
	}

	// sgt::box3d sgt::box3d::enlarge(const sgt::vec3d & p) const
	static int _bind_enlarge_overload_1(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3d sgt::box3d::enlarge(const sgt::vec3d & p) const function, expected prototype:\nsgt::box3d sgt::box3d::enlarge(const sgt::vec3d & p) const\nClass arguments details:\narg 1 ID = 76239300\n");
		}

		const sgt::vec3d* p_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box3d::enlarge function");
		}
		const sgt::vec3d & p=*p_ptr;

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box3d sgt::box3d::enlarge(const sgt::vec3d &) const. Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		sgt::box3d stack_lret = self->enlarge(p);
		sgt::box3d* lret = new sgt::box3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box3d >::push(L,lret,true);

		return 1;
	}

	// sgt::box3d sgt::box3d::enlarge(const sgt::box3d & r) const
	static int _bind_enlarge_overload_2(lua_State *L) {
		if (!_lg_typecheck_enlarge_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in sgt::box3d sgt::box3d::enlarge(const sgt::box3d & r) const function, expected prototype:\nsgt::box3d sgt::box3d::enlarge(const sgt::box3d & r) const\nClass arguments details:\narg 1 ID = 58086971\n");
		}

		const sgt::box3d* r_ptr=(Luna< sgt::box3d >::check(L,2));
		if( !r_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg r in sgt::box3d::enlarge function");
		}
		const sgt::box3d & r=*r_ptr;

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call sgt::box3d sgt::box3d::enlarge(const sgt::box3d &) const. Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		sgt::box3d stack_lret = self->enlarge(r);
		sgt::box3d* lret = new sgt::box3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::box3d >::push(L,lret,true);

		return 1;
	}

	// Overload binder for sgt::box3d::enlarge
	static int _bind_enlarge(lua_State *L) {
		if (_lg_typecheck_enlarge_overload_1(L)) return _bind_enlarge_overload_1(L);
		if (_lg_typecheck_enlarge_overload_2(L)) return _bind_enlarge_overload_2(L);

		luaL_error(L, "error in function enlarge, cannot match any of the overloads for function enlarge:\n  enlarge(const sgt::vec3d &)\n  enlarge(const sgt::box3d &)\n");
		return 0;
	}

	// bool sgt::box3d::contains(const sgt::vec3d & p) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool sgt::box3d::contains(const sgt::vec3d & p) const function, expected prototype:\nbool sgt::box3d::contains(const sgt::vec3d & p) const\nClass arguments details:\narg 1 ID = 76239300\n");
		}

		const sgt::vec3d* p_ptr=(Luna< sgt::vec3d >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in sgt::box3d::contains function");
		}
		const sgt::vec3d & p=*p_ptr;

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool sgt::box3d::contains(const sgt::vec3d &) const. Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		bool lret = self->contains(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// double sgt::box3d::xmin()
	static int _bind_getXmin(lua_State *L) {
		if (!_lg_typecheck_getXmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::box3d::xmin() function, expected prototype:\ndouble sgt::box3d::xmin()\nClass arguments details:\n");
		}


		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::box3d::xmin(). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		double lret = self->xmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::box3d::xmax()
	static int _bind_getXmax(lua_State *L) {
		if (!_lg_typecheck_getXmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::box3d::xmax() function, expected prototype:\ndouble sgt::box3d::xmax()\nClass arguments details:\n");
		}


		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::box3d::xmax(). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		double lret = self->xmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::box3d::ymin()
	static int _bind_getYmin(lua_State *L) {
		if (!_lg_typecheck_getYmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::box3d::ymin() function, expected prototype:\ndouble sgt::box3d::ymin()\nClass arguments details:\n");
		}


		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::box3d::ymin(). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		double lret = self->ymin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::box3d::ymax()
	static int _bind_getYmax(lua_State *L) {
		if (!_lg_typecheck_getYmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::box3d::ymax() function, expected prototype:\ndouble sgt::box3d::ymax()\nClass arguments details:\n");
		}


		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::box3d::ymax(). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		double lret = self->ymax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::box3d::zmin()
	static int _bind_getZmin(lua_State *L) {
		if (!_lg_typecheck_getZmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::box3d::zmin() function, expected prototype:\ndouble sgt::box3d::zmin()\nClass arguments details:\n");
		}


		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::box3d::zmin(). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		double lret = self->zmin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double sgt::box3d::zmax()
	static int _bind_getZmax(lua_State *L) {
		if (!_lg_typecheck_getZmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double sgt::box3d::zmax() function, expected prototype:\ndouble sgt::box3d::zmax()\nClass arguments details:\n");
		}


		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double sgt::box3d::zmax(). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		double lret = self->zmax;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void sgt::box3d::xmin(double value)
	static int _bind_setXmin(lua_State *L) {
		if (!_lg_typecheck_setXmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3d::xmin(double value) function, expected prototype:\nvoid sgt::box3d::xmin(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3d::xmin(double). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		self->xmin = value;

		return 0;
	}

	// void sgt::box3d::xmax(double value)
	static int _bind_setXmax(lua_State *L) {
		if (!_lg_typecheck_setXmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3d::xmax(double value) function, expected prototype:\nvoid sgt::box3d::xmax(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3d::xmax(double). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		self->xmax = value;

		return 0;
	}

	// void sgt::box3d::ymin(double value)
	static int _bind_setYmin(lua_State *L) {
		if (!_lg_typecheck_setYmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3d::ymin(double value) function, expected prototype:\nvoid sgt::box3d::ymin(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3d::ymin(double). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		self->ymin = value;

		return 0;
	}

	// void sgt::box3d::ymax(double value)
	static int _bind_setYmax(lua_State *L) {
		if (!_lg_typecheck_setYmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3d::ymax(double value) function, expected prototype:\nvoid sgt::box3d::ymax(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3d::ymax(double). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		self->ymax = value;

		return 0;
	}

	// void sgt::box3d::zmin(double value)
	static int _bind_setZmin(lua_State *L) {
		if (!_lg_typecheck_setZmin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3d::zmin(double value) function, expected prototype:\nvoid sgt::box3d::zmin(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3d::zmin(double). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		self->zmin = value;

		return 0;
	}

	// void sgt::box3d::zmax(double value)
	static int _bind_setZmax(lua_State *L) {
		if (!_lg_typecheck_setZmax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void sgt::box3d::zmax(double value) function, expected prototype:\nvoid sgt::box3d::zmax(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		sgt::box3d* self=(Luna< sgt::box3d >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void sgt::box3d::zmax(double). Got : '%s'",typeid(Luna< sgt::box3d >::check(L,1)).name());
		}
		self->zmax = value;

		return 0;
	}


	// Operator binds:

};

sgt::box3d* LunaTraits< sgt::box3d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_box3d::_bind_ctor(L);
}

void LunaTraits< sgt::box3d >::_bind_dtor(sgt::box3d* obj) {
	delete obj;
}

const char LunaTraits< sgt::box3d >::className[] = "box3d";
const char LunaTraits< sgt::box3d >::fullName[] = "sgt::box3d";
const char LunaTraits< sgt::box3d >::moduleName[] = "sgt";
const char* LunaTraits< sgt::box3d >::parents[] = {0};
const int LunaTraits< sgt::box3d >::hash = 58086971;
const int LunaTraits< sgt::box3d >::uniqueIDs[] = {58086971,0};

luna_RegType LunaTraits< sgt::box3d >::methods[] = {
	{"center", &luna_wrapper_sgt_box3d::_bind_center},
	{"enlarge", &luna_wrapper_sgt_box3d::_bind_enlarge},
	{"contains", &luna_wrapper_sgt_box3d::_bind_contains},
	{"getXmin", &luna_wrapper_sgt_box3d::_bind_getXmin},
	{"getXmax", &luna_wrapper_sgt_box3d::_bind_getXmax},
	{"getYmin", &luna_wrapper_sgt_box3d::_bind_getYmin},
	{"getYmax", &luna_wrapper_sgt_box3d::_bind_getYmax},
	{"getZmin", &luna_wrapper_sgt_box3d::_bind_getZmin},
	{"getZmax", &luna_wrapper_sgt_box3d::_bind_getZmax},
	{"setXmin", &luna_wrapper_sgt_box3d::_bind_setXmin},
	{"setXmax", &luna_wrapper_sgt_box3d::_bind_setXmax},
	{"setYmin", &luna_wrapper_sgt_box3d::_bind_setYmin},
	{"setYmax", &luna_wrapper_sgt_box3d::_bind_setYmax},
	{"setZmin", &luna_wrapper_sgt_box3d::_bind_setZmin},
	{"setZmax", &luna_wrapper_sgt_box3d::_bind_setZmax},
	{"dynCast", &luna_wrapper_sgt_box3d::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_box3d::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_box3d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_box3d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::box3d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::box3d >::enumValues[] = {
	{0,0}
};


