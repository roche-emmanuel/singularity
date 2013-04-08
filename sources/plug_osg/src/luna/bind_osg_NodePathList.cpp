#include <plug_common.h>

class luna_wrapper_osg_NodePathList {
public:
	typedef Luna< osg::NodePathList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71600444) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::NodePathList*)");
		}

		osg::NodePathList* rhs =(Luna< osg::NodePathList >::check(L,2));
		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osg::NodePathList* self= (osg::NodePathList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::NodePathList >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71600444) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< osg::NodePathList >::check(L,1));
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

		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::NodePathList");
		
		return luna_dynamicCast(L,converters,"osg::NodePathList",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_at(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_front(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_resize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pop_back(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	// void osg::NodePathList::assign(unsigned int arg1, osg::NodePath arg2)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodePathList::assign(unsigned int arg1, osg::NodePath arg2) function, expected prototype:\nvoid osg::NodePathList::assign(unsigned int arg1, osg::NodePath arg2)\nClass arguments details:\narg 2 ID = 52841328\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);
		osg::NodePath* arg2_ptr=(Luna< osg::NodePath >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::NodePathList::assign function");
		}
		osg::NodePath arg2=*arg2_ptr;

		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodePathList::assign(unsigned int, osg::NodePath). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		self->assign(arg1, arg2);

		return 0;
	}

	// osg::NodePath osg::NodePathList::at(unsigned int arg1)
	static int _bind_at(lua_State *L) {
		if (!_lg_typecheck_at(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodePath osg::NodePathList::at(unsigned int arg1) function, expected prototype:\nosg::NodePath osg::NodePathList::at(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodePath osg::NodePathList::at(unsigned int). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		osg::NodePath stack_lret = self->at(arg1);
		osg::NodePath* lret = new osg::NodePath(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,true);

		return 1;
	}

	// osg::NodePath osg::NodePathList::back()
	static int _bind_back(lua_State *L) {
		if (!_lg_typecheck_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodePath osg::NodePathList::back() function, expected prototype:\nosg::NodePath osg::NodePathList::back()\nClass arguments details:\n");
		}


		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodePath osg::NodePathList::back(). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		osg::NodePath stack_lret = self->back();
		osg::NodePath* lret = new osg::NodePath(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,true);

		return 1;
	}

	// osg::NodePath osg::NodePathList::front()
	static int _bind_front(lua_State *L) {
		if (!_lg_typecheck_front(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodePath osg::NodePathList::front() function, expected prototype:\nosg::NodePath osg::NodePathList::front()\nClass arguments details:\n");
		}


		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodePath osg::NodePathList::front(). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		osg::NodePath stack_lret = self->front();
		osg::NodePath* lret = new osg::NodePath(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,true);

		return 1;
	}

	// void osg::NodePathList::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodePathList::clear() function, expected prototype:\nvoid osg::NodePathList::clear()\nClass arguments details:\n");
		}


		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodePathList::clear(). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		self->clear();

		return 0;
	}

	// bool osg::NodePathList::empty()
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::NodePathList::empty() function, expected prototype:\nbool osg::NodePathList::empty()\nClass arguments details:\n");
		}


		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::NodePathList::empty(). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::NodePathList::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::NodePathList::size() function, expected prototype:\nunsigned int osg::NodePathList::size()\nClass arguments details:\n");
		}


		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::NodePathList::size(). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::NodePathList::resize(unsigned int arg1)
	static int _bind_resize(lua_State *L) {
		if (!_lg_typecheck_resize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodePathList::resize(unsigned int arg1) function, expected prototype:\nvoid osg::NodePathList::resize(unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodePathList::resize(unsigned int). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		self->resize(arg1);

		return 0;
	}

	// void osg::NodePathList::pop_back()
	static int _bind_pop_back(lua_State *L) {
		if (!_lg_typecheck_pop_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodePathList::pop_back() function, expected prototype:\nvoid osg::NodePathList::pop_back()\nClass arguments details:\n");
		}


		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodePathList::pop_back(). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		self->pop_back();

		return 0;
	}

	// void osg::NodePathList::push_back(osg::NodePath arg1)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::NodePathList::push_back(osg::NodePath arg1) function, expected prototype:\nvoid osg::NodePathList::push_back(osg::NodePath arg1)\nClass arguments details:\narg 1 ID = 52841328\n");
		}

		osg::NodePath* arg1_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::NodePathList::push_back function");
		}
		osg::NodePath arg1=*arg1_ptr;

		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::NodePathList::push_back(osg::NodePath). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		self->push_back(arg1);

		return 0;
	}


	// Operator binds:
	// osg::NodePath osg::NodePathList::operator[](unsigned int arg1)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::NodePath osg::NodePathList::operator[](unsigned int arg1) function, expected prototype:\nosg::NodePath osg::NodePathList::operator[](unsigned int arg1)\nClass arguments details:\n");
		}

		unsigned int arg1=(unsigned int)lua_tointeger(L,2);

		osg::NodePathList* self=(Luna< osg::NodePathList >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::NodePath osg::NodePathList::operator[](unsigned int). Got : '%s'",typeid(Luna< osg::NodePathList >::check(L,1)).name());
		}
		osg::NodePath stack_lret = self->operator[](arg1);
		osg::NodePath* lret = new osg::NodePath(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,true);

		return 1;
	}


};

osg::NodePathList* LunaTraits< osg::NodePathList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::NodePathList >::_bind_dtor(osg::NodePathList* obj) {
	delete obj;
}

const char LunaTraits< osg::NodePathList >::className[] = "NodePathList";
const char LunaTraits< osg::NodePathList >::fullName[] = "osg::NodePathList";
const char LunaTraits< osg::NodePathList >::moduleName[] = "osg";
const char* LunaTraits< osg::NodePathList >::parents[] = {0};
const int LunaTraits< osg::NodePathList >::hash = 71600444;
const int LunaTraits< osg::NodePathList >::uniqueIDs[] = {71600444,0};

luna_RegType LunaTraits< osg::NodePathList >::methods[] = {
	{"assign", &luna_wrapper_osg_NodePathList::_bind_assign},
	{"at", &luna_wrapper_osg_NodePathList::_bind_at},
	{"back", &luna_wrapper_osg_NodePathList::_bind_back},
	{"front", &luna_wrapper_osg_NodePathList::_bind_front},
	{"clear", &luna_wrapper_osg_NodePathList::_bind_clear},
	{"empty", &luna_wrapper_osg_NodePathList::_bind_empty},
	{"size", &luna_wrapper_osg_NodePathList::_bind_size},
	{"resize", &luna_wrapper_osg_NodePathList::_bind_resize},
	{"pop_back", &luna_wrapper_osg_NodePathList::_bind_pop_back},
	{"push_back", &luna_wrapper_osg_NodePathList::_bind_push_back},
	{"op_index", &luna_wrapper_osg_NodePathList::_bind_op_index},
	{"dynCast", &luna_wrapper_osg_NodePathList::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_NodePathList::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_NodePathList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_NodePathList::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodePathList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodePathList >::enumValues[] = {
	{0,0}
};


