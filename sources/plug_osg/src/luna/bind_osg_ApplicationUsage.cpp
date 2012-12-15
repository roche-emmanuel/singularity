#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ApplicationUsage.h>

class luna_wrapper_osg_ApplicationUsage {
public:
	typedef Luna< osg::ApplicationUsage > luna_t;

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
		//osg::ApplicationUsage* ptr= dynamic_cast< osg::ApplicationUsage* >(Luna< osg::Referenced >::check(L,1));
		osg::ApplicationUsage* ptr= luna_caster< osg::Referenced, osg::ApplicationUsage >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::ApplicationUsage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_instance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setApplicationName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getApplicationName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addUsageExplanation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCommandLineUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCommandLineUsage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addCommandLineOption(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCommandLineOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31149124) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCommandLineOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCommandLineOptionsDefaults(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31149124) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCommandLineOptionsDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addEnvironmentalVariable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		if( luatop>3 && lua_isstring(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnvironmentalVariables(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31149124) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnvironmentalVariables(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnvironmentalVariablesDefaults(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31149124) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnvironmentalVariablesDefaults(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addKeyboardMouseBinding(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setKeyboardMouseBindings(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31149124) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getKeyboardMouseBindings(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFormattedString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,3,31149124) ) return false;
		if( luatop>3 && (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,31149124) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ApplicationUsage::ApplicationUsage()
	static osg::ApplicationUsage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ApplicationUsage::ApplicationUsage() function, expected prototype:\nosg::ApplicationUsage::ApplicationUsage()\nClass arguments details:\n");
		}


		return new osg::ApplicationUsage();
	}

	// osg::ApplicationUsage::ApplicationUsage(const std::string & commandLineUsage)
	static osg::ApplicationUsage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ApplicationUsage::ApplicationUsage(const std::string & commandLineUsage) function, expected prototype:\nosg::ApplicationUsage::ApplicationUsage(const std::string & commandLineUsage)\nClass arguments details:\n");
		}

		std::string commandLineUsage(lua_tostring(L,1),lua_objlen(L,1));

		return new osg::ApplicationUsage(commandLineUsage);
	}

	// osg::ApplicationUsage::ApplicationUsage(lua_Table * data)
	static osg::ApplicationUsage* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ApplicationUsage::ApplicationUsage(lua_Table * data) function, expected prototype:\nosg::ApplicationUsage::ApplicationUsage(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_ApplicationUsage(L,NULL);
	}

	// osg::ApplicationUsage::ApplicationUsage(lua_Table * data, const std::string & commandLineUsage)
	static osg::ApplicationUsage* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::ApplicationUsage::ApplicationUsage(lua_Table * data, const std::string & commandLineUsage) function, expected prototype:\nosg::ApplicationUsage::ApplicationUsage(lua_Table * data, const std::string & commandLineUsage)\nClass arguments details:\n");
		}

		std::string commandLineUsage(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_osg_ApplicationUsage(L,NULL, commandLineUsage);
	}

	// Overload binder for osg::ApplicationUsage::ApplicationUsage
	static osg::ApplicationUsage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ApplicationUsage, cannot match any of the overloads for function ApplicationUsage:\n  ApplicationUsage()\n  ApplicationUsage(const std::string &)\n  ApplicationUsage(lua_Table *)\n  ApplicationUsage(lua_Table *, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// static osg::ApplicationUsage * osg::ApplicationUsage::instance()
	static int _bind_instance(lua_State *L) {
		if (!_lg_typecheck_instance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ApplicationUsage * osg::ApplicationUsage::instance() function, expected prototype:\nstatic osg::ApplicationUsage * osg::ApplicationUsage::instance()\nClass arguments details:\n");
		}


		osg::ApplicationUsage * lret = osg::ApplicationUsage::instance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage >::push(L,lret,false);

		return 1;
	}

	// void osg::ApplicationUsage::setApplicationName(const std::string & name)
	static int _bind_setApplicationName(lua_State *L) {
		if (!_lg_typecheck_setApplicationName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::setApplicationName(const std::string & name) function, expected prototype:\nvoid osg::ApplicationUsage::setApplicationName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::setApplicationName(const std::string &)");
		}
		self->setApplicationName(name);

		return 0;
	}

	// const std::string & osg::ApplicationUsage::getApplicationName() const
	static int _bind_getApplicationName(lua_State *L) {
		if (!_lg_typecheck_getApplicationName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::ApplicationUsage::getApplicationName() const function, expected prototype:\nconst std::string & osg::ApplicationUsage::getApplicationName() const\nClass arguments details:\n");
		}


		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::ApplicationUsage::getApplicationName() const");
		}
		const std::string & lret = self->getApplicationName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::ApplicationUsage::setDescription(const std::string & desc)
	static int _bind_setDescription(lua_State *L) {
		if (!_lg_typecheck_setDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::setDescription(const std::string & desc) function, expected prototype:\nvoid osg::ApplicationUsage::setDescription(const std::string & desc)\nClass arguments details:\n");
		}

		std::string desc(lua_tostring(L,2),lua_objlen(L,2));

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::setDescription(const std::string &)");
		}
		self->setDescription(desc);

		return 0;
	}

