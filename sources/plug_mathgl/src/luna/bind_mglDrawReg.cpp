#include <plug_common.h>

class luna_wrapper_mglDrawReg {
public:
	typedef Luna< mglDrawReg > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11934656) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(mglDrawReg*)");
		}

		mglDrawReg* rhs =(Luna< mglDrawReg >::check(L,2));
		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
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

		mglDrawReg* self= (mglDrawReg*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< mglDrawReg >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11934656) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< mglDrawReg >::check(L,1));
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

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("mglDrawReg");
		
		return luna_dynamicCast(L,converters,"mglDrawReg",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,88502113)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPDef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getObjId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPenWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getX1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getX2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPDef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setObjId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPenWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setX1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setX2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void mglDrawReg::set(mglCanvas * gr, int nx, int ny, int m)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDrawReg::set(mglCanvas * gr, int nx, int ny, int m) function, expected prototype:\nvoid mglDrawReg::set(mglCanvas * gr, int nx, int ny, int m)\nClass arguments details:\narg 1 ID = 88502113\n");
		}

		mglCanvas* gr=(Luna< mglBase >::checkSubType< mglCanvas >(L,2));
		int nx=(int)lua_tointeger(L,3);
		int ny=(int)lua_tointeger(L,4);
		int m=(int)lua_tointeger(L,5);

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDrawReg::set(mglCanvas *, int, int, int). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		self->set(gr, nx, ny, m);

		return 0;
	}

	// unsigned int mglDrawReg::PDef()
	static int _bind_getPDef(lua_State *L) {
		if (!_lg_typecheck_getPDef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int mglDrawReg::PDef() function, expected prototype:\nunsigned int mglDrawReg::PDef()\nClass arguments details:\n");
		}


		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int mglDrawReg::PDef(). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		unsigned int lret = self->PDef;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglDrawReg::ObjId()
	static int _bind_getObjId(lua_State *L) {
		if (!_lg_typecheck_getObjId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglDrawReg::ObjId() function, expected prototype:\nint mglDrawReg::ObjId()\nClass arguments details:\n");
		}


		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglDrawReg::ObjId(). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		int lret = self->ObjId;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDrawReg::PenWidth()
	static int _bind_getPenWidth(lua_State *L) {
		if (!_lg_typecheck_getPenWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDrawReg::PenWidth() function, expected prototype:\ndouble mglDrawReg::PenWidth()\nClass arguments details:\n");
		}


		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDrawReg::PenWidth(). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		double lret = self->PenWidth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double mglDrawReg::pPos()
	static int _bind_getPPos(lua_State *L) {
		if (!_lg_typecheck_getPPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double mglDrawReg::pPos() function, expected prototype:\ndouble mglDrawReg::pPos()\nClass arguments details:\n");
		}


		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double mglDrawReg::pPos(). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		double lret = self->pPos;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglDrawReg::x1()
	static int _bind_getX1(lua_State *L) {
		if (!_lg_typecheck_getX1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglDrawReg::x1() function, expected prototype:\nint mglDrawReg::x1()\nClass arguments details:\n");
		}


		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglDrawReg::x1(). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		int lret = self->x1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglDrawReg::x2()
	static int _bind_getX2(lua_State *L) {
		if (!_lg_typecheck_getX2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglDrawReg::x2() function, expected prototype:\nint mglDrawReg::x2()\nClass arguments details:\n");
		}


		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglDrawReg::x2(). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		int lret = self->x2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglDrawReg::y1()
	static int _bind_getY1(lua_State *L) {
		if (!_lg_typecheck_getY1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglDrawReg::y1() function, expected prototype:\nint mglDrawReg::y1()\nClass arguments details:\n");
		}


		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglDrawReg::y1(). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		int lret = self->y1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int mglDrawReg::y2()
	static int _bind_getY2(lua_State *L) {
		if (!_lg_typecheck_getY2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int mglDrawReg::y2() function, expected prototype:\nint mglDrawReg::y2()\nClass arguments details:\n");
		}


		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int mglDrawReg::y2(). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		int lret = self->y2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void mglDrawReg::PDef(unsigned int value)
	static int _bind_setPDef(lua_State *L) {
		if (!_lg_typecheck_setPDef(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDrawReg::PDef(unsigned int value) function, expected prototype:\nvoid mglDrawReg::PDef(unsigned int value)\nClass arguments details:\n");
		}

		unsigned value=(unsigned)lua_tointeger(L,2);

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDrawReg::PDef(unsigned int). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		self->PDef = value;

		return 0;
	}

	// void mglDrawReg::ObjId(int value)
	static int _bind_setObjId(lua_State *L) {
		if (!_lg_typecheck_setObjId(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDrawReg::ObjId(int value) function, expected prototype:\nvoid mglDrawReg::ObjId(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDrawReg::ObjId(int). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		self->ObjId = value;

		return 0;
	}

	// void mglDrawReg::PenWidth(double value)
	static int _bind_setPenWidth(lua_State *L) {
		if (!_lg_typecheck_setPenWidth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDrawReg::PenWidth(double value) function, expected prototype:\nvoid mglDrawReg::PenWidth(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDrawReg::PenWidth(double). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		self->PenWidth = value;

		return 0;
	}

	// void mglDrawReg::pPos(double value)
	static int _bind_setPPos(lua_State *L) {
		if (!_lg_typecheck_setPPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDrawReg::pPos(double value) function, expected prototype:\nvoid mglDrawReg::pPos(double value)\nClass arguments details:\n");
		}

		double value=(double)lua_tonumber(L,2);

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDrawReg::pPos(double). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		self->pPos = value;

		return 0;
	}

	// void mglDrawReg::x1(int value)
	static int _bind_setX1(lua_State *L) {
		if (!_lg_typecheck_setX1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDrawReg::x1(int value) function, expected prototype:\nvoid mglDrawReg::x1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDrawReg::x1(int). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		self->x1 = value;

		return 0;
	}

	// void mglDrawReg::x2(int value)
	static int _bind_setX2(lua_State *L) {
		if (!_lg_typecheck_setX2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDrawReg::x2(int value) function, expected prototype:\nvoid mglDrawReg::x2(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDrawReg::x2(int). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		self->x2 = value;

		return 0;
	}

	// void mglDrawReg::y1(int value)
	static int _bind_setY1(lua_State *L) {
		if (!_lg_typecheck_setY1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDrawReg::y1(int value) function, expected prototype:\nvoid mglDrawReg::y1(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDrawReg::y1(int). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		self->y1 = value;

		return 0;
	}

	// void mglDrawReg::y2(int value)
	static int _bind_setY2(lua_State *L) {
		if (!_lg_typecheck_setY2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void mglDrawReg::y2(int value) function, expected prototype:\nvoid mglDrawReg::y2(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		mglDrawReg* self=(Luna< mglDrawReg >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void mglDrawReg::y2(int). Got : '%s'",typeid(Luna< mglDrawReg >::check(L,1)).name());
		}
		self->y2 = value;

		return 0;
	}


	// Operator binds:

};

mglDrawReg* LunaTraits< mglDrawReg >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< mglDrawReg >::_bind_dtor(mglDrawReg* obj) {
	delete obj;
}

const char LunaTraits< mglDrawReg >::className[] = "mglDrawReg";
const char LunaTraits< mglDrawReg >::fullName[] = "mglDrawReg";
const char LunaTraits< mglDrawReg >::moduleName[] = "mathgl";
const char* LunaTraits< mglDrawReg >::parents[] = {0};
const int LunaTraits< mglDrawReg >::hash = 11934656;
const int LunaTraits< mglDrawReg >::uniqueIDs[] = {11934656,0};

luna_RegType LunaTraits< mglDrawReg >::methods[] = {
	{"set", &luna_wrapper_mglDrawReg::_bind_set},
	{"getPDef", &luna_wrapper_mglDrawReg::_bind_getPDef},
	{"getObjId", &luna_wrapper_mglDrawReg::_bind_getObjId},
	{"getPenWidth", &luna_wrapper_mglDrawReg::_bind_getPenWidth},
	{"getPPos", &luna_wrapper_mglDrawReg::_bind_getPPos},
	{"getX1", &luna_wrapper_mglDrawReg::_bind_getX1},
	{"getX2", &luna_wrapper_mglDrawReg::_bind_getX2},
	{"getY1", &luna_wrapper_mglDrawReg::_bind_getY1},
	{"getY2", &luna_wrapper_mglDrawReg::_bind_getY2},
	{"setPDef", &luna_wrapper_mglDrawReg::_bind_setPDef},
	{"setObjId", &luna_wrapper_mglDrawReg::_bind_setObjId},
	{"setPenWidth", &luna_wrapper_mglDrawReg::_bind_setPenWidth},
	{"setPPos", &luna_wrapper_mglDrawReg::_bind_setPPos},
	{"setX1", &luna_wrapper_mglDrawReg::_bind_setX1},
	{"setX2", &luna_wrapper_mglDrawReg::_bind_setX2},
	{"setY1", &luna_wrapper_mglDrawReg::_bind_setY1},
	{"setY2", &luna_wrapper_mglDrawReg::_bind_setY2},
	{"dynCast", &luna_wrapper_mglDrawReg::_bind_dynCast},
	{"__eq", &luna_wrapper_mglDrawReg::_bind___eq},
	{"fromVoid", &luna_wrapper_mglDrawReg::_bind_fromVoid},
	{"asVoid", &luna_wrapper_mglDrawReg::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< mglDrawReg >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< mglDrawReg >::enumValues[] = {
	{0,0}
};


