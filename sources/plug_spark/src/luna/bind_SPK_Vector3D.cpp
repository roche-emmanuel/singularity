#include <plug_common.h>

class luna_wrapper_SPK_Vector3D {
public:
	typedef Luna< SPK::Vector3D > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Vector3D*)");
		}

		SPK::Vector3D* rhs =(Luna< SPK::Vector3D >::check(L,2));
		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
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

		SPK::Vector3D* self= (SPK::Vector3D*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Vector3D >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< SPK::Vector3D >::check(L,1));
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

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Vector3D");
		
		return luna_dynamicCast(L,converters,"SPK::Vector3D",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSqrNorm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNorm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_normalize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_revert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_abs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_crossProduct(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_x(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,70092749)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_y(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,70092749)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_z(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,70092749)) ) return false;
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


	// Operator checkers:
	// (found 9 valid operators)
	inline static bool _lg_typecheck_op_add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_sub_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_mult(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_div(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck___unm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_index_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// SPK::Vector3D::Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f)
	static SPK::Vector3D* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D::Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f) function, expected prototype:\nSPK::Vector3D::Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float x=luatop>0 ? (float)lua_tonumber(L,1) : (float)0.0f;
		float y=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.0f;
		float z=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;

		return new SPK::Vector3D(x, y, z);
	}


	// Function binds:
	// void SPK::Vector3D::set(float x, float y, float z = 0.0f)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::set(float x, float y, float z = 0.0f) function, expected prototype:\nvoid SPK::Vector3D::set(float x, float y, float z = 0.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=luatop>3 ? (float)lua_tonumber(L,4) : (float)0.0f;

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::set(float, float, float). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		self->set(x, y, z);

		return 0;
	}

	// float SPK::Vector3D::getSqrNorm() const
	static int _bind_getSqrNorm(lua_State *L) {
		if (!_lg_typecheck_getSqrNorm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::getSqrNorm() const function, expected prototype:\nfloat SPK::Vector3D::getSqrNorm() const\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Vector3D::getSqrNorm() const. Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		float lret = self->getSqrNorm();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vector3D::getNorm() const
	static int _bind_getNorm(lua_State *L) {
		if (!_lg_typecheck_getNorm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::getNorm() const function, expected prototype:\nfloat SPK::Vector3D::getNorm() const\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Vector3D::getNorm() const. Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		float lret = self->getNorm();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Vector3D::normalize()
	static int _bind_normalize(lua_State *L) {
		if (!_lg_typecheck_normalize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Vector3D::normalize() function, expected prototype:\nbool SPK::Vector3D::normalize()\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Vector3D::normalize(). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		bool lret = self->normalize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Vector3D::revert()
	static int _bind_revert(lua_State *L) {
		if (!_lg_typecheck_revert(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::revert() function, expected prototype:\nvoid SPK::Vector3D::revert()\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::revert(). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		self->revert();

		return 0;
	}

	// void SPK::Vector3D::abs()
	static int _bind_abs(lua_State *L) {
		if (!_lg_typecheck_abs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::abs() function, expected prototype:\nvoid SPK::Vector3D::abs()\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::abs(). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		self->abs();

		return 0;
	}

	// void SPK::Vector3D::crossProduct(const SPK::Vector3D & v)
	static int _bind_crossProduct(lua_State *L) {
		if (!_lg_typecheck_crossProduct(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::crossProduct(const SPK::Vector3D & v) function, expected prototype:\nvoid SPK::Vector3D::crossProduct(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Vector3D::crossProduct function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::crossProduct(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		self->crossProduct(v);

		return 0;
	}

	// float SPK::Vector3D::vec_get_x(SPK::Vector3D * vec)
	static int _bind_x(lua_State *L) {
		if (!_lg_typecheck_x(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::vec_get_x(SPK::Vector3D * vec) function, expected prototype:\nfloat SPK::Vector3D::vec_get_x(SPK::Vector3D * vec)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* vec=(Luna< SPK::Vector3D >::check(L,1));

		float lret = vec_get_x(vec);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vector3D::vec_get_y(SPK::Vector3D * vec)
	static int _bind_y(lua_State *L) {
		if (!_lg_typecheck_y(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::vec_get_y(SPK::Vector3D * vec) function, expected prototype:\nfloat SPK::Vector3D::vec_get_y(SPK::Vector3D * vec)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* vec=(Luna< SPK::Vector3D >::check(L,1));

		float lret = vec_get_y(vec);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vector3D::vec_get_z(SPK::Vector3D * vec)
	static int _bind_z(lua_State *L) {
		if (!_lg_typecheck_z(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::vec_get_z(SPK::Vector3D * vec) function, expected prototype:\nfloat SPK::Vector3D::vec_get_z(SPK::Vector3D * vec)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* vec=(Luna< SPK::Vector3D >::check(L,1));

		float lret = vec_get_z(vec);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vector3D::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::x() function, expected prototype:\nfloat SPK::Vector3D::x()\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Vector3D::x(). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		float lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vector3D::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::y() function, expected prototype:\nfloat SPK::Vector3D::y()\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Vector3D::y(). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		float lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Vector3D::z()
	static int _bind_getZ(lua_State *L) {
		if (!_lg_typecheck_getZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Vector3D::z() function, expected prototype:\nfloat SPK::Vector3D::z()\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Vector3D::z(). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		float lret = self->z;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::Vector3D::x(float value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::x(float value) function, expected prototype:\nvoid SPK::Vector3D::x(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::x(float). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		self->x = value;

		return 0;
	}

	// void SPK::Vector3D::y(float value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::y(float value) function, expected prototype:\nvoid SPK::Vector3D::y(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::y(float). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		self->y = value;

		return 0;
	}

	// void SPK::Vector3D::z(float value)
	static int _bind_setZ(lua_State *L) {
		if (!_lg_typecheck_setZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Vector3D::z(float value) function, expected prototype:\nvoid SPK::Vector3D::z(float value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Vector3D::z(float). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		self->z = value;

		return 0;
	}


	// Operator binds:
	// SPK::Vector3D & SPK::Vector3D::operator+=(const SPK::Vector3D & v)
	static int _bind_op_add_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator+=(const SPK::Vector3D & v) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator+=(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Vector3D::operator+= function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator+=(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->operator+=(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::Vector3D & SPK::Vector3D::operator+=(float f)
	static int _bind_op_add_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_add_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator+=(float f) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator+=(float f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator+=(float). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->operator+=(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::Vector3D::operator+=
	static int _bind_op_add(lua_State *L) {
		if (_lg_typecheck_op_add_overload_1(L)) return _bind_op_add_overload_1(L);
		if (_lg_typecheck_op_add_overload_2(L)) return _bind_op_add_overload_2(L);

		luaL_error(L, "error in function operator+=, cannot match any of the overloads for function operator+=:\n  operator+=(const SPK::Vector3D &)\n  operator+=(float)\n");
		return 0;
	}

	// SPK::Vector3D & SPK::Vector3D::operator-=(const SPK::Vector3D & v)
	static int _bind_op_sub_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator-=(const SPK::Vector3D & v) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator-=(const SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Vector3D::operator-= function");
		}
		const SPK::Vector3D & v=*v_ptr;

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator-=(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->operator-=(v);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::Vector3D & SPK::Vector3D::operator-=(float f)
	static int _bind_op_sub_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_sub_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator-=(float f) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator-=(float f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator-=(float). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->operator-=(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::Vector3D::operator-=
	static int _bind_op_sub(lua_State *L) {
		if (_lg_typecheck_op_sub_overload_1(L)) return _bind_op_sub_overload_1(L);
		if (_lg_typecheck_op_sub_overload_2(L)) return _bind_op_sub_overload_2(L);

		luaL_error(L, "error in function operator-=, cannot match any of the overloads for function operator-=:\n  operator-=(const SPK::Vector3D &)\n  operator-=(float)\n");
		return 0;
	}

	// SPK::Vector3D & SPK::Vector3D::operator*=(float f)
	static int _bind_op_mult(lua_State *L) {
		if (!_lg_typecheck_op_mult(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator*=(float f) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator*=(float f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator*=(float). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->operator*=(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::Vector3D & SPK::Vector3D::operator/=(float f)
	static int _bind_op_div(lua_State *L) {
		if (!_lg_typecheck_op_div(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D & SPK::Vector3D::operator/=(float f) function, expected prototype:\nSPK::Vector3D & SPK::Vector3D::operator/=(float f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D & SPK::Vector3D::operator/=(float). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->operator/=(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// SPK::Vector3D SPK::Vector3D::operator-() const
	static int _bind___unm(lua_State *L) {
		if (!_lg_typecheck___unm(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Vector3D::operator-() const function, expected prototype:\nSPK::Vector3D SPK::Vector3D::operator-() const\nClass arguments details:\n");
		}


		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Vector3D::operator-() const. Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		SPK::Vector3D stack_lret = self->operator-();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// float & SPK::Vector3D::operator[](size_t index)
	static int _bind_op_index_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float & SPK::Vector3D::operator[](size_t index) function, expected prototype:\nfloat & SPK::Vector3D::operator[](size_t index)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float & SPK::Vector3D::operator[](size_t). Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		float & lret = self->operator[](index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const float & SPK::Vector3D::operator[](size_t index) const
	static int _bind_op_index_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_index_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float & SPK::Vector3D::operator[](size_t index) const function, expected prototype:\nconst float & SPK::Vector3D::operator[](size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Vector3D* self=(Luna< SPK::Vector3D >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float & SPK::Vector3D::operator[](size_t) const. Got : '%s'",typeid(Luna< SPK::Vector3D >::check(L,1)).name());
		}
		const float & lret = self->operator[](index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for SPK::Vector3D::operator[]
	static int _bind_op_index(lua_State *L) {
		if (_lg_typecheck_op_index_overload_1(L)) return _bind_op_index_overload_1(L);
		if (_lg_typecheck_op_index_overload_2(L)) return _bind_op_index_overload_2(L);

		luaL_error(L, "error in function operator[], cannot match any of the overloads for function operator[]:\n  operator[](size_t)\n  operator[](size_t)\n");
		return 0;
	}


};

SPK::Vector3D* LunaTraits< SPK::Vector3D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Vector3D::_bind_ctor(L);
}

void LunaTraits< SPK::Vector3D >::_bind_dtor(SPK::Vector3D* obj) {
	delete obj;
}

const char LunaTraits< SPK::Vector3D >::className[] = "Vector3D";
const char LunaTraits< SPK::Vector3D >::fullName[] = "SPK::Vector3D";
const char LunaTraits< SPK::Vector3D >::moduleName[] = "spark";
const char* LunaTraits< SPK::Vector3D >::parents[] = {0};
const int LunaTraits< SPK::Vector3D >::hash = 70092749;
const int LunaTraits< SPK::Vector3D >::uniqueIDs[] = {70092749,0};

luna_RegType LunaTraits< SPK::Vector3D >::methods[] = {
	{"set", &luna_wrapper_SPK_Vector3D::_bind_set},
	{"getSqrNorm", &luna_wrapper_SPK_Vector3D::_bind_getSqrNorm},
	{"getNorm", &luna_wrapper_SPK_Vector3D::_bind_getNorm},
	{"normalize", &luna_wrapper_SPK_Vector3D::_bind_normalize},
	{"revert", &luna_wrapper_SPK_Vector3D::_bind_revert},
	{"abs", &luna_wrapper_SPK_Vector3D::_bind_abs},
	{"crossProduct", &luna_wrapper_SPK_Vector3D::_bind_crossProduct},
	{"x", &luna_wrapper_SPK_Vector3D::_bind_x},
	{"y", &luna_wrapper_SPK_Vector3D::_bind_y},
	{"z", &luna_wrapper_SPK_Vector3D::_bind_z},
	{"getX", &luna_wrapper_SPK_Vector3D::_bind_getX},
	{"getY", &luna_wrapper_SPK_Vector3D::_bind_getY},
	{"getZ", &luna_wrapper_SPK_Vector3D::_bind_getZ},
	{"setX", &luna_wrapper_SPK_Vector3D::_bind_setX},
	{"setY", &luna_wrapper_SPK_Vector3D::_bind_setY},
	{"setZ", &luna_wrapper_SPK_Vector3D::_bind_setZ},
	{"op_add", &luna_wrapper_SPK_Vector3D::_bind_op_add},
	{"op_sub", &luna_wrapper_SPK_Vector3D::_bind_op_sub},
	{"op_mult", &luna_wrapper_SPK_Vector3D::_bind_op_mult},
	{"op_div", &luna_wrapper_SPK_Vector3D::_bind_op_div},
	{"__unm", &luna_wrapper_SPK_Vector3D::_bind___unm},
	{"op_index", &luna_wrapper_SPK_Vector3D::_bind_op_index},
	{"dynCast", &luna_wrapper_SPK_Vector3D::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Vector3D::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Vector3D::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Vector3D::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Vector3D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Vector3D >::enumValues[] = {
	{0,0}
};


