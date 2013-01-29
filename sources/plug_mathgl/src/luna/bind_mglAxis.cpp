#include <plug_common.h>

class luna_wrapper_mglAxis {
public:
	typedef Luna< mglAxis > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88494129) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglAxis*)");
		}

		mglAxis* rhs =(Luna< mglAxis >::check(L,2));
		mglAxis* self=(Luna< mglAxis >::check(L,1));
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

		mglAxis* self= (mglAxis*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglAxis >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88494129) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglAxis >::check(L,1));
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

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglAxis");
		
		return luna_dynamicCast(L,converters,"mglAxis",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88494129) ) return false;
		if( (!(Luna< mglAxis >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddLabel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDv(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDir(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getA(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOrg(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getV2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getO(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getF(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTxt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setA(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setB(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOrg(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56902440) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setV2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setO(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setF(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTxt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64344026) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSh(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// mglAxis::mglAxis()
	static mglAxis* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglAxis::mglAxis() function, expected prototype:\nmglAxis::mglAxis()\nClass arguments details:\n");
		}


		return new mglAxis();
	}

	// mglAxis::mglAxis(const mglAxis & aa)
	static mglAxis* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglAxis::mglAxis(const mglAxis & aa) function, expected prototype:\nmglAxis::mglAxis(const mglAxis & aa)\nClass arguments details:\narg 1 ID = 88494129\n");
		}

		const mglAxis* aa_ptr=(Luna< mglAxis >::check(L,1));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in mglAxis::mglAxis function");
		}
		const mglAxis & aa=*aa_ptr;

		return new mglAxis(aa);
	}

	// Overload binder for mglAxis::mglAxis
	static mglAxis* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function mglAxis, cannot match any of the overloads for function mglAxis:\n  mglAxis()\n  mglAxis(const mglAxis &)\n");
		return NULL;
	}


	// Function binds:
	// void mglAxis::AddLabel(const std::wstring & lbl, double v)
	static int _bind_AddLabel(lua_State *L) {
		if (!_lg_typecheck_AddLabel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::AddLabel(const std::wstring & lbl, double v) function, expected prototype:\nvoid mglAxis::AddLabel(const std::wstring & lbl, double v)\nClass arguments details:\n");
		}

		std::string lbl_str(lua_tostring(L,2),lua_objlen(L,2));
		std::wstring lbl = sgt::s2ws(lbl_str);
		double v=(double)lua_tonumber(L,3);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::AddLabel(const std::wstring &, double). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->AddLabel(lbl, v);

		return 0;
	}

	// double mglAxis::dv()
	static int _bind_getDv(lua_State *L) {
		if (!_lg_typecheck_getDv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglAxis::dv() function, expected prototype:\ndouble mglAxis::dv()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglAxis::dv(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		double lret = self->dv;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglAxis::ds()
	static int _bind_getDs(lua_State *L) {
		if (!_lg_typecheck_getDs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglAxis::ds() function, expected prototype:\ndouble mglAxis::ds()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglAxis::ds(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		double lret = self->ds;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglAxis::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglAxis::d() function, expected prototype:\ndouble mglAxis::d()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglAxis::d(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		double lret = self->d;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglAxis::ns()
	static int _bind_getNs(lua_State *L) {
		if (!_lg_typecheck_getNs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglAxis::ns() function, expected prototype:\nint mglAxis::ns()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglAxis::ns(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		int lret = self->ns;
		lua_pushnumber(L,lret);

		return 1;
	}

	// mglPoint mglAxis::dir()
	static int _bind_getDir(lua_State *L) {
		if (!_lg_typecheck_getDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglAxis::dir() function, expected prototype:\nmglPoint mglAxis::dir()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglAxis::dir(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		const mglPoint* lret = &self->dir;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// mglPoint mglAxis::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglAxis::a() function, expected prototype:\nmglPoint mglAxis::a()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglAxis::a(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		const mglPoint* lret = &self->a;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// mglPoint mglAxis::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglAxis::b() function, expected prototype:\nmglPoint mglAxis::b()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglAxis::b(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		const mglPoint* lret = &self->b;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// mglPoint mglAxis::org()
	static int _bind_getOrg(lua_State *L) {
		if (!_lg_typecheck_getOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglPoint mglAxis::org() function, expected prototype:\nmglPoint mglAxis::org()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call mglPoint mglAxis::org(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		const mglPoint* lret = &self->org;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< mglPoint >::push(L,lret,false);

		return 1;
	}

	// double mglAxis::v0()
	static int _bind_getV0(lua_State *L) {
		if (!_lg_typecheck_getV0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglAxis::v0() function, expected prototype:\ndouble mglAxis::v0()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglAxis::v0(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		double lret = self->v0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglAxis::v1()
	static int _bind_getV1(lua_State *L) {
		if (!_lg_typecheck_getV1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglAxis::v1() function, expected prototype:\ndouble mglAxis::v1()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglAxis::v1(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		double lret = self->v1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglAxis::v2()
	static int _bind_getV2(lua_State *L) {
		if (!_lg_typecheck_getV2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglAxis::v2() function, expected prototype:\ndouble mglAxis::v2()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglAxis::v2(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		double lret = self->v2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglAxis::o()
	static int _bind_getO(lua_State *L) {
		if (!_lg_typecheck_getO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglAxis::o() function, expected prototype:\ndouble mglAxis::o()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglAxis::o(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		double lret = self->o;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglAxis::f()
	static int _bind_getF(lua_State *L) {
		if (!_lg_typecheck_getF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglAxis::f() function, expected prototype:\nint mglAxis::f()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglAxis::f(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		int lret = self->f;
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::vector< mglText > mglAxis::txt()
	static int _bind_getTxt(lua_State *L) {
		if (!_lg_typecheck_getTxt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::vector< mglText > mglAxis::txt() function, expected prototype:\nstd::vector< mglText > mglAxis::txt()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::vector< mglText > mglAxis::txt(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		const std::vector< mglText >* lret = &self->txt;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< mglText > >::push(L,lret,false);

		return 1;
	}

	// char mglAxis::ch()
	static int _bind_getCh(lua_State *L) {
		if (!_lg_typecheck_getCh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char mglAxis::ch() function, expected prototype:\nchar mglAxis::ch()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char mglAxis::ch(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		char lret = self->ch;
		lua_pushnumber(L,lret);

		return 1;
	}

	// char mglAxis::pos()
	static int _bind_getPos(lua_State *L) {
		if (!_lg_typecheck_getPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in char mglAxis::pos() function, expected prototype:\nchar mglAxis::pos()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call char mglAxis::pos(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		char lret = self->pos;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglAxis::sh()
	static int _bind_getSh(lua_State *L) {
		if (!_lg_typecheck_getSh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglAxis::sh() function, expected prototype:\ndouble mglAxis::sh()\nClass arguments details:\n");
		}


		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglAxis::sh(). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		double lret = self->sh;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglAxis::dv(double value)
	static int _bind_setDv(lua_State *L) {
		if (!_lg_typecheck_setDv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::dv(double value) function, expected prototype:\nvoid mglAxis::dv(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::dv(double). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->dv = value;

		return 0;
	}

	// void mglAxis::ds(double value)
	static int _bind_setDs(lua_State *L) {
		if (!_lg_typecheck_setDs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::ds(double value) function, expected prototype:\nvoid mglAxis::ds(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::ds(double). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->ds = value;

		return 0;
	}

	// void mglAxis::d(double value)
	static int _bind_setD(lua_State *L) {
		if (!_lg_typecheck_setD(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::d(double value) function, expected prototype:\nvoid mglAxis::d(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::d(double). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->d = value;

		return 0;
	}

	// void mglAxis::ns(int value)
	static int _bind_setNs(lua_State *L) {
		if (!_lg_typecheck_setNs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::ns(int value) function, expected prototype:\nvoid mglAxis::ns(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::ns(int). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->ns = value;

		return 0;
	}

	// void mglAxis::dir(mglPoint value)
	static int _bind_setDir(lua_State *L) {
		if (!_lg_typecheck_setDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::dir(mglPoint value) function, expected prototype:\nvoid mglAxis::dir(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglAxis::dir function");
		}
		mglPoint value=*value_ptr;

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::dir(mglPoint). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->dir = value;

		return 0;
	}

	// void mglAxis::a(mglPoint value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::a(mglPoint value) function, expected prototype:\nvoid mglAxis::a(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglAxis::a function");
		}
		mglPoint value=*value_ptr;

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::a(mglPoint). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->a = value;

		return 0;
	}

	// void mglAxis::b(mglPoint value)
	static int _bind_setB(lua_State *L) {
		if (!_lg_typecheck_setB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::b(mglPoint value) function, expected prototype:\nvoid mglAxis::b(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglAxis::b function");
		}
		mglPoint value=*value_ptr;

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::b(mglPoint). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->b = value;

		return 0;
	}

	// void mglAxis::org(mglPoint value)
	static int _bind_setOrg(lua_State *L) {
		if (!_lg_typecheck_setOrg(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::org(mglPoint value) function, expected prototype:\nvoid mglAxis::org(mglPoint value)\nClass arguments details:\narg 1 ID = 56902440\n");
		}

		mglPoint* value_ptr=(Luna< mglPoint >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglAxis::org function");
		}
		mglPoint value=*value_ptr;

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::org(mglPoint). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->org = value;

		return 0;
	}

	// void mglAxis::v0(double value)
	static int _bind_setV0(lua_State *L) {
		if (!_lg_typecheck_setV0(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::v0(double value) function, expected prototype:\nvoid mglAxis::v0(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::v0(double). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->v0 = value;

		return 0;
	}

	// void mglAxis::v1(double value)
	static int _bind_setV1(lua_State *L) {
		if (!_lg_typecheck_setV1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::v1(double value) function, expected prototype:\nvoid mglAxis::v1(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::v1(double). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->v1 = value;

		return 0;
	}

	// void mglAxis::v2(double value)
	static int _bind_setV2(lua_State *L) {
		if (!_lg_typecheck_setV2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::v2(double value) function, expected prototype:\nvoid mglAxis::v2(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::v2(double). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->v2 = value;

		return 0;
	}

	// void mglAxis::o(double value)
	static int _bind_setO(lua_State *L) {
		if (!_lg_typecheck_setO(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::o(double value) function, expected prototype:\nvoid mglAxis::o(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::o(double). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->o = value;

		return 0;
	}

	// void mglAxis::f(int value)
	static int _bind_setF(lua_State *L) {
		if (!_lg_typecheck_setF(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::f(int value) function, expected prototype:\nvoid mglAxis::f(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::f(int). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->f = value;

		return 0;
	}

	// void mglAxis::txt(std::vector< mglText > value)
	static int _bind_setTxt(lua_State *L) {
		if (!_lg_typecheck_setTxt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::txt(std::vector< mglText > value) function, expected prototype:\nvoid mglAxis::txt(std::vector< mglText > value)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		std::vector< mglText >* value_ptr=(Luna< std::vector< mglText > >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in mglAxis::txt function");
		}
		std::vector< mglText > value=*value_ptr;

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::txt(std::vector< mglText >). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->txt = value;

		return 0;
	}

	// void mglAxis::ch(char value)
	static int _bind_setCh(lua_State *L) {
		if (!_lg_typecheck_setCh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::ch(char value) function, expected prototype:\nvoid mglAxis::ch(char value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::ch(char). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->ch = value;

		return 0;
	}

	// void mglAxis::pos(char value)
	static int _bind_setPos(lua_State *L) {
		if (!_lg_typecheck_setPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::pos(char value) function, expected prototype:\nvoid mglAxis::pos(char value)\nClass arguments details:\n");
		}

		char value=(char)lua_tointeger(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::pos(char). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->pos = value;

		return 0;
	}

	// void mglAxis::sh(double value)
	static int _bind_setSh(lua_State *L) {
		if (!_lg_typecheck_setSh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglAxis::sh(double value) function, expected prototype:\nvoid mglAxis::sh(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglAxis* self=(Luna< mglAxis >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglAxis::sh(double). Got : '%s'",typeid(Luna< mglAxis >::check(L,1)).name());
		}
		self->sh = value;

		return 0;
	}


	// Operator binds:

};

mglAxis* LunaTraits< mglAxis >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglAxis::_bind_ctor(L);
}

void LunaTraits< mglAxis >::_bind_dtor(mglAxis* obj) {
	delete obj;
}

const char LunaTraits< mglAxis >::className[] = "mglAxis";
const char LunaTraits< mglAxis >::fullName[] = "mglAxis";
const char LunaTraits< mglAxis >::moduleName[] = "mathgl";
const char* LunaTraits< mglAxis >::parents[] = {0};
const int LunaTraits< mglAxis >::hash = 88494129;
const int LunaTraits< mglAxis >::uniqueIDs[] = {88494129,0};

luna_RegType LunaTraits< mglAxis >::methods[] = {
	{"AddLabel", &luna_wrapper_mglAxis::_bind_AddLabel},
	{"getDv", &luna_wrapper_mglAxis::_bind_getDv},
	{"getDs", &luna_wrapper_mglAxis::_bind_getDs},
	{"getD", &luna_wrapper_mglAxis::_bind_getD},
	{"getNs", &luna_wrapper_mglAxis::_bind_getNs},
	{"getDir", &luna_wrapper_mglAxis::_bind_getDir},
	{"getA", &luna_wrapper_mglAxis::_bind_getA},
	{"getB", &luna_wrapper_mglAxis::_bind_getB},
	{"getOrg", &luna_wrapper_mglAxis::_bind_getOrg},
	{"getV0", &luna_wrapper_mglAxis::_bind_getV0},
	{"getV1", &luna_wrapper_mglAxis::_bind_getV1},
	{"getV2", &luna_wrapper_mglAxis::_bind_getV2},
	{"getO", &luna_wrapper_mglAxis::_bind_getO},
	{"getF", &luna_wrapper_mglAxis::_bind_getF},
	{"getTxt", &luna_wrapper_mglAxis::_bind_getTxt},
	{"getCh", &luna_wrapper_mglAxis::_bind_getCh},
	{"getPos", &luna_wrapper_mglAxis::_bind_getPos},
	{"getSh", &luna_wrapper_mglAxis::_bind_getSh},
	{"setDv", &luna_wrapper_mglAxis::_bind_setDv},
	{"setDs", &luna_wrapper_mglAxis::_bind_setDs},
	{"setD", &luna_wrapper_mglAxis::_bind_setD},
	{"setNs", &luna_wrapper_mglAxis::_bind_setNs},
	{"setDir", &luna_wrapper_mglAxis::_bind_setDir},
	{"setA", &luna_wrapper_mglAxis::_bind_setA},
	{"setB", &luna_wrapper_mglAxis::_bind_setB},
	{"setOrg", &luna_wrapper_mglAxis::_bind_setOrg},
	{"setV0", &luna_wrapper_mglAxis::_bind_setV0},
	{"setV1", &luna_wrapper_mglAxis::_bind_setV1},
	{"setV2", &luna_wrapper_mglAxis::_bind_setV2},
	{"setO", &luna_wrapper_mglAxis::_bind_setO},
	{"setF", &luna_wrapper_mglAxis::_bind_setF},
	{"setTxt", &luna_wrapper_mglAxis::_bind_setTxt},
	{"setCh", &luna_wrapper_mglAxis::_bind_setCh},
	{"setPos", &luna_wrapper_mglAxis::_bind_setPos},
	{"setSh", &luna_wrapper_mglAxis::_bind_setSh},
	{"dynCast", &luna_wrapper_mglAxis::_bind_dynCast},
	{"__eq", &luna_wrapper_mglAxis::_bind___eq},
	{"fromVoid", &luna_wrapper_mglAxis::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglAxis::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglAxis >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglAxis >::enumValues[] = {
	{0,0}
};


