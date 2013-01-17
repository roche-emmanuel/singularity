#include <plug_common.h>

#include <luna/wrappers/wrapper_btGImpactCompoundShape_CompoundPrimitiveManager.h>

class luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager {
public:
	typedef Luna< btGImpactCompoundShape::CompoundPrimitiveManager > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<btPrimitiveManagerBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85935800) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(btPrimitiveManagerBase*)");
		}

		btPrimitiveManagerBase* rhs =(Luna< btPrimitiveManagerBase >::check(L,2));
		btPrimitiveManagerBase* self=(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_btPrimitiveManagerBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//btGImpactCompoundShape::CompoundPrimitiveManager* ptr= dynamic_cast< btGImpactCompoundShape::CompoundPrimitiveManager* >(Luna< btPrimitiveManagerBase >::check(L,1));
		btGImpactCompoundShape::CompoundPrimitiveManager* ptr= luna_caster< btPrimitiveManagerBase, btGImpactCompoundShape::CompoundPrimitiveManager >::cast(Luna< btPrimitiveManagerBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< btGImpactCompoundShape::CompoundPrimitiveManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85935800) ) return false;
		if( (!(Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,58243831)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,85935800) ) return false;
		if( (!(Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_is_trimesh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_primitive_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_primitive_box(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get_primitive_triangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,79712881) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getM_compoundShape(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setM_compoundShape(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,58243831)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_is_trimesh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_get_primitive_count(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_get_primitive_box(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,14786052) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_get_primitive_triangle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,79712881) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(const btGImpactCompoundShape::CompoundPrimitiveManager & compound)
	static btGImpactCompoundShape::CompoundPrimitiveManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(const btGImpactCompoundShape::CompoundPrimitiveManager & compound) function, expected prototype:\nbtGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(const btGImpactCompoundShape::CompoundPrimitiveManager & compound)\nClass arguments details:\narg 1 ID = 85935800\n");
		}

		const btGImpactCompoundShape::CompoundPrimitiveManager* compound_ptr=(Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1));
		if( !compound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg compound in btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager function");
		}
		const btGImpactCompoundShape::CompoundPrimitiveManager & compound=*compound_ptr;

		return new btGImpactCompoundShape::CompoundPrimitiveManager(compound);
	}

	// btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(btGImpactCompoundShape * compoundShape)
	static btGImpactCompoundShape::CompoundPrimitiveManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(btGImpactCompoundShape * compoundShape) function, expected prototype:\nbtGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(btGImpactCompoundShape * compoundShape)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btGImpactCompoundShape* compoundShape=(Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,1));

		return new btGImpactCompoundShape::CompoundPrimitiveManager(compoundShape);
	}

	// btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager()
	static btGImpactCompoundShape::CompoundPrimitiveManager* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager() function, expected prototype:\nbtGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager()\nClass arguments details:\n");
		}


		return new btGImpactCompoundShape::CompoundPrimitiveManager();
	}

	// btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(lua_Table * data, const btGImpactCompoundShape::CompoundPrimitiveManager & compound)
	static btGImpactCompoundShape::CompoundPrimitiveManager* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(lua_Table * data, const btGImpactCompoundShape::CompoundPrimitiveManager & compound) function, expected prototype:\nbtGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(lua_Table * data, const btGImpactCompoundShape::CompoundPrimitiveManager & compound)\nClass arguments details:\narg 2 ID = 85935800\n");
		}

		const btGImpactCompoundShape::CompoundPrimitiveManager* compound_ptr=(Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,2));
		if( !compound_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg compound in btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager function");
		}
		const btGImpactCompoundShape::CompoundPrimitiveManager & compound=*compound_ptr;

		return new wrapper_btGImpactCompoundShape_CompoundPrimitiveManager(L,NULL, compound);
	}

	// btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(lua_Table * data, btGImpactCompoundShape * compoundShape)
	static btGImpactCompoundShape::CompoundPrimitiveManager* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(lua_Table * data, btGImpactCompoundShape * compoundShape) function, expected prototype:\nbtGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(lua_Table * data, btGImpactCompoundShape * compoundShape)\nClass arguments details:\narg 2 ID = 58243831\n");
		}

		btGImpactCompoundShape* compoundShape=(Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,2));

		return new wrapper_btGImpactCompoundShape_CompoundPrimitiveManager(L,NULL, compoundShape);
	}

	// btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(lua_Table * data)
	static btGImpactCompoundShape::CompoundPrimitiveManager* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(lua_Table * data) function, expected prototype:\nbtGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_btGImpactCompoundShape_CompoundPrimitiveManager(L,NULL);
	}

	// Overload binder for btGImpactCompoundShape::CompoundPrimitiveManager::CompoundPrimitiveManager
	static btGImpactCompoundShape::CompoundPrimitiveManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function CompoundPrimitiveManager, cannot match any of the overloads for function CompoundPrimitiveManager:\n  CompoundPrimitiveManager(const btGImpactCompoundShape::CompoundPrimitiveManager &)\n  CompoundPrimitiveManager(btGImpactCompoundShape *)\n  CompoundPrimitiveManager()\n  CompoundPrimitiveManager(lua_Table *, const btGImpactCompoundShape::CompoundPrimitiveManager &)\n  CompoundPrimitiveManager(lua_Table *, btGImpactCompoundShape *)\n  CompoundPrimitiveManager(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool btGImpactCompoundShape::CompoundPrimitiveManager::is_trimesh() const
	static int _bind_is_trimesh(lua_State *L) {
		if (!_lg_typecheck_is_trimesh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactCompoundShape::CompoundPrimitiveManager::is_trimesh() const function, expected prototype:\nbool btGImpactCompoundShape::CompoundPrimitiveManager::is_trimesh() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactCompoundShape::CompoundPrimitiveManager::is_trimesh() const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		bool lret = self->is_trimesh();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_count() const
	static int _bind_get_primitive_count(lua_State *L) {
		if (!_lg_typecheck_get_primitive_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_count() const function, expected prototype:\nint btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_count() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_count() const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		int lret = self->get_primitive_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_box(int prim_index, btAABB & primbox) const
	static int _bind_get_primitive_box(lua_State *L) {
		if (!_lg_typecheck_get_primitive_box(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_box(int prim_index, btAABB & primbox) const function, expected prototype:\nvoid btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_box(int prim_index, btAABB & primbox) const\nClass arguments details:\narg 2 ID = 14786052\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btAABB* primbox_ptr=(Luna< btAABB >::check(L,3));
		if( !primbox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg primbox in btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_box function");
		}
		btAABB & primbox=*primbox_ptr;

		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_box(int, btAABB &) const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		self->get_primitive_box(prim_index, primbox);

		return 0;
	}

	// void btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const
	static int _bind_get_primitive_triangle(lua_State *L) {
		if (!_lg_typecheck_get_primitive_triangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const function, expected prototype:\nvoid btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const\nClass arguments details:\narg 2 ID = 79712881\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btPrimitiveTriangle* triangle_ptr=(Luna< btPrimitiveTriangle >::check(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_triangle function");
		}
		btPrimitiveTriangle & triangle=*triangle_ptr;

		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::CompoundPrimitiveManager::get_primitive_triangle(int, btPrimitiveTriangle &) const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		self->get_primitive_triangle(prim_index, triangle);

		return 0;
	}

	// btGImpactCompoundShape * btGImpactCompoundShape::CompoundPrimitiveManager::m_compoundShape()
	static int _bind_getM_compoundShape(lua_State *L) {
		if (!_lg_typecheck_getM_compoundShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in btGImpactCompoundShape * btGImpactCompoundShape::CompoundPrimitiveManager::m_compoundShape() function, expected prototype:\nbtGImpactCompoundShape * btGImpactCompoundShape::CompoundPrimitiveManager::m_compoundShape()\nClass arguments details:\n");
		}


		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call btGImpactCompoundShape * btGImpactCompoundShape::CompoundPrimitiveManager::m_compoundShape(). Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		btGImpactCompoundShape * lret = self->m_compoundShape;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< btGImpactCompoundShape >::push(L,lret,false);

		return 1;
	}

	// void btGImpactCompoundShape::CompoundPrimitiveManager::m_compoundShape(btGImpactCompoundShape * value)
	static int _bind_setM_compoundShape(lua_State *L) {
		if (!_lg_typecheck_setM_compoundShape(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::CompoundPrimitiveManager::m_compoundShape(btGImpactCompoundShape * value) function, expected prototype:\nvoid btGImpactCompoundShape::CompoundPrimitiveManager::m_compoundShape(btGImpactCompoundShape * value)\nClass arguments details:\narg 1 ID = 58243831\n");
		}

		btGImpactCompoundShape* value=(Luna< btCollisionShape >::checkSubType< btGImpactCompoundShape >(L,2));

		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::CompoundPrimitiveManager::m_compoundShape(btGImpactCompoundShape *). Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		self->m_compoundShape = value;

		return 0;
	}

	// bool btGImpactCompoundShape::CompoundPrimitiveManager::base_is_trimesh() const
	static int _bind_base_is_trimesh(lua_State *L) {
		if (!_lg_typecheck_base_is_trimesh(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool btGImpactCompoundShape::CompoundPrimitiveManager::base_is_trimesh() const function, expected prototype:\nbool btGImpactCompoundShape::CompoundPrimitiveManager::base_is_trimesh() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool btGImpactCompoundShape::CompoundPrimitiveManager::base_is_trimesh() const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		bool lret = self->CompoundPrimitiveManager::is_trimesh();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_count() const
	static int _bind_base_get_primitive_count(lua_State *L) {
		if (!_lg_typecheck_base_get_primitive_count(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_count() const function, expected prototype:\nint btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_count() const\nClass arguments details:\n");
		}


		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_count() const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		int lret = self->CompoundPrimitiveManager::get_primitive_count();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_box(int prim_index, btAABB & primbox) const
	static int _bind_base_get_primitive_box(lua_State *L) {
		if (!_lg_typecheck_base_get_primitive_box(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_box(int prim_index, btAABB & primbox) const function, expected prototype:\nvoid btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_box(int prim_index, btAABB & primbox) const\nClass arguments details:\narg 2 ID = 14786052\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btAABB* primbox_ptr=(Luna< btAABB >::check(L,3));
		if( !primbox_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg primbox in btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_box function");
		}
		btAABB & primbox=*primbox_ptr;

		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_box(int, btAABB &) const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		self->CompoundPrimitiveManager::get_primitive_box(prim_index, primbox);

		return 0;
	}

	// void btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const
	static int _bind_base_get_primitive_triangle(lua_State *L) {
		if (!_lg_typecheck_base_get_primitive_triangle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const function, expected prototype:\nvoid btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_triangle(int prim_index, btPrimitiveTriangle & triangle) const\nClass arguments details:\narg 2 ID = 79712881\n");
		}

		int prim_index=(int)lua_tointeger(L,2);
		btPrimitiveTriangle* triangle_ptr=(Luna< btPrimitiveTriangle >::check(L,3));
		if( !triangle_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg triangle in btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_triangle function");
		}
		btPrimitiveTriangle & triangle=*triangle_ptr;

		btGImpactCompoundShape::CompoundPrimitiveManager* self=Luna< btPrimitiveManagerBase >::checkSubType< btGImpactCompoundShape::CompoundPrimitiveManager >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void btGImpactCompoundShape::CompoundPrimitiveManager::base_get_primitive_triangle(int, btPrimitiveTriangle &) const. Got : '%s'",typeid(Luna< btPrimitiveManagerBase >::check(L,1)).name());
		}
		self->CompoundPrimitiveManager::get_primitive_triangle(prim_index, triangle);

		return 0;
	}


	// Operator binds:

};

btGImpactCompoundShape::CompoundPrimitiveManager* LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_ctor(L);
}

void LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::_bind_dtor(btGImpactCompoundShape::CompoundPrimitiveManager* obj) {
	delete obj;
}

const char LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::className[] = "btGImpactCompoundShape_CompoundPrimitiveManager";
const char LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::fullName[] = "btGImpactCompoundShape::CompoundPrimitiveManager";
const char LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::moduleName[] = "bullet";
const char* LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::parents[] = {"bullet.btPrimitiveManagerBase", 0};
const int LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::hash = 43562678;
const int LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::uniqueIDs[] = {85935800,0};

luna_RegType LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::methods[] = {
	{"is_trimesh", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_is_trimesh},
	{"get_primitive_count", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_get_primitive_count},
	{"get_primitive_box", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_get_primitive_box},
	{"get_primitive_triangle", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_get_primitive_triangle},
	{"getM_compoundShape", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_getM_compoundShape},
	{"setM_compoundShape", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_setM_compoundShape},
	{"base_is_trimesh", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_base_is_trimesh},
	{"base_get_primitive_count", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_base_get_primitive_count},
	{"base_get_primitive_box", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_base_get_primitive_box},
	{"base_get_primitive_triangle", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_base_get_primitive_triangle},
	{"__eq", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind___eq},
	{"getTable", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::converters[] = {
	{"btPrimitiveManagerBase", &luna_wrapper_btGImpactCompoundShape_CompoundPrimitiveManager::_cast_from_btPrimitiveManagerBase},
	{0,0}
};

luna_RegEnumType LunaTraits< btGImpactCompoundShape::CompoundPrimitiveManager >::enumValues[] = {
	{0,0}
};


