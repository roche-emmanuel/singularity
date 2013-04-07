#ifndef _WRAPPERS_WRAPPER_SPK_POINTMASS_H_
#define _WRAPPERS_WRAPPER_SPK_POINTMASS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <Extensions/Modifiers/SPK_PointMass.h>

class wrapper_SPK_PointMass : public SPK::PointMass, public luna_wrapper_base {

public:
		

	~wrapper_SPK_PointMass() {
		logDEBUG3("Calling delete function for wrapper SPK_PointMass");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SPK::PointMass*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_PointMass(lua_State* L, lua_Table* dum, SPK::Zone * zone = NULL, SPK::ModifierTrigger trigger = SPK::INSIDE_ZONE, float mass = 1.0f, float minDistance = 0.05f) 
		: SPK::PointMass(zone, trigger, mass, minDistance), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SPK::PointMass*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void SPK::Registerable::onRegister()
	void onRegister() {
		THROW_IF(!_obj.pushFunction("onRegister"),"No implementation for abstract function SPK::Registerable::onRegister");
		_obj.pushArg((SPK::PointMass*)this);
		return (_obj.callFunction<void>());
	};

	// void SPK::Registerable::onUnregister()
	void onUnregister() {
		THROW_IF(!_obj.pushFunction("onUnregister"),"No implementation for abstract function SPK::Registerable::onUnregister");
		_obj.pushArg((SPK::PointMass*)this);
		return (_obj.callFunction<void>());
	};

	// void SPK::Modifier::modifyWrongSide(SPK::Particle & particle, bool inside) const
	void modifyWrongSide(SPK::Particle & particle, bool inside) const {
		THROW_IF(!_obj.pushFunction("modifyWrongSide"),"No implementation for abstract function SPK::Modifier::modifyWrongSide");
		_obj.pushArg((SPK::PointMass*)this);
		_obj.pushArg(&particle);
		_obj.pushArg(inside);
		return (_obj.callFunction<void>());
	};

	// SPK::PointMass * SPK::PointMass::clone(bool createBase) const
	SPK::PointMass * clone(bool createBase) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function SPK::PointMass::clone");
		_obj.pushArg((SPK::PointMass*)this);
		_obj.pushArg(createBase);
		return (_obj.callFunction<SPK::PointMass*>());
	};

	// void SPK::PointMass::modify(SPK::Particle & particle, float deltaTime) const
	void modify(SPK::Particle & particle, float deltaTime) const {
		THROW_IF(!_obj.pushFunction("modify"),"No implementation for abstract function SPK::PointMass::modify");
		_obj.pushArg((SPK::PointMass*)this);
		_obj.pushArg(&particle);
		_obj.pushArg(deltaTime);
		return (_obj.callFunction<void>());
	};

protected:
	// Protected virtual methods:
	// bool SPK::BufferHandler::checkBuffers(const SPK::Group & group)
	bool checkBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("checkBuffers")) {
			_obj.pushArg((SPK::PointMass*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<bool>());
		}

		return PointMass::checkBuffers(group);
	};

	// void SPK::Modifier::registerChildren(bool registerAll)
	void registerChildren(bool registerAll) {
		if(_obj.pushFunction("registerChildren")) {
			_obj.pushArg((SPK::PointMass*)this);
			_obj.pushArg(registerAll);
			return (_obj.callFunction<void>());
		}

		return PointMass::registerChildren(registerAll);
	};

	// void SPK::Modifier::copyChildren(const SPK::Registerable & object, bool createBase)
	void copyChildren(const SPK::Registerable & object, bool createBase) {
		if(_obj.pushFunction("copyChildren")) {
			_obj.pushArg((SPK::PointMass*)this);
			_obj.pushArg(&object);
			_obj.pushArg(createBase);
			return (_obj.callFunction<void>());
		}

		return PointMass::copyChildren(object, createBase);
	};

	// void SPK::Modifier::destroyChildren(bool keepChildren)
	void destroyChildren(bool keepChildren) {
		if(_obj.pushFunction("destroyChildren")) {
			_obj.pushArg((SPK::PointMass*)this);
			_obj.pushArg(keepChildren);
			return (_obj.callFunction<void>());
		}

		return PointMass::destroyChildren(keepChildren);
	};

	// void SPK::Modifier::propagateUpdateTransform()
	void propagateUpdateTransform() {
		if(_obj.pushFunction("propagateUpdateTransform")) {
			_obj.pushArg((SPK::PointMass*)this);
			return (_obj.callFunction<void>());
		}

		return PointMass::propagateUpdateTransform();
	};

	// void SPK::PointMass::innerUpdateTransform()
	void innerUpdateTransform() {
		if(_obj.pushFunction("innerUpdateTransform")) {
			_obj.pushArg((SPK::PointMass*)this);
			return (_obj.callFunction<void>());
		}

		return PointMass::innerUpdateTransform();
	};

