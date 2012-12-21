#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_InputIterator.h>

class luna_wrapper_osgDB_InputIterator {
public:
	typedef Luna< osgDB::InputIterator > luna_t;

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
		//osgDB::InputIterator* ptr= dynamic_cast< osgDB::InputIterator* >(Luna< osg::Referenced >::check(L,1));
		osgDB::InputIterator* ptr= luna_caster< osg::Referenced, osgDB::InputIterator >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::InputIterator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,77972206)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStream_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStream_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_checkStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isFailed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isBinary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_readBool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readUChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readShort(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readUShort(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readUInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readLong(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readULong(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readFloat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readGLenum(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,32567652) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,23791141) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readMark(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60066730) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readCharArray(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readWrappedString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_matchString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_advanceToCurrentEndBracket(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::InputIterator::InputIterator(lua_Table * data)
	static osgDB::InputIterator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::InputIterator::InputIterator(lua_Table * data) function, expected prototype:\nosgDB::InputIterator::InputIterator(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgDB_InputIterator(L,NULL);
	}


	// Function binds:
	// void osgDB::InputIterator::setStream(std::istream * istream)
	static int _bind_setStream(lua_State *L) {
		if (!_lg_typecheck_setStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::setStream(std::istream * istream) function, expected prototype:\nvoid osgDB::InputIterator::setStream(std::istream * istream)\nClass arguments details:\narg 1 ID = 77972206\n");
		}

		std::istream* istream=(Luna< std::istream >::check(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::setStream(std::istream *)");
		}
		self->setStream(istream);

		return 0;
	}

	// std::istream * osgDB::InputIterator::getStream()
	static int _bind_getStream_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStream_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::istream * osgDB::InputIterator::getStream() function, expected prototype:\nstd::istream * osgDB::InputIterator::getStream()\nClass arguments details:\n");
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::istream * osgDB::InputIterator::getStream()");
		}
		std::istream * lret = self->getStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::istream >::push(L,lret,false);

		return 1;
	}

	// const std::istream * osgDB::InputIterator::getStream() const
	static int _bind_getStream_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStream_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::istream * osgDB::InputIterator::getStream() const function, expected prototype:\nconst std::istream * osgDB::InputIterator::getStream() const\nClass arguments details:\n");
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::istream * osgDB::InputIterator::getStream() const");
		}
		const std::istream * lret = self->getStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::istream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::InputIterator::getStream
	static int _bind_getStream(lua_State *L) {
		if (_lg_typecheck_getStream_overload_1(L)) return _bind_getStream_overload_1(L);
		if (_lg_typecheck_getStream_overload_2(L)) return _bind_getStream_overload_2(L);

		luaL_error(L, "error in function getStream, cannot match any of the overloads for function getStream:\n  getStream()\n  getStream()\n");
		return 0;
	}

	// void osgDB::InputIterator::checkStream() const
	static int _bind_checkStream(lua_State *L) {
		if (!_lg_typecheck_checkStream(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::checkStream() const function, expected prototype:\nvoid osgDB::InputIterator::checkStream() const\nClass arguments details:\n");
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::checkStream() const");
		}
		self->checkStream();

		return 0;
	}

	// bool osgDB::InputIterator::isFailed() const
	static int _bind_isFailed(lua_State *L) {
		if (!_lg_typecheck_isFailed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputIterator::isFailed() const function, expected prototype:\nbool osgDB::InputIterator::isFailed() const\nClass arguments details:\n");
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::InputIterator::isFailed() const");
		}
		bool lret = self->isFailed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::InputIterator::isBinary() const
	static int _bind_isBinary(lua_State *L) {
		if (!_lg_typecheck_isBinary(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputIterator::isBinary() const function, expected prototype:\nbool osgDB::InputIterator::isBinary() const\nClass arguments details:\n");
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::InputIterator::isBinary() const");
		}
		bool lret = self->isBinary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::InputIterator::readBool(bool & b)
	static int _bind_readBool(lua_State *L) {
		if (!_lg_typecheck_readBool(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readBool(bool & b) function, expected prototype:\nvoid osgDB::InputIterator::readBool(bool & b)\nClass arguments details:\n");
		}

		bool b=(bool)(lua_toboolean(L,2)==1);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readBool(bool &)");
		}
		self->readBool(b);

		return 0;
	}

	// void osgDB::InputIterator::readChar(char & c)
	static int _bind_readChar(lua_State *L) {
		if (!_lg_typecheck_readChar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readChar(char & c) function, expected prototype:\nvoid osgDB::InputIterator::readChar(char & c)\nClass arguments details:\n");
		}

		char c=(char)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readChar(char &)");
		}
		self->readChar(c);

		return 0;
	}

	// void osgDB::InputIterator::readSChar(signed char & c)
	static int _bind_readSChar(lua_State *L) {
		if (!_lg_typecheck_readSChar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readSChar(signed char & c) function, expected prototype:\nvoid osgDB::InputIterator::readSChar(signed char & c)\nClass arguments details:\n");
		}

		signed char c=(signed char)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readSChar(signed char &)");
		}
		self->readSChar(c);

		return 0;
	}

	// void osgDB::InputIterator::readUChar(unsigned char & c)
	static int _bind_readUChar(lua_State *L) {
		if (!_lg_typecheck_readUChar(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readUChar(unsigned char & c) function, expected prototype:\nvoid osgDB::InputIterator::readUChar(unsigned char & c)\nClass arguments details:\n");
		}

		unsigned char c = (unsigned char)(lua_tointeger(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readUChar(unsigned char &)");
		}
		self->readUChar(c);

		return 0;
	}

	// void osgDB::InputIterator::readShort(short & s)
	static int _bind_readShort(lua_State *L) {
		if (!_lg_typecheck_readShort(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readShort(short & s) function, expected prototype:\nvoid osgDB::InputIterator::readShort(short & s)\nClass arguments details:\n");
		}

		short s=(short)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readShort(short &)");
		}
		self->readShort(s);

		return 0;
	}

	// void osgDB::InputIterator::readUShort(unsigned short & s)
	static int _bind_readUShort(lua_State *L) {
		if (!_lg_typecheck_readUShort(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readUShort(unsigned short & s) function, expected prototype:\nvoid osgDB::InputIterator::readUShort(unsigned short & s)\nClass arguments details:\n");
		}

		unsigned short s=(unsigned short)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readUShort(unsigned short &)");
		}
		self->readUShort(s);

		return 0;
	}

	// void osgDB::InputIterator::readInt(int & i)
	static int _bind_readInt(lua_State *L) {
		if (!_lg_typecheck_readInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readInt(int & i) function, expected prototype:\nvoid osgDB::InputIterator::readInt(int & i)\nClass arguments details:\n");
		}

		int i=(int)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readInt(int &)");
		}
		self->readInt(i);

		return 0;
	}

	// void osgDB::InputIterator::readUInt(unsigned int & i)
	static int _bind_readUInt(lua_State *L) {
		if (!_lg_typecheck_readUInt(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readUInt(unsigned int & i) function, expected prototype:\nvoid osgDB::InputIterator::readUInt(unsigned int & i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readUInt(unsigned int &)");
		}
		self->readUInt(i);

		return 0;
	}

	// void osgDB::InputIterator::readLong(long & l)
	static int _bind_readLong(lua_State *L) {
		if (!_lg_typecheck_readLong(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readLong(long & l) function, expected prototype:\nvoid osgDB::InputIterator::readLong(long & l)\nClass arguments details:\n");
		}

		long l=(long)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readLong(long &)");
		}
		self->readLong(l);

		return 0;
	}

	// void osgDB::InputIterator::readULong(unsigned long & l)
	static int _bind_readULong(lua_State *L) {
		if (!_lg_typecheck_readULong(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readULong(unsigned long & l) function, expected prototype:\nvoid osgDB::InputIterator::readULong(unsigned long & l)\nClass arguments details:\n");
		}

		unsigned long l=(unsigned long)lua_tointeger(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readULong(unsigned long &)");
		}
		self->readULong(l);

		return 0;
	}

	// void osgDB::InputIterator::readFloat(float & f)
	static int _bind_readFloat(lua_State *L) {
		if (!_lg_typecheck_readFloat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readFloat(float & f) function, expected prototype:\nvoid osgDB::InputIterator::readFloat(float & f)\nClass arguments details:\n");
		}

		float f=(float)lua_tonumber(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readFloat(float &)");
		}
		self->readFloat(f);

		return 0;
	}

	// void osgDB::InputIterator::readDouble(double & d)
	static int _bind_readDouble(lua_State *L) {
		if (!_lg_typecheck_readDouble(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readDouble(double & d) function, expected prototype:\nvoid osgDB::InputIterator::readDouble(double & d)\nClass arguments details:\n");
		}

		double d=(double)lua_tonumber(L,2);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readDouble(double &)");
		}
		self->readDouble(d);

		return 0;
	}

	// void osgDB::InputIterator::readString(std::string & s)
	static int _bind_readString(lua_State *L) {
		if (!_lg_typecheck_readString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readString(std::string & s) function, expected prototype:\nvoid osgDB::InputIterator::readString(std::string & s)\nClass arguments details:\n");
		}

		std::string s(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readString(std::string &)");
		}
		self->readString(s);

		return 0;
	}

	// void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value)
	static int _bind_readGLenum(lua_State *L) {
		if (!_lg_typecheck_readGLenum(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value) function, expected prototype:\nvoid osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value)\nClass arguments details:\narg 1 ID = 32567652\n");
		}

		osgDB::ObjectGLenum* value_ptr=(Luna< osgDB::ObjectGLenum >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::InputIterator::readGLenum function");
		}
		osgDB::ObjectGLenum & value=*value_ptr;

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum &)");
		}
		self->readGLenum(value);

		return 0;
	}

	// void osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop)
	static int _bind_readProperty(lua_State *L) {
		if (!_lg_typecheck_readProperty(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop) function, expected prototype:\nvoid osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop)\nClass arguments details:\narg 1 ID = 23791141\n");
		}

		osgDB::ObjectProperty* prop_ptr=(Luna< osgDB::ObjectProperty >::check(L,2));
		if( !prop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg prop in osgDB::InputIterator::readProperty function");
		}
		osgDB::ObjectProperty & prop=*prop_ptr;

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readProperty(osgDB::ObjectProperty &)");
		}
		self->readProperty(prop);

		return 0;
	}

	// void osgDB::InputIterator::readMark(osgDB::ObjectMark & mark)
	static int _bind_readMark(lua_State *L) {
		if (!_lg_typecheck_readMark(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readMark(osgDB::ObjectMark & mark) function, expected prototype:\nvoid osgDB::InputIterator::readMark(osgDB::ObjectMark & mark)\nClass arguments details:\narg 1 ID = 60066730\n");
		}

		osgDB::ObjectMark* mark_ptr=(Luna< osgDB::ObjectMark >::check(L,2));
		if( !mark_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mark in osgDB::InputIterator::readMark function");
		}
		osgDB::ObjectMark & mark=*mark_ptr;

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readMark(osgDB::ObjectMark &)");
		}
		self->readMark(mark);

		return 0;
	}

	// void osgDB::InputIterator::readCharArray(char * s, unsigned int size)
	static int _bind_readCharArray(lua_State *L) {
		if (!_lg_typecheck_readCharArray(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readCharArray(char * s, unsigned int size) function, expected prototype:\nvoid osgDB::InputIterator::readCharArray(char * s, unsigned int size)\nClass arguments details:\n");
		}

		char s=(char)lua_tointeger(L,2);
		unsigned int size=(unsigned int)lua_tointeger(L,3);

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readCharArray(char *, unsigned int)");
		}
		self->readCharArray(&s, size);

		return 0;
	}

	// void osgDB::InputIterator::readWrappedString(std::string & str)
	static int _bind_readWrappedString(lua_State *L) {
		if (!_lg_typecheck_readWrappedString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::readWrappedString(std::string & str) function, expected prototype:\nvoid osgDB::InputIterator::readWrappedString(std::string & str)\nClass arguments details:\n");
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::readWrappedString(std::string &)");
		}
		self->readWrappedString(str);

		return 0;
	}

	// bool osgDB::InputIterator::matchString(const std::string & arg1)
	static int _bind_matchString(lua_State *L) {
		if (!_lg_typecheck_matchString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputIterator::matchString(const std::string & arg1) function, expected prototype:\nbool osgDB::InputIterator::matchString(const std::string & arg1)\nClass arguments details:\n");
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::InputIterator::matchString(const std::string &)");
		}
		bool lret = self->matchString(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::InputIterator::advanceToCurrentEndBracket()
	static int _bind_advanceToCurrentEndBracket(lua_State *L) {
		if (!_lg_typecheck_advanceToCurrentEndBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::advanceToCurrentEndBracket() function, expected prototype:\nvoid osgDB::InputIterator::advanceToCurrentEndBracket()\nClass arguments details:\n");
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::advanceToCurrentEndBracket()");
		}
		self->advanceToCurrentEndBracket();

		return 0;
	}

	// bool osgDB::InputIterator::base_matchString(const std::string & arg1)
	static int _bind_base_matchString(lua_State *L) {
		if (!_lg_typecheck_base_matchString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::InputIterator::base_matchString(const std::string & arg1) function, expected prototype:\nbool osgDB::InputIterator::base_matchString(const std::string & arg1)\nClass arguments details:\n");
		}

		std::string _arg1(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::InputIterator::base_matchString(const std::string &)");
		}
		bool lret = self->InputIterator::matchString(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::InputIterator::base_advanceToCurrentEndBracket()
	static int _bind_base_advanceToCurrentEndBracket(lua_State *L) {
		if (!_lg_typecheck_base_advanceToCurrentEndBracket(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::InputIterator::base_advanceToCurrentEndBracket() function, expected prototype:\nvoid osgDB::InputIterator::base_advanceToCurrentEndBracket()\nClass arguments details:\n");
		}


		osgDB::InputIterator* self=Luna< osg::Referenced >::checkSubType< osgDB::InputIterator >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::InputIterator::base_advanceToCurrentEndBracket()");
		}
		self->InputIterator::advanceToCurrentEndBracket();

		return 0;
	}


	// Operator binds:

};

osgDB::InputIterator* LunaTraits< osgDB::InputIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_InputIterator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osgDB::InputIterator::isBinary() const
	// void osgDB::InputIterator::readBool(bool & b)
	// void osgDB::InputIterator::readChar(char & c)
	// void osgDB::InputIterator::readSChar(signed char & c)
	// void osgDB::InputIterator::readUChar(unsigned char & c)
	// void osgDB::InputIterator::readShort(short & s)
	// void osgDB::InputIterator::readUShort(unsigned short & s)
	// void osgDB::InputIterator::readInt(int & i)
	// void osgDB::InputIterator::readUInt(unsigned int & i)
	// void osgDB::InputIterator::readLong(long & l)
	// void osgDB::InputIterator::readULong(unsigned long & l)
	// void osgDB::InputIterator::readFloat(float & f)
	// void osgDB::InputIterator::readDouble(double & d)
	// void osgDB::InputIterator::readString(std::string & s)
	// void osgDB::InputIterator::readStream(std::istream &(*)(std::istream &) fn)
	// void osgDB::InputIterator::readBase(std::ios_base &(*)(std::ios_base &) fn)
	// void osgDB::InputIterator::readGLenum(osgDB::ObjectGLenum & value)
	// void osgDB::InputIterator::readProperty(osgDB::ObjectProperty & prop)
	// void osgDB::InputIterator::readMark(osgDB::ObjectMark & mark)
	// void osgDB::InputIterator::readCharArray(char * s, unsigned int size)
	// void osgDB::InputIterator::readWrappedString(std::string & str)
}

void LunaTraits< osgDB::InputIterator >::_bind_dtor(osgDB::InputIterator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::InputIterator >::className[] = "InputIterator";
const char LunaTraits< osgDB::InputIterator >::fullName[] = "osgDB::InputIterator";
const char LunaTraits< osgDB::InputIterator >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::InputIterator >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::InputIterator >::hash = 63109576;
const int LunaTraits< osgDB::InputIterator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::InputIterator >::methods[] = {
	{"setStream", &luna_wrapper_osgDB_InputIterator::_bind_setStream},
	{"getStream", &luna_wrapper_osgDB_InputIterator::_bind_getStream},
	{"checkStream", &luna_wrapper_osgDB_InputIterator::_bind_checkStream},
	{"isFailed", &luna_wrapper_osgDB_InputIterator::_bind_isFailed},
	{"isBinary", &luna_wrapper_osgDB_InputIterator::_bind_isBinary},
	{"readBool", &luna_wrapper_osgDB_InputIterator::_bind_readBool},
	{"readChar", &luna_wrapper_osgDB_InputIterator::_bind_readChar},
	{"readSChar", &luna_wrapper_osgDB_InputIterator::_bind_readSChar},
	{"readUChar", &luna_wrapper_osgDB_InputIterator::_bind_readUChar},
	{"readShort", &luna_wrapper_osgDB_InputIterator::_bind_readShort},
	{"readUShort", &luna_wrapper_osgDB_InputIterator::_bind_readUShort},
	{"readInt", &luna_wrapper_osgDB_InputIterator::_bind_readInt},
	{"readUInt", &luna_wrapper_osgDB_InputIterator::_bind_readUInt},
	{"readLong", &luna_wrapper_osgDB_InputIterator::_bind_readLong},
	{"readULong", &luna_wrapper_osgDB_InputIterator::_bind_readULong},
	{"readFloat", &luna_wrapper_osgDB_InputIterator::_bind_readFloat},
	{"readDouble", &luna_wrapper_osgDB_InputIterator::_bind_readDouble},
	{"readString", &luna_wrapper_osgDB_InputIterator::_bind_readString},
	{"readGLenum", &luna_wrapper_osgDB_InputIterator::_bind_readGLenum},
	{"readProperty", &luna_wrapper_osgDB_InputIterator::_bind_readProperty},
	{"readMark", &luna_wrapper_osgDB_InputIterator::_bind_readMark},
	{"readCharArray", &luna_wrapper_osgDB_InputIterator::_bind_readCharArray},
	{"readWrappedString", &luna_wrapper_osgDB_InputIterator::_bind_readWrappedString},
	{"matchString", &luna_wrapper_osgDB_InputIterator::_bind_matchString},
	{"advanceToCurrentEndBracket", &luna_wrapper_osgDB_InputIterator::_bind_advanceToCurrentEndBracket},
	{"base_matchString", &luna_wrapper_osgDB_InputIterator::_bind_base_matchString},
	{"base_advanceToCurrentEndBracket", &luna_wrapper_osgDB_InputIterator::_bind_base_advanceToCurrentEndBracket},
	{"__eq", &luna_wrapper_osgDB_InputIterator::_bind___eq},
	{"getTable", &luna_wrapper_osgDB_InputIterator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::InputIterator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_InputIterator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::InputIterator >::enumValues[] = {
	{0,0}
};

