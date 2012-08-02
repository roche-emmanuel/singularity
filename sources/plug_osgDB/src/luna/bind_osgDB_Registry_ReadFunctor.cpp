#include <plug_common.h>

class luna_wrapper_osgDB_Registry_ReadFunctor {
public:
	typedef Luna< osgDB::Registry::ReadFunctor > luna_t;

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

		osgDB::Registry::ReadFunctor* self=(Luna< osgDB::Registry::ReadFunctor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::Registry::ReadFunctor");
		
		return luna_dynamicCast(L,converters,"osgDB::Registry::ReadFunctor",name);
	}


	// Function checkers:
	inline static bool _lg_typecheck_doRead(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isValid_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25279089) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isValid_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// osgDB::ReaderWriter::ReadResult osgDB::Registry::ReadFunctor::doRead(osgDB::ReaderWriter & rw) const
	static int _bind_doRead(lua_State *L) {
		if (!_lg_typecheck_doRead(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Registry::ReadFunctor::doRead(osgDB::ReaderWriter & rw) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Registry::ReadFunctor::doRead(osgDB::ReaderWriter & rw) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::ReaderWriter* rw_ptr=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,2));
		if( !rw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rw in osgDB::Registry::ReadFunctor::doRead function");
		}
		osgDB::ReaderWriter & rw=*rw_ptr;

		osgDB::Registry::ReadFunctor* self=(Luna< osgDB::Registry::ReadFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Registry::ReadFunctor::doRead(osgDB::ReaderWriter &) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->doRead(rw);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// bool osgDB::Registry::ReadFunctor::isValid(osgDB::ReaderWriter::ReadResult & readResult) const
	static int _bind_isValid_overload_1(lua_State *L) {
		if (!_lg_typecheck_isValid_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Registry::ReadFunctor::isValid(osgDB::ReaderWriter::ReadResult & readResult) const function, expected prototype:\nbool osgDB::Registry::ReadFunctor::isValid(osgDB::ReaderWriter::ReadResult & readResult) const\nClass arguments details:\narg 1 ID = 25279089\n");
		}

		osgDB::ReaderWriter::ReadResult* readResult_ptr=(Luna< osgDB::ReaderWriter::ReadResult >::check(L,2));
		if( !readResult_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg readResult in osgDB::Registry::ReadFunctor::isValid function");
		}
		osgDB::ReaderWriter::ReadResult & readResult=*readResult_ptr;

		osgDB::Registry::ReadFunctor* self=(Luna< osgDB::Registry::ReadFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Registry::ReadFunctor::isValid(osgDB::ReaderWriter::ReadResult &) const");
		}
		bool lret = self->isValid(readResult);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::Registry::ReadFunctor::isValid(osg::Object * object) const
	static int _bind_isValid_overload_2(lua_State *L) {
		if (!_lg_typecheck_isValid_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Registry::ReadFunctor::isValid(osg::Object * object) const function, expected prototype:\nbool osgDB::Registry::ReadFunctor::isValid(osg::Object * object) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Object* object=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Registry::ReadFunctor* self=(Luna< osgDB::Registry::ReadFunctor >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Registry::ReadFunctor::isValid(osg::Object *) const");
		}
		bool lret = self->isValid(object);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgDB::Registry::ReadFunctor::isValid
	static int _bind_isValid(lua_State *L) {
		if (_lg_typecheck_isValid_overload_1(L)) return _bind_isValid_overload_1(L);
		if (_lg_typecheck_isValid_overload_2(L)) return _bind_isValid_overload_2(L);

		luaL_error(L, "error in function isValid, cannot match any of the overloads for function isValid:\n  isValid(osgDB::ReaderWriter::ReadResult &)\n  isValid(osg::Object *)\n");
		return 0;
	}


	// Operator binds:

};

osgDB::Registry::ReadFunctor* LunaTraits< osgDB::Registry::ReadFunctor >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// osgDB::ReaderWriter::ReadResult osgDB::Registry::ReadFunctor::doRead(osgDB::ReaderWriter & rw) const
	// bool osgDB::Registry::ReadFunctor::isValid(osgDB::ReaderWriter::ReadResult & readResult) const
	// bool osgDB::Registry::ReadFunctor::isValid(osg::Object * object) const

	// Abstract operators:
}

void LunaTraits< osgDB::Registry::ReadFunctor >::_bind_dtor(osgDB::Registry::ReadFunctor* obj) {
	delete obj;
}

const char LunaTraits< osgDB::Registry::ReadFunctor >::className[] = "ReadFunctor";
const char LunaTraits< osgDB::Registry::ReadFunctor >::fullName[] = "osgDB::Registry::ReadFunctor";
const char LunaTraits< osgDB::Registry::ReadFunctor >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::Registry::ReadFunctor >::parents[] = {0};
const int LunaTraits< osgDB::Registry::ReadFunctor >::hash = 24569242;
const int LunaTraits< osgDB::Registry::ReadFunctor >::uniqueIDs[] = {24569242,0};

luna_RegType LunaTraits< osgDB::Registry::ReadFunctor >::methods[] = {
	{"doRead", &luna_wrapper_osgDB_Registry_ReadFunctor::_bind_doRead},
	{"isValid", &luna_wrapper_osgDB_Registry_ReadFunctor::_bind_isValid},
	{"dynCast", &luna_wrapper_osgDB_Registry_ReadFunctor::_bind_dynCast},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::Registry::ReadFunctor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::Registry::ReadFunctor >::enumValues[] = {
	{0,0}
};


