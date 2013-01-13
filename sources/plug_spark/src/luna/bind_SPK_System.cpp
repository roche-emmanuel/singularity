#include <plug_common.h>

#include <luna/wrappers/wrapper_SPK_System.h>

class luna_wrapper_SPK_System {
public:
	typedef Luna< SPK::System > luna_t;

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

	// Derived class converters:
	static int _cast_from_Registerable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::System* ptr= dynamic_cast< SPK::System* >(Luna< SPK::Registerable >::check(L,1));
		SPK::System* ptr= luna_caster< SPK::Registerable, SPK::System >::cast(Luna< SPK::Registerable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::System >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Transformable(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SPK::System* ptr= dynamic_cast< SPK::System* >(Luna< SPK::Transformable >::check(L,1));
		SPK::System* ptr= luna_caster< SPK::Transformable, SPK::System >::cast(Luna< SPK::Transformable >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SPK::System >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_enableAABBComputing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNbParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeNbParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNbGroups(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_addGroup(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeGroup(lua_State *L) {
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

	inline static bool _lg_typecheck_grow(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
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

	inline static bool _lg_typecheck_findByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_create(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClampStep(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useConstantStep(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useAdaptiveStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useRealStep(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCameraPosition(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStepMode(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getClassName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_render(lua_State *L) {
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
	// SPK::System::System(lua_Table * data)
	static SPK::System* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::System::System(lua_Table * data) function, expected prototype:\nSPK::System::System(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_SPK_System(L,NULL);
	}


	// Function binds:
	// std::string SPK::System::getClassName() const
	static int _bind_getClassName(lua_State *L) {
		if (!_lg_typecheck_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::System::getClassName() const function, expected prototype:\nstd::string SPK::System::getClassName() const\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::System::getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void SPK::System::enableAABBComputing(bool AABB)
	static int _bind_enableAABBComputing(lua_State *L) {
		if (!_lg_typecheck_enableAABBComputing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::enableAABBComputing(bool AABB) function, expected prototype:\nvoid SPK::System::enableAABBComputing(bool AABB)\nClass arguments details:\n");
		}

		bool AABB=(bool)(lua_toboolean(L,2)==1);

		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::enableAABBComputing(bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->enableAABBComputing(AABB);

		return 0;
	}

	// size_t SPK::System::getNbParticles() const
	static int _bind_getNbParticles(lua_State *L) {
		if (!_lg_typecheck_getNbParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::System::getNbParticles() const function, expected prototype:\nsize_t SPK::System::getNbParticles() const\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::System::getNbParticles() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		size_t lret = self->getNbParticles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::System::computeNbParticles()
	static int _bind_computeNbParticles(lua_State *L) {
		if (!_lg_typecheck_computeNbParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::System::computeNbParticles() function, expected prototype:\nsize_t SPK::System::computeNbParticles()\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::System::computeNbParticles(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		size_t lret = self->computeNbParticles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t SPK::System::getNbGroups() const
	static int _bind_getNbGroups(lua_State *L) {
		if (!_lg_typecheck_getNbGroups(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in size_t SPK::System::getNbGroups() const function, expected prototype:\nsize_t SPK::System::getNbGroups() const\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call size_t SPK::System::getNbGroups() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		size_t lret = self->getNbGroups();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::Group * SPK::System::getGroup(size_t index)
	static int _bind_getGroup(lua_State *L) {
		if (!_lg_typecheck_getGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Group * SPK::System::getGroup(size_t index) function, expected prototype:\nSPK::Group * SPK::System::getGroup(size_t index)\nClass arguments details:\n");
		}

		size_t index=(size_t)lua_tointeger(L,2);

		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Group * SPK::System::getGroup(size_t). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Group * lret = self->getGroup(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Group >::push(L,lret,false);

		return 1;
	}

	// bool SPK::System::isAABBComputingEnabled() const
	static int _bind_isAABBComputingEnabled(lua_State *L) {
		if (!_lg_typecheck_isAABBComputingEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::System::isAABBComputingEnabled() const function, expected prototype:\nbool SPK::System::isAABBComputingEnabled() const\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::System::isAABBComputingEnabled() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->isAABBComputingEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const SPK::Vector3D & SPK::System::getAABBMin() const
	static int _bind_getAABBMin(lua_State *L) {
		if (!_lg_typecheck_getAABBMin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::System::getAABBMin() const function, expected prototype:\nconst SPK::Vector3D & SPK::System::getAABBMin() const\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::System::getAABBMin() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getAABBMin();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// const SPK::Vector3D & SPK::System::getAABBMax() const
	static int _bind_getAABBMax(lua_State *L) {
		if (!_lg_typecheck_getAABBMax(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Vector3D & SPK::System::getAABBMax() const function, expected prototype:\nconst SPK::Vector3D & SPK::System::getAABBMax() const\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Vector3D & SPK::System::getAABBMax() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		const SPK::Vector3D* lret = &self->getAABBMax();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// void SPK::System::addGroup(SPK::Group * group)
	static int _bind_addGroup(lua_State *L) {
		if (!_lg_typecheck_addGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::addGroup(SPK::Group * group) function, expected prototype:\nvoid SPK::System::addGroup(SPK::Group * group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Group* group=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));

		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::addGroup(SPK::Group *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->addGroup(group);

		return 0;
	}

	// void SPK::System::removeGroup(SPK::Group * group)
	static int _bind_removeGroup(lua_State *L) {
		if (!_lg_typecheck_removeGroup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::removeGroup(SPK::Group * group) function, expected prototype:\nvoid SPK::System::removeGroup(SPK::Group * group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Group* group=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));

		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::removeGroup(SPK::Group *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->removeGroup(group);

		return 0;
	}

	// bool SPK::System::update(float deltaTime)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::System::update(float deltaTime) function, expected prototype:\nbool SPK::System::update(float deltaTime)\nClass arguments details:\n");
		}

		float deltaTime=(float)lua_tonumber(L,2);

		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::System::update(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->update(deltaTime);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::System::render() const
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::render() const function, expected prototype:\nvoid SPK::System::render() const\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::render() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->render();

		return 0;
	}

	// void SPK::System::grow(float time, float step)
	static int _bind_grow(lua_State *L) {
		if (!_lg_typecheck_grow(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::grow(float time, float step) function, expected prototype:\nvoid SPK::System::grow(float time, float step)\nClass arguments details:\n");
		}

		float time=(float)lua_tonumber(L,2);
		float step=(float)lua_tonumber(L,3);

		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::grow(float, float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->grow(time, step);

		return 0;
	}

	// void SPK::System::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::empty() function, expected prototype:\nvoid SPK::System::empty()\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::empty(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->empty();

		return 0;
	}

	// void SPK::System::sortParticles()
	static int _bind_sortParticles(lua_State *L) {
		if (!_lg_typecheck_sortParticles(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::sortParticles() function, expected prototype:\nvoid SPK::System::sortParticles()\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::sortParticles(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->sortParticles();

		return 0;
	}

	// void SPK::System::computeDistances()
	static int _bind_computeDistances(lua_State *L) {
		if (!_lg_typecheck_computeDistances(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::computeDistances() function, expected prototype:\nvoid SPK::System::computeDistances()\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::computeDistances(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->computeDistances();

		return 0;
	}

	// void SPK::System::computeAABB()
	static int _bind_computeAABB(lua_State *L) {
		if (!_lg_typecheck_computeAABB(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::computeAABB() function, expected prototype:\nvoid SPK::System::computeAABB()\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::computeAABB(). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->computeAABB();

		return 0;
	}

	// SPK::Registerable * SPK::System::findByName(const std::string & name)
	static int _bind_findByName(lua_State *L) {
		if (!_lg_typecheck_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::System::findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::System::findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::System::findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->findByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// static SPK::System * SPK::System::create()
	static int _bind_create(lua_State *L) {
		if (!_lg_typecheck_create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::System * SPK::System::create() function, expected prototype:\nstatic SPK::System * SPK::System::create()\nClass arguments details:\n");
		}


		SPK::System * lret = SPK::System::create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::System >::push(L,lret,false);

		return 1;
	}

	// static void SPK::System::setCameraPosition(const SPK::Vector3D & cameraPosition)
	static int _bind_setCameraPosition(lua_State *L) {
		if (!_lg_typecheck_setCameraPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::System::setCameraPosition(const SPK::Vector3D & cameraPosition) function, expected prototype:\nstatic void SPK::System::setCameraPosition(const SPK::Vector3D & cameraPosition)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		const SPK::Vector3D* cameraPosition_ptr=(Luna< SPK::Vector3D >::check(L,1));
		if( !cameraPosition_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cameraPosition in SPK::System::setCameraPosition function");
		}
		const SPK::Vector3D & cameraPosition=*cameraPosition_ptr;

		SPK::System::setCameraPosition(cameraPosition);

		return 0;
	}

	// static void SPK::System::setClampStep(bool useClampStep, float clamp = 1.0f)
	static int _bind_setClampStep(lua_State *L) {
		if (!_lg_typecheck_setClampStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::System::setClampStep(bool useClampStep, float clamp = 1.0f) function, expected prototype:\nstatic void SPK::System::setClampStep(bool useClampStep, float clamp = 1.0f)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool useClampStep=(bool)(lua_toboolean(L,1)==1);
		float clamp=luatop>1 ? (float)lua_tonumber(L,2) : 1.0f;

		SPK::System::setClampStep(useClampStep, clamp);

		return 0;
	}

	// static void SPK::System::useConstantStep(float constantStep)
	static int _bind_useConstantStep(lua_State *L) {
		if (!_lg_typecheck_useConstantStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::System::useConstantStep(float constantStep) function, expected prototype:\nstatic void SPK::System::useConstantStep(float constantStep)\nClass arguments details:\n");
		}

		float constantStep=(float)lua_tonumber(L,1);

		SPK::System::useConstantStep(constantStep);

		return 0;
	}

	// static void SPK::System::useAdaptiveStep(float minStep, float maxStep)
	static int _bind_useAdaptiveStep(lua_State *L) {
		if (!_lg_typecheck_useAdaptiveStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::System::useAdaptiveStep(float minStep, float maxStep) function, expected prototype:\nstatic void SPK::System::useAdaptiveStep(float minStep, float maxStep)\nClass arguments details:\n");
		}

		float minStep=(float)lua_tonumber(L,1);
		float maxStep=(float)lua_tonumber(L,2);

		SPK::System::useAdaptiveStep(minStep, maxStep);

		return 0;
	}

	// static void SPK::System::useRealStep()
	static int _bind_useRealStep(lua_State *L) {
		if (!_lg_typecheck_useRealStep(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::System::useRealStep() function, expected prototype:\nstatic void SPK::System::useRealStep()\nClass arguments details:\n");
		}


		SPK::System::useRealStep();

		return 0;
	}

	// static const SPK::Vector3D & SPK::System::getCameraPosition()
	static int _bind_getCameraPosition(lua_State *L) {
		if (!_lg_typecheck_getCameraPosition(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static const SPK::Vector3D & SPK::System::getCameraPosition() function, expected prototype:\nstatic const SPK::Vector3D & SPK::System::getCameraPosition()\nClass arguments details:\n");
		}


		const SPK::Vector3D* lret = &SPK::System::getCameraPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Vector3D >::push(L,lret,false);

		return 1;
	}

	// static SPK::StepMode SPK::System::getStepMode()
	static int _bind_getStepMode(lua_State *L) {
		if (!_lg_typecheck_getStepMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static SPK::StepMode SPK::System::getStepMode() function, expected prototype:\nstatic SPK::StepMode SPK::System::getStepMode()\nClass arguments details:\n");
		}


		SPK::StepMode lret = SPK::System::getStepMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string SPK::System::base_getClassName() const
	static int _bind_base_getClassName(lua_State *L) {
		if (!_lg_typecheck_base_getClassName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string SPK::System::base_getClassName() const function, expected prototype:\nstd::string SPK::System::base_getClassName() const\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string SPK::System::base_getClassName() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		std::string lret = self->System::getClassName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool SPK::System::base_update(float deltaTime)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::System::base_update(float deltaTime) function, expected prototype:\nbool SPK::System::base_update(float deltaTime)\nClass arguments details:\n");
		}

		float deltaTime=(float)lua_tonumber(L,2);

		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::System::base_update(float). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->System::update(deltaTime);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::System::base_render() const
	static int _bind_base_render(lua_State *L) {
		if (!_lg_typecheck_base_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::System::base_render() const function, expected prototype:\nvoid SPK::System::base_render() const\nClass arguments details:\n");
		}


		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::System::base_render() const. Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->System::render();

		return 0;
	}

	// SPK::Registerable * SPK::System::base_findByName(const std::string & name)
	static int _bind_base_findByName(lua_State *L) {
		if (!_lg_typecheck_base_findByName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::System::base_findByName(const std::string & name) function, expected prototype:\nSPK::Registerable * SPK::System::base_findByName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		SPK::System* self=Luna< SPK::Registerable >::checkSubType< SPK::System >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::System::base_findByName(const std::string &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->System::findByName(name);
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

SPK::System* LunaTraits< SPK::System >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SPK_System::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// SPK::Registerable * SPK::Registerable::clone(bool createBase) const
}

void LunaTraits< SPK::System >::_bind_dtor(SPK::System* obj) {
	delete obj;
}

const char LunaTraits< SPK::System >::className[] = "System";
const char LunaTraits< SPK::System >::fullName[] = "SPK::System";
const char LunaTraits< SPK::System >::moduleName[] = "spark";
const char* LunaTraits< SPK::System >::parents[] = {"spark.Registerable", "spark.Transformable", 0};
const int LunaTraits< SPK::System >::hash = 90572428;
const int LunaTraits< SPK::System >::uniqueIDs[] = {31337102, 41560017,0};

luna_RegType LunaTraits< SPK::System >::methods[] = {
	{"getClassName", &luna_wrapper_SPK_System::_bind_getClassName},
	{"enableAABBComputing", &luna_wrapper_SPK_System::_bind_enableAABBComputing},
	{"getNbParticles", &luna_wrapper_SPK_System::_bind_getNbParticles},
	{"computeNbParticles", &luna_wrapper_SPK_System::_bind_computeNbParticles},
	{"getNbGroups", &luna_wrapper_SPK_System::_bind_getNbGroups},
	{"getGroup", &luna_wrapper_SPK_System::_bind_getGroup},
	{"isAABBComputingEnabled", &luna_wrapper_SPK_System::_bind_isAABBComputingEnabled},
	{"getAABBMin", &luna_wrapper_SPK_System::_bind_getAABBMin},
	{"getAABBMax", &luna_wrapper_SPK_System::_bind_getAABBMax},
	{"addGroup", &luna_wrapper_SPK_System::_bind_addGroup},
	{"removeGroup", &luna_wrapper_SPK_System::_bind_removeGroup},
	{"update", &luna_wrapper_SPK_System::_bind_update},
	{"render", &luna_wrapper_SPK_System::_bind_render},
	{"grow", &luna_wrapper_SPK_System::_bind_grow},
	{"empty", &luna_wrapper_SPK_System::_bind_empty},
	{"sortParticles", &luna_wrapper_SPK_System::_bind_sortParticles},
	{"computeDistances", &luna_wrapper_SPK_System::_bind_computeDistances},
	{"computeAABB", &luna_wrapper_SPK_System::_bind_computeAABB},
	{"findByName", &luna_wrapper_SPK_System::_bind_findByName},
	{"create", &luna_wrapper_SPK_System::_bind_create},
	{"setCameraPosition", &luna_wrapper_SPK_System::_bind_setCameraPosition},
	{"setClampStep", &luna_wrapper_SPK_System::_bind_setClampStep},
	{"useConstantStep", &luna_wrapper_SPK_System::_bind_useConstantStep},
	{"useAdaptiveStep", &luna_wrapper_SPK_System::_bind_useAdaptiveStep},
	{"useRealStep", &luna_wrapper_SPK_System::_bind_useRealStep},
	{"getCameraPosition", &luna_wrapper_SPK_System::_bind_getCameraPosition},
	{"getStepMode", &luna_wrapper_SPK_System::_bind_getStepMode},
	{"base_getClassName", &luna_wrapper_SPK_System::_bind_base_getClassName},
	{"base_update", &luna_wrapper_SPK_System::_bind_base_update},
	{"base_render", &luna_wrapper_SPK_System::_bind_base_render},
	{"base_findByName", &luna_wrapper_SPK_System::_bind_base_findByName},
	{"__eq", &luna_wrapper_SPK_System::_bind___eq},
	{"getTable", &luna_wrapper_SPK_System::_bind_getTable},
	{"asTransformable", &luna_wrapper_SPK_System::_bind_baseCast_SPK_Transformable},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::System >::converters[] = {
	{"SPK::Registerable", &luna_wrapper_SPK_System::_cast_from_Registerable},
	{"SPK::Transformable", &luna_wrapper_SPK_System::_cast_from_Transformable},
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::System >::enumValues[] = {
	{0,0}
};


