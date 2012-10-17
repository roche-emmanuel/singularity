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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::OutputStream::OutputStream(const osgDB::Options * options)
	static osgDB::OutputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::OutputStream::OutputStream(const osgDB::Options * options) function, expected prototype:\nosgDB::OutputStream::OutputStream(const osgDB::Options * options)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgDB::Options* options=dynamic_cast< osgDB::Options* >(Luna< osg::Referenced >::check(L,1));

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

		const osg::Array* a=dynamic_cast< osg::Array* >(Luna< osg::Referenced >::check(L,2));

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::writeArray(const osg::Array *)");
		}
		self->writeArray(a);

		return 0;
	}

	// void osgDB::OutputStream::writeImage(const osg::Image * img)
	static int _bind_writeImage(lua_State *L) {
		if (!_lg_typecheck_writeImage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::OutputStream::writeImage(const osg::Image * img) function, expected prototype:\nvoid osgDB::OutputStream::writeImage(const osg::Image * img)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Image* img=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

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

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

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

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

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

		osgDB::OutputIterator* oi=dynamic_cast< osgDB::OutputIterator* >(Luna< osg::Referenced >::check(L,2));

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

		osgDB::OutputIterator* outIterator=dynamic_cast< osgDB::OutputIterator* >(Luna< osg::Referenced >::check(L,2));
		osgDB::OutputStream::WriteType type=(osgDB::OutputStream::WriteType)lua_tointeger(L,3);

		osgDB::OutputStream* self=(Luna< osgDB::OutputStream >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::OutputStream::start(osgDB::OutputIterator *, osgDB::OutputStream::WriteType)");
		}
		self->start(outIterator, type);

		return 0;
	}


	// Operator binds:

};

osgDB::OutputStream* LunaTraits< osgDB::OutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_OutputStream::_bind_ctor(L);
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
	{"writeImage", &luna_wrapper_osgDB_OutputStream::_bind_writeImage},
	{"writeObject", &luna_wrapper_osgDB_OutputStream::_bind_writeObject},
	{"writeObjectFields", &luna_wrapper_osgDB_OutputStream::_bind_writeObjectFields},
	{"setOutputIterator", &luna_wrapper_osgDB_OutputStream::_bind_setOutputIterator},
	{"start", &luna_wrapper_osgDB_OutputStream::_bind_start},
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


