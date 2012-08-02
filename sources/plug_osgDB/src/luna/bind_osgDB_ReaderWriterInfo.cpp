#include <plug_common.h>

class luna_wrapper_osgDB_ReaderWriterInfo {
public:
	typedef Luna< osgDB::ReaderWriterInfo > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::ReaderWriterInfo* ptr= dynamic_cast< osgDB::ReaderWriterInfo* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ReaderWriterInfo >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ReaderWriterInfo::ReaderWriterInfo()
	static osgDB::ReaderWriterInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriterInfo::ReaderWriterInfo() function, expected prototype:\nosgDB::ReaderWriterInfo::ReaderWriterInfo()\nClass arguments details:\n");
		}


		return new osgDB::ReaderWriterInfo();
	}


	// Function binds:

	// Operator binds:

};

osgDB::ReaderWriterInfo* LunaTraits< osgDB::ReaderWriterInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ReaderWriterInfo::_bind_ctor(L);
}

void LunaTraits< osgDB::ReaderWriterInfo >::_bind_dtor(osgDB::ReaderWriterInfo* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ReaderWriterInfo >::className[] = "ReaderWriterInfo";
const char LunaTraits< osgDB::ReaderWriterInfo >::fullName[] = "osgDB::ReaderWriterInfo";
const char LunaTraits< osgDB::ReaderWriterInfo >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ReaderWriterInfo >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ReaderWriterInfo >::hash = 61536756;
const int LunaTraits< osgDB::ReaderWriterInfo >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ReaderWriterInfo >::methods[] = {
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ReaderWriterInfo >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ReaderWriterInfo::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ReaderWriterInfo >::enumValues[] = {
	{0,0}
};


