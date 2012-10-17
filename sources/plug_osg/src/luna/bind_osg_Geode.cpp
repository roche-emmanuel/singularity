#include <plug_common.h>

class luna_wrapper_osg_Geode {
public:
	typedef Luna< osg::Geode > luna_t;

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
		osg::Geode* ptr= dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Geode >::push(L,ptr,false);
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
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_asGeode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGeode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeDrawables(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_replaceDrawable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumDrawables(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawable_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawable_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawableIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDrawableList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compileDrawables(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundingBox(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Geode::Geode()
	static osg::Geode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geode::Geode() function, expected prototype:\nosg::Geode::Geode()\nClass arguments details:\n");
		}


		return new osg::Geode();
	}

	// osg::Geode::Geode(const osg::Geode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Geode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geode::Geode(const osg::Geode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Geode::Geode(const osg::Geode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Geode* _arg1_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Geode::Geode function");
		}
		const osg::Geode & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geode::Geode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Geode(_arg1, copyop);
	}

	// Overload binder for osg::Geode::Geode
	static osg::Geode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Geode, cannot match any of the overloads for function Geode:\n  Geode()\n  Geode(const osg::Geode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Geode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geode::cloneType() const function, expected prototype:\nosg::Object * osg::Geode::cloneType() const\nClass arguments details:\n");
		}


		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geode::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Geode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Geode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Geode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Geode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Geode::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Geode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Geode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geode::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Geode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Geode::className() const function, expected prototype:\nconst char * osg::Geode::className() const\nClass arguments details:\n");
		}


		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Geode::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Geode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Geode::libraryName() const function, expected prototype:\nconst char * osg::Geode::libraryName() const\nClass arguments details:\n");
		}


		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Geode::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Geode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Geode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Geode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Geode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Geode::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// osg::Geode * osg::Geode::asGeode()
	static int _bind_asGeode_overload_1(lua_State *L) {
		if (!_lg_typecheck_asGeode_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Geode * osg::Geode::asGeode() function, expected prototype:\nosg::Geode * osg::Geode::asGeode()\nClass arguments details:\n");
		}


		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Geode * osg::Geode::asGeode()");
		}
		osg::Geode * lret = self->asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// const osg::Geode * osg::Geode::asGeode() const
	static int _bind_asGeode_overload_2(lua_State *L) {
		if (!_lg_typecheck_asGeode_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Geode * osg::Geode::asGeode() const function, expected prototype:\nconst osg::Geode * osg::Geode::asGeode() const\nClass arguments details:\n");
		}


		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Geode * osg::Geode::asGeode() const");
		}
		const osg::Geode * lret = self->asGeode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::asGeode
	static int _bind_asGeode(lua_State *L) {
		if (_lg_typecheck_asGeode_overload_1(L)) return _bind_asGeode_overload_1(L);
		if (_lg_typecheck_asGeode_overload_2(L)) return _bind_asGeode_overload_2(L);

		luaL_error(L, "error in function asGeode, cannot match any of the overloads for function asGeode:\n  asGeode()\n  asGeode()\n");
		return 0;
	}

	// bool osg::Geode::addDrawable(osg::Drawable * drawable)
	static int _bind_addDrawable(lua_State *L) {
		if (!_lg_typecheck_addDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geode::addDrawable(osg::Drawable * drawable) function, expected prototype:\nbool osg::Geode::addDrawable(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geode::addDrawable(osg::Drawable *)");
		}
		bool lret = self->addDrawable(drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::removeDrawable(osg::Drawable * drawable)
	static int _bind_removeDrawable(lua_State *L) {
		if (!_lg_typecheck_removeDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geode::removeDrawable(osg::Drawable * drawable) function, expected prototype:\nbool osg::Geode::removeDrawable(osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geode::removeDrawable(osg::Drawable *)");
		}
		bool lret = self->removeDrawable(drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)
	static int _bind_removeDrawables(lua_State *L) {
		if (!_lg_typecheck_removeDrawables(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geode::removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1) function, expected prototype:\nbool osg::Geode::removeDrawables(unsigned int i, unsigned int numDrawablesToRemove = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		unsigned int numDrawablesToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 1;

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geode::removeDrawables(unsigned int, unsigned int)");
		}
		bool lret = self->removeDrawables(i, numDrawablesToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)
	static int _bind_replaceDrawable(lua_State *L) {
		if (!_lg_typecheck_replaceDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geode::replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw) function, expected prototype:\nbool osg::Geode::replaceDrawable(osg::Drawable * origDraw, osg::Drawable * newDraw)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Drawable* origDraw=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));
		osg::Drawable* newDraw=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geode::replaceDrawable(osg::Drawable *, osg::Drawable *)");
		}
		bool lret = self->replaceDrawable(origDraw, newDraw);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geode::setDrawable(unsigned int i, osg::Drawable * drawable)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geode::setDrawable(unsigned int i, osg::Drawable * drawable) function, expected prototype:\nbool osg::Geode::setDrawable(unsigned int i, osg::Drawable * drawable)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geode::setDrawable(unsigned int, osg::Drawable *)");
		}
		bool lret = self->setDrawable(i, drawable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Geode::getNumDrawables() const
	static int _bind_getNumDrawables(lua_State *L) {
		if (!_lg_typecheck_getNumDrawables(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geode::getNumDrawables() const function, expected prototype:\nunsigned int osg::Geode::getNumDrawables() const\nClass arguments details:\n");
		}


		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Geode::getNumDrawables() const");
		}
		unsigned int lret = self->getNumDrawables();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Drawable * osg::Geode::getDrawable(unsigned int i)
	static int _bind_getDrawable_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDrawable_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Drawable * osg::Geode::getDrawable(unsigned int i) function, expected prototype:\nosg::Drawable * osg::Geode::getDrawable(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Drawable * osg::Geode::getDrawable(unsigned int)");
		}
		osg::Drawable * lret = self->getDrawable(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// const osg::Drawable * osg::Geode::getDrawable(unsigned int i) const
	static int _bind_getDrawable_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDrawable_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Drawable * osg::Geode::getDrawable(unsigned int i) const function, expected prototype:\nconst osg::Drawable * osg::Geode::getDrawable(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Drawable * osg::Geode::getDrawable(unsigned int) const");
		}
		const osg::Drawable * lret = self->getDrawable(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Drawable >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Geode::getDrawable
	static int _bind_getDrawable(lua_State *L) {
		if (_lg_typecheck_getDrawable_overload_1(L)) return _bind_getDrawable_overload_1(L);
		if (_lg_typecheck_getDrawable_overload_2(L)) return _bind_getDrawable_overload_2(L);

		luaL_error(L, "error in function getDrawable, cannot match any of the overloads for function getDrawable:\n  getDrawable(unsigned int)\n  getDrawable(unsigned int)\n");
		return 0;
	}

	// bool osg::Geode::containsDrawable(const osg::Drawable * gset) const
	static int _bind_containsDrawable(lua_State *L) {
		if (!_lg_typecheck_containsDrawable(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geode::containsDrawable(const osg::Drawable * gset) const function, expected prototype:\nbool osg::Geode::containsDrawable(const osg::Drawable * gset) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Drawable* gset=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geode::containsDrawable(const osg::Drawable *) const");
		}
		bool lret = self->containsDrawable(gset);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Geode::getDrawableIndex(const osg::Drawable * drawable) const
	static int _bind_getDrawableIndex(lua_State *L) {
		if (!_lg_typecheck_getDrawableIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Geode::getDrawableIndex(const osg::Drawable * drawable) const function, expected prototype:\nunsigned int osg::Geode::getDrawableIndex(const osg::Drawable * drawable) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Geode::getDrawableIndex(const osg::Drawable *) const");
		}
		unsigned int lret = self->getDrawableIndex(drawable);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const osg::Geode::DrawableList & osg::Geode::getDrawableList() const
	static int _bind_getDrawableList(lua_State *L) {
		if (!_lg_typecheck_getDrawableList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Geode::DrawableList & osg::Geode::getDrawableList() const function, expected prototype:\nconst osg::Geode::DrawableList & osg::Geode::getDrawableList() const\nClass arguments details:\n");
		}


		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Geode::DrawableList & osg::Geode::getDrawableList() const");
		}
		const osg::Geode::DrawableList* lret = &self->getDrawableList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geode::DrawableList >::push(L,lret,false);

		return 1;
	}

	// void osg::Geode::compileDrawables(osg::RenderInfo & renderInfo)
	static int _bind_compileDrawables(lua_State *L) {
		if (!_lg_typecheck_compileDrawables(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Geode::compileDrawables(osg::RenderInfo & renderInfo) function, expected prototype:\nvoid osg::Geode::compileDrawables(osg::RenderInfo & renderInfo)\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osg::Geode::compileDrawables function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Geode::compileDrawables(osg::RenderInfo &)");
		}
		self->compileDrawables(renderInfo);

		return 0;
	}

	// const osg::BoundingBoxf & osg::Geode::getBoundingBox() const
	static int _bind_getBoundingBox(lua_State *L) {
		if (!_lg_typecheck_getBoundingBox(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::BoundingBoxf & osg::Geode::getBoundingBox() const function, expected prototype:\nconst osg::BoundingBoxf & osg::Geode::getBoundingBox() const\nClass arguments details:\n");
		}


		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::BoundingBoxf & osg::Geode::getBoundingBox() const");
		}
		const osg::BoundingBoxf* lret = &self->getBoundingBox();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxf >::push(L,lret,false);

		return 1;
	}

	// osg::BoundingSpheref osg::Geode::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSpheref osg::Geode::computeBound() const function, expected prototype:\nosg::BoundingSpheref osg::Geode::computeBound() const\nClass arguments details:\n");
		}


		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSpheref osg::Geode::computeBound() const");
		}
		osg::BoundingSpheref stack_lret = self->computeBound();
		osg::BoundingSpheref* lret = new osg::BoundingSpheref(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSpheref >::push(L,lret,true);

		return 1;
	}

	// void osg::Geode::releaseGLObjects(osg::State *  = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Geode::releaseGLObjects(osg::State *  = 0) const function, expected prototype:\nvoid osg::Geode::releaseGLObjects(osg::State *  = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::Geode* self=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Geode::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Geode* LunaTraits< osg::Geode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Geode::_bind_ctor(L);
}

void LunaTraits< osg::Geode >::_bind_dtor(osg::Geode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Geode >::className[] = "Geode";
const char LunaTraits< osg::Geode >::fullName[] = "osg::Geode";
const char LunaTraits< osg::Geode >::moduleName[] = "osg";
const char* LunaTraits< osg::Geode >::parents[] = {"osg.Node", 0};
const int LunaTraits< osg::Geode >::hash = 78463439;
const int LunaTraits< osg::Geode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Geode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Geode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Geode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Geode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Geode::_bind_className},
	{"libraryName", &luna_wrapper_osg_Geode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Geode::_bind_accept},
	{"asGeode", &luna_wrapper_osg_Geode::_bind_asGeode},
	{"addDrawable", &luna_wrapper_osg_Geode::_bind_addDrawable},
	{"removeDrawable", &luna_wrapper_osg_Geode::_bind_removeDrawable},
	{"removeDrawables", &luna_wrapper_osg_Geode::_bind_removeDrawables},
	{"replaceDrawable", &luna_wrapper_osg_Geode::_bind_replaceDrawable},
	{"setDrawable", &luna_wrapper_osg_Geode::_bind_setDrawable},
	{"getNumDrawables", &luna_wrapper_osg_Geode::_bind_getNumDrawables},
	{"getDrawable", &luna_wrapper_osg_Geode::_bind_getDrawable},
	{"containsDrawable", &luna_wrapper_osg_Geode::_bind_containsDrawable},
	{"getDrawableIndex", &luna_wrapper_osg_Geode::_bind_getDrawableIndex},
	{"getDrawableList", &luna_wrapper_osg_Geode::_bind_getDrawableList},
	{"compileDrawables", &luna_wrapper_osg_Geode::_bind_compileDrawables},
	{"getBoundingBox", &luna_wrapper_osg_Geode::_bind_getBoundingBox},
	{"computeBound", &luna_wrapper_osg_Geode::_bind_computeBound},
	{"releaseGLObjects", &luna_wrapper_osg_Geode::_bind_releaseGLObjects},
	{"__eq", &luna_wrapper_osg_Geode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Geode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Geode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Geode >::enumValues[] = {
	{0,0}
};


