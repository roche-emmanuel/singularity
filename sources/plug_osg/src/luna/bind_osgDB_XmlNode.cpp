#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_XmlNode.h>

class luna_wrapper_osgDB_XmlNode {
public:
	typedef Luna< osgDB::XmlNode > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable()");
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

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
		//osgDB::XmlNode* ptr= dynamic_cast< osgDB::XmlNode* >(Luna< osg::Referenced >::check(L,1));
		osgDB::XmlNode* ptr= luna_caster< osg::Referenced, osgDB::XmlNode >::cast(Luna< osg::Referenced >::check(L,1));
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

	inline static bool _lg_typecheck_write(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		if( luatop>2 && lua_isstring(L,3)==0 ) return false;
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


		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::XmlNode::getTrimmedContents() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		std::string lret = self->getTrimmedContents();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::XmlNode::write(std::ostream & fout, const std::string & indent = "") const
	static int _bind_write(lua_State *L) {
		if (!_lg_typecheck_write(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::XmlNode::write(std::ostream & fout, const std::string & indent = \"\") const function, expected prototype:\nbool osgDB::XmlNode::write(std::ostream & fout, const std::string & indent = \"\") const\nClass arguments details:\narg 1 ID = 2993706\n");
		}

		int luatop = lua_gettop(L);

		std::ostream* fout_ptr=(Luna< std::ostream >::check(L,2));
		if( !fout_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fout in osgDB::XmlNode::write function");
		}
		std::ostream & fout=*fout_ptr;
		std::string indent(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::XmlNode* self=Luna< osg::Referenced >::checkSubType< osgDB::XmlNode >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::XmlNode::write(std::ostream &, const std::string &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->write(fout, indent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgDB::XmlNode* LunaTraits< osgDB::XmlNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_XmlNode::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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
	{"write", &luna_wrapper_osgDB_XmlNode::_bind_write},
	{"__eq", &luna_wrapper_osgDB_XmlNode::_bind___eq},
	{"getTable", &luna_wrapper_osgDB_XmlNode::_bind_getTable},
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


