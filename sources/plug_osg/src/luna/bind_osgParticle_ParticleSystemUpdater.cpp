#include <plug_common.h>

#include <luna/wrappers/wrapper_osgParticle_ParticleSystemUpdater.h>

class luna_wrapper_osgParticle_ParticleSystemUpdater {
public:
	typedef Luna< osgParticle::ParticleSystemUpdater > luna_t;

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
		osgParticle::ParticleSystemUpdater* ptr= dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgParticle::ParticleSystemUpdater >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeParticleSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeParticleSystem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_replaceParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumParticleSystems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSystem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsParticleSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getParticleSystemIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgParticle::ParticleSystemUpdater::ParticleSystemUpdater()
	static osgParticle::ParticleSystemUpdater* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater() function, expected prototype:\nosgParticle::ParticleSystemUpdater::ParticleSystemUpdater()\nClass arguments details:\n");
		}


		return new osgParticle::ParticleSystemUpdater();
	}

	// osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ParticleSystemUpdater* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ParticleSystemUpdater::ParticleSystemUpdater(const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ParticleSystemUpdater* copy_ptr=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater function");
		}
		const osgParticle::ParticleSystemUpdater & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgParticle::ParticleSystemUpdater(copy, copyop);
	}

	// osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data)
	static osgParticle::ParticleSystemUpdater* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data) function, expected prototype:\nosgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgParticle_ParticleSystemUpdater(L,NULL);
	}

	// osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data, const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgParticle::ParticleSystemUpdater* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data, const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgParticle::ParticleSystemUpdater::ParticleSystemUpdater(lua_Table * data, const osgParticle::ParticleSystemUpdater & copy, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgParticle::ParticleSystemUpdater* copy_ptr=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,2));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater function");
		}
		const osgParticle::ParticleSystemUpdater & copy=*copy_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystemUpdater::ParticleSystemUpdater function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgParticle_ParticleSystemUpdater(L,NULL, copy, copyop);
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::ParticleSystemUpdater
	static osgParticle::ParticleSystemUpdater* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function ParticleSystemUpdater, cannot match any of the overloads for function ParticleSystemUpdater:\n  ParticleSystemUpdater()\n  ParticleSystemUpdater(const osgParticle::ParticleSystemUpdater &, const osg::CopyOp &)\n  ParticleSystemUpdater(lua_Table *)\n  ParticleSystemUpdater(lua_Table *, const osgParticle::ParticleSystemUpdater &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgParticle::ParticleSystemUpdater::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystemUpdater::cloneType() const function, expected prototype:\nosg::Object * osgParticle::ParticleSystemUpdater::cloneType() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystemUpdater::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgParticle::ParticleSystemUpdater::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgParticle::ParticleSystemUpdater::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osgParticle::ParticleSystemUpdater::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgParticle::ParticleSystemUpdater::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgParticle::ParticleSystemUpdater::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgParticle::ParticleSystemUpdater::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystemUpdater::className() const function, expected prototype:\nconst char * osgParticle::ParticleSystemUpdater::className() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystemUpdater::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgParticle::ParticleSystemUpdater::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgParticle::ParticleSystemUpdater::libraryName() const function, expected prototype:\nconst char * osgParticle::ParticleSystemUpdater::libraryName() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgParticle::ParticleSystemUpdater::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystemUpdater::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osgParticle::ParticleSystemUpdater::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// bool osgParticle::ParticleSystemUpdater::addParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_addParticleSystem(lua_State *L) {
		if (!_lg_typecheck_addParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::addParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::addParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::ParticleSystem* ps=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::addParticleSystem(osgParticle::ParticleSystem *)");
		}
		bool lret = self->addParticleSystem(ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::removeParticleSystem(osgParticle::ParticleSystem * ps)
	static int _bind_removeParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeParticleSystem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::removeParticleSystem(osgParticle::ParticleSystem * ps) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::removeParticleSystem(osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgParticle::ParticleSystem* ps=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::removeParticleSystem(osgParticle::ParticleSystem *)");
		}
		bool lret = self->removeParticleSystem(ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1)
	static int _bind_removeParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeParticleSystem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::removeParticleSystem(unsigned int i, unsigned int numParticleSystemsToRemove = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int numParticleSystemsToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 1;

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::removeParticleSystem(unsigned int, unsigned int)");
		}
		bool lret = self->removeParticleSystem(i, numParticleSystemsToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::removeParticleSystem
	static int _bind_removeParticleSystem(lua_State *L) {
		if (_lg_typecheck_removeParticleSystem_overload_1(L)) return _bind_removeParticleSystem_overload_1(L);
		if (_lg_typecheck_removeParticleSystem_overload_2(L)) return _bind_removeParticleSystem_overload_2(L);

		luaL_error(L, "error in function removeParticleSystem, cannot match any of the overloads for function removeParticleSystem:\n  removeParticleSystem(osgParticle::ParticleSystem *)\n  removeParticleSystem(unsigned int, unsigned int)\n");
		return 0;
	}

	// bool osgParticle::ParticleSystemUpdater::replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS)
	static int _bind_replaceParticleSystem(lua_State *L) {
		if (!_lg_typecheck_replaceParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::replaceParticleSystem(osgParticle::ParticleSystem * origPS, osgParticle::ParticleSystem * newPS)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osgParticle::ParticleSystem* origPS=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,2));
		osgParticle::ParticleSystem* newPS=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,3));

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::replaceParticleSystem(osgParticle::ParticleSystem *, osgParticle::ParticleSystem *)");
		}
		bool lret = self->replaceParticleSystem(origPS, newPS);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgParticle::ParticleSystemUpdater::setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps)
	static int _bind_setParticleSystem(lua_State *L) {
		if (!_lg_typecheck_setParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps) function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::setParticleSystem(unsigned int i, osgParticle::ParticleSystem * ps)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osgParticle::ParticleSystem* ps=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,3));

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::setParticleSystem(unsigned int, osgParticle::ParticleSystem *)");
		}
		bool lret = self->setParticleSystem(i, ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osgParticle::ParticleSystemUpdater::getNumParticleSystems() const
	static int _bind_getNumParticleSystems(lua_State *L) {
		if (!_lg_typecheck_getNumParticleSystems(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ParticleSystemUpdater::getNumParticleSystems() const function, expected prototype:\nunsigned int osgParticle::ParticleSystemUpdater::getNumParticleSystems() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ParticleSystemUpdater::getNumParticleSystems() const");
		}
		unsigned int lret = self->getNumParticleSystems();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i)
	static int _bind_getParticleSystem_overload_1(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i) function, expected prototype:\nosgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int)");
		}
		osgParticle::ParticleSystem * lret = self->getParticleSystem(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// const osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i) const
	static int _bind_getParticleSystem_overload_2(lua_State *L) {
		if (!_lg_typecheck_getParticleSystem_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i) const function, expected prototype:\nconst osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgParticle::ParticleSystem * osgParticle::ParticleSystemUpdater::getParticleSystem(unsigned int) const");
		}
		const osgParticle::ParticleSystem * lret = self->getParticleSystem(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgParticle::ParticleSystem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgParticle::ParticleSystemUpdater::getParticleSystem
	static int _bind_getParticleSystem(lua_State *L) {
		if (_lg_typecheck_getParticleSystem_overload_1(L)) return _bind_getParticleSystem_overload_1(L);
		if (_lg_typecheck_getParticleSystem_overload_2(L)) return _bind_getParticleSystem_overload_2(L);

		luaL_error(L, "error in function getParticleSystem, cannot match any of the overloads for function getParticleSystem:\n  getParticleSystem(unsigned int)\n  getParticleSystem(unsigned int)\n");
		return 0;
	}

	// bool osgParticle::ParticleSystemUpdater::containsParticleSystem(const osgParticle::ParticleSystem * ps) const
	static int _bind_containsParticleSystem(lua_State *L) {
		if (!_lg_typecheck_containsParticleSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgParticle::ParticleSystemUpdater::containsParticleSystem(const osgParticle::ParticleSystem * ps) const function, expected prototype:\nbool osgParticle::ParticleSystemUpdater::containsParticleSystem(const osgParticle::ParticleSystem * ps) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgParticle::ParticleSystem* ps=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgParticle::ParticleSystemUpdater::containsParticleSystem(const osgParticle::ParticleSystem *) const");
		}
		bool lret = self->containsParticleSystem(ps);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osgParticle::ParticleSystemUpdater::getParticleSystemIndex(const osgParticle::ParticleSystem * ps) const
	static int _bind_getParticleSystemIndex(lua_State *L) {
		if (!_lg_typecheck_getParticleSystemIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgParticle::ParticleSystemUpdater::getParticleSystemIndex(const osgParticle::ParticleSystem * ps) const function, expected prototype:\nunsigned int osgParticle::ParticleSystemUpdater::getParticleSystemIndex(const osgParticle::ParticleSystem * ps) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgParticle::ParticleSystem* ps=dynamic_cast< osgParticle::ParticleSystem* >(Luna< osg::Referenced >::check(L,2));

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgParticle::ParticleSystemUpdater::getParticleSystemIndex(const osgParticle::ParticleSystem *) const");
		}
		unsigned int lret = self->getParticleSystemIndex(ps);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::ParticleSystemUpdater::traverse(osg::NodeVisitor & arg1)
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgParticle::ParticleSystemUpdater::traverse(osg::NodeVisitor & arg1) function, expected prototype:\nvoid osgParticle::ParticleSystemUpdater::traverse(osg::NodeVisitor & arg1)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgParticle::ParticleSystemUpdater::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgParticle::ParticleSystemUpdater::traverse(osg::NodeVisitor &)");
		}
		self->traverse(_arg1);

		return 0;
	}

	// osg::BoundingSphered osgParticle::ParticleSystemUpdater::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osgParticle::ParticleSystemUpdater::computeBound() const function, expected prototype:\nosg::BoundingSphered osgParticle::ParticleSystemUpdater::computeBound() const\nClass arguments details:\n");
		}


		osgParticle::ParticleSystemUpdater* self=dynamic_cast< osgParticle::ParticleSystemUpdater* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osgParticle::ParticleSystemUpdater::computeBound() const");
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osgParticle::ParticleSystemUpdater* LunaTraits< osgParticle::ParticleSystemUpdater >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_ctor(L);
}

