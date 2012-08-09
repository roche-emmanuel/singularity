#include <plug_common.h>

class luna_wrapper_osgDB_ImageOptions {
public:
	typedef Luna< osgDB::ImageOptions > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::ImageOptions* ptr= dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
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

	inline static bool _lg_typecheck_init(lua_State *L) {
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

		const osgDB::ImageOptions* options_ptr=dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
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

	// Overload binder for osgDB::ImageOptions::ImageOptions
	static osgDB::ImageOptions* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function ImageOptions, cannot match any of the overloads for function ImageOptions:\n  ImageOptions()\n  ImageOptions(const std::string &)\n  ImageOptions(const osgDB::ImageOptions &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::ImageOptions::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::cloneType() const function, expected prototype:\nosg::Object * osgDB::ImageOptions::cloneType() const\nClass arguments details:\n");
		}


		osgDB::ImageOptions* self=dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageOptions::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgDB::ImageOptions::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageOptions::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ImageOptions* self=dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
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

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgDB::ImageOptions* self=dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
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


		osgDB::ImageOptions* self=dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
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


		osgDB::ImageOptions* self=dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
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


		osgDB::ImageOptions* self=dynamic_cast< osgDB::ImageOptions* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::init()");
		}
		self->init();

		return 0;
	}


	// Operator binds:

};

osgDB::ImageOptions* LunaTraits< osgDB::ImageOptions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageOptions::_bind_ctor(L);
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


