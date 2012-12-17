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

	inline static bool _lg_typecheck_resetSchema(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
			luaL_error(L, "Invalid object in function call bool osgDB::InputStream::isBinary() const");
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
			luaL_error(L, "Invalid object in function call int osgDB::InputStream::getFileVersion() const");
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
			luaL_error(L, "Invalid object in function call const osgDB::Options * osgDB::InputStream::getOptions() const");
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
			luaL_error(L, "Invalid object in function call bool osgDB::InputStream::matchString(const std::string &)");
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
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::advanceToCurrentEndBracket()");
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
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::readWrappedString(std::string &)");
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
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::readCharArray(char *, unsigned int)");
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
			luaL_error(L, "Invalid object in function call unsigned int osgDB::InputStream::readSize()");
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
			luaL_error(L, "Invalid object in function call osg::Array * osgDB::InputStream::readArray()");
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
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet * osgDB::InputStream::readPrimitiveSet()");
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
			luaL_error(L, "Invalid object in function call osg::Image * osgDB::InputStream::readImage(bool)");
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
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::InputStream::readObject(osg::Object *)");
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
			luaL_error(L, "Invalid object in function call osg::Object * osgDB::InputStream::readObjectFields(const std::string &, osg::Object *)");
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
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::setInputIterator(osgDB::InputIterator *)");
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
			luaL_error(L, "Invalid object in function call osgDB::InputStream::ReadType osgDB::InputStream::start(osgDB::InputIterator *)");
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
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::decompress()");
		}
		self->decompress();

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
			luaL_error(L, "Invalid object in function call void osgDB::InputStream::resetSchema()");
		}
		self->resetSchema();

		return 0;
	}


	// Operator binds:

};

osgDB::InputStream* LunaTraits< osgDB::InputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_InputStream::_bind_ctor(L);
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
	{"resetSchema", &luna_wrapper_osgDB_InputStream::_bind_resetSchema},
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


