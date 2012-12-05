#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_Style.h>

class luna_wrapper_osgText_Style {
public:
	typedef Luna< osgText::Style > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osgText::Style* ptr= dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::Style >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setBevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWidthRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWidthRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setThicknessRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getThicknessRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOutlineRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getOutlineRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSampleDensity(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSampleDensity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDefaultStyle(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osgText::Style::Style()
	static osgText::Style* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Style::Style() function, expected prototype:\nosgText::Style::Style()\nClass arguments details:\n");
		}


		return new osgText::Style();
	}

	// osgText::Style::Style(const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Style* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Style::Style(const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Style::Style(const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgText::Style* style_ptr=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in osgText::Style::Style function");
		}
		const osgText::Style & style=*style_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Style::Style function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgText::Style(style, copyop);
	}

	// osgText::Style::Style(lua_Table * data)
	static osgText::Style* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Style::Style(lua_Table * data) function, expected prototype:\nosgText::Style::Style(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgText_Style(L,NULL);
	}

	// osgText::Style::Style(lua_Table * data, const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::Style* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::Style::Style(lua_Table * data, const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::Style::Style(lua_Table * data, const osgText::Style & style, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgText::Style* style_ptr=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in osgText::Style::Style function");
		}
		const osgText::Style & style=*style_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::Style::Style function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgText_Style(L,NULL, style, copyop);
	}

	// Overload binder for osgText::Style::Style
	static osgText::Style* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function Style, cannot match any of the overloads for function Style:\n  Style()\n  Style(const osgText::Style &, const osg::CopyOp &)\n  Style(lua_Table *)\n  Style(lua_Table *, const osgText::Style &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::Style::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Style::cloneType() const function, expected prototype:\nosg::Object * osgText::Style::cloneType() const\nClass arguments details:\n");
		}


		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Style::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::Style::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::Style::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::Style::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::Style::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::Style::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::Style::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Style::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::Style::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Style::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::Style::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Style::libraryName() const function, expected prototype:\nconst char * osgText::Style::libraryName() const\nClass arguments details:\n");
		}


		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Style::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::Style::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::Style::className() const function, expected prototype:\nconst char * osgText::Style::className() const\nClass arguments details:\n");
		}


		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::Style::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::Style::setBevel(osgText::Bevel * bevel)
	static int _bind_setBevel(lua_State *L) {
		if (!_lg_typecheck_setBevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Style::setBevel(osgText::Bevel * bevel) function, expected prototype:\nvoid osgText::Style::setBevel(osgText::Bevel * bevel)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osgText::Bevel* bevel=dynamic_cast< osgText::Bevel* >(Luna< osg::Referenced >::check(L,2));

		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Style::setBevel(osgText::Bevel *)");
		}
		self->setBevel(bevel);

		return 0;
	}

	// const osgText::Bevel * osgText::Style::getBevel() const
	static int _bind_getBevel(lua_State *L) {
		if (!_lg_typecheck_getBevel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osgText::Bevel * osgText::Style::getBevel() const function, expected prototype:\nconst osgText::Bevel * osgText::Style::getBevel() const\nClass arguments details:\n");
		}


		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osgText::Bevel * osgText::Style::getBevel() const");
		}
		const osgText::Bevel * lret = self->getBevel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::Bevel >::push(L,lret,false);

		return 1;
	}

	// void osgText::Style::setWidthRatio(float widthRatio)
	static int _bind_setWidthRatio(lua_State *L) {
		if (!_lg_typecheck_setWidthRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Style::setWidthRatio(float widthRatio) function, expected prototype:\nvoid osgText::Style::setWidthRatio(float widthRatio)\nClass arguments details:\n");
		}

		float widthRatio=(float)lua_tonumber(L,2);

		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Style::setWidthRatio(float)");
		}
		self->setWidthRatio(widthRatio);

		return 0;
	}

	// float osgText::Style::getWidthRatio() const
	static int _bind_getWidthRatio(lua_State *L) {
		if (!_lg_typecheck_getWidthRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Style::getWidthRatio() const function, expected prototype:\nfloat osgText::Style::getWidthRatio() const\nClass arguments details:\n");
		}


		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Style::getWidthRatio() const");
		}
		float lret = self->getWidthRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Style::setThicknessRatio(float thicknessRatio)
	static int _bind_setThicknessRatio(lua_State *L) {
		if (!_lg_typecheck_setThicknessRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Style::setThicknessRatio(float thicknessRatio) function, expected prototype:\nvoid osgText::Style::setThicknessRatio(float thicknessRatio)\nClass arguments details:\n");
		}

		float thicknessRatio=(float)lua_tonumber(L,2);

		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Style::setThicknessRatio(float)");
		}
		self->setThicknessRatio(thicknessRatio);

		return 0;
	}

	// float osgText::Style::getThicknessRatio() const
	static int _bind_getThicknessRatio(lua_State *L) {
		if (!_lg_typecheck_getThicknessRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Style::getThicknessRatio() const function, expected prototype:\nfloat osgText::Style::getThicknessRatio() const\nClass arguments details:\n");
		}


		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Style::getThicknessRatio() const");
		}
		float lret = self->getThicknessRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Style::setOutlineRatio(float outlineRatio)
	static int _bind_setOutlineRatio(lua_State *L) {
		if (!_lg_typecheck_setOutlineRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Style::setOutlineRatio(float outlineRatio) function, expected prototype:\nvoid osgText::Style::setOutlineRatio(float outlineRatio)\nClass arguments details:\n");
		}

		float outlineRatio=(float)lua_tonumber(L,2);

		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Style::setOutlineRatio(float)");
		}
		self->setOutlineRatio(outlineRatio);

		return 0;
	}

	// float osgText::Style::getOutlineRatio() const
	static int _bind_getOutlineRatio(lua_State *L) {
		if (!_lg_typecheck_getOutlineRatio(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Style::getOutlineRatio() const function, expected prototype:\nfloat osgText::Style::getOutlineRatio() const\nClass arguments details:\n");
		}


		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Style::getOutlineRatio() const");
		}
		float lret = self->getOutlineRatio();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::Style::setSampleDensity(float sd)
	static int _bind_setSampleDensity(lua_State *L) {
		if (!_lg_typecheck_setSampleDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::Style::setSampleDensity(float sd) function, expected prototype:\nvoid osgText::Style::setSampleDensity(float sd)\nClass arguments details:\n");
		}

		float sd=(float)lua_tonumber(L,2);

		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::Style::setSampleDensity(float)");
		}
		self->setSampleDensity(sd);

		return 0;
	}

	// float osgText::Style::getSampleDensity() const
	static int _bind_getSampleDensity(lua_State *L) {
		if (!_lg_typecheck_getSampleDensity(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::Style::getSampleDensity() const function, expected prototype:\nfloat osgText::Style::getSampleDensity() const\nClass arguments details:\n");
		}


		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::Style::getSampleDensity() const");
		}
		float lret = self->getSampleDensity();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static osg::ref_ptr< osgText::Style > & osgText::Style::getDefaultStyle()
	static int _bind_getDefaultStyle(lua_State *L) {
		if (!_lg_typecheck_getDefaultStyle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osgText::Style > & osgText::Style::getDefaultStyle() function, expected prototype:\nstatic osg::ref_ptr< osgText::Style > & osgText::Style::getDefaultStyle()\nClass arguments details:\n");
		}


		osg::ref_ptr< osgText::Style > & lret = osgText::Style::getDefaultStyle();
		Luna< osgText::Style >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:
	// bool osgText::Style::operator==(const osgText::Style & style) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::Style::operator==(const osgText::Style & style) const function, expected prototype:\nbool osgText::Style::operator==(const osgText::Style & style) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osgText::Style* style_ptr=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in osgText::Style::operator== function");
		}
		const osgText::Style & style=*style_ptr;

		osgText::Style* self=dynamic_cast< osgText::Style* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::Style::operator==(const osgText::Style &) const");
		}
		bool lret = self->operator==(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgText::Style* LunaTraits< osgText::Style >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_Style::_bind_ctor(L);
}

