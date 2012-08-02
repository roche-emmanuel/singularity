#include <plug_common.h>

class luna_wrapper_osg_ConvexPlanarPolygon {
public:
	typedef Luna< osg::ConvexPlanarPolygon > luna_t;

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

		osg::ConvexPlanarPolygon* self=(Luna< osg::ConvexPlanarPolygon >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ConvexPlanarPolygon");
		
		return luna_dynamicCast(L,converters,"osg::ConvexPlanarPolygon",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertexList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66044715) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVertexList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertexList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ConvexPlanarPolygon::ConvexPlanarPolygon()
	static osg::ConvexPlanarPolygon* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarPolygon::ConvexPlanarPolygon() function, expected prototype:\nosg::ConvexPlanarPolygon::ConvexPlanarPolygon()\nClass arguments details:\n");
		}


		return new osg::ConvexPlanarPolygon();
	}


	// Function binds:
	// void osg::ConvexPlanarPolygon::add(const osg::Vec3f & v)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarPolygon::add(const osg::Vec3f & v) function, expected prototype:\nvoid osg::ConvexPlanarPolygon::add(const osg::Vec3f & v)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* v_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v in osg::ConvexPlanarPolygon::add function");
		}
		const osg::Vec3f & v=*v_ptr;

		osg::ConvexPlanarPolygon* self=(Luna< osg::ConvexPlanarPolygon >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarPolygon::add(const osg::Vec3f &)");
		}
		self->add(v);

		return 0;
	}

	// void osg::ConvexPlanarPolygon::setVertexList(const osg::ConvexPlanarPolygon::VertexList & vertexList)
	static int _bind_setVertexList(lua_State *L) {
		if (!_lg_typecheck_setVertexList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ConvexPlanarPolygon::setVertexList(const osg::ConvexPlanarPolygon::VertexList & vertexList) function, expected prototype:\nvoid osg::ConvexPlanarPolygon::setVertexList(const osg::ConvexPlanarPolygon::VertexList & vertexList)\nClass arguments details:\narg 1 ID = 66044715\n");
		}

		const osg::ConvexPlanarPolygon::VertexList* vertexList_ptr=(Luna< osg::ConvexPlanarPolygon::VertexList >::check(L,2));
		if( !vertexList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertexList in osg::ConvexPlanarPolygon::setVertexList function");
		}
		const osg::ConvexPlanarPolygon::VertexList & vertexList=*vertexList_ptr;

		osg::ConvexPlanarPolygon* self=(Luna< osg::ConvexPlanarPolygon >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ConvexPlanarPolygon::setVertexList(const osg::ConvexPlanarPolygon::VertexList &)");
		}
		self->setVertexList(vertexList);

		return 0;
	}

	// osg::ConvexPlanarPolygon::VertexList & osg::ConvexPlanarPolygon::getVertexList()
	static int _bind_getVertexList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVertexList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ConvexPlanarPolygon::VertexList & osg::ConvexPlanarPolygon::getVertexList() function, expected prototype:\nosg::ConvexPlanarPolygon::VertexList & osg::ConvexPlanarPolygon::getVertexList()\nClass arguments details:\n");
		}


		osg::ConvexPlanarPolygon* self=(Luna< osg::ConvexPlanarPolygon >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::ConvexPlanarPolygon::VertexList & osg::ConvexPlanarPolygon::getVertexList()");
		}
		const osg::ConvexPlanarPolygon::VertexList* lret = &self->getVertexList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarPolygon::VertexList >::push(L,lret,false);

		return 1;
	}

	// const osg::ConvexPlanarPolygon::VertexList & osg::ConvexPlanarPolygon::getVertexList() const
	static int _bind_getVertexList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVertexList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ConvexPlanarPolygon::VertexList & osg::ConvexPlanarPolygon::getVertexList() const function, expected prototype:\nconst osg::ConvexPlanarPolygon::VertexList & osg::ConvexPlanarPolygon::getVertexList() const\nClass arguments details:\n");
		}


		osg::ConvexPlanarPolygon* self=(Luna< osg::ConvexPlanarPolygon >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ConvexPlanarPolygon::VertexList & osg::ConvexPlanarPolygon::getVertexList() const");
		}
		const osg::ConvexPlanarPolygon::VertexList* lret = &self->getVertexList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ConvexPlanarPolygon::VertexList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::ConvexPlanarPolygon::getVertexList
	static int _bind_getVertexList(lua_State *L) {
		if (_lg_typecheck_getVertexList_overload_1(L)) return _bind_getVertexList_overload_1(L);
		if (_lg_typecheck_getVertexList_overload_2(L)) return _bind_getVertexList_overload_2(L);

		luaL_error(L, "error in function getVertexList, cannot match any of the overloads for function getVertexList:\n  getVertexList()\n  getVertexList()\n");
		return 0;
	}


	// Operator binds:

};

osg::ConvexPlanarPolygon* LunaTraits< osg::ConvexPlanarPolygon >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ConvexPlanarPolygon::_bind_ctor(L);
}

void LunaTraits< osg::ConvexPlanarPolygon >::_bind_dtor(osg::ConvexPlanarPolygon* obj) {
	delete obj;
}

const char LunaTraits< osg::ConvexPlanarPolygon >::className[] = "ConvexPlanarPolygon";
const char LunaTraits< osg::ConvexPlanarPolygon >::fullName[] = "osg::ConvexPlanarPolygon";
const char LunaTraits< osg::ConvexPlanarPolygon >::moduleName[] = "osg";
const char* LunaTraits< osg::ConvexPlanarPolygon >::parents[] = {0};
const int LunaTraits< osg::ConvexPlanarPolygon >::hash = 16091124;
const int LunaTraits< osg::ConvexPlanarPolygon >::uniqueIDs[] = {16091124,0};

luna_RegType LunaTraits< osg::ConvexPlanarPolygon >::methods[] = {
	{"add", &luna_wrapper_osg_ConvexPlanarPolygon::_bind_add},
	{"setVertexList", &luna_wrapper_osg_ConvexPlanarPolygon::_bind_setVertexList},
	{"getVertexList", &luna_wrapper_osg_ConvexPlanarPolygon::_bind_getVertexList},
	{"dynCast", &luna_wrapper_osg_ConvexPlanarPolygon::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ConvexPlanarPolygon >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ConvexPlanarPolygon >::enumValues[] = {
	{0,0}
};


