#ifndef _WRAPPERS_WRAPPER_SPARKUPDATINGHANDLER_H_
#define _WRAPPERS_WRAPPER_SPARKUPDATINGHANDLER_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <SparkUpdatingHandler.h>

class wrapper_SparkUpdatingHandler : public SparkUpdatingHandler, public luna_wrapper_base {

public:
		

	~wrapper_SparkUpdatingHandler() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SparkUpdatingHandler(lua_State* L, lua_Table* dum) : SparkUpdatingHandler(), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool SparkUpdatingHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa)
	bool handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa) {
		if(_obj.pushFunction("handle")) {
			_obj.pushArg(&ea);
			_obj.pushArg(&aa);
			return (_obj.callFunction<bool>());
		}

		return SparkUpdatingHandler::handle(ea, aa);
	};


	// Protected non-virtual methods:
	// osg::Matrix SparkUpdatingHandler::computeTransformMatrix(SparkDrawable * spark, osg::Transform * trackee)
	osg::Matrix public_computeTransformMatrix(SparkDrawable * spark, osg::Transform * trackee) {
		return SparkUpdatingHandler::computeTransformMatrix(spark, trackee);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_computeTransformMatrix(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// osg::Matrix SparkUpdatingHandler::public_computeTransformMatrix(SparkDrawable * spark, osg::Transform * trackee)
	static int _bind_public_computeTransformMatrix(lua_State *L) {
		if (!_lg_typecheck_public_computeTransformMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrix SparkUpdatingHandler::public_computeTransformMatrix(SparkDrawable * spark, osg::Transform * trackee) function, expected prototype:\nosg::Matrix SparkUpdatingHandler::public_computeTransformMatrix(SparkDrawable * spark, osg::Transform * trackee)\nClass arguments details:\narg 1 ID = 20484188\n");
		}

		SparkDrawable* spark=(Luna< osg::Referenced >::checkSubType< SparkDrawable >(L,2));
		osg::Transform* trackee=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,3));

		wrapper_SparkUpdatingHandler* self=Luna< osg::Referenced >::checkSubType< wrapper_SparkUpdatingHandler >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrix SparkUpdatingHandler::public_computeTransformMatrix(SparkDrawable *, osg::Transform *)");
		}
		osg::Matrix lret = self->public_computeTransformMatrix(spark, trackee);
		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'osg::Matrix'
		////////////////////////////////////////////////////////////////////

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_computeTransformMatrix",_bind_public_computeTransformMatrix},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

