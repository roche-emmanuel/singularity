#include <plug_common.h>

class luna_wrapper_osg_GLBufferObject_BufferEntry {
public:
	typedef Luna< osg::GLBufferObject::BufferEntry > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69650430) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::GLBufferObject::BufferEntry*)");
		}

		osg::GLBufferObject::BufferEntry* rhs =(Luna< osg::GLBufferObject::BufferEntry >::check(L,2));
		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
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

		osg::GLBufferObject::BufferEntry* self=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::GLBufferObject::BufferEntry");
		
		return luna_dynamicCast(L,converters,"osg::GLBufferObject::BufferEntry",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69650430) ) return false;
		if( (!dynamic_cast< osg::GLBufferObject::BufferEntry* >(Luna< osg::GLBufferObject::BufferEntry >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::GLBufferObject::BufferEntry::BufferEntry()
	static osg::GLBufferObject::BufferEntry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject::BufferEntry::BufferEntry() function, expected prototype:\nosg::GLBufferObject::BufferEntry::BufferEntry()\nClass arguments details:\n");
		}


		return new osg::GLBufferObject::BufferEntry();
	}

	// osg::GLBufferObject::BufferEntry::BufferEntry(const osg::GLBufferObject::BufferEntry & rhs)
	static osg::GLBufferObject::BufferEntry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject::BufferEntry::BufferEntry(const osg::GLBufferObject::BufferEntry & rhs) function, expected prototype:\nosg::GLBufferObject::BufferEntry::BufferEntry(const osg::GLBufferObject::BufferEntry & rhs)\nClass arguments details:\narg 1 ID = 69650430\n");
		}

		const osg::GLBufferObject::BufferEntry* rhs_ptr=(Luna< osg::GLBufferObject::BufferEntry >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::GLBufferObject::BufferEntry::BufferEntry function");
		}
		const osg::GLBufferObject::BufferEntry & rhs=*rhs_ptr;

		return new osg::GLBufferObject::BufferEntry(rhs);
	}

	// Overload binder for osg::GLBufferObject::BufferEntry::BufferEntry
	static osg::GLBufferObject::BufferEntry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function BufferEntry, cannot match any of the overloads for function BufferEntry:\n  BufferEntry()\n  BufferEntry(const osg::GLBufferObject::BufferEntry &)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

osg::GLBufferObject::BufferEntry* LunaTraits< osg::GLBufferObject::BufferEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_ctor(L);
}

void LunaTraits< osg::GLBufferObject::BufferEntry >::_bind_dtor(osg::GLBufferObject::BufferEntry* obj) {
	delete obj;
}

const char LunaTraits< osg::GLBufferObject::BufferEntry >::className[] = "BufferEntry";
const char LunaTraits< osg::GLBufferObject::BufferEntry >::fullName[] = "osg::GLBufferObject::BufferEntry";
const char LunaTraits< osg::GLBufferObject::BufferEntry >::moduleName[] = "osg";
const char* LunaTraits< osg::GLBufferObject::BufferEntry >::parents[] = {0};
const int LunaTraits< osg::GLBufferObject::BufferEntry >::hash = 69650430;
const int LunaTraits< osg::GLBufferObject::BufferEntry >::uniqueIDs[] = {69650430,0};

luna_RegType LunaTraits< osg::GLBufferObject::BufferEntry >::methods[] = {
	{"dynCast", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_GLBufferObject_BufferEntry::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GLBufferObject::BufferEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GLBufferObject::BufferEntry >::enumValues[] = {
	{0,0}
};


