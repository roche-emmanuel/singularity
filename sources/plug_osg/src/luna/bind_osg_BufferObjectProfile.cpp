#include <plug_common.h>

class luna_wrapper_osg_BufferObjectProfile {
public:
	typedef Luna< osg::BufferObjectProfile > luna_t;

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

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::BufferObjectProfile");
		
		return luna_dynamicCast(L,converters,"osg::BufferObjectProfile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12032151) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setProfile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,12032151) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,12032151) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::BufferObjectProfile::BufferObjectProfile()
	static osg::BufferObjectProfile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferObjectProfile::BufferObjectProfile() function, expected prototype:\nosg::BufferObjectProfile::BufferObjectProfile()\nClass arguments details:\n");
		}


		return new osg::BufferObjectProfile();
	}

	// osg::BufferObjectProfile::BufferObjectProfile(unsigned int target, unsigned int usage, unsigned int size)
	static osg::BufferObjectProfile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferObjectProfile::BufferObjectProfile(unsigned int target, unsigned int usage, unsigned int size) function, expected prototype:\nosg::BufferObjectProfile::BufferObjectProfile(unsigned int target, unsigned int usage, unsigned int size)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,1);
		unsigned int usage=(unsigned int)lua_tointeger(L,2);
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		return new osg::BufferObjectProfile(target, usage, size);
	}

	// osg::BufferObjectProfile::BufferObjectProfile(const osg::BufferObjectProfile & bpo)
	static osg::BufferObjectProfile* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BufferObjectProfile::BufferObjectProfile(const osg::BufferObjectProfile & bpo) function, expected prototype:\nosg::BufferObjectProfile::BufferObjectProfile(const osg::BufferObjectProfile & bpo)\nClass arguments details:\narg 1 ID = 12032151\n");
		}

		const osg::BufferObjectProfile* bpo_ptr=(Luna< osg::BufferObjectProfile >::check(L,1));
		if( !bpo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bpo in osg::BufferObjectProfile::BufferObjectProfile function");
		}
		const osg::BufferObjectProfile & bpo=*bpo_ptr;

		return new osg::BufferObjectProfile(bpo);
	}

	// Overload binder for osg::BufferObjectProfile::BufferObjectProfile
	static osg::BufferObjectProfile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function BufferObjectProfile, cannot match any of the overloads for function BufferObjectProfile:\n  BufferObjectProfile()\n  BufferObjectProfile(unsigned int, unsigned int, unsigned int)\n  BufferObjectProfile(const osg::BufferObjectProfile &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::BufferObjectProfile::setProfile(unsigned int target, unsigned int usage, unsigned int size)
	static int _bind_setProfile(lua_State *L) {
		if (!_lg_typecheck_setProfile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::BufferObjectProfile::setProfile(unsigned int target, unsigned int usage, unsigned int size) function, expected prototype:\nvoid osg::BufferObjectProfile::setProfile(unsigned int target, unsigned int usage, unsigned int size)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		unsigned int usage=(unsigned int)lua_tointeger(L,3);
		unsigned int size=(unsigned int)lua_tointeger(L,4);

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::BufferObjectProfile::setProfile(unsigned int, unsigned int, unsigned int)");
		}
		self->setProfile(target, usage, size);

		return 0;
	}


	// Operator binds:
	// bool osg::BufferObjectProfile::operator<(const osg::BufferObjectProfile & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferObjectProfile::operator<(const osg::BufferObjectProfile & rhs) const function, expected prototype:\nbool osg::BufferObjectProfile::operator<(const osg::BufferObjectProfile & rhs) const\nClass arguments details:\narg 1 ID = 12032151\n");
		}

		const osg::BufferObjectProfile* rhs_ptr=(Luna< osg::BufferObjectProfile >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::BufferObjectProfile::operator< function");
		}
		const osg::BufferObjectProfile & rhs=*rhs_ptr;

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferObjectProfile::operator<(const osg::BufferObjectProfile &) const");
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::BufferObjectProfile::operator==(const osg::BufferObjectProfile & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::BufferObjectProfile::operator==(const osg::BufferObjectProfile & rhs) const function, expected prototype:\nbool osg::BufferObjectProfile::operator==(const osg::BufferObjectProfile & rhs) const\nClass arguments details:\narg 1 ID = 12032151\n");
		}

		const osg::BufferObjectProfile* rhs_ptr=(Luna< osg::BufferObjectProfile >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::BufferObjectProfile::operator== function");
		}
		const osg::BufferObjectProfile & rhs=*rhs_ptr;

		osg::BufferObjectProfile* self=(Luna< osg::BufferObjectProfile >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::BufferObjectProfile::operator==(const osg::BufferObjectProfile &) const");
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::BufferObjectProfile* LunaTraits< osg::BufferObjectProfile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_BufferObjectProfile::_bind_ctor(L);
}

void LunaTraits< osg::BufferObjectProfile >::_bind_dtor(osg::BufferObjectProfile* obj) {
	delete obj;
}

const char LunaTraits< osg::BufferObjectProfile >::className[] = "BufferObjectProfile";
const char LunaTraits< osg::BufferObjectProfile >::fullName[] = "osg::BufferObjectProfile";
const char LunaTraits< osg::BufferObjectProfile >::moduleName[] = "osg";
const char* LunaTraits< osg::BufferObjectProfile >::parents[] = {0};
const int LunaTraits< osg::BufferObjectProfile >::hash = 12032151;
const int LunaTraits< osg::BufferObjectProfile >::uniqueIDs[] = {12032151,0};

luna_RegType LunaTraits< osg::BufferObjectProfile >::methods[] = {
	{"setProfile", &luna_wrapper_osg_BufferObjectProfile::_bind_setProfile},
	{"__lt", &luna_wrapper_osg_BufferObjectProfile::_bind___lt},
	{"__eq", &luna_wrapper_osg_BufferObjectProfile::_bind___eq},
	{"dynCast", &luna_wrapper_osg_BufferObjectProfile::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osg::BufferObjectProfile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BufferObjectProfile >::enumValues[] = {
	{0,0}
};


