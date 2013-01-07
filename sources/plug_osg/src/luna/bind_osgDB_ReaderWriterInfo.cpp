#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ReaderWriterInfo.h>

class luna_wrapper_osgDB_ReaderWriterInfo {
public:
	typedef Luna< osgDB::ReaderWriterInfo > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//osgDB::ReaderWriterInfo* ptr= dynamic_cast< osgDB::ReaderWriterInfo* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ReaderWriterInfo* ptr= luna_caster< osg::Referenced, osgDB::ReaderWriterInfo >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ReaderWriterInfo >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ReaderWriterInfo::ReaderWriterInfo()
	static osgDB::ReaderWriterInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriterInfo::ReaderWriterInfo() function, expected prototype:\nosgDB::ReaderWriterInfo::ReaderWriterInfo()\nClass arguments details:\n");
		}


		return new osgDB::ReaderWriterInfo();
	}

	// osgDB::ReaderWriterInfo::ReaderWriterInfo(lua_Table * data)
	static osgDB::ReaderWriterInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriterInfo::ReaderWriterInfo(lua_Table * data) function, expected prototype:\nosgDB::ReaderWriterInfo::ReaderWriterInfo(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgDB_ReaderWriterInfo(L,NULL);
	}

	// Overload binder for osgDB::ReaderWriterInfo::ReaderWriterInfo
	static osgDB::ReaderWriterInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ReaderWriterInfo, cannot match any of the overloads for function ReaderWriterInfo:\n  ReaderWriterInfo()\n  ReaderWriterInfo(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::ReaderWriterInfo::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriterInfo::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ReaderWriterInfo::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriterInfo::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ReaderWriterInfo::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::ReaderWriterInfo* LunaTraits< osgDB::ReaderWriterInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ReaderWriterInfo::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
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
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_osgDB_ReaderWriterInfo::_bind___eq},
	{"getTable", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ReaderWriterInfo >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ReaderWriterInfo::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ReaderWriterInfo >::enumValues[] = {
	{0,0}
};


