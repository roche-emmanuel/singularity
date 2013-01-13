#ifndef _WRAPPERS_WRAPPER_OSG_TEXENVCOMBINE_H_
#define _WRAPPERS_WRAPPER_OSG_TEXENVCOMBINE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/TexEnvCombine>

class wrapper_osg_TexEnvCombine : public osg::TexEnvCombine, public luna_wrapper_base {

public:
		

	~wrapper_osg_TexEnvCombine() {
		logDEBUG3("Calling delete function for wrapper osg_TexEnvCombine");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::TexEnvCombine*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_TexEnvCombine(lua_State* L, lua_Table* dum) 
		: osg::TexEnvCombine(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_TexEnvCombine(lua_State* L, lua_Table* dum, const osg::TexEnvCombine & texenv, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) 
		: osg::TexEnvCombine(texenv, copyop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Object::setThreadSafeRefUnref(bool threadSafe)
	void setThreadSafeRefUnref(bool threadSafe) {
		if(_obj.pushFunction("setThreadSafeRefUnref")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(threadSafe);
			return (_obj.callFunction<void>());
		}

		return TexEnvCombine::setThreadSafeRefUnref(threadSafe);
	};

	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return TexEnvCombine::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<void>());
		}

		return TexEnvCombine::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return TexEnvCombine::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TexEnvCombine::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<osg::Referenced*>());
		}

		return TexEnvCombine::getUserData();
	};

	// osg::Texture * osg::StateAttribute::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<osg::Texture*>());
		}

		return TexEnvCombine::asTexture();
	};

	// const osg::Texture * osg::StateAttribute::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<osg::Texture*>());
		}

		return TexEnvCombine::asTexture();
	};

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return TexEnvCombine::getMember();
	};

	// bool osg::StateAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TexEnvCombine::getModeUsage(arg1);
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return TexEnvCombine::checkValidityOfAssociatedModes(arg1);
	};

	// void osg::StateAttribute::compileGLObjects(osg::State & arg1) const
	void compileGLObjects(osg::State & arg1) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return TexEnvCombine::compileGLObjects(arg1);
	};

	// void osg::StateAttribute::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return TexEnvCombine::releaseGLObjects(arg1);
	};

	// osg::Object * osg::TexEnvCombine::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<osg::Object*>());
		}

		return TexEnvCombine::cloneType();
	};

	// osg::Object * osg::TexEnvCombine::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return TexEnvCombine::clone(arg1);
	};

	// bool osg::TexEnvCombine::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return TexEnvCombine::isSameKindAs(obj);
	};

	// const char * osg::TexEnvCombine::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<const char*>());
		}

		return TexEnvCombine::libraryName();
	};

	// const char * osg::TexEnvCombine::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<const char*>());
		}

		return TexEnvCombine::className();
	};

	// osg::StateAttribute::Type osg::TexEnvCombine::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return TexEnvCombine::getType();
	};

	// bool osg::TexEnvCombine::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			return (_obj.callFunction<bool>());
		}

		return TexEnvCombine::isTextureAttribute();
	};

	// int osg::TexEnvCombine::compare(const osg::StateAttribute & sa) const
	int compare(const osg::StateAttribute & sa) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(&sa);
			return (_obj.callFunction<int>());
		}

		return TexEnvCombine::compare(sa);
	};

	// void osg::TexEnvCombine::apply(osg::State & arg1) const
	void apply(osg::State & arg1) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg((osg::TexEnvCombine*)this);
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return TexEnvCombine::apply(arg1);
	};


	// Protected non-virtual methods:
	// bool osg::TexEnvCombine::needsTexEnvCombiner(int value) const
	bool public_needsTexEnvCombiner(int value) const {
		return osg::TexEnvCombine::needsTexEnvCombiner(value);
	};

	// void osg::TexEnvCombine::computeNeedForTexEnvCombiners()
	void public_computeNeedForTexEnvCombiners() {
		return osg::TexEnvCombine::computeNeedForTexEnvCombiners();
	};

	// void osg::StateAttribute::addParent(osg::StateSet * object)
	void public_addParent(osg::StateSet * object) {
		return osg::StateAttribute::addParent(object);
	};

	// void osg::StateAttribute::removeParent(osg::StateSet * object)
	void public_removeParent(osg::StateSet * object) {
		return osg::StateAttribute::removeParent(object);
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
	inline static bool _lg_typecheck_public_needsTexEnvCombiner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeNeedForTexEnvCombiners(lua_State *L) {
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
	// bool osg::TexEnvCombine::public_needsTexEnvCombiner(int value) const
	static int _bind_public_needsTexEnvCombiner(lua_State *L) {
		if (!_lg_typecheck_public_needsTexEnvCombiner(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexEnvCombine::public_needsTexEnvCombiner(int value) const function, expected prototype:\nbool osg::TexEnvCombine::public_needsTexEnvCombiner(int value) const\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		wrapper_osg_TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TexEnvCombine >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexEnvCombine::public_needsTexEnvCombiner(int) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->public_needsTexEnvCombiner(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TexEnvCombine::public_computeNeedForTexEnvCombiners()
	static int _bind_public_computeNeedForTexEnvCombiners(lua_State *L) {
		if (!_lg_typecheck_public_computeNeedForTexEnvCombiners(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexEnvCombine::public_computeNeedForTexEnvCombiners() function, expected prototype:\nvoid osg::TexEnvCombine::public_computeNeedForTexEnvCombiners()\nClass arguments details:\n");
		}


		wrapper_osg_TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TexEnvCombine >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexEnvCombine::public_computeNeedForTexEnvCombiners(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_computeNeedForTexEnvCombiners();

		return 0;
	}

	// void osg::StateAttribute::public_addParent(osg::StateSet * object)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::public_addParent(osg::StateSet * object) function, expected prototype:\nvoid osg::StateAttribute::public_addParent(osg::StateSet * object)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osg_TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TexEnvCombine >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::public_addParent(osg::StateSet *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_addParent(object);

		return 0;
	}

	// void osg::StateAttribute::public_removeParent(osg::StateSet * object)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::public_removeParent(osg::StateSet * object) function, expected prototype:\nvoid osg::StateAttribute::public_removeParent(osg::StateSet * object)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osg_TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TexEnvCombine >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::public_removeParent(osg::StateSet *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
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

		wrapper_osg_TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TexEnvCombine >(L,1);
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


		wrapper_osg_TexEnvCombine* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_TexEnvCombine >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"needsTexEnvCombiner",_bind_public_needsTexEnvCombiner},
		{"computeNeedForTexEnvCombiners",_bind_public_computeNeedForTexEnvCombiners},
		{"addParent",_bind_public_addParent},
		{"removeParent",_bind_public_removeParent},
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

