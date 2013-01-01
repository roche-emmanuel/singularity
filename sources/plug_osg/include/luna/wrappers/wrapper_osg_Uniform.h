#ifndef _WRAPPERS_WRAPPER_OSG_UNIFORM_H_
#define _WRAPPERS_WRAPPER_OSG_UNIFORM_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Uniform>

class wrapper_osg_Uniform : public osg::Uniform, public luna_wrapper_base {

public:
		

	~wrapper_osg_Uniform() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum) : osg::Uniform(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, osg::Uniform::Type type, const std::string & name, int numElements = 1) : osg::Uniform(type, name, numElements), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const osg::Uniform & rhs, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Uniform(rhs, copyop), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, float f) : osg::Uniform(name, f), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, int i) : osg::Uniform(name, i), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, unsigned int i) : osg::Uniform(name, i), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, bool b) : osg::Uniform(name, b), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Vec2f & v2) : osg::Uniform(name, v2), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Vec3f & v3) : osg::Uniform(name, v3), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Vec4f & v4) : osg::Uniform(name, v4), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Matrix2 & m2) : osg::Uniform(name, m2), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Matrix3 & m3) : osg::Uniform(name, m3), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Matrixf & m4) : osg::Uniform(name, m4), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, const osg::Matrixd & m4) : osg::Uniform(name, m4), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, int i0, int i1) : osg::Uniform(name, i0, i1), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, int i0, int i1, int i2) : osg::Uniform(name, i0, i1, i2), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, int i0, int i1, int i2, int i3) : osg::Uniform(name, i0, i1, i2, i3), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, unsigned int i0, unsigned int i1) : osg::Uniform(name, i0, i1), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, unsigned int i0, unsigned int i1, unsigned int i2) : osg::Uniform(name, i0, i1, i2), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, unsigned int i0, unsigned int i1, unsigned int i2, unsigned int i3) : osg::Uniform(name, i0, i1, i2, i3), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, bool b0, bool b1) : osg::Uniform(name, b0, b1), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, bool b0, bool b1, bool b2) : osg::Uniform(name, b0, b1, b2), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Uniform(lua_State* L, lua_Table* dum, const char * name, bool b0, bool b1, bool b2, bool b3) : osg::Uniform(name, b0, b1, b2, b3), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Uniform::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Uniform::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Uniform::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Uniform::getUserData();
	};

	// void osg::Object::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Uniform::releaseGLObjects(arg1);
	};

	// osg::Object * osg::Uniform::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Uniform::cloneType();
	};

	// osg::Object * osg::Uniform::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Uniform::clone(arg1);
	};

	// bool osg::Uniform::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Uniform::isSameKindAs(obj);
	};

	// const char * osg::Uniform::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Uniform::libraryName();
	};

	// const char * osg::Uniform::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Uniform::className();
	};

	// void osg::Uniform::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Uniform::setName(name);
	};

	// int osg::Uniform::compare(const osg::Uniform & rhs) const
	int compare(const osg::Uniform & rhs) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return Uniform::compare(rhs);
	};

	// int osg::Uniform::compareData(const osg::Uniform & rhs) const
	int compareData(const osg::Uniform & rhs) const {
		if(_obj.pushFunction("compareData")) {
			_obj.pushArg(&rhs);
			return (_obj.callFunction<int>());
		}

		return Uniform::compareData(rhs);
	};


	// Protected non-virtual methods:
	// bool osg::Uniform::isCompatibleType(osg::Uniform::Type t) const
	bool public_isCompatibleType(osg::Uniform::Type t) const {
		return osg::Uniform::isCompatibleType(t);
	};

	// bool osg::Uniform::isScalar() const
	bool public_isScalar() const {
		return osg::Uniform::isScalar();
	};

	// void osg::Uniform::allocateDataArray()
	void public_allocateDataArray() {
		return osg::Uniform::allocateDataArray();
	};

	// void osg::Uniform::addParent(osg::StateSet * object)
	void public_addParent(osg::StateSet * object) {
		return osg::Uniform::addParent(object);
	};

	// void osg::Uniform::removeParent(osg::StateSet * object)
	void public_removeParent(osg::StateSet * object) {
		return osg::Uniform::removeParent(object);
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_isCompatibleType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_isScalar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_allocateDataArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_addParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

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
	// bool osg::Uniform::public_isCompatibleType(osg::Uniform::Type t) const
	static int _bind_public_isCompatibleType(lua_State *L) {
		if (!_lg_typecheck_public_isCompatibleType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::public_isCompatibleType(osg::Uniform::Type t) const function, expected prototype:\nbool osg::Uniform::public_isCompatibleType(osg::Uniform::Type t) const\nClass arguments details:\n");
		}

		osg::Uniform::Type t=(osg::Uniform::Type)lua_tointeger(L,2);

		wrapper_osg_Uniform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Uniform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Uniform::public_isCompatibleType(osg::Uniform::Type) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->public_isCompatibleType(t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Uniform::public_isScalar() const
	static int _bind_public_isScalar(lua_State *L) {
		if (!_lg_typecheck_public_isScalar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Uniform::public_isScalar() const function, expected prototype:\nbool osg::Uniform::public_isScalar() const\nClass arguments details:\n");
		}


		wrapper_osg_Uniform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Uniform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Uniform::public_isScalar() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->public_isScalar();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Uniform::public_allocateDataArray()
	static int _bind_public_allocateDataArray(lua_State *L) {
		if (!_lg_typecheck_public_allocateDataArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Uniform::public_allocateDataArray() function, expected prototype:\nvoid osg::Uniform::public_allocateDataArray()\nClass arguments details:\n");
		}


		wrapper_osg_Uniform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Uniform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Uniform::public_allocateDataArray(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_allocateDataArray();

		return 0;
	}

	// void osg::Uniform::public_addParent(osg::StateSet * object)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Uniform::public_addParent(osg::StateSet * object) function, expected prototype:\nvoid osg::Uniform::public_addParent(osg::StateSet * object)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osg_Uniform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Uniform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Uniform::public_addParent(osg::StateSet *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_addParent(object);

		return 0;
	}

	// void osg::Uniform::public_removeParent(osg::StateSet * object)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Uniform::public_removeParent(osg::StateSet * object) function, expected prototype:\nvoid osg::Uniform::public_removeParent(osg::StateSet * object)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osg_Uniform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Uniform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Uniform::public_removeParent(osg::StateSet *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_removeParent(object);

		return 0;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_Uniform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Uniform >(L,1);
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


		wrapper_osg_Uniform* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Uniform >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_isCompatibleType",_bind_public_isCompatibleType},
		{"protected_isScalar",_bind_public_isScalar},
		{"protected_allocateDataArray",_bind_public_allocateDataArray},
		{"protected_addParent",_bind_public_addParent},
		{"protected_removeParent",_bind_public_removeParent},
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

