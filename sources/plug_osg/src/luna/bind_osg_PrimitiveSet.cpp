#include <plug_common.h>

class luna_wrapper_osg_PrimitiveSet {
public:
	typedef Luna< osg::PrimitiveSet > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::PrimitiveSet* ptr= dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PrimitiveSet >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_supportsBufferObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawElements_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawElements_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumInstances(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumInstances(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8652005) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,22170058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumIndices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_offsetIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumPrimitives(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool osg::PrimitiveSet::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PrimitiveSet::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::PrimitiveSet::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PrimitiveSet::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::PrimitiveSet::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PrimitiveSet::libraryName() const function, expected prototype:\nconst char * osg::PrimitiveSet::libraryName() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PrimitiveSet::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::PrimitiveSet::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::PrimitiveSet::className() const function, expected prototype:\nconst char * osg::PrimitiveSet::className() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::PrimitiveSet::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::PrimitiveSet::Type osg::PrimitiveSet::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::PrimitiveSet::Type osg::PrimitiveSet::getType() const function, expected prototype:\nosg::PrimitiveSet::Type osg::PrimitiveSet::getType() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::PrimitiveSet::Type osg::PrimitiveSet::getType() const");
		}
		osg::PrimitiveSet::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const void * osg::PrimitiveSet::getDataPointer() const
	static int _bind_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::PrimitiveSet::getDataPointer() const function, expected prototype:\nconst void * osg::PrimitiveSet::getDataPointer() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::PrimitiveSet::getDataPointer() const");
		}
		const void * lret = self->getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::PrimitiveSet::getTotalDataSize() const
	static int _bind_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PrimitiveSet::getTotalDataSize() const function, expected prototype:\nunsigned int osg::PrimitiveSet::getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PrimitiveSet::getTotalDataSize() const");
		}
		unsigned int lret = self->getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::PrimitiveSet::supportsBufferObject() const
	static int _bind_supportsBufferObject(lua_State *L) {
		if (!_lg_typecheck_supportsBufferObject(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::PrimitiveSet::supportsBufferObject() const function, expected prototype:\nbool osg::PrimitiveSet::supportsBufferObject() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::PrimitiveSet::supportsBufferObject() const");
		}
		bool lret = self->supportsBufferObject();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::DrawElements * osg::PrimitiveSet::getDrawElements()
	static int _bind_getDrawElements_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDrawElements_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::DrawElements * osg::PrimitiveSet::getDrawElements() function, expected prototype:\nosg::DrawElements * osg::PrimitiveSet::getDrawElements()\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::DrawElements * osg::PrimitiveSet::getDrawElements()");
		}
		osg::DrawElements * lret = self->getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// const osg::DrawElements * osg::PrimitiveSet::getDrawElements() const
	static int _bind_getDrawElements_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDrawElements_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::DrawElements * osg::PrimitiveSet::getDrawElements() const function, expected prototype:\nconst osg::DrawElements * osg::PrimitiveSet::getDrawElements() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::DrawElements * osg::PrimitiveSet::getDrawElements() const");
		}
		const osg::DrawElements * lret = self->getDrawElements();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElements >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::PrimitiveSet::getDrawElements
	static int _bind_getDrawElements(lua_State *L) {
		if (_lg_typecheck_getDrawElements_overload_1(L)) return _bind_getDrawElements_overload_1(L);
		if (_lg_typecheck_getDrawElements_overload_2(L)) return _bind_getDrawElements_overload_2(L);

		luaL_error(L, "error in function getDrawElements, cannot match any of the overloads for function getDrawElements:\n  getDrawElements()\n  getDrawElements()\n");
		return 0;
	}

	// void osg::PrimitiveSet::setNumInstances(int n)
	static int _bind_setNumInstances(lua_State *L) {
		if (!_lg_typecheck_setNumInstances(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveSet::setNumInstances(int n) function, expected prototype:\nvoid osg::PrimitiveSet::setNumInstances(int n)\nClass arguments details:\n");
		}

		int n=(int)lua_tointeger(L,2);

		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveSet::setNumInstances(int)");
		}
		self->setNumInstances(n);

		return 0;
	}

	// int osg::PrimitiveSet::getNumInstances() const
	static int _bind_getNumInstances(lua_State *L) {
		if (!_lg_typecheck_getNumInstances(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::PrimitiveSet::getNumInstances() const function, expected prototype:\nint osg::PrimitiveSet::getNumInstances() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::PrimitiveSet::getNumInstances() const");
		}
		int lret = self->getNumInstances();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PrimitiveSet::setMode(unsigned int mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveSet::setMode(unsigned int mode) function, expected prototype:\nvoid osg::PrimitiveSet::setMode(unsigned int mode)\nClass arguments details:\n");
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveSet::setMode(unsigned int)");
		}
		self->setMode(mode);

		return 0;
	}

	// unsigned int osg::PrimitiveSet::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PrimitiveSet::getMode() const function, expected prototype:\nunsigned int osg::PrimitiveSet::getMode() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PrimitiveSet::getMode() const");
		}
		unsigned int lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PrimitiveSet::draw(osg::State & state, bool useVertexBufferObjects) const
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveSet::draw(osg::State & state, bool useVertexBufferObjects) const function, expected prototype:\nvoid osg::PrimitiveSet::draw(osg::State & state, bool useVertexBufferObjects) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* state_ptr=dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osg::PrimitiveSet::draw function");
		}
		osg::State & state=*state_ptr;
		bool useVertexBufferObjects=(bool)(lua_toboolean(L,3)==1);

		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveSet::draw(osg::State &, bool) const");
		}
		self->draw(state, useVertexBufferObjects);

		return 0;
	}

	// void osg::PrimitiveSet::accept(osg::PrimitiveFunctor & functor) const
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveSet::accept(osg::PrimitiveFunctor & functor) const function, expected prototype:\nvoid osg::PrimitiveSet::accept(osg::PrimitiveFunctor & functor) const\nClass arguments details:\narg 1 ID = 8652005\n");
		}

		osg::PrimitiveFunctor* functor_ptr=(Luna< osg::PrimitiveFunctor >::check(L,2));
		if( !functor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg functor in osg::PrimitiveSet::accept function");
		}
		osg::PrimitiveFunctor & functor=*functor_ptr;

		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveSet::accept(osg::PrimitiveFunctor &) const");
		}
		self->accept(functor);

		return 0;
	}

	// void osg::PrimitiveSet::accept(osg::PrimitiveIndexFunctor & functor) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveSet::accept(osg::PrimitiveIndexFunctor & functor) const function, expected prototype:\nvoid osg::PrimitiveSet::accept(osg::PrimitiveIndexFunctor & functor) const\nClass arguments details:\narg 1 ID = 22170058\n");
		}

		osg::PrimitiveIndexFunctor* functor_ptr=(Luna< osg::PrimitiveIndexFunctor >::check(L,2));
		if( !functor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg functor in osg::PrimitiveSet::accept function");
		}
		osg::PrimitiveIndexFunctor & functor=*functor_ptr;

		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveSet::accept(osg::PrimitiveIndexFunctor &) const");
		}
		self->accept(functor);

		return 0;
	}

	// Overload binder for osg::PrimitiveSet::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::PrimitiveFunctor &)\n  accept(osg::PrimitiveIndexFunctor &)\n");
		return 0;
	}

	// unsigned int osg::PrimitiveSet::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PrimitiveSet::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::PrimitiveSet::index(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PrimitiveSet::index(unsigned int) const");
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::PrimitiveSet::getNumIndices() const
	static int _bind_getNumIndices(lua_State *L) {
		if (!_lg_typecheck_getNumIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PrimitiveSet::getNumIndices() const function, expected prototype:\nunsigned int osg::PrimitiveSet::getNumIndices() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PrimitiveSet::getNumIndices() const");
		}
		unsigned int lret = self->getNumIndices();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PrimitiveSet::offsetIndices(int offset)
	static int _bind_offsetIndices(lua_State *L) {
		if (!_lg_typecheck_offsetIndices(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveSet::offsetIndices(int offset) function, expected prototype:\nvoid osg::PrimitiveSet::offsetIndices(int offset)\nClass arguments details:\n");
		}

		int offset=(int)lua_tointeger(L,2);

		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveSet::offsetIndices(int)");
		}
		self->offsetIndices(offset);

		return 0;
	}

	// unsigned int osg::PrimitiveSet::getNumPrimitives() const
	static int _bind_getNumPrimitives(lua_State *L) {
		if (!_lg_typecheck_getNumPrimitives(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::PrimitiveSet::getNumPrimitives() const function, expected prototype:\nunsigned int osg::PrimitiveSet::getNumPrimitives() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::PrimitiveSet::getNumPrimitives() const");
		}
		unsigned int lret = self->getNumPrimitives();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::PrimitiveSet::computeRange() const
	static int _bind_computeRange(lua_State *L) {
		if (!_lg_typecheck_computeRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::PrimitiveSet::computeRange() const function, expected prototype:\nvoid osg::PrimitiveSet::computeRange() const\nClass arguments details:\n");
		}


		osg::PrimitiveSet* self=dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::PrimitiveSet::computeRange() const");
		}
		self->computeRange();

		return 0;
	}


	// Operator binds:

};

osg::PrimitiveSet* LunaTraits< osg::PrimitiveSet >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::PrimitiveSet::draw(osg::State & state, bool useVertexBufferObjects) const
	// void osg::PrimitiveSet::accept(osg::PrimitiveFunctor & functor) const
	// void osg::PrimitiveSet::accept(osg::PrimitiveIndexFunctor & functor) const
	// unsigned int osg::PrimitiveSet::index(unsigned int pos) const
	// unsigned int osg::PrimitiveSet::getNumIndices() const
	// void osg::PrimitiveSet::offsetIndices(int offset)
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osg::PrimitiveSet >::_bind_dtor(osg::PrimitiveSet* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PrimitiveSet >::className[] = "PrimitiveSet";
const char LunaTraits< osg::PrimitiveSet >::fullName[] = "osg::PrimitiveSet";
const char LunaTraits< osg::PrimitiveSet >::moduleName[] = "osg";
const char* LunaTraits< osg::PrimitiveSet >::parents[] = {"osg.BufferData", 0};
const int LunaTraits< osg::PrimitiveSet >::hash = 28181379;
const int LunaTraits< osg::PrimitiveSet >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PrimitiveSet >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_PrimitiveSet::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_PrimitiveSet::_bind_libraryName},
	{"className", &luna_wrapper_osg_PrimitiveSet::_bind_className},
	{"getType", &luna_wrapper_osg_PrimitiveSet::_bind_getType},
	{"getDataPointer", &luna_wrapper_osg_PrimitiveSet::_bind_getDataPointer},
	{"getTotalDataSize", &luna_wrapper_osg_PrimitiveSet::_bind_getTotalDataSize},
	{"supportsBufferObject", &luna_wrapper_osg_PrimitiveSet::_bind_supportsBufferObject},
	{"getDrawElements", &luna_wrapper_osg_PrimitiveSet::_bind_getDrawElements},
	{"setNumInstances", &luna_wrapper_osg_PrimitiveSet::_bind_setNumInstances},
	{"getNumInstances", &luna_wrapper_osg_PrimitiveSet::_bind_getNumInstances},
	{"setMode", &luna_wrapper_osg_PrimitiveSet::_bind_setMode},
	{"getMode", &luna_wrapper_osg_PrimitiveSet::_bind_getMode},
	{"draw", &luna_wrapper_osg_PrimitiveSet::_bind_draw},
	{"accept", &luna_wrapper_osg_PrimitiveSet::_bind_accept},
	{"index", &luna_wrapper_osg_PrimitiveSet::_bind_index},
	{"getNumIndices", &luna_wrapper_osg_PrimitiveSet::_bind_getNumIndices},
	{"offsetIndices", &luna_wrapper_osg_PrimitiveSet::_bind_offsetIndices},
	{"getNumPrimitives", &luna_wrapper_osg_PrimitiveSet::_bind_getNumPrimitives},
	{"computeRange", &luna_wrapper_osg_PrimitiveSet::_bind_computeRange},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PrimitiveSet >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PrimitiveSet::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PrimitiveSet >::enumValues[] = {
	{"PrimitiveType", osg::PrimitiveSet::PrimitiveType},
	{"DrawArraysPrimitiveType", osg::PrimitiveSet::DrawArraysPrimitiveType},
	{"DrawArrayLengthsPrimitiveType", osg::PrimitiveSet::DrawArrayLengthsPrimitiveType},
	{"DrawElementsUBytePrimitiveType", osg::PrimitiveSet::DrawElementsUBytePrimitiveType},
	{"DrawElementsUShortPrimitiveType", osg::PrimitiveSet::DrawElementsUShortPrimitiveType},
	{"DrawElementsUIntPrimitiveType", osg::PrimitiveSet::DrawElementsUIntPrimitiveType},
	{"POINTS", osg::PrimitiveSet::POINTS},
	{"LINES", osg::PrimitiveSet::LINES},
	{"LINE_STRIP", osg::PrimitiveSet::LINE_STRIP},
	{"LINE_LOOP", osg::PrimitiveSet::LINE_LOOP},
	{"TRIANGLES", osg::PrimitiveSet::TRIANGLES},
	{"TRIANGLE_STRIP", osg::PrimitiveSet::TRIANGLE_STRIP},
	{"TRIANGLE_FAN", osg::PrimitiveSet::TRIANGLE_FAN},
	{"QUADS", osg::PrimitiveSet::QUADS},
	{"QUAD_STRIP", osg::PrimitiveSet::QUAD_STRIP},
	{"POLYGON", osg::PrimitiveSet::POLYGON},
	{"LINES_ADJACENCY", osg::PrimitiveSet::LINES_ADJACENCY},
	{"LINE_STRIP_ADJACENCY", osg::PrimitiveSet::LINE_STRIP_ADJACENCY},
	{"TRIANGLES_ADJACENCY", osg::PrimitiveSet::TRIANGLES_ADJACENCY},
	{"TRIANGLE_STRIP_ADJACENCY", osg::PrimitiveSet::TRIANGLE_STRIP_ADJACENCY},
	{"PATCHES", osg::PrimitiveSet::PATCHES},
	{0,0}
};


