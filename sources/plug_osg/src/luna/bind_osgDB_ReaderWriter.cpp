#include <plug_common.h>

class luna_wrapper_osgDB_ReaderWriter {
public:
	typedef Luna< osgDB::ReaderWriter > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::ReaderWriter* ptr= dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ReaderWriter >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_supportedProtocols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_supportedExtensions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_supportedOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_acceptsExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_supportedFeatures(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fileExists(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_openArchive(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readHeightField(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readNode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShader(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeHeightField(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeNode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeShader(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_supportsProtocol(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_supportsExtension(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_supportsOption(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_featureAsString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ReaderWriter::ReaderWriter()
	static osgDB::ReaderWriter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReaderWriter() function, expected prototype:\nosgDB::ReaderWriter::ReaderWriter()\nClass arguments details:\n");
		}


		return new osgDB::ReaderWriter();
	}

	// osgDB::ReaderWriter::ReaderWriter(const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgDB::ReaderWriter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReaderWriter(const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgDB::ReaderWriter::ReaderWriter(const osgDB::ReaderWriter & rw, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgDB::ReaderWriter* rw_ptr=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if( !rw_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rw in osgDB::ReaderWriter::ReaderWriter function");
		}
		const osgDB::ReaderWriter & rw=*rw_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgDB::ReaderWriter::ReaderWriter function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgDB::ReaderWriter(rw, copyop);
	}

	// Overload binder for osgDB::ReaderWriter::ReaderWriter
	static osgDB::ReaderWriter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ReaderWriter, cannot match any of the overloads for function ReaderWriter:\n  ReaderWriter()\n  ReaderWriter(const osgDB::ReaderWriter &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgDB::ReaderWriter::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ReaderWriter::cloneType() const function, expected prototype:\nosg::Object * osgDB::ReaderWriter::cloneType() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ReaderWriter::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::ReaderWriter::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ReaderWriter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgDB::ReaderWriter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgDB::ReaderWriter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::ReaderWriter::libraryName() const function, expected prototype:\nconst char * osgDB::ReaderWriter::libraryName() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::ReaderWriter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::ReaderWriter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::ReaderWriter::className() const function, expected prototype:\nconst char * osgDB::ReaderWriter::className() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::ReaderWriter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const
	static int _bind_supportedProtocols(lua_State *L) {
		if (!_lg_typecheck_supportedProtocols(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedProtocols() const");
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->supportedProtocols();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const
	static int _bind_supportedExtensions(lua_State *L) {
		if (!_lg_typecheck_supportedExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedExtensions() const");
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->supportedExtensions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const
	static int _bind_supportedOptions(lua_State *L) {
		if (!_lg_typecheck_supportedOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const function, expected prototype:\nconst osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::ReaderWriter::FormatDescriptionMap & osgDB::ReaderWriter::supportedOptions() const");
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->supportedOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::ReaderWriter::acceptsExtension(const std::string & ) const
	static int _bind_acceptsExtension(lua_State *L) {
		if (!_lg_typecheck_acceptsExtension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::acceptsExtension(const std::string & ) const function, expected prototype:\nbool osgDB::ReaderWriter::acceptsExtension(const std::string & ) const\nClass arguments details:\n");
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::acceptsExtension(const std::string &) const");
		}
		bool lret = self->acceptsExtension(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const
	static int _bind_supportedFeatures(lua_State *L) {
		if (!_lg_typecheck_supportedFeatures(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const function, expected prototype:\nosgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const\nClass arguments details:\n");
		}


		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::Features osgDB::ReaderWriter::supportedFeatures() const");
		}
		osgDB::ReaderWriter::Features lret = self->supportedFeatures();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::ReaderWriter::fileExists(const std::string & filename, const osgDB::Options * options) const
	static int _bind_fileExists(lua_State *L) {
		if (!_lg_typecheck_fileExists(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ReaderWriter::fileExists(const std::string & filename, const osgDB::Options * options) const function, expected prototype:\nbool osgDB::ReaderWriter::fileExists(const std::string & filename, const osgDB::Options * options) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3));

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ReaderWriter::fileExists(const std::string &, const osgDB::Options *) const");
		}
		bool lret = self->fileExists(filename, options);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string & , osgDB::ReaderWriter::ArchiveStatus , unsigned int = 4096, const osgDB::Options *  = ((void *) 0)) const
	static int _bind_openArchive(lua_State *L) {
		if (!_lg_typecheck_openArchive(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string & , osgDB::ReaderWriter::ArchiveStatus , unsigned int = 4096, const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string & , osgDB::ReaderWriter::ArchiveStatus , unsigned int = 4096, const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 4 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::ReaderWriter::ArchiveStatus _arg2=(osgDB::ReaderWriter::ArchiveStatus)lua_tointeger(L,3);
		unsigned int _arg3=luatop>3 ? (unsigned int)lua_tointeger(L,4) : 4096;
		const osgDB::Options* _arg4=luatop>4 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,5)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::openArchive(const std::string &, osgDB::ReaderWriter::ArchiveStatus, unsigned, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->openArchive(_arg1, _arg2, _arg3, _arg4);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readObject(lua_State *L) {
		if (!_lg_typecheck_readObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readObject(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readObject(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readImage(lua_State *L) {
		if (!_lg_typecheck_readImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readImage(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readImage(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readHeightField(lua_State *L) {
		if (!_lg_typecheck_readHeightField(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readHeightField(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readHeightField(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readNode(lua_State *L) {
		if (!_lg_typecheck_readNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readNode(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readNode(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readShader(lua_State *L) {
		if (!_lg_typecheck_readShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::ReaderWriter::readShader(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readShader(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Object* _arg1_ptr=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeObject function");
		}
		const osg::Object & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeObject(const osg::Object &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObject(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Image* _arg1_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeImage function");
		}
		const osg::Image & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeImage(const osg::Image &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImage(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeHeightField(lua_State *L) {
		if (!_lg_typecheck_writeHeightField(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::HeightField* _arg1_ptr=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeHeightField function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightField(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeNode(lua_State *L) {
		if (!_lg_typecheck_writeNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Node* _arg1_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeNode function");
		}
		const osg::Node & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeNode(const osg::Node &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNode(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeShader(lua_State *L) {
		if (!_lg_typecheck_writeShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Shader* _arg1_ptr=dynamic_cast< osg::Shader* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ReaderWriter::writeShader function");
		}
		const osg::Shader & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::ReaderWriter::writeShader(const osg::Shader &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShader(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// void osgDB::ReaderWriter::supportsProtocol(const std::string & fmt, const std::string & description)
	static int _bind_supportsProtocol(lua_State *L) {
		if (!_lg_typecheck_supportsProtocol(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::supportsProtocol(const std::string & fmt, const std::string & description) function, expected prototype:\nvoid osgDB::ReaderWriter::supportsProtocol(const std::string & fmt, const std::string & description)\nClass arguments details:\n");
		}

		std::string fmt(lua_tostring(L,2),lua_objlen(L,2));
		std::string description(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::supportsProtocol(const std::string &, const std::string &)");
		}
		self->supportsProtocol(fmt, description);

		return 0;
	}

	// void osgDB::ReaderWriter::supportsExtension(const std::string & ext, const std::string & description)
	static int _bind_supportsExtension(lua_State *L) {
		if (!_lg_typecheck_supportsExtension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::supportsExtension(const std::string & ext, const std::string & description) function, expected prototype:\nvoid osgDB::ReaderWriter::supportsExtension(const std::string & ext, const std::string & description)\nClass arguments details:\n");
		}

		std::string ext(lua_tostring(L,2),lua_objlen(L,2));
		std::string description(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::supportsExtension(const std::string &, const std::string &)");
		}
		self->supportsExtension(ext, description);

		return 0;
	}

	// void osgDB::ReaderWriter::supportsOption(const std::string & opt, const std::string & description)
	static int _bind_supportsOption(lua_State *L) {
		if (!_lg_typecheck_supportsOption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriter::supportsOption(const std::string & opt, const std::string & description) function, expected prototype:\nvoid osgDB::ReaderWriter::supportsOption(const std::string & opt, const std::string & description)\nClass arguments details:\n");
		}

		std::string opt(lua_tostring(L,2),lua_objlen(L,2));
		std::string description(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::ReaderWriter* self=dynamic_cast< osgDB::ReaderWriter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriter::supportsOption(const std::string &, const std::string &)");
		}
		self->supportsOption(opt, description);

		return 0;
	}

	// static osgDB::ReaderWriter::FeatureList osgDB::ReaderWriter::featureAsString(osgDB::ReaderWriter::Features feature)
	static int _bind_featureAsString(lua_State *L) {
		if (!_lg_typecheck_featureAsString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osgDB::ReaderWriter::FeatureList osgDB::ReaderWriter::featureAsString(osgDB::ReaderWriter::Features feature) function, expected prototype:\nstatic osgDB::ReaderWriter::FeatureList osgDB::ReaderWriter::featureAsString(osgDB::ReaderWriter::Features feature)\nClass arguments details:\n");
		}

		osgDB::ReaderWriter::Features feature=(osgDB::ReaderWriter::Features)lua_tointeger(L,1);

		osgDB::ReaderWriter::FeatureList stack_lret = osgDB::ReaderWriter::featureAsString(feature);
		osgDB::ReaderWriter::FeatureList* lret = new osgDB::ReaderWriter::FeatureList(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FeatureList >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgDB::ReaderWriter* LunaTraits< osgDB::ReaderWriter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ReaderWriter::_bind_ctor(L);
}

void LunaTraits< osgDB::ReaderWriter >::_bind_dtor(osgDB::ReaderWriter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ReaderWriter >::className[] = "ReaderWriter";
const char LunaTraits< osgDB::ReaderWriter >::fullName[] = "osgDB::ReaderWriter";
const char LunaTraits< osgDB::ReaderWriter >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ReaderWriter >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgDB::ReaderWriter >::hash = 29019984;
const int LunaTraits< osgDB::ReaderWriter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ReaderWriter >::methods[] = {
	{"cloneType", &luna_wrapper_osgDB_ReaderWriter::_bind_cloneType},
	{"clone", &luna_wrapper_osgDB_ReaderWriter::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgDB_ReaderWriter::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgDB_ReaderWriter::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_ReaderWriter::_bind_className},
	{"supportedProtocols", &luna_wrapper_osgDB_ReaderWriter::_bind_supportedProtocols},
	{"supportedExtensions", &luna_wrapper_osgDB_ReaderWriter::_bind_supportedExtensions},
	{"supportedOptions", &luna_wrapper_osgDB_ReaderWriter::_bind_supportedOptions},
	{"acceptsExtension", &luna_wrapper_osgDB_ReaderWriter::_bind_acceptsExtension},
	{"supportedFeatures", &luna_wrapper_osgDB_ReaderWriter::_bind_supportedFeatures},
	{"fileExists", &luna_wrapper_osgDB_ReaderWriter::_bind_fileExists},
	{"openArchive", &luna_wrapper_osgDB_ReaderWriter::_bind_openArchive},
	{"readObject", &luna_wrapper_osgDB_ReaderWriter::_bind_readObject},
	{"readImage", &luna_wrapper_osgDB_ReaderWriter::_bind_readImage},
	{"readHeightField", &luna_wrapper_osgDB_ReaderWriter::_bind_readHeightField},
	{"readNode", &luna_wrapper_osgDB_ReaderWriter::_bind_readNode},
	{"readShader", &luna_wrapper_osgDB_ReaderWriter::_bind_readShader},
	{"writeObject", &luna_wrapper_osgDB_ReaderWriter::_bind_writeObject},
	{"writeImage", &luna_wrapper_osgDB_ReaderWriter::_bind_writeImage},
	{"writeHeightField", &luna_wrapper_osgDB_ReaderWriter::_bind_writeHeightField},
	{"writeNode", &luna_wrapper_osgDB_ReaderWriter::_bind_writeNode},
	{"writeShader", &luna_wrapper_osgDB_ReaderWriter::_bind_writeShader},
	{"supportsProtocol", &luna_wrapper_osgDB_ReaderWriter::_bind_supportsProtocol},
	{"supportsExtension", &luna_wrapper_osgDB_ReaderWriter::_bind_supportsExtension},
	{"supportsOption", &luna_wrapper_osgDB_ReaderWriter::_bind_supportsOption},
	{"featureAsString", &luna_wrapper_osgDB_ReaderWriter::_bind_featureAsString},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ReaderWriter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ReaderWriter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ReaderWriter >::enumValues[] = {
	{"FEATURE_NONE", osgDB::ReaderWriter::FEATURE_NONE},
	{"FEATURE_READ_OBJECT", osgDB::ReaderWriter::FEATURE_READ_OBJECT},
	{"FEATURE_READ_IMAGE", osgDB::ReaderWriter::FEATURE_READ_IMAGE},
	{"FEATURE_READ_HEIGHT_FIELD", osgDB::ReaderWriter::FEATURE_READ_HEIGHT_FIELD},
	{"FEATURE_READ_NODE", osgDB::ReaderWriter::FEATURE_READ_NODE},
	{"FEATURE_READ_SHADER", osgDB::ReaderWriter::FEATURE_READ_SHADER},
	{"FEATURE_WRITE_OBJECT", osgDB::ReaderWriter::FEATURE_WRITE_OBJECT},
	{"FEATURE_WRITE_IMAGE", osgDB::ReaderWriter::FEATURE_WRITE_IMAGE},
	{"FEATURE_WRITE_HEIGHT_FIELD", osgDB::ReaderWriter::FEATURE_WRITE_HEIGHT_FIELD},
	{"FEATURE_WRITE_NODE", osgDB::ReaderWriter::FEATURE_WRITE_NODE},
	{"FEATURE_WRITE_SHADER", osgDB::ReaderWriter::FEATURE_WRITE_SHADER},
	{"FEATURE_ALL", osgDB::ReaderWriter::FEATURE_ALL},
	{"READ", osgDB::ReaderWriter::READ},
	{"WRITE", osgDB::ReaderWriter::WRITE},
	{"CREATE", osgDB::ReaderWriter::CREATE},
	{0,0}
};

