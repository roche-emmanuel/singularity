#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_osg_Billboard_ptr_osgUtil_Optimizer_FlattenBillboardVisitor_NodePathList {
public:
	typedef Luna< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60871569) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList >*)");
		}

		std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList >* rhs =(Luna< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::check(L,2));
		std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList >* self=(Luna< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::check(L,1));
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

		std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList >* self=(Luna< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList >");
		
		return luna_dynamicCast(L,converters,"std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList >",name);
	}
};

std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList >* LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::_bind_dtor(std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList >* obj) {
	//delete obj; // do not delete by default.
}

const char LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::className[] = "std_map_osg_Billboard_ptr_osgUtil_Optimizer_FlattenBillboardVisitor_NodePathList";
const char LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::fullName[] = "std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList >";
const char LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::moduleName[] = "osg";
const char* LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::parents[] = {0};
const int LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::hash = 60871569;
const int LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::uniqueIDs[] = {60871569,0};

luna_RegType LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_osg_Billboard_ptr_osgUtil_Optimizer_FlattenBillboardVisitor_NodePathList::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_osg_Billboard_ptr_osgUtil_Optimizer_FlattenBillboardVisitor_NodePathList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< osg::Billboard *, osgUtil::Optimizer::FlattenBillboardVisitor::NodePathList > >::enumValues[] = {
	{0,0}
};


