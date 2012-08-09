#include <plug_common.h>

class luna_wrapper_osgDB_Archive {
public:
	typedef Luna< osgDB::Archive > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgDB::Archive* ptr= dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::Archive >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_acceptsExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArchiveFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMasterFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_fileExists(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFileType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDirectoryContents(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgDB::Archive::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::Archive::libraryName() const function, expected prototype:\nconst char * osgDB::Archive::libraryName() const\nClass arguments details:\n");
		}


		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::Archive::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::Archive::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgDB::Archive::className() const function, expected prototype:\nconst char * osgDB::Archive::className() const\nClass arguments details:\n");
		}


		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgDB::Archive::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgDB::Archive::acceptsExtension(const std::string & ) const
	static int _bind_acceptsExtension(lua_State *L) {
		if (!_lg_typecheck_acceptsExtension(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Archive::acceptsExtension(const std::string & ) const function, expected prototype:\nbool osgDB::Archive::acceptsExtension(const std::string & ) const\nClass arguments details:\n");
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Archive::acceptsExtension(const std::string &) const");
		}
		bool lret = self->acceptsExtension(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::Archive::close()
	static int _bind_close(lua_State *L) {
		if (!_lg_typecheck_close(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::Archive::close() function, expected prototype:\nvoid osgDB::Archive::close()\nClass arguments details:\n");
		}


		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::Archive::close()");
		}
		self->close();

		return 0;
	}

	// std::string osgDB::Archive::getArchiveFileName() const
	static int _bind_getArchiveFileName(lua_State *L) {
		if (!_lg_typecheck_getArchiveFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::Archive::getArchiveFileName() const function, expected prototype:\nstd::string osgDB::Archive::getArchiveFileName() const\nClass arguments details:\n");
		}


		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::Archive::getArchiveFileName() const");
		}
		std::string lret = self->getArchiveFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::Archive::getMasterFileName() const
	static int _bind_getMasterFileName(lua_State *L) {
		if (!_lg_typecheck_getMasterFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::Archive::getMasterFileName() const function, expected prototype:\nstd::string osgDB::Archive::getMasterFileName() const\nClass arguments details:\n");
		}


		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgDB::Archive::getMasterFileName() const");
		}
		std::string lret = self->getMasterFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::Archive::fileExists(const std::string & filename) const
	static int _bind_fileExists(lua_State *L) {
		if (!_lg_typecheck_fileExists(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::Archive::fileExists(const std::string & filename) const function, expected prototype:\nbool osgDB::Archive::fileExists(const std::string & filename) const\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::Archive::fileExists(const std::string &) const");
		}
		bool lret = self->fileExists(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const
	static int _bind_getFileType(lua_State *L) {
		if (!_lg_typecheck_getFileType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const function, expected prototype:\nosgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const\nClass arguments details:\n");
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FileType osgDB::Archive::getFileType(const std::string &) const");
		}
		osgDB::FileType lret = self->getFileType(filename);
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string & dirName) const
	static int _bind_getDirectoryContents(lua_State *L) {
		if (!_lg_typecheck_getDirectoryContents(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string & dirName) const function, expected prototype:\nosgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string & dirName) const\nClass arguments details:\n");
		}

		std::string dirName(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::DirectoryContents osgDB::Archive::getDirectoryContents(const std::string &) const");
		}
		osgDB::DirectoryContents stack_lret = self->getDirectoryContents(dirName);
		osgDB::DirectoryContents* lret = new osgDB::DirectoryContents(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DirectoryContents >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readObject(lua_State *L) {
		if (!_lg_typecheck_readObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readObject(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readImage(lua_State *L) {
		if (!_lg_typecheck_readImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readImage(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readHeightField(lua_State *L) {
		if (!_lg_typecheck_readHeightField(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readHeightField(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readNode(lua_State *L) {
		if (!_lg_typecheck_readNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readNode(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_readShader(lua_State *L) {
		if (!_lg_typecheck_readShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* _arg2=luatop>2 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,3)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::ReadResult stack_lret = self->readShader(_arg1, _arg2);
		osgDB::ReaderWriter::ReadResult* lret = new osgDB::ReaderWriter::ReadResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::ReadResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Object* _arg1_ptr=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeObject function");
		}
		const osg::Object & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeObject(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Image* _arg1_ptr=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeImage function");
		}
		const osg::Image & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeImage(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeHeightField(lua_State *L) {
		if (!_lg_typecheck_writeHeightField(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::HeightField* _arg1_ptr=dynamic_cast< osg::HeightField* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeHeightField function");
		}
		const osg::HeightField & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeHeightField(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeNode(lua_State *L) {
		if (!_lg_typecheck_writeNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Node* _arg1_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeNode function");
		}
		const osg::Node & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeNode(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}

	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	static int _bind_writeShader(lua_State *L) {
		if (!_lg_typecheck_writeShader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & , const std::string & , const osgDB::Options *  = ((void *) 0)) const function, expected prototype:\nosgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & , const std::string & , const osgDB::Options *  = ((void *) 0)) const\nClass arguments details:\narg 1 ID = 50169651\narg 3 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		const osg::Shader* _arg1_ptr=dynamic_cast< osg::Shader* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::Archive::writeShader function");
		}
		const osg::Shader & _arg1=*_arg1_ptr;
		std::string _arg2(lua_tostring(L,3),lua_objlen(L,3));
		const osgDB::Options* _arg3=luatop>3 ? dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,4)) : (const osgDB::Options*)((void *) 0);

		osgDB::Archive* self=dynamic_cast< osgDB::Archive* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader &, const std::string &, const osgDB::Options *) const");
		}
		osgDB::ReaderWriter::WriteResult stack_lret = self->writeShader(_arg1, _arg2, _arg3);
		osgDB::ReaderWriter::WriteResult* lret = new osgDB::ReaderWriter::WriteResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::WriteResult >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgDB::Archive* LunaTraits< osgDB::Archive >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgDB::Archive::close()
	// std::string osgDB::Archive::getArchiveFileName() const
	// std::string osgDB::Archive::getMasterFileName() const
	// bool osgDB::Archive::fileExists(const std::string & filename) const
	// osgDB::FileType osgDB::Archive::getFileType(const std::string & filename) const
	// bool osgDB::Archive::getFileNames(osgDB::DirectoryContents & fileNames) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readObject(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readImage(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readHeightField(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readNode(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	// osgDB::ReaderWriter::ReadResult osgDB::Archive::readShader(const std::string & , const osgDB::Options *  = ((void *) 0)) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeObject(const osg::Object & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeImage(const osg::Image & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeHeightField(const osg::HeightField & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeNode(const osg::Node & , const std::string & , const osgDB::Options *  = ((void *) 0)) const
	// osgDB::ReaderWriter::WriteResult osgDB::Archive::writeShader(const osg::Shader & , const std::string & , const osgDB::Options *  = ((void *) 0)) const

	// Abstract operators:
}

void LunaTraits< osgDB::Archive >::_bind_dtor(osgDB::Archive* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::Archive >::className[] = "Archive";
const char LunaTraits< osgDB::Archive >::fullName[] = "osgDB::Archive";
const char LunaTraits< osgDB::Archive >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::Archive >::parents[] = {"osgDB.ReaderWriter", 0};
const int LunaTraits< osgDB::Archive >::hash = 70283019;
const int LunaTraits< osgDB::Archive >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::Archive >::methods[] = {
	{"libraryName", &luna_wrapper_osgDB_Archive::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_Archive::_bind_className},
	{"acceptsExtension", &luna_wrapper_osgDB_Archive::_bind_acceptsExtension},
	{"close", &luna_wrapper_osgDB_Archive::_bind_close},
	{"getArchiveFileName", &luna_wrapper_osgDB_Archive::_bind_getArchiveFileName},
	{"getMasterFileName", &luna_wrapper_osgDB_Archive::_bind_getMasterFileName},
	{"fileExists", &luna_wrapper_osgDB_Archive::_bind_fileExists},
	{"getFileType", &luna_wrapper_osgDB_Archive::_bind_getFileType},
	{"getDirectoryContents", &luna_wrapper_osgDB_Archive::_bind_getDirectoryContents},
	{"readObject", &luna_wrapper_osgDB_Archive::_bind_readObject},
	{"readImage", &luna_wrapper_osgDB_Archive::_bind_readImage},
	{"readHeightField", &luna_wrapper_osgDB_Archive::_bind_readHeightField},
	{"readNode", &luna_wrapper_osgDB_Archive::_bind_readNode},
	{"readShader", &luna_wrapper_osgDB_Archive::_bind_readShader},
	{"writeObject", &luna_wrapper_osgDB_Archive::_bind_writeObject},
	{"writeImage", &luna_wrapper_osgDB_Archive::_bind_writeImage},
	{"writeHeightField", &luna_wrapper_osgDB_Archive::_bind_writeHeightField},
	{"writeNode", &luna_wrapper_osgDB_Archive::_bind_writeNode},
	{"writeShader", &luna_wrapper_osgDB_Archive::_bind_writeShader},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::Archive >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_Archive::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::Archive >::enumValues[] = {
	{0,0}
};


