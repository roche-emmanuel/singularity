#include <plug_common.h>

class luna_wrapper_SPK_Interpolator {
public:
	typedef Luna< SPK::Interpolator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45960683) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(SPK::Interpolator*)");
		}

		SPK::Interpolator* rhs =(Luna< SPK::Interpolator >::check(L,2));
		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*)");
		}

		SPK::Interpolator* self= (SPK::Interpolator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SPK::Interpolator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45960683) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid()");
		}

		void* self= (void*)(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("SPK::Interpolator");
		
		return luna_dynamicCast(L,converters,"SPK::Interpolator",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_setType(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enableLooping(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setScaleXVariation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOffsetXVariation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInterpolatorParam(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isLoopingEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScaleXVariation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffsetXVariation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addEntry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63689174) ) return false;
		if( (!(Luna< SPK::InterpolatorEntry >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addEntry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addEntry_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_clearGraph(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_generateSinCurve(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( (lua_isnumber(L,9)==0 || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generatePolyCurve(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		if( lua_isnumber(L,6)==0 ) return false;
		if( lua_isnumber(L,7)==0 ) return false;
		if( (lua_isnumber(L,8)==0 || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void SPK::Interpolator::setType(SPK::InterpolationType type, SPK::ModelParam param = SPK::PARAM_SIZE)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Interpolator::setType(SPK::InterpolationType type, SPK::ModelParam param = SPK::PARAM_SIZE) function, expected prototype:\nvoid SPK::Interpolator::setType(SPK::InterpolationType type, SPK::ModelParam param = SPK::PARAM_SIZE)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		SPK::InterpolationType type=(SPK::InterpolationType)lua_tointeger(L,2);
		SPK::ModelParam param=luatop>2 ? (SPK::ModelParam)lua_tointeger(L,3) : (SPK::ModelParam)SPK::PARAM_SIZE;

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Interpolator::setType(SPK::InterpolationType, SPK::ModelParam). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		self->setType(type, param);

		return 0;
	}

	// void SPK::Interpolator::enableLooping(bool loop)
	static int _bind_enableLooping(lua_State *L) {
		if (!_lg_typecheck_enableLooping(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Interpolator::enableLooping(bool loop) function, expected prototype:\nvoid SPK::Interpolator::enableLooping(bool loop)\nClass arguments details:\n");
		}

		bool loop=(bool)(lua_toboolean(L,2)==1);

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Interpolator::enableLooping(bool). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		self->enableLooping(loop);

		return 0;
	}

	// void SPK::Interpolator::setScaleXVariation(float scaleXVariation)
	static int _bind_setScaleXVariation(lua_State *L) {
		if (!_lg_typecheck_setScaleXVariation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Interpolator::setScaleXVariation(float scaleXVariation) function, expected prototype:\nvoid SPK::Interpolator::setScaleXVariation(float scaleXVariation)\nClass arguments details:\n");
		}

		float scaleXVariation=(float)lua_tonumber(L,2);

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Interpolator::setScaleXVariation(float). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		self->setScaleXVariation(scaleXVariation);

		return 0;
	}

	// void SPK::Interpolator::setOffsetXVariation(float offsetXVariation)
	static int _bind_setOffsetXVariation(lua_State *L) {
		if (!_lg_typecheck_setOffsetXVariation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Interpolator::setOffsetXVariation(float offsetXVariation) function, expected prototype:\nvoid SPK::Interpolator::setOffsetXVariation(float offsetXVariation)\nClass arguments details:\n");
		}

		float offsetXVariation=(float)lua_tonumber(L,2);

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Interpolator::setOffsetXVariation(float). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		self->setOffsetXVariation(offsetXVariation);

		return 0;
	}

	// SPK::InterpolationType SPK::Interpolator::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::InterpolationType SPK::Interpolator::getType() const function, expected prototype:\nSPK::InterpolationType SPK::Interpolator::getType() const\nClass arguments details:\n");
		}


		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::InterpolationType SPK::Interpolator::getType() const. Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		SPK::InterpolationType lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// SPK::ModelParam SPK::Interpolator::getInterpolatorParam() const
	static int _bind_getInterpolatorParam(lua_State *L) {
		if (!_lg_typecheck_getInterpolatorParam(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in SPK::ModelParam SPK::Interpolator::getInterpolatorParam() const function, expected prototype:\nSPK::ModelParam SPK::Interpolator::getInterpolatorParam() const\nClass arguments details:\n");
		}


		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call SPK::ModelParam SPK::Interpolator::getInterpolatorParam() const. Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		SPK::ModelParam lret = self->getInterpolatorParam();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Interpolator::isLoopingEnabled() const
	static int _bind_isLoopingEnabled(lua_State *L) {
		if (!_lg_typecheck_isLoopingEnabled(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Interpolator::isLoopingEnabled() const function, expected prototype:\nbool SPK::Interpolator::isLoopingEnabled() const\nClass arguments details:\n");
		}


		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Interpolator::isLoopingEnabled() const. Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		bool lret = self->isLoopingEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// float SPK::Interpolator::getScaleXVariation() const
	static int _bind_getScaleXVariation(lua_State *L) {
		if (!_lg_typecheck_getScaleXVariation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Interpolator::getScaleXVariation() const function, expected prototype:\nfloat SPK::Interpolator::getScaleXVariation() const\nClass arguments details:\n");
		}


		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Interpolator::getScaleXVariation() const. Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		float lret = self->getScaleXVariation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float SPK::Interpolator::getOffsetXVariation() const
	static int _bind_getOffsetXVariation(lua_State *L) {
		if (!_lg_typecheck_getOffsetXVariation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float SPK::Interpolator::getOffsetXVariation() const function, expected prototype:\nfloat SPK::Interpolator::getOffsetXVariation() const\nClass arguments details:\n");
		}


		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float SPK::Interpolator::getOffsetXVariation() const. Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		float lret = self->getOffsetXVariation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool SPK::Interpolator::addEntry(const SPK::InterpolatorEntry & entry)
	static int _bind_addEntry_overload_1(lua_State *L) {
		if (!_lg_typecheck_addEntry_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Interpolator::addEntry(const SPK::InterpolatorEntry & entry) function, expected prototype:\nbool SPK::Interpolator::addEntry(const SPK::InterpolatorEntry & entry)\nClass arguments details:\narg 1 ID = 63689174\n");
		}

		const SPK::InterpolatorEntry* entry_ptr=(Luna< SPK::InterpolatorEntry >::check(L,2));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in SPK::Interpolator::addEntry function");
		}
		const SPK::InterpolatorEntry & entry=*entry_ptr;

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Interpolator::addEntry(const SPK::InterpolatorEntry &). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		bool lret = self->addEntry(entry);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Interpolator::addEntry(float x, float y)
	static int _bind_addEntry_overload_2(lua_State *L) {
		if (!_lg_typecheck_addEntry_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Interpolator::addEntry(float x, float y) function, expected prototype:\nbool SPK::Interpolator::addEntry(float x, float y)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y=(float)lua_tonumber(L,3);

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Interpolator::addEntry(float, float). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		bool lret = self->addEntry(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool SPK::Interpolator::addEntry(float x, float y0, float y1)
	static int _bind_addEntry_overload_3(lua_State *L) {
		if (!_lg_typecheck_addEntry_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool SPK::Interpolator::addEntry(float x, float y0, float y1) function, expected prototype:\nbool SPK::Interpolator::addEntry(float x, float y0, float y1)\nClass arguments details:\n");
		}

		float x=(float)lua_tonumber(L,2);
		float y0=(float)lua_tonumber(L,3);
		float y1=(float)lua_tonumber(L,4);

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool SPK::Interpolator::addEntry(float, float, float). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		bool lret = self->addEntry(x, y0, y1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for SPK::Interpolator::addEntry
	static int _bind_addEntry(lua_State *L) {
		if (_lg_typecheck_addEntry_overload_1(L)) return _bind_addEntry_overload_1(L);
		if (_lg_typecheck_addEntry_overload_2(L)) return _bind_addEntry_overload_2(L);
		if (_lg_typecheck_addEntry_overload_3(L)) return _bind_addEntry_overload_3(L);

		luaL_error(L, "error in function addEntry, cannot match any of the overloads for function addEntry:\n  addEntry(const SPK::InterpolatorEntry &)\n  addEntry(float, float)\n  addEntry(float, float, float)\n");
		return 0;
	}

	// void SPK::Interpolator::clearGraph()
	static int _bind_clearGraph(lua_State *L) {
		if (!_lg_typecheck_clearGraph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Interpolator::clearGraph() function, expected prototype:\nvoid SPK::Interpolator::clearGraph()\nClass arguments details:\n");
		}


		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Interpolator::clearGraph(). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		self->clearGraph();

		return 0;
	}

	// void SPK::Interpolator::generateSinCurve(float period, float amplitudeMin, float amplitudeMax, float offsetX, float offsetY, float startX, unsigned int length, unsigned int nbSamples)
	static int _bind_generateSinCurve(lua_State *L) {
		if (!_lg_typecheck_generateSinCurve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Interpolator::generateSinCurve(float period, float amplitudeMin, float amplitudeMax, float offsetX, float offsetY, float startX, unsigned int length, unsigned int nbSamples) function, expected prototype:\nvoid SPK::Interpolator::generateSinCurve(float period, float amplitudeMin, float amplitudeMax, float offsetX, float offsetY, float startX, unsigned int length, unsigned int nbSamples)\nClass arguments details:\n");
		}

		float period=(float)lua_tonumber(L,2);
		float amplitudeMin=(float)lua_tonumber(L,3);
		float amplitudeMax=(float)lua_tonumber(L,4);
		float offsetX=(float)lua_tonumber(L,5);
		float offsetY=(float)lua_tonumber(L,6);
		float startX=(float)lua_tonumber(L,7);
		unsigned int length=(unsigned int)lua_tointeger(L,8);
		unsigned int nbSamples=(unsigned int)lua_tointeger(L,9);

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Interpolator::generateSinCurve(float, float, float, float, float, float, unsigned int, unsigned int). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		self->generateSinCurve(period, amplitudeMin, amplitudeMax, offsetX, offsetY, startX, length, nbSamples);

		return 0;
	}

	// void SPK::Interpolator::generatePolyCurve(float constant, float linear, float quadratic, float cubic, float startX, float endX, unsigned int nbSamples)
	static int _bind_generatePolyCurve(lua_State *L) {
		if (!_lg_typecheck_generatePolyCurve(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void SPK::Interpolator::generatePolyCurve(float constant, float linear, float quadratic, float cubic, float startX, float endX, unsigned int nbSamples) function, expected prototype:\nvoid SPK::Interpolator::generatePolyCurve(float constant, float linear, float quadratic, float cubic, float startX, float endX, unsigned int nbSamples)\nClass arguments details:\n");
		}

		float constant=(float)lua_tonumber(L,2);
		float linear=(float)lua_tonumber(L,3);
		float quadratic=(float)lua_tonumber(L,4);
		float cubic=(float)lua_tonumber(L,5);
		float startX=(float)lua_tonumber(L,6);
		float endX=(float)lua_tonumber(L,7);
		unsigned int nbSamples=(unsigned int)lua_tointeger(L,8);

		SPK::Interpolator* self=(Luna< SPK::Interpolator >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void SPK::Interpolator::generatePolyCurve(float, float, float, float, float, float, unsigned int). Got : '%s'",typeid(Luna< SPK::Interpolator >::check(L,1)).name());
		}
		self->generatePolyCurve(constant, linear, quadratic, cubic, startX, endX, nbSamples);

		return 0;
	}


	// Operator binds:

};

SPK::Interpolator* LunaTraits< SPK::Interpolator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< SPK::Interpolator >::_bind_dtor(SPK::Interpolator* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< SPK::Interpolator >::className[] = "Interpolator";
const char LunaTraits< SPK::Interpolator >::fullName[] = "SPK::Interpolator";
const char LunaTraits< SPK::Interpolator >::moduleName[] = "spark";
const char* LunaTraits< SPK::Interpolator >::parents[] = {0};
const int LunaTraits< SPK::Interpolator >::hash = 45960683;
const int LunaTraits< SPK::Interpolator >::uniqueIDs[] = {45960683,0};

luna_RegType LunaTraits< SPK::Interpolator >::methods[] = {
	{"setType", &luna_wrapper_SPK_Interpolator::_bind_setType},
	{"enableLooping", &luna_wrapper_SPK_Interpolator::_bind_enableLooping},
	{"setScaleXVariation", &luna_wrapper_SPK_Interpolator::_bind_setScaleXVariation},
	{"setOffsetXVariation", &luna_wrapper_SPK_Interpolator::_bind_setOffsetXVariation},
	{"getType", &luna_wrapper_SPK_Interpolator::_bind_getType},
	{"getInterpolatorParam", &luna_wrapper_SPK_Interpolator::_bind_getInterpolatorParam},
	{"isLoopingEnabled", &luna_wrapper_SPK_Interpolator::_bind_isLoopingEnabled},
	{"getScaleXVariation", &luna_wrapper_SPK_Interpolator::_bind_getScaleXVariation},
	{"getOffsetXVariation", &luna_wrapper_SPK_Interpolator::_bind_getOffsetXVariation},
	{"addEntry", &luna_wrapper_SPK_Interpolator::_bind_addEntry},
	{"clearGraph", &luna_wrapper_SPK_Interpolator::_bind_clearGraph},
	{"generateSinCurve", &luna_wrapper_SPK_Interpolator::_bind_generateSinCurve},
	{"generatePolyCurve", &luna_wrapper_SPK_Interpolator::_bind_generatePolyCurve},
	{"dynCast", &luna_wrapper_SPK_Interpolator::_bind_dynCast},
	{"__eq", &luna_wrapper_SPK_Interpolator::_bind___eq},
	{"fromVoid", &luna_wrapper_SPK_Interpolator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SPK_Interpolator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< SPK::Interpolator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< SPK::Interpolator >::enumValues[] = {
	{0,0}
};


