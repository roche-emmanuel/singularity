#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_Counter.h>

class luna_wrapper_osgParticle_Counter {
public:
	typedef Luna< osgParticle::Counter > luna_t;

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
		osgParticle::Counter* ptr= dynamic_cast< osgParticle::Counter* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Counter >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_numParticlesToCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::Counter::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::libraryName() const function, expected prototype:\nconst char * osgParticle::Counter::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::Counter* self=dynamic_cast< osgParticle::Counter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Counter::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Counter::className() const function, expected prototype:\nconst char * osgParticle::Counter::className() const\nClass arguments details:\n");
		}


		osgParticle::Counter* self=dynamic_cast< osgParticle::Counter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Counter::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Counter::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Counter::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Counter::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::Counter* self=dynamic_cast< osgParticle::Counter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Counter::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int osgParticle::Counter::numParticlesToCreate(double dt) const
	static int _bind_numParticlesToCreate(lua_State *L) {
		if (!_lg_typecheck_numParticlesToCreate(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgParticle::Counter::numParticlesToCreate(double dt) const function, expected prototype:\nint osgParticle::Counter::numParticlesToCreate(double dt) const\nClass arguments details:\n");
		}

		double dt=(double)lua_tonumber(L,2);

		osgParticle::Counter* self=dynamic_cast< osgParticle::Counter* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgParticle::Counter::numParticlesToCreate(double) const");
		}
		int lret = self->numParticlesToCreate(dt);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osgParticle::Counter* LunaTraits< osgParticle::Counter >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// int osgParticle::Counter::numParticlesToCreate(double dt) const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osgParticle::Counter >::_bind_dtor(osgParticle::Counter* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Counter >::className[] = "Counter";
const char LunaTraits< osgParticle::Counter >::fullName[] = "osgParticle::Counter";
const char LunaTraits< osgParticle::Counter >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Counter >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgParticle::Counter >::hash = 13659321;
const int LunaTraits< osgParticle::Counter >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Counter >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Counter::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Counter::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Counter::_bind_isSameKindAs},
	{"numParticlesToCreate", &luna_wrapper_osgParticle_Counter::_bind_numParticlesToCreate},
	{"__eq", &luna_wrapper_osgParticle_Counter::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Counter >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Counter::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Counter >::enumValues[] = {
	{0,0}
};