public:
	// Public virtual methods:
	// void SPK::BufferHandler::createBuffers(const SPK::Group & group)
	void createBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("createBuffers")) {
			_obj.pushArg((SPK::PointMass*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return PointMass::createBuffers(group);
	};

	// void SPK::BufferHandler::destroyBuffers(const SPK::Group & group)
	void destroyBuffers(const SPK::Group & group) {
		if(_obj.pushFunction("destroyBuffers")) {
			_obj.pushArg((SPK::PointMass*)this);
			_obj.pushArg(&group);
			return (_obj.callFunction<void>());
		}

		return PointMass::destroyBuffers(group);
	};

	// SPK::Registerable * SPK::Modifier::findByName(const std::string & name)
	SPK::Registerable * findByName(const std::string & name) {
		if(_obj.pushFunction("findByName")) {
			_obj.pushArg((SPK::PointMass*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<SPK::Registerable*>());
		}

		return PointMass::findByName(name);
	};

	// std::string SPK::PointMass::getClassName() const
	std::string getClassName() const {
		if(_obj.pushFunction("getClassName")) {
			_obj.pushArg((SPK::PointMass*)this);
			return (_obj.callFunction<std::string>());
		}

		return PointMass::getClassName();
	};


	// Protected non-virtual methods:
	// void SPK::Registerable::registerChild(SPK::Registerable * child, bool registerAll)
	void public_registerChild(SPK::Registerable * child, bool registerAll) {
		return SPK::Registerable::registerChild(child, registerAll);
	};

	// SPK::Registerable * SPK::Registerable::copyChild(SPK::Registerable * child, bool createBase)
	SPK::Registerable * public_copyChild(SPK::Registerable * child, bool createBase) {
		return SPK::Registerable::copyChild(child, createBase);
	};

	// bool SPK::Registerable::destroyChild(SPK::Registerable * child, bool keepChildren)
	bool public_destroyChild(SPK::Registerable * child, bool keepChildren) {
		return SPK::Registerable::destroyChild(child, keepChildren);
	};

	// void SPK::Registerable::incrementChildReference(SPK::Registerable * child)
	void public_incrementChildReference(SPK::Registerable * child) {
		return SPK::Registerable::incrementChildReference(child);
	};

	// void SPK::Registerable::decrementChildReference(SPK::Registerable * child)
	void public_decrementChildReference(SPK::Registerable * child) {
		return SPK::Registerable::decrementChildReference(child);
	};

	// static void SPK::Registerable::registerObject(SPK::Registerable * obj, bool registerAll = false)
	static void public_registerObject(SPK::Registerable * obj, bool registerAll = false) {
		return SPK::Registerable::registerObject(obj, registerAll);
	};

	// void SPK::Transformable::transformPos(SPK::Vector3D & tPos, const SPK::Vector3D & pos)
	void public_transformPos(SPK::Vector3D & tPos, const SPK::Vector3D & pos) {
		return SPK::Transformable::transformPos(tPos, pos);
	};

	// void SPK::Transformable::transformDir(SPK::Vector3D & tDir, const SPK::Vector3D & dir)
	void public_transformDir(SPK::Vector3D & tDir, const SPK::Vector3D & dir) {
		return SPK::Transformable::transformDir(tDir, dir);
	};

	// bool SPK::Transformable::isUpdateNotified() const
	bool public_isUpdateNotified() const {
		return SPK::Transformable::isUpdateNotified();
	};

	// void SPK::Transformable::notifyForUpdate()
	void public_notifyForUpdate() {
		return SPK::Transformable::notifyForUpdate();
	};

	// const SPK::Transformable * SPK::Transformable::getParentTransform() const
	const SPK::Transformable * public_getParentTransform() const {
		return SPK::Transformable::getParentTransform();
	};

	// bool SPK::BufferHandler::prepareBuffers(const SPK::Group & group)
	bool public_prepareBuffers(const SPK::Group & group) {
		return SPK::BufferHandler::prepareBuffers(group);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_registerChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_copyChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_destroyChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_incrementChildReference(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_decrementChildReference(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31337102)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_registerObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,31337102)) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_transformPos(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_transformDir(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70092749) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,70092749) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_isUpdateNotified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_notifyForUpdate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getParentTransform(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_prepareBuffers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31337102) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll)
	static int _bind_public_registerChild(lua_State *L) {
		if (!_lg_typecheck_public_registerChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll) function, expected prototype:\nvoid SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool registerAll=(bool)(lua_toboolean(L,3)==1);

		wrapper_SPK_PointMass* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Registerable::public_registerChild(SPK::Registerable *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_registerChild(child, registerAll);

		return 0;
	}

	// SPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable * child, bool createBase)
	static int _bind_public_copyChild(lua_State *L) {
		if (!_lg_typecheck_public_copyChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable * child, bool createBase) function, expected prototype:\nSPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable * child, bool createBase)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool createBase=(bool)(lua_toboolean(L,3)==1);

		wrapper_SPK_PointMass* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::Registerable * SPK::Registerable::public_copyChild(SPK::Registerable *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		SPK::Registerable * lret = self->public_copyChild(child, createBase);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Registerable >::push(L,lret,false);

		return 1;
	}

	// bool SPK::Registerable::public_destroyChild(SPK::Registerable * child, bool keepChildren)
	static int _bind_public_destroyChild(lua_State *L) {
		if (!_lg_typecheck_public_destroyChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Registerable::public_destroyChild(SPK::Registerable * child, bool keepChildren) function, expected prototype:\nbool SPK::Registerable::public_destroyChild(SPK::Registerable * child, bool keepChildren)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool keepChildren=(bool)(lua_toboolean(L,3)==1);

		wrapper_SPK_PointMass* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Registerable::public_destroyChild(SPK::Registerable *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		bool lret = self->public_destroyChild(child, keepChildren);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Registerable::public_incrementChildReference(SPK::Registerable * child)
	static int _bind_public_incrementChildReference(lua_State *L) {
		if (!_lg_typecheck_public_incrementChildReference(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_incrementChildReference(SPK::Registerable * child) function, expected prototype:\nvoid SPK::Registerable::public_incrementChildReference(SPK::Registerable * child)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));

		wrapper_SPK_PointMass* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Registerable::public_incrementChildReference(SPK::Registerable *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_incrementChildReference(child);

		return 0;
	}

	// void SPK::Registerable::public_decrementChildReference(SPK::Registerable * child)
	static int _bind_public_decrementChildReference(lua_State *L) {
		if (!_lg_typecheck_public_decrementChildReference(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_decrementChildReference(SPK::Registerable * child) function, expected prototype:\nvoid SPK::Registerable::public_decrementChildReference(SPK::Registerable * child)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));

		wrapper_SPK_PointMass* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Registerable::public_decrementChildReference(SPK::Registerable *). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_decrementChildReference(child);

		return 0;
	}

	// static void SPK::Registerable::public_registerObject(SPK::Registerable * obj, bool registerAll = false)
	static int _bind_public_registerObject(lua_State *L) {
		if (!_lg_typecheck_public_registerObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::Registerable::public_registerObject(SPK::Registerable * obj, bool registerAll = false) function, expected prototype:\nstatic void SPK::Registerable::public_registerObject(SPK::Registerable * obj, bool registerAll = false)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		int luatop = lua_gettop(L);

		SPK::Registerable* obj=(Luna< SPK::Registerable >::check(L,1));
		bool registerAll=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wrapper_SPK_PointMass* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void SPK::Registerable::public_registerObject(SPK::Registerable *, bool). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_registerObject(obj, registerAll);

		return 0;
	}

	// void SPK::Transformable::public_transformPos(SPK::Vector3D & tPos, const SPK::Vector3D & pos)
	static int _bind_public_transformPos(lua_State *L) {
		if (!_lg_typecheck_public_transformPos(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::public_transformPos(SPK::Vector3D & tPos, const SPK::Vector3D & pos) function, expected prototype:\nvoid SPK::Transformable::public_transformPos(SPK::Vector3D & tPos, const SPK::Vector3D & pos)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		SPK::Vector3D* tPos_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !tPos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tPos in SPK::Transformable::public_transformPos function");
		}
		SPK::Vector3D & tPos=*tPos_ptr;
		const SPK::Vector3D* pos_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in SPK::Transformable::public_transformPos function");
		}
		const SPK::Vector3D & pos=*pos_ptr;

		wrapper_SPK_PointMass* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::public_transformPos(SPK::Vector3D &, const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Transformable >::check(L,1)).name());
		}
		self->public_transformPos(tPos, pos);

		return 0;
	}

	// void SPK::Transformable::public_transformDir(SPK::Vector3D & tDir, const SPK::Vector3D & dir)
	static int _bind_public_transformDir(lua_State *L) {
		if (!_lg_typecheck_public_transformDir(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::public_transformDir(SPK::Vector3D & tDir, const SPK::Vector3D & dir) function, expected prototype:\nvoid SPK::Transformable::public_transformDir(SPK::Vector3D & tDir, const SPK::Vector3D & dir)\nClass arguments details:\narg 1 ID = 70092749\narg 2 ID = 70092749\n");
		}

		SPK::Vector3D* tDir_ptr=(Luna< SPK::Vector3D >::check(L,2));
		if( !tDir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tDir in SPK::Transformable::public_transformDir function");
		}
		SPK::Vector3D & tDir=*tDir_ptr;
		const SPK::Vector3D* dir_ptr=(Luna< SPK::Vector3D >::check(L,3));
		if( !dir_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dir in SPK::Transformable::public_transformDir function");
		}
		const SPK::Vector3D & dir=*dir_ptr;

		wrapper_SPK_PointMass* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::public_transformDir(SPK::Vector3D &, const SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Transformable >::check(L,1)).name());
		}
		self->public_transformDir(tDir, dir);

		return 0;
	}

	// bool SPK::Transformable::public_isUpdateNotified() const
	static int _bind_public_isUpdateNotified(lua_State *L) {
		if (!_lg_typecheck_public_isUpdateNotified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Transformable::public_isUpdateNotified() const function, expected prototype:\nbool SPK::Transformable::public_isUpdateNotified() const\nClass arguments details:\n");
		}


		wrapper_SPK_PointMass* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Transformable::public_isUpdateNotified() const. Got : '%s'",typeid(Luna< SPK::Transformable >::check(L,1)).name());
		}
		bool lret = self->public_isUpdateNotified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void SPK::Transformable::public_notifyForUpdate()
	static int _bind_public_notifyForUpdate(lua_State *L) {
		if (!_lg_typecheck_public_notifyForUpdate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Transformable::public_notifyForUpdate() function, expected prototype:\nvoid SPK::Transformable::public_notifyForUpdate()\nClass arguments details:\n");
		}


		wrapper_SPK_PointMass* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Transformable::public_notifyForUpdate(). Got : '%s'",typeid(Luna< SPK::Transformable >::check(L,1)).name());
		}
		self->public_notifyForUpdate();

		return 0;
	}

	// const SPK::Transformable * SPK::Transformable::public_getParentTransform() const
	static int _bind_public_getParentTransform(lua_State *L) {
		if (!_lg_typecheck_public_getParentTransform(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const SPK::Transformable * SPK::Transformable::public_getParentTransform() const function, expected prototype:\nconst SPK::Transformable * SPK::Transformable::public_getParentTransform() const\nClass arguments details:\n");
		}


		wrapper_SPK_PointMass* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Transformable * SPK::Transformable::public_getParentTransform() const. Got : '%s'",typeid(Luna< SPK::Transformable >::check(L,1)).name());
		}
		const SPK::Transformable * lret = self->public_getParentTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Transformable >::push(L,lret,false);

		return 1;
	}

	// bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group)
	static int _bind_public_prepareBuffers(lua_State *L) {
		if (!_lg_typecheck_public_prepareBuffers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group) function, expected prototype:\nbool SPK::BufferHandler::public_prepareBuffers(const SPK::Group & group)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		const SPK::Group* group_ptr=(Luna< SPK::Registerable >::checkSubType< SPK::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in SPK::BufferHandler::public_prepareBuffers function");
		}
		const SPK::Group & group=*group_ptr;

		wrapper_SPK_PointMass* self=Luna< SPK::BufferHandler >::checkSubType< wrapper_SPK_PointMass >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::BufferHandler::public_prepareBuffers(const SPK::Group &). Got : '%s'",typeid(Luna< SPK::BufferHandler >::check(L,1)).name());
		}
		bool lret = self->public_prepareBuffers(group);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"registerChild",_bind_public_registerChild},
		{"copyChild",_bind_public_copyChild},
		{"destroyChild",_bind_public_destroyChild},
		{"incrementChildReference",_bind_public_incrementChildReference},
		{"decrementChildReference",_bind_public_decrementChildReference},
		{"registerObject",_bind_public_registerObject},
		{"transformPos",_bind_public_transformPos},
		{"transformDir",_bind_public_transformDir},
		{"isUpdateNotified",_bind_public_isUpdateNotified},
		{"notifyForUpdate",_bind_public_notifyForUpdate},
		{"getParentTransform",_bind_public_getParentTransform},
		{"prepareBuffers",_bind_public_prepareBuffers},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

