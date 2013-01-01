#ifndef _WRAPPERS_WRAPPER_OSGDB_FIELD_H_
#define _WRAPPERS_WRAPPER_OSGDB_FIELD_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osgDB/Input>

class wrapper_osgDB_Field : public osgDB::Field, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_Field() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgDB_Field(lua_State* L, lua_Table* dum) : osgDB::Field(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osgDB_Field(lua_State* L, lua_Table* dum, const osgDB::Field & field) : osgDB::Field(field), luna_wrapper_base(L) { register_protected_methods(L); };


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:
	// void osgDB::Field::_init()
	void public__init() {
		return osgDB::Field::_init();
	};

	// void osgDB::Field::_free()
	void public__free() {
		return osgDB::Field::_free();
	};

	// void osgDB::Field::_copy(const osgDB::Field & ic)
	void public__copy(const osgDB::Field & ic) {
		return osgDB::Field::_copy(ic);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public__init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public__free(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public__copy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,7546407) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void osgDB::Field::public__init()
	static int _bind_public__init(lua_State *L) {
		if (!_lg_typecheck_public__init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Field::public__init() function, expected prototype:\nvoid osgDB::Field::public__init()\nClass arguments details:\n");
		}


		wrapper_osgDB_Field* self=Luna< osgDB::Field >::checkSubType< wrapper_osgDB_Field >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Field::public__init(). Got : '%s'",typeid(Luna< osgDB::Field >::check(L,1)).name());
		}
		self->public__init();

		return 0;
	}

	// void osgDB::Field::public__free()
	static int _bind_public__free(lua_State *L) {
		if (!_lg_typecheck_public__free(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Field::public__free() function, expected prototype:\nvoid osgDB::Field::public__free()\nClass arguments details:\n");
		}


		wrapper_osgDB_Field* self=Luna< osgDB::Field >::checkSubType< wrapper_osgDB_Field >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Field::public__free(). Got : '%s'",typeid(Luna< osgDB::Field >::check(L,1)).name());
		}
		self->public__free();

		return 0;
	}

	// void osgDB::Field::public__copy(const osgDB::Field & ic)
	static int _bind_public__copy(lua_State *L) {
		if (!_lg_typecheck_public__copy(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Field::public__copy(const osgDB::Field & ic) function, expected prototype:\nvoid osgDB::Field::public__copy(const osgDB::Field & ic)\nClass arguments details:\narg 1 ID = 7546407\n");
		}

		const osgDB::Field* ic_ptr=(Luna< osgDB::Field >::check(L,2));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::Field::public__copy function");
		}
		const osgDB::Field & ic=*ic_ptr;

		wrapper_osgDB_Field* self=Luna< osgDB::Field >::checkSubType< wrapper_osgDB_Field >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Field::public__copy(const osgDB::Field &). Got : '%s'",typeid(Luna< osgDB::Field >::check(L,1)).name());
		}
		self->public__copy(ic);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected__init",_bind_public__init},
		{"protected__free",_bind_public__free},
		{"protected__copy",_bind_public__copy},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

