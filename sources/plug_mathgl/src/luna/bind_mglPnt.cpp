#include <plug_common.h>

class luna_wrapper_mglPnt {
public:
	typedef Luna< mglPnt > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18997795) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglPnt*)");
		}

		mglPnt* rhs =(Luna< mglPnt >::check(L,2));
		mglPnt* self=(Luna< mglPnt >::check(L,1));
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

		mglPnt* self= (mglPnt*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglPnt >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18997795) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglPnt >::check(L,1));
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

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglPnt");
		
		return luna_dynamicCast(L,converters,"mglPnt",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getXx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getYy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getC(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getT(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTa(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getU(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getW(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getG(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setXx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setYy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setT(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTa(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setU(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setG(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglPnt::mglPnt()
	static mglPnt* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPnt::mglPnt() function, expected prototype:\nmglPnt::mglPnt()\nClass arguments details:\n");
		}


		return new mglPnt();
	}


	// Function binds:
	// float mglPnt::xx()
	static int _bind_getXx(lua_State *L) {
		if (!_lg_typecheck_getXx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::xx() function, expected prototype:\nfloat mglPnt::xx()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::xx(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->xx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::yy()
	static int _bind_getYy(lua_State *L) {
		if (!_lg_typecheck_getYy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::yy() function, expected prototype:\nfloat mglPnt::yy()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::yy(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->yy;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::zz()
	static int _bind_getZz(lua_State *L) {
		if (!_lg_typecheck_getZz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::zz() function, expected prototype:\nfloat mglPnt::zz()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::zz(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->zz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::x() function, expected prototype:\nfloat mglPnt::x()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::x(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::y() function, expected prototype:\nfloat mglPnt::y()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::y(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::z() function, expected prototype:\nfloat mglPnt::z()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::z(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::c()
	static int _bind_getC(lua_State *L) {
		if (!_lg_typecheck_getC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::c() function, expected prototype:\nfloat mglPnt::c()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::c(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->c;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::t()
	static int _bind_getT(lua_State *L) {
		if (!_lg_typecheck_getT(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::t() function, expected prototype:\nfloat mglPnt::t()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::t(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->t;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::ta()
	static int _bind_getTa(lua_State *L) {
		if (!_lg_typecheck_getTa(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::ta() function, expected prototype:\nfloat mglPnt::ta()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::ta(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->ta;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::u()
	static int _bind_getU(lua_State *L) {
		if (!_lg_typecheck_getU(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::u() function, expected prototype:\nfloat mglPnt::u()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::u(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->u;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::v()
	static int _bind_getV(lua_State *L) {
		if (!_lg_typecheck_getV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::v() function, expected prototype:\nfloat mglPnt::v()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::v(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->v;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::w()
	static int _bind_getW(lua_State *L) {
		if (!_lg_typecheck_getW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::w() function, expected prototype:\nfloat mglPnt::w()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::w(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->w;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::r()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::r() function, expected prototype:\nfloat mglPnt::r()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::r(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->r;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::g()
	static int _bind_getG(lua_State *L) {
		if (!_lg_typecheck_getG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::g() function, expected prototype:\nfloat mglPnt::g()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::g(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->g;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::b() function, expected prototype:\nfloat mglPnt::b()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::b(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->b;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglPnt::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglPnt::a() function, expected prototype:\nfloat mglPnt::a()\nClass arguments details:\n");
		}


		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglPnt::a(). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		float lret = self->a;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglPnt::xx(float value)
	static int _bind_setXx(lua_State *L) {
		if (!_lg_typecheck_setXx(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::xx(float value) function, expected prototype:\nvoid mglPnt::xx(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::xx(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->xx = value;

		return 0;
	}

	// void mglPnt::yy(float value)
	static int _bind_setYy(lua_State *L) {
		if (!_lg_typecheck_setYy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::yy(float value) function, expected prototype:\nvoid mglPnt::yy(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::yy(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->yy = value;

		return 0;
	}

	// void mglPnt::zz(float value)
	static int _bind_setZz(lua_State *L) {
		if (!_lg_typecheck_setZz(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::zz(float value) function, expected prototype:\nvoid mglPnt::zz(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::zz(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->zz = value;

		return 0;
	}

	// void mglPnt::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::x(float value) function, expected prototype:\nvoid mglPnt::x(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::x(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void mglPnt::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::y(float value) function, expected prototype:\nvoid mglPnt::y(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::y(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void mglPnt::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::z(float value) function, expected prototype:\nvoid mglPnt::z(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::z(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->z = value;

		return 0;
	}

	// void mglPnt::c(float value)
	static int _bind_setC(lua_State *L) {
		if (!_lg_typecheck_setC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::c(float value) function, expected prototype:\nvoid mglPnt::c(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::c(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->c = value;

		return 0;
	}

	// void mglPnt::t(float value)
	static int _bind_setT(lua_State *L) {
		if (!_lg_typecheck_setT(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::t(float value) function, expected prototype:\nvoid mglPnt::t(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::t(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->t = value;

		return 0;
	}

	// void mglPnt::ta(float value)
	static int _bind_setTa(lua_State *L) {
		if (!_lg_typecheck_setTa(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::ta(float value) function, expected prototype:\nvoid mglPnt::ta(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::ta(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->ta = value;

		return 0;
	}

	// void mglPnt::u(float value)
	static int _bind_setU(lua_State *L) {
		if (!_lg_typecheck_setU(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::u(float value) function, expected prototype:\nvoid mglPnt::u(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::u(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->u = value;

		return 0;
	}

	// void mglPnt::v(float value)
	static int _bind_setV(lua_State *L) {
		if (!_lg_typecheck_setV(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::v(float value) function, expected prototype:\nvoid mglPnt::v(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::v(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->v = value;

		return 0;
	}

	// void mglPnt::w(float value)
	static int _bind_setW(lua_State *L) {
		if (!_lg_typecheck_setW(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::w(float value) function, expected prototype:\nvoid mglPnt::w(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::w(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->w = value;

		return 0;
	}

	// void mglPnt::r(float value)
	static int _bind_setR(lua_State *L) {
		if (!_lg_typecheck_setR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::r(float value) function, expected prototype:\nvoid mglPnt::r(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::r(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->r = value;

		return 0;
	}

	// void mglPnt::g(float value)
	static int _bind_setG(lua_State *L) {
		if (!_lg_typecheck_setG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::g(float value) function, expected prototype:\nvoid mglPnt::g(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::g(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->g = value;

		return 0;
	}

	// void mglPnt::b(float value)
	static int _bind_setB(lua_State *L) {
		if (!_lg_typecheck_setB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::b(float value) function, expected prototype:\nvoid mglPnt::b(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::b(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->b = value;

		return 0;
	}

	// void mglPnt::a(float value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglPnt::a(float value) function, expected prototype:\nvoid mglPnt::a(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglPnt* self=(Luna< mglPnt >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglPnt::a(float). Got : '%s'",typeid(Luna< mglPnt >::check(L,1)).name());
		}
		self->a = value;

		return 0;
	}


	// Operator binds:

};

mglPnt* LunaTraits< mglPnt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglPnt::_bind_ctor(L);
}

void LunaTraits< mglPnt >::_bind_dtor(mglPnt* obj) {
	delete obj;
}

const char LunaTraits< mglPnt >::className[] = "mglPnt";
const char LunaTraits< mglPnt >::fullName[] = "mglPnt";
const char LunaTraits< mglPnt >::moduleName[] = "mathgl";
const char* LunaTraits< mglPnt >::parents[] = {0};
const int LunaTraits< mglPnt >::hash = 18997795;
const int LunaTraits< mglPnt >::uniqueIDs[] = {18997795,0};

luna_RegType LunaTraits< mglPnt >::methods[] = {
	{"getXx", &luna_wrapper_mglPnt::_bind_getXx},
	{"getYy", &luna_wrapper_mglPnt::_bind_getYy},
	{"getZz", &luna_wrapper_mglPnt::_bind_getZz},
	{"getX", &luna_wrapper_mglPnt::_bind_getX},
	{"getY", &luna_wrapper_mglPnt::_bind_getY},
	{"getZ", &luna_wrapper_mglPnt::_bind_getZ},
	{"getC", &luna_wrapper_mglPnt::_bind_getC},
	{"getT", &luna_wrapper_mglPnt::_bind_getT},
	{"getTa", &luna_wrapper_mglPnt::_bind_getTa},
	{"getU", &luna_wrapper_mglPnt::_bind_getU},
	{"getV", &luna_wrapper_mglPnt::_bind_getV},
	{"getW", &luna_wrapper_mglPnt::_bind_getW},
	{"getR", &luna_wrapper_mglPnt::_bind_getR},
	{"getG", &luna_wrapper_mglPnt::_bind_getG},
	{"getB", &luna_wrapper_mglPnt::_bind_getB},
	{"getA", &luna_wrapper_mglPnt::_bind_getA},
	{"setXx", &luna_wrapper_mglPnt::_bind_setXx},
	{"setYy", &luna_wrapper_mglPnt::_bind_setYy},
	{"setZz", &luna_wrapper_mglPnt::_bind_setZz},
	{"setX", &luna_wrapper_mglPnt::_bind_setX},
	{"setY", &luna_wrapper_mglPnt::_bind_setY},
	{"setZ", &luna_wrapper_mglPnt::_bind_setZ},
	{"setC", &luna_wrapper_mglPnt::_bind_setC},
	{"setT", &luna_wrapper_mglPnt::_bind_setT},
	{"setTa", &luna_wrapper_mglPnt::_bind_setTa},
	{"setU", &luna_wrapper_mglPnt::_bind_setU},
	{"setV", &luna_wrapper_mglPnt::_bind_setV},
	{"setW", &luna_wrapper_mglPnt::_bind_setW},
	{"setR", &luna_wrapper_mglPnt::_bind_setR},
	{"setG", &luna_wrapper_mglPnt::_bind_setG},
	{"setB", &luna_wrapper_mglPnt::_bind_setB},
	{"setA", &luna_wrapper_mglPnt::_bind_setA},
	{"dynCast", &luna_wrapper_mglPnt::_bind_dynCast},
	{"__eq", &luna_wrapper_mglPnt::_bind___eq},
	{"fromVoid", &luna_wrapper_mglPnt::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglPnt::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglPnt >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglPnt >::enumValues[] = {
	{0,0}
};


