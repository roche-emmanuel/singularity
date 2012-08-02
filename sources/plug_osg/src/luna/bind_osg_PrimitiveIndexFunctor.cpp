#include <plug_common.h>

class luna_wrapper_osg_PrimitiveIndexFunctor {
public:
	typedef Luna< osg::PrimitiveIndexFunctor > luna_t;

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

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::PrimitiveIndexFunctor");
		
		return luna_dynamicCast(L,converters,"osg::PrimitiveIndexFunctor",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_setVertexArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303173)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303204)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303235)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303171)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303202)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303233)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawArrays(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawElements_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_drawElements_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_begin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec2f * vertices)
	static int _bind_setVertexArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec2f * vertices) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec2f * vertices)\nClass arguments details:\narg 2 ID = 92303173\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2f* vertices=(Luna< osg::Vec2f >::check(L,3));

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int, const osg::Vec2f *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec3f * vertices)
	static int _bind_setVertexArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec3f * vertices) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec3f * vertices)\nClass arguments details:\narg 2 ID = 92303204\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3f* vertices=(Luna< osg::Vec3f >::check(L,3));

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int, const osg::Vec3f *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec4f * vertices)
	static int _bind_setVertexArray_overload_3(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec4f * vertices) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec4f * vertices)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4f* vertices=(Luna< osg::Vec4f >::check(L,3));

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int, const osg::Vec4f *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec2d * vertices)
	static int _bind_setVertexArray_overload_4(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec2d * vertices) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec2d * vertices)\nClass arguments details:\narg 2 ID = 92303171\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2d* vertices=(Luna< osg::Vec2d >::check(L,3));

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int, const osg::Vec2d *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec3d * vertices)
	static int _bind_setVertexArray_overload_5(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec3d * vertices) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec3d * vertices)\nClass arguments details:\narg 2 ID = 92303202\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3d* vertices=(Luna< osg::Vec3d >::check(L,3));

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int, const osg::Vec3d *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec4d * vertices)
	static int _bind_setVertexArray_overload_6(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec4d * vertices) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec4d * vertices)\nClass arguments details:\narg 2 ID = 92303233\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4d* vertices=(Luna< osg::Vec4d >::check(L,3));

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int, const osg::Vec4d *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// Overload binder for osg::PrimitiveIndexFunctor::setVertexArray
	static int _bind_setVertexArray(lua_State *L) {
		if (_lg_typecheck_setVertexArray_overload_1(L)) return _bind_setVertexArray_overload_1(L);
		if (_lg_typecheck_setVertexArray_overload_2(L)) return _bind_setVertexArray_overload_2(L);
		if (_lg_typecheck_setVertexArray_overload_3(L)) return _bind_setVertexArray_overload_3(L);
		if (_lg_typecheck_setVertexArray_overload_4(L)) return _bind_setVertexArray_overload_4(L);
		if (_lg_typecheck_setVertexArray_overload_5(L)) return _bind_setVertexArray_overload_5(L);
		if (_lg_typecheck_setVertexArray_overload_6(L)) return _bind_setVertexArray_overload_6(L);

		luaL_error(L, "error in function setVertexArray, cannot match any of the overloads for function setVertexArray:\n  setVertexArray(unsigned int, const osg::Vec2f *)\n  setVertexArray(unsigned int, const osg::Vec3f *)\n  setVertexArray(unsigned int, const osg::Vec4f *)\n  setVertexArray(unsigned int, const osg::Vec2d *)\n  setVertexArray(unsigned int, const osg::Vec3d *)\n  setVertexArray(unsigned int, const osg::Vec4d *)\n");
		return 0;
	}

	// void osg::PrimitiveIndexFunctor::drawArrays(unsigned int mode, int first, int count)
	static int _bind_drawArrays(lua_State *L) {
		if (!_lg_typecheck_drawArrays(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::drawArrays(unsigned int mode, int first, int count) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::drawArrays(unsigned int mode, int first, int count)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::drawArrays(unsigned int, int, int)");
		}
		self->drawArrays(mode, first, count);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned char * indices)
	static int _bind_drawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_drawElements_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned char * indices) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned char * indices)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char indices = (unsigned char)(lua_tointeger(L,4));

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::drawElements(unsigned int, int, const unsigned char *)");
		}
		self->drawElements(mode, count, &indices);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned short * indices)
	static int _bind_drawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_drawElements_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned short * indices) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned short * indices)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned short indices=(unsigned short)lua_tointeger(L,4);

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::drawElements(unsigned int, int, const unsigned short *)");
		}
		self->drawElements(mode, count, &indices);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned int * indices)
	static int _bind_drawElements_overload_3(lua_State *L) {
		if (!_lg_typecheck_drawElements_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned int * indices) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned int * indices)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned int indices=(unsigned int)lua_tointeger(L,4);

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::drawElements(unsigned int, int, const unsigned int *)");
		}
		self->drawElements(mode, count, &indices);

		return 0;
	}

	// Overload binder for osg::PrimitiveIndexFunctor::drawElements
	static int _bind_drawElements(lua_State *L) {
		if (_lg_typecheck_drawElements_overload_1(L)) return _bind_drawElements_overload_1(L);
		if (_lg_typecheck_drawElements_overload_2(L)) return _bind_drawElements_overload_2(L);
		if (_lg_typecheck_drawElements_overload_3(L)) return _bind_drawElements_overload_3(L);

		luaL_error(L, "error in function drawElements, cannot match any of the overloads for function drawElements:\n  drawElements(unsigned int, int, const unsigned char *)\n  drawElements(unsigned int, int, const unsigned short *)\n  drawElements(unsigned int, int, const unsigned int *)\n");
		return 0;
	}

	// void osg::PrimitiveIndexFunctor::begin(unsigned int mode)
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::begin(unsigned int mode) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::begin(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::begin(unsigned int)");
		}
		self->begin(mode);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::vertex(unsigned int pos)
	static int _bind_vertex(lua_State *L) {
		if (!_lg_typecheck_vertex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::vertex(unsigned int pos) function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::vertex(unsigned int pos)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::vertex(unsigned int)");
		}
		self->vertex(pos);

		return 0;
	}

	// void osg::PrimitiveIndexFunctor::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveIndexFunctor::end() function, expected prototype:\nvoid osg::PrimitiveIndexFunctor::end()\nClass arguments details:\n");
		}


		osg::PrimitiveIndexFunctor* self=(Luna< osg::PrimitiveIndexFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveIndexFunctor::end()");
		}
		self->end();

		return 0;
	}


	// Operator binds:

};