void LunaTraits< osgText::Style >::_bind_dtor(osgText::Style* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::Style >::className[] = "Style";
const char LunaTraits< osgText::Style >::fullName[] = "osgText::Style";
const char LunaTraits< osgText::Style >::moduleName[] = "osgText";
const char* LunaTraits< osgText::Style >::parents[] = {"osg.Object", 0};
const int LunaTraits< osgText::Style >::hash = 17493466;
const int LunaTraits< osgText::Style >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::Style >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_Style::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_Style::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_Style::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgText_Style::_bind_libraryName},
	{"className", &luna_wrapper_osgText_Style::_bind_className},
	{"setBevel", &luna_wrapper_osgText_Style::_bind_setBevel},
	{"getBevel", &luna_wrapper_osgText_Style::_bind_getBevel},
	{"setWidthRatio", &luna_wrapper_osgText_Style::_bind_setWidthRatio},
	{"getWidthRatio", &luna_wrapper_osgText_Style::_bind_getWidthRatio},
	{"setThicknessRatio", &luna_wrapper_osgText_Style::_bind_setThicknessRatio},
	{"getThicknessRatio", &luna_wrapper_osgText_Style::_bind_getThicknessRatio},
	{"setOutlineRatio", &luna_wrapper_osgText_Style::_bind_setOutlineRatio},
	{"getOutlineRatio", &luna_wrapper_osgText_Style::_bind_getOutlineRatio},
	{"setSampleDensity", &luna_wrapper_osgText_Style::_bind_setSampleDensity},
	{"getSampleDensity", &luna_wrapper_osgText_Style::_bind_getSampleDensity},
	{"getDefaultStyle", &luna_wrapper_osgText_Style::_bind_getDefaultStyle},
	{"__eq", &luna_wrapper_osgText_Style::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::Style >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_Style::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::Style >::enumValues[] = {
	{0,0}
};


