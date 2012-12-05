#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_XmlNode.h>

class luna_wrapper_osgDB_XmlNode {
public:
	typedef Luna< osgDB::XmlNode > luna_t;

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

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::XmlNode* ptr= dynamic_cast< osgDB::XmlNode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::XmlNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTrimmedContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::XmlNode::XmlNode()
	static osgDB::XmlNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::XmlNode::XmlNode() function, expected prototype:\nosgDB::XmlNode::XmlNode()\nClass arguments details:\n");
		}


		return new osgDB::XmlNode();
	}

	// osgDB::XmlNode::XmlNode(lua_Table * data)
	static osgDB::XmlNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::XmlNode::XmlNode(lua_Table * data) function, expected prototype:\nosgDB::XmlNode::XmlNode(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgDB_XmlNode(L,NULL);
	}

	// Overload binder for osgDB::XmlNode::XmlNode
	static osgDB::XmlNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function XmlNode, cannot match any of the overloads for function XmlNode:\n  XmlNode()\n  XmlNode(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// std::string osgDB::XmlNode::getTrimmedContents() const
	static int _bind_getTrimmedContents(lua_State *L) {
		if (!_lg_typecheck_getTrimmedContents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::XmlNode::getTrimmedContents() const function, expected prototype:\nstd::string osgDB::XmlNode::getTrimmedContents() const\nClass arguments details:\n");
		}


		osgDB::XmlNode* self=dynamic_cast< osgDB::XmlNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::XmlNode::getTrimmedContents() const");
		}
		std::string lret = self->getTrimmedContents();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

osgDB::XmlNode* LunaTraits< osgDB::XmlNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_XmlNode::_bind_ctor(L);
}

void LunaTraits< osgDB::XmlNode >::_bind_dtor(osgDB::XmlNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::XmlNode >::className[] = "XmlNode";
const char LunaTraits< osgDB::XmlNode >::fullName[] = "osgDB::XmlNode";
const char LunaTraits< osgDB::XmlNode >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::XmlNode >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::XmlNode >::hash = 47261633;
const int LunaTraits< osgDB::XmlNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::XmlNode >::methods[] = {
	{"getTrimmedContents", &luna_wrapper_osgDB_XmlNode::_bind_getTrimmedContents},
	{"__eq", &luna_wrapper_osgDB_XmlNode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::XmlNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_XmlNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::XmlNode >::enumValues[] = {
	{"UNASSIGNED", osgDB::XmlNode::UNASSIGNED},
	{"ATOM", osgDB::XmlNode::ATOM},
	{"NODE", osgDB::XmlNode::NODE},
	{"GROUP", osgDB::XmlNode::GROUP},
	{"ROOT", osgDB::XmlNode::ROOT},
	{"COMMENT", osgDB::XmlNode::COMMENT},
	{"INFORMATION", osgDB::XmlNode::INFORMATION},
	{0,0}
};


