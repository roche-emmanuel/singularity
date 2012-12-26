#ifndef _WRAPPERS_WRAPPER_OSG_VEC_ARRAY_H_
#define _WRAPPERS_WRAPPER_OSG_VEC_ARRAY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"



class wrapper_osg_Vec3Array : public osg::Vec3Array, public luna_wrapper_base {

public:
		

	~wrapper_osg_Vec3Array() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Vec3Array(lua_State* L, lua_Table* dum) : osg::Vec3Array(), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Vec3Array::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Vec3Array::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Vec3Array::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Vec3Array::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Vec3Array::getUserData();
	};

	// void osg::BufferData::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Vec3Array::releaseGLObjects(state);
	};

	// bool osg::Array::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Vec3Array::isSameKindAs(obj);
	};

	// const char * osg::Array::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Vec3Array::libraryName();
	};

	// const char * osg::Array::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Vec3Array::className();
	};

	// void osg::Array::trim()
	void trim() {
		if(_obj.pushFunction("trim")) {
			return (_obj.callFunction<void>());
		}

		return Vec3Array::trim();
	};

	// void osg::Vec3Array::accept(osg::ArrayVisitor & arg1)
	void accept(osg::ArrayVisitor & arg1) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return Vec3Array::accept(arg1);
	};

	// void osg::Vec3Array::accept(osg::ConstArrayVisitor & arg1) const
	void accept(osg::ConstArrayVisitor & arg1) const {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return Vec3Array::accept(arg1);
	};

	// void osg::Vec3Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	void accept(unsigned int index, osg::ValueVisitor & arg2) {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(index);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return Vec3Array::accept(index, arg2);
	};

	// void osg::Vec3Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	void accept(unsigned int index, osg::ConstValueVisitor & arg2) const {
		if(_obj.pushFunction("accept")) {
			_obj.pushArg(index);
			_obj.pushArg(&arg2);
			return (_obj.callFunction<void>());
		}

		return Vec3Array::accept(index, arg2);
	};

	// int osg::Vec3Array::compare(unsigned int lhs, unsigned int rhs) const
	int compare(unsigned int lhs, unsigned int rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(lhs);
			_obj.pushArg(rhs);
			return (_obj.callFunction<int>());
		}

		return Vec3Array::compare(lhs, rhs);
	};

	// const void * osg::Vec3Array::getDataPointer() const
	const void * getDataPointer() const {
		if(_obj.pushFunction("getDataPointer")) {
			return (_obj.callFunction<void*>());
		}

		return Vec3Array::getDataPointer();
	};

	// unsigned int osg::Vec3Array::getTotalDataSize() const
	unsigned int getTotalDataSize() const {
		if(_obj.pushFunction("getTotalDataSize")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Vec3Array::getTotalDataSize();
	};

	// unsigned int osg::Vec3Array::getNumElements() const
	unsigned int getNumElements() const {
		if(_obj.pushFunction("getNumElements")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Vec3Array::getNumElements();
	};

	// osg::Object * osg::Vec3Array::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Vec3Array::cloneType();
	};

	// osg::Object * osg::Vec3Array::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Vec3Array::clone(arg1);
	};



	// Protected virtual methods:

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

		wrapper_osg_Vec3Array* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Vec3Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const");
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


		wrapper_osg_Vec3Array* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Vec3Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

