#ifndef _WRAPPERS_WRAPPER_OSG_FRAMEBUFFEROBJECT_H_
#define _WRAPPERS_WRAPPER_OSG_FRAMEBUFFEROBJECT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/FrameBufferObject>

class wrapper_osg_FrameBufferObject : public osg::FrameBufferObject, public luna_wrapper_base {

public:
		

	~wrapper_osg_FrameBufferObject() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_FrameBufferObject(lua_State* L, lua_Table* dum) : osg::FrameBufferObject(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_FrameBufferObject(lua_State* L, lua_Table* dum, const osg::FrameBufferObject & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::FrameBufferObject(copy, copyop), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return FrameBufferObject::setName(name);
	};

	// void osg::Object::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return FrameBufferObject::computeDataVariance();
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return FrameBufferObject::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return FrameBufferObject::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return FrameBufferObject::getUserData();
	};

	// osg::Texture * osg::StateAttribute::asTexture()
	osg::Texture * asTexture() {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return FrameBufferObject::asTexture();
	};

	// const osg::Texture * osg::StateAttribute::asTexture() const
	const osg::Texture * asTexture() const {
		if(_obj.pushFunction("asTexture")) {
			return (_obj.callFunction<osg::Texture*>());
		}

		return FrameBufferObject::asTexture();
	};

	// unsigned int osg::StateAttribute::getMember() const
	unsigned int getMember() const {
		if(_obj.pushFunction("getMember")) {
			return (_obj.callFunction<unsigned int>());
		}

		return FrameBufferObject::getMember();
	};

	// bool osg::StateAttribute::isTextureAttribute() const
	bool isTextureAttribute() const {
		if(_obj.pushFunction("isTextureAttribute")) {
			return (_obj.callFunction<bool>());
		}

		return FrameBufferObject::isTextureAttribute();
	};

	// bool osg::StateAttribute::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	bool getModeUsage(osg::StateAttribute::ModeUsage & arg1) const {
		if(_obj.pushFunction("getModeUsage")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return FrameBufferObject::getModeUsage(arg1);
	};

	// bool osg::StateAttribute::checkValidityOfAssociatedModes(osg::State & arg1) const
	bool checkValidityOfAssociatedModes(osg::State & arg1) const {
		if(_obj.pushFunction("checkValidityOfAssociatedModes")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<bool>());
		}

