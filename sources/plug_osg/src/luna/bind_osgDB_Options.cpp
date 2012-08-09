#include <plug_common.h>

class luna_wrapper_osgDB_Options {
public:
	typedef Luna< osgDB::Options > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::Options* ptr= dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::Options >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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

	inline static bool _lg_typecheck_cloneOptions(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOptionString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOptionString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDatabasePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePathList_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabasePathList_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setObjectCacheHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getObjectCacheHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPrecisionHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPrecisionHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBuildKdTreesHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBuildKdTreesHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAuthenticationMap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAuthenticationMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPluginData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPluginData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPluginData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removePluginData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPluginData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPluginStringData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPluginStringData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getPluginStringData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removePluginStringData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPluginStringData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_parsePluginStringData(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFindFileCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFindFileCallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReadFileCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReadFileCallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWriteFileCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteFileCallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFileLocationCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileLocationCallback(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFileCache(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTerrain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61745152) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTerrain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::Options::Options()
	static osgDB::Options* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Options::Options() function, expected prototype:\nosgDB::Options::Options()\nClass arguments details:\n");
		}


		return new osgDB::Options();
	}

	// osgDB::Options::Options(const std::string & str)
	static osgDB::Options* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Options::Options(const std::string & str) function, expected prototype:\nosgDB::Options::Options(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,1),lua_objlen(L,1));

