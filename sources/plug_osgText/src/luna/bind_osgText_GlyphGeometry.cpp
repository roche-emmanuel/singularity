#include <plug_common.h>

class luna_wrapper_osgText_GlyphGeometry {
public:
	typedef Luna< osgText::GlyphGeometry > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgText::GlyphGeometry* ptr= dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::GlyphGeometry >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setup(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_match(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGeode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setVertexArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7204710)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNormalArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7204710)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNormalArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::GlyphGeometry::GlyphGeometry()
	static osgText::GlyphGeometry* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::GlyphGeometry::GlyphGeometry() function, expected prototype:\nosgText::GlyphGeometry::GlyphGeometry()\nClass arguments details:\n");
		}


		return new osgText::GlyphGeometry();
	}


	// Function binds:
	// void osgText::GlyphGeometry::setup(const osgText::Glyph3D * glyph, const osgText::Style * style)
	static int _bind_setup(lua_State *L) {
		if (!_lg_typecheck_setup(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::GlyphGeometry::setup(const osgText::Glyph3D * glyph, const osgText::Style * style) function, expected prototype:\nvoid osgText::GlyphGeometry::setup(const osgText::Glyph3D * glyph, const osgText::Style * style)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		const osgText::Glyph3D* glyph=dynamic_cast< osgText::Glyph3D* >(Luna< osg::Referenced >::check(L,2));
		const osgText::Style* style=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,3));

		osgText::GlyphGeometry* self=dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::GlyphGeometry::setup(const osgText::Glyph3D *, const osgText::Style *)");
		}
		self->setup(glyph, style);

		return 0;
	}

	// bool osgText::GlyphGeometry::match(const osgText::Style * style) const
	static int _bind_match(lua_State *L) {
		if (!_lg_typecheck_match(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::GlyphGeometry::match(const osgText::Style * style) const function, expected prototype:\nbool osgText::GlyphGeometry::match(const osgText::Style * style) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgText::Style* style=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,2));

		osgText::GlyphGeometry* self=dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::GlyphGeometry::match(const osgText::Style *) const");
		}
		bool lret = self->match(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Geode * osgText::GlyphGeometry::getGeode() const
	static int _bind_getGeode(lua_State *L) {
		if (!_lg_typecheck_getGeode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geode * osgText::GlyphGeometry::getGeode() const function, expected prototype:\nosg::Geode * osgText::GlyphGeometry::getGeode() const\nClass arguments details:\n");
		}


		osgText::GlyphGeometry* self=dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geode * osgText::GlyphGeometry::getGeode() const");
		}
		osg::Geode * lret = self->getGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// osg::Geometry * osgText::GlyphGeometry::getGeometry() const
	static int _bind_getGeometry(lua_State *L) {
		if (!_lg_typecheck_getGeometry(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgText::GlyphGeometry::getGeometry() const function, expected prototype:\nosg::Geometry * osgText::GlyphGeometry::getGeometry() const\nClass arguments details:\n");
		}


		osgText::GlyphGeometry* self=dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geometry * osgText::GlyphGeometry::getGeometry() const");
		}
		osg::Geometry * lret = self->getGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// void osgText::GlyphGeometry::setVertexArray(osg::Vec3Array * va)
	static int _bind_setVertexArray(lua_State *L) {
		if (!_lg_typecheck_setVertexArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::GlyphGeometry::setVertexArray(osg::Vec3Array * va) function, expected prototype:\nvoid osgText::GlyphGeometry::setVertexArray(osg::Vec3Array * va)\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		osg::Vec3Array* va=(Luna< osg::Vec3Array >::check(L,2));

		osgText::GlyphGeometry* self=dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::GlyphGeometry::setVertexArray(osg::Vec3Array *)");
		}
		self->setVertexArray(va);

		return 0;
	}

	// osg::Vec3Array * osgText::GlyphGeometry::getVertexArray() const
	static int _bind_getVertexArray(lua_State *L) {
		if (!_lg_typecheck_getVertexArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osgText::GlyphGeometry::getVertexArray() const function, expected prototype:\nosg::Vec3Array * osgText::GlyphGeometry::getVertexArray() const\nClass arguments details:\n");
		}


		osgText::GlyphGeometry* self=dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osgText::GlyphGeometry::getVertexArray() const");
		}
		osg::Vec3Array * lret = self->getVertexArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// void osgText::GlyphGeometry::setNormalArray(osg::Vec3Array * na)
	static int _bind_setNormalArray(lua_State *L) {
		if (!_lg_typecheck_setNormalArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::GlyphGeometry::setNormalArray(osg::Vec3Array * na) function, expected prototype:\nvoid osgText::GlyphGeometry::setNormalArray(osg::Vec3Array * na)\nClass arguments details:\narg 1 ID = 7204710\n");
		}

		osg::Vec3Array* na=(Luna< osg::Vec3Array >::check(L,2));

		osgText::GlyphGeometry* self=dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::GlyphGeometry::setNormalArray(osg::Vec3Array *)");
		}
		self->setNormalArray(na);

		return 0;
	}

	// osg::Vec3Array * osgText::GlyphGeometry::getNormalArray() const
	static int _bind_getNormalArray(lua_State *L) {
		if (!_lg_typecheck_getNormalArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osgText::GlyphGeometry::getNormalArray() const function, expected prototype:\nosg::Vec3Array * osgText::GlyphGeometry::getNormalArray() const\nClass arguments details:\n");
		}


		osgText::GlyphGeometry* self=dynamic_cast< osgText::GlyphGeometry* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osgText::GlyphGeometry::getNormalArray() const");
		}
		osg::Vec3Array * lret = self->getNormalArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgText::GlyphGeometry* LunaTraits< osgText::GlyphGeometry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_GlyphGeometry::_bind_ctor(L);
}

void LunaTraits< osgText::GlyphGeometry >::_bind_dtor(osgText::GlyphGeometry* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::GlyphGeometry >::className[] = "GlyphGeometry";
const char LunaTraits< osgText::GlyphGeometry >::fullName[] = "osgText::GlyphGeometry";
const char LunaTraits< osgText::GlyphGeometry >::moduleName[] = "osgText";
const char* LunaTraits< osgText::GlyphGeometry >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgText::GlyphGeometry >::hash = 62554922;
const int LunaTraits< osgText::GlyphGeometry >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::GlyphGeometry >::methods[] = {
	{"setup", &luna_wrapper_osgText_GlyphGeometry::_bind_setup},
	{"match", &luna_wrapper_osgText_GlyphGeometry::_bind_match},
	{"getGeode", &luna_wrapper_osgText_GlyphGeometry::_bind_getGeode},
	{"getGeometry", &luna_wrapper_osgText_GlyphGeometry::_bind_getGeometry},
	{"setVertexArray", &luna_wrapper_osgText_GlyphGeometry::_bind_setVertexArray},
	{"getVertexArray", &luna_wrapper_osgText_GlyphGeometry::_bind_getVertexArray},
	{"setNormalArray", &luna_wrapper_osgText_GlyphGeometry::_bind_setNormalArray},
	{"getNormalArray", &luna_wrapper_osgText_GlyphGeometry::_bind_getNormalArray},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::GlyphGeometry >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_GlyphGeometry::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::GlyphGeometry >::enumValues[] = {
	{0,0}
};

