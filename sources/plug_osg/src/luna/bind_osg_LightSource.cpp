#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_LightSource.h>

class luna_wrapper_osg_LightSource {
public:
	typedef Luna< osg::LightSource > luna_t;

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
		osg::LightSource* ptr= dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LightSource >::push(L,ptr,false);
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
		if( (!dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLight_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLight_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateSetModes(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalStateSetModes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::LightSource::LightSource()
	static osg::LightSource* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LightSource::LightSource() function, expected prototype:\nosg::LightSource::LightSource()\nClass arguments details:\n");
		}


		return new osg::LightSource();
	}

	// osg::LightSource::LightSource(const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LightSource* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LightSource::LightSource(const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LightSource::LightSource(const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::LightSource* ls_ptr=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if( !ls_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ls in osg::LightSource::LightSource function");
		}
		const osg::LightSource & ls=*ls_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightSource::LightSource function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::LightSource(ls, copyop);
	}

	// osg::LightSource::LightSource(lua_Table * data)
	static osg::LightSource* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LightSource::LightSource(lua_Table * data) function, expected prototype:\nosg::LightSource::LightSource(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_LightSource(L,NULL);
	}

	// osg::LightSource::LightSource(lua_Table * data, const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LightSource* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LightSource::LightSource(lua_Table * data, const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LightSource::LightSource(lua_Table * data, const osg::LightSource & ls, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::LightSource* ls_ptr=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,2));
		if( !ls_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ls in osg::LightSource::LightSource function");
		}
		const osg::LightSource & ls=*ls_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightSource::LightSource function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_LightSource(L,NULL, ls, copyop);
	}

	// Overload binder for osg::LightSource::LightSource
	static osg::LightSource* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function LightSource, cannot match any of the overloads for function LightSource:\n  LightSource()\n  LightSource(const osg::LightSource &, const osg::CopyOp &)\n  LightSource(lua_Table *)\n  LightSource(lua_Table *, const osg::LightSource &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LightSource::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightSource::cloneType() const function, expected prototype:\nosg::Object * osg::LightSource::cloneType() const\nClass arguments details:\n");
		}


		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightSource::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LightSource::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LightSource::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::LightSource::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LightSource::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LightSource::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LightSource::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LightSource::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LightSource::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LightSource::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LightSource::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LightSource::className() const function, expected prototype:\nconst char * osg::LightSource::className() const\nClass arguments details:\n");
		}


		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LightSource::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LightSource::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LightSource::libraryName() const function, expected prototype:\nconst char * osg::LightSource::libraryName() const\nClass arguments details:\n");
		}


		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LightSource::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::LightSource::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightSource::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::LightSource::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::LightSource::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightSource::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::LightSource::setReferenceFrame(osg::LightSource::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightSource::setReferenceFrame(osg::LightSource::ReferenceFrame rf) function, expected prototype:\nvoid osg::LightSource::setReferenceFrame(osg::LightSource::ReferenceFrame rf)\nClass arguments details:\n");
		}

		osg::LightSource::ReferenceFrame rf=(osg::LightSource::ReferenceFrame)lua_tointeger(L,2);

		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightSource::setReferenceFrame(osg::LightSource::ReferenceFrame)");
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// osg::LightSource::ReferenceFrame osg::LightSource::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LightSource::ReferenceFrame osg::LightSource::getReferenceFrame() const function, expected prototype:\nosg::LightSource::ReferenceFrame osg::LightSource::getReferenceFrame() const\nClass arguments details:\n");
		}


		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::LightSource::ReferenceFrame osg::LightSource::getReferenceFrame() const");
		}
		osg::LightSource::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LightSource::setLight(osg::Light * light)
	static int _bind_setLight(lua_State *L) {
		if (!_lg_typecheck_setLight(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightSource::setLight(osg::Light * light) function, expected prototype:\nvoid osg::LightSource::setLight(osg::Light * light)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Light* light=dynamic_cast< osg::Light* >(Luna< osg::Referenced >::check(L,2));

		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightSource::setLight(osg::Light *)");
		}
		self->setLight(light);

		return 0;
	}

	// osg::Light * osg::LightSource::getLight()
	static int _bind_getLight_overload_1(lua_State *L) {
		if (!_lg_typecheck_getLight_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Light * osg::LightSource::getLight() function, expected prototype:\nosg::Light * osg::LightSource::getLight()\nClass arguments details:\n");
		}


		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Light * osg::LightSource::getLight()");
		}
		osg::Light * lret = self->getLight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Light >::push(L,lret,false);

		return 1;
	}

	// const osg::Light * osg::LightSource::getLight() const
	static int _bind_getLight_overload_2(lua_State *L) {
		if (!_lg_typecheck_getLight_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Light * osg::LightSource::getLight() const function, expected prototype:\nconst osg::Light * osg::LightSource::getLight() const\nClass arguments details:\n");
		}


		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Light * osg::LightSource::getLight() const");
		}
		const osg::Light * lret = self->getLight();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Light >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LightSource::getLight
	static int _bind_getLight(lua_State *L) {
		if (_lg_typecheck_getLight_overload_1(L)) return _bind_getLight_overload_1(L);
		if (_lg_typecheck_getLight_overload_2(L)) return _bind_getLight_overload_2(L);

		luaL_error(L, "error in function getLight, cannot match any of the overloads for function getLight:\n  getLight()\n  getLight()\n");
		return 0;
	}

	// void osg::LightSource::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const
	static int _bind_setStateSetModes(lua_State *L) {
		if (!_lg_typecheck_setStateSetModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightSource::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const function, expected prototype:\nvoid osg::LightSource::setStateSetModes(osg::StateSet & arg1, unsigned int arg2) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* _arg1_ptr=dynamic_cast< osg::StateSet* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LightSource::setStateSetModes function");
		}
		osg::StateSet & _arg1=*_arg1_ptr;
		unsigned int _arg2=(unsigned int)lua_tointeger(L,3);

		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightSource::setStateSetModes(osg::StateSet &, unsigned int) const");
		}
		self->setStateSetModes(_arg1, _arg2);

		return 0;
	}

	// void osg::LightSource::setLocalStateSetModes(unsigned int value = osg::StateAttribute::ON)
	static int _bind_setLocalStateSetModes(lua_State *L) {
		if (!_lg_typecheck_setLocalStateSetModes(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LightSource::setLocalStateSetModes(unsigned int value = osg::StateAttribute::ON) function, expected prototype:\nvoid osg::LightSource::setLocalStateSetModes(unsigned int value = osg::StateAttribute::ON)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int value=luatop>1 ? (unsigned int)lua_tointeger(L,2) : osg::StateAttribute::ON;

		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LightSource::setLocalStateSetModes(unsigned int)");
		}
		self->setLocalStateSetModes(value);

		return 0;
	}

	// osg::BoundingSphered osg::LightSource::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSphered osg::LightSource::computeBound() const function, expected prototype:\nosg::BoundingSphered osg::LightSource::computeBound() const\nClass arguments details:\n");
		}


		osg::LightSource* self=dynamic_cast< osg::LightSource* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSphered osg::LightSource::computeBound() const");
		}
		osg::BoundingSphered stack_lret = self->computeBound();
		osg::BoundingSphered* lret = new osg::BoundingSphered(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSphered >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::LightSource* LunaTraits< osg::LightSource >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LightSource::_bind_ctor(L);
}

