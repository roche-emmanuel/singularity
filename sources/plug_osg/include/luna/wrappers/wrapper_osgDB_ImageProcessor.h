#ifndef _WRAPPERS_WRAPPER_OSGDB_IMAGEPROCESSOR_H_
#define _WRAPPERS_WRAPPER_OSGDB_IMAGEPROCESSOR_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/ImageProcessor>

class wrapper_osgDB_ImageProcessor : public osgDB::ImageProcessor, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_ImageProcessor() {
		logDEBUG3("Calling delete function for wrapper osgDB_ImageProcessor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::ImageProcessor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_ImageProcessor(lua_State* L, lua_Table* dum) 
		: osgDB::ImageProcessor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osgDB_ImageProcessor(lua_State* L, lua_Table* dum, const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osgDB::ImageProcessor(rw, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ImageProcessor::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return ImageProcessor::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::releaseGLObjects(arg1);
	};

	// osg::Object * osgDB::ImageProcessor::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return ImageProcessor::cloneType();
	};

	// osg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return ImageProcessor::clone(arg1);
	};

	// bool osgDB::ImageProcessor::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return ImageProcessor::isSameKindAs(obj);
	};

	// const char * osgDB::ImageProcessor::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			return (_obj.callFunction<const char*>());
		}

		return ImageProcessor::libraryName();
	};

	// const char * osgDB::ImageProcessor::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			return (_obj.callFunction<const char*>());
		}

		return ImageProcessor::className();
	};

	// void osgDB::ImageProcessor::compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6)
	void compress(osg::Image & arg1, osg::Texture::InternalFormatMode arg2, bool arg3, bool arg4, osgDB::ImageProcessor::CompressionMethod arg5, osgDB::ImageProcessor::CompressionQuality arg6) {
		if(_obj.pushFunction("compress")) {
			_obj.pushArg((osgDB::ImageProcessor*)this);
			_obj.pushArg(&arg1);
			_obj.pushArg(arg2);
			_obj.pushArg(arg3);
			_obj.pushArg(arg4);
			_obj.pushArg(arg5);
			_obj.pushArg(arg6);
			return (_obj.callFunction<void>());
		}

		return ImageProcessor::compress(arg1, arg2, arg3, arg4, arg5, arg6);
	};


	// Protected non-virtual methods:
	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osgDB_ImageProcessor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_ImageProcessor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osgDB_ImageProcessor* self=Luna< osg::Referenced >::checkSubType< wrapper_osgDB_ImageProcessor >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