void LunaTraits< osgParticle::ParticleSystemUpdater >::_bind_dtor(osgParticle::ParticleSystemUpdater* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgParticle::ParticleSystemUpdater >::className[] = "ParticleSystemUpdater";
const char LunaTraits< osgParticle::ParticleSystemUpdater >::fullName[] = "osgParticle::ParticleSystemUpdater";
const char LunaTraits< osgParticle::ParticleSystemUpdater >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::ParticleSystemUpdater >::parents[] = {"osg.Node", 0};
const int LunaTraits< osgParticle::ParticleSystemUpdater >::hash = 16157989;
const int LunaTraits< osgParticle::ParticleSystemUpdater >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgParticle::ParticleSystemUpdater >::methods[] = {
	{"cloneType", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_cloneType},
	{"clone", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_className},
	{"libraryName", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_libraryName},
	{"accept", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_accept},
	{"addParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_addParticleSystem},
	{"removeParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_removeParticleSystem},
	{"replaceParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_replaceParticleSystem},
	{"setParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_setParticleSystem},
	{"getNumParticleSystems", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_getNumParticleSystems},
	{"getParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_getParticleSystem},
	{"containsParticleSystem", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_containsParticleSystem},
	{"getParticleSystemIndex", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_getParticleSystemIndex},
	{"traverse", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_traverse},
	{"computeBound", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind_computeBound},
	{"__eq", &luna_wrapper_osgParticle_ParticleSystemUpdater::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::ParticleSystemUpdater >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgParticle_ParticleSystemUpdater::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::ParticleSystemUpdater >::enumValues[] = {
	{0,0}
};


