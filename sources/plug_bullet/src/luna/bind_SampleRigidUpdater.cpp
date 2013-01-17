#include <plug_common.h>

class luna_wrapper_SampleRigidUpdater {
public:
	typedef Luna< SampleRigidUpdater > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_GUIEventHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SampleRigidUpdater* ptr= dynamic_cast< SampleRigidUpdater* >(Luna< osg::Referenced >::check(L,1));
		SampleRigidUpdater* ptr= luna_caster< osg::Referenced, SampleRigidUpdater >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SampleRigidUpdater >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addGround(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPhysicsBox(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPhysicsSphere(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SampleRigidUpdater::SampleRigidUpdater(osg::Group * root)
	static SampleRigidUpdater* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SampleRigidUpdater::SampleRigidUpdater(osg::Group * root) function, expected prototype:\nSampleRigidUpdater::SampleRigidUpdater(osg::Group * root)\nClass arguments details:\n");
		}

		osg::Group* root=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,1));

		return new SampleRigidUpdater(root);
	}


	// Function binds:
	// void SampleRigidUpdater::addGround(const osg::Vec3f & gravity)
	static int _bind_addGround(lua_State *L) {
		if (!_lg_typecheck_addGround(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SampleRigidUpdater::addGround(const osg::Vec3f & gravity) function, expected prototype:\nvoid SampleRigidUpdater::addGround(const osg::Vec3f & gravity)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* gravity_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !gravity_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg gravity in SampleRigidUpdater::addGround function");
		}
		const osg::Vec3f & gravity=*gravity_ptr;

		SampleRigidUpdater* self=Luna< osg::Referenced >::checkSubType< SampleRigidUpdater >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SampleRigidUpdater::addGround(const osg::Vec3f &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addGround(gravity);

		return 0;
	}

	// void SampleRigidUpdater::addPhysicsBox(osg::Box * shape, const osg::Vec3f & pos, const osg::Vec3f & vel, double mass)
	static int _bind_addPhysicsBox(lua_State *L) {
		if (!_lg_typecheck_addPhysicsBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SampleRigidUpdater::addPhysicsBox(osg::Box * shape, const osg::Vec3f & pos, const osg::Vec3f & vel, double mass) function, expected prototype:\nvoid SampleRigidUpdater::addPhysicsBox(osg::Box * shape, const osg::Vec3f & pos, const osg::Vec3f & vel, double mass)\nClass arguments details:\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
		}

		osg::Box* shape=(Luna< osg::Referenced >::checkSubType< osg::Box >(L,2));
		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SampleRigidUpdater::addPhysicsBox function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		const osg::Vec3f* vel_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !vel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vel in SampleRigidUpdater::addPhysicsBox function");
		}
		const osg::Vec3f & vel=*vel_ptr;
		double mass=(double)lua_tonumber(L,5);

		SampleRigidUpdater* self=Luna< osg::Referenced >::checkSubType< SampleRigidUpdater >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SampleRigidUpdater::addPhysicsBox(osg::Box *, const osg::Vec3f &, const osg::Vec3f &, double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addPhysicsBox(shape, pos, vel, mass);

		return 0;
	}

	// void SampleRigidUpdater::addPhysicsSphere(osg::Sphere * shape, const osg::Vec3f & pos, const osg::Vec3f & vel, double mass)
	static int _bind_addPhysicsSphere(lua_State *L) {
		if (!_lg_typecheck_addPhysicsSphere(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SampleRigidUpdater::addPhysicsSphere(osg::Sphere * shape, const osg::Vec3f & pos, const osg::Vec3f & vel, double mass) function, expected prototype:\nvoid SampleRigidUpdater::addPhysicsSphere(osg::Sphere * shape, const osg::Vec3f & pos, const osg::Vec3f & vel, double mass)\nClass arguments details:\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
		}

		osg::Sphere* shape=(Luna< osg::Referenced >::checkSubType< osg::Sphere >(L,2));
		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SampleRigidUpdater::addPhysicsSphere function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		const osg::Vec3f* vel_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !vel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vel in SampleRigidUpdater::addPhysicsSphere function");
		}
		const osg::Vec3f & vel=*vel_ptr;
		double mass=(double)lua_tonumber(L,5);

		SampleRigidUpdater* self=Luna< osg::Referenced >::checkSubType< SampleRigidUpdater >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SampleRigidUpdater::addPhysicsSphere(osg::Sphere *, const osg::Vec3f &, const osg::Vec3f &, double). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addPhysicsSphere(shape, pos, vel, mass);

		return 0;
	}

	// bool SampleRigidUpdater::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SampleRigidUpdater::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool SampleRigidUpdater::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in SampleRigidUpdater::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in SampleRigidUpdater::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		SampleRigidUpdater* self=Luna< osg::Referenced >::checkSubType< SampleRigidUpdater >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SampleRigidUpdater::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

SampleRigidUpdater* LunaTraits< SampleRigidUpdater >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SampleRigidUpdater::_bind_ctor(L);
}

void LunaTraits< SampleRigidUpdater >::_bind_dtor(SampleRigidUpdater* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< SampleRigidUpdater >::className[] = "SampleRigidUpdater";
const char LunaTraits< SampleRigidUpdater >::fullName[] = "SampleRigidUpdater";
const char LunaTraits< SampleRigidUpdater >::moduleName[] = "bullet";
const char* LunaTraits< SampleRigidUpdater >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< SampleRigidUpdater >::hash = 90125590;
const int LunaTraits< SampleRigidUpdater >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< SampleRigidUpdater >::methods[] = {
	{"addGround", &luna_wrapper_SampleRigidUpdater::_bind_addGround},
	{"addPhysicsBox", &luna_wrapper_SampleRigidUpdater::_bind_addPhysicsBox},
	{"addPhysicsSphere", &luna_wrapper_SampleRigidUpdater::_bind_addPhysicsSphere},
	{"handle", &luna_wrapper_SampleRigidUpdater::_bind_handle},
	{"__eq", &luna_wrapper_SampleRigidUpdater::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< SampleRigidUpdater >::converters[] = {
	{"osgGA::GUIEventHandler", &luna_wrapper_SampleRigidUpdater::_cast_from_GUIEventHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< SampleRigidUpdater >::enumValues[] = {
	{0,0}
};


