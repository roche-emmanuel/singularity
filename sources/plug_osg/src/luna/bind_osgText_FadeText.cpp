#include <plug_common.h>

#include <luna/wrappers/wrapper_osgText_FadeText.h>

class luna_wrapper_osgText_FadeText {
public:
	typedef Luna< osgText::FadeText > luna_t;

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
		osgText::FadeText* ptr= dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgText::FadeText >::push(L,ptr,false);
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
		if( (!dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1))) ) return false;
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
		if( (!dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setFadeSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFadeSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgText::FadeText::FadeText()
	static osgText::FadeText* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::FadeText::FadeText() function, expected prototype:\nosgText::FadeText::FadeText()\nClass arguments details:\n");
		}


		return new osgText::FadeText();
	}

	// osgText::FadeText::FadeText(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::FadeText* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::FadeText::FadeText(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::FadeText::FadeText(const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgText::Text* text_ptr=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,1));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::FadeText::FadeText function");
		}
		const osgText::Text & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::FadeText::FadeText function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgText::FadeText(text, copyop);
	}

	// osgText::FadeText::FadeText(lua_Table * data)
	static osgText::FadeText* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::FadeText::FadeText(lua_Table * data) function, expected prototype:\nosgText::FadeText::FadeText(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osgText_FadeText(L,NULL);
	}

	// osgText::FadeText::FadeText(lua_Table * data, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osgText::FadeText* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgText::FadeText::FadeText(lua_Table * data, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgText::FadeText::FadeText(lua_Table * data, const osgText::Text & text, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgText::Text* text_ptr=dynamic_cast< osgText::Text* >(Luna< osg::Referenced >::check(L,2));
		if( !text_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg text in osgText::FadeText::FadeText function");
		}
		const osgText::Text & text=*text_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osgText::FadeText::FadeText function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osgText_FadeText(L,NULL, text, copyop);
	}

	// Overload binder for osgText::FadeText::FadeText
	static osgText::FadeText* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FadeText, cannot match any of the overloads for function FadeText:\n  FadeText()\n  FadeText(const osgText::Text &, const osg::CopyOp &)\n  FadeText(lua_Table *)\n  FadeText(lua_Table *, const osgText::Text &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgText::FadeText::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::FadeText::cloneType() const function, expected prototype:\nosg::Object * osgText::FadeText::cloneType() const\nClass arguments details:\n");
		}


		osgText::FadeText* self=dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::FadeText::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgText::FadeText::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgText::FadeText::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgText::FadeText::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgText::FadeText::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgText::FadeText* self=dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgText::FadeText::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgText::FadeText::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgText::FadeText::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgText::FadeText::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgText::FadeText* self=dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgText::FadeText::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgText::FadeText::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::FadeText::libraryName() const function, expected prototype:\nconst char * osgText::FadeText::libraryName() const\nClass arguments details:\n");
		}


		osgText::FadeText* self=dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::FadeText::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgText::FadeText::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgText::FadeText::className() const function, expected prototype:\nconst char * osgText::FadeText::className() const\nClass arguments details:\n");
		}


		osgText::FadeText* self=dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgText::FadeText::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgText::FadeText::setFadeSpeed(float fadeSpeed)
	static int _bind_setFadeSpeed(lua_State *L) {
		if (!_lg_typecheck_setFadeSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::setFadeSpeed(float fadeSpeed) function, expected prototype:\nvoid osgText::FadeText::setFadeSpeed(float fadeSpeed)\nClass arguments details:\n");
		}

		float fadeSpeed=(float)lua_tonumber(L,2);

		osgText::FadeText* self=dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::FadeText::setFadeSpeed(float)");
		}
		self->setFadeSpeed(fadeSpeed);

		return 0;
	}

	// float osgText::FadeText::getFadeSpeed() const
	static int _bind_getFadeSpeed(lua_State *L) {
		if (!_lg_typecheck_getFadeSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgText::FadeText::getFadeSpeed() const function, expected prototype:\nfloat osgText::FadeText::getFadeSpeed() const\nClass arguments details:\n");
		}


		osgText::FadeText* self=dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgText::FadeText::getFadeSpeed() const");
		}
		float lret = self->getFadeSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgText::FadeText::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgText::FadeText::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgText::FadeText::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n");
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgText::FadeText::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgText::FadeText* self=dynamic_cast< osgText::FadeText* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgText::FadeText::drawImplementation(osg::RenderInfo &) const");
		}
		self->drawImplementation(renderInfo);

		return 0;
	}


	// Operator binds:

};

osgText::FadeText* LunaTraits< osgText::FadeText >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_FadeText::_bind_ctor(L);
}

void LunaTraits< osgText::FadeText >::_bind_dtor(osgText::FadeText* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgText::FadeText >::className[] = "FadeText";
const char LunaTraits< osgText::FadeText >::fullName[] = "osgText::FadeText";
const char LunaTraits< osgText::FadeText >::moduleName[] = "osgText";
const char* LunaTraits< osgText::FadeText >::parents[] = {"osgText.Text", 0};
const int LunaTraits< osgText::FadeText >::hash = 13187454;
const int LunaTraits< osgText::FadeText >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgText::FadeText >::methods[] = {
	{"cloneType", &luna_wrapper_osgText_FadeText::_bind_cloneType},
	{"clone", &luna_wrapper_osgText_FadeText::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgText_FadeText::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgText_FadeText::_bind_libraryName},
	{"className", &luna_wrapper_osgText_FadeText::_bind_className},
	{"setFadeSpeed", &luna_wrapper_osgText_FadeText::_bind_setFadeSpeed},
	{"getFadeSpeed", &luna_wrapper_osgText_FadeText::_bind_getFadeSpeed},
	{"drawImplementation", &luna_wrapper_osgText_FadeText::_bind_drawImplementation},
	{"__eq", &luna_wrapper_osgText_FadeText::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::FadeText >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgText_FadeText::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::FadeText >::enumValues[] = {
	{0,0}
};


