#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_RenderLeaf.h>

class luna_wrapper_osgUtil_RenderLeaf {
public:
	typedef Luna< osgUtil::RenderLeaf > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osgUtil::RenderLeaf* ptr= dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::RenderLeaf* ptr= luna_caster< osg::Referenced, osgUtil::RenderLeaf >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderLeaf >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3)) ) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,4)) ) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( luatop>4 && lua_isnumber(L,5)==0 ) return false;
		if( luatop>5 && (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_render(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_render(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::RenderLeaf::RenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)
	static osgUtil::RenderLeaf* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderLeaf::RenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) function, expected prototype:\nosgUtil::RenderLeaf::RenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,1));
		osg::RefMatrixd* projection=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));
		osg::RefMatrixd* modelview=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		float depth=luatop>3 ? (float)lua_tonumber(L,4) : 0.0f;
		unsigned int traversalNumber=luatop>4 ? (unsigned int)lua_tointeger(L,5) : 0;

		return new osgUtil::RenderLeaf(drawable, projection, modelview, depth, traversalNumber);
	}

	// osgUtil::RenderLeaf::RenderLeaf(lua_Table * data, osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)
	static osgUtil::RenderLeaf* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderLeaf::RenderLeaf(lua_Table * data, osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) function, expected prototype:\nosgUtil::RenderLeaf::RenderLeaf(lua_Table * data, osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\narg 4 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		osg::RefMatrixd* projection=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		osg::RefMatrixd* modelview=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,4));
		float depth=luatop>4 ? (float)lua_tonumber(L,5) : 0.0f;
		unsigned int traversalNumber=luatop>5 ? (unsigned int)lua_tointeger(L,6) : 0;

		return new wrapper_osgUtil_RenderLeaf(L,NULL, drawable, projection, modelview, depth, traversalNumber);
	}

	// Overload binder for osgUtil::RenderLeaf::RenderLeaf
	static osgUtil::RenderLeaf* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RenderLeaf, cannot match any of the overloads for function RenderLeaf:\n  RenderLeaf(osg::Drawable *, osg::RefMatrixd *, osg::RefMatrixd *, float, unsigned int)\n  RenderLeaf(lua_Table *, osg::Drawable *, osg::RefMatrixd *, osg::RefMatrixd *, float, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::RenderLeaf::set(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::set(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) function, expected prototype:\nvoid osgUtil::RenderLeaf::set(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,2));
		osg::RefMatrixd* projection=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		osg::RefMatrixd* modelview=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,4));
		float depth=luatop>4 ? (float)lua_tonumber(L,5) : 0.0f;
		unsigned int traversalNumber=luatop>5 ? (unsigned int)lua_tointeger(L,6) : 0;

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::set(osg::Drawable *, osg::RefMatrixd *, osg::RefMatrixd *, float, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->set(drawable, projection, modelview, depth, traversalNumber);

		return 0;
	}

	// void osgUtil::RenderLeaf::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::reset() function, expected prototype:\nvoid osgUtil::RenderLeaf::reset()\nClass arguments details:\n");
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::reset(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::RenderLeaf::render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)
	static int _bind_render(lua_State *L) {
		if (!_lg_typecheck_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous) function, expected prototype:\nvoid osgUtil::RenderLeaf::render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderLeaf::render function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::render(osg::RenderInfo &, osgUtil::RenderLeaf *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->render(renderInfo, previous);

		return 0;
	}

	// const osg::Drawable * osgUtil::RenderLeaf::getDrawable() const
	static int _bind_getDrawable(lua_State *L) {
		if (!_lg_typecheck_getDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Drawable * osgUtil::RenderLeaf::getDrawable() const function, expected prototype:\nconst osg::Drawable * osgUtil::RenderLeaf::getDrawable() const\nClass arguments details:\n");
		}


		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Drawable * osgUtil::RenderLeaf::getDrawable() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Drawable * lret = self->getDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::RenderLeaf::base_render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)
	static int _bind_base_render(lua_State *L) {
		if (!_lg_typecheck_base_render(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::base_render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous) function, expected prototype:\nvoid osgUtil::RenderLeaf::base_render(osg::RenderInfo & renderInfo, osgUtil::RenderLeaf * previous)\nClass arguments details:\narg 1 ID = 2286263\narg 2 ID = 50169651\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::RenderLeaf::base_render function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));

		osgUtil::RenderLeaf* self=Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::base_render(osg::RenderInfo &, osgUtil::RenderLeaf *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->RenderLeaf::render(renderInfo, previous);

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderLeaf* LunaTraits< osgUtil::RenderLeaf >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_RenderLeaf::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgUtil::RenderLeaf >::_bind_dtor(osgUtil::RenderLeaf* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::RenderLeaf >::className[] = "RenderLeaf";
const char LunaTraits< osgUtil::RenderLeaf >::fullName[] = "osgUtil::RenderLeaf";
const char LunaTraits< osgUtil::RenderLeaf >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderLeaf >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::RenderLeaf >::hash = 60833856;
const int LunaTraits< osgUtil::RenderLeaf >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::RenderLeaf >::methods[] = {
	{"set", &luna_wrapper_osgUtil_RenderLeaf::_bind_set},
	{"reset", &luna_wrapper_osgUtil_RenderLeaf::_bind_reset},
	{"render", &luna_wrapper_osgUtil_RenderLeaf::_bind_render},
	{"getDrawable", &luna_wrapper_osgUtil_RenderLeaf::_bind_getDrawable},
	{"base_render", &luna_wrapper_osgUtil_RenderLeaf::_bind_base_render},
	{"__eq", &luna_wrapper_osgUtil_RenderLeaf::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_RenderLeaf::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderLeaf >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderLeaf::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderLeaf >::enumValues[] = {
	{0,0}
};


