#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Point.h>

class luna_wrapper_osg_Point {
public:
	typedef Luna< osg::Point > luna_t;

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
		//osg::Point* ptr= dynamic_cast< osg::Point* >(Luna< osg::Referenced >::check(L,1));
		osg::Point* ptr= luna_caster< osg::Referenced, osg::Point >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Point >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isnumber(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::Point* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Point* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFadeThresholdSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFadeThresholdSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDistanceAttenuation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDistanceAttenuation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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

	inline static bool _lg_typecheck_base_asTexture_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asTexture_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getMember(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_isTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_checkValidityOfAssociatedModes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_base_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getModeUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,48108040) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Point::Point()
	static osg::Point* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Point::Point() function, expected prototype:\nosg::Point::Point()\nClass arguments details:\n");
		}


		return new osg::Point();
	}

	// osg::Point::Point(float size)
	static osg::Point* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Point::Point(float size) function, expected prototype:\nosg::Point::Point(float size)\nClass arguments details:\n");
		}

		float size=(float)lua_tonumber(L,1);

		return new osg::Point(size);
	}

	// osg::Point::Point(const osg::Point & point, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Point* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Point::Point(const osg::Point & point, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Point::Point(const osg::Point & point, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Point* point_ptr=(Luna< osg::Referenced >::checkSubType< osg::Point >(L,1));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in osg::Point::Point function");
		}
		const osg::Point & point=*point_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Point::Point function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Point(point, copyop);
	}

	// osg::Point::Point(lua_Table * data)
	static osg::Point* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Point::Point(lua_Table * data) function, expected prototype:\nosg::Point::Point(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Point(L,NULL);
	}

	// osg::Point::Point(lua_Table * data, float size)
	static osg::Point* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Point::Point(lua_Table * data, float size) function, expected prototype:\nosg::Point::Point(lua_Table * data, float size)\nClass arguments details:\n");
		}

		float size=(float)lua_tonumber(L,2);

		return new wrapper_osg_Point(L,NULL, size);
	}

	// osg::Point::Point(lua_Table * data, const osg::Point & point, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Point* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Point::Point(lua_Table * data, const osg::Point & point, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Point::Point(lua_Table * data, const osg::Point & point, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Point* point_ptr=(Luna< osg::Referenced >::checkSubType< osg::Point >(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in osg::Point::Point function");
		}
		const osg::Point & point=*point_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Point::Point function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_Point(L,NULL, point, copyop);
	}

	// Overload binder for osg::Point::Point
	static osg::Point* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function Point, cannot match any of the overloads for function Point:\n  Point()\n  Point(float)\n  Point(const osg::Point &, const osg::CopyOp &)\n  Point(lua_Table *)\n  Point(lua_Table *, float)\n  Point(lua_Table *, const osg::Point &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Point::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Point::cloneType() const function, expected prototype:\nosg::Object * osg::Point::cloneType() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Point::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Point::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Point::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Point::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Point::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Point::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Point::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Point::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Point::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Point::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Point::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Point::libraryName() const function, expected prototype:\nconst char * osg::Point::libraryName() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Point::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Point::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Point::className() const function, expected prototype:\nconst char * osg::Point::className() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Point::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Point::getType() const
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Point::getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Point::getType() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Point::getType() const");
		}
		osg::StateAttribute::Type lret = self->getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Point::compare(const osg::StateAttribute & sa) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Point::compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Point::compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Point::compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Point::compare(const osg::StateAttribute &) const");
		}
		int lret = self->compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Point::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Point::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Point::getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Point::getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Point::getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Point::setSize(float size)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::setSize(float size) function, expected prototype:\nvoid osg::Point::setSize(float size)\nClass arguments details:\n");
		}

		float size=(float)lua_tonumber(L,2);

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::setSize(float)");
		}
		self->setSize(size);

		return 0;
	}

	// float osg::Point::getSize() const
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Point::getSize() const function, expected prototype:\nfloat osg::Point::getSize() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Point::getSize() const");
		}
		float lret = self->getSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Point::setFadeThresholdSize(float fadeThresholdSize)
	static int _bind_setFadeThresholdSize(lua_State *L) {
		if (!_lg_typecheck_setFadeThresholdSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::setFadeThresholdSize(float fadeThresholdSize) function, expected prototype:\nvoid osg::Point::setFadeThresholdSize(float fadeThresholdSize)\nClass arguments details:\n");
		}

		float fadeThresholdSize=(float)lua_tonumber(L,2);

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::setFadeThresholdSize(float)");
		}
		self->setFadeThresholdSize(fadeThresholdSize);

		return 0;
	}

	// float osg::Point::getFadeThresholdSize() const
	static int _bind_getFadeThresholdSize(lua_State *L) {
		if (!_lg_typecheck_getFadeThresholdSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Point::getFadeThresholdSize() const function, expected prototype:\nfloat osg::Point::getFadeThresholdSize() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Point::getFadeThresholdSize() const");
		}
		float lret = self->getFadeThresholdSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Point::setDistanceAttenuation(const osg::Vec3f & distanceAttenuation)
	static int _bind_setDistanceAttenuation(lua_State *L) {
		if (!_lg_typecheck_setDistanceAttenuation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::setDistanceAttenuation(const osg::Vec3f & distanceAttenuation) function, expected prototype:\nvoid osg::Point::setDistanceAttenuation(const osg::Vec3f & distanceAttenuation)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* distanceAttenuation_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !distanceAttenuation_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg distanceAttenuation in osg::Point::setDistanceAttenuation function");
		}
		const osg::Vec3f & distanceAttenuation=*distanceAttenuation_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::setDistanceAttenuation(const osg::Vec3f &)");
		}
		self->setDistanceAttenuation(distanceAttenuation);

		return 0;
	}

	// const osg::Vec3f & osg::Point::getDistanceAttenuation() const
	static int _bind_getDistanceAttenuation(lua_State *L) {
		if (!_lg_typecheck_getDistanceAttenuation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osg::Point::getDistanceAttenuation() const function, expected prototype:\nconst osg::Vec3f & osg::Point::getDistanceAttenuation() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osg::Point::getDistanceAttenuation() const");
		}
		const osg::Vec3f* lret = &self->getDistanceAttenuation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osg::Point::setMinSize(float minSize)
	static int _bind_setMinSize(lua_State *L) {
		if (!_lg_typecheck_setMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::setMinSize(float minSize) function, expected prototype:\nvoid osg::Point::setMinSize(float minSize)\nClass arguments details:\n");
		}

		float minSize=(float)lua_tonumber(L,2);

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::setMinSize(float)");
		}
		self->setMinSize(minSize);

		return 0;
	}

	// float osg::Point::getMinSize() const
	static int _bind_getMinSize(lua_State *L) {
		if (!_lg_typecheck_getMinSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Point::getMinSize() const function, expected prototype:\nfloat osg::Point::getMinSize() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Point::getMinSize() const");
		}
		float lret = self->getMinSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Point::setMaxSize(float maxSize)
	static int _bind_setMaxSize(lua_State *L) {
		if (!_lg_typecheck_setMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::setMaxSize(float maxSize) function, expected prototype:\nvoid osg::Point::setMaxSize(float maxSize)\nClass arguments details:\n");
		}

		float maxSize=(float)lua_tonumber(L,2);

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::setMaxSize(float)");
		}
		self->setMaxSize(maxSize);

		return 0;
	}

	// float osg::Point::getMaxSize() const
	static int _bind_getMaxSize(lua_State *L) {
		if (!_lg_typecheck_getMaxSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Point::getMaxSize() const function, expected prototype:\nfloat osg::Point::getMaxSize() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Point::getMaxSize() const");
		}
		float lret = self->getMaxSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Point::apply(osg::State & arg1) const
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Point::apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Point::apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::apply(osg::State &) const");
		}
		self->apply(_arg1);

		return 0;
	}

	// static osg::Point::Extensions * osg::Point::getExtensions(unsigned int contextID, bool createIfNotInitalized)
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::Point::Extensions * osg::Point::getExtensions(unsigned int contextID, bool createIfNotInitalized) function, expected prototype:\nstatic osg::Point::Extensions * osg::Point::getExtensions(unsigned int contextID, bool createIfNotInitalized)\nClass arguments details:\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		bool createIfNotInitalized=(bool)(lua_toboolean(L,2)==1);

		osg::Point::Extensions * lret = osg::Point::getExtensions(contextID, createIfNotInitalized);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Point::Extensions >::push(L,lret,false);

		return 1;
	}

	// static void osg::Point::setExtensions(unsigned int contextID, osg::Point::Extensions * extensions)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static void osg::Point::setExtensions(unsigned int contextID, osg::Point::Extensions * extensions) function, expected prototype:\nstatic void osg::Point::setExtensions(unsigned int contextID, osg::Point::Extensions * extensions)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);
		osg::Point::Extensions* extensions=(Luna< osg::Referenced >::checkSubType< osg::Point::Extensions >(L,2));

		osg::Point::setExtensions(contextID, extensions);

		return 0;
	}

	// void osg::Point::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Point::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::base_setName(const std::string &)");
		}
		self->Point::setName(name);

		return 0;
	}

	// void osg::Point::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::base_computeDataVariance() function, expected prototype:\nvoid osg::Point::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::base_computeDataVariance()");
		}
		self->Point::computeDataVariance();

		return 0;
	}

	// void osg::Point::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Point::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::base_setUserData(osg::Referenced *)");
		}
		self->Point::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Point::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Point::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Point::base_getUserData()\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Point::base_getUserData()");
		}
		osg::Referenced * lret = self->Point::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Point::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Point::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Point::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Point::base_getUserData() const");
		}
		const osg::Referenced * lret = self->Point::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Point::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Texture * osg::Point::base_asTexture()
	static int _bind_base_asTexture_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture * osg::Point::base_asTexture() function, expected prototype:\nosg::Texture * osg::Point::base_asTexture()\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture * osg::Point::base_asTexture()");
		}
		osg::Texture * lret = self->Point::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// const osg::Texture * osg::Point::base_asTexture() const
	static int _bind_base_asTexture_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asTexture_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Texture * osg::Point::base_asTexture() const function, expected prototype:\nconst osg::Texture * osg::Point::base_asTexture() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Texture * osg::Point::base_asTexture() const");
		}
		const osg::Texture * lret = self->Point::asTexture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Texture >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Point::base_asTexture
	static int _bind_base_asTexture(lua_State *L) {
		if (_lg_typecheck_base_asTexture_overload_1(L)) return _bind_base_asTexture_overload_1(L);
		if (_lg_typecheck_base_asTexture_overload_2(L)) return _bind_base_asTexture_overload_2(L);

		luaL_error(L, "error in function base_asTexture, cannot match any of the overloads for function base_asTexture:\n  base_asTexture()\n  base_asTexture()\n");
		return 0;
	}

	// unsigned int osg::Point::base_getMember() const
	static int _bind_base_getMember(lua_State *L) {
		if (!_lg_typecheck_base_getMember(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Point::base_getMember() const function, expected prototype:\nunsigned int osg::Point::base_getMember() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Point::base_getMember() const");
		}
		unsigned int lret = self->Point::getMember();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Point::base_isTextureAttribute() const
	static int _bind_base_isTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_isTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Point::base_isTextureAttribute() const function, expected prototype:\nbool osg::Point::base_isTextureAttribute() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Point::base_isTextureAttribute() const");
		}
		bool lret = self->Point::isTextureAttribute();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Point::base_checkValidityOfAssociatedModes(osg::State & arg1) const
	static int _bind_base_checkValidityOfAssociatedModes(lua_State *L) {
		if (!_lg_typecheck_base_checkValidityOfAssociatedModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Point::base_checkValidityOfAssociatedModes(osg::State & arg1) const function, expected prototype:\nbool osg::Point::base_checkValidityOfAssociatedModes(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Point::base_checkValidityOfAssociatedModes function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Point::base_checkValidityOfAssociatedModes(osg::State &) const");
		}
		bool lret = self->Point::checkValidityOfAssociatedModes(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Point::base_compileGLObjects(osg::State & arg1) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::base_compileGLObjects(osg::State & arg1) const function, expected prototype:\nvoid osg::Point::base_compileGLObjects(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Point::base_compileGLObjects function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::base_compileGLObjects(osg::State &) const");
		}
		self->Point::compileGLObjects(_arg1);

		return 0;
	}

	// void osg::Point::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::Point::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::base_releaseGLObjects(osg::State *) const");
		}
		self->Point::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::Point::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Point::base_cloneType() const function, expected prototype:\nosg::Object * osg::Point::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Point::base_cloneType() const");
		}
		osg::Object * lret = self->Point::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Point::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Point::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Point::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Point::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Point::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->Point::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Point::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Point::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Point::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Point::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->Point::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Point::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Point::base_libraryName() const function, expected prototype:\nconst char * osg::Point::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Point::base_libraryName() const");
		}
		const char * lret = self->Point::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Point::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Point::base_className() const function, expected prototype:\nconst char * osg::Point::base_className() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Point::base_className() const");
		}
		const char * lret = self->Point::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::StateAttribute::Type osg::Point::base_getType() const
	static int _bind_base_getType(lua_State *L) {
		if (!_lg_typecheck_base_getType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::Type osg::Point::base_getType() const function, expected prototype:\nosg::StateAttribute::Type osg::Point::base_getType() const\nClass arguments details:\n");
		}


		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateAttribute::Type osg::Point::base_getType() const");
		}
		osg::StateAttribute::Type lret = self->Point::getType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Point::base_compare(const osg::StateAttribute & sa) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Point::base_compare(const osg::StateAttribute & sa) const function, expected prototype:\nint osg::Point::base_compare(const osg::StateAttribute & sa) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::StateAttribute* sa_ptr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,2));
		if( !sa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sa in osg::Point::base_compare function");
		}
		const osg::StateAttribute & sa=*sa_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Point::base_compare(const osg::StateAttribute &) const");
		}
		int lret = self->Point::compare(sa);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Point::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const
	static int _bind_base_getModeUsage(lua_State *L) {
		if (!_lg_typecheck_base_getModeUsage(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Point::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const function, expected prototype:\nbool osg::Point::base_getModeUsage(osg::StateAttribute::ModeUsage & arg1) const\nClass arguments details:\narg 1 ID = 48108040\n");
		}

		osg::StateAttribute::ModeUsage* _arg1_ptr=(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Point::base_getModeUsage function");
		}
		osg::StateAttribute::ModeUsage & _arg1=*_arg1_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Point::base_getModeUsage(osg::StateAttribute::ModeUsage &) const");
		}
		bool lret = self->Point::getModeUsage(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Point::base_apply(osg::State & arg1) const
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Point::base_apply(osg::State & arg1) const function, expected prototype:\nvoid osg::Point::base_apply(osg::State & arg1) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::State* _arg1_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Point::base_apply function");
		}
		osg::State & _arg1=*_arg1_ptr;

		osg::Point* self=Luna< osg::Referenced >::checkSubType< osg::Point >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Point::base_apply(osg::State &) const");
		}
		self->Point::apply(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Point* LunaTraits< osg::Point >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Point::_bind_ctor(L);
}

