#include <plug_common.h>

class luna_wrapper_osgGA_TerrainManipulator {
public:
	typedef Luna< osgGA::TerrainManipulator > luna_t;

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
		osgGA::TerrainManipulator* ptr= dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgGA::TerrainManipulator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnumber(L,1)==0 || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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

	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRotationMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRotationMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setByMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTransformation(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgGA::TerrainManipulator::TerrainManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)
	static osgGA::TerrainManipulator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::TerrainManipulator::TerrainManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS) function, expected prototype:\nosgGA::TerrainManipulator::TerrainManipulator(int flags = osgGA::StandardManipulator::DEFAULT_SETTINGS)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : osgGA::StandardManipulator::DEFAULT_SETTINGS;

		return new osgGA::TerrainManipulator(flags);
	}

	// osgGA::TerrainManipulator::TerrainManipulator(const osgGA::TerrainManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)
	static osgGA::TerrainManipulator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::TerrainManipulator::TerrainManipulator(const osgGA::TerrainManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosgGA::TerrainManipulator::TerrainManipulator(const osgGA::TerrainManipulator & tm, const osg::CopyOp & copyOp = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osgGA::TerrainManipulator* tm_ptr=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if( !tm_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tm in osgGA::TerrainManipulator::TerrainManipulator function");
		}
		const osgGA::TerrainManipulator & tm=*tm_ptr;
		const osg::CopyOp* copyOp_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyOp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyOp in osgGA::TerrainManipulator::TerrainManipulator function");
		}
		const osg::CopyOp & copyOp=luatop>1 ? *copyOp_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osgGA::TerrainManipulator(tm, copyOp);
	}

	// Overload binder for osgGA::TerrainManipulator::TerrainManipulator
	static osgGA::TerrainManipulator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TerrainManipulator, cannot match any of the overloads for function TerrainManipulator:\n  TerrainManipulator(int)\n  TerrainManipulator(const osgGA::TerrainManipulator &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osgGA::TerrainManipulator::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::TerrainManipulator::cloneType() const function, expected prototype:\nosg::Object * osgGA::TerrainManipulator::cloneType() const\nClass arguments details:\n");
		}


		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::TerrainManipulator::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgGA::TerrainManipulator::clone(const osg::CopyOp & ) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osgGA::TerrainManipulator::clone(const osg::CopyOp & ) const function, expected prototype:\nosg::Object * osgGA::TerrainManipulator::clone(const osg::CopyOp & ) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgGA::TerrainManipulator::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osgGA::TerrainManipulator::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgGA::TerrainManipulator::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgGA::TerrainManipulator::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgGA::TerrainManipulator::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgGA::TerrainManipulator::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgGA::TerrainManipulator::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::TerrainManipulator::libraryName() const function, expected prototype:\nconst char * osgGA::TerrainManipulator::libraryName() const\nClass arguments details:\n");
		}


		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::TerrainManipulator::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgGA::TerrainManipulator::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgGA::TerrainManipulator::className() const function, expected prototype:\nconst char * osgGA::TerrainManipulator::className() const\nClass arguments details:\n");
		}


		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgGA::TerrainManipulator::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgGA::TerrainManipulator::setRotationMode(osgGA::TerrainManipulator::RotationMode mode)
	static int _bind_setRotationMode(lua_State *L) {
		if (!_lg_typecheck_setRotationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::TerrainManipulator::setRotationMode(osgGA::TerrainManipulator::RotationMode mode) function, expected prototype:\nvoid osgGA::TerrainManipulator::setRotationMode(osgGA::TerrainManipulator::RotationMode mode)\nClass arguments details:\n");
		}

		osgGA::TerrainManipulator::RotationMode mode=(osgGA::TerrainManipulator::RotationMode)lua_tointeger(L,2);

		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::TerrainManipulator::setRotationMode(osgGA::TerrainManipulator::RotationMode)");
		}
		self->setRotationMode(mode);

		return 0;
	}

	// osgGA::TerrainManipulator::RotationMode osgGA::TerrainManipulator::getRotationMode() const
	static int _bind_getRotationMode(lua_State *L) {
		if (!_lg_typecheck_getRotationMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgGA::TerrainManipulator::RotationMode osgGA::TerrainManipulator::getRotationMode() const function, expected prototype:\nosgGA::TerrainManipulator::RotationMode osgGA::TerrainManipulator::getRotationMode() const\nClass arguments details:\n");
		}


		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgGA::TerrainManipulator::RotationMode osgGA::TerrainManipulator::getRotationMode() const");
		}
		osgGA::TerrainManipulator::RotationMode lret = self->getRotationMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgGA::TerrainManipulator::setByMatrix(const osg::Matrixd & matrix)
	static int _bind_setByMatrix(lua_State *L) {
		if (!_lg_typecheck_setByMatrix(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::TerrainManipulator::setByMatrix(const osg::Matrixd & matrix) function, expected prototype:\nvoid osgGA::TerrainManipulator::setByMatrix(const osg::Matrixd & matrix)\nClass arguments details:\narg 1 ID = 18903838\n");
		}

		const osg::Matrixd* matrix_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !matrix_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg matrix in osgGA::TerrainManipulator::setByMatrix function");
		}
		const osg::Matrixd & matrix=*matrix_ptr;

		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::TerrainManipulator::setByMatrix(const osg::Matrixd &)");
		}
		self->setByMatrix(matrix);

		return 0;
	}

	// void osgGA::TerrainManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)
	static int _bind_setTransformation(lua_State *L) {
		if (!_lg_typecheck_setTransformation(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::TerrainManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up) function, expected prototype:\nvoid osgGA::TerrainManipulator::setTransformation(const osg::Vec3d & eye, const osg::Vec3d & center, const osg::Vec3d & up)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		const osg::Vec3d* eye_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgGA::TerrainManipulator::setTransformation function");
		}
		const osg::Vec3d & eye=*eye_ptr;
		const osg::Vec3d* center_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !center_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg center in osgGA::TerrainManipulator::setTransformation function");
		}
		const osg::Vec3d & center=*center_ptr;
		const osg::Vec3d* up_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !up_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg up in osgGA::TerrainManipulator::setTransformation function");
		}
		const osg::Vec3d & up=*up_ptr;

		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::TerrainManipulator::setTransformation(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &)");
		}
		self->setTransformation(eye, center, up);

		return 0;
	}

	// void osgGA::TerrainManipulator::setNode(osg::Node * )
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgGA::TerrainManipulator::setNode(osg::Node * ) function, expected prototype:\nvoid osgGA::TerrainManipulator::setNode(osg::Node * )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osgGA::TerrainManipulator* self=dynamic_cast< osgGA::TerrainManipulator* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgGA::TerrainManipulator::setNode(osg::Node *)");
		}
		self->setNode(_arg1);

		return 0;
	}


	// Operator binds:

};

