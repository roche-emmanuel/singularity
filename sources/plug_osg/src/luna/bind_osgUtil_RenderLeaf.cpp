#include <plug_common.h>

class luna_wrapper_osgUtil_RenderLeaf {
public:
	typedef Luna< osgUtil::RenderLeaf > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgUtil::RenderLeaf* ptr= dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::RenderLeaf >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && lua_isnumber(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnumber(L,5)==0 || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::RenderLeaf::RenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)
	static osgUtil::RenderLeaf* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::RenderLeaf::RenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) function, expected prototype:\nosgUtil::RenderLeaf::RenderLeaf(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,1));
		osg::RefMatrixd* projection=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));
		osg::RefMatrixd* modelview=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,3));
		float depth=luatop>3 ? (float)lua_tonumber(L,4) : 0.0f;
		unsigned int traversalNumber=luatop>4 ? (unsigned int)lua_tointeger(L,5) : 0;

		return new osgUtil::RenderLeaf(drawable, projection, modelview, depth, traversalNumber);
	}


	// Function binds:
	// void osgUtil::RenderLeaf::set(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderLeaf::set(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0) function, expected prototype:\nvoid osgUtil::RenderLeaf::set(osg::Drawable * drawable, osg::RefMatrixd * projection, osg::RefMatrixd * modelview, float depth = 0.0f, unsigned int traversalNumber = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));
		osg::RefMatrixd* projection=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,3));
		osg::RefMatrixd* modelview=dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,4));
		float depth=luatop>4 ? (float)lua_tonumber(L,5) : 0.0f;
		unsigned int traversalNumber=luatop>5 ? (unsigned int)lua_tointeger(L,6) : 0;

		osgUtil::RenderLeaf* self=dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::set(osg::Drawable *, osg::RefMatrixd *, osg::RefMatrixd *, float, unsigned int)");
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


		osgUtil::RenderLeaf* self=dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::reset()");
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
		osgUtil::RenderLeaf* previous=dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,3));

		osgUtil::RenderLeaf* self=dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::RenderLeaf::render(osg::RenderInfo &, osgUtil::RenderLeaf *)");
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


		osgUtil::RenderLeaf* self=dynamic_cast< osgUtil::RenderLeaf* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Drawable * osgUtil::RenderLeaf::getDrawable() const");
		}
		const osg::Drawable * lret = self->getDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgUtil::RenderLeaf* LunaTraits< osgUtil::RenderLeaf >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_RenderLeaf::_bind_ctor(L);
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
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderLeaf >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_RenderLeaf::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderLeaf >::enumValues[] = {
	{0,0}
};


