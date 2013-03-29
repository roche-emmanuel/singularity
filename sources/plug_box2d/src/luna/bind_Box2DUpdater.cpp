#include <plug_common.h>

class luna_wrapper_Box2DUpdater {
public:
	typedef Luna< Box2DUpdater > luna_t;

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

		Box2DUpdater* self= (Box2DUpdater*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< Box2DUpdater >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_GUIEventHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//Box2DUpdater* ptr= dynamic_cast< Box2DUpdater* >(Luna< osg::Referenced >::check(L,1));
		Box2DUpdater* ptr= luna_caster< osg::Referenced, Box2DUpdater >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< Box2DUpdater >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_createBoundary(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createBoxObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,92303173) ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createDiskObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,92303173) ) return false;
		if( luatop>5 && lua_isnumber(L,6)==0 ) return false;
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
	// Box2DUpdater::Box2DUpdater()
	static Box2DUpdater* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in Box2DUpdater::Box2DUpdater() function, expected prototype:\nBox2DUpdater::Box2DUpdater()\nClass arguments details:\n");
		}


		return new Box2DUpdater();
	}


	// Function binds:
	// osg::Node * Box2DUpdater::createBoundary(float halfWidth, float halfHeight)
	static int _bind_createBoundary(lua_State *L) {
		if (!_lg_typecheck_createBoundary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * Box2DUpdater::createBoundary(float halfWidth, float halfHeight) function, expected prototype:\nosg::Node * Box2DUpdater::createBoundary(float halfWidth, float halfHeight)\nClass arguments details:\n");
		}

		float halfWidth=(float)lua_tonumber(L,2);
		float halfHeight=(float)lua_tonumber(L,3);

		Box2DUpdater* self=Luna< osg::Referenced >::checkSubType< Box2DUpdater >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * Box2DUpdater::createBoundary(float, float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Node * lret = self->createBoundary(halfWidth, halfHeight);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// osg::MatrixTransform * Box2DUpdater::createBoxObject(const osg::Vec2f & pos, const osg::Vec2f & size, float density, const osg::Vec2f & vel = osg::Vec2f (), float damping = 0.3f)
	static int _bind_createBoxObject(lua_State *L) {
		if (!_lg_typecheck_createBoxObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * Box2DUpdater::createBoxObject(const osg::Vec2f & pos, const osg::Vec2f & size, float density, const osg::Vec2f & vel = osg::Vec2f (), float damping = 0.3f) function, expected prototype:\nosg::MatrixTransform * Box2DUpdater::createBoxObject(const osg::Vec2f & pos, const osg::Vec2f & size, float density, const osg::Vec2f & vel = osg::Vec2f (), float damping = 0.3f)\nClass arguments details:\narg 1 ID = 92303173\narg 2 ID = 92303173\narg 4 ID = 92303173\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec2f* pos_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in Box2DUpdater::createBoxObject function");
		}
		const osg::Vec2f & pos=*pos_ptr;
		const osg::Vec2f* size_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in Box2DUpdater::createBoxObject function");
		}
		const osg::Vec2f & size=*size_ptr;
		float density=(float)lua_tonumber(L,4);
		const osg::Vec2f* vel_ptr=luatop>4 ? (Luna< osg::Vec2f >::check(L,5)) : NULL;
		if( luatop>4 && !vel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vel in Box2DUpdater::createBoxObject function");
		}
		const osg::Vec2f & vel=luatop>4 ? *vel_ptr : (const osg::Vec2f)osg::Vec2f ();
		float damping=luatop>5 ? (float)lua_tonumber(L,6) : (float)0.3f;

		Box2DUpdater* self=Luna< osg::Referenced >::checkSubType< Box2DUpdater >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * Box2DUpdater::createBoxObject(const osg::Vec2f &, const osg::Vec2f &, float, const osg::Vec2f &, float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::MatrixTransform * lret = self->createBoxObject(pos, size, density, vel, damping);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// osg::MatrixTransform * Box2DUpdater::createDiskObject(const osg::Vec2f & pos, float radius, float density, const osg::Vec2f & vel = osg::Vec2f (), float damping = 0.3f)
	static int _bind_createDiskObject(lua_State *L) {
		if (!_lg_typecheck_createDiskObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::MatrixTransform * Box2DUpdater::createDiskObject(const osg::Vec2f & pos, float radius, float density, const osg::Vec2f & vel = osg::Vec2f (), float damping = 0.3f) function, expected prototype:\nosg::MatrixTransform * Box2DUpdater::createDiskObject(const osg::Vec2f & pos, float radius, float density, const osg::Vec2f & vel = osg::Vec2f (), float damping = 0.3f)\nClass arguments details:\narg 1 ID = 92303173\narg 4 ID = 92303173\n");
		}

		int luatop = lua_gettop(L);

		const osg::Vec2f* pos_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in Box2DUpdater::createDiskObject function");
		}
		const osg::Vec2f & pos=*pos_ptr;
		float radius=(float)lua_tonumber(L,3);
		float density=(float)lua_tonumber(L,4);
		const osg::Vec2f* vel_ptr=luatop>4 ? (Luna< osg::Vec2f >::check(L,5)) : NULL;
		if( luatop>4 && !vel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vel in Box2DUpdater::createDiskObject function");
		}
		const osg::Vec2f & vel=luatop>4 ? *vel_ptr : (const osg::Vec2f)osg::Vec2f ();
		float damping=luatop>5 ? (float)lua_tonumber(L,6) : (float)0.3f;

		Box2DUpdater* self=Luna< osg::Referenced >::checkSubType< Box2DUpdater >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::MatrixTransform * Box2DUpdater::createDiskObject(const osg::Vec2f &, float, float, const osg::Vec2f &, float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::MatrixTransform * lret = self->createDiskObject(pos, radius, density, vel, damping);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::MatrixTransform >::push(L,lret,false);

		return 1;
	}

	// bool Box2DUpdater::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool Box2DUpdater::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool Box2DUpdater::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in Box2DUpdater::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in Box2DUpdater::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		Box2DUpdater* self=Luna< osg::Referenced >::checkSubType< Box2DUpdater >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool Box2DUpdater::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

Box2DUpdater* LunaTraits< Box2DUpdater >::_bind_ctor(lua_State *L) {
	return luna_wrapper_Box2DUpdater::_bind_ctor(L);
}

void LunaTraits< Box2DUpdater >::_bind_dtor(Box2DUpdater* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< Box2DUpdater >::className[] = "Box2DUpdater";
const char LunaTraits< Box2DUpdater >::fullName[] = "Box2DUpdater";
const char LunaTraits< Box2DUpdater >::moduleName[] = "box2d";
const char* LunaTraits< Box2DUpdater >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< Box2DUpdater >::hash = 88812676;
const int LunaTraits< Box2DUpdater >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< Box2DUpdater >::methods[] = {
	{"createBoundary", &luna_wrapper_Box2DUpdater::_bind_createBoundary},
	{"createBoxObject", &luna_wrapper_Box2DUpdater::_bind_createBoxObject},
	{"createDiskObject", &luna_wrapper_Box2DUpdater::_bind_createDiskObject},
	{"handle", &luna_wrapper_Box2DUpdater::_bind_handle},
	{"__eq", &luna_wrapper_Box2DUpdater::_bind___eq},
	{"fromVoid", &luna_wrapper_Box2DUpdater::_bind_fromVoid},
	{"asVoid", &luna_wrapper_Box2DUpdater::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< Box2DUpdater >::converters[] = {
	{"osgGA::GUIEventHandler", &luna_wrapper_Box2DUpdater::_cast_from_GUIEventHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< Box2DUpdater >::enumValues[] = {
	{0,0}
};


