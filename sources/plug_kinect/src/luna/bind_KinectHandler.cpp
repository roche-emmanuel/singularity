#include <plug_common.h>

#include <luna/wrappers/wrapper_KinectHandler.h>

class luna_wrapper_KinectHandler {
public:
	typedef Luna< KinectHandler > luna_t;

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

		KinectHandler* self= (KinectHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< KinectHandler >::push(L,self,false);
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
		//KinectHandler* ptr= dynamic_cast< KinectHandler* >(Luna< osg::Referenced >::check(L,1));
		KinectHandler* ptr= luna_caster< osg::Referenced, KinectHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< KinectHandler >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_initialize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_quit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_handleJoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47569100) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handleImages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23034412) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handleCurrentData(lua_State *L) {
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
	// KinectHandler::KinectHandler()
	static KinectHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in KinectHandler::KinectHandler() function, expected prototype:\nKinectHandler::KinectHandler()\nClass arguments details:\n");
		}


		return new KinectHandler();
	}

	// KinectHandler::KinectHandler(lua_Table * data)
	static KinectHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in KinectHandler::KinectHandler(lua_Table * data) function, expected prototype:\nKinectHandler::KinectHandler(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_KinectHandler(L,NULL);
	}

	// Overload binder for KinectHandler::KinectHandler
	static KinectHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function KinectHandler, cannot match any of the overloads for function KinectHandler:\n  KinectHandler()\n  KinectHandler(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool KinectHandler::initialize(int kid)
	static int _bind_initialize(lua_State *L) {
		if (!_lg_typecheck_initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::initialize(int kid) function, expected prototype:\nbool KinectHandler::initialize(int kid)\nClass arguments details:\n");
		}

		int kid=(int)lua_tointeger(L,2);

		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::initialize(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->initialize(kid);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectHandler::quit()
	static int _bind_quit(lua_State *L) {
		if (!_lg_typecheck_quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::quit() function, expected prototype:\nbool KinectHandler::quit()\nClass arguments details:\n");
		}


		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::quit(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->quit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectHandler::handleJoints(NUI_SKELETON_DATA & skeletonData)
	static int _bind_handleJoints(lua_State *L) {
		if (!_lg_typecheck_handleJoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::handleJoints(NUI_SKELETON_DATA & skeletonData) function, expected prototype:\nbool KinectHandler::handleJoints(NUI_SKELETON_DATA & skeletonData)\nClass arguments details:\narg 1 ID = 47569100\n");
		}

		NUI_SKELETON_DATA* skeletonData_ptr=(Luna< NUI_SKELETON_DATA >::check(L,2));
		if( !skeletonData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg skeletonData in KinectHandler::handleJoints function");
		}
		NUI_SKELETON_DATA & skeletonData=*skeletonData_ptr;

		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::handleJoints(NUI_SKELETON_DATA &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->handleJoints(skeletonData);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectHandler::handleImages(NUI_IMAGE_FRAME & imageFrame)
	static int _bind_handleImages(lua_State *L) {
		if (!_lg_typecheck_handleImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::handleImages(NUI_IMAGE_FRAME & imageFrame) function, expected prototype:\nbool KinectHandler::handleImages(NUI_IMAGE_FRAME & imageFrame)\nClass arguments details:\narg 1 ID = 23034412\n");
		}

		NUI_IMAGE_FRAME* imageFrame_ptr=(Luna< NUI_IMAGE_FRAME >::check(L,2));
		if( !imageFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg imageFrame in KinectHandler::handleImages function");
		}
		NUI_IMAGE_FRAME & imageFrame=*imageFrame_ptr;

		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::handleImages(NUI_IMAGE_FRAME &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->handleImages(imageFrame);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool KinectHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in KinectHandler::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in KinectHandler::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void KinectHandler::handleCurrentData()
	static int _bind_handleCurrentData(lua_State *L) {
		if (!_lg_typecheck_handleCurrentData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void KinectHandler::handleCurrentData() function, expected prototype:\nvoid KinectHandler::handleCurrentData()\nClass arguments details:\n");
		}


		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void KinectHandler::handleCurrentData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->handleCurrentData();

		return 0;
	}

	// bool KinectHandler::base_initialize(int kid)
	static int _bind_base_initialize(lua_State *L) {
		if (!_lg_typecheck_base_initialize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::base_initialize(int kid) function, expected prototype:\nbool KinectHandler::base_initialize(int kid)\nClass arguments details:\n");
		}

		int kid=(int)lua_tointeger(L,2);

		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::base_initialize(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectHandler::initialize(kid);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectHandler::base_quit()
	static int _bind_base_quit(lua_State *L) {
		if (!_lg_typecheck_base_quit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::base_quit() function, expected prototype:\nbool KinectHandler::base_quit()\nClass arguments details:\n");
		}


		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::base_quit(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectHandler::quit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectHandler::base_handleJoints(NUI_SKELETON_DATA & skeletonData)
	static int _bind_base_handleJoints(lua_State *L) {
		if (!_lg_typecheck_base_handleJoints(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::base_handleJoints(NUI_SKELETON_DATA & skeletonData) function, expected prototype:\nbool KinectHandler::base_handleJoints(NUI_SKELETON_DATA & skeletonData)\nClass arguments details:\narg 1 ID = 47569100\n");
		}

		NUI_SKELETON_DATA* skeletonData_ptr=(Luna< NUI_SKELETON_DATA >::check(L,2));
		if( !skeletonData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg skeletonData in KinectHandler::base_handleJoints function");
		}
		NUI_SKELETON_DATA & skeletonData=*skeletonData_ptr;

		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::base_handleJoints(NUI_SKELETON_DATA &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectHandler::handleJoints(skeletonData);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectHandler::base_handleImages(NUI_IMAGE_FRAME & imageFrame)
	static int _bind_base_handleImages(lua_State *L) {
		if (!_lg_typecheck_base_handleImages(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::base_handleImages(NUI_IMAGE_FRAME & imageFrame) function, expected prototype:\nbool KinectHandler::base_handleImages(NUI_IMAGE_FRAME & imageFrame)\nClass arguments details:\narg 1 ID = 23034412\n");
		}

		NUI_IMAGE_FRAME* imageFrame_ptr=(Luna< NUI_IMAGE_FRAME >::check(L,2));
		if( !imageFrame_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg imageFrame in KinectHandler::base_handleImages function");
		}
		NUI_IMAGE_FRAME & imageFrame=*imageFrame_ptr;

		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::base_handleImages(NUI_IMAGE_FRAME &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectHandler::handleImages(imageFrame);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool KinectHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	static int _bind_base_handle(lua_State *L) {
		if (!_lg_typecheck_base_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool KinectHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) function, expected prototype:\nbool KinectHandler::base_handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)\nClass arguments details:\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=(Luna< osg::Referenced >::checkSubType< osgGA::GUIEventAdapter >(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in KinectHandler::base_handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in KinectHandler::base_handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;

		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool KinectHandler::base_handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->KinectHandler::handle(ea, aa);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void KinectHandler::base_handleCurrentData()
	static int _bind_base_handleCurrentData(lua_State *L) {
		if (!_lg_typecheck_base_handleCurrentData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void KinectHandler::base_handleCurrentData() function, expected prototype:\nvoid KinectHandler::base_handleCurrentData()\nClass arguments details:\n");
		}


		KinectHandler* self=Luna< osg::Referenced >::checkSubType< KinectHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void KinectHandler::base_handleCurrentData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->KinectHandler::handleCurrentData();

		return 0;
	}


	// Operator binds:

};

KinectHandler* LunaTraits< KinectHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_KinectHandler::_bind_ctor(L);
}

void LunaTraits< KinectHandler >::_bind_dtor(KinectHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< KinectHandler >::className[] = "KinectHandler";
const char LunaTraits< KinectHandler >::fullName[] = "KinectHandler";
const char LunaTraits< KinectHandler >::moduleName[] = "kinect";
const char* LunaTraits< KinectHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< KinectHandler >::hash = 43554615;
const int LunaTraits< KinectHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< KinectHandler >::methods[] = {
	{"initialize", &luna_wrapper_KinectHandler::_bind_initialize},
	{"quit", &luna_wrapper_KinectHandler::_bind_quit},
	{"handleJoints", &luna_wrapper_KinectHandler::_bind_handleJoints},
	{"handleImages", &luna_wrapper_KinectHandler::_bind_handleImages},
	{"handle", &luna_wrapper_KinectHandler::_bind_handle},
	{"handleCurrentData", &luna_wrapper_KinectHandler::_bind_handleCurrentData},
	{"base_initialize", &luna_wrapper_KinectHandler::_bind_base_initialize},
	{"base_quit", &luna_wrapper_KinectHandler::_bind_base_quit},
	{"base_handleJoints", &luna_wrapper_KinectHandler::_bind_base_handleJoints},
	{"base_handleImages", &luna_wrapper_KinectHandler::_bind_base_handleImages},
	{"base_handle", &luna_wrapper_KinectHandler::_bind_base_handle},
	{"base_handleCurrentData", &luna_wrapper_KinectHandler::_bind_base_handleCurrentData},
	{"__eq", &luna_wrapper_KinectHandler::_bind___eq},
	{"fromVoid", &luna_wrapper_KinectHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_KinectHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_KinectHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< KinectHandler >::converters[] = {
	{"osgGA::GUIEventHandler", &luna_wrapper_KinectHandler::_cast_from_GUIEventHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< KinectHandler >::enumValues[] = {
	{0,0}
};


