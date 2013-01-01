#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_Font.h>

class luna_wrapper_osgText_Font {
public:
	typedef Luna< osgText::Font > luna_t;

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
		//osgText::Font* ptr= dynamic_cast< osgText::Font* >(Luna< osg::Referenced >::check(L,1));
		osgText::Font* ptr= luna_caster< osg::Referenced, osgText::Font >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Font >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,2)) ) ) return false;
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

	inline static bool _lg_typecheck_getFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexEnv(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexEnv_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexEnv_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStateSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStateSet_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStateSet_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getKerning(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyph(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17799265) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyph3D(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hasVertical(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGlyphImageMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyphImageMargin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGlyphImageMarginRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyphImageMarginRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureSizeHint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureWidthHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTextureHeightHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMinFilterHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinFilterHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMagFilterHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMagFilterHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFontDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberCurveSamples(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberCurveSamples(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImplementation_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImplementation_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGlyphTextureList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultFont(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getKerning(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getGlyph(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17799265) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getGlyph3D(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_hasVertical(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::Font::Font(osgText::Font::FontImplementation * implementation = 0)
	static osgText::Font* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Font::Font(osgText::Font::FontImplementation * implementation = 0) function, expected prototype:\nosgText::Font::Font(osgText::Font::FontImplementation * implementation = 0)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osgText::Font::FontImplementation* implementation=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,1)) : (osgText::Font::FontImplementation*)0;

		return new osgText::Font(implementation);
	}

	// osgText::Font::Font(lua_Table * data, osgText::Font::FontImplementation * implementation = 0)
	static osgText::Font* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Font::Font(lua_Table * data, osgText::Font::FontImplementation * implementation = 0) function, expected prototype:\nosgText::Font::Font(lua_Table * data, osgText::Font::FontImplementation * implementation = 0)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osgText::Font::FontImplementation* implementation=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,2)) : (osgText::Font::FontImplementation*)0;

		return new wrapper_osgText_Font(L,NULL, implementation);
	}

	// Overload binder for osgText::Font::Font
	static osgText::Font* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Font, cannot match any of the overloads for function Font:\n  Font(osgText::Font::FontImplementation *)\n  Font(lua_Table *, osgText::Font::FontImplementation *)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::Font::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Font::cloneType() const function, expected prototype:\nosg::Object * osgText::Font::cloneType() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Font::cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Font::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Font::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Font::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Font::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Font::clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Font::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Font::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Font::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Font::isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Font::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Font::className() const function, expected prototype:\nconst char * osgText::Font::className() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Font::className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Font::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Font::libraryName() const function, expected prototype:\nconst char * osgText::Font::libraryName() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Font::libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// std::string osgText::Font::getFileName() const
	static int _bind_getFileName(lua_State *L) {
		if (!_lg_typecheck_getFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgText::Font::getFileName() const function, expected prototype:\nstd::string osgText::Font::getFileName() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgText::Font::getFileName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		std::string lret = self->getFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgText::Font::setTexEnv(osg::TexEnv * texenv)
	static int _bind_setTexEnv(lua_State *L) {
		if (!_lg_typecheck_setTexEnv(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::setTexEnv(osg::TexEnv * texenv) function, expected prototype:\nvoid osgText::Font::setTexEnv(osg::TexEnv * texenv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::TexEnv* texenv=(Luna< osg::Referenced >::checkSubType< osg::TexEnv >(L,2));

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::setTexEnv(osg::TexEnv *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTexEnv(texenv);

		return 0;
	}

	// osg::TexEnv * osgText::Font::getTexEnv()
	static int _bind_getTexEnv_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexEnv_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexEnv * osgText::Font::getTexEnv() function, expected prototype:\nosg::TexEnv * osgText::Font::getTexEnv()\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::TexEnv * osgText::Font::getTexEnv(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::TexEnv * lret = self->getTexEnv();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TexEnv >::push(L,lret,false);

		return 1;
	}

	// const osg::TexEnv * osgText::Font::getTexEnv() const
	static int _bind_getTexEnv_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexEnv_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::TexEnv * osgText::Font::getTexEnv() const function, expected prototype:\nconst osg::TexEnv * osgText::Font::getTexEnv() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::TexEnv * osgText::Font::getTexEnv() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::TexEnv * lret = self->getTexEnv();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TexEnv >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Font::getTexEnv
	static int _bind_getTexEnv(lua_State *L) {
		if (_lg_typecheck_getTexEnv_overload_1(L)) return _bind_getTexEnv_overload_1(L);
		if (_lg_typecheck_getTexEnv_overload_2(L)) return _bind_getTexEnv_overload_2(L);

		luaL_error(L, "error in function getTexEnv, cannot match any of the overloads for function getTexEnv:\n  getTexEnv()\n  getTexEnv()\n");
		return 0;
	}

	// void osgText::Font::setStateSet(osg::StateSet * stateset)
	static int _bind_setStateSet(lua_State *L) {
		if (!_lg_typecheck_setStateSet(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::setStateSet(osg::StateSet * stateset) function, expected prototype:\nvoid osgText::Font::setStateSet(osg::StateSet * stateset)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::StateSet* stateset=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::setStateSet(osg::StateSet *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setStateSet(stateset);

		return 0;
	}

	// osg::StateSet * osgText::Font::getStateSet()
	static int _bind_getStateSet_overload_1(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::StateSet * osgText::Font::getStateSet() function, expected prototype:\nosg::StateSet * osgText::Font::getStateSet()\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::StateSet * osgText::Font::getStateSet(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// const osg::StateSet * osgText::Font::getStateSet() const
	static int _bind_getStateSet_overload_2(lua_State *L) {
		if (!_lg_typecheck_getStateSet_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::StateSet * osgText::Font::getStateSet() const function, expected prototype:\nconst osg::StateSet * osgText::Font::getStateSet() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::StateSet * osgText::Font::getStateSet() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::StateSet * lret = self->getStateSet();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::StateSet >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Font::getStateSet
	static int _bind_getStateSet(lua_State *L) {
		if (_lg_typecheck_getStateSet_overload_1(L)) return _bind_getStateSet_overload_1(L);
		if (_lg_typecheck_getStateSet_overload_2(L)) return _bind_getStateSet_overload_2(L);

		luaL_error(L, "error in function getStateSet, cannot match any of the overloads for function getStateSet:\n  getStateSet()\n  getStateSet()\n");
		return 0;
	}

	// osg::Vec2f osgText::Font::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)
	static int _bind_getKerning(lua_State *L) {
		if (!_lg_typecheck_getKerning(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2f osgText::Font::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType) function, expected prototype:\nosg::Vec2f osgText::Font::getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)\nClass arguments details:\n");
		}

		unsigned int leftcharcode=(unsigned int)lua_tointeger(L,2);
		unsigned int rightcharcode=(unsigned int)lua_tointeger(L,3);
		osgText::KerningType kerningType=(osgText::KerningType)lua_tointeger(L,4);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec2f osgText::Font::getKerning(unsigned int, unsigned int, osgText::KerningType). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec2f stack_lret = self->getKerning(leftcharcode, rightcharcode, kerningType);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osgText::Glyph * osgText::Font::getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode)
	static int _bind_getGlyph(lua_State *L) {
		if (!_lg_typecheck_getGlyph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Glyph * osgText::Font::getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode) function, expected prototype:\nosgText::Glyph * osgText::Font::getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode)\nClass arguments details:\narg 1 ID = 17799265\n");
		}

		const osgText::FontResolution* fontSize_ptr=(Luna< osgText::FontResolution >::check(L,2));
		if( !fontSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fontSize in osgText::Font::getGlyph function");
		}
		const osgText::FontResolution & fontSize=*fontSize_ptr;
		unsigned int charcode=(unsigned int)lua_tointeger(L,3);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Glyph * osgText::Font::getGlyph(const osgText::FontResolution &, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osgText::Glyph * lret = self->getGlyph(fontSize, charcode);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Glyph >::push(L,lret,false);

		return 1;
	}

	// osgText::Glyph3D * osgText::Font::getGlyph3D(unsigned int charcode)
	static int _bind_getGlyph3D(lua_State *L) {
		if (!_lg_typecheck_getGlyph3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Glyph3D * osgText::Font::getGlyph3D(unsigned int charcode) function, expected prototype:\nosgText::Glyph3D * osgText::Font::getGlyph3D(unsigned int charcode)\nClass arguments details:\n");
		}

		unsigned int charcode=(unsigned int)lua_tointeger(L,2);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Glyph3D * osgText::Font::getGlyph3D(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osgText::Glyph3D * lret = self->getGlyph3D(charcode);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Glyph3D >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Font::hasVertical() const
	static int _bind_hasVertical(lua_State *L) {
		if (!_lg_typecheck_hasVertical(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Font::hasVertical() const function, expected prototype:\nbool osgText::Font::hasVertical() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Font::hasVertical() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->hasVertical();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::Font::setGlyphImageMargin(unsigned int margin)
	static int _bind_setGlyphImageMargin(lua_State *L) {
		if (!_lg_typecheck_setGlyphImageMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::setGlyphImageMargin(unsigned int margin) function, expected prototype:\nvoid osgText::Font::setGlyphImageMargin(unsigned int margin)\nClass arguments details:\n");
		}

		unsigned int margin=(unsigned int)lua_tointeger(L,2);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::setGlyphImageMargin(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setGlyphImageMargin(margin);

		return 0;
	}

	// unsigned int osgText::Font::getGlyphImageMargin() const
	static int _bind_getGlyphImageMargin(lua_State *L) {
		if (!_lg_typecheck_getGlyphImageMargin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Font::getGlyphImageMargin() const function, expected prototype:\nunsigned int osgText::Font::getGlyphImageMargin() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::Font::getGlyphImageMargin() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getGlyphImageMargin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Font::setGlyphImageMarginRatio(float margin)
	static int _bind_setGlyphImageMarginRatio(lua_State *L) {
		if (!_lg_typecheck_setGlyphImageMarginRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::setGlyphImageMarginRatio(float margin) function, expected prototype:\nvoid osgText::Font::setGlyphImageMarginRatio(float margin)\nClass arguments details:\n");
		}

		float margin=(float)lua_tonumber(L,2);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::setGlyphImageMarginRatio(float). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setGlyphImageMarginRatio(margin);

		return 0;
	}

	// float osgText::Font::getGlyphImageMarginRatio() const
	static int _bind_getGlyphImageMarginRatio(lua_State *L) {
		if (!_lg_typecheck_getGlyphImageMarginRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Font::getGlyphImageMarginRatio() const function, expected prototype:\nfloat osgText::Font::getGlyphImageMarginRatio() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Font::getGlyphImageMarginRatio() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		float lret = self->getGlyphImageMarginRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Font::setTextureSizeHint(unsigned int width, unsigned int height)
	static int _bind_setTextureSizeHint(lua_State *L) {
		if (!_lg_typecheck_setTextureSizeHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::setTextureSizeHint(unsigned int width, unsigned int height) function, expected prototype:\nvoid osgText::Font::setTextureSizeHint(unsigned int width, unsigned int height)\nClass arguments details:\n");
		}

		unsigned int width=(unsigned int)lua_tointeger(L,2);
		unsigned int height=(unsigned int)lua_tointeger(L,3);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::setTextureSizeHint(unsigned int, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setTextureSizeHint(width, height);

		return 0;
	}

	// unsigned int osgText::Font::getTextureWidthHint() const
	static int _bind_getTextureWidthHint(lua_State *L) {
		if (!_lg_typecheck_getTextureWidthHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Font::getTextureWidthHint() const function, expected prototype:\nunsigned int osgText::Font::getTextureWidthHint() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::Font::getTextureWidthHint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getTextureWidthHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgText::Font::getTextureHeightHint() const
	static int _bind_getTextureHeightHint(lua_State *L) {
		if (!_lg_typecheck_getTextureHeightHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Font::getTextureHeightHint() const function, expected prototype:\nunsigned int osgText::Font::getTextureHeightHint() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::Font::getTextureHeightHint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getTextureHeightHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Font::setMinFilterHint(osg::Texture::FilterMode mode)
	static int _bind_setMinFilterHint(lua_State *L) {
		if (!_lg_typecheck_setMinFilterHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::setMinFilterHint(osg::Texture::FilterMode mode) function, expected prototype:\nvoid osgText::Font::setMinFilterHint(osg::Texture::FilterMode mode)\nClass arguments details:\n");
		}

		osg::Texture::FilterMode mode=(osg::Texture::FilterMode)lua_tointeger(L,2);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::setMinFilterHint(osg::Texture::FilterMode). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMinFilterHint(mode);

		return 0;
	}

	// osg::Texture::FilterMode osgText::Font::getMinFilterHint() const
	static int _bind_getMinFilterHint(lua_State *L) {
		if (!_lg_typecheck_getMinFilterHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::FilterMode osgText::Font::getMinFilterHint() const function, expected prototype:\nosg::Texture::FilterMode osgText::Font::getMinFilterHint() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::FilterMode osgText::Font::getMinFilterHint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Texture::FilterMode lret = self->getMinFilterHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Font::setMagFilterHint(osg::Texture::FilterMode mode)
	static int _bind_setMagFilterHint(lua_State *L) {
		if (!_lg_typecheck_setMagFilterHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::setMagFilterHint(osg::Texture::FilterMode mode) function, expected prototype:\nvoid osgText::Font::setMagFilterHint(osg::Texture::FilterMode mode)\nClass arguments details:\n");
		}

		osg::Texture::FilterMode mode=(osg::Texture::FilterMode)lua_tointeger(L,2);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::setMagFilterHint(osg::Texture::FilterMode). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setMagFilterHint(mode);

		return 0;
	}

	// osg::Texture::FilterMode osgText::Font::getMagFilterHint() const
	static int _bind_getMagFilterHint(lua_State *L) {
		if (!_lg_typecheck_getMagFilterHint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Texture::FilterMode osgText::Font::getMagFilterHint() const function, expected prototype:\nosg::Texture::FilterMode osgText::Font::getMagFilterHint() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Texture::FilterMode osgText::Font::getMagFilterHint() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Texture::FilterMode lret = self->getMagFilterHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgText::Font::getFontDepth() const
	static int _bind_getFontDepth(lua_State *L) {
		if (!_lg_typecheck_getFontDepth(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Font::getFontDepth() const function, expected prototype:\nunsigned int osgText::Font::getFontDepth() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::Font::getFontDepth() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getFontDepth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Font::setNumberCurveSamples(unsigned int numSamples)
	static int _bind_setNumberCurveSamples(lua_State *L) {
		if (!_lg_typecheck_setNumberCurveSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::setNumberCurveSamples(unsigned int numSamples) function, expected prototype:\nvoid osgText::Font::setNumberCurveSamples(unsigned int numSamples)\nClass arguments details:\n");
		}

		unsigned int numSamples=(unsigned int)lua_tointeger(L,2);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::setNumberCurveSamples(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setNumberCurveSamples(numSamples);

		return 0;
	}

	// unsigned int osgText::Font::getNumberCurveSamples() const
	static int _bind_getNumberCurveSamples(lua_State *L) {
		if (!_lg_typecheck_getNumberCurveSamples(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osgText::Font::getNumberCurveSamples() const function, expected prototype:\nunsigned int osgText::Font::getNumberCurveSamples() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osgText::Font::getNumberCurveSamples() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		unsigned int lret = self->getNumberCurveSamples();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Font::setImplementation(osgText::Font::FontImplementation * implementation)
	static int _bind_setImplementation(lua_State *L) {
		if (!_lg_typecheck_setImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::setImplementation(osgText::Font::FontImplementation * implementation) function, expected prototype:\nvoid osgText::Font::setImplementation(osgText::Font::FontImplementation * implementation)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::Font::FontImplementation* implementation=(Luna< osg::Referenced >::checkSubType< osgText::Font::FontImplementation >(L,2));

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::setImplementation(osgText::Font::FontImplementation *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->setImplementation(implementation);

		return 0;
	}

	// osgText::Font::FontImplementation * osgText::Font::getImplementation()
	static int _bind_getImplementation_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImplementation_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Font::FontImplementation * osgText::Font::getImplementation() function, expected prototype:\nosgText::Font::FontImplementation * osgText::Font::getImplementation()\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Font::FontImplementation * osgText::Font::getImplementation(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osgText::Font::FontImplementation * lret = self->getImplementation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font::FontImplementation >::push(L,lret,false);

		return 1;
	}

	// const osgText::Font::FontImplementation * osgText::Font::getImplementation() const
	static int _bind_getImplementation_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImplementation_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Font::FontImplementation * osgText::Font::getImplementation() const function, expected prototype:\nconst osgText::Font::FontImplementation * osgText::Font::getImplementation() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Font::FontImplementation * osgText::Font::getImplementation() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgText::Font::FontImplementation * lret = self->getImplementation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font::FontImplementation >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Font::getImplementation
	static int _bind_getImplementation(lua_State *L) {
		if (_lg_typecheck_getImplementation_overload_1(L)) return _bind_getImplementation_overload_1(L);
		if (_lg_typecheck_getImplementation_overload_2(L)) return _bind_getImplementation_overload_2(L);

		luaL_error(L, "error in function getImplementation, cannot match any of the overloads for function getImplementation:\n  getImplementation()\n  getImplementation()\n");
		return 0;
	}

	// void osgText::Font::releaseGLObjects(osg::State * state = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::Font::releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// osgText::Font::GlyphTextureList & osgText::Font::getGlyphTextureList()
	static int _bind_getGlyphTextureList(lua_State *L) {
		if (!_lg_typecheck_getGlyphTextureList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Font::GlyphTextureList & osgText::Font::getGlyphTextureList() function, expected prototype:\nosgText::Font::GlyphTextureList & osgText::Font::getGlyphTextureList()\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Font::GlyphTextureList & osgText::Font::getGlyphTextureList(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osgText::Font::GlyphTextureList* lret = &self->getGlyphTextureList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Font::GlyphTextureList >::push(L,lret,false);

		return 1;
	}

	// static osg::ref_ptr< osgText::Font > & osgText::Font::getDefaultFont()
	static int _bind_getDefaultFont(lua_State *L) {
		if (!_lg_typecheck_getDefaultFont(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osgText::Font > & osgText::Font::getDefaultFont() function, expected prototype:\nstatic osg::ref_ptr< osgText::Font > & osgText::Font::getDefaultFont()\nClass arguments details:\n");
		}


		osg::ref_ptr< osgText::Font > & lret = osgText::Font::getDefaultFont();
		Luna< osgText::Font >::push(L,lret.get(),false);

		return 1;
	}

	// void osgText::Font::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::base_setName(const std::string & name) function, expected prototype:\nvoid osgText::Font::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::base_setName(const std::string &). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Font::setName(name);

		return 0;
	}

	// void osgText::Font::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::base_computeDataVariance() function, expected prototype:\nvoid osgText::Font::base_computeDataVariance()\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::base_computeDataVariance(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Font::computeDataVariance();

		return 0;
	}

	// void osgText::Font::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgText::Font::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::base_setUserData(osg::Referenced *). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Font::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgText::Font::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgText::Font::base_getUserData() function, expected prototype:\nosg::Referenced * osgText::Font::base_getUserData()\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osgText::Font::base_getUserData(). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Referenced * lret = self->Font::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgText::Font::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgText::Font::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgText::Font::base_getUserData() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgText::Font::base_getUserData() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const osg::Referenced * lret = self->Font::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgText::Font::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// osg::Object * osgText::Font::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Font::base_cloneType() const function, expected prototype:\nosg::Object * osgText::Font::base_cloneType() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Font::base_cloneType() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Font::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Font::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Font::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Font::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Font::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Font::base_clone(const osg::CopyOp &) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Object * lret = self->Font::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Font::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Font::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Font::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Font::base_isSameKindAs(const osg::Object *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Font::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Font::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Font::base_className() const function, expected prototype:\nconst char * osgText::Font::base_className() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Font::base_className() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Font::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Font::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Font::base_libraryName() const function, expected prototype:\nconst char * osgText::Font::base_libraryName() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Font::base_libraryName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		const char * lret = self->Font::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// std::string osgText::Font::base_getFileName() const
	static int _bind_base_getFileName(lua_State *L) {
		if (!_lg_typecheck_base_getFileName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in std::string osgText::Font::base_getFileName() const function, expected prototype:\nstd::string osgText::Font::base_getFileName() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call std::string osgText::Font::base_getFileName() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		std::string lret = self->Font::getFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// osg::Vec2f osgText::Font::base_getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)
	static int _bind_base_getKerning(lua_State *L) {
		if (!_lg_typecheck_base_getKerning(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2f osgText::Font::base_getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType) function, expected prototype:\nosg::Vec2f osgText::Font::base_getKerning(unsigned int leftcharcode, unsigned int rightcharcode, osgText::KerningType kerningType)\nClass arguments details:\n");
		}

		unsigned int leftcharcode=(unsigned int)lua_tointeger(L,2);
		unsigned int rightcharcode=(unsigned int)lua_tointeger(L,3);
		osgText::KerningType kerningType=(osgText::KerningType)lua_tointeger(L,4);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec2f osgText::Font::base_getKerning(unsigned int, unsigned int, osgText::KerningType). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osg::Vec2f stack_lret = self->Font::getKerning(leftcharcode, rightcharcode, kerningType);
		osg::Vec2f* lret = new osg::Vec2f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec2f >::push(L,lret,true);

		return 1;
	}

	// osgText::Glyph * osgText::Font::base_getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode)
	static int _bind_base_getGlyph(lua_State *L) {
		if (!_lg_typecheck_base_getGlyph(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Glyph * osgText::Font::base_getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode) function, expected prototype:\nosgText::Glyph * osgText::Font::base_getGlyph(const osgText::FontResolution & fontSize, unsigned int charcode)\nClass arguments details:\narg 1 ID = 17799265\n");
		}

		const osgText::FontResolution* fontSize_ptr=(Luna< osgText::FontResolution >::check(L,2));
		if( !fontSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fontSize in osgText::Font::base_getGlyph function");
		}
		const osgText::FontResolution & fontSize=*fontSize_ptr;
		unsigned int charcode=(unsigned int)lua_tointeger(L,3);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Glyph * osgText::Font::base_getGlyph(const osgText::FontResolution &, unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osgText::Glyph * lret = self->Font::getGlyph(fontSize, charcode);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Glyph >::push(L,lret,false);

		return 1;
	}

	// osgText::Glyph3D * osgText::Font::base_getGlyph3D(unsigned int charcode)
	static int _bind_base_getGlyph3D(lua_State *L) {
		if (!_lg_typecheck_base_getGlyph3D(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Glyph3D * osgText::Font::base_getGlyph3D(unsigned int charcode) function, expected prototype:\nosgText::Glyph3D * osgText::Font::base_getGlyph3D(unsigned int charcode)\nClass arguments details:\n");
		}

		unsigned int charcode=(unsigned int)lua_tointeger(L,2);

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgText::Glyph3D * osgText::Font::base_getGlyph3D(unsigned int). Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		osgText::Glyph3D * lret = self->Font::getGlyph3D(charcode);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Glyph3D >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Font::base_hasVertical() const
	static int _bind_base_hasVertical(lua_State *L) {
		if (!_lg_typecheck_base_hasVertical(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Font::base_hasVertical() const function, expected prototype:\nbool osgText::Font::base_hasVertical() const\nClass arguments details:\n");
		}


		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Font::base_hasVertical() const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		bool lret = self->Font::hasVertical();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgText::Font::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Font::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgText::Font::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgText::Font* self=Luna< osg::Referenced >::checkSubType< osgText::Font >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Font::base_releaseGLObjects(osg::State *) const. Got : '%s'",typeid(Luna< osg::Referenced >::check(L,1)).name());
		}
		self->Font::releaseGLObjects(state);

		return 0;
	}


	// Operator binds:

};

osgText::Font* LunaTraits< osgText::Font >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Font::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
}

void LunaTraits< osgText::Font >::_bind_dtor(osgText::Font* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Font >::className[] = "Font";
const char LunaTraits< osgText::Font >::fullName[] = "osgText::Font";
const char LunaTraits< osgText::Font >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Font >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgText::Font >::hash = 3397688;
const int LunaTraits< osgText::Font >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Font >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_Font::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_Font::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_Font::_bind_isSameKindAs},
	{"className", &luna_wrapper_osgText_Font::_bind_className},
	{"libraryName", &luna_wrapper_osgText_Font::_bind_libraryName},
	{"getFileName", &luna_wrapper_osgText_Font::_bind_getFileName},
	{"setTexEnv", &luna_wrapper_osgText_Font::_bind_setTexEnv},
	{"getTexEnv", &luna_wrapper_osgText_Font::_bind_getTexEnv},
	{"setStateSet", &luna_wrapper_osgText_Font::_bind_setStateSet},
	{"getStateSet", &luna_wrapper_osgText_Font::_bind_getStateSet},
	{"getKerning", &luna_wrapper_osgText_Font::_bind_getKerning},
	{"getGlyph", &luna_wrapper_osgText_Font::_bind_getGlyph},
	{"getGlyph3D", &luna_wrapper_osgText_Font::_bind_getGlyph3D},
	{"hasVertical", &luna_wrapper_osgText_Font::_bind_hasVertical},
	{"setGlyphImageMargin", &luna_wrapper_osgText_Font::_bind_setGlyphImageMargin},
	{"getGlyphImageMargin", &luna_wrapper_osgText_Font::_bind_getGlyphImageMargin},
	{"setGlyphImageMarginRatio", &luna_wrapper_osgText_Font::_bind_setGlyphImageMarginRatio},
	{"getGlyphImageMarginRatio", &luna_wrapper_osgText_Font::_bind_getGlyphImageMarginRatio},
	{"setTextureSizeHint", &luna_wrapper_osgText_Font::_bind_setTextureSizeHint},
	{"getTextureWidthHint", &luna_wrapper_osgText_Font::_bind_getTextureWidthHint},
	{"getTextureHeightHint", &luna_wrapper_osgText_Font::_bind_getTextureHeightHint},
	{"setMinFilterHint", &luna_wrapper_osgText_Font::_bind_setMinFilterHint},
	{"getMinFilterHint", &luna_wrapper_osgText_Font::_bind_getMinFilterHint},
	{"setMagFilterHint", &luna_wrapper_osgText_Font::_bind_setMagFilterHint},
	{"getMagFilterHint", &luna_wrapper_osgText_Font::_bind_getMagFilterHint},
	{"getFontDepth", &luna_wrapper_osgText_Font::_bind_getFontDepth},
	{"setNumberCurveSamples", &luna_wrapper_osgText_Font::_bind_setNumberCurveSamples},
	{"getNumberCurveSamples", &luna_wrapper_osgText_Font::_bind_getNumberCurveSamples},
	{"setImplementation", &luna_wrapper_osgText_Font::_bind_setImplementation},
	{"getImplementation", &luna_wrapper_osgText_Font::_bind_getImplementation},
	{"releaseGLObjects", &luna_wrapper_osgText_Font::_bind_releaseGLObjects},
	{"getGlyphTextureList", &luna_wrapper_osgText_Font::_bind_getGlyphTextureList},
	{"getDefaultFont", &luna_wrapper_osgText_Font::_bind_getDefaultFont},
	{"base_setName", &luna_wrapper_osgText_Font::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osgText_Font::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osgText_Font::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgText_Font::_bind_base_getUserData},
	{"base_cloneType", &luna_wrapper_osgText_Font::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgText_Font::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgText_Font::_bind_base_isSameKindAs},
	{"base_className", &luna_wrapper_osgText_Font::_bind_base_className},
	{"base_libraryName", &luna_wrapper_osgText_Font::_bind_base_libraryName},
	{"base_getFileName", &luna_wrapper_osgText_Font::_bind_base_getFileName},
	{"base_getKerning", &luna_wrapper_osgText_Font::_bind_base_getKerning},
	{"base_getGlyph", &luna_wrapper_osgText_Font::_bind_base_getGlyph},
	{"base_getGlyph3D", &luna_wrapper_osgText_Font::_bind_base_getGlyph3D},
	{"base_hasVertical", &luna_wrapper_osgText_Font::_bind_base_hasVertical},
	{"base_releaseGLObjects", &luna_wrapper_osgText_Font::_bind_base_releaseGLObjects},
	{"__eq", &luna_wrapper_osgText_Font::_bind___eq},
	{"getTable", &luna_wrapper_osgText_Font::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Font >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Font::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Font >::enumValues[] = {
	{0,0}
};


