#ifndef _WRAPPERS_WRAPPER_SPK_PLANE_H_
#define _WRAPPERS_WRAPPER_SPK_PLANE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Extensions/Zones/SPK_Plane.h>

class wrapper_SPK_Plane : public SPK::Plane, public luna_wrapper_base {

public:
		

	~wrapper_SPK_Plane() {
		logDEBUG3("Calling delete function for wrapper SPK_Plane");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SPK::Plane*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_Plane(lua_State* L, lua_Table* dum, const SPK::Vector3D & position = SPK::Vector3D (0.0f, 0.0f, 0.0f), const SPK::Vector3D & normal = SPK::Vector3D (0.0f, 1.0f, 0.0f)) 
		: SPK::Plane(position, normal), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void SPK::Registerable::onRegister()
	void onRegister() {
		THROW_IF(!_obj.pushFunction("onRegister"),"No implementation for abstract function SPK::Registerable::onRegister");
		_obj.pushArg((SPK::Plane*)this);
		return (_obj.callFunction<void>());
	};

	// void SPK::Registerable::onUnregister()
	void onUnregister() {
		THROW_IF(!_obj.pushFunction("onUnregister"),"No implementation for abstract function SPK::Registerable::onUnregister");
		_obj.pushArg((SPK::Plane*)this);
		return (_obj.callFunction<void>());
	};

	// SPK::Plane * SPK::Plane::clone(bool createBase) const
	SPK::Plane * clone(bool createBase) const {
		THROW_IF(!_obj.pushFunction("clone"),"No implementation for abstract function SPK::Plane::clone");
		_obj.pushArg((SPK::Plane*)this);
		_obj.pushArg(createBase);
		return (_obj.callFunction<SPK::Plane*>());
	};

protected:
	// Protected virtual methods:
	// void SPK::Registerable::registerChildren(bool registerAll)
	void registerChildren(bool registerAll) {
		if(_obj.pushFunction("registerChildren")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(registerAll);
			return (_obj.callFunction<void>());
		}

		return Plane::registerChildren(registerAll);
	};

	// void SPK::Registerable::copyChildren(const SPK::Registerable & object, bool createBase)
	void copyChildren(const SPK::Registerable & object, bool createBase) {
		if(_obj.pushFunction("copyChildren")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(&object);
			_obj.pushArg(createBase);
			return (_obj.callFunction<void>());
		}

		return Plane::copyChildren(object, createBase);
	};

	// void SPK::Registerable::destroyChildren(bool keepChildren)
	void destroyChildren(bool keepChildren) {
		if(_obj.pushFunction("destroyChildren")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(keepChildren);
			return (_obj.callFunction<void>());
		}

		return Plane::destroyChildren(keepChildren);
	};

	// void SPK::Transformable::propagateUpdateTransform()
	void propagateUpdateTransform() {
		if(_obj.pushFunction("propagateUpdateTransform")) {
			_obj.pushArg((SPK::Plane*)this);
			return (_obj.callFunction<void>());
		}

		return Plane::propagateUpdateTransform();
	};

	// void SPK::Plane::innerUpdateTransform()
	void innerUpdateTransform() {
		if(_obj.pushFunction("innerUpdateTransform")) {
			_obj.pushArg((SPK::Plane*)this);
			return (_obj.callFunction<void>());
		}

		return Plane::innerUpdateTransform();
	};

public:
	// Public virtual methods:
	// SPK::Registerable * SPK::Registerable::findByName(const std::string & name)
	SPK::Registerable * findByName(const std::string & name) {
		if(_obj.pushFunction("findByName")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<SPK::Registerable*>());
		}

		return Plane::findByName(name);
	};

	// void SPK::Zone::setPosition(const SPK::Vector3D & v)
	void setPosition(const SPK::Vector3D & v) {
		if(_obj.pushFunction("setPosition")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(&v);
			return (_obj.callFunction<void>());
		}

		return Plane::setPosition(v);
	};

	// std::string SPK::Plane::getClassName() const
	std::string getClassName() const {
		if(_obj.pushFunction("getClassName")) {
			_obj.pushArg((SPK::Plane*)this);
			return (_obj.callFunction<std::string>());
		}

		return Plane::getClassName();
	};

	// void SPK::Plane::generatePosition(SPK::Particle & particle, bool full) const
	void generatePosition(SPK::Particle & particle, bool full) const {
		if(_obj.pushFunction("generatePosition")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(&particle);
			_obj.pushArg(full);
			return (_obj.callFunction<void>());
		}

		return Plane::generatePosition(particle, full);
	};