		return new osgDB::Options(str);
	}

	// osgDB::Options::Options(const osgDB::Options & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::Options* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Options::Options(const osgDB::Options & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::Options::Options(const osgDB::Options & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::Options* options_ptr=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if( !options_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg options in osgDB::Options::Options function");
		}
		const osgDB::Options & options=*options_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::Options::Options function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgDB::Options(options, copyop);
	}

	// Overload binder for osgDB::Options::Options
	static osgDB::Options* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Options, cannot match any of the overloads for function Options:\n  Options()\n  Options(const std::string &)\n  Options(const osgDB::Options &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::Options::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Options::cloneType() const function, expected prototype:\nosg::Object * osgDB::Options::cloneType() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Options::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::Options::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::Options::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgDB::Options::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Options::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::Options::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::Options::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Options::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::Options::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Options::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::Options::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::Options::libraryName() const function, expected prototype:\nconst char * osgDB::Options::libraryName() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::Options::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::Options::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::Options::className() const function, expected prototype:\nconst char * osgDB::Options::className() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::Options::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osgDB::Options * osgDB::Options::cloneOptions(const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) const
	static int _bind_cloneOptions(lua_State *L) {
		if (!_lg_typecheck_cloneOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Options * osgDB::Options::cloneOptions(const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) const function, expected prototype:\nosgDB::Options * osgDB::Options::cloneOptions(const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::Options::cloneOptions function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::Options * osgDB::Options::cloneOptions(const osg::CopyOp &) const");
		}
		osgDB::Options * lret = self->cloneOptions(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Options >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Options::setOptionString(const std::string & str)
	static int _bind_setOptionString(lua_State *L) {
		if (!_lg_typecheck_setOptionString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setOptionString(const std::string & str) function, expected prototype:\nvoid osgDB::Options::setOptionString(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setOptionString(const std::string &)");
		}
		self->setOptionString(str);

		return 0;
	}

	// const std::string & osgDB::Options::getOptionString() const
	static int _bind_getOptionString(lua_State *L) {
		if (!_lg_typecheck_getOptionString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::Options::getOptionString() const function, expected prototype:\nconst std::string & osgDB::Options::getOptionString() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::Options::getOptionString() const");
		}
		const std::string & lret = self->getOptionString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::Options::setDatabasePath(const std::string & str)
	static int _bind_setDatabasePath(lua_State *L) {
		if (!_lg_typecheck_setDatabasePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setDatabasePath(const std::string & str) function, expected prototype:\nvoid osgDB::Options::setDatabasePath(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setDatabasePath(const std::string &)");
		}
		self->setDatabasePath(str);

		return 0;
	}

	// osgDB::FilePathList & osgDB::Options::getDatabasePathList()
	static int _bind_getDatabasePathList_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabasePathList_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FilePathList & osgDB::Options::getDatabasePathList() function, expected prototype:\nosgDB::FilePathList & osgDB::Options::getDatabasePathList()\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FilePathList & osgDB::Options::getDatabasePathList()");
		}
		const osgDB::FilePathList* lret = &self->getDatabasePathList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FilePathList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FilePathList & osgDB::Options::getDatabasePathList() const
	static int _bind_getDatabasePathList_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabasePathList_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::FilePathList & osgDB::Options::getDatabasePathList() const function, expected prototype:\nconst osgDB::FilePathList & osgDB::Options::getDatabasePathList() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::FilePathList & osgDB::Options::getDatabasePathList() const");
		}
		const osgDB::FilePathList* lret = &self->getDatabasePathList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FilePathList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Options::getDatabasePathList
	static int _bind_getDatabasePathList(lua_State *L) {
		if (_lg_typecheck_getDatabasePathList_overload_1(L)) return _bind_getDatabasePathList_overload_1(L);
		if (_lg_typecheck_getDatabasePathList_overload_2(L)) return _bind_getDatabasePathList_overload_2(L);

		luaL_error(L, "error in function getDatabasePathList, cannot match any of the overloads for function getDatabasePathList:\n  getDatabasePathList()\n  getDatabasePathList()\n");
		return 0;
	}

	// void osgDB::Options::setObjectCacheHint(osgDB::Options::CacheHintOptions useObjectCache)
	static int _bind_setObjectCacheHint(lua_State *L) {
		if (!_lg_typecheck_setObjectCacheHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setObjectCacheHint(osgDB::Options::CacheHintOptions useObjectCache) function, expected prototype:\nvoid osgDB::Options::setObjectCacheHint(osgDB::Options::CacheHintOptions useObjectCache)\nClass arguments details:\n");
		}

		osgDB::Options::CacheHintOptions useObjectCache=(osgDB::Options::CacheHintOptions)lua_tointeger(L,2);

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setObjectCacheHint(osgDB::Options::CacheHintOptions)");
		}
		self->setObjectCacheHint(useObjectCache);

		return 0;
	}

	// osgDB::Options::CacheHintOptions osgDB::Options::getObjectCacheHint() const
	static int _bind_getObjectCacheHint(lua_State *L) {
		if (!_lg_typecheck_getObjectCacheHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Options::CacheHintOptions osgDB::Options::getObjectCacheHint() const function, expected prototype:\nosgDB::Options::CacheHintOptions osgDB::Options::getObjectCacheHint() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::Options::CacheHintOptions osgDB::Options::getObjectCacheHint() const");
		}
		osgDB::Options::CacheHintOptions lret = self->getObjectCacheHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Options::setPrecisionHint(osgDB::Options::PrecisionHint hint)
	static int _bind_setPrecisionHint(lua_State *L) {
		if (!_lg_typecheck_setPrecisionHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setPrecisionHint(osgDB::Options::PrecisionHint hint) function, expected prototype:\nvoid osgDB::Options::setPrecisionHint(osgDB::Options::PrecisionHint hint)\nClass arguments details:\n");
		}

		osgDB::Options::PrecisionHint hint=(osgDB::Options::PrecisionHint)lua_tointeger(L,2);

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setPrecisionHint(osgDB::Options::PrecisionHint)");
		}
		self->setPrecisionHint(hint);

		return 0;
	}

	// osgDB::Options::PrecisionHint osgDB::Options::getPrecisionHint() const
	static int _bind_getPrecisionHint(lua_State *L) {
		if (!_lg_typecheck_getPrecisionHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Options::PrecisionHint osgDB::Options::getPrecisionHint() const function, expected prototype:\nosgDB::Options::PrecisionHint osgDB::Options::getPrecisionHint() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::Options::PrecisionHint osgDB::Options::getPrecisionHint() const");
		}
		osgDB::Options::PrecisionHint lret = self->getPrecisionHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Options::setBuildKdTreesHint(osgDB::Options::BuildKdTreesHint hint)
	static int _bind_setBuildKdTreesHint(lua_State *L) {
		if (!_lg_typecheck_setBuildKdTreesHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setBuildKdTreesHint(osgDB::Options::BuildKdTreesHint hint) function, expected prototype:\nvoid osgDB::Options::setBuildKdTreesHint(osgDB::Options::BuildKdTreesHint hint)\nClass arguments details:\n");
		}

		osgDB::Options::BuildKdTreesHint hint=(osgDB::Options::BuildKdTreesHint)lua_tointeger(L,2);

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setBuildKdTreesHint(osgDB::Options::BuildKdTreesHint)");
		}
		self->setBuildKdTreesHint(hint);

		return 0;
	}

	// osgDB::Options::BuildKdTreesHint osgDB::Options::getBuildKdTreesHint() const
	static int _bind_getBuildKdTreesHint(lua_State *L) {
		if (!_lg_typecheck_getBuildKdTreesHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Options::BuildKdTreesHint osgDB::Options::getBuildKdTreesHint() const function, expected prototype:\nosgDB::Options::BuildKdTreesHint osgDB::Options::getBuildKdTreesHint() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::Options::BuildKdTreesHint osgDB::Options::getBuildKdTreesHint() const");
		}
		osgDB::Options::BuildKdTreesHint lret = self->getBuildKdTreesHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Options::setAuthenticationMap(osgDB::AuthenticationMap * authenticationMap)
	static int _bind_setAuthenticationMap(lua_State *L) {
		if (!_lg_typecheck_setAuthenticationMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setAuthenticationMap(osgDB::AuthenticationMap * authenticationMap) function, expected prototype:\nvoid osgDB::Options::setAuthenticationMap(osgDB::AuthenticationMap * authenticationMap)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::AuthenticationMap* authenticationMap=dynamic_cast< osgDB::AuthenticationMap* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setAuthenticationMap(osgDB::AuthenticationMap *)");
		}
		self->setAuthenticationMap(authenticationMap);

		return 0;
	}

	// const osgDB::AuthenticationMap * osgDB::Options::getAuthenticationMap() const
	static int _bind_getAuthenticationMap(lua_State *L) {
		if (!_lg_typecheck_getAuthenticationMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::AuthenticationMap * osgDB::Options::getAuthenticationMap() const function, expected prototype:\nconst osgDB::AuthenticationMap * osgDB::Options::getAuthenticationMap() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::AuthenticationMap * osgDB::Options::getAuthenticationMap() const");
		}
		const osgDB::AuthenticationMap * lret = self->getAuthenticationMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::AuthenticationMap >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Options::setPluginData(const std::string & s, void * v) const
	static int _bind_setPluginData(lua_State *L) {
		if (!_lg_typecheck_setPluginData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setPluginData(const std::string & s, void * v) const function, expected prototype:\nvoid osgDB::Options::setPluginData(const std::string & s, void * v) const\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));
		void* v=(Luna< void >::check(L,3));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setPluginData(const std::string &, void *) const");
		}
		self->setPluginData(s, v);

		return 0;
	}

	// void * osgDB::Options::getPluginData(const std::string & s)
	static int _bind_getPluginData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPluginData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void * osgDB::Options::getPluginData(const std::string & s) function, expected prototype:\nvoid * osgDB::Options::getPluginData(const std::string & s)\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void * osgDB::Options::getPluginData(const std::string &)");
		}
		void * lret = self->getPluginData(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// const void * osgDB::Options::getPluginData(const std::string & s) const
	static int _bind_getPluginData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPluginData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osgDB::Options::getPluginData(const std::string & s) const function, expected prototype:\nconst void * osgDB::Options::getPluginData(const std::string & s) const\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osgDB::Options::getPluginData(const std::string &) const");
		}
		const void * lret = self->getPluginData(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::Options::getPluginData
	static int _bind_getPluginData(lua_State *L) {
		if (_lg_typecheck_getPluginData_overload_1(L)) return _bind_getPluginData_overload_1(L);
		if (_lg_typecheck_getPluginData_overload_2(L)) return _bind_getPluginData_overload_2(L);

		luaL_error(L, "error in function getPluginData, cannot match any of the overloads for function getPluginData:\n  getPluginData(const std::string &)\n  getPluginData(const std::string &)\n");
		return 0;
	}

	// void osgDB::Options::removePluginData(const std::string & s) const
	static int _bind_removePluginData(lua_State *L) {
		if (!_lg_typecheck_removePluginData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::removePluginData(const std::string & s) const function, expected prototype:\nvoid osgDB::Options::removePluginData(const std::string & s) const\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::removePluginData(const std::string &) const");
		}
		self->removePluginData(s);

		return 0;
	}

	// unsigned int osgDB::Options::getNumPluginData() const
	static int _bind_getNumPluginData(lua_State *L) {
		if (!_lg_typecheck_getNumPluginData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::Options::getNumPluginData() const function, expected prototype:\nunsigned int osgDB::Options::getNumPluginData() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::Options::getNumPluginData() const");
		}
		unsigned int lret = self->getNumPluginData();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Options::setPluginStringData(const std::string & s, const std::string & v) const
	static int _bind_setPluginStringData(lua_State *L) {
		if (!_lg_typecheck_setPluginStringData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setPluginStringData(const std::string & s, const std::string & v) const function, expected prototype:\nvoid osgDB::Options::setPluginStringData(const std::string & s, const std::string & v) const\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));
		std::string v(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setPluginStringData(const std::string &, const std::string &) const");
		}
		self->setPluginStringData(s, v);

		return 0;
	}

	// std::string & osgDB::Options::getPluginStringData(const std::string & s)
	static int _bind_getPluginStringData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getPluginStringData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string & osgDB::Options::getPluginStringData(const std::string & s) function, expected prototype:\nstd::string & osgDB::Options::getPluginStringData(const std::string & s)\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string & osgDB::Options::getPluginStringData(const std::string &)");
		}
		std::string & lret = self->getPluginStringData(s);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const std::string osgDB::Options::getPluginStringData(const std::string & s) const
	static int _bind_getPluginStringData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getPluginStringData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string osgDB::Options::getPluginStringData(const std::string & s) const function, expected prototype:\nconst std::string osgDB::Options::getPluginStringData(const std::string & s) const\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string osgDB::Options::getPluginStringData(const std::string &) const");
		}
		const std::string lret = self->getPluginStringData(s);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for osgDB::Options::getPluginStringData
	static int _bind_getPluginStringData(lua_State *L) {
		if (_lg_typecheck_getPluginStringData_overload_1(L)) return _bind_getPluginStringData_overload_1(L);
		if (_lg_typecheck_getPluginStringData_overload_2(L)) return _bind_getPluginStringData_overload_2(L);

		luaL_error(L, "error in function getPluginStringData, cannot match any of the overloads for function getPluginStringData:\n  getPluginStringData(const std::string &)\n  getPluginStringData(const std::string &)\n");
		return 0;
	}

	// void osgDB::Options::removePluginStringData(const std::string & s) const
	static int _bind_removePluginStringData(lua_State *L) {
		if (!_lg_typecheck_removePluginStringData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::removePluginStringData(const std::string & s) const function, expected prototype:\nvoid osgDB::Options::removePluginStringData(const std::string & s) const\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::removePluginStringData(const std::string &) const");
		}
		self->removePluginStringData(s);

		return 0;
	}

	// unsigned int osgDB::Options::getNumPluginStringData() const
	static int _bind_getNumPluginStringData(lua_State *L) {
		if (!_lg_typecheck_getNumPluginStringData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::Options::getNumPluginStringData() const function, expected prototype:\nunsigned int osgDB::Options::getNumPluginStringData() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::Options::getNumPluginStringData() const");
		}
		unsigned int lret = self->getNumPluginStringData();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::Options::parsePluginStringData(const std::string & str, char separator1 = ' ', char separator2 = '=')
	static int _bind_parsePluginStringData(lua_State *L) {
		if (!_lg_typecheck_parsePluginStringData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::parsePluginStringData(const std::string & str, char separator1 = ' ', char separator2 = '=') function, expected prototype:\nvoid osgDB::Options::parsePluginStringData(const std::string & str, char separator1 = ' ', char separator2 = '=')\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		char separator1=luatop>2 ? (char)lua_tointeger(L,3) : ' ';
		char separator2=luatop>3 ? (char)lua_tointeger(L,4) : '=';

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::parsePluginStringData(const std::string &, char, char)");
		}
		self->parsePluginStringData(str, separator1, separator2);

		return 0;
	}

	// void osgDB::Options::setFindFileCallback(osgDB::FindFileCallback * cb)
	static int _bind_setFindFileCallback(lua_State *L) {
		if (!_lg_typecheck_setFindFileCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setFindFileCallback(osgDB::FindFileCallback * cb) function, expected prototype:\nvoid osgDB::Options::setFindFileCallback(osgDB::FindFileCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::FindFileCallback* cb=dynamic_cast< osgDB::FindFileCallback* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setFindFileCallback(osgDB::FindFileCallback *)");
		}
		self->setFindFileCallback(cb);

		return 0;
	}

	// osgDB::FindFileCallback * osgDB::Options::getFindFileCallback() const
	static int _bind_getFindFileCallback(lua_State *L) {
		if (!_lg_typecheck_getFindFileCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FindFileCallback * osgDB::Options::getFindFileCallback() const function, expected prototype:\nosgDB::FindFileCallback * osgDB::Options::getFindFileCallback() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FindFileCallback * osgDB::Options::getFindFileCallback() const");
		}
		osgDB::FindFileCallback * lret = self->getFindFileCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FindFileCallback >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Options::setReadFileCallback(osgDB::ReadFileCallback * cb)
	static int _bind_setReadFileCallback(lua_State *L) {
		if (!_lg_typecheck_setReadFileCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setReadFileCallback(osgDB::ReadFileCallback * cb) function, expected prototype:\nvoid osgDB::Options::setReadFileCallback(osgDB::ReadFileCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::ReadFileCallback* cb=dynamic_cast< osgDB::ReadFileCallback* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setReadFileCallback(osgDB::ReadFileCallback *)");
		}
		self->setReadFileCallback(cb);

		return 0;
	}

	// osgDB::ReadFileCallback * osgDB::Options::getReadFileCallback() const
	static int _bind_getReadFileCallback(lua_State *L) {
		if (!_lg_typecheck_getReadFileCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReadFileCallback * osgDB::Options::getReadFileCallback() const function, expected prototype:\nosgDB::ReadFileCallback * osgDB::Options::getReadFileCallback() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReadFileCallback * osgDB::Options::getReadFileCallback() const");
		}
		osgDB::ReadFileCallback * lret = self->getReadFileCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReadFileCallback >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Options::setWriteFileCallback(osgDB::WriteFileCallback * cb)
	static int _bind_setWriteFileCallback(lua_State *L) {
		if (!_lg_typecheck_setWriteFileCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setWriteFileCallback(osgDB::WriteFileCallback * cb) function, expected prototype:\nvoid osgDB::Options::setWriteFileCallback(osgDB::WriteFileCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::WriteFileCallback* cb=dynamic_cast< osgDB::WriteFileCallback* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setWriteFileCallback(osgDB::WriteFileCallback *)");
		}
		self->setWriteFileCallback(cb);

		return 0;
	}

	// osgDB::WriteFileCallback * osgDB::Options::getWriteFileCallback() const
	static int _bind_getWriteFileCallback(lua_State *L) {
		if (!_lg_typecheck_getWriteFileCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::WriteFileCallback * osgDB::Options::getWriteFileCallback() const function, expected prototype:\nosgDB::WriteFileCallback * osgDB::Options::getWriteFileCallback() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::WriteFileCallback * osgDB::Options::getWriteFileCallback() const");
		}
		osgDB::WriteFileCallback * lret = self->getWriteFileCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::WriteFileCallback >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Options::setFileLocationCallback(osgDB::FileLocationCallback * cb)
	static int _bind_setFileLocationCallback(lua_State *L) {
		if (!_lg_typecheck_setFileLocationCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setFileLocationCallback(osgDB::FileLocationCallback * cb) function, expected prototype:\nvoid osgDB::Options::setFileLocationCallback(osgDB::FileLocationCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::FileLocationCallback* cb=dynamic_cast< osgDB::FileLocationCallback* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setFileLocationCallback(osgDB::FileLocationCallback *)");
		}
		self->setFileLocationCallback(cb);

		return 0;
	}

	// osgDB::FileLocationCallback * osgDB::Options::getFileLocationCallback() const
	static int _bind_getFileLocationCallback(lua_State *L) {
		if (!_lg_typecheck_getFileLocationCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileLocationCallback * osgDB::Options::getFileLocationCallback() const function, expected prototype:\nosgDB::FileLocationCallback * osgDB::Options::getFileLocationCallback() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FileLocationCallback * osgDB::Options::getFileLocationCallback() const");
		}
		osgDB::FileLocationCallback * lret = self->getFileLocationCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileLocationCallback >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Options::setFileCache(osgDB::FileCache * fileCache)
	static int _bind_setFileCache(lua_State *L) {
		if (!_lg_typecheck_setFileCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setFileCache(osgDB::FileCache * fileCache) function, expected prototype:\nvoid osgDB::Options::setFileCache(osgDB::FileCache * fileCache)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::FileCache* fileCache=dynamic_cast< osgDB::FileCache* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setFileCache(osgDB::FileCache *)");
		}
		self->setFileCache(fileCache);

		return 0;
	}

	// osgDB::FileCache * osgDB::Options::getFileCache() const
	static int _bind_getFileCache(lua_State *L) {
		if (!_lg_typecheck_getFileCache(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileCache * osgDB::Options::getFileCache() const function, expected prototype:\nosgDB::FileCache * osgDB::Options::getFileCache() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FileCache * osgDB::Options::getFileCache() const");
		}
		osgDB::FileCache * lret = self->getFileCache();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileCache >::push(L,lret,false);

		return 1;
	}

	// void osgDB::Options::setTerrain(osg::observer_ptr< osg::Node > & terrain)
	static int _bind_setTerrain(lua_State *L) {
		if (!_lg_typecheck_setTerrain(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Options::setTerrain(osg::observer_ptr< osg::Node > & terrain) function, expected prototype:\nvoid osgDB::Options::setTerrain(osg::observer_ptr< osg::Node > & terrain)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		osg::observer_ptr< osg::Node > terrain = dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Options::setTerrain(osg::observer_ptr< osg::Node > &)");
		}
		self->setTerrain(terrain);

		return 0;
	}

	// const osg::observer_ptr< osg::Node > & osgDB::Options::getTerrain() const
	static int _bind_getTerrain(lua_State *L) {
		if (!_lg_typecheck_getTerrain(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::observer_ptr< osg::Node > & osgDB::Options::getTerrain() const function, expected prototype:\nconst osg::observer_ptr< osg::Node > & osgDB::Options::getTerrain() const\nClass arguments details:\n");
		}


		osgDB::Options* self=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::observer_ptr< osg::Node > & osgDB::Options::getTerrain() const");
		}
		const osg::observer_ptr< osg::Node > & lret = self->getTerrain();
		Luna< osg::Node >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

osgDB::Options* LunaTraits< osgDB::Options >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_Options::_bind_ctor(L);
}

void LunaTraits< osgDB::Options >::_bind_dtor(osgDB::Options* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::Options >::className[] = "Options";
const char LunaTraits< osgDB::Options >::fullName[] = "osgDB::Options";
const char LunaTraits< osgDB::Options >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::Options >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::Options >::hash = 53809819;
const int LunaTraits< osgDB::Options >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::Options >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_Options::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_Options::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_Options::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_Options::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_Options::_bind_className},
	{"cloneOptions", &luna_wrapper_osgDB_Options::_bind_cloneOptions},
	{"setOptionString", &luna_wrapper_osgDB_Options::_bind_setOptionString},
	{"getOptionString", &luna_wrapper_osgDB_Options::_bind_getOptionString},
	{"setDatabasePath", &luna_wrapper_osgDB_Options::_bind_setDatabasePath},
	{"getDatabasePathList", &luna_wrapper_osgDB_Options::_bind_getDatabasePathList},
	{"setObjectCacheHint", &luna_wrapper_osgDB_Options::_bind_setObjectCacheHint},
	{"getObjectCacheHint", &luna_wrapper_osgDB_Options::_bind_getObjectCacheHint},
	{"setPrecisionHint", &luna_wrapper_osgDB_Options::_bind_setPrecisionHint},
	{"getPrecisionHint", &luna_wrapper_osgDB_Options::_bind_getPrecisionHint},
	{"setBuildKdTreesHint", &luna_wrapper_osgDB_Options::_bind_setBuildKdTreesHint},
	{"getBuildKdTreesHint", &luna_wrapper_osgDB_Options::_bind_getBuildKdTreesHint},
	{"setAuthenticationMap", &luna_wrapper_osgDB_Options::_bind_setAuthenticationMap},
	{"getAuthenticationMap", &luna_wrapper_osgDB_Options::_bind_getAuthenticationMap},
	{"setPluginData", &luna_wrapper_osgDB_Options::_bind_setPluginData},
	{"getPluginData", &luna_wrapper_osgDB_Options::_bind_getPluginData},
	{"removePluginData", &luna_wrapper_osgDB_Options::_bind_removePluginData},
	{"getNumPluginData", &luna_wrapper_osgDB_Options::_bind_getNumPluginData},
	{"setPluginStringData", &luna_wrapper_osgDB_Options::_bind_setPluginStringData},
	{"getPluginStringData", &luna_wrapper_osgDB_Options::_bind_getPluginStringData},
	{"removePluginStringData", &luna_wrapper_osgDB_Options::_bind_removePluginStringData},
	{"getNumPluginStringData", &luna_wrapper_osgDB_Options::_bind_getNumPluginStringData},
	{"parsePluginStringData", &luna_wrapper_osgDB_Options::_bind_parsePluginStringData},
	{"setFindFileCallback", &luna_wrapper_osgDB_Options::_bind_setFindFileCallback},
	{"getFindFileCallback", &luna_wrapper_osgDB_Options::_bind_getFindFileCallback},
	{"setReadFileCallback", &luna_wrapper_osgDB_Options::_bind_setReadFileCallback},
	{"getReadFileCallback", &luna_wrapper_osgDB_Options::_bind_getReadFileCallback},
	{"setWriteFileCallback", &luna_wrapper_osgDB_Options::_bind_setWriteFileCallback},
	{"getWriteFileCallback", &luna_wrapper_osgDB_Options::_bind_getWriteFileCallback},
	{"setFileLocationCallback", &luna_wrapper_osgDB_Options::_bind_setFileLocationCallback},
	{"getFileLocationCallback", &luna_wrapper_osgDB_Options::_bind_getFileLocationCallback},
	{"setFileCache", &luna_wrapper_osgDB_Options::_bind_setFileCache},
	{"getFileCache", &luna_wrapper_osgDB_Options::_bind_getFileCache},
	{"setTerrain", &luna_wrapper_osgDB_Options::_bind_setTerrain},
	{"getTerrain", &luna_wrapper_osgDB_Options::_bind_getTerrain},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::Options >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_Options::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::Options >::enumValues[] = {
	{"CACHE_NONE", osgDB::Options::CACHE_NONE},
	{"CACHE_NODES", osgDB::Options::CACHE_NODES},
	{"CACHE_IMAGES", osgDB::Options::CACHE_IMAGES},
	{"CACHE_HEIGHTFIELDS", osgDB::Options::CACHE_HEIGHTFIELDS},
	{"CACHE_ARCHIVES", osgDB::Options::CACHE_ARCHIVES},
	{"CACHE_OBJECTS", osgDB::Options::CACHE_OBJECTS},
	{"CACHE_SHADERS", osgDB::Options::CACHE_SHADERS},
	{"CACHE_ALL", osgDB::Options::CACHE_ALL},
	{"FLOAT_PRECISION_ALL", osgDB::Options::FLOAT_PRECISION_ALL},
	{"DOUBLE_PRECISION_VERTEX", osgDB::Options::DOUBLE_PRECISION_VERTEX},
	{"DOUBLE_PRECISION_NORMAL", osgDB::Options::DOUBLE_PRECISION_NORMAL},
	{"DOUBLE_PRECISION_COLOR", osgDB::Options::DOUBLE_PRECISION_COLOR},
	{"DOUBLE_PRECISION_SECONDARY_COLOR", osgDB::Options::DOUBLE_PRECISION_SECONDARY_COLOR},
	{"DOUBLE_PRECISION_FOG_COORD", osgDB::Options::DOUBLE_PRECISION_FOG_COORD},
	{"DOUBLE_PRECISION_TEX_COORD", osgDB::Options::DOUBLE_PRECISION_TEX_COORD},
	{"DOUBLE_PRECISION_VERTEX_ATTRIB", osgDB::Options::DOUBLE_PRECISION_VERTEX_ATTRIB},
	{"DOUBLE_PRECISION_ALL", osgDB::Options::DOUBLE_PRECISION_ALL},
	{"NO_PREFERENCE", osgDB::Options::NO_PREFERENCE},
	{"DO_NOT_BUILD_KDTREES", osgDB::Options::DO_NOT_BUILD_KDTREES},
	{"BUILD_KDTREES", osgDB::Options::BUILD_KDTREES},
	{0,0}
};