	// const std::string & osg::ApplicationUsage::getDescription() const
	static int _bind_getDescription(lua_State *L) {
		if (!_lg_typecheck_getDescription(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::ApplicationUsage::getDescription() const function, expected prototype:\nconst std::string & osg::ApplicationUsage::getDescription() const\nClass arguments details:\n");
		}


		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::ApplicationUsage::getDescription() const");
		}
		const std::string & lret = self->getDescription();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::ApplicationUsage::addUsageExplanation(osg::ApplicationUsage::Type type, const std::string & option, const std::string & explanation)
	static int _bind_addUsageExplanation(lua_State *L) {
		if (!_lg_typecheck_addUsageExplanation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::addUsageExplanation(osg::ApplicationUsage::Type type, const std::string & option, const std::string & explanation) function, expected prototype:\nvoid osg::ApplicationUsage::addUsageExplanation(osg::ApplicationUsage::Type type, const std::string & option, const std::string & explanation)\nClass arguments details:\n");
		}

		osg::ApplicationUsage::Type type=(osg::ApplicationUsage::Type)lua_tointeger(L,2);
		std::string option(lua_tostring(L,3),lua_objlen(L,3));
		std::string explanation(lua_tostring(L,4),lua_objlen(L,4));

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::addUsageExplanation(osg::ApplicationUsage::Type, const std::string &, const std::string &)");
		}
		self->addUsageExplanation(type, option, explanation);

		return 0;
	}

	// void osg::ApplicationUsage::setCommandLineUsage(const std::string & explanation)
	static int _bind_setCommandLineUsage(lua_State *L) {
		if (!_lg_typecheck_setCommandLineUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::setCommandLineUsage(const std::string & explanation) function, expected prototype:\nvoid osg::ApplicationUsage::setCommandLineUsage(const std::string & explanation)\nClass arguments details:\n");
		}

		std::string explanation(lua_tostring(L,2),lua_objlen(L,2));

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::setCommandLineUsage(const std::string &)");
		}
		self->setCommandLineUsage(explanation);

