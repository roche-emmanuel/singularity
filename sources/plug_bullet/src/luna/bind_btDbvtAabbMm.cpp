#include <plug_common.h>

class luna_wrapper_btDbvtAabbMm {
public:
	typedef Luna< btDbvtAabbMm > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88504824) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btDbvtAabbMm*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		btDbvtAabbMm* rhs =(Luna< btDbvtAabbMm >::check(L,2));
		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
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

		btDbvtAabbMm* self= (btDbvtAabbMm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< btDbvtAabbMm >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88504824) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("btDbvtAabbMm");
		
		return luna_dynamicCast(L,converters,"btDbvtAabbMm",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Center(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Lengths(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Extents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Mins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Maxs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SignedExpand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Contain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,88504824) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Classify(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProjectMinimum(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_tMins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_tMaxs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FromCE(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FromCR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FromMM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91544891) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,91544891) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FromPoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,91544891)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// btVector3 btDbvtAabbMm::Center() const
	static int _bind_Center(lua_State *L) {
		if (!_lg_typecheck_Center(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btDbvtAabbMm::Center() const function, expected prototype:\nbtVector3 btDbvtAabbMm::Center() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btDbvtAabbMm::Center() const. Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->Center();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btDbvtAabbMm::Lengths() const
	static int _bind_Lengths(lua_State *L) {
		if (!_lg_typecheck_Lengths(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btDbvtAabbMm::Lengths() const function, expected prototype:\nbtVector3 btDbvtAabbMm::Lengths() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btDbvtAabbMm::Lengths() const. Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->Lengths();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// btVector3 btDbvtAabbMm::Extents() const
	static int _bind_Extents(lua_State *L) {
		if (!_lg_typecheck_Extents(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 btDbvtAabbMm::Extents() const function, expected prototype:\nbtVector3 btDbvtAabbMm::Extents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 btDbvtAabbMm::Extents() const. Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		btVector3 stack_lret = self->Extents();
		btVector3* lret = new btVector3(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,true);

		return 1;
	}

	// const btVector3 & btDbvtAabbMm::Mins() const
	static int _bind_Mins(lua_State *L) {
		if (!_lg_typecheck_Mins(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btDbvtAabbMm::Mins() const function, expected prototype:\nconst btVector3 & btDbvtAabbMm::Mins() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btDbvtAabbMm::Mins() const. Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->Mins();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// const btVector3 & btDbvtAabbMm::Maxs() const
	static int _bind_Maxs(lua_State *L) {
		if (!_lg_typecheck_Maxs(L)) {
			luaL_error(L, "luna typecheck failed in const btVector3 & btDbvtAabbMm::Maxs() const function, expected prototype:\nconst btVector3 & btDbvtAabbMm::Maxs() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const btVector3 & btDbvtAabbMm::Maxs() const. Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->Maxs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// void btDbvtAabbMm::Expand(const btVector3 & e)
	static int _bind_Expand(lua_State *L) {
		if (!_lg_typecheck_Expand(L)) {
			luaL_error(L, "luna typecheck failed in void btDbvtAabbMm::Expand(const btVector3 & e) function, expected prototype:\nvoid btDbvtAabbMm::Expand(const btVector3 & e)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* e_ptr=(Luna< btVector3 >::check(L,2));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in btDbvtAabbMm::Expand function");
		}
		const btVector3 & e=*e_ptr;

		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDbvtAabbMm::Expand(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Expand(e);

		return 0;
	}

	// void btDbvtAabbMm::SignedExpand(const btVector3 & e)
	static int _bind_SignedExpand(lua_State *L) {
		if (!_lg_typecheck_SignedExpand(L)) {
			luaL_error(L, "luna typecheck failed in void btDbvtAabbMm::SignedExpand(const btVector3 & e) function, expected prototype:\nvoid btDbvtAabbMm::SignedExpand(const btVector3 & e)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* e_ptr=(Luna< btVector3 >::check(L,2));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in btDbvtAabbMm::SignedExpand function");
		}
		const btVector3 & e=*e_ptr;

		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void btDbvtAabbMm::SignedExpand(const btVector3 &). Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SignedExpand(e);

		return 0;
	}

	// bool btDbvtAabbMm::Contain(const btDbvtAabbMm & a) const
	static int _bind_Contain(lua_State *L) {
		if (!_lg_typecheck_Contain(L)) {
			luaL_error(L, "luna typecheck failed in bool btDbvtAabbMm::Contain(const btDbvtAabbMm & a) const function, expected prototype:\nbool btDbvtAabbMm::Contain(const btDbvtAabbMm & a) const\nClass arguments details:\narg 1 ID = 88504824\n\n%s",luna_dumpStack(L).c_str());
		}

		const btDbvtAabbMm* a_ptr=(Luna< btDbvtAabbMm >::check(L,2));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in btDbvtAabbMm::Contain function");
		}
		const btDbvtAabbMm & a=*a_ptr;

		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool btDbvtAabbMm::Contain(const btDbvtAabbMm &) const. Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Contain(a);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btDbvtAabbMm::Classify(const btVector3 & n, float o, int s) const
	static int _bind_Classify(lua_State *L) {
		if (!_lg_typecheck_Classify(L)) {
			luaL_error(L, "luna typecheck failed in int btDbvtAabbMm::Classify(const btVector3 & n, float o, int s) const function, expected prototype:\nint btDbvtAabbMm::Classify(const btVector3 & n, float o, int s) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* n_ptr=(Luna< btVector3 >::check(L,2));
		if( !n_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg n in btDbvtAabbMm::Classify function");
		}
		const btVector3 & n=*n_ptr;
		float o=(float)lua_tonumber(L,3);
		int s=(int)lua_tointeger(L,4);

		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int btDbvtAabbMm::Classify(const btVector3 &, float, int) const. Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Classify(n, o, s);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float btDbvtAabbMm::ProjectMinimum(const btVector3 & v, unsigned int signs) const
	static int _bind_ProjectMinimum(lua_State *L) {
		if (!_lg_typecheck_ProjectMinimum(L)) {
			luaL_error(L, "luna typecheck failed in float btDbvtAabbMm::ProjectMinimum(const btVector3 & v, unsigned int signs) const function, expected prototype:\nfloat btDbvtAabbMm::ProjectMinimum(const btVector3 & v, unsigned int signs) const\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* v_ptr=(Luna< btVector3 >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in btDbvtAabbMm::ProjectMinimum function");
		}
		const btVector3 & v=*v_ptr;
		unsigned signs=(unsigned)lua_tointeger(L,3);

		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float btDbvtAabbMm::ProjectMinimum(const btVector3 &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->ProjectMinimum(v, signs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// btVector3 & btDbvtAabbMm::tMins()
	static int _bind_tMins(lua_State *L) {
		if (!_lg_typecheck_tMins(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 & btDbvtAabbMm::tMins() function, expected prototype:\nbtVector3 & btDbvtAabbMm::tMins()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 & btDbvtAabbMm::tMins(). Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->tMins();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// btVector3 & btDbvtAabbMm::tMaxs()
	static int _bind_tMaxs(lua_State *L) {
		if (!_lg_typecheck_tMaxs(L)) {
			luaL_error(L, "luna typecheck failed in btVector3 & btDbvtAabbMm::tMaxs() function, expected prototype:\nbtVector3 & btDbvtAabbMm::tMaxs()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		btDbvtAabbMm* self=(Luna< btDbvtAabbMm >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call btVector3 & btDbvtAabbMm::tMaxs(). Got : '%s'\n%s",typeid(Luna< btDbvtAabbMm >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const btVector3* lret = &self->tMaxs();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btVector3 >::push(L,lret,false);

		return 1;
	}

	// static btDbvtAabbMm btDbvtAabbMm::FromCE(const btVector3 & c, const btVector3 & e)
	static int _bind_FromCE(lua_State *L) {
		if (!_lg_typecheck_FromCE(L)) {
			luaL_error(L, "luna typecheck failed in static btDbvtAabbMm btDbvtAabbMm::FromCE(const btVector3 & c, const btVector3 & e) function, expected prototype:\nstatic btDbvtAabbMm btDbvtAabbMm::FromCE(const btVector3 & c, const btVector3 & e)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* c_ptr=(Luna< btVector3 >::check(L,1));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in btDbvtAabbMm::FromCE function");
		}
		const btVector3 & c=*c_ptr;
		const btVector3* e_ptr=(Luna< btVector3 >::check(L,2));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in btDbvtAabbMm::FromCE function");
		}
		const btVector3 & e=*e_ptr;

		btDbvtAabbMm stack_lret = btDbvtAabbMm::FromCE(c, e);
		btDbvtAabbMm* lret = new btDbvtAabbMm(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtAabbMm >::push(L,lret,true);

		return 1;
	}

	// static btDbvtAabbMm btDbvtAabbMm::FromCR(const btVector3 & c, float r)
	static int _bind_FromCR(lua_State *L) {
		if (!_lg_typecheck_FromCR(L)) {
			luaL_error(L, "luna typecheck failed in static btDbvtAabbMm btDbvtAabbMm::FromCR(const btVector3 & c, float r) function, expected prototype:\nstatic btDbvtAabbMm btDbvtAabbMm::FromCR(const btVector3 & c, float r)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* c_ptr=(Luna< btVector3 >::check(L,1));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in btDbvtAabbMm::FromCR function");
		}
		const btVector3 & c=*c_ptr;
		float r=(float)lua_tonumber(L,2);

		btDbvtAabbMm stack_lret = btDbvtAabbMm::FromCR(c, r);
		btDbvtAabbMm* lret = new btDbvtAabbMm(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtAabbMm >::push(L,lret,true);

		return 1;
	}

	// static btDbvtAabbMm btDbvtAabbMm::FromMM(const btVector3 & mi, const btVector3 & mx)
	static int _bind_FromMM(lua_State *L) {
		if (!_lg_typecheck_FromMM(L)) {
			luaL_error(L, "luna typecheck failed in static btDbvtAabbMm btDbvtAabbMm::FromMM(const btVector3 & mi, const btVector3 & mx) function, expected prototype:\nstatic btDbvtAabbMm btDbvtAabbMm::FromMM(const btVector3 & mi, const btVector3 & mx)\nClass arguments details:\narg 1 ID = 91544891\narg 2 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* mi_ptr=(Luna< btVector3 >::check(L,1));
		if( !mi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mi in btDbvtAabbMm::FromMM function");
		}
		const btVector3 & mi=*mi_ptr;
		const btVector3* mx_ptr=(Luna< btVector3 >::check(L,2));
		if( !mx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mx in btDbvtAabbMm::FromMM function");
		}
		const btVector3 & mx=*mx_ptr;

		btDbvtAabbMm stack_lret = btDbvtAabbMm::FromMM(mi, mx);
		btDbvtAabbMm* lret = new btDbvtAabbMm(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtAabbMm >::push(L,lret,true);

		return 1;
	}

	// static btDbvtAabbMm btDbvtAabbMm::FromPoints(const btVector3 * pts, int n)
	static int _bind_FromPoints(lua_State *L) {
		if (!_lg_typecheck_FromPoints(L)) {
			luaL_error(L, "luna typecheck failed in static btDbvtAabbMm btDbvtAabbMm::FromPoints(const btVector3 * pts, int n) function, expected prototype:\nstatic btDbvtAabbMm btDbvtAabbMm::FromPoints(const btVector3 * pts, int n)\nClass arguments details:\narg 1 ID = 91544891\n\n%s",luna_dumpStack(L).c_str());
		}

		const btVector3* pts=(Luna< btVector3 >::check(L,1));
		int n=(int)lua_tointeger(L,2);

		btDbvtAabbMm stack_lret = btDbvtAabbMm::FromPoints(pts, n);
		btDbvtAabbMm* lret = new btDbvtAabbMm(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btDbvtAabbMm >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

btDbvtAabbMm* LunaTraits< btDbvtAabbMm >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< btDbvtAabbMm >::_bind_dtor(btDbvtAabbMm* obj) {
	delete obj;
}

const char LunaTraits< btDbvtAabbMm >::className[] = "btDbvtAabbMm";
const char LunaTraits< btDbvtAabbMm >::fullName[] = "btDbvtAabbMm";
const char LunaTraits< btDbvtAabbMm >::moduleName[] = "bullet";
const char* LunaTraits< btDbvtAabbMm >::parents[] = {0};
const int LunaTraits< btDbvtAabbMm >::hash = 88504824;
const int LunaTraits< btDbvtAabbMm >::uniqueIDs[] = {88504824,0};

luna_RegType LunaTraits< btDbvtAabbMm >::methods[] = {
	{"Center", &luna_wrapper_btDbvtAabbMm::_bind_Center},
	{"Lengths", &luna_wrapper_btDbvtAabbMm::_bind_Lengths},
	{"Extents", &luna_wrapper_btDbvtAabbMm::_bind_Extents},
	{"Mins", &luna_wrapper_btDbvtAabbMm::_bind_Mins},
	{"Maxs", &luna_wrapper_btDbvtAabbMm::_bind_Maxs},
	{"Expand", &luna_wrapper_btDbvtAabbMm::_bind_Expand},
	{"SignedExpand", &luna_wrapper_btDbvtAabbMm::_bind_SignedExpand},
	{"Contain", &luna_wrapper_btDbvtAabbMm::_bind_Contain},
	{"Classify", &luna_wrapper_btDbvtAabbMm::_bind_Classify},
	{"ProjectMinimum", &luna_wrapper_btDbvtAabbMm::_bind_ProjectMinimum},
	{"tMins", &luna_wrapper_btDbvtAabbMm::_bind_tMins},
	{"tMaxs", &luna_wrapper_btDbvtAabbMm::_bind_tMaxs},
	{"FromCE", &luna_wrapper_btDbvtAabbMm::_bind_FromCE},
	{"FromCR", &luna_wrapper_btDbvtAabbMm::_bind_FromCR},
	{"FromMM", &luna_wrapper_btDbvtAabbMm::_bind_FromMM},
	{"FromPoints", &luna_wrapper_btDbvtAabbMm::_bind_FromPoints},
	{"dynCast", &luna_wrapper_btDbvtAabbMm::_bind_dynCast},
	{"__eq", &luna_wrapper_btDbvtAabbMm::_bind___eq},
	{"fromVoid", &luna_wrapper_btDbvtAabbMm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_btDbvtAabbMm::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< btDbvtAabbMm >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< btDbvtAabbMm >::enumValues[] = {
	{0,0}
};


