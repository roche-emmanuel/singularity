#include <plug_common.h>

#include <luna/wrappers/wrapper_KinectDataDrawer.h>

class luna_wrapper_KinectDataDrawer {
public:
	typedef Luna< KinectDataDrawer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		KinectDataDrawer* self= (KinectDataDrawer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< KinectDataDrawer >::push(L,self,false);
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
		//KinectDataDrawer* ptr= dynamic_cast< KinectDataDrawer* >(Luna< osg::Referenced >::check(L,1));
		KinectDataDrawer* ptr= luna_caster< osg::Referenced, KinectDataDrawer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< KinectDataDrawer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_handleCurrentData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSkeleton(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_initialize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_quit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_handleJoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47569100) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_handleImages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23034412) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_handleCurrentData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// KinectDataDrawer::KinectDataDrawer()
	static KinectDataDrawer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in KinectDataDrawer::KinectDataDrawer() function, expected prototype:\nKinectDataDrawer::KinectDataDrawer()\nClass arguments details:\n");
		}


		return new KinectDataDrawer();
	}

	// KinectDataDrawer::KinectDataDrawer(lua_Table * data)
	static KinectDataDrawer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in KinectDataDrawer::KinectDataDrawer(lua_Table * data) function, expected prototype:\nKinectDataDrawer::KinectDataDrawer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_KinectDataDrawer(L,NULL);
	}

	// Overload binder for KinectDataDrawer::KinectDataDrawer
	static KinectDataDrawer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function KinectDataDrawer, cannot match any of the overloads for function KinectDataDrawer:\n  KinectDataDrawer()\n  KinectDataDrawer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void KinectDataDrawer::handleCurrentData()
	static int _bind_handleCurrentData(lua_State *L) {
		if (!_lg_typecheck_handleCurrentData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void KinectDataDrawer::handleCurrentData() function, expected prototype:\nvoid KinectDataDrawer::handleCurrentData()\nClass arguments details:\n");
		}


		KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void KinectDataDrawer::handleCurrentData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->handleCurrentData();

		return 0;
	}

	// osg::Image * KinectDataDrawer::getImage()
	static int _bind_getImage(lua_State *L) {
		if (!_lg_typecheck_getImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * KinectDataDrawer::getImage() function, expected prototype:\nosg::Image * KinectDataDrawer::getImage()\nClass arguments details:\n");
		}


		KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * KinectDataDrawer::getImage(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Image * lret = self->getImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * KinectDataDrawer::getSkeleton()
	static int _bind_getSkeleton(lua_State *L) {
		if (!_lg_typecheck_getSkeleton(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry * KinectDataDrawer::getSkeleton() function, expected prototype:\nosg::Geometry * KinectDataDrawer::getSkeleton()\nClass arguments details:\n");
		}


		KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geometry * KinectDataDrawer::getSkeleton(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Geometry * lret = self->getSkeleton();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// bool KinectDataDrawer::base_initialize(int kid)
	static int _bind_base_initialize(lua_State *L) {
		if (!_lg_typecheck_base_initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectDataDrawer::base_initialize(int kid) function, expected prototype:\nbool KinectDataDrawer::base_initialize(int kid)\nClass arguments details:\n");
		}

		int kid=(int)lua_tointeger(L,2);

		KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectDataDrawer::base_initialize(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectDataDrawer::initialize(kid);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectDataDrawer::base_quit()
	static int _bind_base_quit(lua_State *L) {
		if (!_lg_typecheck_base_quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectDataDrawer::base_quit() function, expected prototype:\nbool KinectDataDrawer::base_quit()\nClass arguments details:\n");
		}


		KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectDataDrawer::base_quit(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectDataDrawer::quit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectDataDrawer::base_handleJoints(NUI_SKELETON_DATA & skeletonData)
	static int _bind_base_handleJoints(lua_State *L) {
		if (!_lg_typecheck_base_handleJoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectDataDrawer::base_handleJoints(NUI_SKELETON_DATA & skeletonData) function, expected prototype:\nbool KinectDataDrawer::base_handleJoints(NUI_SKELETON_DATA & skeletonData)\nClass arguments details:\narg 1 ID = 47569100\n");
		}

		NUI_SKELETON_DATA* skeletonData_ptr=(Luna< NUI_SKELETON_DATA >::check(L,2));
		if( !skeletonData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg skeletonData in KinectDataDrawer::base_handleJoints function");
		}
		NUI_SKELETON_DATA & skeletonData=*skeletonData_ptr;

		KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectDataDrawer::base_handleJoints(NUI_SKELETON_DATA &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectDataDrawer::handleJoints(skeletonData);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectDataDrawer::base_handleImages(NUI_IMAGE_FRAME & imageFrame)
	static int _bind_base_handleImages(lua_State *L) {
		if (!_lg_typecheck_base_handleImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectDataDrawer::base_handleImages(NUI_IMAGE_FRAME & imageFrame) function, expected prototype:\nbool KinectDataDrawer::base_handleImages(NUI_IMAGE_FRAME & imageFrame)\nClass arguments details:\narg 1 ID = 23034412\n");
		}

		NUI_IMAGE_FRAME* imageFrame_ptr=(Luna< NUI_IMAGE_FRAME >::check(L,2));
		if( !imageFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg imageFrame in KinectDataDrawer::base_handleImages function");
		}
		NUI_IMAGE_FRAME & imageFrame=*imageFrame_ptr;

		KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectDataDrawer::base_handleImages(NUI_IMAGE_FRAME &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectDataDrawer::handleImages(imageFrame);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectDataDrawer::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectDataDrawer::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool KinectDataDrawer::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in KinectDataDrawer::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in KinectDataDrawer::base_handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectDataDrawer::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectDataDrawer::handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void KinectDataDrawer::base_handleCurrentData()
	static int _bind_base_handleCurrentData(lua_State *L) {
		if (!_lg_typecheck_base_handleCurrentData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void KinectDataDrawer::base_handleCurrentData() function, expected prototype:\nvoid KinectDataDrawer::base_handleCurrentData()\nClass arguments details:\n");
		}


		KinectDataDrawer* self=Luna< osg::Referenced >::checkSubType< KinectDataDrawer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void KinectDataDrawer::base_handleCurrentData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->KinectDataDrawer::handleCurrentData();

		return 0;
	}


	// Operator binds:

};

KinectDataDrawer* LunaTraits< KinectDataDrawer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_KinectDataDrawer::_bind_ctor(L);
}

void LunaTraits< KinectDataDrawer >::_bind_dtor(KinectDataDrawer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< KinectDataDrawer >::className[] = "KinectDataDrawer";
const char LunaTraits< KinectDataDrawer >::fullName[] = "KinectDataDrawer";
const char LunaTraits< KinectDataDrawer >::moduleName[] = "kinect";
const char* LunaTraits< KinectDataDrawer >::parents[] = {"kinect.KinectHandler", 0};
const int LunaTraits< KinectDataDrawer >::hash = 39122577;
const int LunaTraits< KinectDataDrawer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< KinectDataDrawer >::methods[] = {
	{"handleCurrentData", &luna_wrapper_KinectDataDrawer::_bind_handleCurrentData},
	{"getImage", &luna_wrapper_KinectDataDrawer::_bind_getImage},
	{"getSkeleton", &luna_wrapper_KinectDataDrawer::_bind_getSkeleton},
	{"base_initialize", &luna_wrapper_KinectDataDrawer::_bind_base_initialize},
	{"base_quit", &luna_wrapper_KinectDataDrawer::_bind_base_quit},
	{"base_handleJoints", &luna_wrapper_KinectDataDrawer::_bind_base_handleJoints},
	{"base_handleImages", &luna_wrapper_KinectDataDrawer::_bind_base_handleImages},
	{"base_handle", &luna_wrapper_KinectDataDrawer::_bind_base_handle},
	{"base_handleCurrentData", &luna_wrapper_KinectDataDrawer::_bind_base_handleCurrentData},
	{"fromVoid", &luna_wrapper_KinectDataDrawer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_KinectDataDrawer::_bind_asVoid},
	{"getTable", &luna_wrapper_KinectDataDrawer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< KinectDataDrawer >::converters[] = {
	{"osgGA::GUIEventHandler", &luna_wrapper_KinectDataDrawer::_cast_from_GUIEventHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< KinectDataDrawer >::enumValues[] = {
	{0,0}
};


