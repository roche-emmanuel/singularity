#include <plug_common.h>

class luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile {
public:
	typedef Luna< osgViewer::ScreenCaptureHandler::WriteToFile > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgViewer::ScreenCaptureHandler::WriteToFile* ptr= dynamic_cast< osgViewer::ScreenCaptureHandler::WriteToFile* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::ScreenCaptureHandler::WriteToFile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setSavePolicy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSavePolicy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Constructor binds:
	// osgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile(const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER)
	static osgViewer::ScreenCaptureHandler::WriteToFile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile(const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER) function, expected prototype:\nosgViewer::ScreenCaptureHandler::WriteToFile::WriteToFile(const std::string & filename, const std::string & extension, osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy = osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,1),lua_objlen(L,1));
		std::string extension(lua_tostring(L,2),lua_objlen(L,2));
		osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy=luatop>2 ? (osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)lua_tointeger(L,3) : osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER;

		return new osgViewer::ScreenCaptureHandler::WriteToFile(filename, extension, savePolicy);
	}


	// Function binds:
	// void osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy)
	static int _bind_setSavePolicy(lua_State *L) {
		if (!_lg_typecheck_setSavePolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy)\nClass arguments details:\n");
		}

		osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy savePolicy=(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)lua_tointeger(L,2);

		osgViewer::ScreenCaptureHandler::WriteToFile* self=dynamic_cast< osgViewer::ScreenCaptureHandler::WriteToFile* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::WriteToFile::setSavePolicy(osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy)");
		}
		self->setSavePolicy(savePolicy);

		return 0;
	}

	// osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy() const
	static int _bind_getSavePolicy(lua_State *L) {
		if (!_lg_typecheck_getSavePolicy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy() const function, expected prototype:\nosgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy() const\nClass arguments details:\n");
		}


		osgViewer::ScreenCaptureHandler::WriteToFile* self=dynamic_cast< osgViewer::ScreenCaptureHandler::WriteToFile* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy osgViewer::ScreenCaptureHandler::WriteToFile::getSavePolicy() const");
		}
		osgViewer::ScreenCaptureHandler::WriteToFile::SavePolicy lret = self->getSavePolicy();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// void osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image & image, const unsigned int context_id)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image & image, const unsigned int context_id) function, expected prototype:\nvoid osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image & image, const unsigned int context_id)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* image_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in osgViewer::ScreenCaptureHandler::WriteToFile::operator() function");
		}
		const osg::Image & image=*image_ptr;
		unsigned int context_id=(unsigned int)lua_tointeger(L,3);

		osgViewer::ScreenCaptureHandler::WriteToFile* self=dynamic_cast< osgViewer::ScreenCaptureHandler::WriteToFile* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgViewer::ScreenCaptureHandler::WriteToFile::operator()(const osg::Image &, const unsigned int)");
		}
		self->operator()(image, context_id);

		return 0;
	}


};

osgViewer::ScreenCaptureHandler::WriteToFile* LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_ctor(L);
}

void LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::_bind_dtor(osgViewer::ScreenCaptureHandler::WriteToFile* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::className[] = "WriteToFile";
const char LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::fullName[] = "osgViewer::ScreenCaptureHandler::WriteToFile";
const char LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::parents[] = {"osgViewer.CaptureOperation", 0};
const int LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::hash = 53456537;
const int LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::methods[] = {
	{"setSavePolicy", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_setSavePolicy},
	{"getSavePolicy", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_getSavePolicy},
	{"op_call", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_bind_op_call},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_ScreenCaptureHandler_WriteToFile::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::ScreenCaptureHandler::WriteToFile >::enumValues[] = {
	{"OVERWRITE", osgViewer::ScreenCaptureHandler::WriteToFile::OVERWRITE},
	{"SEQUENTIAL_NUMBER", osgViewer::ScreenCaptureHandler::WriteToFile::SEQUENTIAL_NUMBER},
	{0,0}
};