void LunaTraits< osg::Point >::_bind_dtor(osg::Point* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Point >::className[] = "Point";
const char LunaTraits< osg::Point >::fullName[] = "osg::Point";
const char LunaTraits< osg::Point >::moduleName[] = "osg";
const char* LunaTraits< osg::Point >::parents[] = {"osg.StateAttribute", 0};
const int LunaTraits< osg::Point >::hash = 87067597;
const int LunaTraits< osg::Point >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Point >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Point::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Point::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Point::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osg_Point::_bind_libraryName},
	{"className", &luna_wrapper_osg_Point::_bind_className},
	{"getType", &luna_wrapper_osg_Point::_bind_getType},
	{"compare", &luna_wrapper_osg_Point::_bind_compare},
	{"getModeUsage", &luna_wrapper_osg_Point::_bind_getModeUsage},
	{"setSize", &luna_wrapper_osg_Point::_bind_setSize},
	{"getSize", &luna_wrapper_osg_Point::_bind_getSize},
	{"setFadeThresholdSize", &luna_wrapper_osg_Point::_bind_setFadeThresholdSize},
	{"getFadeThresholdSize", &luna_wrapper_osg_Point::_bind_getFadeThresholdSize},
	{"setDistanceAttenuation", &luna_wrapper_osg_Point::_bind_setDistanceAttenuation},
	{"getDistanceAttenuation", &luna_wrapper_osg_Point::_bind_getDistanceAttenuation},
	{"setMinSize", &luna_wrapper_osg_Point::_bind_setMinSize},
	{"getMinSize", &luna_wrapper_osg_Point::_bind_getMinSize},
	{"setMaxSize", &luna_wrapper_osg_Point::_bind_setMaxSize},
	{"getMaxSize", &luna_wrapper_osg_Point::_bind_getMaxSize},
	{"apply", &luna_wrapper_osg_Point::_bind_apply},
	{"getExtensions", &luna_wrapper_osg_Point::_bind_getExtensions},
	{"setExtensions", &luna_wrapper_osg_Point::_bind_setExtensions},
	{"base_setName", &luna_wrapper_osg_Point::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Point::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Point::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Point::_bind_base_getUserData},
	{"base_asTexture", &luna_wrapper_osg_Point::_bind_base_asTexture},
	{"base_getMember", &luna_wrapper_osg_Point::_bind_base_getMember},
	{"base_isTextureAttribute", &luna_wrapper_osg_Point::_bind_base_isTextureAttribute},
	{"base_checkValidityOfAssociatedModes", &luna_wrapper_osg_Point::_bind_base_checkValidityOfAssociatedModes},
	{"base_compileGLObjects", &luna_wrapper_osg_Point::_bind_base_compileGLObjects},
	{"base_releaseGLObjects", &luna_wrapper_osg_Point::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_Point::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Point::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_Point::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Point::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Point::_bind_base_className},
	{"base_getType", &luna_wrapper_osg_Point::_bind_base_getType},
	{"base_compare", &luna_wrapper_osg_Point::_bind_base_compare},
	{"base_getModeUsage", &luna_wrapper_osg_Point::_bind_base_getModeUsage},
	{"base_apply", &luna_wrapper_osg_Point::_bind_base_apply},
	{"__eq", &luna_wrapper_osg_Point::_bind___eq},
	{"getTable", &luna_wrapper_osg_Point::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Point >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Point::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Point >::enumValues[] = {
	{0,0}
};