		return 0;
	}

	// const std::string & osg::ApplicationUsage::getCommandLineUsage() const
	static int _bind_getCommandLineUsage(lua_State *L) {
		if (!_lg_typecheck_getCommandLineUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::ApplicationUsage::getCommandLineUsage() const function, expected prototype:\nconst std::string & osg::ApplicationUsage::getCommandLineUsage() const\nClass arguments details:\n");
		}


		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::ApplicationUsage::getCommandLineUsage() const");
		}
		const std::string & lret = self->getCommandLineUsage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::ApplicationUsage::addCommandLineOption(const std::string & option, const std::string & explanation, const std::string & defaultValue = "")
	static int _bind_addCommandLineOption(lua_State *L) {
		if (!_lg_typecheck_addCommandLineOption(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::addCommandLineOption(const std::string & option, const std::string & explanation, const std::string & defaultValue = \"\") function, expected prototype:\nvoid osg::ApplicationUsage::addCommandLineOption(const std::string & option, const std::string & explanation, const std::string & defaultValue = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string option(lua_tostring(L,2),lua_objlen(L,2));
		std::string explanation(lua_tostring(L,3),lua_objlen(L,3));
		std::string defaultValue(lua_tostring(L,4),lua_objlen(L,4));

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::addCommandLineOption(const std::string &, const std::string &, const std::string &)");
		}
		self->addCommandLineOption(option, explanation, defaultValue);

		return 0;
	}

	// void osg::ApplicationUsage::setCommandLineOptions(const osg::ApplicationUsage::UsageMap & usageMap)
	static int _bind_setCommandLineOptions(lua_State *L) {
		if (!_lg_typecheck_setCommandLineOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::setCommandLineOptions(const osg::ApplicationUsage::UsageMap & usageMap) function, expected prototype:\nvoid osg::ApplicationUsage::setCommandLineOptions(const osg::ApplicationUsage::UsageMap & usageMap)\nClass arguments details:\narg 1 ID = 31149124\n");
		}

		const osg::ApplicationUsage::UsageMap* usageMap_ptr=(Luna< osg::ApplicationUsage::UsageMap >::check(L,2));
		if( !usageMap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usageMap in osg::ApplicationUsage::setCommandLineOptions function");
		}
		const osg::ApplicationUsage::UsageMap & usageMap=*usageMap_ptr;

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::setCommandLineOptions(const osg::ApplicationUsage::UsageMap &)");
		}
		self->setCommandLineOptions(usageMap);

		return 0;
	}

	// const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getCommandLineOptions() const
	static int _bind_getCommandLineOptions(lua_State *L) {
		if (!_lg_typecheck_getCommandLineOptions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getCommandLineOptions() const function, expected prototype:\nconst osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getCommandLineOptions() const\nClass arguments details:\n");
		}


		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getCommandLineOptions() const");
		}
		const osg::ApplicationUsage::UsageMap* lret = &self->getCommandLineOptions();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage::UsageMap >::push(L,lret,false);

		return 1;
	}

	// void osg::ApplicationUsage::setCommandLineOptionsDefaults(const osg::ApplicationUsage::UsageMap & usageMap)
	static int _bind_setCommandLineOptionsDefaults(lua_State *L) {
		if (!_lg_typecheck_setCommandLineOptionsDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::setCommandLineOptionsDefaults(const osg::ApplicationUsage::UsageMap & usageMap) function, expected prototype:\nvoid osg::ApplicationUsage::setCommandLineOptionsDefaults(const osg::ApplicationUsage::UsageMap & usageMap)\nClass arguments details:\narg 1 ID = 31149124\n");
		}

		const osg::ApplicationUsage::UsageMap* usageMap_ptr=(Luna< osg::ApplicationUsage::UsageMap >::check(L,2));
		if( !usageMap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usageMap in osg::ApplicationUsage::setCommandLineOptionsDefaults function");
		}
		const osg::ApplicationUsage::UsageMap & usageMap=*usageMap_ptr;

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::setCommandLineOptionsDefaults(const osg::ApplicationUsage::UsageMap &)");
		}
		self->setCommandLineOptionsDefaults(usageMap);

		return 0;
	}

	// const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getCommandLineOptionsDefaults() const
	static int _bind_getCommandLineOptionsDefaults(lua_State *L) {
		if (!_lg_typecheck_getCommandLineOptionsDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getCommandLineOptionsDefaults() const function, expected prototype:\nconst osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getCommandLineOptionsDefaults() const\nClass arguments details:\n");
		}


		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getCommandLineOptionsDefaults() const");
		}
		const osg::ApplicationUsage::UsageMap* lret = &self->getCommandLineOptionsDefaults();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage::UsageMap >::push(L,lret,false);

		return 1;
	}

	// void osg::ApplicationUsage::addEnvironmentalVariable(const std::string & option, const std::string & explanation, const std::string & defaultValue = "")
	static int _bind_addEnvironmentalVariable(lua_State *L) {
		if (!_lg_typecheck_addEnvironmentalVariable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::addEnvironmentalVariable(const std::string & option, const std::string & explanation, const std::string & defaultValue = \"\") function, expected prototype:\nvoid osg::ApplicationUsage::addEnvironmentalVariable(const std::string & option, const std::string & explanation, const std::string & defaultValue = \"\")\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		std::string option(lua_tostring(L,2),lua_objlen(L,2));
		std::string explanation(lua_tostring(L,3),lua_objlen(L,3));
		std::string defaultValue(lua_tostring(L,4),lua_objlen(L,4));

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::addEnvironmentalVariable(const std::string &, const std::string &, const std::string &)");
		}
		self->addEnvironmentalVariable(option, explanation, defaultValue);

		return 0;
	}

	// void osg::ApplicationUsage::setEnvironmentalVariables(const osg::ApplicationUsage::UsageMap & usageMap)
	static int _bind_setEnvironmentalVariables(lua_State *L) {
		if (!_lg_typecheck_setEnvironmentalVariables(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::setEnvironmentalVariables(const osg::ApplicationUsage::UsageMap & usageMap) function, expected prototype:\nvoid osg::ApplicationUsage::setEnvironmentalVariables(const osg::ApplicationUsage::UsageMap & usageMap)\nClass arguments details:\narg 1 ID = 31149124\n");
		}

		const osg::ApplicationUsage::UsageMap* usageMap_ptr=(Luna< osg::ApplicationUsage::UsageMap >::check(L,2));
		if( !usageMap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usageMap in osg::ApplicationUsage::setEnvironmentalVariables function");
		}
		const osg::ApplicationUsage::UsageMap & usageMap=*usageMap_ptr;

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::setEnvironmentalVariables(const osg::ApplicationUsage::UsageMap &)");
		}
		self->setEnvironmentalVariables(usageMap);

		return 0;
	}

	// const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getEnvironmentalVariables() const
	static int _bind_getEnvironmentalVariables(lua_State *L) {
		if (!_lg_typecheck_getEnvironmentalVariables(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getEnvironmentalVariables() const function, expected prototype:\nconst osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getEnvironmentalVariables() const\nClass arguments details:\n");
		}


		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getEnvironmentalVariables() const");
		}
		const osg::ApplicationUsage::UsageMap* lret = &self->getEnvironmentalVariables();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage::UsageMap >::push(L,lret,false);

		return 1;
	}

	// void osg::ApplicationUsage::setEnvironmentalVariablesDefaults(const osg::ApplicationUsage::UsageMap & usageMap)
	static int _bind_setEnvironmentalVariablesDefaults(lua_State *L) {
		if (!_lg_typecheck_setEnvironmentalVariablesDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::setEnvironmentalVariablesDefaults(const osg::ApplicationUsage::UsageMap & usageMap) function, expected prototype:\nvoid osg::ApplicationUsage::setEnvironmentalVariablesDefaults(const osg::ApplicationUsage::UsageMap & usageMap)\nClass arguments details:\narg 1 ID = 31149124\n");
		}

		const osg::ApplicationUsage::UsageMap* usageMap_ptr=(Luna< osg::ApplicationUsage::UsageMap >::check(L,2));
		if( !usageMap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usageMap in osg::ApplicationUsage::setEnvironmentalVariablesDefaults function");
		}
		const osg::ApplicationUsage::UsageMap & usageMap=*usageMap_ptr;

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::setEnvironmentalVariablesDefaults(const osg::ApplicationUsage::UsageMap &)");
		}
		self->setEnvironmentalVariablesDefaults(usageMap);

		return 0;
	}

	// const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getEnvironmentalVariablesDefaults() const
	static int _bind_getEnvironmentalVariablesDefaults(lua_State *L) {
		if (!_lg_typecheck_getEnvironmentalVariablesDefaults(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getEnvironmentalVariablesDefaults() const function, expected prototype:\nconst osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getEnvironmentalVariablesDefaults() const\nClass arguments details:\n");
		}


		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getEnvironmentalVariablesDefaults() const");
		}
		const osg::ApplicationUsage::UsageMap* lret = &self->getEnvironmentalVariablesDefaults();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage::UsageMap >::push(L,lret,false);

		return 1;
	}

	// void osg::ApplicationUsage::addKeyboardMouseBinding(const std::string & option, const std::string & explanation)
	static int _bind_addKeyboardMouseBinding(lua_State *L) {
		if (!_lg_typecheck_addKeyboardMouseBinding(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::addKeyboardMouseBinding(const std::string & option, const std::string & explanation) function, expected prototype:\nvoid osg::ApplicationUsage::addKeyboardMouseBinding(const std::string & option, const std::string & explanation)\nClass arguments details:\n");
		}

		std::string option(lua_tostring(L,2),lua_objlen(L,2));
		std::string explanation(lua_tostring(L,3),lua_objlen(L,3));

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::addKeyboardMouseBinding(const std::string &, const std::string &)");
		}
		self->addKeyboardMouseBinding(option, explanation);

		return 0;
	}

	// void osg::ApplicationUsage::setKeyboardMouseBindings(const osg::ApplicationUsage::UsageMap & usageMap)
	static int _bind_setKeyboardMouseBindings(lua_State *L) {
		if (!_lg_typecheck_setKeyboardMouseBindings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::setKeyboardMouseBindings(const osg::ApplicationUsage::UsageMap & usageMap) function, expected prototype:\nvoid osg::ApplicationUsage::setKeyboardMouseBindings(const osg::ApplicationUsage::UsageMap & usageMap)\nClass arguments details:\narg 1 ID = 31149124\n");
		}

		const osg::ApplicationUsage::UsageMap* usageMap_ptr=(Luna< osg::ApplicationUsage::UsageMap >::check(L,2));
		if( !usageMap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg usageMap in osg::ApplicationUsage::setKeyboardMouseBindings function");
		}
		const osg::ApplicationUsage::UsageMap & usageMap=*usageMap_ptr;

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::setKeyboardMouseBindings(const osg::ApplicationUsage::UsageMap &)");
		}
		self->setKeyboardMouseBindings(usageMap);

		return 0;
	}

	// const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getKeyboardMouseBindings() const
	static int _bind_getKeyboardMouseBindings(lua_State *L) {
		if (!_lg_typecheck_getKeyboardMouseBindings(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getKeyboardMouseBindings() const function, expected prototype:\nconst osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getKeyboardMouseBindings() const\nClass arguments details:\n");
		}


		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::ApplicationUsage::UsageMap & osg::ApplicationUsage::getKeyboardMouseBindings() const");
		}
		const osg::ApplicationUsage::UsageMap* lret = &self->getKeyboardMouseBindings();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ApplicationUsage::UsageMap >::push(L,lret,false);

		return 1;
	}

	// void osg::ApplicationUsage::getFormattedString(std::string & str, const osg::ApplicationUsage::UsageMap & um, unsigned int widthOfOutput = 80, bool showDefaults = false, const osg::ApplicationUsage::UsageMap & ud = osg::ApplicationUsage::UsageMap ())
	static int _bind_getFormattedString(lua_State *L) {
		if (!_lg_typecheck_getFormattedString(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::ApplicationUsage::getFormattedString(std::string & str, const osg::ApplicationUsage::UsageMap & um, unsigned int widthOfOutput = 80, bool showDefaults = false, const osg::ApplicationUsage::UsageMap & ud = osg::ApplicationUsage::UsageMap ()) function, expected prototype:\nvoid osg::ApplicationUsage::getFormattedString(std::string & str, const osg::ApplicationUsage::UsageMap & um, unsigned int widthOfOutput = 80, bool showDefaults = false, const osg::ApplicationUsage::UsageMap & ud = osg::ApplicationUsage::UsageMap ())\nClass arguments details:\narg 2 ID = 31149124\narg 5 ID = 31149124\n");
		}

		int luatop = lua_gettop(L);

		std::string str(lua_tostring(L,2),lua_objlen(L,2));
		const osg::ApplicationUsage::UsageMap* um_ptr=(Luna< osg::ApplicationUsage::UsageMap >::check(L,3));
		if( !um_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg um in osg::ApplicationUsage::getFormattedString function");
		}
		const osg::ApplicationUsage::UsageMap & um=*um_ptr;
		unsigned int widthOfOutput=luatop>3 ? (unsigned int)lua_tointeger(L,4) : 80;
		bool showDefaults=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : false;
		const osg::ApplicationUsage::UsageMap* ud_ptr=luatop>5 ? (Luna< osg::ApplicationUsage::UsageMap >::check(L,6)) : NULL;
		if( luatop>5 && !ud_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ud in osg::ApplicationUsage::getFormattedString function");
		}
		const osg::ApplicationUsage::UsageMap & ud=luatop>5 ? *ud_ptr : osg::ApplicationUsage::UsageMap ();

		osg::ApplicationUsage* self=Luna< osg::Referenced >::checkSubType< osg::ApplicationUsage >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::ApplicationUsage::getFormattedString(std::string &, const osg::ApplicationUsage::UsageMap &, unsigned int, bool, const osg::ApplicationUsage::UsageMap &)");
		}
		self->getFormattedString(str, um, widthOfOutput, showDefaults, ud);

		return 0;
	}


	// Operator binds:

};

