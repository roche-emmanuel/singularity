#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_PositionalStateContainer.h>

class luna_wrapper_osgUtil_PositionalStateContainer {
public:
	typedef Luna< osgUtil::PositionalStateContainer > luna_t;

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
		//osgUtil::PositionalStateContainer* ptr= dynamic_cast< osgUtil::PositionalStateContainer* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::PositionalStateContainer* ptr= luna_caster< osg::Referenced, osgUtil::PositionalStateContainer >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::PositionalStateContainer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttrMatrixList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addPositionedAttribute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexUnitAttrMatrixListMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addPositionedTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,18903838)) ) return false;
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addPositionedAttribute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addPositionedTextureAttribute(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_draw(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,18903838)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::PositionalStateContainer::PositionalStateContainer()
	static osgUtil::PositionalStateContainer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PositionalStateContainer::PositionalStateContainer() function, expected prototype:\nosgUtil::PositionalStateContainer::PositionalStateContainer()\nClass arguments details:\n");
		}


		return new osgUtil::PositionalStateContainer();
	}

	// osgUtil::PositionalStateContainer::PositionalStateContainer(lua_Table * data)
	static osgUtil::PositionalStateContainer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PositionalStateContainer::PositionalStateContainer(lua_Table * data) function, expected prototype:\nosgUtil::PositionalStateContainer::PositionalStateContainer(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgUtil_PositionalStateContainer(L,NULL);
	}

	// Overload binder for osgUtil::PositionalStateContainer::PositionalStateContainer
	static osgUtil::PositionalStateContainer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PositionalStateContainer, cannot match any of the overloads for function PositionalStateContainer:\n  PositionalStateContainer()\n  PositionalStateContainer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgUtil::PositionalStateContainer::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::PositionalStateContainer::cloneType() const function, expected prototype:\nosg::Object * osgUtil::PositionalStateContainer::cloneType() const\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::PositionalStateContainer::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgUtil::PositionalStateContainer::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::PositionalStateContainer::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgUtil::PositionalStateContainer::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::PositionalStateContainer::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::PositionalStateContainer::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::PositionalStateContainer::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::PositionalStateContainer::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgUtil::PositionalStateContainer::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::PositionalStateContainer::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgUtil::PositionalStateContainer::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::PositionalStateContainer::libraryName() const function, expected prototype:\nconst char * osgUtil::PositionalStateContainer::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::PositionalStateContainer::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::PositionalStateContainer::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::PositionalStateContainer::className() const function, expected prototype:\nconst char * osgUtil::PositionalStateContainer::className() const\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::PositionalStateContainer::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::PositionalStateContainer::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::reset() function, expected prototype:\nvoid osgUtil::PositionalStateContainer::reset()\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::reset()");
		}
		self->reset();

		return 0;
	}

	// osgUtil::PositionalStateContainer::AttrMatrixList & osgUtil::PositionalStateContainer::getAttrMatrixList()
	static int _bind_getAttrMatrixList(lua_State *L) {
		if (!_lg_typecheck_getAttrMatrixList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PositionalStateContainer::AttrMatrixList & osgUtil::PositionalStateContainer::getAttrMatrixList() function, expected prototype:\nosgUtil::PositionalStateContainer::AttrMatrixList & osgUtil::PositionalStateContainer::getAttrMatrixList()\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::PositionalStateContainer::AttrMatrixList & osgUtil::PositionalStateContainer::getAttrMatrixList()");
		}
		const osgUtil::PositionalStateContainer::AttrMatrixList* lret = &self->getAttrMatrixList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PositionalStateContainer::AttrMatrixList >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::PositionalStateContainer::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_addPositionedAttribute(lua_State *L) {
		if (!_lg_typecheck_addPositionedAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::PositionalStateContainer::addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));
		const osg::StateAttribute* attr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::addPositionedAttribute(osg::RefMatrixd *, const osg::StateAttribute *)");
		}
		self->addPositionedAttribute(matrix, attr);

		return 0;
	}

	// osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap & osgUtil::PositionalStateContainer::getTexUnitAttrMatrixListMap()
	static int _bind_getTexUnitAttrMatrixListMap(lua_State *L) {
		if (!_lg_typecheck_getTexUnitAttrMatrixListMap(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap & osgUtil::PositionalStateContainer::getTexUnitAttrMatrixListMap() function, expected prototype:\nosgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap & osgUtil::PositionalStateContainer::getTexUnitAttrMatrixListMap()\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap & osgUtil::PositionalStateContainer::getTexUnitAttrMatrixListMap()");
		}
		const osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap* lret = &self->getTexUnitAttrMatrixListMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PositionalStateContainer::TexUnitAttrMatrixListMap >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::PositionalStateContainer::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_addPositionedTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_addPositionedTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::PositionalStateContainer::addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		unsigned int textureUnit=(unsigned int)lua_tointeger(L,2);
		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		const osg::StateAttribute* attr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,4));

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::addPositionedTextureAttribute(unsigned int, osg::RefMatrixd *, const osg::StateAttribute *)");
		}
		self->addPositionedTextureAttribute(textureUnit, matrix, attr);

		return 0;
	}

	// void osgUtil::PositionalStateContainer::draw(osg::State & state, osgUtil::RenderLeaf *& previous, const osg::Matrixd * postMultMatrix = 0)
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::draw(osg::State & state, osgUtil::RenderLeaf *& previous, const osg::Matrixd * postMultMatrix = 0) function, expected prototype:\nvoid osgUtil::PositionalStateContainer::draw(osg::State & state, osgUtil::RenderLeaf *& previous, const osg::Matrixd * postMultMatrix = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 18903838\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgUtil::PositionalStateContainer::draw function");
		}
		osg::State & state=*state_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));
		const osg::Matrixd* postMultMatrix=luatop>3 ? (Luna< osg::Matrixd >::check(L,4)) : (const osg::Matrixd*)0;

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::draw(osg::State &, osgUtil::RenderLeaf *&, const osg::Matrixd *)");
		}
		self->draw(state, previous, postMultMatrix);

		return 0;
	}

	// void osgUtil::PositionalStateContainer::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::base_setName(const std::string & name) function, expected prototype:\nvoid osgUtil::PositionalStateContainer::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::base_setName(const std::string &)");
		}
		self->PositionalStateContainer::setName(name);

		return 0;
	}

	// void osgUtil::PositionalStateContainer::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::base_computeDataVariance() function, expected prototype:\nvoid osgUtil::PositionalStateContainer::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::base_computeDataVariance()");
		}
		self->PositionalStateContainer::computeDataVariance();

		return 0;
	}

	// void osgUtil::PositionalStateContainer::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgUtil::PositionalStateContainer::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::base_setUserData(osg::Referenced *)");
		}
		self->PositionalStateContainer::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgUtil::PositionalStateContainer::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgUtil::PositionalStateContainer::base_getUserData() function, expected prototype:\nosg::Referenced * osgUtil::PositionalStateContainer::base_getUserData()\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgUtil::PositionalStateContainer::base_getUserData()");
		}
		osg::Referenced * lret = self->PositionalStateContainer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgUtil::PositionalStateContainer::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgUtil::PositionalStateContainer::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgUtil::PositionalStateContainer::base_getUserData() const\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgUtil::PositionalStateContainer::base_getUserData() const");
		}
		const osg::Referenced * lret = self->PositionalStateContainer::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::PositionalStateContainer::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgUtil::PositionalStateContainer::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osgUtil::PositionalStateContainer::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::base_releaseGLObjects(osg::State *) const");
		}
		self->PositionalStateContainer::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osgUtil::PositionalStateContainer::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::PositionalStateContainer::base_cloneType() const function, expected prototype:\nosg::Object * osgUtil::PositionalStateContainer::base_cloneType() const\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::PositionalStateContainer::base_cloneType() const");
		}
		osg::Object * lret = self->PositionalStateContainer::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgUtil::PositionalStateContainer::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::PositionalStateContainer::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgUtil::PositionalStateContainer::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::PositionalStateContainer::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::PositionalStateContainer::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->PositionalStateContainer::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::PositionalStateContainer::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::PositionalStateContainer::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgUtil::PositionalStateContainer::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::PositionalStateContainer::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->PositionalStateContainer::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgUtil::PositionalStateContainer::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::PositionalStateContainer::base_libraryName() const function, expected prototype:\nconst char * osgUtil::PositionalStateContainer::base_libraryName() const\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::PositionalStateContainer::base_libraryName() const");
		}
		const char * lret = self->PositionalStateContainer::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::PositionalStateContainer::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::PositionalStateContainer::base_className() const function, expected prototype:\nconst char * osgUtil::PositionalStateContainer::base_className() const\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::PositionalStateContainer::base_className() const");
		}
		const char * lret = self->PositionalStateContainer::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::PositionalStateContainer::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::base_reset() function, expected prototype:\nvoid osgUtil::PositionalStateContainer::base_reset()\nClass arguments details:\n");
		}


		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::base_reset()");
		}
		self->PositionalStateContainer::reset();

		return 0;
	}

	// void osgUtil::PositionalStateContainer::base_addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_base_addPositionedAttribute(lua_State *L) {
		if (!_lg_typecheck_base_addPositionedAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::base_addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::PositionalStateContainer::base_addPositionedAttribute(osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));
		const osg::StateAttribute* attr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,3));

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::base_addPositionedAttribute(osg::RefMatrixd *, const osg::StateAttribute *)");
		}
		self->PositionalStateContainer::addPositionedAttribute(matrix, attr);

		return 0;
	}

	// void osgUtil::PositionalStateContainer::base_addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)
	static int _bind_base_addPositionedTextureAttribute(lua_State *L) {
		if (!_lg_typecheck_base_addPositionedTextureAttribute(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::base_addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr) function, expected prototype:\nvoid osgUtil::PositionalStateContainer::base_addPositionedTextureAttribute(unsigned int textureUnit, osg::RefMatrixd * matrix, const osg::StateAttribute * attr)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		unsigned int textureUnit=(unsigned int)lua_tointeger(L,2);
		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,3));
		const osg::StateAttribute* attr=(Luna< osg::Referenced >::checkSubType< osg::StateAttribute >(L,4));

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::base_addPositionedTextureAttribute(unsigned int, osg::RefMatrixd *, const osg::StateAttribute *)");
		}
		self->PositionalStateContainer::addPositionedTextureAttribute(textureUnit, matrix, attr);

		return 0;
	}

	// void osgUtil::PositionalStateContainer::base_draw(osg::State & state, osgUtil::RenderLeaf *& previous, const osg::Matrixd * postMultMatrix = 0)
	static int _bind_base_draw(lua_State *L) {
		if (!_lg_typecheck_base_draw(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::PositionalStateContainer::base_draw(osg::State & state, osgUtil::RenderLeaf *& previous, const osg::Matrixd * postMultMatrix = 0) function, expected prototype:\nvoid osgUtil::PositionalStateContainer::base_draw(osg::State & state, osgUtil::RenderLeaf *& previous, const osg::Matrixd * postMultMatrix = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 18903838\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state_ptr=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));
		if( !state_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg state in osgUtil::PositionalStateContainer::base_draw function");
		}
		osg::State & state=*state_ptr;
		osgUtil::RenderLeaf* previous=(Luna< osg::Referenced >::checkSubType< osgUtil::RenderLeaf >(L,3));
		const osg::Matrixd* postMultMatrix=luatop>3 ? (Luna< osg::Matrixd >::check(L,4)) : (const osg::Matrixd*)0;

		osgUtil::PositionalStateContainer* self=Luna< osg::Referenced >::checkSubType< osgUtil::PositionalStateContainer >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::PositionalStateContainer::base_draw(osg::State &, osgUtil::RenderLeaf *&, const osg::Matrixd *)");
		}
		self->PositionalStateContainer::draw(state, previous, postMultMatrix);

		return 0;
	}


	// Operator binds:

};