	// bool SPK::Plane::contains(const SPK::Vector3D & point) const
	bool contains(const SPK::Vector3D & point) const {
		if(_obj.pushFunction("contains")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(&point);
			return (_obj.callFunction<bool>());
		}

		return Plane::contains(point);
	};

	// bool SPK::Plane::intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const
	bool intersects(const SPK::Vector3D & v0, const SPK::Vector3D & v1, SPK::Vector3D * intersection, SPK::Vector3D * normal) const {
		if(_obj.pushFunction("intersects")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(&v0);
			_obj.pushArg(&v1);
			_obj.pushArg(intersection);
			_obj.pushArg(normal);
			return (_obj.callFunction<bool>());
		}

		return Plane::intersects(v0, v1, intersection, normal);
	};

	// void SPK::Plane::moveAtBorder(SPK::Vector3D & point, bool inside) const
	void moveAtBorder(SPK::Vector3D & point, bool inside) const {
		if(_obj.pushFunction("moveAtBorder")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(&point);
			_obj.pushArg(inside);
			return (_obj.callFunction<void>());
		}

		return Plane::moveAtBorder(point, inside);
	};

	// SPK::Vector3D SPK::Plane::computeNormal(const SPK::Vector3D & point) const
	SPK::Vector3D computeNormal(const SPK::Vector3D & point) const {
		if(_obj.pushFunction("computeNormal")) {
			_obj.pushArg((SPK::Plane*)this);
			_obj.pushArg(&point);
			return *(_obj.callFunction<SPK::Vector3D*>());
		}

		return Plane::computeNormal(point);
	};


	// Protected non-virtual methods:
	// static void SPK::Zone::normalizeOrRandomize(SPK::Vector3D & v)
	static void public_normalizeOrRandomize(SPK::Vector3D & v) {
		return SPK::Zone::normalizeOrRandomize(v);
	};

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


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_normalizeOrRandomize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70092749) ) return false;
		return true;
	}

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


	// Protected non-virtual function binds:
	// static void SPK::Zone::public_normalizeOrRandomize(SPK::Vector3D & v)
	static int _bind_public_normalizeOrRandomize(lua_State *L) {
		if (!_lg_typecheck_public_normalizeOrRandomize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void SPK::Zone::public_normalizeOrRandomize(SPK::Vector3D & v) function, expected prototype:\nstatic void SPK::Zone::public_normalizeOrRandomize(SPK::Vector3D & v)\nClass arguments details:\narg 1 ID = 70092749\n");
		}

		SPK::Vector3D* v_ptr=(Luna< SPK::Vector3D >::check(L,1));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in SPK::Zone::public_normalizeOrRandomize function");
		}
		SPK::Vector3D & v=*v_ptr;

		wrapper_SPK_Plane* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_Plane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void SPK::Zone::public_normalizeOrRandomize(SPK::Vector3D &). Got : '%s'",typeid(Luna< SPK::Registerable >::check(L,1)).name());
		}
		self->public_normalizeOrRandomize(v);

		return 0;
	}

	// void SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll)
	static int _bind_public_registerChild(lua_State *L) {
		if (!_lg_typecheck_public_registerChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll) function, expected prototype:\nvoid SPK::Registerable::public_registerChild(SPK::Registerable * child, bool registerAll)\nClass arguments details:\narg 1 ID = 31337102\n");
		}

		SPK::Registerable* child=(Luna< SPK::Registerable >::check(L,2));
		bool registerAll=(bool)(lua_toboolean(L,3)==1);

		wrapper_SPK_Plane* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_Plane >(L,1);
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

		wrapper_SPK_Plane* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_Plane >(L,1);
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

		wrapper_SPK_Plane* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_Plane >(L,1);
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

		wrapper_SPK_Plane* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_Plane >(L,1);
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

		wrapper_SPK_Plane* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_Plane >(L,1);
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
		bool registerAll=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : false;

		wrapper_SPK_Plane* self=Luna< SPK::Registerable >::checkSubType< wrapper_SPK_Plane >(L,1);
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

		wrapper_SPK_Plane* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Plane >(L,1);
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

		wrapper_SPK_Plane* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Plane >(L,1);
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


		wrapper_SPK_Plane* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Plane >(L,1);
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


		wrapper_SPK_Plane* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Plane >(L,1);
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


		wrapper_SPK_Plane* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Plane >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const SPK::Transformable * SPK::Transformable::public_getParentTransform() const. Got : '%s'",typeid(Luna< SPK::Transformable >::check(L,1)).name());
		}
		const SPK::Transformable * lret = self->public_getParentTransform();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< SPK::Transformable >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"normalizeOrRandomize",_bind_public_normalizeOrRandomize},
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
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

