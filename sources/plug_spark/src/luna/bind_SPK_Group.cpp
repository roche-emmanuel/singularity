#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_Group.h>

class luna_wrapper_SPK_Group {
public:
	typedef Luna< SPK::Group > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<SPK::Registerable,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Registerable*)");
		}

		SPK::Registerable* rhs =(Luna< SPK::Registerable >::check(L,2));
		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
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

		SPK::Group* self= (SPK::Group*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Group >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,31337102) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Registerable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Group* ptr= dynamic_cast< SPK::Group* >(Luna< SPK::Registerable >::check(L,1));
		SPK::Group* ptr= luna_caster< SPK::Registerable, SPK::Group >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Group >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::Group* ptr= dynamic_cast< SPK::Group* >(Luna< SPK::Transformable >::check(L,1));
		SPK::Group* ptr= luna_caster< SPK::Transformable, SPK::Group >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::Group >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		if( (!(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFriction(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGravity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableSorting(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableDistanceComputation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableAABBComputing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNbParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEmitter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNbEmitters(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNbModifiers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRenderer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFriction(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGravity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSortingEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isDistanceComputationEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isAABBComputingEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAABBMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAABBMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParamAddress(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPositionAddress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParamStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPositionStride(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,31337102)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,31337102)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,4)) ) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,31337102)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,4))) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,31337102)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,31337102)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,31337102)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,3)) ) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_7(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,31337102)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,3)) ) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,2)) ) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_9(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,3))) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,31337102)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,4)) ) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticles_overload_10(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,70092749) ) return false;
		if( (!(Luna< SPK::Vector3D >::check(L,4))) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addEmitter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeEmitter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addModifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeModifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_render(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flushAddedParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_sortParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeDistances(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeAABB(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reallocate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createBuffer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,22446991) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_destroyAllBuffers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBuffer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBuffer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31337102)) ) return false;
		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableBuffersManagement(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBuffersManagementEnabled(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCustomUpdate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31337102)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7361390)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SPK::Group::Group(lua_Table * data, SPK::Model * model = NULL, size_t capacity = SPK::Pool <  SPK::Particle  >::DEFAULT_CAPACITY)
	static SPK::Group* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Group::Group(lua_Table * data, SPK::Model * model = NULL, size_t capacity = SPK::Pool <  SPK::Particle  >::DEFAULT_CAPACITY) function, expected prototype:\nSPK::Group::Group(lua_Table * data, SPK::Model * model = NULL, size_t capacity = SPK::Pool <  SPK::Particle  >::DEFAULT_CAPACITY)\nClass arguments details:\narg 2 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Model* model=luatop>1 ? (Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,2)) : (SPK::Model*)NULL;
		size_t capacity=luatop>2 ? (size_t)lua_tointeger(L,3) : SPK::Pool <  SPK::Particle  >::DEFAULT_CAPACITY;

		return new wrapper_SPK_Group(L,NULL, model, capacity);
	}

	// SPK::Group::Group(lua_Table * data, const SPK::Group & group)
	static SPK::Group* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Group::Group(lua_Table * data, const SPK::Group & group) function, expected prototype:\nSPK::Group::Group(lua_Table * data, const SPK::Group & group)\nClass arguments details:\narg 2 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::Group::Group function");
		}
		const SPK::Group & group=*group_ptr;

		return new wrapper_SPK_Group(L,NULL, group);
	}

	// Overload binder for SPK::Group::Group
	static SPK::Group* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Group, cannot match any of the overloads for function Group:\n  Group(lua_Table *, SPK::Model *, size_t)\n  Group(lua_Table *, const SPK::Group &)\n");
		return NULL;
	}


	// Function binds:
	// std::string SPK::Group::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Group::getClassName() const function, expected prototype:\nstd::string SPK::Group::getClassName() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Group::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::Group::setModel(SPK::Model * model)
	static int _bind_setModel(lua_State *L) {
		if (!_lg_typecheck_setModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::setModel(SPK::Model * model) function, expected prototype:\nvoid SPK::Group::setModel(SPK::Model * model)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Model* model=(Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::setModel(SPK::Model *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setModel(model);

		return 0;
	}

	// void SPK::Group::setRenderer(SPK::Renderer * renderer)
	static int _bind_setRenderer(lua_State *L) {
		if (!_lg_typecheck_setRenderer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::setRenderer(SPK::Renderer * renderer) function, expected prototype:\nvoid SPK::Group::setRenderer(SPK::Renderer * renderer)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Renderer* renderer=(Luna< SPK::Registerable >::checkSubType< SPK::Renderer >(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::setRenderer(SPK::Renderer *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setRenderer(renderer);

		return 0;
	}

	// void SPK::Group::setFriction(float friction)
	static int _bind_setFriction(lua_State *L) {
		if (!_lg_typecheck_setFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::setFriction(float friction) function, expected prototype:\nvoid SPK::Group::setFriction(float friction)\nClass arguments details:\n");
		}

		float friction=(float)lua_tonumber(L,2);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::setFriction(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setFriction(friction);

		return 0;
	}

	// void SPK::Group::setGravity(const SPK::Vector3D & gravity)
	static int _bind_setGravity(lua_State *L) {
		if (!_lg_typecheck_setGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::setGravity(const SPK::Vector3D & gravity) function, expected prototype:\nvoid SPK::Group::setGravity(const SPK::Vector3D & gravity)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* gravity_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in SPK::Group::setGravity function");
		}
		const SPK::Vector3D & gravity=*gravity_ptr;

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::setGravity(const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->setGravity(gravity);

		return 0;
	}

	// void SPK::Group::enableSorting(bool sort)
	static int _bind_enableSorting(lua_State *L) {
		if (!_lg_typecheck_enableSorting(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::enableSorting(bool sort) function, expected prototype:\nvoid SPK::Group::enableSorting(bool sort)\nClass arguments details:\n");
		}

		bool sort=(bool)(lua_toboolean(L,2)==1);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::enableSorting(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->enableSorting(sort);

		return 0;
	}

	// void SPK::Group::enableDistanceComputation(bool distanceComputation)
	static int _bind_enableDistanceComputation(lua_State *L) {
		if (!_lg_typecheck_enableDistanceComputation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::enableDistanceComputation(bool distanceComputation) function, expected prototype:\nvoid SPK::Group::enableDistanceComputation(bool distanceComputation)\nClass arguments details:\n");
		}

		bool distanceComputation=(bool)(lua_toboolean(L,2)==1);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::enableDistanceComputation(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->enableDistanceComputation(distanceComputation);

		return 0;
	}

	// void SPK::Group::enableAABBComputing(bool AABB)
	static int _bind_enableAABBComputing(lua_State *L) {
		if (!_lg_typecheck_enableAABBComputing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::enableAABBComputing(bool AABB) function, expected prototype:\nvoid SPK::Group::enableAABBComputing(bool AABB)\nClass arguments details:\n");
		}

		bool AABB=(bool)(lua_toboolean(L,2)==1);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::enableAABBComputing(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->enableAABBComputing(AABB);

		return 0;
	}

	// const SPK::Pool< SPK::Particle > & SPK::Group::getParticles() const
	static int _bind_getParticles(lua_State *L) {
		if (!_lg_typecheck_getParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Pool< SPK::Particle > & SPK::Group::getParticles() const function, expected prototype:\nconst SPK::Pool< SPK::Particle > & SPK::Group::getParticles() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Pool< SPK::Particle > & SPK::Group::getParticles() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Pool< SPK::Particle >* lret = &self->getParticles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Pool< SPK::Particle > >::push(L,lret,false);

		return 1;
	}

	// SPK::Particle & SPK::Group::getParticle(size_t index)
	static int _bind_getParticle_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticle_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Particle & SPK::Group::getParticle(size_t index) function, expected prototype:\nSPK::Particle & SPK::Group::getParticle(size_t index)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Particle & SPK::Group::getParticle(size_t). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Particle* lret = &self->getParticle(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Particle >::push(L,lret,false);

		return 1;
	}

	// const SPK::Particle & SPK::Group::getParticle(size_t index) const
	static int _bind_getParticle_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticle_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Particle & SPK::Group::getParticle(size_t index) const function, expected prototype:\nconst SPK::Particle & SPK::Group::getParticle(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Particle & SPK::Group::getParticle(size_t) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Particle* lret = &self->getParticle(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Particle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::Group::getParticle
	static int _bind_getParticle(lua_State *L) {
		if (_lg_typecheck_getParticle_overload_1(L)) return _bind_getParticle_overload_1(L);
		if (_lg_typecheck_getParticle_overload_2(L)) return _bind_getParticle_overload_2(L);

		luaL_error(L, "error in function getParticle, cannot match any of the overloads for function getParticle:\n  getParticle(size_t)\n  getParticle(size_t)\n");
		return 0;
	}

	// size_t SPK::Group::getNbParticles() const
	static int _bind_getNbParticles(lua_State *L) {
		if (!_lg_typecheck_getNbParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::Group::getNbParticles() const function, expected prototype:\nsize_t SPK::Group::getNbParticles() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::Group::getNbParticles() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		size_t lret = self->getNbParticles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Emitter * SPK::Group::getEmitter(size_t index) const
	static int _bind_getEmitter(lua_State *L) {
		if (!_lg_typecheck_getEmitter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Emitter * SPK::Group::getEmitter(size_t index) const function, expected prototype:\nSPK::Emitter * SPK::Group::getEmitter(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Emitter * SPK::Group::getEmitter(size_t) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Emitter * lret = self->getEmitter(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Emitter >::push(L,lret,false);

		return 1;
	}

	// size_t SPK::Group::getNbEmitters() const
	static int _bind_getNbEmitters(lua_State *L) {
		if (!_lg_typecheck_getNbEmitters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::Group::getNbEmitters() const function, expected prototype:\nsize_t SPK::Group::getNbEmitters() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::Group::getNbEmitters() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		size_t lret = self->getNbEmitters();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Modifier * SPK::Group::getModifier(size_t index) const
	static int _bind_getModifier(lua_State *L) {
		if (!_lg_typecheck_getModifier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Modifier * SPK::Group::getModifier(size_t index) const function, expected prototype:\nSPK::Modifier * SPK::Group::getModifier(size_t index) const\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Modifier * SPK::Group::getModifier(size_t) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Modifier * lret = self->getModifier(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Modifier >::push(L,lret,false);

		return 1;
	}

	// size_t SPK::Group::getNbModifiers() const
	static int _bind_getNbModifiers(lua_State *L) {
		if (!_lg_typecheck_getNbModifiers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::Group::getNbModifiers() const function, expected prototype:\nsize_t SPK::Group::getNbModifiers() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::Group::getNbModifiers() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		size_t lret = self->getNbModifiers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Model * SPK::Group::getModel() const
	static int _bind_getModel(lua_State *L) {
		if (!_lg_typecheck_getModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Model * SPK::Group::getModel() const function, expected prototype:\nSPK::Model * SPK::Group::getModel() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Model * SPK::Group::getModel() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Model * lret = self->getModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Model >::push(L,lret,false);

		return 1;
	}

	// SPK::Renderer * SPK::Group::getRenderer() const
	static int _bind_getRenderer(lua_State *L) {
		if (!_lg_typecheck_getRenderer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Renderer * SPK::Group::getRenderer() const function, expected prototype:\nSPK::Renderer * SPK::Group::getRenderer() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Renderer * SPK::Group::getRenderer() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Renderer * lret = self->getRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Renderer >::push(L,lret,false);

		return 1;
	}

	// float SPK::Group::getFriction() const
	static int _bind_getFriction(lua_State *L) {
		if (!_lg_typecheck_getFriction(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Group::getFriction() const function, expected prototype:\nfloat SPK::Group::getFriction() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Group::getFriction() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->getFriction();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const SPK::Vector3D & SPK::Group::getGravity() const
	static int _bind_getGravity(lua_State *L) {
		if (!_lg_typecheck_getGravity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Group::getGravity() const function, expected prototype:\nconst SPK::Vector3D & SPK::Group::getGravity() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Group::getGravity() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getGravity();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// bool SPK::Group::isSortingEnabled() const
	static int _bind_isSortingEnabled(lua_State *L) {
		if (!_lg_typecheck_isSortingEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Group::isSortingEnabled() const function, expected prototype:\nbool SPK::Group::isSortingEnabled() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Group::isSortingEnabled() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isSortingEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Group::isDistanceComputationEnabled() const
	static int _bind_isDistanceComputationEnabled(lua_State *L) {
		if (!_lg_typecheck_isDistanceComputationEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Group::isDistanceComputationEnabled() const function, expected prototype:\nbool SPK::Group::isDistanceComputationEnabled() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Group::isDistanceComputationEnabled() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isDistanceComputationEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Group::isAABBComputingEnabled() const
	static int _bind_isAABBComputingEnabled(lua_State *L) {
		if (!_lg_typecheck_isAABBComputingEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Group::isAABBComputingEnabled() const function, expected prototype:\nbool SPK::Group::isAABBComputingEnabled() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Group::isAABBComputingEnabled() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isAABBComputingEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const SPK::Vector3D & SPK::Group::getAABBMin() const
	static int _bind_getAABBMin(lua_State *L) {
		if (!_lg_typecheck_getAABBMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Group::getAABBMin() const function, expected prototype:\nconst SPK::Vector3D & SPK::Group::getAABBMin() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Group::getAABBMin() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getAABBMin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::Group::getAABBMax() const
	static int _bind_getAABBMax(lua_State *L) {
		if (!_lg_typecheck_getAABBMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::Group::getAABBMax() const function, expected prototype:\nconst SPK::Vector3D & SPK::Group::getAABBMax() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::Group::getAABBMax() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getAABBMax();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const void * SPK::Group::getParamAddress(SPK::ModelParam param) const
	static int _bind_getParamAddress(lua_State *L) {
		if (!_lg_typecheck_getParamAddress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * SPK::Group::getParamAddress(SPK::ModelParam param) const function, expected prototype:\nconst void * SPK::Group::getParamAddress(SPK::ModelParam param) const\nClass arguments details:\n");
		}

		SPK::ModelParam param=(SPK::ModelParam)lua_tointeger(L,2);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * SPK::Group::getParamAddress(SPK::ModelParam) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const void * lret = self->getParamAddress(param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const void * SPK::Group::getPositionAddress() const
	static int _bind_getPositionAddress(lua_State *L) {
		if (!_lg_typecheck_getPositionAddress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * SPK::Group::getPositionAddress() const function, expected prototype:\nconst void * SPK::Group::getPositionAddress() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * SPK::Group::getPositionAddress() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const void * lret = self->getPositionAddress();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// size_t SPK::Group::getParamStride() const
	static int _bind_getParamStride(lua_State *L) {
		if (!_lg_typecheck_getParamStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::Group::getParamStride() const function, expected prototype:\nsize_t SPK::Group::getParamStride() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::Group::getParamStride() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		size_t lret = self->getParamStride();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::Group::getPositionStride() const
	static int _bind_getPositionStride(lua_State *L) {
		if (!_lg_typecheck_getPositionStride(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::Group::getPositionStride() const function, expected prototype:\nsize_t SPK::Group::getPositionStride() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::Group::getPositionStride() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		size_t lret = self->getPositionStride();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void SPK::Group::addParticles(unsigned int nb, const SPK::Vector3D & position, const SPK::Vector3D & velocity)
	static int _bind_addParticles_overload_1(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addParticles(unsigned int nb, const SPK::Vector3D & position, const SPK::Vector3D & velocity) function, expected prototype:\nvoid SPK::Group::addParticles(unsigned int nb, const SPK::Vector3D & position, const SPK::Vector3D & velocity)\nClass arguments details:\narg 2 ID = 70092749\narg 3 ID = 70092749\n");
		}

		unsigned int nb=(unsigned int)lua_tointeger(L,2);
		const SPK::Vector3D* position_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & position=*position_ptr;
		const SPK::Vector3D* velocity_ptr=(Luna< SPK::Vector3D >::check(L,4));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & velocity=*velocity_ptr;

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addParticles(unsigned int, const SPK::Vector3D &, const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addParticles(nb, position, velocity);

		return 0;
	}

	// void SPK::Group::addParticles(unsigned int nb, const SPK::Zone * zone, SPK::Emitter * emitter, bool full = true)
	static int _bind_addParticles_overload_2(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addParticles(unsigned int nb, const SPK::Zone * zone, SPK::Emitter * emitter, bool full = true) function, expected prototype:\nvoid SPK::Group::addParticles(unsigned int nb, const SPK::Zone * zone, SPK::Emitter * emitter, bool full = true)\nClass arguments details:\narg 2 ID = 31337102\narg 3 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		unsigned int nb=(unsigned int)lua_tointeger(L,2);
		const SPK::Zone* zone=(Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,3));
		SPK::Emitter* emitter=(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,4));
		bool full=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : true;

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addParticles(unsigned int, const SPK::Zone *, SPK::Emitter *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addParticles(nb, zone, emitter, full);

		return 0;
	}

	// void SPK::Group::addParticles(unsigned int nb, const SPK::Zone * zone, const SPK::Vector3D & velocity, bool full = true)
	static int _bind_addParticles_overload_3(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addParticles(unsigned int nb, const SPK::Zone * zone, const SPK::Vector3D & velocity, bool full = true) function, expected prototype:\nvoid SPK::Group::addParticles(unsigned int nb, const SPK::Zone * zone, const SPK::Vector3D & velocity, bool full = true)\nClass arguments details:\narg 2 ID = 31337102\narg 3 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		unsigned int nb=(unsigned int)lua_tointeger(L,2);
		const SPK::Zone* zone=(Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,3));
		const SPK::Vector3D* velocity_ptr=(Luna< SPK::Vector3D >::check(L,4));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & velocity=*velocity_ptr;
		bool full=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : true;

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addParticles(unsigned int, const SPK::Zone *, const SPK::Vector3D &, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addParticles(nb, zone, velocity, full);

		return 0;
	}

	// void SPK::Group::addParticles(unsigned int nb, const SPK::Vector3D & position, SPK::Emitter * emitter)
	static int _bind_addParticles_overload_4(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addParticles(unsigned int nb, const SPK::Vector3D & position, SPK::Emitter * emitter) function, expected prototype:\nvoid SPK::Group::addParticles(unsigned int nb, const SPK::Vector3D & position, SPK::Emitter * emitter)\nClass arguments details:\narg 2 ID = 70092749\narg 3 ID = 31337102\n");
		}

		unsigned int nb=(unsigned int)lua_tointeger(L,2);
		const SPK::Vector3D* position_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & position=*position_ptr;
		SPK::Emitter* emitter=(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,4));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addParticles(unsigned int, const SPK::Vector3D &, SPK::Emitter *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addParticles(nb, position, emitter);

		return 0;
	}

	// void SPK::Group::addParticles(unsigned int nb, SPK::Emitter * emitter)
	static int _bind_addParticles_overload_5(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addParticles(unsigned int nb, SPK::Emitter * emitter) function, expected prototype:\nvoid SPK::Group::addParticles(unsigned int nb, SPK::Emitter * emitter)\nClass arguments details:\narg 2 ID = 31337102\n");
		}

		unsigned int nb=(unsigned int)lua_tointeger(L,2);
		SPK::Emitter* emitter=(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,3));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addParticles(unsigned int, SPK::Emitter *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addParticles(nb, emitter);

		return 0;
	}

	// void SPK::Group::addParticles(const SPK::Zone * zone, SPK::Emitter * emitter, float deltaTime, bool full = true)
	static int _bind_addParticles_overload_6(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addParticles(const SPK::Zone * zone, SPK::Emitter * emitter, float deltaTime, bool full = true) function, expected prototype:\nvoid SPK::Group::addParticles(const SPK::Zone * zone, SPK::Emitter * emitter, float deltaTime, bool full = true)\nClass arguments details:\narg 1 ID = 31337102\narg 2 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Zone* zone=(Luna< SPK::Registerable >::checkSubType< SPK::Zone >(L,2));
		SPK::Emitter* emitter=(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,3));
		float deltaTime=(float)lua_tonumber(L,4);
		bool full=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : true;

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addParticles(const SPK::Zone *, SPK::Emitter *, float, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addParticles(zone, emitter, deltaTime, full);

		return 0;
	}

	// void SPK::Group::addParticles(const SPK::Vector3D & position, SPK::Emitter * emitter, float deltaTime)
	static int _bind_addParticles_overload_7(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addParticles(const SPK::Vector3D & position, SPK::Emitter * emitter, float deltaTime) function, expected prototype:\nvoid SPK::Group::addParticles(const SPK::Vector3D & position, SPK::Emitter * emitter, float deltaTime)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 31337102\n");
		}

		const SPK::Vector3D* position_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & position=*position_ptr;
		SPK::Emitter* emitter=(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,3));
		float deltaTime=(float)lua_tonumber(L,4);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addParticles(const SPK::Vector3D &, SPK::Emitter *, float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addParticles(position, emitter, deltaTime);

		return 0;
	}

	// void SPK::Group::addParticles(SPK::Emitter * emitter, float deltaTime)
	static int _bind_addParticles_overload_8(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addParticles(SPK::Emitter * emitter, float deltaTime) function, expected prototype:\nvoid SPK::Group::addParticles(SPK::Emitter * emitter, float deltaTime)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Emitter* emitter=(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,2));
		float deltaTime=(float)lua_tonumber(L,3);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addParticles(SPK::Emitter *, float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addParticles(emitter, deltaTime);

		return 0;
	}

	// float SPK::Group::addParticles(const SPK::Vector3D & start, const SPK::Vector3D & end, SPK::Emitter * emitter, float step, float offset = 0.0f)
	static int _bind_addParticles_overload_9(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Group::addParticles(const SPK::Vector3D & start, const SPK::Vector3D & end, SPK::Emitter * emitter, float step, float offset = 0.0f) function, expected prototype:\nfloat SPK::Group::addParticles(const SPK::Vector3D & start, const SPK::Vector3D & end, SPK::Emitter * emitter, float step, float offset = 0.0f)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* start_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & start=*start_ptr;
		const SPK::Vector3D* end_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & end=*end_ptr;
		SPK::Emitter* emitter=(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,4));
		float step=(float)lua_tonumber(L,5);
		float offset=luatop>5 ? (float)lua_tonumber(L,6) : 0.0f;

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Group::addParticles(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Emitter *, float, float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->addParticles(start, end, emitter, step, offset);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Group::addParticles(const SPK::Vector3D & start, const SPK::Vector3D & end, const SPK::Vector3D & velocity, float step, float offset = 0.0f)
	static int _bind_addParticles_overload_10(lua_State *L) {
		if (!_lg_typecheck_addParticles_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Group::addParticles(const SPK::Vector3D & start, const SPK::Vector3D & end, const SPK::Vector3D & velocity, float step, float offset = 0.0f) function, expected prototype:\nfloat SPK::Group::addParticles(const SPK::Vector3D & start, const SPK::Vector3D & end, const SPK::Vector3D & velocity, float step, float offset = 0.0f)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\narg 3 ID = 70092749\n");
		}

		int luatop = lua_gettop(L);

		const SPK::Vector3D* start_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !start_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg start in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & start=*start_ptr;
		const SPK::Vector3D* end_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !end_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg end in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & end=*end_ptr;
		const SPK::Vector3D* velocity_ptr=(Luna< SPK::Vector3D >::check(L,4));
		if( !velocity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg velocity in SPK::Group::addParticles function");
		}
		const SPK::Vector3D & velocity=*velocity_ptr;
		float step=(float)lua_tonumber(L,5);
		float offset=luatop>5 ? (float)lua_tonumber(L,6) : 0.0f;

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Group::addParticles(const SPK::Vector3D &, const SPK::Vector3D &, const SPK::Vector3D &, float, float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		float lret = self->addParticles(start, end, velocity, step, offset);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for SPK::Group::addParticles
	static int _bind_addParticles(lua_State *L) {
		if (_lg_typecheck_addParticles_overload_1(L)) return _bind_addParticles_overload_1(L);
		if (_lg_typecheck_addParticles_overload_2(L)) return _bind_addParticles_overload_2(L);
		if (_lg_typecheck_addParticles_overload_3(L)) return _bind_addParticles_overload_3(L);
		if (_lg_typecheck_addParticles_overload_4(L)) return _bind_addParticles_overload_4(L);
		if (_lg_typecheck_addParticles_overload_5(L)) return _bind_addParticles_overload_5(L);
		if (_lg_typecheck_addParticles_overload_6(L)) return _bind_addParticles_overload_6(L);
		if (_lg_typecheck_addParticles_overload_7(L)) return _bind_addParticles_overload_7(L);
		if (_lg_typecheck_addParticles_overload_8(L)) return _bind_addParticles_overload_8(L);
		if (_lg_typecheck_addParticles_overload_9(L)) return _bind_addParticles_overload_9(L);
		if (_lg_typecheck_addParticles_overload_10(L)) return _bind_addParticles_overload_10(L);

		luaL_error(L, "error in function addParticles, cannot match any of the overloads for function addParticles:\n  addParticles(unsigned int, const SPK::Vector3D &, const SPK::Vector3D &)\n  addParticles(unsigned int, const SPK::Zone *, SPK::Emitter *, bool)\n  addParticles(unsigned int, const SPK::Zone *, const SPK::Vector3D &, bool)\n  addParticles(unsigned int, const SPK::Vector3D &, SPK::Emitter *)\n  addParticles(unsigned int, SPK::Emitter *)\n  addParticles(const SPK::Zone *, SPK::Emitter *, float, bool)\n  addParticles(const SPK::Vector3D &, SPK::Emitter *, float)\n  addParticles(SPK::Emitter *, float)\n  addParticles(const SPK::Vector3D &, const SPK::Vector3D &, SPK::Emitter *, float, float)\n  addParticles(const SPK::Vector3D &, const SPK::Vector3D &, const SPK::Vector3D &, float, float)\n");
		return 0;
	}

	// void SPK::Group::removeParticle(size_t index)
	static int _bind_removeParticle(lua_State *L) {
		if (!_lg_typecheck_removeParticle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::removeParticle(size_t index) function, expected prototype:\nvoid SPK::Group::removeParticle(size_t index)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::removeParticle(size_t). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->removeParticle(index);

		return 0;
	}

	// void SPK::Group::addEmitter(SPK::Emitter * emitter)
	static int _bind_addEmitter(lua_State *L) {
		if (!_lg_typecheck_addEmitter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addEmitter(SPK::Emitter * emitter) function, expected prototype:\nvoid SPK::Group::addEmitter(SPK::Emitter * emitter)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Emitter* emitter=(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addEmitter(SPK::Emitter *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addEmitter(emitter);

		return 0;
	}

	// void SPK::Group::removeEmitter(SPK::Emitter * emitter)
	static int _bind_removeEmitter(lua_State *L) {
		if (!_lg_typecheck_removeEmitter(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::removeEmitter(SPK::Emitter * emitter) function, expected prototype:\nvoid SPK::Group::removeEmitter(SPK::Emitter * emitter)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Emitter* emitter=(Luna< SPK::Registerable >::checkSubType< SPK::Emitter >(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::removeEmitter(SPK::Emitter *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->removeEmitter(emitter);

		return 0;
	}

	// void SPK::Group::addModifier(SPK::Modifier * modifier)
	static int _bind_addModifier(lua_State *L) {
		if (!_lg_typecheck_addModifier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::addModifier(SPK::Modifier * modifier) function, expected prototype:\nvoid SPK::Group::addModifier(SPK::Modifier * modifier)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Modifier* modifier=(Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::addModifier(SPK::Modifier *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addModifier(modifier);

		return 0;
	}

	// void SPK::Group::removeModifier(SPK::Modifier * modifier)
	static int _bind_removeModifier(lua_State *L) {
		if (!_lg_typecheck_removeModifier(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::removeModifier(SPK::Modifier * modifier) function, expected prototype:\nvoid SPK::Group::removeModifier(SPK::Modifier * modifier)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Modifier* modifier=(Luna< SPK::Registerable >::checkSubType< SPK::Modifier >(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::removeModifier(SPK::Modifier *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->removeModifier(modifier);

		return 0;
	}

	// bool SPK::Group::update(float deltaTime)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Group::update(float deltaTime) function, expected prototype:\nbool SPK::Group::update(float deltaTime)\nClass arguments details:\n");
		}

		float deltaTime=(float)lua_tonumber(L,2);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Group::update(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->update(deltaTime);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Group::render()
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::render() function, expected prototype:\nvoid SPK::Group::render()\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::render(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->render();

		return 0;
	}

	// void SPK::Group::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::empty() function, expected prototype:\nvoid SPK::Group::empty()\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::empty(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->empty();

		return 0;
	}

	// void SPK::Group::flushAddedParticles()
	static int _bind_flushAddedParticles(lua_State *L) {
		if (!_lg_typecheck_flushAddedParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::flushAddedParticles() function, expected prototype:\nvoid SPK::Group::flushAddedParticles()\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::flushAddedParticles(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->flushAddedParticles();

		return 0;
	}

	// void SPK::Group::sortParticles()
	static int _bind_sortParticles(lua_State *L) {
		if (!_lg_typecheck_sortParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::sortParticles() function, expected prototype:\nvoid SPK::Group::sortParticles()\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::sortParticles(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->sortParticles();

		return 0;
	}

	// void SPK::Group::computeDistances()
	static int _bind_computeDistances(lua_State *L) {
		if (!_lg_typecheck_computeDistances(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::computeDistances() function, expected prototype:\nvoid SPK::Group::computeDistances()\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::computeDistances(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->computeDistances();

		return 0;
	}

	// void SPK::Group::computeAABB()
	static int _bind_computeAABB(lua_State *L) {
		if (!_lg_typecheck_computeAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::computeAABB() function, expected prototype:\nvoid SPK::Group::computeAABB()\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::computeAABB(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->computeAABB();

		return 0;
	}

	// void SPK::Group::reallocate(size_t capacity)
	static int _bind_reallocate(lua_State *L) {
		if (!_lg_typecheck_reallocate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::reallocate(size_t capacity) function, expected prototype:\nvoid SPK::Group::reallocate(size_t capacity)\nClass arguments details:\n");
		}

		size_t capacity=(size_t)lua_tointeger(L,2);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::reallocate(size_t). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->reallocate(capacity);

		return 0;
	}

	// SPK::Buffer * SPK::Group::createBuffer(const std::string & ID, const SPK::BufferCreator & creator, unsigned int flag = 0, bool swapData = true) const
	static int _bind_createBuffer(lua_State *L) {
		if (!_lg_typecheck_createBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Buffer * SPK::Group::createBuffer(const std::string & ID, const SPK::BufferCreator & creator, unsigned int flag = 0, bool swapData = true) const function, expected prototype:\nSPK::Buffer * SPK::Group::createBuffer(const std::string & ID, const SPK::BufferCreator & creator, unsigned int flag = 0, bool swapData = true) const\nClass arguments details:\narg 2 ID = 22446991\n");
		}

		int luatop = lua_gettop(L);

		std::string ID(lua_tostring(L,2),lua_objlen(L,2));
		const SPK::BufferCreator* creator_ptr=(Luna< SPK::BufferCreator >::check(L,3));
		if( !creator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg creator in SPK::Group::createBuffer function");
		}
		const SPK::BufferCreator & creator=*creator_ptr;
		unsigned int flag=luatop>3 ? (unsigned int)lua_tointeger(L,4) : 0;
		bool swapData=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : true;

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Buffer * SPK::Group::createBuffer(const std::string &, const SPK::BufferCreator &, unsigned int, bool) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Buffer * lret = self->createBuffer(ID, creator, flag, swapData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Buffer >::push(L,lret,false);

		return 1;
	}

	// void SPK::Group::destroyBuffer(const std::string & ID) const
	static int _bind_destroyBuffer(lua_State *L) {
		if (!_lg_typecheck_destroyBuffer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::destroyBuffer(const std::string & ID) const function, expected prototype:\nvoid SPK::Group::destroyBuffer(const std::string & ID) const\nClass arguments details:\n");
		}

		std::string ID(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::destroyBuffer(const std::string &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->destroyBuffer(ID);

		return 0;
	}

	// void SPK::Group::destroyAllBuffers() const
	static int _bind_destroyAllBuffers(lua_State *L) {
		if (!_lg_typecheck_destroyAllBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::destroyAllBuffers() const function, expected prototype:\nvoid SPK::Group::destroyAllBuffers() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Group::destroyAllBuffers() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->destroyAllBuffers();

		return 0;
	}

	// SPK::Buffer * SPK::Group::getBuffer(const std::string & ID, unsigned int flag) const
	static int _bind_getBuffer_overload_1(lua_State *L) {
		if (!_lg_typecheck_getBuffer_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Buffer * SPK::Group::getBuffer(const std::string & ID, unsigned int flag) const function, expected prototype:\nSPK::Buffer * SPK::Group::getBuffer(const std::string & ID, unsigned int flag) const\nClass arguments details:\n");
		}

		std::string ID(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int flag=(unsigned int)lua_tointeger(L,3);

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Buffer * SPK::Group::getBuffer(const std::string &, unsigned int) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Buffer * lret = self->getBuffer(ID, flag);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Buffer >::push(L,lret,false);

		return 1;
	}

	// SPK::Buffer * SPK::Group::getBuffer(const std::string & ID) const
	static int _bind_getBuffer_overload_2(lua_State *L) {
		if (!_lg_typecheck_getBuffer_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Buffer * SPK::Group::getBuffer(const std::string & ID) const function, expected prototype:\nSPK::Buffer * SPK::Group::getBuffer(const std::string & ID) const\nClass arguments details:\n");
		}

		std::string ID(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Buffer * SPK::Group::getBuffer(const std::string &) const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Buffer * lret = self->getBuffer(ID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Buffer >::push(L,lret,false);

		return 1;
	}

	// Overload binder for SPK::Group::getBuffer
	static int _bind_getBuffer(lua_State *L) {
		if (_lg_typecheck_getBuffer_overload_1(L)) return _bind_getBuffer_overload_1(L);
		if (_lg_typecheck_getBuffer_overload_2(L)) return _bind_getBuffer_overload_2(L);

		luaL_error(L, "error in function getBuffer, cannot match any of the overloads for function getBuffer:\n  getBuffer(const std::string &, unsigned int)\n  getBuffer(const std::string &)\n");
		return 0;
	}

	// SPK::Registerable * SPK::Group::findByName(const std::string & name)
	static int _bind_findByName(lua_State *L) {
		if (!_lg_typecheck_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Group::findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Group::findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Group::findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// static SPK::Group * SPK::Group::create(SPK::Model * model = NULL, size_t capacity = SPK::Pool <  SPK::Particle  >::DEFAULT_CAPACITY)
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::Group * SPK::Group::create(SPK::Model * model = NULL, size_t capacity = SPK::Pool <  SPK::Particle  >::DEFAULT_CAPACITY) function, expected prototype:\nstatic SPK::Group * SPK::Group::create(SPK::Model * model = NULL, size_t capacity = SPK::Pool <  SPK::Particle  >::DEFAULT_CAPACITY)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Model* model=luatop>0 ? (Luna< SPK::Registerable >::checkSubType< SPK::Model >(L,1)) : (SPK::Model*)NULL;
		size_t capacity=luatop>1 ? (size_t)lua_tointeger(L,2) : SPK::Pool <  SPK::Particle  >::DEFAULT_CAPACITY;

		SPK::Group * lret = SPK::Group::create(model, capacity);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Group >::push(L,lret,false);

		return 1;
	}

	// static void SPK::Group::enableBuffersManagement(bool manage)
	static int _bind_enableBuffersManagement(lua_State *L) {
		if (!_lg_typecheck_enableBuffersManagement(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::Group::enableBuffersManagement(bool manage) function, expected prototype:\nstatic void SPK::Group::enableBuffersManagement(bool manage)\nClass arguments details:\n");
		}

		bool manage=(bool)(lua_toboolean(L,1)==1);

		SPK::Group::enableBuffersManagement(manage);

		return 0;
	}

	// static bool SPK::Group::isBuffersManagementEnabled()
	static int _bind_isBuffersManagementEnabled(lua_State *L) {
		if (!_lg_typecheck_isBuffersManagementEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static bool SPK::Group::isBuffersManagementEnabled() function, expected prototype:\nstatic bool SPK::Group::isBuffersManagementEnabled()\nClass arguments details:\n");
		}


		bool lret = SPK::Group::isBuffersManagementEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Group::setCustomUpdate(SPK::Group * grp, spark::GroupCustomUpdate * cb)
	static int _bind_setCustomUpdate(lua_State *L) {
		if (!_lg_typecheck_setCustomUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Group::setCustomUpdate(SPK::Group * grp, spark::GroupCustomUpdate * cb) function, expected prototype:\nvoid SPK::Group::setCustomUpdate(SPK::Group * grp, spark::GroupCustomUpdate * cb)\nClass arguments details:\narg 1 ID = 31337102\narg 2 ID = 7361390\n");
		}

		SPK::Group* grp=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1));
		spark::GroupCustomUpdate* cb=(Luna< spark::GroupCustomUpdate >::check(L,2));

		setCustomUpdate(grp, cb);

		return 0;
	}

	// std::string SPK::Group::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::Group::base_getClassName() const function, expected prototype:\nstd::string SPK::Group::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::Group::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->Group::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// SPK::Registerable * SPK::Group::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Group::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::Group::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::Group* self=Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Group::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->Group::findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_SPK_Transformable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_SPK_Transformable(lua_State *L) {
		if (!_lg_typecheck_baseCast_SPK_Transformable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in baseCast_SPK_Transformable function, expected prototype:\nbaseCast()");
		}

		SPK::Registerable* self=(Luna< SPK::Registerable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		SPK::Transformable* res = luna_caster<SPK::Registerable,SPK::Transformable>::cast(self); // dynamic_cast<SPK::Transformable*>(self);
		if(!res)
			return 0;
			
		Luna< SPK::Transformable >::push(L,res,false);
		return 1;

	}

};

SPK::Group* LunaTraits< SPK::Group >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_Group::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::Group >::_bind_dtor(SPK::Group* obj) {
	delete obj;
}

const char LunaTraits< SPK::Group >::className[] = "Group";
const char LunaTraits< SPK::Group >::fullName[] = "SPK::Group";
const char LunaTraits< SPK::Group >::moduleName[] = "spark";
const char* LunaTraits< SPK::Group >::parents[] = {"spark.Registerable", "spark.Transformable", 0};
const int LunaTraits< SPK::Group >::hash = 36788392;
const int LunaTraits< SPK::Group >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::Group >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_Group::_bind_getClassName},
	{"setModel", &luna_wrapper_SPK_Group::_bind_setModel},
	{"setRenderer", &luna_wrapper_SPK_Group::_bind_setRenderer},
	{"setFriction", &luna_wrapper_SPK_Group::_bind_setFriction},
	{"setGravity", &luna_wrapper_SPK_Group::_bind_setGravity},
	{"enableSorting", &luna_wrapper_SPK_Group::_bind_enableSorting},
	{"enableDistanceComputation", &luna_wrapper_SPK_Group::_bind_enableDistanceComputation},
	{"enableAABBComputing", &luna_wrapper_SPK_Group::_bind_enableAABBComputing},
	{"getParticles", &luna_wrapper_SPK_Group::_bind_getParticles},
	{"getParticle", &luna_wrapper_SPK_Group::_bind_getParticle},
	{"getNbParticles", &luna_wrapper_SPK_Group::_bind_getNbParticles},
	{"getEmitter", &luna_wrapper_SPK_Group::_bind_getEmitter},
	{"getNbEmitters", &luna_wrapper_SPK_Group::_bind_getNbEmitters},
	{"getModifier", &luna_wrapper_SPK_Group::_bind_getModifier},
	{"getNbModifiers", &luna_wrapper_SPK_Group::_bind_getNbModifiers},
	{"getModel", &luna_wrapper_SPK_Group::_bind_getModel},
	{"getRenderer", &luna_wrapper_SPK_Group::_bind_getRenderer},
	{"getFriction", &luna_wrapper_SPK_Group::_bind_getFriction},
	{"getGravity", &luna_wrapper_SPK_Group::_bind_getGravity},
	{"isSortingEnabled", &luna_wrapper_SPK_Group::_bind_isSortingEnabled},
	{"isDistanceComputationEnabled", &luna_wrapper_SPK_Group::_bind_isDistanceComputationEnabled},
	{"isAABBComputingEnabled", &luna_wrapper_SPK_Group::_bind_isAABBComputingEnabled},
	{"getAABBMin", &luna_wrapper_SPK_Group::_bind_getAABBMin},
	{"getAABBMax", &luna_wrapper_SPK_Group::_bind_getAABBMax},
	{"getParamAddress", &luna_wrapper_SPK_Group::_bind_getParamAddress},
	{"getPositionAddress", &luna_wrapper_SPK_Group::_bind_getPositionAddress},
	{"getParamStride", &luna_wrapper_SPK_Group::_bind_getParamStride},
	{"getPositionStride", &luna_wrapper_SPK_Group::_bind_getPositionStride},
	{"addParticles", &luna_wrapper_SPK_Group::_bind_addParticles},
	{"removeParticle", &luna_wrapper_SPK_Group::_bind_removeParticle},
	{"addEmitter", &luna_wrapper_SPK_Group::_bind_addEmitter},
	{"removeEmitter", &luna_wrapper_SPK_Group::_bind_removeEmitter},
	{"addModifier", &luna_wrapper_SPK_Group::_bind_addModifier},
	{"removeModifier", &luna_wrapper_SPK_Group::_bind_removeModifier},
	{"update", &luna_wrapper_SPK_Group::_bind_update},
	{"render", &luna_wrapper_SPK_Group::_bind_render},
	{"empty", &luna_wrapper_SPK_Group::_bind_empty},
	{"flushAddedParticles", &luna_wrapper_SPK_Group::_bind_flushAddedParticles},
	{"sortParticles", &luna_wrapper_SPK_Group::_bind_sortParticles},
	{"computeDistances", &luna_wrapper_SPK_Group::_bind_computeDistances},
	{"computeAABB", &luna_wrapper_SPK_Group::_bind_computeAABB},
	{"reallocate", &luna_wrapper_SPK_Group::_bind_reallocate},
	{"createBuffer", &luna_wrapper_SPK_Group::_bind_createBuffer},
	{"destroyBuffer", &luna_wrapper_SPK_Group::_bind_destroyBuffer},
	{"destroyAllBuffers", &luna_wrapper_SPK_Group::_bind_destroyAllBuffers},
	{"getBuffer", &luna_wrapper_SPK_Group::_bind_getBuffer},
	{"findByName", &luna_wrapper_SPK_Group::_bind_findByName},
	{"create", &luna_wrapper_SPK_Group::_bind_create},
	{"enableBuffersManagement", &luna_wrapper_SPK_Group::_bind_enableBuffersManagement},
	{"isBuffersManagementEnabled", &luna_wrapper_SPK_Group::_bind_isBuffersManagementEnabled},
	{"setCustomUpdate", &luna_wrapper_SPK_Group::_bind_setCustomUpdate},
	{"base_getClassName", &luna_wrapper_SPK_Group::_bind_base_getClassName},
	{"base_findByName", &luna_wrapper_SPK_Group::_bind_base_findByName},
	{"__eq", &luna_wrapper_SPK_Group::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Group::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Group::_bind_asVoid},
	{"getTable", &luna_wrapper_SPK_Group::_bind_getTable},
	{"asTransformable", &luna_wrapper_SPK_Group::_bind_baseCast_SPK_Transformable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Group >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_Group::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_Group::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Group >::enumValues[] = {
	{0,0}
};


