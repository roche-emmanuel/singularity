#include <plug_common.h>

class luna_wrapper_osg_TextureCostEstimator {
public:
	typedef Luna< osg::TextureCostEstimator > luna_t;

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
		osg::TextureCostEstimator* ptr= dynamic_cast< osg::TextureCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TextureCostEstimator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_estimateCompileCost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_estimateDrawCost(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TextureCostEstimator::TextureCostEstimator()
	static osg::TextureCostEstimator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TextureCostEstimator::TextureCostEstimator() function, expected prototype:\nosg::TextureCostEstimator::TextureCostEstimator()\nClass arguments details:\n");
		}


		return new osg::TextureCostEstimator();
	}


	// Function binds:
	// void osg::TextureCostEstimator::setDefaults()
	static int _bind_setDefaults(lua_State *L) {
		if (!_lg_typecheck_setDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureCostEstimator::setDefaults() function, expected prototype:\nvoid osg::TextureCostEstimator::setDefaults()\nClass arguments details:\n");
		}


		osg::TextureCostEstimator* self=dynamic_cast< osg::TextureCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureCostEstimator::setDefaults()");
		}
		self->setDefaults();

		return 0;
	}

	// void osg::TextureCostEstimator::calibrate(osg::RenderInfo & renderInfo)
	static int _bind_calibrate(lua_State *L) {
		if (!_lg_typecheck_calibrate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TextureCostEstimator::calibrate(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osg::TextureCostEstimator::calibrate(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::TextureCostEstimator::calibrate function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::TextureCostEstimator* self=dynamic_cast< osg::TextureCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TextureCostEstimator::calibrate(osg::RenderInfo &)");
		}
		self->calibrate(renderInfo);

		return 0;
	}

	// osg::CostPair osg::TextureCostEstimator::estimateCompileCost(const osg::Texture * texture) const
	static int _bind_estimateCompileCost(lua_State *L) {
		if (!_lg_typecheck_estimateCompileCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::TextureCostEstimator::estimateCompileCost(const osg::Texture * texture) const function, expected prototype:\nosg::CostPair osg::TextureCostEstimator::estimateCompileCost(const osg::Texture * texture) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Texture* texture=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2));

		osg::TextureCostEstimator* self=dynamic_cast< osg::TextureCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::TextureCostEstimator::estimateCompileCost(const osg::Texture *) const");
		}
		osg::CostPair stack_lret = self->estimateCompileCost(texture);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}

	// osg::CostPair osg::TextureCostEstimator::estimateDrawCost(const osg::Texture * texture) const
	static int _bind_estimateDrawCost(lua_State *L) {
		if (!_lg_typecheck_estimateDrawCost(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CostPair osg::TextureCostEstimator::estimateDrawCost(const osg::Texture * texture) const function, expected prototype:\nosg::CostPair osg::TextureCostEstimator::estimateDrawCost(const osg::Texture * texture) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Texture* texture=dynamic_cast< osg::Texture* >(Luna< osg::Referenced >::check(L,2));

		osg::TextureCostEstimator* self=dynamic_cast< osg::TextureCostEstimator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::CostPair osg::TextureCostEstimator::estimateDrawCost(const osg::Texture *) const");
		}
		osg::CostPair stack_lret = self->estimateDrawCost(texture);
		osg::CostPair* lret = new osg::CostPair(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::CostPair >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::TextureCostEstimator* LunaTraits< osg::TextureCostEstimator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TextureCostEstimator::_bind_ctor(L);
}

void LunaTraits< osg::TextureCostEstimator >::_bind_dtor(osg::TextureCostEstimator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TextureCostEstimator >::className[] = "TextureCostEstimator";
const char LunaTraits< osg::TextureCostEstimator >::fullName[] = "osg::TextureCostEstimator";
const char LunaTraits< osg::TextureCostEstimator >::moduleName[] = "osg";
const char* LunaTraits< osg::TextureCostEstimator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::TextureCostEstimator >::hash = 13759554;
const int LunaTraits< osg::TextureCostEstimator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TextureCostEstimator >::methods[] = {
	{"setDefaults", &luna_wrapper_osg_TextureCostEstimator::_bind_setDefaults},
	{"calibrate", &luna_wrapper_osg_TextureCostEstimator::_bind_calibrate},
	{"estimateCompileCost", &luna_wrapper_osg_TextureCostEstimator::_bind_estimateCompileCost},
	{"estimateDrawCost", &luna_wrapper_osg_TextureCostEstimator::_bind_estimateDrawCost},
	{"__eq", &luna_wrapper_osg_TextureCostEstimator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TextureCostEstimator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TextureCostEstimator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TextureCostEstimator >::enumValues[] = {
	{0,0}
};


