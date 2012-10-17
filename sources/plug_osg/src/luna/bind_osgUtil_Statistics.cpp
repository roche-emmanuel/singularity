#include <plug_common.h>

class luna_wrapper_osgUtil_Statistics {
public:
	typedef Luna< osgUtil::Statistics > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95996950) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::Statistics*)");
		}

		osgUtil::Statistics* rhs =(Luna< osgUtil::Statistics >::check(L,2));
		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
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

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::Statistics");
		
		return luna_dynamicCast(L,converters,"osgUtil::Statistics",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303204)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303173)) ) return false;
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
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303202)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexArray_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,92303171)) ) return false;
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

	inline static bool _lg_typecheck_vertex_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_vertex_overload_7(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_end(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addFastDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addLight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addImpostor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addBins(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBinNo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addStateGraphs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addOrderedLeaves(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95996950) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::Statistics::Statistics()
	static osgUtil::Statistics* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Statistics::Statistics() function, expected prototype:\nosgUtil::Statistics::Statistics()\nClass arguments details:\n");
		}


		return new osgUtil::Statistics();
	}


	// Function binds:
	// void osgUtil::Statistics::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::reset() function, expected prototype:\nvoid osgUtil::Statistics::reset()\nClass arguments details:\n");
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::Statistics::setType(osgUtil::Statistics::StatsType t)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setType(osgUtil::Statistics::StatsType t) function, expected prototype:\nvoid osgUtil::Statistics::setType(osgUtil::Statistics::StatsType t)\nClass arguments details:\n");
		}

		osgUtil::Statistics::StatsType t=(osgUtil::Statistics::StatsType)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setType(osgUtil::Statistics::StatsType)");
		}
		self->setType(t);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3f * vertices)
	static int _bind_setVertexArray_overload_1(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3f * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3f * vertices)\nClass arguments details:\narg 2 ID = 92303204\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3f* vertices=(Luna< osg::Vec3f >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec3f *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2f * vertices)
	static int _bind_setVertexArray_overload_2(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2f * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2f * vertices)\nClass arguments details:\narg 2 ID = 92303173\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2f* vertices=(Luna< osg::Vec2f >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec2f *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4f * vertices)
	static int _bind_setVertexArray_overload_3(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4f * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4f * vertices)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4f* vertices=(Luna< osg::Vec4f >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec4f *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3d * vertices)
	static int _bind_setVertexArray_overload_4(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3d * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec3d * vertices)\nClass arguments details:\narg 2 ID = 92303202\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec3d* vertices=(Luna< osg::Vec3d >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec3d *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2d * vertices)
	static int _bind_setVertexArray_overload_5(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2d * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec2d * vertices)\nClass arguments details:\narg 2 ID = 92303171\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec2d* vertices=(Luna< osg::Vec2d >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec2d *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4d * vertices)
	static int _bind_setVertexArray_overload_6(lua_State *L) {
		if (!_lg_typecheck_setVertexArray_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4d * vertices) function, expected prototype:\nvoid osgUtil::Statistics::setVertexArray(unsigned int count, const osg::Vec4d * vertices)\nClass arguments details:\narg 2 ID = 92303233\n");
		}

		unsigned int count=(unsigned int)lua_tointeger(L,2);
		const osg::Vec4d* vertices=(Luna< osg::Vec4d >::check(L,3));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setVertexArray(unsigned int, const osg::Vec4d *)");
		}
		self->setVertexArray(count, vertices);

		return 0;
	}

	// Overload binder for osgUtil::Statistics::setVertexArray
	static int _bind_setVertexArray(lua_State *L) {
		if (_lg_typecheck_setVertexArray_overload_1(L)) return _bind_setVertexArray_overload_1(L);
		if (_lg_typecheck_setVertexArray_overload_2(L)) return _bind_setVertexArray_overload_2(L);
		if (_lg_typecheck_setVertexArray_overload_3(L)) return _bind_setVertexArray_overload_3(L);
		if (_lg_typecheck_setVertexArray_overload_4(L)) return _bind_setVertexArray_overload_4(L);
		if (_lg_typecheck_setVertexArray_overload_5(L)) return _bind_setVertexArray_overload_5(L);
		if (_lg_typecheck_setVertexArray_overload_6(L)) return _bind_setVertexArray_overload_6(L);

		luaL_error(L, "error in function setVertexArray, cannot match any of the overloads for function setVertexArray:\n  setVertexArray(unsigned int, const osg::Vec3f *)\n  setVertexArray(unsigned int, const osg::Vec2f *)\n  setVertexArray(unsigned int, const osg::Vec4f *)\n  setVertexArray(unsigned int, const osg::Vec3d *)\n  setVertexArray(unsigned int, const osg::Vec2d *)\n  setVertexArray(unsigned int, const osg::Vec4d *)\n");
		return 0;
	}

	// void osgUtil::Statistics::drawArrays(unsigned int mode, int first, int count)
	static int _bind_drawArrays(lua_State *L) {
		if (!_lg_typecheck_drawArrays(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::drawArrays(unsigned int mode, int first, int count) function, expected prototype:\nvoid osgUtil::Statistics::drawArrays(unsigned int mode, int first, int count)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int first=(int)lua_tointeger(L,3);
		int count=(int)lua_tointeger(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::drawArrays(unsigned int, int, int)");
		}
		self->drawArrays(mode, first, count);

		return 0;
	}

	// void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned char * indices)
	static int _bind_drawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_drawElements_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned char * indices) function, expected prototype:\nvoid osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned char * indices)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned char indices = (unsigned char)(lua_tointeger(L,4));

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::drawElements(unsigned int, int, const unsigned char *)");
		}
		self->drawElements(mode, count, &indices);

		return 0;
	}

	// void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned short * indices)
	static int _bind_drawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_drawElements_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned short * indices) function, expected prototype:\nvoid osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned short * indices)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned short indices=(unsigned short)lua_tointeger(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::drawElements(unsigned int, int, const unsigned short *)");
		}
		self->drawElements(mode, count, &indices);

		return 0;
	}

	// void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned int * indices)
	static int _bind_drawElements_overload_3(lua_State *L) {
		if (!_lg_typecheck_drawElements_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned int * indices) function, expected prototype:\nvoid osgUtil::Statistics::drawElements(unsigned int mode, int count, const unsigned int * indices)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);
		int count=(int)lua_tointeger(L,3);
		unsigned int indices=(unsigned int)lua_tointeger(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::drawElements(unsigned int, int, const unsigned int *)");
		}
		self->drawElements(mode, count, &indices);

		return 0;
	}

	// Overload binder for osgUtil::Statistics::drawElements
	static int _bind_drawElements(lua_State *L) {
		if (_lg_typecheck_drawElements_overload_1(L)) return _bind_drawElements_overload_1(L);
		if (_lg_typecheck_drawElements_overload_2(L)) return _bind_drawElements_overload_2(L);
		if (_lg_typecheck_drawElements_overload_3(L)) return _bind_drawElements_overload_3(L);

		luaL_error(L, "error in function drawElements, cannot match any of the overloads for function drawElements:\n  drawElements(unsigned int, int, const unsigned char *)\n  drawElements(unsigned int, int, const unsigned short *)\n  drawElements(unsigned int, int, const unsigned int *)\n");
		return 0;
	}

	// void osgUtil::Statistics::begin(unsigned int mode)
	static int _bind_begin(lua_State *L) {
		if (!_lg_typecheck_begin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::begin(unsigned int mode) function, expected prototype:\nvoid osgUtil::Statistics::begin(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::begin(unsigned int)");
		}
		self->begin(mode);

		return 0;
	}

	// void osgUtil::Statistics::vertex()
	static int _bind_vertex_overload_1(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex() function, expected prototype:\nvoid osgUtil::Statistics::vertex()\nClass arguments details:\n");
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex()");
		}
		self->vertex();

		return 0;
	}

	// void osgUtil::Statistics::vertex(float x, float y, float z)
	static int _bind_vertex_overload_2(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(float x, float y, float z) function, expected prototype:\nvoid osgUtil::Statistics::vertex(float x, float y, float z)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(float, float, float)");
		}
		self->vertex(x, y, z);

		return 0;
	}

	// void osgUtil::Statistics::vertex(const osg::Vec3f & vert)
	static int _bind_vertex_overload_3(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(const osg::Vec3f & vert) function, expected prototype:\nvoid osgUtil::Statistics::vertex(const osg::Vec3f & vert)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* vert_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in osgUtil::Statistics::vertex function");
		}
		const osg::Vec3f & vert=*vert_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(const osg::Vec3f &)");
		}
		self->vertex(vert);

		return 0;
	}

	// void osgUtil::Statistics::vertex(const osg::Vec2f & vert)
	static int _bind_vertex_overload_4(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(const osg::Vec2f & vert) function, expected prototype:\nvoid osgUtil::Statistics::vertex(const osg::Vec2f & vert)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* vert_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in osgUtil::Statistics::vertex function");
		}
		const osg::Vec2f & vert=*vert_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(const osg::Vec2f &)");
		}
		self->vertex(vert);

		return 0;
	}

	// void osgUtil::Statistics::vertex(const osg::Vec4f & vert)
	static int _bind_vertex_overload_5(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(const osg::Vec4f & vert) function, expected prototype:\nvoid osgUtil::Statistics::vertex(const osg::Vec4f & vert)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		const osg::Vec4f* vert_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !vert_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vert in osgUtil::Statistics::vertex function");
		}
		const osg::Vec4f & vert=*vert_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(const osg::Vec4f &)");
		}
		self->vertex(vert);

		return 0;
	}

	// void osgUtil::Statistics::vertex(float x, float y)
	static int _bind_vertex_overload_6(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(float x, float y) function, expected prototype:\nvoid osgUtil::Statistics::vertex(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(float, float)");
		}
		self->vertex(x, y);

		return 0;
	}

	// void osgUtil::Statistics::vertex(float x, float y, float z, float w)
	static int _bind_vertex_overload_7(lua_State *L) {
		if (!_lg_typecheck_vertex_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::vertex(float x, float y, float z, float w) function, expected prototype:\nvoid osgUtil::Statistics::vertex(float x, float y, float z, float w)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);
		float z=(float)lua_tonumber(L,4);
		float w=(float)lua_tonumber(L,5);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::vertex(float, float, float, float)");
		}
		self->vertex(x, y, z, w);

		return 0;
	}

	// Overload binder for osgUtil::Statistics::vertex
	static int _bind_vertex(lua_State *L) {
		if (_lg_typecheck_vertex_overload_1(L)) return _bind_vertex_overload_1(L);
		if (_lg_typecheck_vertex_overload_2(L)) return _bind_vertex_overload_2(L);
		if (_lg_typecheck_vertex_overload_3(L)) return _bind_vertex_overload_3(L);
		if (_lg_typecheck_vertex_overload_4(L)) return _bind_vertex_overload_4(L);
		if (_lg_typecheck_vertex_overload_5(L)) return _bind_vertex_overload_5(L);
		if (_lg_typecheck_vertex_overload_6(L)) return _bind_vertex_overload_6(L);
		if (_lg_typecheck_vertex_overload_7(L)) return _bind_vertex_overload_7(L);

		luaL_error(L, "error in function vertex, cannot match any of the overloads for function vertex:\n  vertex()\n  vertex(float, float, float)\n  vertex(const osg::Vec3f &)\n  vertex(const osg::Vec2f &)\n  vertex(const osg::Vec4f &)\n  vertex(float, float)\n  vertex(float, float, float, float)\n");
		return 0;
	}

	// void osgUtil::Statistics::end()
	static int _bind_end(lua_State *L) {
		if (!_lg_typecheck_end(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::end() function, expected prototype:\nvoid osgUtil::Statistics::end()\nClass arguments details:\n");
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::end()");
		}
		self->end();

		return 0;
	}

	// void osgUtil::Statistics::addDrawable()
	static int _bind_addDrawable(lua_State *L) {
		if (!_lg_typecheck_addDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addDrawable() function, expected prototype:\nvoid osgUtil::Statistics::addDrawable()\nClass arguments details:\n");
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addDrawable()");
		}
		self->addDrawable();

		return 0;
	}

	// void osgUtil::Statistics::addFastDrawable()
	static int _bind_addFastDrawable(lua_State *L) {
		if (!_lg_typecheck_addFastDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addFastDrawable() function, expected prototype:\nvoid osgUtil::Statistics::addFastDrawable()\nClass arguments details:\n");
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addFastDrawable()");
		}
		self->addFastDrawable();

		return 0;
	}

	// void osgUtil::Statistics::addMatrix()
	static int _bind_addMatrix(lua_State *L) {
		if (!_lg_typecheck_addMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addMatrix() function, expected prototype:\nvoid osgUtil::Statistics::addMatrix()\nClass arguments details:\n");
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addMatrix()");
		}
		self->addMatrix();

		return 0;
	}

	// void osgUtil::Statistics::addLight(int np)
	static int _bind_addLight(lua_State *L) {
		if (!_lg_typecheck_addLight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addLight(int np) function, expected prototype:\nvoid osgUtil::Statistics::addLight(int np)\nClass arguments details:\n");
		}

		int np=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addLight(int)");
		}
		self->addLight(np);

		return 0;
	}

	// void osgUtil::Statistics::addImpostor(int np)
	static int _bind_addImpostor(lua_State *L) {
		if (!_lg_typecheck_addImpostor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addImpostor(int np) function, expected prototype:\nvoid osgUtil::Statistics::addImpostor(int np)\nClass arguments details:\n");
		}

		int np=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addImpostor(int)");
		}
		self->addImpostor(np);

		return 0;
	}

	// int osgUtil::Statistics::getBins()
	static int _bind_getBins(lua_State *L) {
		if (!_lg_typecheck_getBins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgUtil::Statistics::getBins() function, expected prototype:\nint osgUtil::Statistics::getBins()\nClass arguments details:\n");
		}


		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgUtil::Statistics::getBins()");
		}
		int lret = self->getBins();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Statistics::setDepth(int d)
	static int _bind_setDepth(lua_State *L) {
		if (!_lg_typecheck_setDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setDepth(int d) function, expected prototype:\nvoid osgUtil::Statistics::setDepth(int d)\nClass arguments details:\n");
		}

		int d=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setDepth(int)");
		}
		self->setDepth(d);

		return 0;
	}

	// void osgUtil::Statistics::addBins(int np)
	static int _bind_addBins(lua_State *L) {
		if (!_lg_typecheck_addBins(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addBins(int np) function, expected prototype:\nvoid osgUtil::Statistics::addBins(int np)\nClass arguments details:\n");
		}

		int np=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addBins(int)");
		}
		self->addBins(np);

		return 0;
	}

	// void osgUtil::Statistics::setBinNo(int n)
	static int _bind_setBinNo(lua_State *L) {
		if (!_lg_typecheck_setBinNo(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::setBinNo(int n) function, expected prototype:\nvoid osgUtil::Statistics::setBinNo(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::setBinNo(int)");
		}
		self->setBinNo(n);

		return 0;
	}

	// void osgUtil::Statistics::addStateGraphs(int n)
	static int _bind_addStateGraphs(lua_State *L) {
		if (!_lg_typecheck_addStateGraphs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addStateGraphs(int n) function, expected prototype:\nvoid osgUtil::Statistics::addStateGraphs(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addStateGraphs(int)");
		}
		self->addStateGraphs(n);

		return 0;
	}

	// void osgUtil::Statistics::addOrderedLeaves(int n)
	static int _bind_addOrderedLeaves(lua_State *L) {
		if (!_lg_typecheck_addOrderedLeaves(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::addOrderedLeaves(int n) function, expected prototype:\nvoid osgUtil::Statistics::addOrderedLeaves(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::addOrderedLeaves(int)");
		}
		self->addOrderedLeaves(n);

		return 0;
	}

	// void osgUtil::Statistics::add(const osgUtil::Statistics & stats)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Statistics::add(const osgUtil::Statistics & stats) function, expected prototype:\nvoid osgUtil::Statistics::add(const osgUtil::Statistics & stats)\nClass arguments details:\narg 1 ID = 95996950\n");
		}

		const osgUtil::Statistics* stats_ptr=(Luna< osgUtil::Statistics >::check(L,2));
		if( !stats_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stats in osgUtil::Statistics::add function");
		}
		const osgUtil::Statistics & stats=*stats_ptr;

		osgUtil::Statistics* self=(Luna< osgUtil::Statistics >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Statistics::add(const osgUtil::Statistics &)");
		}
		self->add(stats);

		return 0;
	}


	// Operator binds:

};

osgUtil::Statistics* LunaTraits< osgUtil::Statistics >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Statistics::_bind_ctor(L);
}

void LunaTraits< osgUtil::Statistics >::_bind_dtor(osgUtil::Statistics* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::Statistics >::className[] = "Statistics";
const char LunaTraits< osgUtil::Statistics >::fullName[] = "osgUtil::Statistics";
const char LunaTraits< osgUtil::Statistics >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Statistics >::parents[] = {0};
const int LunaTraits< osgUtil::Statistics >::hash = 95996950;
const int LunaTraits< osgUtil::Statistics >::uniqueIDs[] = {95996950,0};

luna_RegType LunaTraits< osgUtil::Statistics >::methods[] = {
	{"reset", &luna_wrapper_osgUtil_Statistics::_bind_reset},
	{"setType", &luna_wrapper_osgUtil_Statistics::_bind_setType},
	{"setVertexArray", &luna_wrapper_osgUtil_Statistics::_bind_setVertexArray},
	{"drawArrays", &luna_wrapper_osgUtil_Statistics::_bind_drawArrays},
	{"drawElements", &luna_wrapper_osgUtil_Statistics::_bind_drawElements},
	{"begin", &luna_wrapper_osgUtil_Statistics::_bind_begin},
	{"vertex", &luna_wrapper_osgUtil_Statistics::_bind_vertex},
	{"end", &luna_wrapper_osgUtil_Statistics::_bind_end},
	{"addDrawable", &luna_wrapper_osgUtil_Statistics::_bind_addDrawable},
	{"addFastDrawable", &luna_wrapper_osgUtil_Statistics::_bind_addFastDrawable},
	{"addMatrix", &luna_wrapper_osgUtil_Statistics::_bind_addMatrix},
	{"addLight", &luna_wrapper_osgUtil_Statistics::_bind_addLight},
	{"addImpostor", &luna_wrapper_osgUtil_Statistics::_bind_addImpostor},
	{"getBins", &luna_wrapper_osgUtil_Statistics::_bind_getBins},
	{"setDepth", &luna_wrapper_osgUtil_Statistics::_bind_setDepth},
	{"addBins", &luna_wrapper_osgUtil_Statistics::_bind_addBins},
	{"setBinNo", &luna_wrapper_osgUtil_Statistics::_bind_setBinNo},
	{"addStateGraphs", &luna_wrapper_osgUtil_Statistics::_bind_addStateGraphs},
	{"addOrderedLeaves", &luna_wrapper_osgUtil_Statistics::_bind_addOrderedLeaves},
	{"add", &luna_wrapper_osgUtil_Statistics::_bind_add},
	{"dynCast", &luna_wrapper_osgUtil_Statistics::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_Statistics::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Statistics >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Statistics >::enumValues[] = {
	{"STAT_NONE", osgUtil::Statistics::STAT_NONE},
	{"STAT_FRAMERATE", osgUtil::Statistics::STAT_FRAMERATE},
	{"STAT_GRAPHS", osgUtil::Statistics::STAT_GRAPHS},
	{"STAT_PRIMS", osgUtil::Statistics::STAT_PRIMS},
	{"STAT_PRIMSPERVIEW", osgUtil::Statistics::STAT_PRIMSPERVIEW},
	{"STAT_PRIMSPERBIN", osgUtil::Statistics::STAT_PRIMSPERBIN},
	{"STAT_DC", osgUtil::Statistics::STAT_DC},
	{"STAT_RESTART", osgUtil::Statistics::STAT_RESTART},
	{0,0}
};


