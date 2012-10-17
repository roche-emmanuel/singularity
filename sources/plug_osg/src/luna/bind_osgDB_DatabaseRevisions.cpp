#include <plug_common.h>

class luna_wrapper_osgDB_DatabaseRevisions {
public:
	typedef Luna< osgDB::DatabaseRevisions > luna_t;

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
		osgDB::DatabaseRevisions* ptr= dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DatabaseRevisions >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addRevision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeRevision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabaseRevision(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isFileBlackListed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::DatabaseRevisions::DatabaseRevisions()
	static osgDB::DatabaseRevisions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevisions::DatabaseRevisions() function, expected prototype:\nosgDB::DatabaseRevisions::DatabaseRevisions()\nClass arguments details:\n");
		}


		return new osgDB::DatabaseRevisions();
	}

	// osgDB::DatabaseRevisions::DatabaseRevisions(const osgDB::DatabaseRevisions & revisions, const osg::CopyOp  = osg::CopyOp::SHALLOW_COPY)
	static osgDB::DatabaseRevisions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevisions::DatabaseRevisions(const osgDB::DatabaseRevisions & revisions, const osg::CopyOp  = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::DatabaseRevisions::DatabaseRevisions(const osgDB::DatabaseRevisions & revisions, const osg::CopyOp  = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::DatabaseRevisions* revisions_ptr=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if( !revisions_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg revisions in osgDB::DatabaseRevisions::DatabaseRevisions function");
		}
		const osgDB::DatabaseRevisions & revisions=*revisions_ptr;
		const osg::CopyOp* _arg2_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::DatabaseRevisions::DatabaseRevisions function");
		}
		const osg::CopyOp _arg2=luatop>1 ? *_arg2_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgDB::DatabaseRevisions(revisions, _arg2);
	}

	// Overload binder for osgDB::DatabaseRevisions::DatabaseRevisions
	static osgDB::DatabaseRevisions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DatabaseRevisions, cannot match any of the overloads for function DatabaseRevisions:\n  DatabaseRevisions()\n  DatabaseRevisions(const osgDB::DatabaseRevisions &, const osg::CopyOp)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::DatabaseRevisions::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevisions::cloneType() const function, expected prototype:\nosg::Object * osgDB::DatabaseRevisions::cloneType() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevisions::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::DatabaseRevisions::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevisions::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgDB::DatabaseRevisions::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::DatabaseRevisions::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevisions::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::DatabaseRevisions::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevisions::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::DatabaseRevisions::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevisions::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::DatabaseRevisions::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevisions::libraryName() const function, expected prototype:\nconst char * osgDB::DatabaseRevisions::libraryName() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevisions::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::DatabaseRevisions::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevisions::className() const function, expected prototype:\nconst char * osgDB::DatabaseRevisions::className() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevisions::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::DatabaseRevisions::setDatabasePath(const std::string & path)
	static int _bind_setDatabasePath(lua_State *L) {
		if (!_lg_typecheck_setDatabasePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::setDatabasePath(const std::string & path) function, expected prototype:\nvoid osgDB::DatabaseRevisions::setDatabasePath(const std::string & path)\nClass arguments details:\n");
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::setDatabasePath(const std::string &)");
		}
		self->setDatabasePath(path);

		return 0;
	}

	// const std::string & osgDB::DatabaseRevisions::getDatabasePath() const
	static int _bind_getDatabasePath(lua_State *L) {
		if (!_lg_typecheck_getDatabasePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::DatabaseRevisions::getDatabasePath() const function, expected prototype:\nconst std::string & osgDB::DatabaseRevisions::getDatabasePath() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::DatabaseRevisions::getDatabasePath() const");
		}
		const std::string & lret = self->getDatabasePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::DatabaseRevisions::addRevision(osgDB::DatabaseRevision * revision)
	static int _bind_addRevision(lua_State *L) {
		if (!_lg_typecheck_addRevision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::addRevision(osgDB::DatabaseRevision * revision) function, expected prototype:\nvoid osgDB::DatabaseRevisions::addRevision(osgDB::DatabaseRevision * revision)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::DatabaseRevision* revision=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::addRevision(osgDB::DatabaseRevision *)");
		}
		self->addRevision(revision);

		return 0;
	}

	// void osgDB::DatabaseRevisions::removeRevision(osgDB::DatabaseRevision * revision)
	static int _bind_removeRevision(lua_State *L) {
		if (!_lg_typecheck_removeRevision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevisions::removeRevision(osgDB::DatabaseRevision * revision) function, expected prototype:\nvoid osgDB::DatabaseRevisions::removeRevision(osgDB::DatabaseRevision * revision)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::DatabaseRevision* revision=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevisions::removeRevision(osgDB::DatabaseRevision *)");
		}
		self->removeRevision(revision);

		return 0;
	}

	// osgDB::DatabaseRevision * osgDB::DatabaseRevisions::getDatabaseRevision(unsigned int i)
	static int _bind_getDatabaseRevision(lua_State *L) {
		if (!_lg_typecheck_getDatabaseRevision(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevision * osgDB::DatabaseRevisions::getDatabaseRevision(unsigned int i) function, expected prototype:\nosgDB::DatabaseRevision * osgDB::DatabaseRevisions::getDatabaseRevision(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::DatabaseRevision * osgDB::DatabaseRevisions::getDatabaseRevision(unsigned int)");
		}
		osgDB::DatabaseRevision * lret = self->getDatabaseRevision(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabaseRevision >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::DatabaseRevisions::isFileBlackListed(const std::string & filename) const
	static int _bind_isFileBlackListed(lua_State *L) {
		if (!_lg_typecheck_isFileBlackListed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevisions::isFileBlackListed(const std::string & filename) const function, expected prototype:\nbool osgDB::DatabaseRevisions::isFileBlackListed(const std::string & filename) const\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevisions::isFileBlackListed(const std::string &) const");
		}
		bool lret = self->isFileBlackListed(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::DatabaseRevisions::removeFile(const std::string & filename)
	static int _bind_removeFile(lua_State *L) {
		if (!_lg_typecheck_removeFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevisions::removeFile(const std::string & filename) function, expected prototype:\nbool osgDB::DatabaseRevisions::removeFile(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevisions* self=dynamic_cast< osgDB::DatabaseRevisions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevisions::removeFile(const std::string &)");
		}
		bool lret = self->removeFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgDB::DatabaseRevisions* LunaTraits< osgDB::DatabaseRevisions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_DatabaseRevisions::_bind_ctor(L);
}

void LunaTraits< osgDB::DatabaseRevisions >::_bind_dtor(osgDB::DatabaseRevisions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DatabaseRevisions >::className[] = "DatabaseRevisions";
const char LunaTraits< osgDB::DatabaseRevisions >::fullName[] = "osgDB::DatabaseRevisions";
const char LunaTraits< osgDB::DatabaseRevisions >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DatabaseRevisions >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::DatabaseRevisions >::hash = 66152086;
const int LunaTraits< osgDB::DatabaseRevisions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DatabaseRevisions >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_DatabaseRevisions::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_DatabaseRevisions::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_DatabaseRevisions::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_DatabaseRevisions::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_DatabaseRevisions::_bind_className},
	{"setDatabasePath", &luna_wrapper_osgDB_DatabaseRevisions::_bind_setDatabasePath},
	{"getDatabasePath", &luna_wrapper_osgDB_DatabaseRevisions::_bind_getDatabasePath},
	{"addRevision", &luna_wrapper_osgDB_DatabaseRevisions::_bind_addRevision},
	{"removeRevision", &luna_wrapper_osgDB_DatabaseRevisions::_bind_removeRevision},
	{"getDatabaseRevision", &luna_wrapper_osgDB_DatabaseRevisions::_bind_getDatabaseRevision},
	{"isFileBlackListed", &luna_wrapper_osgDB_DatabaseRevisions::_bind_isFileBlackListed},
	{"removeFile", &luna_wrapper_osgDB_DatabaseRevisions::_bind_removeFile},
	{"__eq", &luna_wrapper_osgDB_DatabaseRevisions::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DatabaseRevisions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DatabaseRevisions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DatabaseRevisions >::enumValues[] = {
	{0,0}
};


