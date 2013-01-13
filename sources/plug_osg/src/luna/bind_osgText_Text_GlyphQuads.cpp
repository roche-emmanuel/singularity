#include <plug_common.h>

class luna_wrapper_osgText_Text_GlyphQuads {
public:
	typedef Luna< osgText::Text::GlyphQuads > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89190250) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgText::Text::GlyphQuads*)");
		}

		osgText::Text::GlyphQuads* rhs =(Luna< osgText::Text::GlyphQuads >::check(L,2));
		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgText::Text::GlyphQuads");
		
		return luna_dynamicCast(L,converters,"osgText::Text::GlyphQuads",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getGlyphs_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlyphs_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCoords_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCoords_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTransformedCoords_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTransformedCoords_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexCoords_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexCoords_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineNumbers_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLineNumbers_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_glyphs(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_coords(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_texcoords(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_lineNumbers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_colorCoords(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set_glyphs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57567263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_coords(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30190297) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_texcoords(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30190297) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_lineNumbers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27834872) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_colorCoords(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30249879) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs()
	static int _bind_getGlyphs_overload_1(lua_State *L) {
		if (!_lg_typecheck_getGlyphs_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs() function, expected prototype:\nosgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs()\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs(). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		osgText::Text::GlyphQuads::Glyphs stack_lret = self->getGlyphs();
		osgText::Text::GlyphQuads::Glyphs* lret = new osgText::Text::GlyphQuads::Glyphs(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::Glyphs >::push(L,lret,true);

		return 1;
	}

	// const osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs() const
	static int _bind_getGlyphs_overload_2(lua_State *L) {
		if (!_lg_typecheck_getGlyphs_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs() const function, expected prototype:\nconst osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs() const\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs() const. Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::Glyphs stack_lret = self->getGlyphs();
		const osgText::Text::GlyphQuads::Glyphs* lret = new const osgText::Text::GlyphQuads::Glyphs(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::Glyphs >::push(L,lret,true);

		return 1;
	}

	// Overload binder for osgText::Text::GlyphQuads::getGlyphs
	static int _bind_getGlyphs(lua_State *L) {
		if (_lg_typecheck_getGlyphs_overload_1(L)) return _bind_getGlyphs_overload_1(L);
		if (_lg_typecheck_getGlyphs_overload_2(L)) return _bind_getGlyphs_overload_2(L);

		luaL_error(L, "error in function getGlyphs, cannot match any of the overloads for function getGlyphs:\n  getGlyphs()\n  getGlyphs()\n");
		return 0;
	}

	// osgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords()
	static int _bind_getCoords_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCoords_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords() function, expected prototype:\nosgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords()\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords(). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::Coords2* lret = &self->getCoords();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::Coords2 >::push(L,lret,false);

		return 1;
	}

	// const osgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords() const
	static int _bind_getCoords_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCoords_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords() const function, expected prototype:\nconst osgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords() const\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords() const. Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::Coords2* lret = &self->getCoords();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::Coords2 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text::GlyphQuads::getCoords
	static int _bind_getCoords(lua_State *L) {
		if (_lg_typecheck_getCoords_overload_1(L)) return _bind_getCoords_overload_1(L);
		if (_lg_typecheck_getCoords_overload_2(L)) return _bind_getCoords_overload_2(L);

		luaL_error(L, "error in function getCoords, cannot match any of the overloads for function getCoords:\n  getCoords()\n  getCoords()\n");
		return 0;
	}

	// osgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int contexID)
	static int _bind_getTransformedCoords_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTransformedCoords_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int contexID) function, expected prototype:\nosgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int contexID)\nClass arguments details:\n");
		}

		unsigned int contexID=(unsigned int)lua_tointeger(L,2);

		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::Coords3* lret = &self->getTransformedCoords(contexID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::Coords3 >::push(L,lret,false);

		return 1;
	}

	// const osgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int contexID) const
	static int _bind_getTransformedCoords_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTransformedCoords_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int contexID) const function, expected prototype:\nconst osgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int contexID) const\nClass arguments details:\n");
		}

		unsigned int contexID=(unsigned int)lua_tointeger(L,2);

		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int) const. Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::Coords3* lret = &self->getTransformedCoords(contexID);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::Coords3 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text::GlyphQuads::getTransformedCoords
	static int _bind_getTransformedCoords(lua_State *L) {
		if (_lg_typecheck_getTransformedCoords_overload_1(L)) return _bind_getTransformedCoords_overload_1(L);
		if (_lg_typecheck_getTransformedCoords_overload_2(L)) return _bind_getTransformedCoords_overload_2(L);

		luaL_error(L, "error in function getTransformedCoords, cannot match any of the overloads for function getTransformedCoords:\n  getTransformedCoords(unsigned int)\n  getTransformedCoords(unsigned int)\n");
		return 0;
	}

	// osgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords()
	static int _bind_getTexCoords_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexCoords_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords() function, expected prototype:\nosgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords()\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords(). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::TexCoords* lret = &self->getTexCoords();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::TexCoords >::push(L,lret,false);

		return 1;
	}

	// const osgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords() const
	static int _bind_getTexCoords_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexCoords_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords() const function, expected prototype:\nconst osgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords() const\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords() const. Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::TexCoords* lret = &self->getTexCoords();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::TexCoords >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text::GlyphQuads::getTexCoords
	static int _bind_getTexCoords(lua_State *L) {
		if (_lg_typecheck_getTexCoords_overload_1(L)) return _bind_getTexCoords_overload_1(L);
		if (_lg_typecheck_getTexCoords_overload_2(L)) return _bind_getTexCoords_overload_2(L);

		luaL_error(L, "error in function getTexCoords, cannot match any of the overloads for function getTexCoords:\n  getTexCoords()\n  getTexCoords()\n");
		return 0;
	}

	// osgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers()
	static int _bind_getLineNumbers_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLineNumbers_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers() function, expected prototype:\nosgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers()\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers(). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::LineNumbers* lret = &self->getLineNumbers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::LineNumbers >::push(L,lret,false);

		return 1;
	}

	// const osgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers() const
	static int _bind_getLineNumbers_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLineNumbers_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers() const function, expected prototype:\nconst osgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers() const\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers() const. Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::LineNumbers* lret = &self->getLineNumbers();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::LineNumbers >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Text::GlyphQuads::getLineNumbers
	static int _bind_getLineNumbers(lua_State *L) {
		if (_lg_typecheck_getLineNumbers_overload_1(L)) return _bind_getLineNumbers_overload_1(L);
		if (_lg_typecheck_getLineNumbers_overload_2(L)) return _bind_getLineNumbers_overload_2(L);

		luaL_error(L, "error in function getLineNumbers, cannot match any of the overloads for function getLineNumbers:\n  getLineNumbers()\n  getLineNumbers()\n");
		return 0;
	}

	// osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::_glyphs()
	static int _bind_get_glyphs(lua_State *L) {
		if (!_lg_typecheck_get_glyphs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::_glyphs() function, expected prototype:\nosgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::_glyphs()\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::_glyphs(). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::Glyphs* lret = &self->_glyphs;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::Glyphs >::push(L,lret,false);

		return 1;
	}

	// osgText::Text::GlyphQuads::Coords2 osgText::Text::GlyphQuads::_coords()
	static int _bind_get_coords(lua_State *L) {
		if (!_lg_typecheck_get_coords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::Coords2 osgText::Text::GlyphQuads::_coords() function, expected prototype:\nosgText::Text::GlyphQuads::Coords2 osgText::Text::GlyphQuads::_coords()\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::Coords2 osgText::Text::GlyphQuads::_coords(). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::Coords2* lret = &self->_coords;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::Coords2 >::push(L,lret,false);

		return 1;
	}

	// osgText::Text::GlyphQuads::TexCoords osgText::Text::GlyphQuads::_texcoords()
	static int _bind_get_texcoords(lua_State *L) {
		if (!_lg_typecheck_get_texcoords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::TexCoords osgText::Text::GlyphQuads::_texcoords() function, expected prototype:\nosgText::Text::GlyphQuads::TexCoords osgText::Text::GlyphQuads::_texcoords()\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::TexCoords osgText::Text::GlyphQuads::_texcoords(). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::TexCoords* lret = &self->_texcoords;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::TexCoords >::push(L,lret,false);

		return 1;
	}

	// osgText::Text::GlyphQuads::LineNumbers osgText::Text::GlyphQuads::_lineNumbers()
	static int _bind_get_lineNumbers(lua_State *L) {
		if (!_lg_typecheck_get_lineNumbers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::LineNumbers osgText::Text::GlyphQuads::_lineNumbers() function, expected prototype:\nosgText::Text::GlyphQuads::LineNumbers osgText::Text::GlyphQuads::_lineNumbers()\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::LineNumbers osgText::Text::GlyphQuads::_lineNumbers(). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::LineNumbers* lret = &self->_lineNumbers;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::LineNumbers >::push(L,lret,false);

		return 1;
	}

	// osgText::Text::GlyphQuads::ColorCoords osgText::Text::GlyphQuads::_colorCoords()
	static int _bind_get_colorCoords(lua_State *L) {
		if (!_lg_typecheck_get_colorCoords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Text::GlyphQuads::ColorCoords osgText::Text::GlyphQuads::_colorCoords() function, expected prototype:\nosgText::Text::GlyphQuads::ColorCoords osgText::Text::GlyphQuads::_colorCoords()\nClass arguments details:\n");
		}


		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::ColorCoords osgText::Text::GlyphQuads::_colorCoords(). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		const osgText::Text::GlyphQuads::ColorCoords* lret = &self->_colorCoords;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Text::GlyphQuads::ColorCoords >::push(L,lret,false);

		return 1;
	}

	// void osgText::Text::GlyphQuads::_glyphs(osgText::Text::GlyphQuads::Glyphs value)
	static int _bind_set_glyphs(lua_State *L) {
		if (!_lg_typecheck_set_glyphs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::GlyphQuads::_glyphs(osgText::Text::GlyphQuads::Glyphs value) function, expected prototype:\nvoid osgText::Text::GlyphQuads::_glyphs(osgText::Text::GlyphQuads::Glyphs value)\nClass arguments details:\narg 1 ID = 3878690\n");
		}

		osgText::Text::GlyphQuads::Glyphs* value_ptr=(Luna< std::vector< osgText::Glyph * > >::checkSubType< osgText::Text::GlyphQuads::Glyphs >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgText::Text::GlyphQuads::_glyphs function");
		}
		osgText::Text::GlyphQuads::Glyphs value=*value_ptr;

		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::GlyphQuads::_glyphs(osgText::Text::GlyphQuads::Glyphs). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		self->_glyphs = value;

		return 0;
	}

	// void osgText::Text::GlyphQuads::_coords(osgText::Text::GlyphQuads::Coords2 value)
	static int _bind_set_coords(lua_State *L) {
		if (!_lg_typecheck_set_coords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::GlyphQuads::_coords(osgText::Text::GlyphQuads::Coords2 value) function, expected prototype:\nvoid osgText::Text::GlyphQuads::_coords(osgText::Text::GlyphQuads::Coords2 value)\nClass arguments details:\narg 1 ID = 46933791\n");
		}

		osgText::Text::GlyphQuads::Coords2* value_ptr=(Luna< std::vector< osg::Vec2f > >::checkSubType< osgText::Text::GlyphQuads::Coords2 >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgText::Text::GlyphQuads::_coords function");
		}
		osgText::Text::GlyphQuads::Coords2 value=*value_ptr;

		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::GlyphQuads::_coords(osgText::Text::GlyphQuads::Coords2). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		self->_coords = value;

		return 0;
	}

	// void osgText::Text::GlyphQuads::_texcoords(osgText::Text::GlyphQuads::TexCoords value)
	static int _bind_set_texcoords(lua_State *L) {
		if (!_lg_typecheck_set_texcoords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::GlyphQuads::_texcoords(osgText::Text::GlyphQuads::TexCoords value) function, expected prototype:\nvoid osgText::Text::GlyphQuads::_texcoords(osgText::Text::GlyphQuads::TexCoords value)\nClass arguments details:\narg 1 ID = 72230542\n");
		}

		osgText::Text::GlyphQuads::TexCoords* value_ptr=(Luna< std::vector< osg::Vec2f > >::checkSubType< osgText::Text::GlyphQuads::TexCoords >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgText::Text::GlyphQuads::_texcoords function");
		}
		osgText::Text::GlyphQuads::TexCoords value=*value_ptr;

		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::GlyphQuads::_texcoords(osgText::Text::GlyphQuads::TexCoords). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		self->_texcoords = value;

		return 0;
	}

	// void osgText::Text::GlyphQuads::_lineNumbers(osgText::Text::GlyphQuads::LineNumbers value)
	static int _bind_set_lineNumbers(lua_State *L) {
		if (!_lg_typecheck_set_lineNumbers(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::GlyphQuads::_lineNumbers(osgText::Text::GlyphQuads::LineNumbers value) function, expected prototype:\nvoid osgText::Text::GlyphQuads::_lineNumbers(osgText::Text::GlyphQuads::LineNumbers value)\nClass arguments details:\narg 1 ID = 43001465\n");
		}

		osgText::Text::GlyphQuads::LineNumbers* value_ptr=(Luna< std::vector< unsigned int > >::checkSubType< osgText::Text::GlyphQuads::LineNumbers >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgText::Text::GlyphQuads::_lineNumbers function");
		}
		osgText::Text::GlyphQuads::LineNumbers value=*value_ptr;

		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::GlyphQuads::_lineNumbers(osgText::Text::GlyphQuads::LineNumbers). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		self->_lineNumbers = value;

		return 0;
	}

	// void osgText::Text::GlyphQuads::_colorCoords(osgText::Text::GlyphQuads::ColorCoords value)
	static int _bind_set_colorCoords(lua_State *L) {
		if (!_lg_typecheck_set_colorCoords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Text::GlyphQuads::_colorCoords(osgText::Text::GlyphQuads::ColorCoords value) function, expected prototype:\nvoid osgText::Text::GlyphQuads::_colorCoords(osgText::Text::GlyphQuads::ColorCoords value)\nClass arguments details:\narg 1 ID = 26979605\n");
		}

		osgText::Text::GlyphQuads::ColorCoords* value_ptr=(Luna< std::vector< osg::Vec4f > >::checkSubType< osgText::Text::GlyphQuads::ColorCoords >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgText::Text::GlyphQuads::_colorCoords function");
		}
		osgText::Text::GlyphQuads::ColorCoords value=*value_ptr;

		osgText::Text::GlyphQuads* self=(Luna< osgText::Text::GlyphQuads >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Text::GlyphQuads::_colorCoords(osgText::Text::GlyphQuads::ColorCoords). Got : '%s'",typeid(Luna< osgText::Text::GlyphQuads >::check(L,1)).name());
		}
		self->_colorCoords = value;

		return 0;
	}


	// Operator binds:

};

osgText::Text::GlyphQuads* LunaTraits< osgText::Text::GlyphQuads >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgText::Text::GlyphQuads >::_bind_dtor(osgText::Text::GlyphQuads* obj) {
	delete obj;
}

const char LunaTraits< osgText::Text::GlyphQuads >::className[] = "Text_GlyphQuads";
const char LunaTraits< osgText::Text::GlyphQuads >::fullName[] = "osgText::Text::GlyphQuads";
const char LunaTraits< osgText::Text::GlyphQuads >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Text::GlyphQuads >::parents[] = {0};
const int LunaTraits< osgText::Text::GlyphQuads >::hash = 89190250;
const int LunaTraits< osgText::Text::GlyphQuads >::uniqueIDs[] = {89190250,0};

luna_RegType LunaTraits< osgText::Text::GlyphQuads >::methods[] = {
	{"getGlyphs", &luna_wrapper_osgText_Text_GlyphQuads::_bind_getGlyphs},
	{"getCoords", &luna_wrapper_osgText_Text_GlyphQuads::_bind_getCoords},
	{"getTransformedCoords", &luna_wrapper_osgText_Text_GlyphQuads::_bind_getTransformedCoords},
	{"getTexCoords", &luna_wrapper_osgText_Text_GlyphQuads::_bind_getTexCoords},
	{"getLineNumbers", &luna_wrapper_osgText_Text_GlyphQuads::_bind_getLineNumbers},
	{"get_glyphs", &luna_wrapper_osgText_Text_GlyphQuads::_bind_get_glyphs},
	{"get_coords", &luna_wrapper_osgText_Text_GlyphQuads::_bind_get_coords},
	{"get_texcoords", &luna_wrapper_osgText_Text_GlyphQuads::_bind_get_texcoords},
	{"get_lineNumbers", &luna_wrapper_osgText_Text_GlyphQuads::_bind_get_lineNumbers},
	{"get_colorCoords", &luna_wrapper_osgText_Text_GlyphQuads::_bind_get_colorCoords},
	{"set_glyphs", &luna_wrapper_osgText_Text_GlyphQuads::_bind_set_glyphs},
	{"set_coords", &luna_wrapper_osgText_Text_GlyphQuads::_bind_set_coords},
	{"set_texcoords", &luna_wrapper_osgText_Text_GlyphQuads::_bind_set_texcoords},
	{"set_lineNumbers", &luna_wrapper_osgText_Text_GlyphQuads::_bind_set_lineNumbers},
	{"set_colorCoords", &luna_wrapper_osgText_Text_GlyphQuads::_bind_set_colorCoords},
	{"dynCast", &luna_wrapper_osgText_Text_GlyphQuads::_bind_dynCast},
	{"__eq", &luna_wrapper_osgText_Text_GlyphQuads::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Text::GlyphQuads >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Text::GlyphQuads >::enumValues[] = {
	{0,0}
};


