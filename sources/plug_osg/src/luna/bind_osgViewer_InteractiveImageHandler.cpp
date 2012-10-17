#include <plug_common.h>

class luna_wrapper_osgViewer_InteractiveImageHandler {
public:
	typedef Luna< osgViewer::InteractiveImageHandler > luna_t;

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
		osgViewer::InteractiveImageHandler* ptr= dynamic_cast< osgViewer::InteractiveImageHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::InteractiveImageHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
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

	inline static bool _lg_typecheck_handle(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85302998) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_cull(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,2286263)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image)
	static osgViewer::InteractiveImageHandler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image) function, expected prototype:\nosgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));

		return new osgViewer::InteractiveImageHandler(image);
	}

	// osgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image, osg::Texture2D * texture, osg::Camera * camera)
	static osgViewer::InteractiveImageHandler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image, osg::Texture2D * texture, osg::Camera * camera) function, expected prototype:\nosgViewer::InteractiveImageHandler::InteractiveImageHandler(osg::Image * image, osg::Texture2D * texture, osg::Camera * camera)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n");
		}

		osg::Image* image=dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,1));
		osg::Texture2D* texture=dynamic_cast< osg::Texture2D* >(Luna< osg::Referenced >::check(L,2));
		osg::Camera* camera=dynamic_cast< osg::Camera* >(Luna< osg::Referenced >::check(L,3));

		return new osgViewer::InteractiveImageHandler(image, texture, camera);
	}

	// Overload binder for osgViewer::InteractiveImageHandler::InteractiveImageHandler
	static osgViewer::InteractiveImageHandler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function InteractiveImageHandler, cannot match any of the overloads for function InteractiveImageHandler:\n  InteractiveImageHandler(osg::Image *)\n  InteractiveImageHandler(osg::Image *, osg::Texture2D *, osg::Camera *)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgViewer::InteractiveImageHandler::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::InteractiveImageHandler::cloneType() const function, expected prototype:\nosg::Object * osgViewer::InteractiveImageHandler::cloneType() const\nClass arguments details:\n");
		}


		osgViewer::InteractiveImageHandler* self=dynamic_cast< osgViewer::InteractiveImageHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::InteractiveImageHandler::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgViewer::InteractiveImageHandler::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgViewer::InteractiveImageHandler* self=dynamic_cast< osgViewer::InteractiveImageHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgViewer::InteractiveImageHandler::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgViewer::InteractiveImageHandler* self=dynamic_cast< osgViewer::InteractiveImageHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgViewer::InteractiveImageHandler::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::InteractiveImageHandler::libraryName() const function, expected prototype:\nconst char * osgViewer::InteractiveImageHandler::libraryName() const\nClass arguments details:\n");
		}


		osgViewer::InteractiveImageHandler* self=dynamic_cast< osgViewer::InteractiveImageHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::InteractiveImageHandler::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgViewer::InteractiveImageHandler::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgViewer::InteractiveImageHandler::className() const function, expected prototype:\nconst char * osgViewer::InteractiveImageHandler::className() const\nClass arguments details:\n");
		}


		osgViewer::InteractiveImageHandler* self=dynamic_cast< osgViewer::InteractiveImageHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgViewer::InteractiveImageHandler::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// bool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * , osg::NodeVisitor * )
	static int _bind_handle(lua_State *L) {
		if (!_lg_typecheck_handle(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * , osg::NodeVisitor * ) function, expected prototype:\nbool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter & ea, osgGA::GUIActionAdapter & aa, osg::Object * , osg::NodeVisitor * )\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 85302998\narg 3 ID = 50169651\narg 4 ID = 50169651\n");
		}

		const osgGA::GUIEventAdapter* ea_ptr=dynamic_cast< osgGA::GUIEventAdapter* >(Luna< osg::Referenced >::check(L,2));
		if( !ea_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ea in osgViewer::InteractiveImageHandler::handle function");
		}
		const osgGA::GUIEventAdapter & ea=*ea_ptr;
		osgGA::GUIActionAdapter* aa_ptr=(Luna< osgGA::GUIActionAdapter >::check(L,3));
		if( !aa_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg aa in osgViewer::InteractiveImageHandler::handle function");
		}
		osgGA::GUIActionAdapter & aa=*aa_ptr;
		osg::Object* _arg3=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,4));
		osg::NodeVisitor* _arg4=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,5));

		osgViewer::InteractiveImageHandler* self=dynamic_cast< osgViewer::InteractiveImageHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::handle(const osgGA::GUIEventAdapter &, osgGA::GUIActionAdapter &, osg::Object *, osg::NodeVisitor *)");
		}
		bool lret = self->handle(ea, aa, _arg3, _arg4);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const
	static int _bind_cull(lua_State *L) {
		if (!_lg_typecheck_cull(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const function, expected prototype:\nbool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor * nv, osg::Drawable * drawable, osg::RenderInfo * renderInfo) const\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 2286263\n");
		}

		osg::NodeVisitor* nv=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		osg::Drawable* drawable=dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,3));
		osg::RenderInfo* renderInfo=(Luna< osg::RenderInfo >::check(L,4));

		osgViewer::InteractiveImageHandler* self=dynamic_cast< osgViewer::InteractiveImageHandler* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgViewer::InteractiveImageHandler::cull(osg::NodeVisitor *, osg::Drawable *, osg::RenderInfo *) const");
		}
		bool lret = self->cull(nv, drawable, renderInfo);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgViewer::InteractiveImageHandler* LunaTraits< osgViewer::InteractiveImageHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgViewer_InteractiveImageHandler::_bind_ctor(L);
}

void LunaTraits< osgViewer::InteractiveImageHandler >::_bind_dtor(osgViewer::InteractiveImageHandler* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::InteractiveImageHandler >::className[] = "InteractiveImageHandler";
const char LunaTraits< osgViewer::InteractiveImageHandler >::fullName[] = "osgViewer::InteractiveImageHandler";
const char LunaTraits< osgViewer::InteractiveImageHandler >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::InteractiveImageHandler >::parents[] = {"osgGA.GUIEventHandler", "osg.CullCallback", 0};
const int LunaTraits< osgViewer::InteractiveImageHandler >::hash = 75863370;
const int LunaTraits< osgViewer::InteractiveImageHandler >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::InteractiveImageHandler >::methods[] = {
	{"cloneType", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_cloneType},
	{"clone", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_libraryName},
	{"className", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_className},
	{"handle", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_handle},
	{"cull", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind_cull},
	{"__eq", &luna_wrapper_osgViewer_InteractiveImageHandler::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::InteractiveImageHandler >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_InteractiveImageHandler::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::InteractiveImageHandler >::enumValues[] = {
	{0,0}
};


