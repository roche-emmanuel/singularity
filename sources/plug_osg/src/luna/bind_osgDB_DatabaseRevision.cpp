#include <plug_common.h>

class luna_wrapper_osgDB_DatabaseRevision {
public:
	typedef Luna< osgDB::DatabaseRevision > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::DatabaseRevision* ptr= dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::DatabaseRevision >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_setFilesAdded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFilesAdded_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFilesAdded_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFilesRemoved(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFilesRemoved_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFilesRemoved_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFilesModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFilesModified_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFilesModified_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgDB::DatabaseRevision::DatabaseRevision()
	static osgDB::DatabaseRevision* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevision::DatabaseRevision() function, expected prototype:\nosgDB::DatabaseRevision::DatabaseRevision()\nClass arguments details:\n");
		}


		return new osgDB::DatabaseRevision();
	}

	// osgDB::DatabaseRevision::DatabaseRevision(const osgDB::DatabaseRevision & revision, const osg::CopyOp  = osg::CopyOp::SHALLOW_COPY)
	static osgDB::DatabaseRevision* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DatabaseRevision::DatabaseRevision(const osgDB::DatabaseRevision & revision, const osg::CopyOp  = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::DatabaseRevision::DatabaseRevision(const osgDB::DatabaseRevision & revision, const osg::CopyOp  = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::DatabaseRevision* revision_ptr=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if( !revision_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg revision in osgDB::DatabaseRevision::DatabaseRevision function");
		}
		const osgDB::DatabaseRevision & revision=*revision_ptr;
		const osg::CopyOp* _arg2_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::DatabaseRevision::DatabaseRevision function");
		}
		const osg::CopyOp _arg2=luatop>1 ? *_arg2_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgDB::DatabaseRevision(revision, _arg2);
	}

	// Overload binder for osgDB::DatabaseRevision::DatabaseRevision
	static osgDB::DatabaseRevision* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DatabaseRevision, cannot match any of the overloads for function DatabaseRevision:\n  DatabaseRevision()\n  DatabaseRevision(const osgDB::DatabaseRevision &, const osg::CopyOp)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::DatabaseRevision::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevision::cloneType() const function, expected prototype:\nosg::Object * osgDB::DatabaseRevision::cloneType() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevision::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::DatabaseRevision::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::DatabaseRevision::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgDB::DatabaseRevision::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::DatabaseRevision::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::DatabaseRevision::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::DatabaseRevision::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevision::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::DatabaseRevision::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevision::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::DatabaseRevision::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevision::libraryName() const function, expected prototype:\nconst char * osgDB::DatabaseRevision::libraryName() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevision::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::DatabaseRevision::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::DatabaseRevision::className() const function, expected prototype:\nconst char * osgDB::DatabaseRevision::className() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::DatabaseRevision::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::DatabaseRevision::setDatabasePath(const std::string & path)
	static int _bind_setDatabasePath(lua_State *L) {
		if (!_lg_typecheck_setDatabasePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::setDatabasePath(const std::string & path) function, expected prototype:\nvoid osgDB::DatabaseRevision::setDatabasePath(const std::string & path)\nClass arguments details:\n");
		}

		std::string path(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::setDatabasePath(const std::string &)");
		}
		self->setDatabasePath(path);

		return 0;
	}

	// const std::string & osgDB::DatabaseRevision::getDatabasePath() const
	static int _bind_getDatabasePath(lua_State *L) {
		if (!_lg_typecheck_getDatabasePath(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::DatabaseRevision::getDatabasePath() const function, expected prototype:\nconst std::string & osgDB::DatabaseRevision::getDatabasePath() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::DatabaseRevision::getDatabasePath() const");
		}
		const std::string & lret = self->getDatabasePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::DatabaseRevision::setFilesAdded(osgDB::FileList * fileList)
	static int _bind_setFilesAdded(lua_State *L) {
		if (!_lg_typecheck_setFilesAdded(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::setFilesAdded(osgDB::FileList * fileList) function, expected prototype:\nvoid osgDB::DatabaseRevision::setFilesAdded(osgDB::FileList * fileList)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::FileList* fileList=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::setFilesAdded(osgDB::FileList *)");
		}
		self->setFilesAdded(fileList);

		return 0;
	}

	// osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded()
	static int _bind_getFilesAdded_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFilesAdded_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() function, expected prototype:\nosgDB::FileList * osgDB::DatabaseRevision::getFilesAdded()\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded()");
		}
		osgDB::FileList * lret = self->getFilesAdded();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() const
	static int _bind_getFilesAdded_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFilesAdded_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() const function, expected prototype:\nconst osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::FileList * osgDB::DatabaseRevision::getFilesAdded() const");
		}
		const osgDB::FileList * lret = self->getFilesAdded();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::DatabaseRevision::getFilesAdded
	static int _bind_getFilesAdded(lua_State *L) {
		if (_lg_typecheck_getFilesAdded_overload_1(L)) return _bind_getFilesAdded_overload_1(L);
		if (_lg_typecheck_getFilesAdded_overload_2(L)) return _bind_getFilesAdded_overload_2(L);

		luaL_error(L, "error in function getFilesAdded, cannot match any of the overloads for function getFilesAdded:\n  getFilesAdded()\n  getFilesAdded()\n");
		return 0;
	}

	// void osgDB::DatabaseRevision::setFilesRemoved(osgDB::FileList * fileList)
	static int _bind_setFilesRemoved(lua_State *L) {
		if (!_lg_typecheck_setFilesRemoved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::setFilesRemoved(osgDB::FileList * fileList) function, expected prototype:\nvoid osgDB::DatabaseRevision::setFilesRemoved(osgDB::FileList * fileList)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::FileList* fileList=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::setFilesRemoved(osgDB::FileList *)");
		}
		self->setFilesRemoved(fileList);

		return 0;
	}

	// osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved()
	static int _bind_getFilesRemoved_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFilesRemoved_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() function, expected prototype:\nosgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved()\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved()");
		}
		osgDB::FileList * lret = self->getFilesRemoved();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() const
	static int _bind_getFilesRemoved_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFilesRemoved_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() const function, expected prototype:\nconst osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::FileList * osgDB::DatabaseRevision::getFilesRemoved() const");
		}
		const osgDB::FileList * lret = self->getFilesRemoved();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::DatabaseRevision::getFilesRemoved
	static int _bind_getFilesRemoved(lua_State *L) {
		if (_lg_typecheck_getFilesRemoved_overload_1(L)) return _bind_getFilesRemoved_overload_1(L);
		if (_lg_typecheck_getFilesRemoved_overload_2(L)) return _bind_getFilesRemoved_overload_2(L);

		luaL_error(L, "error in function getFilesRemoved, cannot match any of the overloads for function getFilesRemoved:\n  getFilesRemoved()\n  getFilesRemoved()\n");
		return 0;
	}

	// void osgDB::DatabaseRevision::setFilesModified(osgDB::FileList * fileList)
	static int _bind_setFilesModified(lua_State *L) {
		if (!_lg_typecheck_setFilesModified(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::DatabaseRevision::setFilesModified(osgDB::FileList * fileList) function, expected prototype:\nvoid osgDB::DatabaseRevision::setFilesModified(osgDB::FileList * fileList)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::FileList* fileList=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,2));

		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::DatabaseRevision::setFilesModified(osgDB::FileList *)");
		}
		self->setFilesModified(fileList);

		return 0;
	}

	// osgDB::FileList * osgDB::DatabaseRevision::getFilesModified()
	static int _bind_getFilesModified_overload_1(lua_State *L) {
		if (!_lg_typecheck_getFilesModified_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() function, expected prototype:\nosgDB::FileList * osgDB::DatabaseRevision::getFilesModified()\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FileList * osgDB::DatabaseRevision::getFilesModified()");
		}
		osgDB::FileList * lret = self->getFilesModified();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// const osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() const
	static int _bind_getFilesModified_overload_2(lua_State *L) {
		if (!_lg_typecheck_getFilesModified_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() const function, expected prototype:\nconst osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() const\nClass arguments details:\n");
		}


		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::FileList * osgDB::DatabaseRevision::getFilesModified() const");
		}
		const osgDB::FileList * lret = self->getFilesModified();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FileList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::DatabaseRevision::getFilesModified
	static int _bind_getFilesModified(lua_State *L) {
		if (_lg_typecheck_getFilesModified_overload_1(L)) return _bind_getFilesModified_overload_1(L);
		if (_lg_typecheck_getFilesModified_overload_2(L)) return _bind_getFilesModified_overload_2(L);

		luaL_error(L, "error in function getFilesModified, cannot match any of the overloads for function getFilesModified:\n  getFilesModified()\n  getFilesModified()\n");
		return 0;
	}

	// bool osgDB::DatabaseRevision::isFileBlackListed(const std::string & filename) const
	static int _bind_isFileBlackListed(lua_State *L) {
		if (!_lg_typecheck_isFileBlackListed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevision::isFileBlackListed(const std::string & filename) const function, expected prototype:\nbool osgDB::DatabaseRevision::isFileBlackListed(const std::string & filename) const\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevision::isFileBlackListed(const std::string &) const");
		}
		bool lret = self->isFileBlackListed(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::DatabaseRevision::removeFile(const std::string & filename)
	static int _bind_removeFile(lua_State *L) {
		if (!_lg_typecheck_removeFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::DatabaseRevision::removeFile(const std::string & filename) function, expected prototype:\nbool osgDB::DatabaseRevision::removeFile(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::DatabaseRevision* self=dynamic_cast< osgDB::DatabaseRevision* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::DatabaseRevision::removeFile(const std::string &)");
		}
		bool lret = self->removeFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgDB::DatabaseRevision* LunaTraits< osgDB::DatabaseRevision >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_DatabaseRevision::_bind_ctor(L);
}

void LunaTraits< osgDB::DatabaseRevision >::_bind_dtor(osgDB::DatabaseRevision* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::DatabaseRevision >::className[] = "DatabaseRevision";
const char LunaTraits< osgDB::DatabaseRevision >::fullName[] = "osgDB::DatabaseRevision";
const char LunaTraits< osgDB::DatabaseRevision >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::DatabaseRevision >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::DatabaseRevision >::hash = 8585549;
const int LunaTraits< osgDB::DatabaseRevision >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::DatabaseRevision >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_DatabaseRevision::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_DatabaseRevision::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_DatabaseRevision::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_DatabaseRevision::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_DatabaseRevision::_bind_className},
	{"setDatabasePath", &luna_wrapper_osgDB_DatabaseRevision::_bind_setDatabasePath},
	{"getDatabasePath", &luna_wrapper_osgDB_DatabaseRevision::_bind_getDatabasePath},
	{"setFilesAdded", &luna_wrapper_osgDB_DatabaseRevision::_bind_setFilesAdded},
	{"getFilesAdded", &luna_wrapper_osgDB_DatabaseRevision::_bind_getFilesAdded},
	{"setFilesRemoved", &luna_wrapper_osgDB_DatabaseRevision::_bind_setFilesRemoved},
	{"getFilesRemoved", &luna_wrapper_osgDB_DatabaseRevision::_bind_getFilesRemoved},
	{"setFilesModified", &luna_wrapper_osgDB_DatabaseRevision::_bind_setFilesModified},
	{"getFilesModified", &luna_wrapper_osgDB_DatabaseRevision::_bind_getFilesModified},
	{"isFileBlackListed", &luna_wrapper_osgDB_DatabaseRevision::_bind_isFileBlackListed},
	{"removeFile", &luna_wrapper_osgDB_DatabaseRevision::_bind_removeFile},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::DatabaseRevision >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_DatabaseRevision::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::DatabaseRevision >::enumValues[] = {
	{0,0}
};


