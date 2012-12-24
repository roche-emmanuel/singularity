#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ImageOptions.h>

class luna_wrapper_osgDB_ImageOptions {
public:
	typedef Luna< osgDB::ImageOptions > luna_t;

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
		//osgDB::ImageOptions* ptr= dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ImageOptions* ptr= luna_caster< osg::Referenced, osgDB::ImageOptions >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ImageOptions >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgDB::ImageOptions::ImageOptions()
	static osgDB::ImageOptions* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions() function, expected prototype:\nosgDB::ImageOptions::ImageOptions()\nClass arguments details:\n");
		}


		return new osgDB::ImageOptions();
	}

	// osgDB::ImageOptions::ImageOptions(const std::string & str)
	static osgDB::ImageOptions* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(const std::string & str) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,1),lua_objlen(L,1));

		return new osgDB::ImageOptions(str);
	}

	// osgDB::ImageOptions::ImageOptions(const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ImageOptions* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::ImageOptions* options_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1));
		if( !options_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg options in osgDB::ImageOptions::ImageOptions function");
		}
		const osgDB::ImageOptions & options=*options_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ImageOptions::ImageOptions function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgDB::ImageOptions(options, copyop);
	}

	// osgDB::ImageOptions::ImageOptions(lua_Table * data)
	static osgDB::ImageOptions* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(lua_Table * data) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgDB_ImageOptions(L,NULL);
	}

	// osgDB::ImageOptions::ImageOptions(lua_Table * data, const std::string & str)
	static osgDB::ImageOptions* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(lua_Table * data, const std::string & str) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(lua_Table * data, const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_osgDB_ImageOptions(L,NULL, str);
	}

	// osgDB::ImageOptions::ImageOptions(lua_Table * data, const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ImageOptions* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::ImageOptions(lua_Table * data, const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ImageOptions::ImageOptions(lua_Table * data, const osgDB::ImageOptions & options, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::ImageOptions* options_ptr=(Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,2));
		if( !options_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg options in osgDB::ImageOptions::ImageOptions function");
		}
		const osgDB::ImageOptions & options=*options_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ImageOptions::ImageOptions function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgDB_ImageOptions(L,NULL, options, copyop);
	}

	// Overload binder for osgDB::ImageOptions::ImageOptions
	static osgDB::ImageOptions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function ImageOptions, cannot match any of the overloads for function ImageOptions:\n  ImageOptions()\n  ImageOptions(const std::string &)\n  ImageOptions(const osgDB::ImageOptions &, const osg::CopyOp &)\n  ImageOptions(lua_Table *)\n  ImageOptions(lua_Table *, const std::string &)\n  ImageOptions(lua_Table *, const osgDB::ImageOptions &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::ImageOptions::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::cloneType() const function, expected prototype:\nosg::Object * osgDB::ImageOptions::cloneType() const\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageOptions::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageOptions::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageOptions::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ImageOptions::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ImageOptions::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ImageOptions::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ImageOptions::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ImageOptions::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageOptions::libraryName() const function, expected prototype:\nconst char * osgDB::ImageOptions::libraryName() const\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageOptions::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ImageOptions::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageOptions::className() const function, expected prototype:\nconst char * osgDB::ImageOptions::className() const\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageOptions::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::ImageOptions::init()
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::init() function, expected prototype:\nvoid osgDB::ImageOptions::init()\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::init()");
		}
		self->init();

		return 0;
	}

	// void osgDB::ImageOptions::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::base_setName(const std::string & name) function, expected prototype:\nvoid osgDB::ImageOptions::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::base_setName(const std::string &)");
		}
		self->ImageOptions::setName(name);

		return 0;
	}

	// void osgDB::ImageOptions::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::base_computeDataVariance() function, expected prototype:\nvoid osgDB::ImageOptions::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::base_computeDataVariance()");
		}
		self->ImageOptions::computeDataVariance();

		return 0;
	}

	// void osgDB::ImageOptions::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgDB::ImageOptions::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::base_setUserData(osg::Referenced *)");
		}
		self->ImageOptions::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgDB::ImageOptions::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgDB::ImageOptions::base_getUserData() function, expected prototype:\nosg::Referenced * osgDB::ImageOptions::base_getUserData()\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgDB::ImageOptions::base_getUserData()");
		}
		osg::Referenced * lret = self->ImageOptions::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgDB::ImageOptions::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgDB::ImageOptions::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgDB::ImageOptions::base_getUserData() const\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgDB::ImageOptions::base_getUserData() const");
		}
		const osg::Referenced * lret = self->ImageOptions::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::ImageOptions::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgDB::ImageOptions::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgDB::ImageOptions::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::base_releaseGLObjects(osg::State *) const");
		}
		self->ImageOptions::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgDB::ImageOptions::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::base_cloneType() const function, expected prototype:\nosg::Object * osgDB::ImageOptions::base_cloneType() const\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageOptions::base_cloneType() const");
		}
		osg::Object * lret = self->ImageOptions::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ImageOptions::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgDB::ImageOptions::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageOptions::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageOptions::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->ImageOptions::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ImageOptions::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ImageOptions::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ImageOptions::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ImageOptions::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->ImageOptions::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ImageOptions::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageOptions::base_libraryName() const function, expected prototype:\nconst char * osgDB::ImageOptions::base_libraryName() const\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageOptions::base_libraryName() const");
		}
		const char * lret = self->ImageOptions::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ImageOptions::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageOptions::base_className() const function, expected prototype:\nconst char * osgDB::ImageOptions::base_className() const\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=Luna< osg::Referenced >::checkSubType< osgDB::ImageOptions >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageOptions::base_className() const");
		}
		const char * lret = self->ImageOptions::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osgDB::ImageOptions* LunaTraits< osgDB::ImageOptions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageOptions::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::ImageOptions >::_bind_dtor(osgDB::ImageOptions* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ImageOptions >::className[] = "ImageOptions";
const char LunaTraits< osgDB::ImageOptions >::fullName[] = "osgDB::ImageOptions";
const char LunaTraits< osgDB::ImageOptions >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImageOptions >::parents[] = {"osgDB.Options", 0};
const int LunaTraits< osgDB::ImageOptions >::hash = 23411000;
const int LunaTraits< osgDB::ImageOptions >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ImageOptions >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_ImageOptions::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_ImageOptions::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_ImageOptions::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_ImageOptions::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_ImageOptions::_bind_className},
	{"init", &luna_wrapper_osgDB_ImageOptions::_bind_init},
	{"base_setName", &luna_wrapper_osgDB_ImageOptions::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgDB_ImageOptions::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgDB_ImageOptions::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgDB_ImageOptions::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgDB_ImageOptions::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgDB_ImageOptions::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgDB_ImageOptions::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgDB_ImageOptions::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgDB_ImageOptions::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgDB_ImageOptions::_bind_base_className},
	{"__eq", &luna_wrapper_osgDB_ImageOptions::_bind___eq},
	{"getTable", &luna_wrapper_osgDB_ImageOptions::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImageOptions >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ImageOptions::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImageOptions >::enumValues[] = {
	{"ALL_IMAGE", osgDB::ImageOptions::ALL_IMAGE},
	{"RATIO_WINDOW", osgDB::ImageOptions::RATIO_WINDOW},
	{"PIXEL_WINDOW", osgDB::ImageOptions::PIXEL_WINDOW},
	{"NEAREST", osgDB::ImageOptions::NEAREST},
	{"LINEAR", osgDB::ImageOptions::LINEAR},
	{"CUBIC", osgDB::ImageOptions::CUBIC},
	{0,0}
};


