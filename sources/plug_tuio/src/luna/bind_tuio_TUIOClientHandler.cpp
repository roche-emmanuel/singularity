#include <plug_common.h>

class luna_wrapper_tuio_TUIOClientHandler {
public:
	typedef Luna< tuio::TUIOClientHandler > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Referenced*)");
		}

		osg::Referenced* rhs =(Luna< osg::Referenced >::check(L,2));
		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
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

		tuio::TUIOClientHandler* self= (tuio::TUIOClientHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< tuio::TUIOClientHandler >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_GUIEventHandler(lua_State *L) {
		// all checked are already performed before reaching this point.
		//tuio::TUIOClientHandler* ptr= dynamic_cast< tuio::TUIOClientHandler* >(Luna< osg::Referenced >::check(L,1));
		tuio::TUIOClientHandler* ptr= luna_caster< osg::Referenced, tuio::TUIOClientHandler >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< tuio::TUIOClientHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// tuio::TUIOClientHandler::TUIOClientHandler(int port = 3333)
	static tuio::TUIOClientHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in tuio::TUIOClientHandler::TUIOClientHandler(int port = 3333) function, expected prototype:\ntuio::TUIOClientHandler::TUIOClientHandler(int port = 3333)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int port=luatop>0 ? (int)lua_tointeger(L,1) : (int)3333;

		return new tuio::TUIOClientHandler(port);
	}


	// Function binds:

	// Operator binds:

};

tuio::TUIOClientHandler* LunaTraits< tuio::TUIOClientHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_tuio_TUIOClientHandler::_bind_ctor(L);
}

void LunaTraits< tuio::TUIOClientHandler >::_bind_dtor(tuio::TUIOClientHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< tuio::TUIOClientHandler >::className[] = "TUIOClientHandler";
const char LunaTraits< tuio::TUIOClientHandler >::fullName[] = "tuio::TUIOClientHandler";
const char LunaTraits< tuio::TUIOClientHandler >::moduleName[] = "tuio";
const char* LunaTraits< tuio::TUIOClientHandler >::parents[] = {"osgGA.GUIEventHandler", 0};
const int LunaTraits< tuio::TUIOClientHandler >::hash = 41356580;
const int LunaTraits< tuio::TUIOClientHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< tuio::TUIOClientHandler >::methods[] = {
	{"__eq", &luna_wrapper_tuio_TUIOClientHandler::_bind___eq},
	{"fromVoid", &luna_wrapper_tuio_TUIOClientHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_tuio_TUIOClientHandler::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< tuio::TUIOClientHandler >::converters[] = {
	{"osgGA::GUIEventHandler", &luna_wrapper_tuio_TUIOClientHandler::_cast_from_GUIEventHandler},
	{0,0}
};

luna_RegEnumType LunaTraits< tuio::TUIOClientHandler >::enumValues[] = {
	{0,0}
};


