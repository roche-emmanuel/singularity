#include <plug_common.h>

class luna_wrapper_osgDB_FileList {
public:
	typedef Luna< osgDB::FileList > luna_t;

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
		osgDB::FileList* ptr= dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::FileList >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_empty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_containsFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_append(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::FileList::FileList()
	static osgDB::FileList* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileList::FileList() function, expected prototype:\nosgDB::FileList::FileList()\nClass arguments details:\n");
		}


		return new osgDB::FileList();
	}

	// osgDB::FileList::FileList(const osgDB::FileList & fileList, const osg::CopyOp  = osg::CopyOp::SHALLOW_COPY)
	static osgDB::FileList* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileList::FileList(const osgDB::FileList & fileList, const osg::CopyOp  = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::FileList::FileList(const osgDB::FileList & fileList, const osg::CopyOp  = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::FileList* fileList_ptr=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if( !fileList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fileList in osgDB::FileList::FileList function");
		}
		const osgDB::FileList & fileList=*fileList_ptr;
		const osg::CopyOp* _arg2_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::FileList::FileList function");
		}
		const osg::CopyOp _arg2=luatop>1 ? *_arg2_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgDB::FileList(fileList, _arg2);
	}

	// Overload binder for osgDB::FileList::FileList
	static osgDB::FileList* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FileList, cannot match any of the overloads for function FileList:\n  FileList()\n  FileList(const osgDB::FileList &, const osg::CopyOp)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::FileList::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::FileList::cloneType() const function, expected prototype:\nosg::Object * osgDB::FileList::cloneType() const\nClass arguments details:\n");
		}


		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::FileList::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::FileList::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::FileList::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgDB::FileList::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::FileList::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::FileList::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::FileList::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FileList::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::FileList::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FileList::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::FileList::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::FileList::libraryName() const function, expected prototype:\nconst char * osgDB::FileList::libraryName() const\nClass arguments details:\n");
		}


		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::FileList::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::FileList::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::FileList::className() const function, expected prototype:\nconst char * osgDB::FileList::className() const\nClass arguments details:\n");
		}


		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::FileList::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgDB::FileList::empty() const
	static int _bind_empty(lua_State *L) {
		if (!_lg_typecheck_empty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FileList::empty() const function, expected prototype:\nbool osgDB::FileList::empty() const\nClass arguments details:\n");
		}


		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FileList::empty() const");
		}
		bool lret = self->empty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FileList::containsFile(const std::string & filename) const
	static int _bind_containsFile(lua_State *L) {
		if (!_lg_typecheck_containsFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FileList::containsFile(const std::string & filename) const function, expected prototype:\nbool osgDB::FileList::containsFile(const std::string & filename) const\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FileList::containsFile(const std::string &) const");
		}
		bool lret = self->containsFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::FileList::addFile(const std::string & filename)
	static int _bind_addFile(lua_State *L) {
		if (!_lg_typecheck_addFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FileList::addFile(const std::string & filename) function, expected prototype:\nvoid osgDB::FileList::addFile(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FileList::addFile(const std::string &)");
		}
		self->addFile(filename);

		return 0;
	}

	// bool osgDB::FileList::removeFile(const std::string & filename)
	static int _bind_removeFile(lua_State *L) {
		if (!_lg_typecheck_removeFile(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FileList::removeFile(const std::string & filename) function, expected prototype:\nbool osgDB::FileList::removeFile(const std::string & filename)\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FileList::removeFile(const std::string &)");
		}
		bool lret = self->removeFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::FileList::append(osgDB::FileList * fileList)
	static int _bind_append(lua_State *L) {
		if (!_lg_typecheck_append(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FileList::append(osgDB::FileList * fileList) function, expected prototype:\nvoid osgDB::FileList::append(osgDB::FileList * fileList)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::FileList* fileList=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,2));

		osgDB::FileList* self=dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FileList::append(osgDB::FileList *)");
		}
		self->append(fileList);

		return 0;
	}


	// Operator binds:

};

osgDB::FileList* LunaTraits< osgDB::FileList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_FileList::_bind_ctor(L);
}

void LunaTraits< osgDB::FileList >::_bind_dtor(osgDB::FileList* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::FileList >::className[] = "FileList";
const char LunaTraits< osgDB::FileList >::fullName[] = "osgDB::FileList";
const char LunaTraits< osgDB::FileList >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FileList >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::FileList >::hash = 8310353;
const int LunaTraits< osgDB::FileList >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::FileList >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_FileList::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_FileList::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_FileList::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_FileList::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_FileList::_bind_className},
	{"empty", &luna_wrapper_osgDB_FileList::_bind_empty},
	{"containsFile", &luna_wrapper_osgDB_FileList::_bind_containsFile},
	{"addFile", &luna_wrapper_osgDB_FileList::_bind_addFile},
	{"removeFile", &luna_wrapper_osgDB_FileList::_bind_removeFile},
	{"append", &luna_wrapper_osgDB_FileList::_bind_append},
	{"__eq", &luna_wrapper_osgDB_FileList::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FileList >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_FileList::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FileList >::enumValues[] = {
	{0,0}
};