void LunaTraits< osg::LightSource >::_bind_dtor(osg::LightSource* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LightSource >::className[] = "LightSource";
const char LunaTraits< osg::LightSource >::fullName[] = "osg::LightSource";
const char LunaTraits< osg::LightSource >::moduleName[] = "osg";
const char* LunaTraits< osg::LightSource >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::LightSource >::hash = 32208268;
const int LunaTraits< osg::LightSource >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LightSource >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LightSource::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LightSource::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LightSource::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_LightSource::_bind_className},
	{"libraryName", &luna_wrapper_osg_LightSource::_bind_libraryName},
	{"accept", &luna_wrapper_osg_LightSource::_bind_accept},
	{"setReferenceFrame", &luna_wrapper_osg_LightSource::_bind_setReferenceFrame},
	{"getReferenceFrame", &luna_wrapper_osg_LightSource::_bind_getReferenceFrame},
	{"setLight", &luna_wrapper_osg_LightSource::_bind_setLight},
	{"getLight", &luna_wrapper_osg_LightSource::_bind_getLight},
	{"setStateSetModes", &luna_wrapper_osg_LightSource::_bind_setStateSetModes},
	{"setLocalStateSetModes", &luna_wrapper_osg_LightSource::_bind_setLocalStateSetModes},
	{"computeBound", &luna_wrapper_osg_LightSource::_bind_computeBound},
	{"__eq", &luna_wrapper_osg_LightSource::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LightSource >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LightSource::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LightSource >::enumValues[] = {
	{"RELATIVE_RF", osg::LightSource::RELATIVE_RF},
	{"ABSOLUTE_RF", osg::LightSource::ABSOLUTE_RF},
	{0,0}
};


