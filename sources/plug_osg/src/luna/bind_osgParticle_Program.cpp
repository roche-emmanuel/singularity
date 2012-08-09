#include <plug_common.h>

class luna_wrapper_osgParticle_Program {
public:
	typedef Luna< osgParticle::Program > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgParticle::Program* ptr= dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::Program >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// const char * osgParticle::Program::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Program::libraryName() const function, expected prototype:\nconst char * osgParticle::Program::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::Program* self=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Program::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::Program::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::Program::className() const function, expected prototype:\nconst char * osgParticle::Program::className() const\nClass arguments details:\n");
		}


		osgParticle::Program* self=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::Program::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgParticle::Program::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::Program::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::Program::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::Program* self=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::Program::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgParticle::Program::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::Program::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::Program::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::Program::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::Program* self=dynamic_cast< osgParticle::Program* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::Program::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}


	// Operator binds:

};

osgParticle::Program* LunaTraits< osgParticle::Program >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osgParticle::Program::execute(double dt)

	// Abstract operators:
}

void LunaTraits< osgParticle::Program >::_bind_dtor(osgParticle::Program* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::Program >::className[] = "Program";
const char LunaTraits< osgParticle::Program >::fullName[] = "osgParticle::Program";
const char LunaTraits< osgParticle::Program >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::Program >::parents[] = {"osgParticle.ParticleProcessor", 0};
const int LunaTraits< osgParticle::Program >::hash = 31340717;
const int LunaTraits< osgParticle::Program >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::Program >::methods[] = {
	{"libraryName", &luna_wrapper_osgParticle_Program::_bind_libraryName},
	{"className", &luna_wrapper_osgParticle_Program::_bind_className},
	{"isSameKindAs", &luna_wrapper_osgParticle_Program::_bind_isSameKindAs},
	{"accept", &luna_wrapper_osgParticle_Program::_bind_accept},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::Program >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_Program::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::Program >::enumValues[] = {
	{0,0}
};


