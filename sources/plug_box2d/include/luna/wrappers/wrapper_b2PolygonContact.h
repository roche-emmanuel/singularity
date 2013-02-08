#ifndef _WRAPPERS_WRAPPER_B_POLYGONCONTACT_H_
#define _WRAPPERS_WRAPPER_B_POLYGONCONTACT_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <Box2D/Dynamics/Contacts/b2PolygonContact.h>

class wrapper_b2PolygonContact : public b2PolygonContact, public luna_wrapper_base {

public:
		

	~wrapper_b2PolygonContact() {
		logDEBUG3("Calling delete function for wrapper b2PolygonContact");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((b2PolygonContact*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_b2PolygonContact(lua_State* L, lua_Table* dum, b2Fixture * fixtureA, b2Fixture * fixtureB) 
		: b2PolygonContact(fixtureA, fixtureB), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((b2PolygonContact*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void b2PolygonContact::Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB)
	void Evaluate(b2Manifold * manifold, const b2Transform & xfA, const b2Transform & xfB) {
		if(_obj.pushFunction("Evaluate")) {
			_obj.pushArg((b2PolygonContact*)this);
			_obj.pushArg(manifold);
			_obj.pushArg(&xfA);
			_obj.pushArg(&xfB);
			return (_obj.callFunction<void>());
		}

		return b2PolygonContact::Evaluate(manifold, xfA, xfB);
	};


	// Protected non-virtual methods:
	// void b2Contact::FlagForFiltering()
	void public_FlagForFiltering() {
		return b2Contact::FlagForFiltering();
	};

	// void b2Contact::Update(b2ContactListener * listener)
	void public_Update(b2ContactListener * listener) {
		return b2Contact::Update(listener);
	};

	// static void b2Contact::InitializeRegisters()
	static void public_InitializeRegisters() {
		return b2Contact::InitializeRegisters();
	};

	// static b2Contact * b2Contact::Create(b2Fixture * fixtureA, signed int indexA, b2Fixture * fixtureB, signed int indexB, b2BlockAllocator * allocator)
	static b2Contact * public_Create(b2Fixture * fixtureA, signed int indexA, b2Fixture * fixtureB, signed int indexB, b2BlockAllocator * allocator) {
		return b2Contact::Create(fixtureA, indexA, fixtureB, indexB, allocator);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_FlagForFiltering(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_Update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,55252344)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_InitializeRegisters(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_Create(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,92969381)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92969381)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,76186022)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void b2Contact::public_FlagForFiltering()
	static int _bind_public_FlagForFiltering(lua_State *L) {
		if (!_lg_typecheck_public_FlagForFiltering(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Contact::public_FlagForFiltering() function, expected prototype:\nvoid b2Contact::public_FlagForFiltering()\nClass arguments details:\n");
		}


		wrapper_b2PolygonContact* self=Luna< b2Contact >::checkSubType< wrapper_b2PolygonContact >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Contact::public_FlagForFiltering(). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->public_FlagForFiltering();

		return 0;
	}

	// void b2Contact::public_Update(b2ContactListener * listener)
	static int _bind_public_Update(lua_State *L) {
		if (!_lg_typecheck_public_Update(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void b2Contact::public_Update(b2ContactListener * listener) function, expected prototype:\nvoid b2Contact::public_Update(b2ContactListener * listener)\nClass arguments details:\narg 1 ID = 55252344\n");
		}

		b2ContactListener* listener=(Luna< b2ContactListener >::check(L,2));

		wrapper_b2PolygonContact* self=Luna< b2Contact >::checkSubType< wrapper_b2PolygonContact >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void b2Contact::public_Update(b2ContactListener *). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->public_Update(listener);

		return 0;
	}

	// static void b2Contact::public_InitializeRegisters()
	static int _bind_public_InitializeRegisters(lua_State *L) {
		if (!_lg_typecheck_public_InitializeRegisters(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void b2Contact::public_InitializeRegisters() function, expected prototype:\nstatic void b2Contact::public_InitializeRegisters()\nClass arguments details:\n");
		}


		wrapper_b2PolygonContact* self=Luna< b2Contact >::checkSubType< wrapper_b2PolygonContact >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static void b2Contact::public_InitializeRegisters(). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		self->public_InitializeRegisters();

		return 0;
	}

	// static b2Contact * b2Contact::public_Create(b2Fixture * fixtureA, signed int indexA, b2Fixture * fixtureB, signed int indexB, b2BlockAllocator * allocator)
	static int _bind_public_Create(lua_State *L) {
		if (!_lg_typecheck_public_Create(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static b2Contact * b2Contact::public_Create(b2Fixture * fixtureA, signed int indexA, b2Fixture * fixtureB, signed int indexB, b2BlockAllocator * allocator) function, expected prototype:\nstatic b2Contact * b2Contact::public_Create(b2Fixture * fixtureA, signed int indexA, b2Fixture * fixtureB, signed int indexB, b2BlockAllocator * allocator)\nClass arguments details:\narg 1 ID = 92969381\narg 3 ID = 92969381\narg 5 ID = 76186022\n");
		}

		b2Fixture* fixtureA=(Luna< b2Fixture >::check(L,1));
		signed int indexA=(signed int)lua_tointeger(L,2);
		b2Fixture* fixtureB=(Luna< b2Fixture >::check(L,3));
		signed int indexB=(signed int)lua_tointeger(L,4);
		b2BlockAllocator* allocator=(Luna< b2BlockAllocator >::check(L,5));

		wrapper_b2PolygonContact* self=Luna< b2Contact >::checkSubType< wrapper_b2PolygonContact >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call static b2Contact * b2Contact::public_Create(b2Fixture *, signed int, b2Fixture *, signed int, b2BlockAllocator *). Got : '%s'",typeid(Luna< b2Contact >::check(L,1)).name());
		}
		b2Contact * lret = self->public_Create(fixtureA, indexA, fixtureB, indexB, allocator);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< b2Contact >::push(L,lret,false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"FlagForFiltering",_bind_public_FlagForFiltering},
		{"Update",_bind_public_Update},
		{"InitializeRegisters",_bind_public_InitializeRegisters},
		{"Create",_bind_public_Create},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