osgUtil::PositionalStateContainer* LunaTraits< osgUtil::PositionalStateContainer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PositionalStateContainer::_bind_ctor(L);
}

void LunaTraits< osgUtil::PositionalStateContainer >::_bind_dtor(osgUtil::PositionalStateContainer* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::PositionalStateContainer >::className[] = "PositionalStateContainer";
const char LunaTraits< osgUtil::PositionalStateContainer >::fullName[] = "osgUtil::PositionalStateContainer";
const char LunaTraits< osgUtil::PositionalStateContainer >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PositionalStateContainer >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgUtil::PositionalStateContainer >::hash = 42016666;
const int LunaTraits< osgUtil::PositionalStateContainer >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::PositionalStateContainer >::methods[] = {
	{"cloneType", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_cloneType},
	{"clone", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_className},
	{"reset", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_reset},
	{"getAttrMatrixList", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_getAttrMatrixList},
	{"addPositionedAttribute", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_addPositionedAttribute},
	{"getTexUnitAttrMatrixListMap", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_getTexUnitAttrMatrixListMap},
	{"addPositionedTextureAttribute", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_addPositionedTextureAttribute},
	{"draw", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_draw},
	{"base_setName", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_reset},
	{"base_addPositionedAttribute", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_addPositionedAttribute},
	{"base_addPositionedTextureAttribute", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_addPositionedTextureAttribute},
	{"base_draw", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_base_draw},
	{"__eq", &luna_wrapper_osgUtil_PositionalStateContainer::_bind___eq},
	{"getTable", &luna_wrapper_osgUtil_PositionalStateContainer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PositionalStateContainer >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_PositionalStateContainer::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PositionalStateContainer >::enumValues[] = {
	{0,0}
};


