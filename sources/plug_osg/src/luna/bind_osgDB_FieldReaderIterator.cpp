#include <plug_common.h>

class luna_wrapper_osgDB_FieldReaderIterator {
public:
	typedef Luna< osgDB::FieldReaderIterator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2696163) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::FieldReaderIterator*)");
		}

		osgDB::FieldReaderIterator* rhs =(Luna< osgDB::FieldReaderIterator >::check(L,2));
		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
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

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::FieldReaderIterator");
		
		return luna_dynamicCast(L,converters,"osgDB::FieldReaderIterator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2696163) ) return false;
		if( (!dynamic_cast< osgDB::FieldReaderIterator* >(Luna< osgDB::FieldReaderIterator >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFieldReader(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_insert_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,7546407)) ) return false;
		if( (lua_isnil(L,3)==0 && !dynamic_cast< osgDB::Field* >(Luna< osgDB::Field >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insert_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_field(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_advanceOverCurrentFieldOrBlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_advanceToEndOfCurrentBlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_advanceToEndOfBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_matchSequence(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (!dynamic_cast< osg::Vec2f* >(Luna< osg::Vec2f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_7(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!dynamic_cast< osg::Vec4f* >(Luna< osg::Vec4f >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_8(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303171) ) return false;
		if( (!dynamic_cast< osg::Vec2d* >(Luna< osg::Vec2d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_9(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!dynamic_cast< osg::Vec3d* >(Luna< osg::Vec3d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_10(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303233) ) return false;
		if( (!dynamic_cast< osg::Vec4d* >(Luna< osg::Vec4d >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_11(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_12(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_13(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_14(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_15(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		if( (!dynamic_cast< osg::Vec2f* >(Luna< osg::Vec2f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_16(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( (!dynamic_cast< osg::Vec3f* >(Luna< osg::Vec3f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_17(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303235) ) return false;
		if( (!dynamic_cast< osg::Vec4f* >(Luna< osg::Vec4f >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_18(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303171) ) return false;
		if( (!dynamic_cast< osg::Vec2d* >(Luna< osg::Vec2d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_19(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( (!dynamic_cast< osg::Vec3d* >(Luna< osg::Vec3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSequence_overload_20(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303233) ) return false;
		if( (!dynamic_cast< osg::Vec4d* >(Luna< osg::Vec4d >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_add(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// osgDB::FieldReaderIterator::FieldReaderIterator()
	static osgDB::FieldReaderIterator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator::FieldReaderIterator() function, expected prototype:\nosgDB::FieldReaderIterator::FieldReaderIterator()\nClass arguments details:\n");
		}


		return new osgDB::FieldReaderIterator();
	}

	// osgDB::FieldReaderIterator::FieldReaderIterator(const osgDB::FieldReaderIterator & ic)
	static osgDB::FieldReaderIterator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator::FieldReaderIterator(const osgDB::FieldReaderIterator & ic) function, expected prototype:\nosgDB::FieldReaderIterator::FieldReaderIterator(const osgDB::FieldReaderIterator & ic)\nClass arguments details:\narg 1 ID = 2696163\n");
		}

		const osgDB::FieldReaderIterator* ic_ptr=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if( !ic_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ic in osgDB::FieldReaderIterator::FieldReaderIterator function");
		}
		const osgDB::FieldReaderIterator & ic=*ic_ptr;

		return new osgDB::FieldReaderIterator(ic);
	}

	// Overload binder for osgDB::FieldReaderIterator::FieldReaderIterator
	static osgDB::FieldReaderIterator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function FieldReaderIterator, cannot match any of the overloads for function FieldReaderIterator:\n  FieldReaderIterator()\n  FieldReaderIterator(const osgDB::FieldReaderIterator &)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::FieldReaderIterator::detach()
	static int _bind_detach(lua_State *L) {
		if (!_lg_typecheck_detach(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::detach() function, expected prototype:\nvoid osgDB::FieldReaderIterator::detach()\nClass arguments details:\n");
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::detach()");
		}
		self->detach();

		return 0;
	}

	// bool osgDB::FieldReaderIterator::eof() const
	static int _bind_eof(lua_State *L) {
		if (!_lg_typecheck_eof(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::eof() const function, expected prototype:\nbool osgDB::FieldReaderIterator::eof() const\nClass arguments details:\n");
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::eof() const");
		}
		bool lret = self->eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osgDB::FieldReader & osgDB::FieldReaderIterator::getFieldReader()
	static int _bind_getFieldReader(lua_State *L) {
		if (!_lg_typecheck_getFieldReader(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FieldReader & osgDB::FieldReaderIterator::getFieldReader() function, expected prototype:\nosgDB::FieldReader & osgDB::FieldReaderIterator::getFieldReader()\nClass arguments details:\n");
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FieldReader & osgDB::FieldReaderIterator::getFieldReader()");
		}
		const osgDB::FieldReader* lret = &self->getFieldReader();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FieldReader >::push(L,lret,false);

		return 1;
	}

	// void osgDB::FieldReaderIterator::insert(int pos, osgDB::Field * field)
	static int _bind_insert_overload_1(lua_State *L) {
		if (!_lg_typecheck_insert_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::insert(int pos, osgDB::Field * field) function, expected prototype:\nvoid osgDB::FieldReaderIterator::insert(int pos, osgDB::Field * field)\nClass arguments details:\narg 2 ID = 7546407\n");
		}

		int pos=(int)lua_tointeger(L,2);
		osgDB::Field* field=(Luna< osgDB::Field >::check(L,3));

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::insert(int, osgDB::Field *)");
		}
		self->insert(pos, field);

		return 0;
	}

	// void osgDB::FieldReaderIterator::insert(int pos, const char * str)
	static int _bind_insert_overload_2(lua_State *L) {
		if (!_lg_typecheck_insert_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::insert(int pos, const char * str) function, expected prototype:\nvoid osgDB::FieldReaderIterator::insert(int pos, const char * str)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);
		const char * str=(const char *)lua_tostring(L,3);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::insert(int, const char *)");
		}
		self->insert(pos, str);

		return 0;
	}

	// Overload binder for osgDB::FieldReaderIterator::insert
	static int _bind_insert(lua_State *L) {
		if (_lg_typecheck_insert_overload_1(L)) return _bind_insert_overload_1(L);
		if (_lg_typecheck_insert_overload_2(L)) return _bind_insert_overload_2(L);

		luaL_error(L, "error in function insert, cannot match any of the overloads for function insert:\n  insert(int, osgDB::Field *)\n  insert(int, const char *)\n");
		return 0;
	}

	// osgDB::Field & osgDB::FieldReaderIterator::field(int pos)
	static int _bind_field(lua_State *L) {
		if (!_lg_typecheck_field(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Field & osgDB::FieldReaderIterator::field(int pos) function, expected prototype:\nosgDB::Field & osgDB::FieldReaderIterator::field(int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::Field & osgDB::FieldReaderIterator::field(int)");
		}
		const osgDB::Field* lret = &self->field(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Field >::push(L,lret,false);

		return 1;
	}

	// void osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock()
	static int _bind_advanceOverCurrentFieldOrBlock(lua_State *L) {
		if (!_lg_typecheck_advanceOverCurrentFieldOrBlock(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock() function, expected prototype:\nvoid osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock()\nClass arguments details:\n");
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::advanceOverCurrentFieldOrBlock()");
		}
		self->advanceOverCurrentFieldOrBlock();

		return 0;
	}

	// void osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock()
	static int _bind_advanceToEndOfCurrentBlock(lua_State *L) {
		if (!_lg_typecheck_advanceToEndOfCurrentBlock(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock() function, expected prototype:\nvoid osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock()\nClass arguments details:\n");
		}


		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::advanceToEndOfCurrentBlock()");
		}
		self->advanceToEndOfCurrentBlock();

		return 0;
	}

	// void osgDB::FieldReaderIterator::advanceToEndOfBlock(int noNestBrackets)
	static int _bind_advanceToEndOfBlock(lua_State *L) {
		if (!_lg_typecheck_advanceToEndOfBlock(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::FieldReaderIterator::advanceToEndOfBlock(int noNestBrackets) function, expected prototype:\nvoid osgDB::FieldReaderIterator::advanceToEndOfBlock(int noNestBrackets)\nClass arguments details:\n");
		}

		int noNestBrackets=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::FieldReaderIterator::advanceToEndOfBlock(int)");
		}
		self->advanceToEndOfBlock(noNestBrackets);

		return 0;
	}

	// bool osgDB::FieldReaderIterator::matchSequence(const char * str)
	static int _bind_matchSequence(lua_State *L) {
		if (!_lg_typecheck_matchSequence(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::matchSequence(const char * str) function, expected prototype:\nbool osgDB::FieldReaderIterator::matchSequence(const char * str)\nClass arguments details:\n");
		}

		const char * str=(const char *)lua_tostring(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::matchSequence(const char *)");
		}
		bool lret = self->matchSequence(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, std::string & value)
	static int _bind_readSequence_overload_1(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, std::string & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, std::string & value)\nClass arguments details:\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		std::string value(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, std::string &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, unsigned int & value)
	static int _bind_readSequence_overload_2(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, unsigned int & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, unsigned int & value)\nClass arguments details:\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		unsigned int value=(unsigned int)lua_tointeger(L,3);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, unsigned int &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, int & value)
	static int _bind_readSequence_overload_3(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, int & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, int & value)\nClass arguments details:\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		int value=(int)lua_tointeger(L,3);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, int &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, float & value)
	static int _bind_readSequence_overload_4(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, float & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, float & value)\nClass arguments details:\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		float value=(float)lua_tonumber(L,3);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, float &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2f & value)
	static int _bind_readSequence_overload_5(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2f & value)\nClass arguments details:\narg 2 ID = 92303173\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec2f* value_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec2f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec2f &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3f & value)
	static int _bind_readSequence_overload_6(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3f & value)\nClass arguments details:\narg 2 ID = 92303204\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec3f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec3f &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4f & value)
	static int _bind_readSequence_overload_7(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4f & value)\nClass arguments details:\narg 2 ID = 92303235\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec4f* value_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec4f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec4f &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2d & value)
	static int _bind_readSequence_overload_8(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec2d & value)\nClass arguments details:\narg 2 ID = 92303171\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec2d* value_ptr=(Luna< osg::Vec2d >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec2d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec2d &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3d & value)
	static int _bind_readSequence_overload_9(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_9(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec3d & value)\nClass arguments details:\narg 2 ID = 92303202\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec3d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec3d &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4d & value)
	static int _bind_readSequence_overload_10(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_10(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(const char * keyword, osg::Vec4d & value)\nClass arguments details:\narg 2 ID = 92303233\n");
		}

		const char * keyword=(const char *)lua_tostring(L,2);
		osg::Vec4d* value_ptr=(Luna< osg::Vec4d >::check(L,3));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec4d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(const char *, osg::Vec4d &)");
		}
		bool lret = self->readSequence(keyword, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(std::string & value)
	static int _bind_readSequence_overload_11(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_11(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(std::string & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(std::string & value)\nClass arguments details:\n");
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(std::string &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(unsigned int & value)
	static int _bind_readSequence_overload_12(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_12(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(unsigned int & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(unsigned int & value)\nClass arguments details:\n");
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(unsigned int &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(int & value)
	static int _bind_readSequence_overload_13(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_13(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(int & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(int & value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(int &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(float & value)
	static int _bind_readSequence_overload_14(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_14(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(float & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(float & value)\nClass arguments details:\n");
		}

		float value=(float)lua_tonumber(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(float &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec2f & value)
	static int _bind_readSequence_overload_15(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_15(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec2f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec2f & value)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		osg::Vec2f* value_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec2f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec2f &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec3f & value)
	static int _bind_readSequence_overload_16(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_16(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec3f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec3f & value)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec3f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec3f &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec4f & value)
	static int _bind_readSequence_overload_17(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_17(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec4f & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec4f & value)\nClass arguments details:\narg 1 ID = 92303235\n");
		}

		osg::Vec4f* value_ptr=(Luna< osg::Vec4f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec4f & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec4f &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec2d & value)
	static int _bind_readSequence_overload_18(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_18(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec2d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec2d & value)\nClass arguments details:\narg 1 ID = 92303171\n");
		}

		osg::Vec2d* value_ptr=(Luna< osg::Vec2d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec2d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec2d &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec3d & value)
	static int _bind_readSequence_overload_19(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_19(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec3d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec3d & value)\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec3d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec3d &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::FieldReaderIterator::readSequence(osg::Vec4d & value)
	static int _bind_readSequence_overload_20(lua_State *L) {
		if (!_lg_typecheck_readSequence_overload_20(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::FieldReaderIterator::readSequence(osg::Vec4d & value) function, expected prototype:\nbool osgDB::FieldReaderIterator::readSequence(osg::Vec4d & value)\nClass arguments details:\narg 1 ID = 92303233\n");
		}

		osg::Vec4d* value_ptr=(Luna< osg::Vec4d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::FieldReaderIterator::readSequence function");
		}
		osg::Vec4d & value=*value_ptr;

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::FieldReaderIterator::readSequence(osg::Vec4d &)");
		}
		bool lret = self->readSequence(value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgDB::FieldReaderIterator::readSequence
	static int _bind_readSequence(lua_State *L) {
		if (_lg_typecheck_readSequence_overload_1(L)) return _bind_readSequence_overload_1(L);
		if (_lg_typecheck_readSequence_overload_2(L)) return _bind_readSequence_overload_2(L);
		if (_lg_typecheck_readSequence_overload_3(L)) return _bind_readSequence_overload_3(L);
		if (_lg_typecheck_readSequence_overload_4(L)) return _bind_readSequence_overload_4(L);
		if (_lg_typecheck_readSequence_overload_5(L)) return _bind_readSequence_overload_5(L);
		if (_lg_typecheck_readSequence_overload_6(L)) return _bind_readSequence_overload_6(L);
		if (_lg_typecheck_readSequence_overload_7(L)) return _bind_readSequence_overload_7(L);
		if (_lg_typecheck_readSequence_overload_8(L)) return _bind_readSequence_overload_8(L);
		if (_lg_typecheck_readSequence_overload_9(L)) return _bind_readSequence_overload_9(L);
		if (_lg_typecheck_readSequence_overload_10(L)) return _bind_readSequence_overload_10(L);
		if (_lg_typecheck_readSequence_overload_11(L)) return _bind_readSequence_overload_11(L);
		if (_lg_typecheck_readSequence_overload_12(L)) return _bind_readSequence_overload_12(L);
		if (_lg_typecheck_readSequence_overload_13(L)) return _bind_readSequence_overload_13(L);
		if (_lg_typecheck_readSequence_overload_14(L)) return _bind_readSequence_overload_14(L);
		if (_lg_typecheck_readSequence_overload_15(L)) return _bind_readSequence_overload_15(L);
		if (_lg_typecheck_readSequence_overload_16(L)) return _bind_readSequence_overload_16(L);
		if (_lg_typecheck_readSequence_overload_17(L)) return _bind_readSequence_overload_17(L);
		if (_lg_typecheck_readSequence_overload_18(L)) return _bind_readSequence_overload_18(L);
		if (_lg_typecheck_readSequence_overload_19(L)) return _bind_readSequence_overload_19(L);
		if (_lg_typecheck_readSequence_overload_20(L)) return _bind_readSequence_overload_20(L);

		luaL_error(L, "error in function readSequence, cannot match any of the overloads for function readSequence:\n  readSequence(const char *, std::string &)\n  readSequence(const char *, unsigned int &)\n  readSequence(const char *, int &)\n  readSequence(const char *, float &)\n  readSequence(const char *, osg::Vec2f &)\n  readSequence(const char *, osg::Vec3f &)\n  readSequence(const char *, osg::Vec4f &)\n  readSequence(const char *, osg::Vec2d &)\n  readSequence(const char *, osg::Vec3d &)\n  readSequence(const char *, osg::Vec4d &)\n  readSequence(std::string &)\n  readSequence(unsigned int &)\n  readSequence(int &)\n  readSequence(float &)\n  readSequence(osg::Vec2f &)\n  readSequence(osg::Vec3f &)\n  readSequence(osg::Vec4f &)\n  readSequence(osg::Vec2d &)\n  readSequence(osg::Vec3d &)\n  readSequence(osg::Vec4d &)\n");
		return 0;
	}


	// Operator binds:
	// osgDB::Field & osgDB::FieldReaderIterator::operator[](int pos)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::Field & osgDB::FieldReaderIterator::operator[](int pos) function, expected prototype:\nosgDB::Field & osgDB::FieldReaderIterator::operator[](int pos)\nClass arguments details:\n");
		}

		int pos=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::Field & osgDB::FieldReaderIterator::operator[](int)");
		}
		const osgDB::Field* lret = &self->operator[](pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::Field >::push(L,lret,false);

		return 1;
	}

	// osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator+=(int no)
	static int _bind_op_add(lua_State *L) {
		if (!_lg_typecheck_op_add(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator+=(int no) function, expected prototype:\nosgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator+=(int no)\nClass arguments details:\n");
		}

		int no=(int)lua_tointeger(L,2);

		osgDB::FieldReaderIterator* self=(Luna< osgDB::FieldReaderIterator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::FieldReaderIterator & osgDB::FieldReaderIterator::operator+=(int)");
		}
		const osgDB::FieldReaderIterator* lret = &self->operator+=(no);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::FieldReaderIterator >::push(L,lret,false);

		return 1;
	}


};

osgDB::FieldReaderIterator* LunaTraits< osgDB::FieldReaderIterator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_FieldReaderIterator::_bind_ctor(L);
}

void LunaTraits< osgDB::FieldReaderIterator >::_bind_dtor(osgDB::FieldReaderIterator* obj) {
	delete obj;
}

const char LunaTraits< osgDB::FieldReaderIterator >::className[] = "FieldReaderIterator";
const char LunaTraits< osgDB::FieldReaderIterator >::fullName[] = "osgDB::FieldReaderIterator";
const char LunaTraits< osgDB::FieldReaderIterator >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FieldReaderIterator >::parents[] = {0};
const int LunaTraits< osgDB::FieldReaderIterator >::hash = 2696163;
const int LunaTraits< osgDB::FieldReaderIterator >::uniqueIDs[] = {2696163,0};

luna_RegType LunaTraits< osgDB::FieldReaderIterator >::methods[] = {
	{"detach", &luna_wrapper_osgDB_FieldReaderIterator::_bind_detach},
	{"eof", &luna_wrapper_osgDB_FieldReaderIterator::_bind_eof},
	{"getFieldReader", &luna_wrapper_osgDB_FieldReaderIterator::_bind_getFieldReader},
	{"insert", &luna_wrapper_osgDB_FieldReaderIterator::_bind_insert},
	{"field", &luna_wrapper_osgDB_FieldReaderIterator::_bind_field},
	{"advanceOverCurrentFieldOrBlock", &luna_wrapper_osgDB_FieldReaderIterator::_bind_advanceOverCurrentFieldOrBlock},
	{"advanceToEndOfCurrentBlock", &luna_wrapper_osgDB_FieldReaderIterator::_bind_advanceToEndOfCurrentBlock},
	{"advanceToEndOfBlock", &luna_wrapper_osgDB_FieldReaderIterator::_bind_advanceToEndOfBlock},
	{"matchSequence", &luna_wrapper_osgDB_FieldReaderIterator::_bind_matchSequence},
	{"readSequence", &luna_wrapper_osgDB_FieldReaderIterator::_bind_readSequence},
	{"op_index", &luna_wrapper_osgDB_FieldReaderIterator::_bind_op_index},
	{"op_add", &luna_wrapper_osgDB_FieldReaderIterator::_bind_op_add},
	{"dynCast", &luna_wrapper_osgDB_FieldReaderIterator::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_FieldReaderIterator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FieldReaderIterator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FieldReaderIterator >::enumValues[] = {
	{"MINIMUM_FIELD_READER_QUEUE_SIZE", osgDB::FieldReaderIterator::MINIMUM_FIELD_READER_QUEUE_SIZE},
	{0,0}
};


