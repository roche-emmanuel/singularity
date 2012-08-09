#include <plug_common.h>

class luna_wrapper_osgDB_ImageOptions_TexCoordRange {
public:
	typedef Luna< osgDB::ImageOptions::TexCoordRange > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::ImageOptions::TexCoordRange* ptr= dynamic_cast< osgDB::ImageOptions::TexCoordRange* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ImageOptions::TexCoordRange >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ImageOptions::TexCoordRange::TexCoordRange()
	static osgDB::ImageOptions::TexCoordRange* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::TexCoordRange::TexCoordRange() function, expected prototype:\nosgDB::ImageOptions::TexCoordRange::TexCoordRange()\nClass arguments details:\n");
		}


		return new osgDB::ImageOptions::TexCoordRange();
	}


	// Function binds:
	// void osgDB::ImageOptions::TexCoordRange::set(double x, double y, double w, double h)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::TexCoordRange::set(double x, double y, double w, double h) function, expected prototype:\nvoid osgDB::ImageOptions::TexCoordRange::set(double x, double y, double w, double h)\nClass arguments details:\n");
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double w=(double)lua_tonumber(L,4);
		double h=(double)lua_tonumber(L,5);

		osgDB::ImageOptions::TexCoordRange* self=dynamic_cast< osgDB::ImageOptions::TexCoordRange* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::TexCoordRange::set(double, double, double, double)");
		}
		self->set(x, y, w, h);

		return 0;
	}


	// Operator binds:

};

osgDB::ImageOptions::TexCoordRange* LunaTraits< osgDB::ImageOptions::TexCoordRange >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_ctor(L);
}

void LunaTraits< osgDB::ImageOptions::TexCoordRange >::_bind_dtor(osgDB::ImageOptions::TexCoordRange* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ImageOptions::TexCoordRange >::className[] = "TexCoordRange";
const char LunaTraits< osgDB::ImageOptions::TexCoordRange >::fullName[] = "osgDB::ImageOptions::TexCoordRange";
const char LunaTraits< osgDB::ImageOptions::TexCoordRange >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImageOptions::TexCoordRange >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ImageOptions::TexCoordRange >::hash = 56995153;
const int LunaTraits< osgDB::ImageOptions::TexCoordRange >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ImageOptions::TexCoordRange >::methods[] = {
	{"set", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_bind_set},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImageOptions::TexCoordRange >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ImageOptions_TexCoordRange::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImageOptions::TexCoordRange >::enumValues[] = {
	{0,0}
};


