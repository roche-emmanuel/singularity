#include <plug_common.h>

class luna_wrapper_osg_LOD {
public:
	typedef Luna< osg::LOD > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::LOD* ptr= dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LOD >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRangeMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRangeMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRange(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMinRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumRanges(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRangeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,74660837) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRangeList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::LOD::LOD()
	static osg::LOD* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LOD::LOD() function, expected prototype:\nosg::LOD::LOD()\nClass arguments details:\n");
		}


		return new osg::LOD();
	}

	// osg::LOD::LOD(const osg::LOD & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::LOD* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LOD::LOD(const osg::LOD & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::LOD::LOD(const osg::LOD & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::LOD* _arg1_ptr=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LOD::LOD function");
		}
		const osg::LOD & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LOD::LOD function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::LOD(_arg1, copyop);
	}

	// Overload binder for osg::LOD::LOD
	static osg::LOD* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function LOD, cannot match any of the overloads for function LOD:\n  LOD()\n  LOD(const osg::LOD &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::LOD::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LOD::cloneType() const function, expected prototype:\nosg::Object * osg::LOD::cloneType() const\nClass arguments details:\n");
		}


		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LOD::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::LOD::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::LOD::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::LOD::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::LOD::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::LOD::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::LOD::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LOD::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::LOD::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LOD::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::LOD::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LOD::className() const function, expected prototype:\nconst char * osg::LOD::className() const\nClass arguments details:\n");
		}


		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LOD::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::LOD::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::LOD::libraryName() const function, expected prototype:\nconst char * osg::LOD::libraryName() const\nClass arguments details:\n");
		}


		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::LOD::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::LOD::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LOD::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::LOD::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::LOD::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LOD::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::LOD::traverse(osg::NodeVisitor & )
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LOD::traverse(osg::NodeVisitor & ) function, expected prototype:\nvoid osg::LOD::traverse(osg::NodeVisitor & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::LOD::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LOD::traverse(osg::NodeVisitor &)");
		}
		self->traverse(_arg1);

		return 0;
	}

	// bool osg::LOD::addChild(osg::Node * child)
	static int _bind_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LOD::addChild(osg::Node * child) function, expected prototype:\nbool osg::LOD::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LOD::addChild(osg::Node *)");
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LOD::addChild(osg::Node * child, float min, float max)
	static int _bind_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LOD::addChild(osg::Node * child, float min, float max) function, expected prototype:\nbool osg::LOD::addChild(osg::Node * child, float min, float max)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LOD::addChild(osg::Node *, float, float)");
		}
		bool lret = self->addChild(child, min, max);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::LOD::addChild
	static int _bind_addChild(lua_State *L) {
		if (_lg_typecheck_addChild_overload_1(L)) return _bind_addChild_overload_1(L);
		if (_lg_typecheck_addChild_overload_2(L)) return _bind_addChild_overload_2(L);

		luaL_error(L, "error in function addChild, cannot match any of the overloads for function addChild:\n  addChild(osg::Node *)\n  addChild(osg::Node *, float, float)\n");
		return 0;
	}

	// bool osg::LOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1) function, expected prototype:\nbool osg::LOD::removeChildren(unsigned int pos, unsigned int numChildrenToRemove = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 1;

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LOD::removeChildren(unsigned int, unsigned int)");
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::LOD::setRangeMode(osg::LOD::RangeMode mode)
	static int _bind_setRangeMode(lua_State *L) {
		if (!_lg_typecheck_setRangeMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LOD::setRangeMode(osg::LOD::RangeMode mode) function, expected prototype:\nvoid osg::LOD::setRangeMode(osg::LOD::RangeMode mode)\nClass arguments details:\n");
		}

		osg::LOD::RangeMode mode=(osg::LOD::RangeMode)lua_tointeger(L,2);

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LOD::setRangeMode(osg::LOD::RangeMode)");
		}
		self->setRangeMode(mode);

		return 0;
	}

	// osg::LOD::RangeMode osg::LOD::getRangeMode() const
	static int _bind_getRangeMode(lua_State *L) {
		if (!_lg_typecheck_getRangeMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LOD::RangeMode osg::LOD::getRangeMode() const function, expected prototype:\nosg::LOD::RangeMode osg::LOD::getRangeMode() const\nClass arguments details:\n");
		}


		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::LOD::RangeMode osg::LOD::getRangeMode() const");
		}
		osg::LOD::RangeMode lret = self->getRangeMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LOD::setRange(unsigned int childNo, float min, float max)
	static int _bind_setRange(lua_State *L) {
		if (!_lg_typecheck_setRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LOD::setRange(unsigned int childNo, float min, float max) function, expected prototype:\nvoid osg::LOD::setRange(unsigned int childNo, float min, float max)\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);
		float min=(float)lua_tonumber(L,3);
		float max=(float)lua_tonumber(L,4);

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LOD::setRange(unsigned int, float, float)");
		}
		self->setRange(childNo, min, max);

		return 0;
	}

	// float osg::LOD::getMinRange(unsigned int childNo) const
	static int _bind_getMinRange(lua_State *L) {
		if (!_lg_typecheck_getMinRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::LOD::getMinRange(unsigned int childNo) const function, expected prototype:\nfloat osg::LOD::getMinRange(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::LOD::getMinRange(unsigned int) const");
		}
		float lret = self->getMinRange(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::LOD::getMaxRange(unsigned int childNo) const
	static int _bind_getMaxRange(lua_State *L) {
		if (!_lg_typecheck_getMaxRange(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::LOD::getMaxRange(unsigned int childNo) const function, expected prototype:\nfloat osg::LOD::getMaxRange(unsigned int childNo) const\nClass arguments details:\n");
		}

		unsigned int childNo=(unsigned int)lua_tointeger(L,2);

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::LOD::getMaxRange(unsigned int) const");
		}
		float lret = self->getMaxRange(childNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::LOD::getNumRanges() const
	static int _bind_getNumRanges(lua_State *L) {
		if (!_lg_typecheck_getNumRanges(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::LOD::getNumRanges() const function, expected prototype:\nunsigned int osg::LOD::getNumRanges() const\nClass arguments details:\n");
		}


		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::LOD::getNumRanges() const");
		}
		unsigned int lret = self->getNumRanges();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::LOD::setRangeList(const osg::LOD::RangeList & rangeList)
	static int _bind_setRangeList(lua_State *L) {
		if (!_lg_typecheck_setRangeList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LOD::setRangeList(const osg::LOD::RangeList & rangeList) function, expected prototype:\nvoid osg::LOD::setRangeList(const osg::LOD::RangeList & rangeList)\nClass arguments details:\narg 1 ID = 74660837\n");
		}

		const osg::LOD::RangeList* rangeList_ptr=(Luna< osg::LOD::RangeList >::check(L,2));
		if( !rangeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rangeList in osg::LOD::setRangeList function");
		}
		const osg::LOD::RangeList & rangeList=*rangeList_ptr;

		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LOD::setRangeList(const osg::LOD::RangeList &)");
		}
		self->setRangeList(rangeList);

		return 0;
	}

	// const osg::LOD::RangeList & osg::LOD::getRangeList() const
	static int _bind_getRangeList(lua_State *L) {
		if (!_lg_typecheck_getRangeList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::LOD::RangeList & osg::LOD::getRangeList() const function, expected prototype:\nconst osg::LOD::RangeList & osg::LOD::getRangeList() const\nClass arguments details:\n");
		}


		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::LOD::RangeList & osg::LOD::getRangeList() const");
		}
		const osg::LOD::RangeList* lret = &self->getRangeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::LOD::RangeList >::push(L,lret,false);

		return 1;
	}

	// osg::BoundingSpheref osg::LOD::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSpheref osg::LOD::computeBound() const function, expected prototype:\nosg::BoundingSpheref osg::LOD::computeBound() const\nClass arguments details:\n");
		}


		osg::LOD* self=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSpheref osg::LOD::computeBound() const");
		}
		osg::BoundingSpheref stack_lret = self->computeBound();
		osg::BoundingSpheref* lret = new osg::BoundingSpheref(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSpheref >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::LOD* LunaTraits< osg::LOD >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LOD::_bind_ctor(L);
}

void LunaTraits< osg::LOD >::_bind_dtor(osg::LOD* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LOD >::className[] = "LOD";
const char LunaTraits< osg::LOD >::fullName[] = "osg::LOD";
const char LunaTraits< osg::LOD >::moduleName[] = "osg";
const char* LunaTraits< osg::LOD >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::LOD >::hash = 67099258;
const int LunaTraits< osg::LOD >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LOD >::methods[] = {
	{"cloneType", &luna_wrapper_osg_LOD::_bind_cloneType},
	{"clone", &luna_wrapper_osg_LOD::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_LOD::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_LOD::_bind_className},
	{"libraryName", &luna_wrapper_osg_LOD::_bind_libraryName},
	{"accept", &luna_wrapper_osg_LOD::_bind_accept},
	{"traverse", &luna_wrapper_osg_LOD::_bind_traverse},
	{"addChild", &luna_wrapper_osg_LOD::_bind_addChild},
	{"removeChildren", &luna_wrapper_osg_LOD::_bind_removeChildren},
	{"setRangeMode", &luna_wrapper_osg_LOD::_bind_setRangeMode},
	{"getRangeMode", &luna_wrapper_osg_LOD::_bind_getRangeMode},
	{"setRange", &luna_wrapper_osg_LOD::_bind_setRange},
	{"getMinRange", &luna_wrapper_osg_LOD::_bind_getMinRange},
	{"getMaxRange", &luna_wrapper_osg_LOD::_bind_getMaxRange},
	{"getNumRanges", &luna_wrapper_osg_LOD::_bind_getNumRanges},
	{"setRangeList", &luna_wrapper_osg_LOD::_bind_setRangeList},
	{"getRangeList", &luna_wrapper_osg_LOD::_bind_getRangeList},
	{"computeBound", &luna_wrapper_osg_LOD::_bind_computeBound},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LOD >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LOD::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LOD >::enumValues[] = {
	{"USE_BOUNDING_SPHERE_CENTER", osg::LOD::USE_BOUNDING_SPHERE_CENTER},
	{"USER_DEFINED_CENTER", osg::LOD::USER_DEFINED_CENTER},
	{"DISTANCE_FROM_EYE_POINT", osg::LOD::DISTANCE_FROM_EYE_POINT},
	{"PIXEL_SIZE_ON_SCREEN", osg::LOD::PIXEL_SIZE_ON_SCREEN},
	{0,0}
};