osg::PrimitiveIndexFunctor* LunaTraits< osg::PrimitiveIndexFunctor >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec2f * vertices)
	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec3f * vertices)
	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec4f * vertices)
	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec2d * vertices)
	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec3d * vertices)
	// void osg::PrimitiveIndexFunctor::setVertexArray(unsigned int count, const osg::Vec4d * vertices)
	// void osg::PrimitiveIndexFunctor::drawArrays(unsigned int mode, int first, int count)
	// void osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned char * indices)
	// void osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned short * indices)
	// void osg::PrimitiveIndexFunctor::drawElements(unsigned int mode, int count, const unsigned int * indices)
	// void osg::PrimitiveIndexFunctor::begin(unsigned int mode)
	// void osg::PrimitiveIndexFunctor::vertex(unsigned int pos)
	// void osg::PrimitiveIndexFunctor::end()

	// Abstract operators:
}

void LunaTraits< osg::PrimitiveIndexFunctor >::_bind_dtor(osg::PrimitiveIndexFunctor* obj) {
	delete obj;
}

const char LunaTraits< osg::PrimitiveIndexFunctor >::className[] = "PrimitiveIndexFunctor";
const char LunaTraits< osg::PrimitiveIndexFunctor >::fullName[] = "osg::PrimitiveIndexFunctor";
const char LunaTraits< osg::PrimitiveIndexFunctor >::moduleName[] = "osg";
const char* LunaTraits< osg::PrimitiveIndexFunctor >::parents[] = {0};
const int LunaTraits< osg::PrimitiveIndexFunctor >::hash = 22170058;
const int LunaTraits< osg::PrimitiveIndexFunctor >::uniqueIDs[] = {22170058,0};

luna_RegType LunaTraits< osg::PrimitiveIndexFunctor >::methods[] = {
	{"setVertexArray", &luna_wrapper_osg_PrimitiveIndexFunctor::_bind_setVertexArray},
	{"drawArrays", &luna_wrapper_osg_PrimitiveIndexFunctor::_bind_drawArrays},
	{"drawElements", &luna_wrapper_osg_PrimitiveIndexFunctor::_bind_drawElements},
	{"begin", &luna_wrapper_osg_PrimitiveIndexFunctor::_bind_begin},
	{"vertex", &luna_wrapper_osg_PrimitiveIndexFunctor::_bind_vertex},
	{"end", &luna_wrapper_osg_PrimitiveIndexFunctor::_bind_end},
	{"dynCast", &luna_wrapper_osg_PrimitiveIndexFunctor::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PrimitiveIndexFunctor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PrimitiveIndexFunctor >::enumValues[] = {
	{0,0}
};


