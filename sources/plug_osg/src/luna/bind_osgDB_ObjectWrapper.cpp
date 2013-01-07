#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ObjectWrapper.h>

class luna_wrapper_osgDB_ObjectWrapper {
public:
	typedef Luna< osgDB::ObjectWrapper > luna_t;

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
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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
		//osgDB::ObjectWrapper* ptr= dynamic_cast< osgDB::ObjectWrapper* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ObjectWrapper* ptr= luna_caster< osg::Referenced, osgDB::ObjectWrapper >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ObjectWrapper >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,1)) ) ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2)) ) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setUpdatedVersion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getProto(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAssociates(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addSerializer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_markSerializerAsRemoved(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSerializer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addFinishedObjectReadCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_read(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47918182) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_write(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,70071506) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_readSchema(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26072480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92299338) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_writeSchema(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26072480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92299338) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_resetSchema(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ObjectWrapper::ObjectWrapper(osg::Object * proto, const std::string & name, const std::string & associates)
	static osgDB::ObjectWrapper* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ObjectWrapper::ObjectWrapper(osg::Object * proto, const std::string & name, const std::string & associates) function, expected prototype:\nosgDB::ObjectWrapper::ObjectWrapper(osg::Object * proto, const std::string & name, const std::string & associates)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Object* proto=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,1));
		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		std::string associates(lua_tostring(L,3),lua_objlen(L,3));

		return new osgDB::ObjectWrapper(proto, name, associates);
	}

	// osgDB::ObjectWrapper::ObjectWrapper(lua_Table * data, osg::Object * proto, const std::string & name, const std::string & associates)
	static osgDB::ObjectWrapper* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::ObjectWrapper::ObjectWrapper(lua_Table * data, osg::Object * proto, const std::string & name, const std::string & associates) function, expected prototype:\nosgDB::ObjectWrapper::ObjectWrapper(lua_Table * data, osg::Object * proto, const std::string & name, const std::string & associates)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::Object* proto=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));
		std::string name(lua_tostring(L,3),lua_objlen(L,3));
		std::string associates(lua_tostring(L,4),lua_objlen(L,4));

		return new wrapper_osgDB_ObjectWrapper(L,NULL, proto, name, associates);
	}

	// Overload binder for osgDB::ObjectWrapper::ObjectWrapper
	static osgDB::ObjectWrapper* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ObjectWrapper, cannot match any of the overloads for function ObjectWrapper:\n  ObjectWrapper(osg::Object *, const std::string &, const std::string &)\n  ObjectWrapper(lua_Table *, osg::Object *, const std::string &, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::ObjectWrapper::setUpdatedVersion(int ver)
	static int _bind_setUpdatedVersion(lua_State *L) {
		if (!_lg_typecheck_setUpdatedVersion(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapper::setUpdatedVersion(int ver) function, expected prototype:\nvoid osgDB::ObjectWrapper::setUpdatedVersion(int ver)\nClass arguments details:\n");
		}

		int ver=(int)lua_tointeger(L,2);

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapper::setUpdatedVersion(int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setUpdatedVersion(ver);

		return 0;
	}

	// const osg::Object * osgDB::ObjectWrapper::getProto() const
	static int _bind_getProto(lua_State *L) {
		if (!_lg_typecheck_getProto(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Object * osgDB::ObjectWrapper::getProto() const function, expected prototype:\nconst osg::Object * osgDB::ObjectWrapper::getProto() const\nClass arguments details:\n");
		}


		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Object * osgDB::ObjectWrapper::getProto() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Object * lret = self->getProto();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// const std::string & osgDB::ObjectWrapper::getName() const
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::ObjectWrapper::getName() const function, expected prototype:\nconst std::string & osgDB::ObjectWrapper::getName() const\nClass arguments details:\n");
		}


		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osgDB::ObjectWrapper::getName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const std::string & lret = self->getName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const osgDB::StringList & osgDB::ObjectWrapper::getAssociates() const
	static int _bind_getAssociates(lua_State *L) {
		if (!_lg_typecheck_getAssociates(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgDB::StringList & osgDB::ObjectWrapper::getAssociates() const function, expected prototype:\nconst osgDB::StringList & osgDB::ObjectWrapper::getAssociates() const\nClass arguments details:\n");
		}


		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgDB::StringList & osgDB::ObjectWrapper::getAssociates() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgDB::StringList* lret = &self->getAssociates();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::StringList >::push(L,lret,false);

		return 1;
	}

	// void osgDB::ObjectWrapper::addSerializer(osgDB::BaseSerializer * s, osgDB::BaseSerializer::Type t = osgDB::BaseSerializer::RW_UNDEFINED)
	static int _bind_addSerializer(lua_State *L) {
		if (!_lg_typecheck_addSerializer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapper::addSerializer(osgDB::BaseSerializer * s, osgDB::BaseSerializer::Type t = osgDB::BaseSerializer::RW_UNDEFINED) function, expected prototype:\nvoid osgDB::ObjectWrapper::addSerializer(osgDB::BaseSerializer * s, osgDB::BaseSerializer::Type t = osgDB::BaseSerializer::RW_UNDEFINED)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osgDB::BaseSerializer* s=(Luna< osg::Referenced >::checkSubType< osgDB::BaseSerializer >(L,2));
		osgDB::BaseSerializer::Type t=luatop>2 ? (osgDB::BaseSerializer::Type)lua_tointeger(L,3) : osgDB::BaseSerializer::RW_UNDEFINED;

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapper::addSerializer(osgDB::BaseSerializer *, osgDB::BaseSerializer::Type). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addSerializer(s, t);

		return 0;
	}

	// void osgDB::ObjectWrapper::markSerializerAsRemoved(const std::string & name)
	static int _bind_markSerializerAsRemoved(lua_State *L) {
		if (!_lg_typecheck_markSerializerAsRemoved(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapper::markSerializerAsRemoved(const std::string & name) function, expected prototype:\nvoid osgDB::ObjectWrapper::markSerializerAsRemoved(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapper::markSerializerAsRemoved(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->markSerializerAsRemoved(name);

		return 0;
	}

	// osgDB::BaseSerializer * osgDB::ObjectWrapper::getSerializer(const std::string & name)
	static int _bind_getSerializer(lua_State *L) {
		if (!_lg_typecheck_getSerializer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgDB::BaseSerializer * osgDB::ObjectWrapper::getSerializer(const std::string & name) function, expected prototype:\nosgDB::BaseSerializer * osgDB::ObjectWrapper::getSerializer(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgDB::BaseSerializer * osgDB::ObjectWrapper::getSerializer(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osgDB::BaseSerializer * lret = self->getSerializer(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::BaseSerializer >::push(L,lret,false);

		return 1;
	}

	// void osgDB::ObjectWrapper::addFinishedObjectReadCallback(osgDB::FinishedObjectReadCallback * forc)
	static int _bind_addFinishedObjectReadCallback(lua_State *L) {
		if (!_lg_typecheck_addFinishedObjectReadCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapper::addFinishedObjectReadCallback(osgDB::FinishedObjectReadCallback * forc) function, expected prototype:\nvoid osgDB::ObjectWrapper::addFinishedObjectReadCallback(osgDB::FinishedObjectReadCallback * forc)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgDB::FinishedObjectReadCallback* forc=(Luna< osg::Referenced >::checkSubType< osgDB::FinishedObjectReadCallback >(L,2));

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapper::addFinishedObjectReadCallback(osgDB::FinishedObjectReadCallback *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->addFinishedObjectReadCallback(forc);

		return 0;
	}

	// bool osgDB::ObjectWrapper::read(osgDB::InputStream & arg1, osg::Object & arg2)
	static int _bind_read(lua_State *L) {
		if (!_lg_typecheck_read(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ObjectWrapper::read(osgDB::InputStream & arg1, osg::Object & arg2) function, expected prototype:\nbool osgDB::ObjectWrapper::read(osgDB::InputStream & arg1, osg::Object & arg2)\nClass arguments details:\narg 1 ID = 47918182\narg 2 ID = 50169651\n");
		}

		osgDB::InputStream* _arg1_ptr=(Luna< osgDB::InputStream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ObjectWrapper::read function");
		}
		osgDB::InputStream & _arg1=*_arg1_ptr;
		osg::Object* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ObjectWrapper::read function");
		}
		osg::Object & _arg2=*_arg2_ptr;

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ObjectWrapper::read(osgDB::InputStream &, osg::Object &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->read(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ObjectWrapper::write(osgDB::OutputStream & arg1, const osg::Object & arg2)
	static int _bind_write(lua_State *L) {
		if (!_lg_typecheck_write(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ObjectWrapper::write(osgDB::OutputStream & arg1, const osg::Object & arg2) function, expected prototype:\nbool osgDB::ObjectWrapper::write(osgDB::OutputStream & arg1, const osg::Object & arg2)\nClass arguments details:\narg 1 ID = 70071506\narg 2 ID = 50169651\n");
		}

		osgDB::OutputStream* _arg1_ptr=(Luna< osgDB::OutputStream >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::ObjectWrapper::write function");
		}
		osgDB::OutputStream & _arg1=*_arg1_ptr;
		const osg::Object* _arg2_ptr=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,3));
		if( !_arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg2 in osgDB::ObjectWrapper::write function");
		}
		const osg::Object & _arg2=*_arg2_ptr;

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ObjectWrapper::write(osgDB::OutputStream &, const osg::Object &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->write(_arg1, _arg2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::ObjectWrapper::readSchema(const osgDB::StringList & properties, const std::vector< int > & types)
	static int _bind_readSchema(lua_State *L) {
		if (!_lg_typecheck_readSchema(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgDB::ObjectWrapper::readSchema(const osgDB::StringList & properties, const std::vector< int > & types) function, expected prototype:\nbool osgDB::ObjectWrapper::readSchema(const osgDB::StringList & properties, const std::vector< int > & types)\nClass arguments details:\narg 1 ID = 26072480\narg 2 ID = [unknown]\n");
		}

		const osgDB::StringList* properties_ptr=(Luna< osgDB::StringList >::check(L,2));
		if( !properties_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg properties in osgDB::ObjectWrapper::readSchema function");
		}
		const osgDB::StringList & properties=*properties_ptr;
		const std::vector< int >* types_ptr=(Luna< std::vector< int > >::check(L,3));
		if( !types_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg types in osgDB::ObjectWrapper::readSchema function");
		}
		const std::vector< int > & types=*types_ptr;

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgDB::ObjectWrapper::readSchema(const osgDB::StringList &, const std::vector< int > &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->readSchema(properties, types);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::ObjectWrapper::writeSchema(osgDB::StringList & properties, std::vector< int > & types)
	static int _bind_writeSchema(lua_State *L) {
		if (!_lg_typecheck_writeSchema(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapper::writeSchema(osgDB::StringList & properties, std::vector< int > & types) function, expected prototype:\nvoid osgDB::ObjectWrapper::writeSchema(osgDB::StringList & properties, std::vector< int > & types)\nClass arguments details:\narg 1 ID = 26072480\narg 2 ID = [unknown]\n");
		}

		osgDB::StringList* properties_ptr=(Luna< osgDB::StringList >::check(L,2));
		if( !properties_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg properties in osgDB::ObjectWrapper::writeSchema function");
		}
		osgDB::StringList & properties=*properties_ptr;
		std::vector< int >* types_ptr=(Luna< std::vector< int > >::check(L,3));
		if( !types_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg types in osgDB::ObjectWrapper::writeSchema function");
		}
		std::vector< int > & types=*types_ptr;

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapper::writeSchema(osgDB::StringList &, std::vector< int > &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->writeSchema(properties, types);

		return 0;
	}

	// void osgDB::ObjectWrapper::resetSchema()
	static int _bind_resetSchema(lua_State *L) {
		if (!_lg_typecheck_resetSchema(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapper::resetSchema() function, expected prototype:\nvoid osgDB::ObjectWrapper::resetSchema()\nClass arguments details:\n");
		}


		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapper::resetSchema(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->resetSchema();

		return 0;
	}

	// void osgDB::ObjectWrapper::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapper::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ObjectWrapper::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n");
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ObjectWrapper* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapper::base_setThreadSafeRefUnref(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->ObjectWrapper::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::ObjectWrapper* LunaTraits< osgDB::ObjectWrapper >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ObjectWrapper::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgDB::ObjectWrapper >::_bind_dtor(osgDB::ObjectWrapper* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ObjectWrapper >::className[] = "ObjectWrapper";
const char LunaTraits< osgDB::ObjectWrapper >::fullName[] = "osgDB::ObjectWrapper";
const char LunaTraits< osgDB::ObjectWrapper >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectWrapper >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ObjectWrapper >::hash = 93921320;
const int LunaTraits< osgDB::ObjectWrapper >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ObjectWrapper >::methods[] = {
	{"setUpdatedVersion", &luna_wrapper_osgDB_ObjectWrapper::_bind_setUpdatedVersion},
	{"getProto", &luna_wrapper_osgDB_ObjectWrapper::_bind_getProto},
	{"getName", &luna_wrapper_osgDB_ObjectWrapper::_bind_getName},
	{"getAssociates", &luna_wrapper_osgDB_ObjectWrapper::_bind_getAssociates},
	{"addSerializer", &luna_wrapper_osgDB_ObjectWrapper::_bind_addSerializer},
	{"markSerializerAsRemoved", &luna_wrapper_osgDB_ObjectWrapper::_bind_markSerializerAsRemoved},
	{"getSerializer", &luna_wrapper_osgDB_ObjectWrapper::_bind_getSerializer},
	{"addFinishedObjectReadCallback", &luna_wrapper_osgDB_ObjectWrapper::_bind_addFinishedObjectReadCallback},
	{"read", &luna_wrapper_osgDB_ObjectWrapper::_bind_read},
	{"write", &luna_wrapper_osgDB_ObjectWrapper::_bind_write},
	{"readSchema", &luna_wrapper_osgDB_ObjectWrapper::_bind_readSchema},
	{"writeSchema", &luna_wrapper_osgDB_ObjectWrapper::_bind_writeSchema},
	{"resetSchema", &luna_wrapper_osgDB_ObjectWrapper::_bind_resetSchema},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ObjectWrapper::_bind_base_setThreadSafeRefUnref},
	{"__eq", &luna_wrapper_osgDB_ObjectWrapper::_bind___eq},
	{"getTable", &luna_wrapper_osgDB_ObjectWrapper::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapper >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ObjectWrapper::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapper >::enumValues[] = {
	{0,0}
};


