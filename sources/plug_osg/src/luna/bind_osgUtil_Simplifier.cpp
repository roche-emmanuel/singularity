#include <plug_common.h>

class luna_wrapper_osgUtil_Simplifier {
public:
	typedef Luna< osgUtil::Simplifier > luna_t;

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
		osgUtil::Simplifier* ptr= dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::Simplifier >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_isnumber(L,1)==0 ) return false;
		if( luatop>1 && lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && lua_isnumber(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSampleRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSampleRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaximumLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaximumLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDoTriStrip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoTriStrip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSmoothing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSmoothing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setContinueSimplificationCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getContinueSimplificationCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getContinueSimplificationCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_simplify_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_simplify_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,12058436) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::Simplifier::Simplifier(double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0)
	static osgUtil::Simplifier* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Simplifier::Simplifier(double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0) function, expected prototype:\nosgUtil::Simplifier::Simplifier(double sampleRatio = 1.0, double maximumError = FLT_MAX, double maximumLength = 0.0)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		double sampleRatio=luatop>0 ? (double)lua_tonumber(L,1) : 1.0;
		double maximumError=luatop>1 ? (double)lua_tonumber(L,2) : FLT_MAX;
		double maximumLength=luatop>2 ? (double)lua_tonumber(L,3) : 0.0;

		return new osgUtil::Simplifier(sampleRatio, maximumError, maximumLength);
	}


	// Function binds:
	// const char * osgUtil::Simplifier::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::Simplifier::libraryName() const function, expected prototype:\nconst char * osgUtil::Simplifier::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::Simplifier::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::Simplifier::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::Simplifier::className() const function, expected prototype:\nconst char * osgUtil::Simplifier::className() const\nClass arguments details:\n");
		}


		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::Simplifier::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::Simplifier::setSampleRatio(float sampleRatio)
	static int _bind_setSampleRatio(lua_State *L) {
		if (!_lg_typecheck_setSampleRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setSampleRatio(float sampleRatio) function, expected prototype:\nvoid osgUtil::Simplifier::setSampleRatio(float sampleRatio)\nClass arguments details:\n");
		}

		float sampleRatio=(float)lua_tonumber(L,2);

		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setSampleRatio(float)");
		}
		self->setSampleRatio(sampleRatio);

		return 0;
	}

	// float osgUtil::Simplifier::getSampleRatio() const
	static int _bind_getSampleRatio(lua_State *L) {
		if (!_lg_typecheck_getSampleRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::Simplifier::getSampleRatio() const function, expected prototype:\nfloat osgUtil::Simplifier::getSampleRatio() const\nClass arguments details:\n");
		}


		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::Simplifier::getSampleRatio() const");
		}
		float lret = self->getSampleRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Simplifier::setMaximumError(float error)
	static int _bind_setMaximumError(lua_State *L) {
		if (!_lg_typecheck_setMaximumError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setMaximumError(float error) function, expected prototype:\nvoid osgUtil::Simplifier::setMaximumError(float error)\nClass arguments details:\n");
		}

		float error=(float)lua_tonumber(L,2);

		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setMaximumError(float)");
		}
		self->setMaximumError(error);

		return 0;
	}

	// float osgUtil::Simplifier::getMaximumError() const
	static int _bind_getMaximumError(lua_State *L) {
		if (!_lg_typecheck_getMaximumError(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::Simplifier::getMaximumError() const function, expected prototype:\nfloat osgUtil::Simplifier::getMaximumError() const\nClass arguments details:\n");
		}


		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::Simplifier::getMaximumError() const");
		}
		float lret = self->getMaximumError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Simplifier::setMaximumLength(float length)
	static int _bind_setMaximumLength(lua_State *L) {
		if (!_lg_typecheck_setMaximumLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setMaximumLength(float length) function, expected prototype:\nvoid osgUtil::Simplifier::setMaximumLength(float length)\nClass arguments details:\n");
		}

		float length=(float)lua_tonumber(L,2);

		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setMaximumLength(float)");
		}
		self->setMaximumLength(length);

		return 0;
	}

	// float osgUtil::Simplifier::getMaximumLength() const
	static int _bind_getMaximumLength(lua_State *L) {
		if (!_lg_typecheck_getMaximumLength(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::Simplifier::getMaximumLength() const function, expected prototype:\nfloat osgUtil::Simplifier::getMaximumLength() const\nClass arguments details:\n");
		}


		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::Simplifier::getMaximumLength() const");
		}
		float lret = self->getMaximumLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::Simplifier::setDoTriStrip(bool on)
	static int _bind_setDoTriStrip(lua_State *L) {
		if (!_lg_typecheck_setDoTriStrip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setDoTriStrip(bool on) function, expected prototype:\nvoid osgUtil::Simplifier::setDoTriStrip(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setDoTriStrip(bool)");
		}
		self->setDoTriStrip(on);

		return 0;
	}

	// bool osgUtil::Simplifier::getDoTriStrip() const
	static int _bind_getDoTriStrip(lua_State *L) {
		if (!_lg_typecheck_getDoTriStrip(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::getDoTriStrip() const function, expected prototype:\nbool osgUtil::Simplifier::getDoTriStrip() const\nClass arguments details:\n");
		}


		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::getDoTriStrip() const");
		}
		bool lret = self->getDoTriStrip();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Simplifier::setSmoothing(bool on)
	static int _bind_setSmoothing(lua_State *L) {
		if (!_lg_typecheck_setSmoothing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setSmoothing(bool on) function, expected prototype:\nvoid osgUtil::Simplifier::setSmoothing(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setSmoothing(bool)");
		}
		self->setSmoothing(on);

		return 0;
	}

	// bool osgUtil::Simplifier::getSmoothing() const
	static int _bind_getSmoothing(lua_State *L) {
		if (!_lg_typecheck_getSmoothing(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::Simplifier::getSmoothing() const function, expected prototype:\nbool osgUtil::Simplifier::getSmoothing() const\nClass arguments details:\n");
		}


		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::Simplifier::getSmoothing() const");
		}
		bool lret = self->getSmoothing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::Simplifier::setContinueSimplificationCallback(osgUtil::Simplifier::ContinueSimplificationCallback * cb)
	static int _bind_setContinueSimplificationCallback(lua_State *L) {
		if (!_lg_typecheck_setContinueSimplificationCallback(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::setContinueSimplificationCallback(osgUtil::Simplifier::ContinueSimplificationCallback * cb) function, expected prototype:\nvoid osgUtil::Simplifier::setContinueSimplificationCallback(osgUtil::Simplifier::ContinueSimplificationCallback * cb)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgUtil::Simplifier::ContinueSimplificationCallback* cb=dynamic_cast< osgUtil::Simplifier::ContinueSimplificationCallback* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::setContinueSimplificationCallback(osgUtil::Simplifier::ContinueSimplificationCallback *)");
		}
		self->setContinueSimplificationCallback(cb);

		return 0;
	}

	// osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback()
	static int _bind_getContinueSimplificationCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getContinueSimplificationCallback_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() function, expected prototype:\nosgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback()\nClass arguments details:\n");
		}


		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback()");
		}
		osgUtil::Simplifier::ContinueSimplificationCallback * lret = self->getContinueSimplificationCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Simplifier::ContinueSimplificationCallback >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() const
	static int _bind_getContinueSimplificationCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getContinueSimplificationCallback_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() const function, expected prototype:\nconst osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() const\nClass arguments details:\n");
		}


		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgUtil::Simplifier::ContinueSimplificationCallback * osgUtil::Simplifier::getContinueSimplificationCallback() const");
		}
		const osgUtil::Simplifier::ContinueSimplificationCallback * lret = self->getContinueSimplificationCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Simplifier::ContinueSimplificationCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::Simplifier::getContinueSimplificationCallback
	static int _bind_getContinueSimplificationCallback(lua_State *L) {
		if (_lg_typecheck_getContinueSimplificationCallback_overload_1(L)) return _bind_getContinueSimplificationCallback_overload_1(L);
		if (_lg_typecheck_getContinueSimplificationCallback_overload_2(L)) return _bind_getContinueSimplificationCallback_overload_2(L);

		luaL_error(L, "error in function getContinueSimplificationCallback, cannot match any of the overloads for function getContinueSimplificationCallback:\n  getContinueSimplificationCallback()\n  getContinueSimplificationCallback()\n");
		return 0;
	}

	// void osgUtil::Simplifier::apply(osg::Geode & geode)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::Simplifier::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* geode_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::Simplifier::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::apply(osg::Geode &)");
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::Simplifier::simplify(osg::Geometry & geometry)
	static int _bind_simplify_overload_1(lua_State *L) {
		if (!_lg_typecheck_simplify_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::simplify(osg::Geometry & geometry) function, expected prototype:\nvoid osgUtil::Simplifier::simplify(osg::Geometry & geometry)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geometry* geometry_ptr=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2));
		if( !geometry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geometry in osgUtil::Simplifier::simplify function");
		}
		osg::Geometry & geometry=*geometry_ptr;

		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::simplify(osg::Geometry &)");
		}
		self->simplify(geometry);

		return 0;
	}

	// void osgUtil::Simplifier::simplify(osg::Geometry & geometry, const osgUtil::Simplifier::IndexList & protectedPoints)
	static int _bind_simplify_overload_2(lua_State *L) {
		if (!_lg_typecheck_simplify_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::Simplifier::simplify(osg::Geometry & geometry, const osgUtil::Simplifier::IndexList & protectedPoints) function, expected prototype:\nvoid osgUtil::Simplifier::simplify(osg::Geometry & geometry, const osgUtil::Simplifier::IndexList & protectedPoints)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 12058436\n");
		}

		osg::Geometry* geometry_ptr=dynamic_cast< osg::Geometry* >(Luna< osg::Referenced >::check(L,2));
		if( !geometry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geometry in osgUtil::Simplifier::simplify function");
		}
		osg::Geometry & geometry=*geometry_ptr;
		const osgUtil::Simplifier::IndexList* protectedPoints_ptr=(Luna< osgUtil::Simplifier::IndexList >::check(L,3));
		if( !protectedPoints_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg protectedPoints in osgUtil::Simplifier::simplify function");
		}
		const osgUtil::Simplifier::IndexList & protectedPoints=*protectedPoints_ptr;

		osgUtil::Simplifier* self=dynamic_cast< osgUtil::Simplifier* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::Simplifier::simplify(osg::Geometry &, const osgUtil::Simplifier::IndexList &)");
		}
		self->simplify(geometry, protectedPoints);

		return 0;
	}

	// Overload binder for osgUtil::Simplifier::simplify
	static int _bind_simplify(lua_State *L) {
		if (_lg_typecheck_simplify_overload_1(L)) return _bind_simplify_overload_1(L);
		if (_lg_typecheck_simplify_overload_2(L)) return _bind_simplify_overload_2(L);

		luaL_error(L, "error in function simplify, cannot match any of the overloads for function simplify:\n  simplify(osg::Geometry &)\n  simplify(osg::Geometry &, const osgUtil::Simplifier::IndexList &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::Simplifier* LunaTraits< osgUtil::Simplifier >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_Simplifier::_bind_ctor(L);
}

void LunaTraits< osgUtil::Simplifier >::_bind_dtor(osgUtil::Simplifier* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::Simplifier >::className[] = "Simplifier";
const char LunaTraits< osgUtil::Simplifier >::fullName[] = "osgUtil::Simplifier";
const char LunaTraits< osgUtil::Simplifier >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::Simplifier >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::Simplifier >::hash = 73625148;
const int LunaTraits< osgUtil::Simplifier >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::Simplifier >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_Simplifier::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_Simplifier::_bind_className},
	{"setSampleRatio", &luna_wrapper_osgUtil_Simplifier::_bind_setSampleRatio},
	{"getSampleRatio", &luna_wrapper_osgUtil_Simplifier::_bind_getSampleRatio},
	{"setMaximumError", &luna_wrapper_osgUtil_Simplifier::_bind_setMaximumError},
	{"getMaximumError", &luna_wrapper_osgUtil_Simplifier::_bind_getMaximumError},
	{"setMaximumLength", &luna_wrapper_osgUtil_Simplifier::_bind_setMaximumLength},
	{"getMaximumLength", &luna_wrapper_osgUtil_Simplifier::_bind_getMaximumLength},
	{"setDoTriStrip", &luna_wrapper_osgUtil_Simplifier::_bind_setDoTriStrip},
	{"getDoTriStrip", &luna_wrapper_osgUtil_Simplifier::_bind_getDoTriStrip},
	{"setSmoothing", &luna_wrapper_osgUtil_Simplifier::_bind_setSmoothing},
	{"getSmoothing", &luna_wrapper_osgUtil_Simplifier::_bind_getSmoothing},
	{"setContinueSimplificationCallback", &luna_wrapper_osgUtil_Simplifier::_bind_setContinueSimplificationCallback},
	{"getContinueSimplificationCallback", &luna_wrapper_osgUtil_Simplifier::_bind_getContinueSimplificationCallback},
	{"apply", &luna_wrapper_osgUtil_Simplifier::_bind_apply},
	{"simplify", &luna_wrapper_osgUtil_Simplifier::_bind_simplify},
	{"__eq", &luna_wrapper_osgUtil_Simplifier::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::Simplifier >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_Simplifier::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::Simplifier >::enumValues[] = {
	{0,0}
};


