#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GraphicsCostEstimator.h>

class luna_wrapper_osg_GraphicsCostEstimator {
public:
	typedef Luna< osg::GraphicsCostEstimator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osg::GraphicsCostEstimator* ptr= dynamic_cast< osg::GraphicsCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		osg::GraphicsCostEstimator* ptr= luna_caster< osg::Referenced, osg::GraphicsCostEstimator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GraphicsCostEstimator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_calibrate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateCompileCost_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateCompileCost_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateCompileCost_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Program* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateCompileCost_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateDrawCost_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateDrawCost_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateDrawCost_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Program* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateDrawCost_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GraphicsCostEstimator::GraphicsCostEstimator()
	static osg::GraphicsCostEstimator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsCostEstimator::GraphicsCostEstimator() function, expected prototype:\nosg::GraphicsCostEstimator::GraphicsCostEstimator()\nClass arguments details:\n");
		}


		return new osg::GraphicsCostEstimator();
	}

	// osg::GraphicsCostEstimator::GraphicsCostEstimator(lua_Table * data)
	static osg::GraphicsCostEstimator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GraphicsCostEstimator::GraphicsCostEstimator(lua_Table * data) function, expected prototype:\nosg::GraphicsCostEstimator::GraphicsCostEstimator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_GraphicsCostEstimator(L,NULL);
	}

	// Overload binder for osg::GraphicsCostEstimator::GraphicsCostEstimator
	static osg::GraphicsCostEstimator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GraphicsCostEstimator, cannot match any of the overloads for function GraphicsCostEstimator:\n  GraphicsCostEstimator()\n  GraphicsCostEstimator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::GraphicsCostEstimator::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsCostEstimator::setDefaults() function, expected prototype:\nvoid osg::GraphicsCostEstimator::setDefaults()\nClass arguments details:\n");
		}


		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsCostEstimator::setDefaults()");
		}
		self->setDefaults();

		return 0;
	}

	// void osg::GraphicsCostEstimator::calibrate(osg::RenderInfo & renderInfo)
	static int _bind_calibrate(lua_State *L) {
		if (!_lg_typecheck_calibrate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::GraphicsCostEstimator::calibrate(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osg::GraphicsCostEstimator::calibrate(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::GraphicsCostEstimator::calibrate function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::GraphicsCostEstimator::calibrate(osg::RenderInfo &)");
		}
		self->calibrate(renderInfo);

		return 0;
	}

	// osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Geometry * geometry) const
	static int _bind_estimateCompileCost_overload_1(lua_State *L) {
		if (!_lg_typecheck_estimateCompileCost_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Geometry * geometry) const function, expected prototype:\nosg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Geometry * geometry) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Geometry* geometry=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));

		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Geometry *) const");
		}
		osg::CostPair stack_lret = self->estimateCompileCost(geometry);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Texture * texture) const
	static int _bind_estimateCompileCost_overload_2(lua_State *L) {
		if (!_lg_typecheck_estimateCompileCost_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Texture * texture) const function, expected prototype:\nosg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Texture * texture) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Texture *) const");
		}
		osg::CostPair stack_lret = self->estimateCompileCost(texture);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Program * program) const
	static int _bind_estimateCompileCost_overload_3(lua_State *L) {
		if (!_lg_typecheck_estimateCompileCost_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Program * program) const function, expected prototype:\nosg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Program * program) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Program* program=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2));

		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Program *) const");
		}
		osg::CostPair stack_lret = self->estimateCompileCost(program);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Node * node) const
	static int _bind_estimateCompileCost_overload_4(lua_State *L) {
		if (!_lg_typecheck_estimateCompileCost_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Node * node) const function, expected prototype:\nosg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Node * node) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GraphicsCostEstimator::estimateCompileCost(const osg::Node *) const");
		}
		osg::CostPair stack_lret = self->estimateCompileCost(node);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::GraphicsCostEstimator::estimateCompileCost
	static int _bind_estimateCompileCost(lua_State *L) {
		if (_lg_typecheck_estimateCompileCost_overload_1(L)) return _bind_estimateCompileCost_overload_1(L);
		if (_lg_typecheck_estimateCompileCost_overload_2(L)) return _bind_estimateCompileCost_overload_2(L);
		if (_lg_typecheck_estimateCompileCost_overload_3(L)) return _bind_estimateCompileCost_overload_3(L);
		if (_lg_typecheck_estimateCompileCost_overload_4(L)) return _bind_estimateCompileCost_overload_4(L);

		luaL_error(L, "error in function estimateCompileCost, cannot match any of the overloads for function estimateCompileCost:\n  estimateCompileCost(const osg::Geometry *)\n  estimateCompileCost(const osg::Texture *)\n  estimateCompileCost(const osg::Program *)\n  estimateCompileCost(const osg::Node *)\n");
		return 0;
	}

	// osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Geometry * geometry) const
	static int _bind_estimateDrawCost_overload_1(lua_State *L) {
		if (!_lg_typecheck_estimateDrawCost_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Geometry * geometry) const function, expected prototype:\nosg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Geometry * geometry) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Geometry* geometry=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));

		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Geometry *) const");
		}
		osg::CostPair stack_lret = self->estimateDrawCost(geometry);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Texture * texture) const
	static int _bind_estimateDrawCost_overload_2(lua_State *L) {
		if (!_lg_typecheck_estimateDrawCost_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Texture * texture) const function, expected prototype:\nosg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Texture * texture) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Texture *) const");
		}
		osg::CostPair stack_lret = self->estimateDrawCost(texture);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Program * program) const
	static int _bind_estimateDrawCost_overload_3(lua_State *L) {
		if (!_lg_typecheck_estimateDrawCost_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Program * program) const function, expected prototype:\nosg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Program * program) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Program* program=(Luna< osg::Referenced >::checkSubType< osg::Program >(L,2));

		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Program *) const");
		}
		osg::CostPair stack_lret = self->estimateDrawCost(program);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Node * node) const
	static int _bind_estimateDrawCost_overload_4(lua_State *L) {
		if (!_lg_typecheck_estimateDrawCost_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Node * node) const function, expected prototype:\nosg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Node * node) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::GraphicsCostEstimator* self=Luna< osg::Referenced >::checkSubType< osg::GraphicsCostEstimator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::GraphicsCostEstimator::estimateDrawCost(const osg::Node *) const");
		}
		osg::CostPair stack_lret = self->estimateDrawCost(node);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osg::GraphicsCostEstimator::estimateDrawCost
	static int _bind_estimateDrawCost(lua_State *L) {
		if (_lg_typecheck_estimateDrawCost_overload_1(L)) return _bind_estimateDrawCost_overload_1(L);
		if (_lg_typecheck_estimateDrawCost_overload_2(L)) return _bind_estimateDrawCost_overload_2(L);
		if (_lg_typecheck_estimateDrawCost_overload_3(L)) return _bind_estimateDrawCost_overload_3(L);
		if (_lg_typecheck_estimateDrawCost_overload_4(L)) return _bind_estimateDrawCost_overload_4(L);

		luaL_error(L, "error in function estimateDrawCost, cannot match any of the overloads for function estimateDrawCost:\n  estimateDrawCost(const osg::Geometry *)\n  estimateDrawCost(const osg::Texture *)\n  estimateDrawCost(const osg::Program *)\n  estimateDrawCost(const osg::Node *)\n");
		return 0;
	}


	// Operator binds:

};

