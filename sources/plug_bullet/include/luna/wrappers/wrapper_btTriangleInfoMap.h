#ifndef _WRAPPERS_WRAPPER_BTTRIANGLEINFOMAP_H_
#define _WRAPPERS_WRAPPER_BTTRIANGLEINFOMAP_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <BulletCollision/CollisionShapes/btTriangleInfoMap.h>

class wrapper_btTriangleInfoMap : public btTriangleInfoMap, public luna_wrapper_base {

public:
		

	~wrapper_btTriangleInfoMap() {
		logDEBUG3("Calling delete function for wrapper btTriangleInfoMap");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((btTriangleInfoMap*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_btTriangleInfoMap(lua_State* L, lua_Table* dum) 
		: btTriangleInfoMap(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((btTriangleInfoMap*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int btTriangleInfoMap::calculateSerializeBufferSize() const
	int calculateSerializeBufferSize() const {
		if(_obj.pushFunction("calculateSerializeBufferSize")) {
			_obj.pushArg((btTriangleInfoMap*)this);
			return (_obj.callFunction<int>());
		}

		return btTriangleInfoMap::calculateSerializeBufferSize();
	};


	// Protected non-virtual methods:
	// void btHashMap::growTables(const Key & arg1)
	void public_growTables(const Key & arg1) {
		return btHashMap::growTables(arg1);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_growTables(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'const Key &'
		////////////////////////////////////////////////////////////////////
		return true;
	}


	// Protected non-virtual function binds:
	// void btHashMap::public_growTables(const Key & arg1)
	static int _bind_public_growTables(lua_State *L) {
		if (!_lg_typecheck_public_growTables(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btHashMap::public_growTables(const Key & arg1) function, expected prototype:\nvoid btHashMap::public_growTables(const Key & arg1)\nClass arguments details:\n");
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'const Key &' baseTypeName is 'Key'
		////////////////////////////////////////////////////////////////////

		wrapper_btTriangleInfoMap* self=Luna< btHashMap >::checkSubType< wrapper_btTriangleInfoMap >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btHashMap::public_growTables(const Key &). Got : '%s'",typeid(Luna< btHashMap >::check(L,1)).name());
		}
		self->public_growTables(_arg1);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"growTables",_bind_public_growTables},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