osgGA::TerrainManipulator* LunaTraits< osgGA::TerrainManipulator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgGA_TerrainManipulator::_bind_ctor(L);
}

void LunaTraits< osgGA::TerrainManipulator >::_bind_dtor(osgGA::TerrainManipulator* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgGA::TerrainManipulator >::className[] = "TerrainManipulator";
const char LunaTraits< osgGA::TerrainManipulator >::fullName[] = "osgGA::TerrainManipulator";
const char LunaTraits< osgGA::TerrainManipulator >::moduleName[] = "osgGA";
const char* LunaTraits< osgGA::TerrainManipulator >::parents[] = {"osgGA.OrbitManipulator", 0};
const int LunaTraits< osgGA::TerrainManipulator >::hash = 58202646;
const int LunaTraits< osgGA::TerrainManipulator >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgGA::TerrainManipulator >::methods[] = {
	{"cloneType", &luna_wrapper_osgGA_TerrainManipulator::_bind_cloneType},
	{"clone", &luna_wrapper_osgGA_TerrainManipulator::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osgGA_TerrainManipulator::_bind_isSameKindAs},
	{"libraryName", &luna_wrapper_osgGA_TerrainManipulator::_bind_libraryName},
	{"className", &luna_wrapper_osgGA_TerrainManipulator::_bind_className},
	{"setRotationMode", &luna_wrapper_osgGA_TerrainManipulator::_bind_setRotationMode},
	{"getRotationMode", &luna_wrapper_osgGA_TerrainManipulator::_bind_getRotationMode},
	{"setByMatrix", &luna_wrapper_osgGA_TerrainManipulator::_bind_setByMatrix},
	{"setTransformation", &luna_wrapper_osgGA_TerrainManipulator::_bind_setTransformation},
	{"setNode", &luna_wrapper_osgGA_TerrainManipulator::_bind_setNode},
	{"__eq", &luna_wrapper_osgGA_TerrainManipulator::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgGA::TerrainManipulator >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgGA_TerrainManipulator::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgGA::TerrainManipulator >::enumValues[] = {
	{"ELEVATION_AZIM_ROLL", osgGA::TerrainManipulator::ELEVATION_AZIM_ROLL},
	{"ELEVATION_AZIM", osgGA::TerrainManipulator::ELEVATION_AZIM},
	{0,0}
};