osg::ApplicationUsage* LunaTraits< osg::ApplicationUsage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ApplicationUsage::_bind_ctor(L);
}

void LunaTraits< osg::ApplicationUsage >::_bind_dtor(osg::ApplicationUsage* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::ApplicationUsage >::className[] = "ApplicationUsage";
const char LunaTraits< osg::ApplicationUsage >::fullName[] = "osg::ApplicationUsage";
const char LunaTraits< osg::ApplicationUsage >::moduleName[] = "osg";
const char* LunaTraits< osg::ApplicationUsage >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::ApplicationUsage >::hash = 48541540;
const int LunaTraits< osg::ApplicationUsage >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::ApplicationUsage >::methods[] = {
	{"instance", &luna_wrapper_osg_ApplicationUsage::_bind_instance},
	{"setApplicationName", &luna_wrapper_osg_ApplicationUsage::_bind_setApplicationName},
	{"getApplicationName", &luna_wrapper_osg_ApplicationUsage::_bind_getApplicationName},
	{"setDescription", &luna_wrapper_osg_ApplicationUsage::_bind_setDescription},
	{"getDescription", &luna_wrapper_osg_ApplicationUsage::_bind_getDescription},
	{"addUsageExplanation", &luna_wrapper_osg_ApplicationUsage::_bind_addUsageExplanation},
	{"setCommandLineUsage", &luna_wrapper_osg_ApplicationUsage::_bind_setCommandLineUsage},
	{"getCommandLineUsage", &luna_wrapper_osg_ApplicationUsage::_bind_getCommandLineUsage},
	{"addCommandLineOption", &luna_wrapper_osg_ApplicationUsage::_bind_addCommandLineOption},
	{"setCommandLineOptions", &luna_wrapper_osg_ApplicationUsage::_bind_setCommandLineOptions},
	{"getCommandLineOptions", &luna_wrapper_osg_ApplicationUsage::_bind_getCommandLineOptions},
	{"setCommandLineOptionsDefaults", &luna_wrapper_osg_ApplicationUsage::_bind_setCommandLineOptionsDefaults},
	{"getCommandLineOptionsDefaults", &luna_wrapper_osg_ApplicationUsage::_bind_getCommandLineOptionsDefaults},
	{"addEnvironmentalVariable", &luna_wrapper_osg_ApplicationUsage::_bind_addEnvironmentalVariable},
	{"setEnvironmentalVariables", &luna_wrapper_osg_ApplicationUsage::_bind_setEnvironmentalVariables},
	{"getEnvironmentalVariables", &luna_wrapper_osg_ApplicationUsage::_bind_getEnvironmentalVariables},
	{"setEnvironmentalVariablesDefaults", &luna_wrapper_osg_ApplicationUsage::_bind_setEnvironmentalVariablesDefaults},
	{"getEnvironmentalVariablesDefaults", &luna_wrapper_osg_ApplicationUsage::_bind_getEnvironmentalVariablesDefaults},
	{"addKeyboardMouseBinding", &luna_wrapper_osg_ApplicationUsage::_bind_addKeyboardMouseBinding},
	{"setKeyboardMouseBindings", &luna_wrapper_osg_ApplicationUsage::_bind_setKeyboardMouseBindings},
	{"getKeyboardMouseBindings", &luna_wrapper_osg_ApplicationUsage::_bind_getKeyboardMouseBindings},
	{"getFormattedString", &luna_wrapper_osg_ApplicationUsage::_bind_getFormattedString},
	{"__eq", &luna_wrapper_osg_ApplicationUsage::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ApplicationUsage >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_ApplicationUsage::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ApplicationUsage >::enumValues[] = {
	{"NO_HELP", osg::ApplicationUsage::NO_HELP},
	{"COMMAND_LINE_OPTION", osg::ApplicationUsage::COMMAND_LINE_OPTION},
	{"ENVIRONMENTAL_VARIABLE", osg::ApplicationUsage::ENVIRONMENTAL_VARIABLE},
	{"KEYBOARD_MOUSE_BINDING", osg::ApplicationUsage::KEYBOARD_MOUSE_BINDING},
	{"HELP_ALL", osg::ApplicationUsage::HELP_ALL},
	{0,0}
};


