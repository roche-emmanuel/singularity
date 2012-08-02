#include <plug_common.h>

class luna_wrapper_osgDB_ImageProcessor {
public:
	typedef Luna< osgDB::ImageProcessor > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::ImageProcessor* ptr= dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ImageProcessor >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_compress(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( (lua_isnumber(L,6)==0 || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnumber(L,7)==0 || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateMipMap(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ImageProcessor::ImageProcessor()
	static osgDB::ImageProcessor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageProcessor::ImageProcessor() function, expected prototype:\nosgDB::ImageProcessor::ImageProcessor()\nClass arguments details:\n");
		}


		return new osgDB::ImageProcessor();
	}

	// osgDB::ImageProcessor::ImageProcessor(const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ImageProcessor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ImageProcessor::ImageProcessor(const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ImageProcessor::ImageProcessor(const osgDB::ImageProcessor & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::ImageProcessor* rw_ptr=dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		if( !rw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rw in osgDB::ImageProcessor::ImageProcessor function");
		}
		const osgDB::ImageProcessor & rw=*rw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ImageProcessor::ImageProcessor function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgDB::ImageProcessor(rw, copyop);
	}

	// Overload binder for osgDB::ImageProcessor::ImageProcessor
	static osgDB::ImageProcessor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ImageProcessor, cannot match any of the overloads for function ImageProcessor:\n  ImageProcessor()\n  ImageProcessor(const osgDB::ImageProcessor &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::ImageProcessor::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageProcessor::cloneType() const function, expected prototype:\nosg::Object * osgDB::ImageProcessor::cloneType() const\nClass arguments details:\n");
		}


		osgDB::ImageProcessor* self=dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageProcessor::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageProcessor::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ImageProcessor* self=dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ImageProcessor::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ImageProcessor::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ImageProcessor::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ImageProcessor::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgDB::ImageProcessor* self=dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ImageProcessor::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ImageProcessor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageProcessor::libraryName() const function, expected prototype:\nconst char * osgDB::ImageProcessor::libraryName() const\nClass arguments details:\n");
		}


		osgDB::ImageProcessor* self=dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageProcessor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ImageProcessor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::ImageProcessor::className() const function, expected prototype:\nconst char * osgDB::ImageProcessor::className() const\nClass arguments details:\n");
		}


		osgDB::ImageProcessor* self=dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::ImageProcessor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::ImageProcessor::compress(osg::Image & , osg::Texture::InternalFormatMode , bool , bool , osgDB::ImageProcessor::CompressionMethod , osgDB::ImageProcessor::CompressionQuality )
	static int _bind_compress(lua_State *L) {
		if (!_lg_typecheck_compress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::compress(osg::Image & , osg::Texture::InternalFormatMode , bool , bool , osgDB::ImageProcessor::CompressionMethod , osgDB::ImageProcessor::CompressionQuality ) function, expected prototype:\nvoid osgDB::ImageProcessor::compress(osg::Image & , osg::Texture::InternalFormatMode , bool , bool , osgDB::ImageProcessor::CompressionMethod , osgDB::ImageProcessor::CompressionQuality )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* _arg1_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageProcessor::compress function");
		}
		osg::Image & _arg1=*_arg1_ptr;
		osg::Texture::InternalFormatMode _arg2=(osg::Texture::InternalFormatMode)lua_tointeger(L,3);
		bool _arg3=(bool)(lua_toboolean(L,4)==1);
		bool _arg4=(bool)(lua_toboolean(L,5)==1);
		osgDB::ImageProcessor::CompressionMethod _arg5=(osgDB::ImageProcessor::CompressionMethod)lua_tointeger(L,6);
		osgDB::ImageProcessor::CompressionQuality _arg6=(osgDB::ImageProcessor::CompressionQuality)lua_tointeger(L,7);

		osgDB::ImageProcessor* self=dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::compress(osg::Image &, osg::Texture::InternalFormatMode, bool, bool, osgDB::ImageProcessor::CompressionMethod, osgDB::ImageProcessor::CompressionQuality)");
		}
		self->compress(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6);

		return 0;
	}

	// void osgDB::ImageProcessor::generateMipMap(osg::Image & , bool , osgDB::ImageProcessor::CompressionMethod )
	static int _bind_generateMipMap(lua_State *L) {
		if (!_lg_typecheck_generateMipMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ImageProcessor::generateMipMap(osg::Image & , bool , osgDB::ImageProcessor::CompressionMethod ) function, expected prototype:\nvoid osgDB::ImageProcessor::generateMipMap(osg::Image & , bool , osgDB::ImageProcessor::CompressionMethod )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* _arg1_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ImageProcessor::generateMipMap function");
		}
		osg::Image & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);
		osgDB::ImageProcessor::CompressionMethod _arg3=(osgDB::ImageProcessor::CompressionMethod)lua_tointeger(L,4);

		osgDB::ImageProcessor* self=dynamic_cast< osgDB::ImageProcessor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ImageProcessor::generateMipMap(osg::Image &, bool, osgDB::ImageProcessor::CompressionMethod)");
		}
		self->generateMipMap(_arg1, _arg2, _arg3);

		return 0;
	}


	// Operator binds:

};

osgDB::ImageProcessor* LunaTraits< osgDB::ImageProcessor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageProcessor::_bind_ctor(L);
}

void LunaTraits< osgDB::ImageProcessor >::_bind_dtor(osgDB::ImageProcessor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ImageProcessor >::className[] = "ImageProcessor";
const char LunaTraits< osgDB::ImageProcessor >::fullName[] = "osgDB::ImageProcessor";
const char LunaTraits< osgDB::ImageProcessor >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImageProcessor >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::ImageProcessor >::hash = 95684142;
const int LunaTraits< osgDB::ImageProcessor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ImageProcessor >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_ImageProcessor::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_ImageProcessor::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_ImageProcessor::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_ImageProcessor::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_ImageProcessor::_bind_className},
	{"compress", &luna_wrapper_osgDB_ImageProcessor::_bind_compress},
	{"generateMipMap", &luna_wrapper_osgDB_ImageProcessor::_bind_generateMipMap},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImageProcessor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ImageProcessor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImageProcessor >::enumValues[] = {
	{"USE_CPU", osgDB::ImageProcessor::USE_CPU},
	{"USE_GPU", osgDB::ImageProcessor::USE_GPU},
	{"FASTEST", osgDB::ImageProcessor::FASTEST},
	{"NORMAL", osgDB::ImageProcessor::NORMAL},
	{"PRODUCTION", osgDB::ImageProcessor::PRODUCTION},
	{"HIGHEST", osgDB::ImageProcessor::HIGHEST},
	{0,0}
};


