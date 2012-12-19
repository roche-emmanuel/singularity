#include <plug_common.h>

class luna_wrapper_osgDB_OutputStream {
public:
	typedef Luna< osgDB::OutputStream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::OutputStream*)");
		}

		osgDB::OutputStream* rhs =(Luna< osgDB::OutputStream >::check(L,2));
		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
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

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::OutputStream");
		
		return luna_dynamicCast(L,converters,"osgDB::OutputStream",name);
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

	inline static bool _lg_typecheck_getSchemaName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWriteImageHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWriteImageHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_writeWrappedString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeCharArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeArray(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writePrimitiveSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeObjectFields(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOutputIterator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_start(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compress(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,2993706)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeSchema(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeBool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeMatrixd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec2d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec2f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec3d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec3f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec4d(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeVec4f(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeQuat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,80263306) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useHexMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useDecMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_endBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70071506) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::OutputStream::OutputStream(const osgDB::Options * options)
	static osgDB::OutputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream::OutputStream(const osgDB::Options * options) function, expected prototype:\nosgDB::OutputStream::OutputStream(const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,1));

		return new osgDB::OutputStream(options);
	}


	// Function binds:
	// bool osgDB::OutputStream::isBinary() const
	static int _bind_isBinary(lua_State *L) {
		if (!_lg_typecheck_isBinary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::OutputStream::isBinary() const function, expected prototype:\nbool osgDB::OutputStream::isBinary() const\nClass arguments details:\n");
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::OutputStream::isBinary() const");
		}
		bool lret = self->isBinary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const std::string & osgDB::OutputStream::getSchemaName() const
	static int _bind_getSchemaName(lua_State *L) {
		if (!_lg_typecheck_getSchemaName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::OutputStream::getSchemaName() const function, expected prototype:\nconst std::string & osgDB::OutputStream::getSchemaName() const\nClass arguments details:\n");
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::OutputStream::getSchemaName() const");
		}
		const std::string & lret = self->getSchemaName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const osgDB::Options * osgDB::OutputStream::getOptions() const
	static int _bind_getOptions(lua_State *L) {
		if (!_lg_typecheck_getOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::Options * osgDB::OutputStream::getOptions() const function, expected prototype:\nconst osgDB::Options * osgDB::OutputStream::getOptions() const\nClass arguments details:\n");
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::Options * osgDB::OutputStream::getOptions() const");
		}
		const osgDB::Options * lret = self->getOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Options >::push(L,lret,false);

		return 1;
	}

	// void osgDB::OutputStream::setWriteImageHint(osgDB::OutputStream::WriteImageHint hint)
	static int _bind_setWriteImageHint(lua_State *L) {
		if (!_lg_typecheck_setWriteImageHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::setWriteImageHint(osgDB::OutputStream::WriteImageHint hint) function, expected prototype:\nvoid osgDB::OutputStream::setWriteImageHint(osgDB::OutputStream::WriteImageHint hint)\nClass arguments details:\n");
		}

		osgDB::OutputStream::WriteImageHint hint=(osgDB::OutputStream::WriteImageHint)lua_tointeger(L,2);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::setWriteImageHint(osgDB::OutputStream::WriteImageHint)");
		}
		self->setWriteImageHint(hint);

		return 0;
	}

	// osgDB::OutputStream::WriteImageHint osgDB::OutputStream::getWriteImageHint() const
	static int _bind_getWriteImageHint(lua_State *L) {
		if (!_lg_typecheck_getWriteImageHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream::WriteImageHint osgDB::OutputStream::getWriteImageHint() const function, expected prototype:\nosgDB::OutputStream::WriteImageHint osgDB::OutputStream::getWriteImageHint() const\nClass arguments details:\n");
		}


		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::OutputStream::WriteImageHint osgDB::OutputStream::getWriteImageHint() const");
		}
		osgDB::OutputStream::WriteImageHint lret = self->getWriteImageHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::OutputStream::writeWrappedString(const std::string & str)
	static int _bind_writeWrappedString(lua_State *L) {
		if (!_lg_typecheck_writeWrappedString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeWrappedString(const std::string & str) function, expected prototype:\nvoid osgDB::OutputStream::writeWrappedString(const std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeWrappedString(const std::string &)");
		}
		self->writeWrappedString(str);

		return 0;
	}

	// void osgDB::OutputStream::writeCharArray(const char * s, unsigned int size)
	static int _bind_writeCharArray(lua_State *L) {
		if (!_lg_typecheck_writeCharArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeCharArray(const char * s, unsigned int size) function, expected prototype:\nvoid osgDB::OutputStream::writeCharArray(const char * s, unsigned int size)\nClass arguments details:\n");
		}

		const char * s=(const char *)lua_tostring(L,2);
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeCharArray(const char *, unsigned int)");
		}
		self->writeCharArray(s, size);

		return 0;
	}

	// void osgDB::OutputStream::writeArray(const osg::Array * a)
	static int _bind_writeArray(lua_State *L) {
		if (!_lg_typecheck_writeArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeArray(const osg::Array * a) function, expected prototype:\nvoid osgDB::OutputStream::writeArray(const osg::Array * a)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Array* a=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeArray(const osg::Array *)");
		}
		self->writeArray(a);

		return 0;
	}

	// void osgDB::OutputStream::writePrimitiveSet(const osg::PrimitiveSet * p)
	static int _bind_writePrimitiveSet(lua_State *L) {
		if (!_lg_typecheck_writePrimitiveSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writePrimitiveSet(const osg::PrimitiveSet * p) function, expected prototype:\nvoid osgDB::OutputStream::writePrimitiveSet(const osg::PrimitiveSet * p)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::PrimitiveSet* p=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writePrimitiveSet(const osg::PrimitiveSet *)");
		}
		self->writePrimitiveSet(p);

		return 0;
	}

	// void osgDB::OutputStream::writeImage(const osg::Image * img)
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeImage(const osg::Image * img) function, expected prototype:\nvoid osgDB::OutputStream::writeImage(const osg::Image * img)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* img=(Luna< osg::Referenced >::checkSubType< osg::Image >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeImage(const osg::Image *)");
		}
		self->writeImage(img);

		return 0;
	}

	// void osgDB::OutputStream::writeObject(const osg::Object * obj)
	static int _bind_writeObject(lua_State *L) {
		if (!_lg_typecheck_writeObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeObject(const osg::Object * obj) function, expected prototype:\nvoid osgDB::OutputStream::writeObject(const osg::Object * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeObject(const osg::Object *)");
		}
		self->writeObject(obj);

		return 0;
	}

	// void osgDB::OutputStream::writeObjectFields(const osg::Object * obj)
	static int _bind_writeObjectFields(lua_State *L) {
		if (!_lg_typecheck_writeObjectFields(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeObjectFields(const osg::Object * obj) function, expected prototype:\nvoid osgDB::OutputStream::writeObjectFields(const osg::Object * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeObjectFields(const osg::Object *)");
		}
		self->writeObjectFields(obj);

		return 0;
	}

	// void osgDB::OutputStream::setOutputIterator(osgDB::OutputIterator * oi)
	static int _bind_setOutputIterator(lua_State *L) {
		if (!_lg_typecheck_setOutputIterator(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::setOutputIterator(osgDB::OutputIterator * oi) function, expected prototype:\nvoid osgDB::OutputStream::setOutputIterator(osgDB::OutputIterator * oi)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::OutputIterator* oi=(Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::setOutputIterator(osgDB::OutputIterator *)");
		}
		self->setOutputIterator(oi);

		return 0;
	}

	// void osgDB::OutputStream::start(osgDB::OutputIterator * outIterator, osgDB::OutputStream::WriteType type)
	static int _bind_start(lua_State *L) {
		if (!_lg_typecheck_start(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::start(osgDB::OutputIterator * outIterator, osgDB::OutputStream::WriteType type) function, expected prototype:\nvoid osgDB::OutputStream::start(osgDB::OutputIterator * outIterator, osgDB::OutputStream::WriteType type)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::OutputIterator* outIterator=(Luna< osg::Referenced >::checkSubType< osgDB::OutputIterator >(L,2));
		osgDB::OutputStream::WriteType type=(osgDB::OutputStream::WriteType)lua_tointeger(L,3);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::start(osgDB::OutputIterator *, osgDB::OutputStream::WriteType)");
		}
		self->start(outIterator, type);

		return 0;
	}

	// void osgDB::OutputStream::compress(std::ostream * ostream)
	static int _bind_compress(lua_State *L) {
		if (!_lg_typecheck_compress(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::compress(std::ostream * ostream) function, expected prototype:\nvoid osgDB::OutputStream::compress(std::ostream * ostream)\nClass arguments details:\narg 1 ID = 2993706\n");
		}

		std::ostream* ostream=(Luna< std::ostream >::check(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::compress(std::ostream *)");
		}
		self->compress(ostream);

		return 0;
	}

	// void osgDB::OutputStream::writeSchema(std::ostream & fout)
	static int _bind_writeSchema(lua_State *L) {
		if (!_lg_typecheck_writeSchema(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeSchema(std::ostream & fout) function, expected prototype:\nvoid osgDB::OutputStream::writeSchema(std::ostream & fout)\nClass arguments details:\narg 1 ID = 2993706\n");
		}

		std::ostream* fout_ptr=(Luna< std::ostream >::check(L,2));
		if( !fout_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fout in osgDB::OutputStream::writeSchema function");
		}
		std::ostream & fout=*fout_ptr;

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeSchema(std::ostream &)");
		}
		self->writeSchema(fout);

		return 0;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeDouble(osgDB::OutputStream & os, double val)
	static int _bind_writeDouble(lua_State *L) {
		if (!_lg_typecheck_writeDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeDouble(osgDB::OutputStream & os, double val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeDouble(osgDB::OutputStream & os, double val)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeDouble function");
		}
		osgDB::OutputStream & os=*os_ptr;
		double val=(double)lua_tonumber(L,2);

		const osgDB::OutputStream* lret = &writeDouble(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeInt(osgDB::OutputStream & os, int val)
	static int _bind_writeInt(lua_State *L) {
		if (!_lg_typecheck_writeInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeInt(osgDB::OutputStream & os, int val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeInt(osgDB::OutputStream & os, int val)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeInt function");
		}
		osgDB::OutputStream & os=*os_ptr;
		int val=(int)lua_tointeger(L,2);

		const osgDB::OutputStream* lret = &writeInt(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeString(osgDB::OutputStream & os, const std::string & val)
	static int _bind_writeString(lua_State *L) {
		if (!_lg_typecheck_writeString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeString(osgDB::OutputStream & os, const std::string & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeString(osgDB::OutputStream & os, const std::string & val)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeString function");
		}
		osgDB::OutputStream & os=*os_ptr;
		std::string val(lua_tostring(L,2),lua_objlen(L,2));

		const osgDB::OutputStream* lret = &writeString(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeBool(osgDB::OutputStream & os, bool val)
	static int _bind_writeBool(lua_State *L) {
		if (!_lg_typecheck_writeBool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeBool(osgDB::OutputStream & os, bool val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeBool(osgDB::OutputStream & os, bool val)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeBool function");
		}
		osgDB::OutputStream & os=*os_ptr;
		bool val=(bool)(lua_toboolean(L,2)==1);

		const osgDB::OutputStream* lret = &writeBool(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeProperty(osgDB::OutputStream & os, const std::string & val)
	static int _bind_writeProperty(lua_State *L) {
		if (!_lg_typecheck_writeProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeProperty(osgDB::OutputStream & os, const std::string & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeProperty(osgDB::OutputStream & os, const std::string & val)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeProperty function");
		}
		osgDB::OutputStream & os=*os_ptr;
		std::string val(lua_tostring(L,2),lua_objlen(L,2));

		const osgDB::OutputStream* lret = &writeProperty(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeMatrixd(osgDB::OutputStream & os, const osg::Matrixd & val)
	static int _bind_writeMatrixd(lua_State *L) {
		if (!_lg_typecheck_writeMatrixd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeMatrixd(osgDB::OutputStream & os, const osg::Matrixd & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeMatrixd(osgDB::OutputStream & os, const osg::Matrixd & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 18903838\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeMatrixd function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Matrixd* val_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeMatrixd function");
		}
		const osg::Matrixd & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeMatrixd(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec2d(osgDB::OutputStream & os, const osg::Vec2d & val)
	static int _bind_writeVec2d(lua_State *L) {
		if (!_lg_typecheck_writeVec2d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec2d(osgDB::OutputStream & os, const osg::Vec2d & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec2d(osgDB::OutputStream & os, const osg::Vec2d & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303171\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec2d function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec2d* val_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec2d function");
		}
		const osg::Vec2d & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec2d(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec2f(osgDB::OutputStream & os, const osg::Vec2f & val)
	static int _bind_writeVec2f(lua_State *L) {
		if (!_lg_typecheck_writeVec2f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec2f(osgDB::OutputStream & os, const osg::Vec2f & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec2f(osgDB::OutputStream & os, const osg::Vec2f & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303173\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec2f function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec2f* val_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec2f function");
		}
		const osg::Vec2f & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec2f(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec3d(osgDB::OutputStream & os, const osg::Vec3d & val)
	static int _bind_writeVec3d(lua_State *L) {
		if (!_lg_typecheck_writeVec3d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec3d(osgDB::OutputStream & os, const osg::Vec3d & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec3d(osgDB::OutputStream & os, const osg::Vec3d & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303202\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec3d function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec3d* val_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec3d function");
		}
		const osg::Vec3d & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec3d(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec3f(osgDB::OutputStream & os, const osg::Vec3f & val)
	static int _bind_writeVec3f(lua_State *L) {
		if (!_lg_typecheck_writeVec3f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec3f(osgDB::OutputStream & os, const osg::Vec3f & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec3f(osgDB::OutputStream & os, const osg::Vec3f & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303204\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec3f function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec3f* val_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec3f function");
		}
		const osg::Vec3f & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec3f(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec4d(osgDB::OutputStream & os, const osg::Vec4d & val)
	static int _bind_writeVec4d(lua_State *L) {
		if (!_lg_typecheck_writeVec4d(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec4d(osgDB::OutputStream & os, const osg::Vec4d & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec4d(osgDB::OutputStream & os, const osg::Vec4d & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303233\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec4d function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec4d* val_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec4d function");
		}
		const osg::Vec4d & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec4d(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeVec4f(osgDB::OutputStream & os, const osg::Vec4f & val)
	static int _bind_writeVec4f(lua_State *L) {
		if (!_lg_typecheck_writeVec4f(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeVec4f(osgDB::OutputStream & os, const osg::Vec4f & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeVec4f(osgDB::OutputStream & os, const osg::Vec4f & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 92303235\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeVec4f function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Vec4f* val_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeVec4f function");
		}
		const osg::Vec4f & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeVec4f(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::writeQuat(osgDB::OutputStream & os, const osg::Quat & val)
	static int _bind_writeQuat(lua_State *L) {
		if (!_lg_typecheck_writeQuat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::writeQuat(osgDB::OutputStream & os, const osg::Quat & val) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::writeQuat(osgDB::OutputStream & os, const osg::Quat & val)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 80263306\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::writeQuat function");
		}
		osgDB::OutputStream & os=*os_ptr;
		const osg::Quat* val_ptr=(Luna< osg::Quat >::check(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in osgDB::OutputStream::writeQuat function");
		}
		const osg::Quat & val=*val_ptr;

		const osgDB::OutputStream* lret = &writeQuat(os, val);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::endl(osgDB::OutputStream & os)
	static int _bind_endl(lua_State *L) {
		if (!_lg_typecheck_endl(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::endl(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::endl(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::endl function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &endl(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::useHexMode(osgDB::OutputStream & os)
	static int _bind_useHexMode(lua_State *L) {
		if (!_lg_typecheck_useHexMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::useHexMode(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::useHexMode(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::useHexMode function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &useHexMode(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::useDecMode(osgDB::OutputStream & os)
	static int _bind_useDecMode(lua_State *L) {
		if (!_lg_typecheck_useDecMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::useDecMode(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::useDecMode(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::useDecMode function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &useDecMode(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::beginBracket(osgDB::OutputStream & os)
	static int _bind_beginBracket(lua_State *L) {
		if (!_lg_typecheck_beginBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::beginBracket(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::beginBracket(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::beginBracket function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &beginBracket(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}

	// osgDB::OutputStream & osgDB::OutputStream::endBracket(osgDB::OutputStream & os)
	static int _bind_endBracket(lua_State *L) {
		if (!_lg_typecheck_endBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream & osgDB::OutputStream::endBracket(osgDB::OutputStream & os) function, expected prototype:\nosgDB::OutputStream & osgDB::OutputStream::endBracket(osgDB::OutputStream & os)\nClass arguments details:\narg 1 ID = 70071506\n");
		}

		osgDB::OutputStream* os_ptr=(Luna< osgDB::OutputStream >::check(L,1));
		if( !os_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg os in osgDB::OutputStream::endBracket function");
		}
		osgDB::OutputStream & os=*os_ptr;

		const osgDB::OutputStream* lret = &endBracket(os);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::OutputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osgDB::OutputStream* LunaTraits< osgDB::OutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_OutputStream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::OutputStream >::_bind_dtor(osgDB::OutputStream* obj) {
	delete obj;
}

const char LunaTraits< osgDB::OutputStream >::className[] = "OutputStream";
const char LunaTraits< osgDB::OutputStream >::fullName[] = "osgDB::OutputStream";
const char LunaTraits< osgDB::OutputStream >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::OutputStream >::parents[] = {0};
const int LunaTraits< osgDB::OutputStream >::hash = 70071506;
const int LunaTraits< osgDB::OutputStream >::uniqueIDs[] = {70071506,0};

luna_RegType LunaTraits< osgDB::OutputStream >::methods[] = {
	{"isBinary", &luna_wrapper_osgDB_OutputStream::_bind_isBinary},
	{"getSchemaName", &luna_wrapper_osgDB_OutputStream::_bind_getSchemaName},
	{"getOptions", &luna_wrapper_osgDB_OutputStream::_bind_getOptions},
	{"setWriteImageHint", &luna_wrapper_osgDB_OutputStream::_bind_setWriteImageHint},
	{"getWriteImageHint", &luna_wrapper_osgDB_OutputStream::_bind_getWriteImageHint},
	{"writeWrappedString", &luna_wrapper_osgDB_OutputStream::_bind_writeWrappedString},
	{"writeCharArray", &luna_wrapper_osgDB_OutputStream::_bind_writeCharArray},
	{"writeArray", &luna_wrapper_osgDB_OutputStream::_bind_writeArray},
	{"writePrimitiveSet", &luna_wrapper_osgDB_OutputStream::_bind_writePrimitiveSet},
	{"writeImage", &luna_wrapper_osgDB_OutputStream::_bind_writeImage},
	{"writeObject", &luna_wrapper_osgDB_OutputStream::_bind_writeObject},
	{"writeObjectFields", &luna_wrapper_osgDB_OutputStream::_bind_writeObjectFields},
	{"setOutputIterator", &luna_wrapper_osgDB_OutputStream::_bind_setOutputIterator},
	{"start", &luna_wrapper_osgDB_OutputStream::_bind_start},
	{"compress", &luna_wrapper_osgDB_OutputStream::_bind_compress},
	{"writeSchema", &luna_wrapper_osgDB_OutputStream::_bind_writeSchema},
	{"writeDouble", &luna_wrapper_osgDB_OutputStream::_bind_writeDouble},
	{"writeInt", &luna_wrapper_osgDB_OutputStream::_bind_writeInt},
	{"writeString", &luna_wrapper_osgDB_OutputStream::_bind_writeString},
	{"writeBool", &luna_wrapper_osgDB_OutputStream::_bind_writeBool},
	{"writeProperty", &luna_wrapper_osgDB_OutputStream::_bind_writeProperty},
	{"writeMatrixd", &luna_wrapper_osgDB_OutputStream::_bind_writeMatrixd},
	{"writeVec2d", &luna_wrapper_osgDB_OutputStream::_bind_writeVec2d},
	{"writeVec2f", &luna_wrapper_osgDB_OutputStream::_bind_writeVec2f},
	{"writeVec3d", &luna_wrapper_osgDB_OutputStream::_bind_writeVec3d},
	{"writeVec3f", &luna_wrapper_osgDB_OutputStream::_bind_writeVec3f},
	{"writeVec4d", &luna_wrapper_osgDB_OutputStream::_bind_writeVec4d},
	{"writeVec4f", &luna_wrapper_osgDB_OutputStream::_bind_writeVec4f},
	{"writeQuat", &luna_wrapper_osgDB_OutputStream::_bind_writeQuat},
	{"endl", &luna_wrapper_osgDB_OutputStream::_bind_endl},
	{"useHexMode", &luna_wrapper_osgDB_OutputStream::_bind_useHexMode},
	{"useDecMode", &luna_wrapper_osgDB_OutputStream::_bind_useDecMode},
	{"beginBracket", &luna_wrapper_osgDB_OutputStream::_bind_beginBracket},
	{"endBracket", &luna_wrapper_osgDB_OutputStream::_bind_endBracket},
	{"dynCast", &luna_wrapper_osgDB_OutputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_OutputStream::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::OutputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::OutputStream >::enumValues[] = {
	{"WRITE_UNKNOWN", osgDB::OutputStream::WRITE_UNKNOWN},
	{"WRITE_SCENE", osgDB::OutputStream::WRITE_SCENE},
	{"WRITE_IMAGE", osgDB::OutputStream::WRITE_IMAGE},
	{"WRITE_OBJECT", osgDB::OutputStream::WRITE_OBJECT},
	{"WRITE_USE_IMAGE_HINT", osgDB::OutputStream::WRITE_USE_IMAGE_HINT},
	{"WRITE_USE_EXTERNAL", osgDB::OutputStream::WRITE_USE_EXTERNAL},
	{"WRITE_INLINE_DATA", osgDB::OutputStream::WRITE_INLINE_DATA},
	{"WRITE_INLINE_FILE", osgDB::OutputStream::WRITE_INLINE_FILE},
	{"WRITE_EXTERNAL_FILE", osgDB::OutputStream::WRITE_EXTERNAL_FILE},
	{0,0}
};


