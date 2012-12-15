#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FileList.h>

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
		//osgDB::FileList* ptr= dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1));
		osgDB::FileList* ptr= luna_caster< osg::Referenced, osgDB::FileList >::cast(Luna< osg::Referenced >::check(L,1));
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
		if( (!dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgDB::FileList* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	// osgDB::FileList::FileList(const osgDB::FileList & fileList, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY)
	static osgDB::FileList* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileList::FileList(const osgDB::FileList & fileList, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::FileList::FileList(const osgDB::FileList & fileList, const osg::CopyOp arg2 = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::FileList* fileList_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1));
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

	// osgDB::FileList::FileList(lua_Table * data)
	static osgDB::FileList* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileList::FileList(lua_Table * data) function, expected prototype:\nosgDB::FileList::FileList(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgDB_FileList(L,NULL);
	}

	// osgDB::FileList::FileList(lua_Table * data, const osgDB::FileList & fileList, const osg::CopyOp arg3 = osg::CopyOp::SHALLOW_COPY)
	static osgDB::FileList* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileList::FileList(lua_Table * data, const osgDB::FileList & fileList, const osg::CopyOp arg3 = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::FileList::FileList(lua_Table * data, const osgDB::FileList & fileList, const osg::CopyOp arg3 = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::FileList* fileList_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,2));
		if( !fileList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fileList in osgDB::FileList::FileList function");
		}
		const osgDB::FileList & fileList=*fileList_ptr;
		const osg::CopyOp* _arg3_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !_arg3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg3 in osgDB::FileList::FileList function");
		}
		const osg::CopyOp _arg3=luatop>2 ? *_arg3_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgDB_FileList(L,NULL, fileList, _arg3);
	}

	// Overload binder for osgDB::FileList::FileList
	static osgDB::FileList* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FileList, cannot match any of the overloads for function FileList:\n  FileList()\n  FileList(const osgDB::FileList &, const osg::CopyOp)\n  FileList(lua_Table *)\n  FileList(lua_Table *, const osgDB::FileList &, const osg::CopyOp)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::FileList::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::FileList::cloneType() const function, expected prototype:\nosg::Object * osgDB::FileList::cloneType() const\nClass arguments details:\n");
		}


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::FileList::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::FileList::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::FileList::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::FileList::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::FileList::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
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

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
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


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
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


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
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


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
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

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
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

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
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

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
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

		osgDB::FileList* fileList=(Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,2));

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FileList::append(osgDB::FileList *)");
		}
		self->append(fileList);

		return 0;
	}

	// void osgDB::FileList::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FileList::base_setName(const std::string & name) function, expected prototype:\nvoid osgDB::FileList::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FileList::base_setName(const std::string &)");
		}
		self->FileList::setName(name);

		return 0;
	}

	// void osgDB::FileList::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FileList::base_computeDataVariance() function, expected prototype:\nvoid osgDB::FileList::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FileList::base_computeDataVariance()");
		}
		self->FileList::computeDataVariance();

		return 0;
	}

	// void osgDB::FileList::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FileList::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgDB::FileList::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FileList::base_setUserData(osg::Referenced *)");
		}
		self->FileList::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgDB::FileList::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgDB::FileList::base_getUserData() function, expected prototype:\nosg::Referenced * osgDB::FileList::base_getUserData()\nClass arguments details:\n");
		}


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgDB::FileList::base_getUserData()");
		}
		osg::Referenced * lret = self->FileList::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgDB::FileList::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgDB::FileList::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgDB::FileList::base_getUserData() const\nClass arguments details:\n");
		}


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgDB::FileList::base_getUserData() const");
		}
		const osg::Referenced * lret = self->FileList::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::FileList::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgDB::FileList::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FileList::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgDB::FileList::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FileList::base_releaseGLObjects(osg::State *) const");
		}
		self->FileList::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgDB::FileList::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::FileList::base_cloneType() const function, expected prototype:\nosg::Object * osgDB::FileList::base_cloneType() const\nClass arguments details:\n");
		}


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::FileList::base_cloneType() const");
		}
		osg::Object * lret = self->FileList::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::FileList::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::FileList::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::FileList::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::FileList::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::FileList::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->FileList::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::FileList::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FileList::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::FileList::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FileList::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->FileList::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::FileList::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::FileList::base_libraryName() const function, expected prototype:\nconst char * osgDB::FileList::base_libraryName() const\nClass arguments details:\n");
		}


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::FileList::base_libraryName() const");
		}
		const char * lret = self->FileList::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::FileList::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::FileList::base_className() const function, expected prototype:\nconst char * osgDB::FileList::base_className() const\nClass arguments details:\n");
		}


		osgDB::FileList* self=Luna< osg::Referenced >::checkSubType< osgDB::FileList >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::FileList::base_className() const");
		}
		const char * lret = self->FileList::className();
		lua_pushstring(L,lret);

		return 1;
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
	{"base_setName", &luna_wrapper_osgDB_FileList::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgDB_FileList::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgDB_FileList::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgDB_FileList::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgDB_FileList::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgDB_FileList::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgDB_FileList::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgDB_FileList::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgDB_FileList::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgDB_FileList::_bind_base_className},
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


