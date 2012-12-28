#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Transformable.h>

class luna_wrapper_SPK_Transformable {
public:
	typedef Luna< SPK::Transformable > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41560017) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Transformable*)");
		}

		SPK::Transformable* rhs =(Luna< SPK::Transformable >::check(L,2));
		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Transformable");
		
		return luna_dynamicCast(L,converters,"SPK::Transformable",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41560017) ) return false;
		if( (!(Luna< SPK::Transformable >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,41560017) ) return false;
		if( (!(Luna< SPK::Transformable >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setTransform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformNC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformOrientationRH(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformOrientationLH(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformOrientation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformOrientationX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformOrientationY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformOrientationZ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLocalTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLocalIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalTransformPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalTransformSide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalTransformUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalTransformLookRH(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalTransformLookLH(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldTransformPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldTransformSide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldTransformUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldTransformLookRH(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldTransformLookLH(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_lookAtRH(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_lookAtLH(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateTransform(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,41560017)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_resetTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Transformable::Transformable()
	static SPK::Transformable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Transformable::Transformable() function, expected prototype:\nSPK::Transformable::Transformable()\nClass arguments details:\n");
		}


		return new SPK::Transformable();
	}

	// SPK::Transformable::Transformable(const SPK::Transformable & transformable)
	static SPK::Transformable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Transformable::Transformable(const SPK::Transformable & transformable) function, expected prototype:\nSPK::Transformable::Transformable(const SPK::Transformable & transformable)\nClass arguments details:\narg 1 ID = 41560017\n");
		}

		const SPK::Transformable* transformable_ptr=(Luna< SPK::Transformable >::check(L,1));
		if( !transformable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transformable in SPK::Transformable::Transformable function");
		}
		const SPK::Transformable & transformable=*transformable_ptr;

		return new SPK::Transformable(transformable);
	}

	// SPK::Transformable::Transformable(lua_Table * data)
	static SPK::Transformable* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Transformable::Transformable(lua_Table * data) function, expected prototype:\nSPK::Transformable::Transformable(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SPK_Transformable(L,NULL);
	}

	// SPK::Transformable::Transformable(lua_Table * data, const SPK::Transformable & transformable)
	static SPK::Transformable* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Transformable::Transformable(lua_Table * data, const SPK::Transformable & transformable) function, expected prototype:\nSPK::Transformable::Transformable(lua_Table * data, const SPK::Transformable & transformable)\nClass arguments details:\narg 2 ID = 41560017\n");
		}

		const SPK::Transformable* transformable_ptr=(Luna< SPK::Transformable >::check(L,2));
		if( !transformable_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transformable in SPK::Transformable::Transformable function");
		}
		const SPK::Transformable & transformable=*transformable_ptr;

		return new wrapper_SPK_Transformable(L,NULL, transformable);
	}

	// Overload binder for SPK::Transformable::Transformable
	static SPK::Transformable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Transformable, cannot match any of the overloads for function Transformable:\n  Transformable()\n  Transformable(const SPK::Transformable &)\n  Transformable(lua_Table *)\n  Transformable(lua_Table *, const SPK::Transformable &)\n");
		return NULL;
	}


	// Function binds:
	// void SPK::Transformable::setTransform(const float * transform)
	static int _bind_setTransform(lua_State *L) {
		if (!_lg_typecheck_setTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::setTransform(const float * transform) function, expected prototype:\nvoid SPK::Transformable::setTransform(const float * transform)\nClass arguments details:\n");
		}

		float transform=(float)lua_tonumber(L,2);

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::setTransform(const float *)");
		}
		self->setTransform(&transform);

		return 0;
	}

	// void SPK::Transformable::setTransformNC(const float * transform)
	static int _bind_setTransformNC(lua_State *L) {
		if (!_lg_typecheck_setTransformNC(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::setTransformNC(const float * transform) function, expected prototype:\nvoid SPK::Transformable::setTransformNC(const float * transform)\nClass arguments details:\n");
		}

		float transform=(float)lua_tonumber(L,2);

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::setTransformNC(const float *)");
		}
		self->setTransformNC(&transform);

		return 0;
	}

	// void SPK::Transformable::setTransformPosition(const SPK::Vector3D & pos)
	static int _bind_setTransformPosition(lua_State *L) {
		if (!_lg_typecheck_setTransformPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::setTransformPosition(const SPK::Vector3D & pos) function, expected prototype:\nvoid SPK::Transformable::setTransformPosition(const SPK::Vector3D & pos)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SPK::Transformable::setTransformPosition function");
		}
		const SPK::Vector3D & pos=*pos_ptr;

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::setTransformPosition(const SPK::Vector3D &)");
		}
		self->setTransformPosition(pos);

		return 0;
	}

	// void SPK::Transformable::setTransformOrientationRH(SPK::Vector3D look, SPK::Vector3D up)
	static int _bind_setTransformOrientationRH(lua_State *L) {
		if (!_lg_typecheck_setTransformOrientationRH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::setTransformOrientationRH(SPK::Vector3D look, SPK::Vector3D up) function, expected prototype:\nvoid SPK::Transformable::setTransformOrientationRH(SPK::Vector3D look, SPK::Vector3D up)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		SPK::Vector3D* look_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !look_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg look in SPK::Transformable::setTransformOrientationRH function");
		}
		SPK::Vector3D look=*look_ptr;
		SPK::Vector3D* up_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in SPK::Transformable::setTransformOrientationRH function");
		}
		SPK::Vector3D up=*up_ptr;

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::setTransformOrientationRH(SPK::Vector3D, SPK::Vector3D)");
		}
		self->setTransformOrientationRH(look, up);

		return 0;
	}

	// void SPK::Transformable::setTransformOrientationLH(SPK::Vector3D look, SPK::Vector3D up)
	static int _bind_setTransformOrientationLH(lua_State *L) {
		if (!_lg_typecheck_setTransformOrientationLH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::setTransformOrientationLH(SPK::Vector3D look, SPK::Vector3D up) function, expected prototype:\nvoid SPK::Transformable::setTransformOrientationLH(SPK::Vector3D look, SPK::Vector3D up)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		SPK::Vector3D* look_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !look_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg look in SPK::Transformable::setTransformOrientationLH function");
		}
		SPK::Vector3D look=*look_ptr;
		SPK::Vector3D* up_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in SPK::Transformable::setTransformOrientationLH function");
		}
		SPK::Vector3D up=*up_ptr;

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::setTransformOrientationLH(SPK::Vector3D, SPK::Vector3D)");
		}
		self->setTransformOrientationLH(look, up);

		return 0;
	}

	// void SPK::Transformable::setTransformOrientation(SPK::Vector3D axis, float angle)
	static int _bind_setTransformOrientation(lua_State *L) {
		if (!_lg_typecheck_setTransformOrientation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::setTransformOrientation(SPK::Vector3D axis, float angle) function, expected prototype:\nvoid SPK::Transformable::setTransformOrientation(SPK::Vector3D axis, float angle)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* axis_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !axis_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg axis in SPK::Transformable::setTransformOrientation function");
		}
		SPK::Vector3D axis=*axis_ptr;
		float angle=(float)lua_tonumber(L,3);

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::setTransformOrientation(SPK::Vector3D, float)");
		}
		self->setTransformOrientation(axis, angle);

		return 0;
	}

	// void SPK::Transformable::setTransformOrientationX(float angle)
	static int _bind_setTransformOrientationX(lua_State *L) {
		if (!_lg_typecheck_setTransformOrientationX(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::setTransformOrientationX(float angle) function, expected prototype:\nvoid SPK::Transformable::setTransformOrientationX(float angle)\nClass arguments details:\n");
		}

		float angle=(float)lua_tonumber(L,2);

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::setTransformOrientationX(float)");
		}
		self->setTransformOrientationX(angle);

		return 0;
	}

	// void SPK::Transformable::setTransformOrientationY(float angle)
	static int _bind_setTransformOrientationY(lua_State *L) {
		if (!_lg_typecheck_setTransformOrientationY(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::setTransformOrientationY(float angle) function, expected prototype:\nvoid SPK::Transformable::setTransformOrientationY(float angle)\nClass arguments details:\n");
		}

		float angle=(float)lua_tonumber(L,2);

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::setTransformOrientationY(float)");
		}
		self->setTransformOrientationY(angle);

		return 0;
	}

	// void SPK::Transformable::setTransformOrientationZ(float angle)
	static int _bind_setTransformOrientationZ(lua_State *L) {
		if (!_lg_typecheck_setTransformOrientationZ(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::setTransformOrientationZ(float angle) function, expected prototype:\nvoid SPK::Transformable::setTransformOrientationZ(float angle)\nClass arguments details:\n");
		}

		float angle=(float)lua_tonumber(L,2);

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::setTransformOrientationZ(float)");
		}
		self->setTransformOrientationZ(angle);

		return 0;
	}

	// const float * SPK::Transformable::getLocalTransform() const
	static int _bind_getLocalTransform(lua_State *L) {
		if (!_lg_typecheck_getLocalTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float * SPK::Transformable::getLocalTransform() const function, expected prototype:\nconst float * SPK::Transformable::getLocalTransform() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float * SPK::Transformable::getLocalTransform() const");
		}
		const float * lret = self->getLocalTransform();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// const float * SPK::Transformable::getWorldTransform() const
	static int _bind_getWorldTransform(lua_State *L) {
		if (!_lg_typecheck_getWorldTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const float * SPK::Transformable::getWorldTransform() const function, expected prototype:\nconst float * SPK::Transformable::getWorldTransform() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const float * SPK::Transformable::getWorldTransform() const");
		}
		const float * lret = self->getWorldTransform();
		lua_pushnumber(L,*lret);

		return 1;
	}

	// bool SPK::Transformable::isLocalIdentity() const
	static int _bind_isLocalIdentity(lua_State *L) {
		if (!_lg_typecheck_isLocalIdentity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Transformable::isLocalIdentity() const function, expected prototype:\nbool SPK::Transformable::isLocalIdentity() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Transformable::isLocalIdentity() const");
		}
		bool lret = self->isLocalIdentity();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getLocalTransformPos() const
	static int _bind_getLocalTransformPos(lua_State *L) {
		if (!_lg_typecheck_getLocalTransformPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getLocalTransformPos() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getLocalTransformPos() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getLocalTransformPos() const");
		}
		SPK::Vector3D stack_lret = self->getLocalTransformPos();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getLocalTransformSide() const
	static int _bind_getLocalTransformSide(lua_State *L) {
		if (!_lg_typecheck_getLocalTransformSide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getLocalTransformSide() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getLocalTransformSide() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getLocalTransformSide() const");
		}
		SPK::Vector3D stack_lret = self->getLocalTransformSide();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getLocalTransformUp() const
	static int _bind_getLocalTransformUp(lua_State *L) {
		if (!_lg_typecheck_getLocalTransformUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getLocalTransformUp() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getLocalTransformUp() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getLocalTransformUp() const");
		}
		SPK::Vector3D stack_lret = self->getLocalTransformUp();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getLocalTransformLookRH() const
	static int _bind_getLocalTransformLookRH(lua_State *L) {
		if (!_lg_typecheck_getLocalTransformLookRH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getLocalTransformLookRH() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getLocalTransformLookRH() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getLocalTransformLookRH() const");
		}
		SPK::Vector3D stack_lret = self->getLocalTransformLookRH();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getLocalTransformLookLH() const
	static int _bind_getLocalTransformLookLH(lua_State *L) {
		if (!_lg_typecheck_getLocalTransformLookLH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getLocalTransformLookLH() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getLocalTransformLookLH() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getLocalTransformLookLH() const");
		}
		SPK::Vector3D stack_lret = self->getLocalTransformLookLH();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getWorldTransformPos() const
	static int _bind_getWorldTransformPos(lua_State *L) {
		if (!_lg_typecheck_getWorldTransformPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getWorldTransformPos() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getWorldTransformPos() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getWorldTransformPos() const");
		}
		SPK::Vector3D stack_lret = self->getWorldTransformPos();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getWorldTransformSide() const
	static int _bind_getWorldTransformSide(lua_State *L) {
		if (!_lg_typecheck_getWorldTransformSide(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getWorldTransformSide() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getWorldTransformSide() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getWorldTransformSide() const");
		}
		SPK::Vector3D stack_lret = self->getWorldTransformSide();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getWorldTransformUp() const
	static int _bind_getWorldTransformUp(lua_State *L) {
		if (!_lg_typecheck_getWorldTransformUp(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getWorldTransformUp() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getWorldTransformUp() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getWorldTransformUp() const");
		}
		SPK::Vector3D stack_lret = self->getWorldTransformUp();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getWorldTransformLookRH() const
	static int _bind_getWorldTransformLookRH(lua_State *L) {
		if (!_lg_typecheck_getWorldTransformLookRH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getWorldTransformLookRH() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getWorldTransformLookRH() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getWorldTransformLookRH() const");
		}
		SPK::Vector3D stack_lret = self->getWorldTransformLookRH();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// SPK::Vector3D SPK::Transformable::getWorldTransformLookLH() const
	static int _bind_getWorldTransformLookLH(lua_State *L) {
		if (!_lg_typecheck_getWorldTransformLookLH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Vector3D SPK::Transformable::getWorldTransformLookLH() const function, expected prototype:\nSPK::Vector3D SPK::Transformable::getWorldTransformLookLH() const\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Vector3D SPK::Transformable::getWorldTransformLookLH() const");
		}
		SPK::Vector3D stack_lret = self->getWorldTransformLookLH();
		SPK::Vector3D* lret = new SPK::Vector3D(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,true);

		return 1;
	}

	// void SPK::Transformable::lookAtRH(const SPK::Vector3D & target, SPK::Vector3D up, const SPK::Vector3D & pos)
	static int _bind_lookAtRH(lua_State *L) {
		if (!_lg_typecheck_lookAtRH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::lookAtRH(const SPK::Vector3D & target, SPK::Vector3D up, const SPK::Vector3D & pos) function, expected prototype:\nvoid SPK::Transformable::lookAtRH(const SPK::Vector3D & target, SPK::Vector3D up, const SPK::Vector3D & pos)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\n");
		}

		const SPK::Vector3D* target_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !target_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg target in SPK::Transformable::lookAtRH function");
		}
		const SPK::Vector3D & target=*target_ptr;
		SPK::Vector3D* up_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in SPK::Transformable::lookAtRH function");
		}
		SPK::Vector3D up=*up_ptr;
		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SPK::Transformable::lookAtRH function");
		}
		const SPK::Vector3D & pos=*pos_ptr;

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::lookAtRH(const SPK::Vector3D &, SPK::Vector3D, const SPK::Vector3D &)");
		}
		self->lookAtRH(target, up, pos);

		return 0;
	}

	// void SPK::Transformable::lookAtLH(const SPK::Vector3D & target, SPK::Vector3D up, const SPK::Vector3D & pos)
	static int _bind_lookAtLH(lua_State *L) {
		if (!_lg_typecheck_lookAtLH(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::lookAtLH(const SPK::Vector3D & target, SPK::Vector3D up, const SPK::Vector3D & pos) function, expected prototype:\nvoid SPK::Transformable::lookAtLH(const SPK::Vector3D & target, SPK::Vector3D up, const SPK::Vector3D & pos)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\n");
		}

		const SPK::Vector3D* target_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !target_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg target in SPK::Transformable::lookAtLH function");
		}
		const SPK::Vector3D & target=*target_ptr;
		SPK::Vector3D* up_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in SPK::Transformable::lookAtLH function");
		}
		SPK::Vector3D up=*up_ptr;
		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SPK::Transformable::lookAtLH function");
		}
		const SPK::Vector3D & pos=*pos_ptr;

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::lookAtLH(const SPK::Vector3D &, SPK::Vector3D, const SPK::Vector3D &)");
		}
		self->lookAtLH(target, up, pos);

		return 0;
	}

	// void SPK::Transformable::updateTransform(const SPK::Transformable * parent = NULL)
	static int _bind_updateTransform(lua_State *L) {
		if (!_lg_typecheck_updateTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::updateTransform(const SPK::Transformable * parent = NULL) function, expected prototype:\nvoid SPK::Transformable::updateTransform(const SPK::Transformable * parent = NULL)\nClass arguments details:\narg 1 ID = 41560017\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Transformable* parent=luatop>1 ? (Luna< SPK::Transformable >::check(L,2)) : (const SPK::Transformable*)NULL;

		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::updateTransform(const SPK::Transformable *)");
		}
		self->updateTransform(parent);

		return 0;
	}

	// void SPK::Transformable::resetTransform()
	static int _bind_resetTransform(lua_State *L) {
		if (!_lg_typecheck_resetTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::resetTransform() function, expected prototype:\nvoid SPK::Transformable::resetTransform()\nClass arguments details:\n");
		}


		SPK::Transformable* self=(Luna< SPK::Transformable >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::resetTransform()");
		}
		self->resetTransform();

		return 0;
	}


	// Operator binds:

};

SPK::Transformable* LunaTraits< SPK::Transformable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Transformable::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< SPK::Transformable >::_bind_dtor(SPK::Transformable* obj) {
	delete obj;
}

const char LunaTraits< SPK::Transformable >::className[] = "Transformable";
const char LunaTraits< SPK::Transformable >::fullName[] = "SPK::Transformable";
const char LunaTraits< SPK::Transformable >::moduleName[] = "SPK";
const char* LunaTraits< SPK::Transformable >::parents[] = {0};
const int LunaTraits< SPK::Transformable >::hash = 41560017;
const int LunaTraits< SPK::Transformable >::uniqueIDs[] = {41560017,0};

luna_RegType LunaTraits< SPK::Transformable >::methods[] = {
	{"setTransform", &luna_wrapper_SPK_Transformable::_bind_setTransform},
	{"setTransformNC", &luna_wrapper_SPK_Transformable::_bind_setTransformNC},
	{"setTransformPosition", &luna_wrapper_SPK_Transformable::_bind_setTransformPosition},
	{"setTransformOrientationRH", &luna_wrapper_SPK_Transformable::_bind_setTransformOrientationRH},
	{"setTransformOrientationLH", &luna_wrapper_SPK_Transformable::_bind_setTransformOrientationLH},
	{"setTransformOrientation", &luna_wrapper_SPK_Transformable::_bind_setTransformOrientation},
	{"setTransformOrientationX", &luna_wrapper_SPK_Transformable::_bind_setTransformOrientationX},
	{"setTransformOrientationY", &luna_wrapper_SPK_Transformable::_bind_setTransformOrientationY},
	{"setTransformOrientationZ", &luna_wrapper_SPK_Transformable::_bind_setTransformOrientationZ},
	{"getLocalTransform", &luna_wrapper_SPK_Transformable::_bind_getLocalTransform},
	{"getWorldTransform", &luna_wrapper_SPK_Transformable::_bind_getWorldTransform},
	{"isLocalIdentity", &luna_wrapper_SPK_Transformable::_bind_isLocalIdentity},
	{"getLocalTransformPos", &luna_wrapper_SPK_Transformable::_bind_getLocalTransformPos},
	{"getLocalTransformSide", &luna_wrapper_SPK_Transformable::_bind_getLocalTransformSide},
	{"getLocalTransformUp", &luna_wrapper_SPK_Transformable::_bind_getLocalTransformUp},
	{"getLocalTransformLookRH", &luna_wrapper_SPK_Transformable::_bind_getLocalTransformLookRH},
	{"getLocalTransformLookLH", &luna_wrapper_SPK_Transformable::_bind_getLocalTransformLookLH},
	{"getWorldTransformPos", &luna_wrapper_SPK_Transformable::_bind_getWorldTransformPos},
	{"getWorldTransformSide", &luna_wrapper_SPK_Transformable::_bind_getWorldTransformSide},
	{"getWorldTransformUp", &luna_wrapper_SPK_Transformable::_bind_getWorldTransformUp},
	{"getWorldTransformLookRH", &luna_wrapper_SPK_Transformable::_bind_getWorldTransformLookRH},
	{"getWorldTransformLookLH", &luna_wrapper_SPK_Transformable::_bind_getWorldTransformLookLH},
	{"lookAtRH", &luna_wrapper_SPK_Transformable::_bind_lookAtRH},
	{"lookAtLH", &luna_wrapper_SPK_Transformable::_bind_lookAtLH},
	{"updateTransform", &luna_wrapper_SPK_Transformable::_bind_updateTransform},
	{"resetTransform", &luna_wrapper_SPK_Transformable::_bind_resetTransform},
	{"dynCast", &luna_wrapper_SPK_Transformable::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Transformable::_bind___eq},
	{"getTable", &luna_wrapper_SPK_Transformable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Transformable >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Transformable >::enumValues[] = {
	{0,0}
};


