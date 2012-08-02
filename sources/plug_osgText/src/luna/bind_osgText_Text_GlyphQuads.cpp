#include <plug_common.h>

class luna_wrapper_osgText_Text_GlyphQuads {
public:
	typedef Luna< osgText::Text::GlyphQuads > luna_t;

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
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs()");
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
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::Glyphs osgText::Text::GlyphQuads::getGlyphs() const");
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
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords()");
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
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::Coords2 & osgText::Text::GlyphQuads::getCoords() const");
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
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int)");
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
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::Coords3 & osgText::Text::GlyphQuads::getTransformedCoords(unsigned int) const");
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
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords()");
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
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::TexCoords & osgText::Text::GlyphQuads::getTexCoords() const");
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
			luaL_error(L, "Invalid object in function call osgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers()");
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
			luaL_error(L, "Invalid object in function call const osgText::Text::GlyphQuads::LineNumbers & osgText::Text::GlyphQuads::getLineNumbers() const");
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


	// Operator binds:

};

osgText::Text::GlyphQuads* LunaTraits< osgText::Text::GlyphQuads >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgText::Text::GlyphQuads >::_bind_dtor(osgText::Text::GlyphQuads* obj) {
	delete obj;
}

const char LunaTraits< osgText::Text::GlyphQuads >::className[] = "GlyphQuads";
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
	{"dynCast", &luna_wrapper_osgText_Text_GlyphQuads::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Text::GlyphQuads >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Text::GlyphQuads >::enumValues[] = {
	{0,0}
};


