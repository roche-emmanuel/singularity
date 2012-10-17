#include <plug_common.h>

class luna_wrapper_osg_ImageStream_AudioStreams {
public:
	typedef Luna< osg::ImageStream::AudioStreams > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83757031) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ImageStream::AudioStreams*)");
		}

		osg::ImageStream::AudioStreams* rhs =(Luna< osg::ImageStream::AudioStreams >::check(L,2));
		osg::ImageStream::AudioStreams* self=(Luna< osg::ImageStream::AudioStreams >::check(L,1));
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

		osg::ImageStream::AudioStreams* self=(Luna< osg::ImageStream::AudioStreams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ImageStream::AudioStreams");
		
		return luna_dynamicCast(L,converters,"osg::ImageStream::AudioStreams",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ImageStream::AudioStreams* LunaTraits< osg::ImageStream::AudioStreams >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ImageStream::AudioStreams >::_bind_dtor(osg::ImageStream::AudioStreams* obj) {
	delete obj;
}

const char LunaTraits< osg::ImageStream::AudioStreams >::className[] = "AudioStreams";
const char LunaTraits< osg::ImageStream::AudioStreams >::fullName[] = "osg::ImageStream::AudioStreams";
const char LunaTraits< osg::ImageStream::AudioStreams >::moduleName[] = "osg";
const char* LunaTraits< osg::ImageStream::AudioStreams >::parents[] = {0};
const int LunaTraits< osg::ImageStream::AudioStreams >::hash = 83757031;
const int LunaTraits< osg::ImageStream::AudioStreams >::uniqueIDs[] = {83757031,0};

luna_RegType LunaTraits< osg::ImageStream::AudioStreams >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ImageStream_AudioStreams::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ImageStream_AudioStreams::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ImageStream::AudioStreams >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ImageStream::AudioStreams >::enumValues[] = {
	{0,0}
};


