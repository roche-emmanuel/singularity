#include <plug_common.h>

class luna_wrapper_osg_NodeVisitor_ImageRequestHandler {
public:
	typedef Luna< osg::NodeVisitor::ImageRequestHandler > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::NodeVisitor::ImageRequestHandler* ptr= dynamic_cast< osg::NodeVisitor::ImageRequestHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NodeVisitor::ImageRequestHandler >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_getPreLoadTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readImageFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_requestImageFile(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// double osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const
	static int _bind_getPreLoadTime(lua_State *L) {
		if (!_lg_typecheck_getPreLoadTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const function, expected prototype:\ndouble osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const\nClass arguments details:\n");
		}


		osg::NodeVisitor::ImageRequestHandler* self=dynamic_cast< osg::NodeVisitor::ImageRequestHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const");
		}
		double lret = self->getPreLoadTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string & fileName)
	static int _bind_readImageFile(lua_State *L) {
		if (!_lg_typecheck_readImageFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string & fileName) function, expected prototype:\nosg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string & fileName)\nClass arguments details:\n");
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));

		osg::NodeVisitor::ImageRequestHandler* self=dynamic_cast< osg::NodeVisitor::ImageRequestHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string &)");
		}
		osg::Image * lret = self->readImageFile(fileName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// void osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp)
	static int _bind_requestImageFile(lua_State *L) {
		if (!_lg_typecheck_requestImageFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp) function, expected prototype:\nvoid osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp)\nClass arguments details:\narg 2 ID = 50169651\narg 5 ID = 50169651\n");
		}

		std::string fileName(lua_tostring(L,2),lua_objlen(L,2));
		osg::Object* attachmentPoint=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,3));
		int attachmentIndex=(int)lua_tointeger(L,4);
		double timeToMergeBy=(double)lua_tonumber(L,5);
		const osg::FrameStamp* framestamp=dynamic_cast< osg::FrameStamp* >(Luna< osg::Referenced >::check(L,6));

		osg::NodeVisitor::ImageRequestHandler* self=dynamic_cast< osg::NodeVisitor::ImageRequestHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string &, osg::Object *, int, double, const osg::FrameStamp *)");
		}
		self->requestImageFile(fileName, attachmentPoint, attachmentIndex, timeToMergeBy, framestamp);

		return 0;
	}


	// Operator binds:

};

osg::NodeVisitor::ImageRequestHandler* LunaTraits< osg::NodeVisitor::ImageRequestHandler >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// double osg::NodeVisitor::ImageRequestHandler::getPreLoadTime() const
	// osg::Image * osg::NodeVisitor::ImageRequestHandler::readImageFile(const std::string & fileName)
	// void osg::NodeVisitor::ImageRequestHandler::requestImageFile(const std::string & fileName, osg::Object * attachmentPoint, int attachmentIndex, double timeToMergeBy, const osg::FrameStamp * framestamp)

	// Abstract operators:
}

void LunaTraits< osg::NodeVisitor::ImageRequestHandler >::_bind_dtor(osg::NodeVisitor::ImageRequestHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NodeVisitor::ImageRequestHandler >::className[] = "ImageRequestHandler";
const char LunaTraits< osg::NodeVisitor::ImageRequestHandler >::fullName[] = "osg::NodeVisitor::ImageRequestHandler";
const char LunaTraits< osg::NodeVisitor::ImageRequestHandler >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeVisitor::ImageRequestHandler >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::NodeVisitor::ImageRequestHandler >::hash = 29567712;
const int LunaTraits< osg::NodeVisitor::ImageRequestHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NodeVisitor::ImageRequestHandler >::methods[] = {
	{"getPreLoadTime", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_getPreLoadTime},
	{"readImageFile", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_readImageFile},
	{"requestImageFile", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_bind_requestImageFile},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeVisitor::ImageRequestHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NodeVisitor_ImageRequestHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeVisitor::ImageRequestHandler >::enumValues[] = {
	{0,0}
};

