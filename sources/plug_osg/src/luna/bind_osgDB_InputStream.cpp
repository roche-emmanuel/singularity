#include <plug_common.h>

class luna_wrapper_osgDB_InputStream {
public:
	typedef Luna< osgDB::InputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::InputStream*)");
		}

		osgDB::InputStream* rhs =(Luna< osgDB::InputStream >::check(L,2));
		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
	}

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &)");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::InputStream");
		
		return luna_dynamicCast(L,converters,"osgDB::InputStream",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_isBinary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFileVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_matchString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_advanceToCurrentEndBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readWrappedString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readCharArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readPrimitiveSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObject(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readObjectFields(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInputIterator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_start(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_decompress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readSchema(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,77972206) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_resetSchema(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readDouble(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readInt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readBool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeMatrixd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec2d(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec2f(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec3d(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec3f(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec4d(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec4f(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeQuat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useHexMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useDecMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47918182) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::InputStream::InputStream(const osgDB::Options * options)
	static osgDB::InputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream::InputStream(const osgDB::Options * options) function, expected prototype:\nosgDB::InputStream::InputStream(const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,1));

		return new osgDB::InputStream(options);
	}


	// Function binds:
	// bool osgDB::InputStream::isBinary() const
	static int _bind_isBinary(lua_State *L) {
		if (!_lg_typecheck_isBinary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputStream::isBinary() const function, expected prototype:\nbool osgDB::InputStream::isBinary() const\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::InputStream::isBinary() const. Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		bool lret = self->isBinary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osgDB::InputStream::getFileVersion() const
	static int _bind_getFileVersion(lua_State *L) {
		if (!_lg_typecheck_getFileVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::InputStream::getFileVersion() const function, expected prototype:\nint osgDB::InputStream::getFileVersion() const\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgDB::InputStream::getFileVersion() const. Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		int lret = self->getFileVersion();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osgDB::Options * osgDB::InputStream::getOptions() const
	static int _bind_getOptions(lua_State *L) {
		if (!_lg_typecheck_getOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::Options * osgDB::InputStream::getOptions() const function, expected prototype:\nconst osgDB::Options * osgDB::InputStream::getOptions() const\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::Options * osgDB::InputStream::getOptions() const. Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		const osgDB::Options * lret = self->getOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Options >::push(L,lret,false);

		return 1;
	}

	// bool osgDB::InputStream::matchString(const std::string & str)
	static int _bind_matchString(lua_State *L) {
		if (!_lg_typecheck_matchString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputStream::matchString(const std::string & str) function, expected prototype:\nbool osgDB::InputStream::matchString(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::InputStream::matchString(const std::string &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		bool lret = self->matchString(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::InputStream::advanceToCurrentEndBracket()
	static int _bind_advanceToCurrentEndBracket(lua_State *L) {
		if (!_lg_typecheck_advanceToCurrentEndBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::advanceToCurrentEndBracket() function, expected prototype:\nvoid osgDB::InputStream::advanceToCurrentEndBracket()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::advanceToCurrentEndBracket(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->advanceToCurrentEndBracket();

		return 0;
	}

	// void osgDB::InputStream::readWrappedString(std::string & str)
	static int _bind_readWrappedString(lua_State *L) {
		if (!_lg_typecheck_readWrappedString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::readWrappedString(std::string & str) function, expected prototype:\nvoid osgDB::InputStream::readWrappedString(std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::readWrappedString(std::string &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->readWrappedString(str);

		return 0;
	}

	// void osgDB::InputStream::readCharArray(char * s, unsigned int size)
	static int _bind_readCharArray(lua_State *L) {
		if (!_lg_typecheck_readCharArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::readCharArray(char * s, unsigned int size) function, expected prototype:\nvoid osgDB::InputStream::readCharArray(char * s, unsigned int size)\nClass arguments details:\n");
		}

		char s=(char)lua_tointeger(L,2);
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::readCharArray(char *, unsigned int). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->readCharArray(&s, size);

		return 0;
	}

	// unsigned int osgDB::InputStream::readSize()
	static int _bind_readSize(lua_State *L) {
		if (!_lg_typecheck_readSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::InputStream::readSize() function, expected prototype:\nunsigned int osgDB::InputStream::readSize()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgDB::InputStream::readSize(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		unsigned int lret = self->readSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Array * osgDB::InputStream::readArray()
	static int _bind_readArray(lua_State *L) {
		if (!_lg_typecheck_readArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Array * osgDB::InputStream::readArray() function, expected prototype:\nosg::Array * osgDB::InputStream::readArray()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Array * osgDB::InputStream::readArray(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::Array * lret = self->readArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Array >::push(L,lret,false);

		return 1;
	}

	// osg::PrimitiveSet * osgDB::InputStream::readPrimitiveSet()
	static int _bind_readPrimitiveSet(lua_State *L) {
		if (!_lg_typecheck_readPrimitiveSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet * osgDB::InputStream::readPrimitiveSet() function, expected prototype:\nosg::PrimitiveSet * osgDB::InputStream::readPrimitiveSet()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osgDB::InputStream::readPrimitiveSet(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::PrimitiveSet * lret = self->readPrimitiveSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::PrimitiveSet >::push(L,lret,false);

		return 1;
	}

	// osg::Image * osgDB::InputStream::readImage(bool readFromExternal = true)
	static int _bind_readImage(lua_State *L) {
		if (!_lg_typecheck_readImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Image * osgDB::InputStream::readImage(bool readFromExternal = true) function, expected prototype:\nosg::Image * osgDB::InputStream::readImage(bool readFromExternal = true)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		bool readFromExternal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : true;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::InputStream::readImage(bool). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::Image * lret = self->readImage(readFromExternal);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Image >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::InputStream::readObject(osg::Object * existingObj = 0)
	static int _bind_readObject(lua_State *L) {
		if (!_lg_typecheck_readObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::InputStream::readObject(osg::Object * existingObj = 0) function, expected prototype:\nosg::Object * osgDB::InputStream::readObject(osg::Object * existingObj = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::Object* existingObj=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) : (osg::Object*)0;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::InputStream::readObject(osg::Object *). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::Object * lret = self->readObject(existingObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgDB::InputStream::readObjectFields(const std::string & className, osg::Object * existingObj = 0)
	static int _bind_readObjectFields(lua_State *L) {
		if (!_lg_typecheck_readObjectFields(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgDB::InputStream::readObjectFields(const std::string & className, osg::Object * existingObj = 0) function, expected prototype:\nosg::Object * osgDB::InputStream::readObjectFields(const std::string & className, osg::Object * existingObj = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		std::string className(lua_tostring(L,2),lua_objlen(L,2));
		osg::Object* existingObj=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osg::Object >(L,3)) : (osg::Object*)0;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::InputStream::readObjectFields(const std::string &, osg::Object *). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osg::Object * lret = self->readObjectFields(className, existingObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// void osgDB::InputStream::setInputIterator(osgDB::InputIterator * ii)
	static int _bind_setInputIterator(lua_State *L) {
		if (!_lg_typecheck_setInputIterator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::setInputIterator(osgDB::InputIterator * ii) function, expected prototype:\nvoid osgDB::InputStream::setInputIterator(osgDB::InputIterator * ii)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::InputIterator* ii=(Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::setInputIterator(osgDB::InputIterator *). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->setInputIterator(ii);

		return 0;
	}

	// osgDB::InputStream::ReadType osgDB::InputStream::start(osgDB::InputIterator * arg1)
	static int _bind_start(lua_State *L) {
		if (!_lg_typecheck_start(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream::ReadType osgDB::InputStream::start(osgDB::InputIterator * arg1) function, expected prototype:\nosgDB::InputStream::ReadType osgDB::InputStream::start(osgDB::InputIterator * arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::InputIterator* _arg1=(Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,2));

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::InputStream::ReadType osgDB::InputStream::start(osgDB::InputIterator *). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		osgDB::InputStream::ReadType lret = self->start(_arg1);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::InputStream::decompress()
	static int _bind_decompress(lua_State *L) {
		if (!_lg_typecheck_decompress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::decompress() function, expected prototype:\nvoid osgDB::InputStream::decompress()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::decompress(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->decompress();

		return 0;
	}

	// void osgDB::InputStream::readSchema(std::istream & fin)
	static int _bind_readSchema(lua_State *L) {
		if (!_lg_typecheck_readSchema(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::readSchema(std::istream & fin) function, expected prototype:\nvoid osgDB::InputStream::readSchema(std::istream & fin)\nClass arguments details:\narg 1 ID = 77972206\n");
		}

		std::istream* fin_ptr=(Luna< std::istream >::check(L,2));
		if( !fin_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fin in osgDB::InputStream::readSchema function");
		}
		std::istream & fin=*fin_ptr;

		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::readSchema(std::istream &). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->readSchema(fin);

		return 0;
	}

	// void osgDB::InputStream::resetSchema()
	static int _bind_resetSchema(lua_State *L) {
		if (!_lg_typecheck_resetSchema(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputStream::resetSchema() function, expected prototype:\nvoid osgDB::InputStream::resetSchema()\nClass arguments details:\n");
		}


		osgDB::InputStream* self=(Luna< osgDB::InputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::resetSchema(). Got : '%s'",typeid(Luna< osgDB::InputStream >::check(L,1)).name());
		}
		self->resetSchema();

		return 0;
	}

	// double osgDB::InputStream::readDouble(osgDB::InputStream & is)
	static int _bind_readDouble(lua_State *L) {
		if (!_lg_typecheck_readDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osgDB::InputStream::readDouble(osgDB::InputStream & is) function, expected prototype:\ndouble osgDB::InputStream::readDouble(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::readDouble function");
		}
		osgDB::InputStream & is=*is_ptr;

		double lret = readDouble(is);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgDB::InputStream::readInt(osgDB::InputStream & is)
	static int _bind_readInt(lua_State *L) {
		if (!_lg_typecheck_readInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgDB::InputStream::readInt(osgDB::InputStream & is) function, expected prototype:\nint osgDB::InputStream::readInt(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::readInt function");
		}
		osgDB::InputStream & is=*is_ptr;

		int lret = readInt(is);
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osgDB::InputStream::readString(osgDB::InputStream & is)
	static int _bind_readString(lua_State *L) {
		if (!_lg_typecheck_readString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgDB::InputStream::readString(osgDB::InputStream & is) function, expected prototype:\nstd::string osgDB::InputStream::readString(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::readString function");
		}
		osgDB::InputStream & is=*is_ptr;

		std::string lret = readString(is);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool osgDB::InputStream::readBool(osgDB::InputStream & is)
	static int _bind_readBool(lua_State *L) {
		if (!_lg_typecheck_readBool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputStream::readBool(osgDB::InputStream & is) function, expected prototype:\nbool osgDB::InputStream::readBool(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::readBool function");
		}
		osgDB::InputStream & is=*is_ptr;

		bool lret = readBool(is);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Matrixd osgDB::InputStream::writeMatrixd(osgDB::InputStream & is)
	static int _bind_writeMatrixd(lua_State *L) {
		if (!_lg_typecheck_writeMatrixd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgDB::InputStream::writeMatrixd(osgDB::InputStream & is) function, expected prototype:\nosg::Matrixd osgDB::InputStream::writeMatrixd(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeMatrixd function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Matrixd stack_lret = writeMatrixd(is);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2d osgDB::InputStream::writeVec2d(osgDB::InputStream & is)
	static int _bind_writeVec2d(lua_State *L) {
		if (!_lg_typecheck_writeVec2d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2d osgDB::InputStream::writeVec2d(osgDB::InputStream & is) function, expected prototype:\nosg::Vec2d osgDB::InputStream::writeVec2d(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec2d function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec2d stack_lret = writeVec2d(is);
		osg::Vec2d* lret = new osg::Vec2d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec2f osgDB::InputStream::writeVec2f(osgDB::InputStream & is)
	static int _bind_writeVec2f(lua_State *L) {
		if (!_lg_typecheck_writeVec2f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2f osgDB::InputStream::writeVec2f(osgDB::InputStream & is) function, expected prototype:\nosg::Vec2f osgDB::InputStream::writeVec2f(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec2f function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec2f stack_lret = writeVec2f(is);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osgDB::InputStream::writeVec3d(osgDB::InputStream & is)
	static int _bind_writeVec3d(lua_State *L) {
		if (!_lg_typecheck_writeVec3d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgDB::InputStream::writeVec3d(osgDB::InputStream & is) function, expected prototype:\nosg::Vec3d osgDB::InputStream::writeVec3d(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec3d function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec3d stack_lret = writeVec3d(is);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgDB::InputStream::writeVec3f(osgDB::InputStream & is)
	static int _bind_writeVec3f(lua_State *L) {
		if (!_lg_typecheck_writeVec3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgDB::InputStream::writeVec3f(osgDB::InputStream & is) function, expected prototype:\nosg::Vec3f osgDB::InputStream::writeVec3f(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec3f function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec3f stack_lret = writeVec3f(is);
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4d osgDB::InputStream::writeVec4d(osgDB::InputStream & is)
	static int _bind_writeVec4d(lua_State *L) {
		if (!_lg_typecheck_writeVec4d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4d osgDB::InputStream::writeVec4d(osgDB::InputStream & is) function, expected prototype:\nosg::Vec4d osgDB::InputStream::writeVec4d(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec4d function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec4d stack_lret = writeVec4d(is);
		osg::Vec4d* lret = new osg::Vec4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4d >::push(L,lret,true);

		return 1;
	}

	// osg::Vec4f osgDB::InputStream::writeVec4f(osgDB::InputStream & is)
	static int _bind_writeVec4f(lua_State *L) {
		if (!_lg_typecheck_writeVec4f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec4f osgDB::InputStream::writeVec4f(osgDB::InputStream & is) function, expected prototype:\nosg::Vec4f osgDB::InputStream::writeVec4f(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeVec4f function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Vec4f stack_lret = writeVec4f(is);
		osg::Vec4f* lret = new osg::Vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec4f >::push(L,lret,true);

		return 1;
	}

	// osg::Quat osgDB::InputStream::writeQuat(osgDB::InputStream & is)
	static int _bind_writeQuat(lua_State *L) {
		if (!_lg_typecheck_writeQuat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Quat osgDB::InputStream::writeQuat(osgDB::InputStream & is) function, expected prototype:\nosg::Quat osgDB::InputStream::writeQuat(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::writeQuat function");
		}
		osgDB::InputStream & is=*is_ptr;

		osg::Quat stack_lret = writeQuat(is);
		osg::Quat* lret = new osg::Quat(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Quat >::push(L,lret,true);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::useHexMode(osgDB::InputStream & is)
	static int _bind_useHexMode(lua_State *L) {
		if (!_lg_typecheck_useHexMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::useHexMode(osgDB::InputStream & is) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::useHexMode(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::useHexMode function");
		}
		osgDB::InputStream & is=*is_ptr;

		const osgDB::InputStream* lret = &useHexMode(is);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::useDecMode(osgDB::InputStream & is)
	static int _bind_useDecMode(lua_State *L) {
		if (!_lg_typecheck_useDecMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::useDecMode(osgDB::InputStream & is) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::useDecMode(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::useDecMode function");
		}
		osgDB::InputStream & is=*is_ptr;

		const osgDB::InputStream* lret = &useDecMode(is);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::beginBracket(osgDB::InputStream & is)
	static int _bind_beginBracket(lua_State *L) {
		if (!_lg_typecheck_beginBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::beginBracket(osgDB::InputStream & is) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::beginBracket(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::beginBracket function");
		}
		osgDB::InputStream & is=*is_ptr;

		const osgDB::InputStream* lret = &beginBracket(is);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::InputStream & osgDB::InputStream::endBracket(osgDB::InputStream & is)
	static int _bind_endBracket(lua_State *L) {
		if (!_lg_typecheck_endBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputStream & osgDB::InputStream::endBracket(osgDB::InputStream & is) function, expected prototype:\nosgDB::InputStream & osgDB::InputStream::endBracket(osgDB::InputStream & is)\nClass arguments details:\narg 1 ID = 47918182\n");
		}

		osgDB::InputStream* is_ptr=(Luna< osgDB::InputStream >::check(L,1));
		if( !is_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg is in osgDB::InputStream::endBracket function");
		}
		osgDB::InputStream & is=*is_ptr;

		const osgDB::InputStream* lret = &endBracket(is);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::InputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgDB::InputStream* LunaTraits< osgDB::InputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_InputStream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::InputStream >::_bind_dtor(osgDB::InputStream* obj) {
	delete obj;
}

const char LunaTraits< osgDB::InputStream >::className[] = "InputStream";
const char LunaTraits< osgDB::InputStream >::fullName[] = "osgDB::InputStream";
const char LunaTraits< osgDB::InputStream >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::InputStream >::parents[] = {0};
const int LunaTraits< osgDB::InputStream >::hash = 47918182;
const int LunaTraits< osgDB::InputStream >::uniqueIDs[] = {47918182,0};

luna_RegType LunaTraits< osgDB::InputStream >::methods[] = {
	{"isBinary", &luna_wrapper_osgDB_InputStream::_bind_isBinary},
	{"getFileVersion", &luna_wrapper_osgDB_InputStream::_bind_getFileVersion},
	{"getOptions", &luna_wrapper_osgDB_InputStream::_bind_getOptions},
	{"matchString", &luna_wrapper_osgDB_InputStream::_bind_matchString},
	{"advanceToCurrentEndBracket", &luna_wrapper_osgDB_InputStream::_bind_advanceToCurrentEndBracket},
	{"readWrappedString", &luna_wrapper_osgDB_InputStream::_bind_readWrappedString},
	{"readCharArray", &luna_wrapper_osgDB_InputStream::_bind_readCharArray},
	{"readSize", &luna_wrapper_osgDB_InputStream::_bind_readSize},
	{"readArray", &luna_wrapper_osgDB_InputStream::_bind_readArray},
	{"readPrimitiveSet", &luna_wrapper_osgDB_InputStream::_bind_readPrimitiveSet},
	{"readImage", &luna_wrapper_osgDB_InputStream::_bind_readImage},
	{"readObject", &luna_wrapper_osgDB_InputStream::_bind_readObject},
	{"readObjectFields", &luna_wrapper_osgDB_InputStream::_bind_readObjectFields},
	{"setInputIterator", &luna_wrapper_osgDB_InputStream::_bind_setInputIterator},
	{"start", &luna_wrapper_osgDB_InputStream::_bind_start},
	{"decompress", &luna_wrapper_osgDB_InputStream::_bind_decompress},
	{"readSchema", &luna_wrapper_osgDB_InputStream::_bind_readSchema},
	{"resetSchema", &luna_wrapper_osgDB_InputStream::_bind_resetSchema},
	{"readDouble", &luna_wrapper_osgDB_InputStream::_bind_readDouble},
	{"readInt", &luna_wrapper_osgDB_InputStream::_bind_readInt},
	{"readString", &luna_wrapper_osgDB_InputStream::_bind_readString},
	{"readBool", &luna_wrapper_osgDB_InputStream::_bind_readBool},
	{"writeMatrixd", &luna_wrapper_osgDB_InputStream::_bind_writeMatrixd},
	{"writeVec2d", &luna_wrapper_osgDB_InputStream::_bind_writeVec2d},
	{"writeVec2f", &luna_wrapper_osgDB_InputStream::_bind_writeVec2f},
	{"writeVec3d", &luna_wrapper_osgDB_InputStream::_bind_writeVec3d},
	{"writeVec3f", &luna_wrapper_osgDB_InputStream::_bind_writeVec3f},
	{"writeVec4d", &luna_wrapper_osgDB_InputStream::_bind_writeVec4d},
	{"writeVec4f", &luna_wrapper_osgDB_InputStream::_bind_writeVec4f},
	{"writeQuat", &luna_wrapper_osgDB_InputStream::_bind_writeQuat},
	{"useHexMode", &luna_wrapper_osgDB_InputStream::_bind_useHexMode},
	{"useDecMode", &luna_wrapper_osgDB_InputStream::_bind_useDecMode},
	{"beginBracket", &luna_wrapper_osgDB_InputStream::_bind_beginBracket},
	{"endBracket", &luna_wrapper_osgDB_InputStream::_bind_endBracket},
	{"dynCast", &luna_wrapper_osgDB_InputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_InputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::InputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::InputStream >::enumValues[] = {
	{"READ_UNKNOWN", osgDB::InputStream::READ_UNKNOWN},
	{"READ_SCENE", osgDB::InputStream::READ_SCENE},
	{"READ_IMAGE", osgDB::InputStream::READ_IMAGE},
	{"READ_OBJECT", osgDB::InputStream::READ_OBJECT},
	{0,0}
};