osg::GraphicsCostEstimator* LunaTraits< osg::GraphicsCostEstimator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GraphicsCostEstimator::_bind_ctor(L);
}

void LunaTraits< osg::GraphicsCostEstimator >::_bind_dtor(osg::GraphicsCostEstimator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GraphicsCostEstimator >::className[] = "GraphicsCostEstimator";
const char LunaTraits< osg::GraphicsCostEstimator >::fullName[] = "osg::GraphicsCostEstimator";
const char LunaTraits< osg::GraphicsCostEstimator >::moduleName[] = "osg";
const char* LunaTraits< osg::GraphicsCostEstimator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GraphicsCostEstimator >::hash = 50584219;
const int LunaTraits< osg::GraphicsCostEstimator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GraphicsCostEstimator >::methods[] = {
	{"setDefaults", &luna_wrapper_osg_GraphicsCostEstimator::_bind_setDefaults},
	{"calibrate", &luna_wrapper_osg_GraphicsCostEstimator::_bind_calibrate},
	{"estimateCompileCost", &luna_wrapper_osg_GraphicsCostEstimator::_bind_estimateCompileCost},
	{"estimateDrawCost", &luna_wrapper_osg_GraphicsCostEstimator::_bind_estimateDrawCost},
	{"__eq", &luna_wrapper_osg_GraphicsCostEstimator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GraphicsCostEstimator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GraphicsCostEstimator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GraphicsCostEstimator >::enumValues[] = {
	{0,0}
};


