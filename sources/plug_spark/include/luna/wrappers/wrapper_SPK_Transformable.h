#ifndef _WRAPPERS_WRAPPER_SPK_TRANSFORMABLE_H_
#define _WRAPPERS_WRAPPER_SPK_TRANSFORMABLE_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Core/SPK_Transformable.h>

class wrapper_SPK_Transformable : public SPK::Transformable, public luna_wrapper_base {

public:
		

	~wrapper_SPK_Transformable() {
		logDEBUG3("Calling delete function for wrapper SPK_Transformable");
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SPK_Transformable(lua_State* L, lua_Table* dum) : SPK::Transformable(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_SPK_Transformable(lua_State* L, lua_Table* dum, const SPK::Transformable & transformable) : SPK::Transformable(transformable), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void SPK::Transformable::innerUpdateTransform()
	void innerUpdateTransform() {
		if(_obj.pushFunction("innerUpdateTransform")) {
			return (_obj.callFunction<void>());
		}

		return Transformable::innerUpdateTransform();
	};

	// void SPK::Transformable::propagateUpdateTransform()
	void propagateUpdateTransform() {
		if(_obj.pushFunction("propagateUpdateTransform")) {
			return (_obj.callFunction<void>());
		}

		return Transformable::propagateUpdateTransform();
	};

public:
	// Public virtual methods:

	// Protected non-virtual methods:
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

		wrapper_SPK_Transformable* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Transformable >(L,1);
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

		wrapper_SPK_Transformable* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Transformable >(L,1);
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


		wrapper_SPK_Transformable* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Transformable >(L,1);
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


		wrapper_SPK_Transformable* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Transformable >(L,1);
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


		wrapper_SPK_Transformable* self=Luna< SPK::Transformable >::checkSubType< wrapper_SPK_Transformable >(L,1);
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
		{"protected_transformPos",_bind_public_transformPos},
		{"protected_transformDir",_bind_public_transformDir},
		{"protected_isUpdateNotified",_bind_public_isUpdateNotified},
		{"protected_notifyForUpdate",_bind_public_notifyForUpdate},
		{"protected_getParentTransform",_bind_public_getParentTransform},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

