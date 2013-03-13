#include <plug_common.h>

class luna_wrapper_osg_ref_ptr_osg_AnimationPath {
public:
	typedef Luna< osg::ref_ptr< osg::AnimationPath > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50949526) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ref_ptr< osg::AnimationPath >*)");
		}

		osg::ref_ptr< osg::AnimationPath >* rhs =(Luna< osg::ref_ptr< osg::AnimationPath > >::check(L,2));
		osg::ref_ptr< osg::AnimationPath >* self=(Luna< osg::ref_ptr< osg::AnimationPath > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		osg::ref_ptr< osg::AnimationPath >* self= (osg::ref_ptr< osg::AnimationPath >*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ref_ptr< osg::AnimationPath > >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50949526) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::ref_ptr< osg::AnimationPath > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		osg::ref_ptr< osg::AnimationPath >* self=(Luna< osg::ref_ptr< osg::AnimationPath > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ref_ptr< osg::AnimationPath >");
		
		return luna_dynamicCast(L,converters,"osg::ref_ptr< osg::AnimationPath >",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ref_ptr< osg::AnimationPath >* LunaTraits< osg::ref_ptr< osg::AnimationPath > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ref_ptr< osg::AnimationPath > >::_bind_dtor(osg::ref_ptr< osg::AnimationPath >* obj) {
	delete obj;
}

const char LunaTraits< osg::ref_ptr< osg::AnimationPath > >::className[] = "ref_ptr_osg_AnimationPath";
const char LunaTraits< osg::ref_ptr< osg::AnimationPath > >::fullName[] = "osg::ref_ptr< osg::AnimationPath >";
const char LunaTraits< osg::ref_ptr< osg::AnimationPath > >::moduleName[] = "osg";
const char* LunaTraits< osg::ref_ptr< osg::AnimationPath > >::parents[] = {0};
const int LunaTraits< osg::ref_ptr< osg::AnimationPath > >::hash = 50949526;
const int LunaTraits< osg::ref_ptr< osg::AnimationPath > >::uniqueIDs[] = {50949526,0};

luna_RegType LunaTraits< osg::ref_ptr< osg::AnimationPath > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ref_ptr_osg_AnimationPath::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ref_ptr_osg_AnimationPath::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ref_ptr_osg_AnimationPath::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ref_ptr_osg_AnimationPath::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ref_ptr< osg::AnimationPath > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ref_ptr< osg::AnimationPath > >::enumValues[] = {
	{0,0}
};

