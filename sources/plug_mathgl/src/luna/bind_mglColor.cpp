#include <plug_common.h>

class luna_wrapper_mglColor {
public:
	typedef Luna< mglColor > luna_t;

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

		mglColor* self= (mglColor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglColor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44899579) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglColor >::check(L,1));
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

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglColor");
		
		return luna_dynamicCast(L,converters,"mglColor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		if( (!(Luna< mglColor >::check(L,2))) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Norm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NormS(lua_State *L) {
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
	// (found 6 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,44899579) ) return false;
		return true;
	}


	// Constructor binds:
	// mglColor::mglColor(float R, float G, float B, float A = 1)
	static mglColor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglColor::mglColor(float R, float G, float B, float A = 1) function, expected prototype:\nmglColor::mglColor(float R, float G, float B, float A = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float R=(float)lua_tonumber(L,1);
		float G=(float)lua_tonumber(L,2);
		float B=(float)lua_tonumber(L,3);
		float A=luatop>3 ? (float)lua_tonumber(L,4) : 1;

		return new mglColor(R, G, B, A);
	}

	// mglColor::mglColor(char c = 'k', float bright = 1)
	static mglColor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in mglColor::mglColor(char c = 'k', float bright = 1) function, expected prototype:\nmglColor::mglColor(char c = 'k', float bright = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char c=luatop>0 ? (char)lua_tointeger(L,1) : 'k';
		float bright=luatop>1 ? (float)lua_tonumber(L,2) : 1;

		return new mglColor(c, bright);
	}

	// Overload binder for mglColor::mglColor
	static mglColor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function mglColor, cannot match any of the overloads for function mglColor:\n  mglColor(float, float, float, float)\n  mglColor(char, float)\n");
		return NULL;
	}


	// Function binds:
	// void mglColor::Set(float R, float G, float B, float A = 1)
	static int _bind_Set_overload_1(lua_State *L) {
		if (!_lg_typecheck_Set_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::Set(float R, float G, float B, float A = 1) function, expected prototype:\nvoid mglColor::Set(float R, float G, float B, float A = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float R=(float)lua_tonumber(L,2);
		float G=(float)lua_tonumber(L,3);
		float B=(float)lua_tonumber(L,4);
		float A=luatop>4 ? (float)lua_tonumber(L,5) : 1;

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::Set(float, float, float, float). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->Set(R, G, B, A);

		return 0;
	}

	// void mglColor::Set(mglColor c, float bright = 1)
	static int _bind_Set_overload_2(lua_State *L) {
		if (!_lg_typecheck_Set_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::Set(mglColor c, float bright = 1) function, expected prototype:\nvoid mglColor::Set(mglColor c, float bright = 1)\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		int luatop = lua_gettop(L);

		mglColor* c_ptr=(Luna< mglColor >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglColor::Set function");
		}
		mglColor c=*c_ptr;
		float bright=luatop>2 ? (float)lua_tonumber(L,3) : 1;

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::Set(mglColor, float). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->Set(c, bright);

		return 0;
	}

	// void mglColor::Set(char p, float bright = 1)
	static int _bind_Set_overload_3(lua_State *L) {
		if (!_lg_typecheck_Set_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::Set(char p, float bright = 1) function, expected prototype:\nvoid mglColor::Set(char p, float bright = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		char p=(char)lua_tointeger(L,2);
		float bright=luatop>2 ? (float)lua_tonumber(L,3) : 1;

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::Set(char, float). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->Set(p, bright);

		return 0;
	}

	// Overload binder for mglColor::Set
	static int _bind_Set(lua_State *L) {
		if (_lg_typecheck_Set_overload_1(L)) return _bind_Set_overload_1(L);
		if (_lg_typecheck_Set_overload_2(L)) return _bind_Set_overload_2(L);
		if (_lg_typecheck_Set_overload_3(L)) return _bind_Set_overload_3(L);

		luaL_error(L, "error in function Set, cannot match any of the overloads for function Set:\n  Set(float, float, float, float)\n  Set(mglColor, float)\n  Set(char, float)\n");
		return 0;
	}

	// bool mglColor::Valid()
	static int _bind_Valid(lua_State *L) {
		if (!_lg_typecheck_Valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglColor::Valid() function, expected prototype:\nbool mglColor::Valid()\nClass arguments details:\n");
		}


		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglColor::Valid(). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		bool lret = self->Valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float mglColor::Norm()
	static int _bind_Norm(lua_State *L) {
		if (!_lg_typecheck_Norm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglColor::Norm() function, expected prototype:\nfloat mglColor::Norm()\nClass arguments details:\n");
		}


		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglColor::Norm(). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		float lret = self->Norm();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglColor::NormS()
	static int _bind_NormS(lua_State *L) {
		if (!_lg_typecheck_NormS(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglColor::NormS() function, expected prototype:\nfloat mglColor::NormS()\nClass arguments details:\n");
		}


		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglColor::NormS(). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		float lret = self->NormS();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglColor::r()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglColor::r() function, expected prototype:\nfloat mglColor::r()\nClass arguments details:\n");
		}


		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglColor::r(). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		float lret = self->r;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglColor::g()
	static int _bind_getG(lua_State *L) {
		if (!_lg_typecheck_getG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglColor::g() function, expected prototype:\nfloat mglColor::g()\nClass arguments details:\n");
		}


		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglColor::g(). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		float lret = self->g;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglColor::b()
	static int _bind_getB(lua_State *L) {
		if (!_lg_typecheck_getB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglColor::b() function, expected prototype:\nfloat mglColor::b()\nClass arguments details:\n");
		}


		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglColor::b(). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		float lret = self->b;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float mglColor::a()
	static int _bind_getA(lua_State *L) {
		if (!_lg_typecheck_getA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float mglColor::a() function, expected prototype:\nfloat mglColor::a()\nClass arguments details:\n");
		}


		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float mglColor::a(). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		float lret = self->a;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglColor::r(float value)
	static int _bind_setR(lua_State *L) {
		if (!_lg_typecheck_setR(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::r(float value) function, expected prototype:\nvoid mglColor::r(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::r(float). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->r = value;

		return 0;
	}

	// void mglColor::g(float value)
	static int _bind_setG(lua_State *L) {
		if (!_lg_typecheck_setG(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::g(float value) function, expected prototype:\nvoid mglColor::g(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::g(float). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->g = value;

		return 0;
	}

	// void mglColor::b(float value)
	static int _bind_setB(lua_State *L) {
		if (!_lg_typecheck_setB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::b(float value) function, expected prototype:\nvoid mglColor::b(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::b(float). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->b = value;

		return 0;
	}

	// void mglColor::a(float value)
	static int _bind_setA(lua_State *L) {
		if (!_lg_typecheck_setA(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::a(float value) function, expected prototype:\nvoid mglColor::a(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::a(float). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->a = value;

		return 0;
	}


	// Operator binds:
	// bool mglColor::operator==(const mglColor & c) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglColor::operator==(const mglColor & c) const function, expected prototype:\nbool mglColor::operator==(const mglColor & c) const\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		const mglColor* c_ptr=(Luna< mglColor >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglColor::operator== function");
		}
		const mglColor & c=*c_ptr;

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglColor::operator==(const mglColor &) const. Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		bool lret = self->operator==(c);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglColor::operator!=(const mglColor & c) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglColor::operator!=(const mglColor & c) const function, expected prototype:\nbool mglColor::operator!=(const mglColor & c) const\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		const mglColor* c_ptr=(Luna< mglColor >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglColor::operator!= function");
		}
		const mglColor & c=*c_ptr;

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglColor::operator!=(const mglColor &) const. Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		bool lret = self->operator!=(c);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool mglColor::operator<(const mglColor & c) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool mglColor::operator<(const mglColor & c) const function, expected prototype:\nbool mglColor::operator<(const mglColor & c) const\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		const mglColor* c_ptr=(Luna< mglColor >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglColor::operator< function");
		}
		const mglColor & c=*c_ptr;

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool mglColor::operator<(const mglColor &) const. Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		bool lret = self->operator<(c);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void mglColor::operator*=(float v)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::operator*=(float v) function, expected prototype:\nvoid mglColor::operator*=(float v)\nClass arguments details:\n");
		}

		float v=(float)lua_tonumber(L,2);

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::operator*=(float). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->operator*=(v);

		return 0;
	}

	// void mglColor::operator+=(const mglColor & c)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::operator+=(const mglColor & c) function, expected prototype:\nvoid mglColor::operator+=(const mglColor & c)\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		const mglColor* c_ptr=(Luna< mglColor >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglColor::operator+= function");
		}
		const mglColor & c=*c_ptr;

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::operator+=(const mglColor &). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->operator+=(c);

		return 0;
	}

	// void mglColor::operator-=(const mglColor & c)
	static int _bind_op_sub(lua_State *L) {
		if (!_lg_typecheck_op_sub(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglColor::operator-=(const mglColor & c) function, expected prototype:\nvoid mglColor::operator-=(const mglColor & c)\nClass arguments details:\narg 1 ID = 44899579\n");
		}

		const mglColor* c_ptr=(Luna< mglColor >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in mglColor::operator-= function");
		}
		const mglColor & c=*c_ptr;

		mglColor* self=(Luna< mglColor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglColor::operator-=(const mglColor &). Got : '%s'",typeid(Luna< mglColor >::check(L,1)).name());
		}
		self->operator-=(c);

		return 0;
	}


};

mglColor* LunaTraits< mglColor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_mglColor::_bind_ctor(L);
}

void LunaTraits< mglColor >::_bind_dtor(mglColor* obj) {
	delete obj;
}

const char LunaTraits< mglColor >::className[] = "mglColor";
const char LunaTraits< mglColor >::fullName[] = "mglColor";
const char LunaTraits< mglColor >::moduleName[] = "mathgl";
const char* LunaTraits< mglColor >::parents[] = {0};
const int LunaTraits< mglColor >::hash = 44899579;
const int LunaTraits< mglColor >::uniqueIDs[] = {44899579,0};

luna_RegType LunaTraits< mglColor >::methods[] = {
	{"Set", &luna_wrapper_mglColor::_bind_Set},
	{"Valid", &luna_wrapper_mglColor::_bind_Valid},
	{"Norm", &luna_wrapper_mglColor::_bind_Norm},
	{"NormS", &luna_wrapper_mglColor::_bind_NormS},
	{"getR", &luna_wrapper_mglColor::_bind_getR},
	{"getG", &luna_wrapper_mglColor::_bind_getG},
	{"getB", &luna_wrapper_mglColor::_bind_getB},
	{"getA", &luna_wrapper_mglColor::_bind_getA},
	{"setR", &luna_wrapper_mglColor::_bind_setR},
	{"setG", &luna_wrapper_mglColor::_bind_setG},
	{"setB", &luna_wrapper_mglColor::_bind_setB},
	{"setA", &luna_wrapper_mglColor::_bind_setA},
	{"__eq", &luna_wrapper_mglColor::_bind___eq},
	{"op_neq", &luna_wrapper_mglColor::_bind_op_neq},
	{"__lt", &luna_wrapper_mglColor::_bind___lt},
	{"op_mult", &luna_wrapper_mglColor::_bind_op_mult},
	{"op_add", &luna_wrapper_mglColor::_bind_op_add},
	{"op_sub", &luna_wrapper_mglColor::_bind_op_sub},
	{"dynCast", &luna_wrapper_mglColor::_bind_dynCast},
	{"fromVoid", &luna_wrapper_mglColor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglColor::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglColor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglColor >::enumValues[] = {
	{0,0}
};


