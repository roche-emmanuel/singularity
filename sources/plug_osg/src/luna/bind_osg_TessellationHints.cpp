#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TessellationHints.h>

class luna_wrapper_osg_TessellationHints {
public:
	typedef Luna< osg::TessellationHints > luna_t;

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
		
		luna_wrapper_base* wrapper = dynamic_cast<luna_wrapper_base*>(self);
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
		//osg::TessellationHints* ptr= dynamic_cast< osg::TessellationHints* >(Luna< osg::Referenced >::check(L,1));
		osg::TessellationHints* ptr= luna_caster< osg::Referenced, osg::TessellationHints >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TessellationHints >::push(L,ptr,false);
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!(Luna< osg::CopyOp >::check(L,2))) ) return false;
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,27134364) ) return false;
		if( luatop>2 && (!(Luna< osg::CopyOp >::check(L,3))) ) return false;
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

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTessellationMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTessellationMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDetailRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDetailRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTargetNumFaces(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTargetNumFaces(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCreateFrontFace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreateFrontFace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCreateBackFace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreateBackFace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCreateNormals(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreateNormals(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCreateTextureCoords(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreateTextureCoords(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCreateTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreateTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCreateBody(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreateBody(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCreateBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCreateBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TessellationHints::TessellationHints()
	static osg::TessellationHints* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TessellationHints::TessellationHints() function, expected prototype:\nosg::TessellationHints::TessellationHints()\nClass arguments details:\n");
		}


		return new osg::TessellationHints();
	}

	// osg::TessellationHints::TessellationHints(const osg::TessellationHints & tess, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TessellationHints* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TessellationHints::TessellationHints(const osg::TessellationHints & tess, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TessellationHints::TessellationHints(const osg::TessellationHints & tess, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TessellationHints* tess_ptr=(Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1));
		if( !tess_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tess in osg::TessellationHints::TessellationHints function");
		}
		const osg::TessellationHints & tess=*tess_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TessellationHints::TessellationHints function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TessellationHints(tess, copyop);
	}

	// osg::TessellationHints::TessellationHints(lua_Table * data)
	static osg::TessellationHints* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TessellationHints::TessellationHints(lua_Table * data) function, expected prototype:\nosg::TessellationHints::TessellationHints(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_TessellationHints(L,NULL);
	}

	// osg::TessellationHints::TessellationHints(lua_Table * data, const osg::TessellationHints & tess, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TessellationHints* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TessellationHints::TessellationHints(lua_Table * data, const osg::TessellationHints & tess, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TessellationHints::TessellationHints(lua_Table * data, const osg::TessellationHints & tess, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TessellationHints* tess_ptr=(Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,2));
		if( !tess_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tess in osg::TessellationHints::TessellationHints function");
		}
		const osg::TessellationHints & tess=*tess_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TessellationHints::TessellationHints function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TessellationHints(L,NULL, tess, copyop);
	}

	// Overload binder for osg::TessellationHints::TessellationHints
	static osg::TessellationHints* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function TessellationHints, cannot match any of the overloads for function TessellationHints:\n  TessellationHints()\n  TessellationHints(const osg::TessellationHints &, const osg::CopyOp &)\n  TessellationHints(lua_Table *)\n  TessellationHints(lua_Table *, const osg::TessellationHints &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TessellationHints::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TessellationHints::cloneType() const function, expected prototype:\nosg::Object * osg::TessellationHints::cloneType() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TessellationHints::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TessellationHints::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TessellationHints::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TessellationHints::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TessellationHints::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TessellationHints::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TessellationHints::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TessellationHints::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TessellationHints::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TessellationHints::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TessellationHints::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TessellationHints::libraryName() const function, expected prototype:\nconst char * osg::TessellationHints::libraryName() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TessellationHints::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TessellationHints::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TessellationHints::className() const function, expected prototype:\nconst char * osg::TessellationHints::className() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TessellationHints::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::TessellationHints::setTessellationMode(osg::TessellationHints::TessellationMode mode)
	static int _bind_setTessellationMode(lua_State *L) {
		if (!_lg_typecheck_setTessellationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setTessellationMode(osg::TessellationHints::TessellationMode mode) function, expected prototype:\nvoid osg::TessellationHints::setTessellationMode(osg::TessellationHints::TessellationMode mode)\nClass arguments details:\n");
		}

		osg::TessellationHints::TessellationMode mode=(osg::TessellationHints::TessellationMode)lua_tointeger(L,2);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setTessellationMode(osg::TessellationHints::TessellationMode). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTessellationMode(mode);

		return 0;
	}

	// osg::TessellationHints::TessellationMode osg::TessellationHints::getTessellationMode() const
	static int _bind_getTessellationMode(lua_State *L) {
		if (!_lg_typecheck_getTessellationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TessellationHints::TessellationMode osg::TessellationHints::getTessellationMode() const function, expected prototype:\nosg::TessellationHints::TessellationMode osg::TessellationHints::getTessellationMode() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::TessellationHints::TessellationMode osg::TessellationHints::getTessellationMode() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::TessellationHints::TessellationMode lret = self->getTessellationMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TessellationHints::setDetailRatio(float ratio)
	static int _bind_setDetailRatio(lua_State *L) {
		if (!_lg_typecheck_setDetailRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setDetailRatio(float ratio) function, expected prototype:\nvoid osg::TessellationHints::setDetailRatio(float ratio)\nClass arguments details:\n");
		}

		float ratio=(float)lua_tonumber(L,2);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setDetailRatio(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setDetailRatio(ratio);

		return 0;
	}

	// float osg::TessellationHints::getDetailRatio() const
	static int _bind_getDetailRatio(lua_State *L) {
		if (!_lg_typecheck_getDetailRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::TessellationHints::getDetailRatio() const function, expected prototype:\nfloat osg::TessellationHints::getDetailRatio() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::TessellationHints::getDetailRatio() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getDetailRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TessellationHints::setTargetNumFaces(unsigned int target)
	static int _bind_setTargetNumFaces(lua_State *L) {
		if (!_lg_typecheck_setTargetNumFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setTargetNumFaces(unsigned int target) function, expected prototype:\nvoid osg::TessellationHints::setTargetNumFaces(unsigned int target)\nClass arguments details:\n");
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setTargetNumFaces(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTargetNumFaces(target);

		return 0;
	}

	// unsigned int osg::TessellationHints::getTargetNumFaces() const
	static int _bind_getTargetNumFaces(lua_State *L) {
		if (!_lg_typecheck_getTargetNumFaces(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::TessellationHints::getTargetNumFaces() const function, expected prototype:\nunsigned int osg::TessellationHints::getTargetNumFaces() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::TessellationHints::getTargetNumFaces() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getTargetNumFaces();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TessellationHints::setCreateFrontFace(bool on)
	static int _bind_setCreateFrontFace(lua_State *L) {
		if (!_lg_typecheck_setCreateFrontFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setCreateFrontFace(bool on) function, expected prototype:\nvoid osg::TessellationHints::setCreateFrontFace(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setCreateFrontFace(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCreateFrontFace(on);

		return 0;
	}

	// bool osg::TessellationHints::getCreateFrontFace() const
	static int _bind_getCreateFrontFace(lua_State *L) {
		if (!_lg_typecheck_getCreateFrontFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TessellationHints::getCreateFrontFace() const function, expected prototype:\nbool osg::TessellationHints::getCreateFrontFace() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TessellationHints::getCreateFrontFace() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getCreateFrontFace();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TessellationHints::setCreateBackFace(bool on)
	static int _bind_setCreateBackFace(lua_State *L) {
		if (!_lg_typecheck_setCreateBackFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setCreateBackFace(bool on) function, expected prototype:\nvoid osg::TessellationHints::setCreateBackFace(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setCreateBackFace(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCreateBackFace(on);

		return 0;
	}

	// bool osg::TessellationHints::getCreateBackFace() const
	static int _bind_getCreateBackFace(lua_State *L) {
		if (!_lg_typecheck_getCreateBackFace(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TessellationHints::getCreateBackFace() const function, expected prototype:\nbool osg::TessellationHints::getCreateBackFace() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TessellationHints::getCreateBackFace() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getCreateBackFace();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TessellationHints::setCreateNormals(bool on)
	static int _bind_setCreateNormals(lua_State *L) {
		if (!_lg_typecheck_setCreateNormals(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setCreateNormals(bool on) function, expected prototype:\nvoid osg::TessellationHints::setCreateNormals(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setCreateNormals(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCreateNormals(on);

		return 0;
	}

	// bool osg::TessellationHints::getCreateNormals() const
	static int _bind_getCreateNormals(lua_State *L) {
		if (!_lg_typecheck_getCreateNormals(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TessellationHints::getCreateNormals() const function, expected prototype:\nbool osg::TessellationHints::getCreateNormals() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TessellationHints::getCreateNormals() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getCreateNormals();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TessellationHints::setCreateTextureCoords(bool on)
	static int _bind_setCreateTextureCoords(lua_State *L) {
		if (!_lg_typecheck_setCreateTextureCoords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setCreateTextureCoords(bool on) function, expected prototype:\nvoid osg::TessellationHints::setCreateTextureCoords(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setCreateTextureCoords(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCreateTextureCoords(on);

		return 0;
	}

	// bool osg::TessellationHints::getCreateTextureCoords() const
	static int _bind_getCreateTextureCoords(lua_State *L) {
		if (!_lg_typecheck_getCreateTextureCoords(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TessellationHints::getCreateTextureCoords() const function, expected prototype:\nbool osg::TessellationHints::getCreateTextureCoords() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TessellationHints::getCreateTextureCoords() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getCreateTextureCoords();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TessellationHints::setCreateTop(bool on)
	static int _bind_setCreateTop(lua_State *L) {
		if (!_lg_typecheck_setCreateTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setCreateTop(bool on) function, expected prototype:\nvoid osg::TessellationHints::setCreateTop(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setCreateTop(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCreateTop(on);

		return 0;
	}

	// bool osg::TessellationHints::getCreateTop() const
	static int _bind_getCreateTop(lua_State *L) {
		if (!_lg_typecheck_getCreateTop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TessellationHints::getCreateTop() const function, expected prototype:\nbool osg::TessellationHints::getCreateTop() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TessellationHints::getCreateTop() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getCreateTop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TessellationHints::setCreateBody(bool on)
	static int _bind_setCreateBody(lua_State *L) {
		if (!_lg_typecheck_setCreateBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setCreateBody(bool on) function, expected prototype:\nvoid osg::TessellationHints::setCreateBody(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setCreateBody(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCreateBody(on);

		return 0;
	}

	// bool osg::TessellationHints::getCreateBody() const
	static int _bind_getCreateBody(lua_State *L) {
		if (!_lg_typecheck_getCreateBody(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TessellationHints::getCreateBody() const function, expected prototype:\nbool osg::TessellationHints::getCreateBody() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TessellationHints::getCreateBody() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getCreateBody();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TessellationHints::setCreateBottom(bool on)
	static int _bind_setCreateBottom(lua_State *L) {
		if (!_lg_typecheck_setCreateBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::setCreateBottom(bool on) function, expected prototype:\nvoid osg::TessellationHints::setCreateBottom(bool on)\nClass arguments details:\n");
		}

		bool on=(bool)(lua_toboolean(L,2)==1);

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::setCreateBottom(bool). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setCreateBottom(on);

		return 0;
	}

	// bool osg::TessellationHints::getCreateBottom() const
	static int _bind_getCreateBottom(lua_State *L) {
		if (!_lg_typecheck_getCreateBottom(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TessellationHints::getCreateBottom() const function, expected prototype:\nbool osg::TessellationHints::getCreateBottom() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TessellationHints::getCreateBottom() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->getCreateBottom();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::TessellationHints::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::base_setName(const std::string & name) function, expected prototype:\nvoid osg::TessellationHints::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TessellationHints::setName(name);

		return 0;
	}

	// void osg::TessellationHints::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::base_computeDataVariance() function, expected prototype:\nvoid osg::TessellationHints::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TessellationHints::computeDataVariance();

		return 0;
	}

	// void osg::TessellationHints::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::TessellationHints::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TessellationHints::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::TessellationHints::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::TessellationHints::base_getUserData() function, expected prototype:\nosg::Referenced * osg::TessellationHints::base_getUserData()\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::TessellationHints::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->TessellationHints::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::TessellationHints::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::TessellationHints::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::TessellationHints::base_getUserData() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::TessellationHints::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->TessellationHints::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TessellationHints::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::TessellationHints::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TessellationHints::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::TessellationHints::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TessellationHints::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->TessellationHints::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::TessellationHints::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TessellationHints::base_cloneType() const function, expected prototype:\nosg::Object * osg::TessellationHints::base_cloneType() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TessellationHints::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->TessellationHints::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TessellationHints::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TessellationHints::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::TessellationHints::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::TessellationHints::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TessellationHints::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->TessellationHints::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TessellationHints::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TessellationHints::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TessellationHints::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TessellationHints::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->TessellationHints::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TessellationHints::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TessellationHints::base_libraryName() const function, expected prototype:\nconst char * osg::TessellationHints::base_libraryName() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TessellationHints::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->TessellationHints::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TessellationHints::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TessellationHints::base_className() const function, expected prototype:\nconst char * osg::TessellationHints::base_className() const\nClass arguments details:\n");
		}


		osg::TessellationHints* self=Luna< osg::Referenced >::checkSubType< osg::TessellationHints >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TessellationHints::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->TessellationHints::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::TessellationHints* LunaTraits< osg::TessellationHints >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TessellationHints::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osg::TessellationHints >::_bind_dtor(osg::TessellationHints* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TessellationHints >::className[] = "TessellationHints";
const char LunaTraits< osg::TessellationHints >::fullName[] = "osg::TessellationHints";
const char LunaTraits< osg::TessellationHints >::moduleName[] = "osg";
const char* LunaTraits< osg::TessellationHints >::parents[] = {"osg.Object", 0};
const int LunaTraits< osg::TessellationHints >::hash = 79579025;
const int LunaTraits< osg::TessellationHints >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TessellationHints >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TessellationHints::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TessellationHints::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TessellationHints::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_TessellationHints::_bind_libraryName},
	{"className", &luna_wrapper_osg_TessellationHints::_bind_className},
	{"setTessellationMode", &luna_wrapper_osg_TessellationHints::_bind_setTessellationMode},
	{"getTessellationMode", &luna_wrapper_osg_TessellationHints::_bind_getTessellationMode},
	{"setDetailRatio", &luna_wrapper_osg_TessellationHints::_bind_setDetailRatio},
	{"getDetailRatio", &luna_wrapper_osg_TessellationHints::_bind_getDetailRatio},
	{"setTargetNumFaces", &luna_wrapper_osg_TessellationHints::_bind_setTargetNumFaces},
	{"getTargetNumFaces", &luna_wrapper_osg_TessellationHints::_bind_getTargetNumFaces},
	{"setCreateFrontFace", &luna_wrapper_osg_TessellationHints::_bind_setCreateFrontFace},
	{"getCreateFrontFace", &luna_wrapper_osg_TessellationHints::_bind_getCreateFrontFace},
	{"setCreateBackFace", &luna_wrapper_osg_TessellationHints::_bind_setCreateBackFace},
	{"getCreateBackFace", &luna_wrapper_osg_TessellationHints::_bind_getCreateBackFace},
	{"setCreateNormals", &luna_wrapper_osg_TessellationHints::_bind_setCreateNormals},
	{"getCreateNormals", &luna_wrapper_osg_TessellationHints::_bind_getCreateNormals},
	{"setCreateTextureCoords", &luna_wrapper_osg_TessellationHints::_bind_setCreateTextureCoords},
	{"getCreateTextureCoords", &luna_wrapper_osg_TessellationHints::_bind_getCreateTextureCoords},
	{"setCreateTop", &luna_wrapper_osg_TessellationHints::_bind_setCreateTop},
	{"getCreateTop", &luna_wrapper_osg_TessellationHints::_bind_getCreateTop},
	{"setCreateBody", &luna_wrapper_osg_TessellationHints::_bind_setCreateBody},
	{"getCreateBody", &luna_wrapper_osg_TessellationHints::_bind_getCreateBody},
	{"setCreateBottom", &luna_wrapper_osg_TessellationHints::_bind_setCreateBottom},
	{"getCreateBottom", &luna_wrapper_osg_TessellationHints::_bind_getCreateBottom},
	{"base_setName", &luna_wrapper_osg_TessellationHints::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_TessellationHints::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_TessellationHints::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_TessellationHints::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_TessellationHints::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_TessellationHints::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_TessellationHints::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_TessellationHints::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_TessellationHints::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_TessellationHints::_bind_base_className},
	{"__eq", &luna_wrapper_osg_TessellationHints::_bind___eq},
	{"getTable", &luna_wrapper_osg_TessellationHints::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TessellationHints >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TessellationHints::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TessellationHints >::enumValues[] = {
	{"USE_SHAPE_DEFAULTS", osg::TessellationHints::USE_SHAPE_DEFAULTS},
	{"USE_TARGET_NUM_FACES", osg::TessellationHints::USE_TARGET_NUM_FACES},
	{0,0}
};