		return FrameBufferObject::checkValidityOfAssociatedModes(arg1);
	};

	// void osg::StateAttribute::compileGLObjects(osg::State & arg1) const
	void compileGLObjects(osg::State & arg1) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return FrameBufferObject::compileGLObjects(arg1);
	};

	// osg::Object * osg::FrameBufferObject::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return FrameBufferObject::cloneType();
	};

	// osg::Object * osg::FrameBufferObject::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return FrameBufferObject::clone(arg1);
	};

	// bool osg::FrameBufferObject::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return FrameBufferObject::isSameKindAs(obj);
	};

	// const char * osg::FrameBufferObject::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return FrameBufferObject::libraryName();
	};

	// const char * osg::FrameBufferObject::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return FrameBufferObject::className();
	};

	// osg::StateAttribute::Type osg::FrameBufferObject::getType() const
	osg::StateAttribute::Type getType() const {
		if(_obj.pushFunction("getType")) {
			return (osg::StateAttribute::Type)(_obj.callFunction<int>());
		}

		return FrameBufferObject::getType();
	};

	// int osg::FrameBufferObject::compare(const osg::StateAttribute & sa) const
	int compare(const osg::StateAttribute & sa) const {
		if(_obj.pushFunction("compare")) {
			_obj.pushArg(&sa);
			return (_obj.callFunction<int>());
		}

		return FrameBufferObject::compare(sa);
	};

	// void osg::FrameBufferObject::apply(osg::State & arg1) const
	void apply(osg::State & arg1) const {
		if(_obj.pushFunction("apply")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<void>());
		}

		return FrameBufferObject::apply(arg1);
	};

	// void osg::FrameBufferObject::releaseGLObjects(osg::State * arg1 = 0) const
	void releaseGLObjects(osg::State * arg1 = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return FrameBufferObject::releaseGLObjects(arg1);
	};



	// Protected virtual methods:

	// Protected non-virtual methods:
	// void osg::FrameBufferObject::updateDrawBuffers()
	void public_updateDrawBuffers() {
		return osg::FrameBufferObject::updateDrawBuffers();
	};

	// void osg::FrameBufferObject::dirtyAll()
	void public_dirtyAll() {
		return osg::FrameBufferObject::dirtyAll();
	};

	// unsigned int osg::FrameBufferObject::convertBufferComponentToGLenum(osg::Camera::BufferComponent attachment_point) const
	unsigned int public_convertBufferComponentToGLenum(osg::Camera::BufferComponent attachment_point) const {
		return osg::FrameBufferObject::convertBufferComponentToGLenum(attachment_point);
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
	inline static bool _lg_typecheck_public_updateDrawBuffers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_dirtyAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_convertBufferComponentToGLenum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// void osg::FrameBufferObject::public_updateDrawBuffers()
	static int _bind_public_updateDrawBuffers(lua_State *L) {
		if (!_lg_typecheck_public_updateDrawBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::public_updateDrawBuffers() function, expected prototype:\nvoid osg::FrameBufferObject::public_updateDrawBuffers()\nClass arguments details:\n");
		}


		wrapper_osg_FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_FrameBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::public_updateDrawBuffers()");
		}
		self->public_updateDrawBuffers();

		return 0;
	}

	// void osg::FrameBufferObject::public_dirtyAll()
	static int _bind_public_dirtyAll(lua_State *L) {
		if (!_lg_typecheck_public_dirtyAll(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::FrameBufferObject::public_dirtyAll() function, expected prototype:\nvoid osg::FrameBufferObject::public_dirtyAll()\nClass arguments details:\n");
		}


		wrapper_osg_FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_FrameBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::FrameBufferObject::public_dirtyAll()");
		}
		self->public_dirtyAll();

		return 0;
	}

	// unsigned int osg::FrameBufferObject::public_convertBufferComponentToGLenum(osg::Camera::BufferComponent attachment_point) const
	static int _bind_public_convertBufferComponentToGLenum(lua_State *L) {
		if (!_lg_typecheck_public_convertBufferComponentToGLenum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::FrameBufferObject::public_convertBufferComponentToGLenum(osg::Camera::BufferComponent attachment_point) const function, expected prototype:\nunsigned int osg::FrameBufferObject::public_convertBufferComponentToGLenum(osg::Camera::BufferComponent attachment_point) const\nClass arguments details:\n");
		}

		osg::Camera::BufferComponent attachment_point=(osg::Camera::BufferComponent)lua_tointeger(L,2);

		wrapper_osg_FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_FrameBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::FrameBufferObject::public_convertBufferComponentToGLenum(osg::Camera::BufferComponent) const");
		}
		unsigned int lret = self->public_convertBufferComponentToGLenum(attachment_point);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::StateAttribute::public_addParent(osg::StateSet * object)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::public_addParent(osg::StateSet * object) function, expected prototype:\nvoid osg::StateAttribute::public_addParent(osg::StateSet * object)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* object=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		wrapper_osg_FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_FrameBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::public_addParent(osg::StateSet *)");
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

		wrapper_osg_FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_FrameBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::public_removeParent(osg::StateSet *)");
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

		wrapper_osg_FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_FrameBufferObject >(L,1);
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


		wrapper_osg_FrameBufferObject* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_FrameBufferObject >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"updateDrawBuffers",_bind_public_updateDrawBuffers},
		{"dirtyAll",_bind_public_dirtyAll},
		{"convertBufferComponentToGLenum",_bind_public_convertBufferComponentToGLenum},
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

