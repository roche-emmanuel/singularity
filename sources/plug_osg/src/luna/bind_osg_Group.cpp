#include <plug_common.h>

class luna_wrapper_osg_Group {
public:
	typedef Luna< osg::Group > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::Group* ptr= dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Group >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_asGroup_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_asGroup_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_traverse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChild_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_replaceChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_containsNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getChildIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Group::Group()
	static osg::Group* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Group::Group() function, expected prototype:\nosg::Group::Group()\nClass arguments details:\n");
		}


		return new osg::Group();
	}

	// osg::Group::Group(const osg::Group & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Group* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Group::Group(const osg::Group & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Group::Group(const osg::Group & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Group* _arg1_ptr=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Group::Group function");
		}
		const osg::Group & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Group::Group function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Group(_arg1, copyop);
	}

	// Overload binder for osg::Group::Group
	static osg::Group* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Group, cannot match any of the overloads for function Group:\n  Group()\n  Group(const osg::Group &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Group::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Group::cloneType() const function, expected prototype:\nosg::Object * osg::Group::cloneType() const\nClass arguments details:\n");
		}


		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Group::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Group::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Group::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Group::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Group::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Group::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Group::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Group::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Group::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Group::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Group::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Group::className() const function, expected prototype:\nconst char * osg::Group::className() const\nClass arguments details:\n");
		}


		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Group::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Group::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Group::libraryName() const function, expected prototype:\nconst char * osg::Group::libraryName() const\nClass arguments details:\n");
		}


		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Group::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Group::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Group::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Group::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Group::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Group::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// osg::Group * osg::Group::asGroup()
	static int _bind_asGroup_overload_1(lua_State *L) {
		if (!_lg_typecheck_asGroup_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Group * osg::Group::asGroup() function, expected prototype:\nosg::Group * osg::Group::asGroup()\nClass arguments details:\n");
		}


		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Group * osg::Group::asGroup()");
		}
		osg::Group * lret = self->asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// const osg::Group * osg::Group::asGroup() const
	static int _bind_asGroup_overload_2(lua_State *L) {
		if (!_lg_typecheck_asGroup_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Group * osg::Group::asGroup() const function, expected prototype:\nconst osg::Group * osg::Group::asGroup() const\nClass arguments details:\n");
		}


		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Group * osg::Group::asGroup() const");
		}
		const osg::Group * lret = self->asGroup();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Group >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::asGroup
	static int _bind_asGroup(lua_State *L) {
		if (_lg_typecheck_asGroup_overload_1(L)) return _bind_asGroup_overload_1(L);
		if (_lg_typecheck_asGroup_overload_2(L)) return _bind_asGroup_overload_2(L);

		luaL_error(L, "error in function asGroup, cannot match any of the overloads for function asGroup:\n  asGroup()\n  asGroup()\n");
		return 0;
	}

	// void osg::Group::traverse(osg::NodeVisitor & )
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Group::traverse(osg::NodeVisitor & ) function, expected prototype:\nvoid osg::Group::traverse(osg::NodeVisitor & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Group::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Group::traverse(osg::NodeVisitor &)");
		}
		self->traverse(_arg1);

		return 0;
	}

	// bool osg::Group::addChild(osg::Node * child)
	static int _bind_addChild(lua_State *L) {
		if (!_lg_typecheck_addChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Group::addChild(osg::Node * child) function, expected prototype:\nbool osg::Group::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Group::addChild(osg::Node *)");
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::insertChild(unsigned int index, osg::Node * child)
	static int _bind_insertChild(lua_State *L) {
		if (!_lg_typecheck_insertChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Group::insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Group::insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,3));

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Group::insertChild(unsigned int, osg::Node *)");
		}
		bool lret = self->insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::removeChild(osg::Node * child)
	static int _bind_removeChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_removeChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Group::removeChild(osg::Node * child) function, expected prototype:\nbool osg::Group::removeChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Group::removeChild(osg::Node *)");
		}
		bool lret = self->removeChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::removeChild(unsigned int pos, unsigned int numChildrenToRemove = 1)
	static int _bind_removeChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_removeChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Group::removeChild(unsigned int pos, unsigned int numChildrenToRemove = 1) function, expected prototype:\nbool osg::Group::removeChild(unsigned int pos, unsigned int numChildrenToRemove = 1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=luatop>2 ? (unsigned int)lua_tointeger(L,3) : 1;

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Group::removeChild(unsigned int, unsigned int)");
		}
		bool lret = self->removeChild(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Group::removeChild
	static int _bind_removeChild(lua_State *L) {
		if (_lg_typecheck_removeChild_overload_1(L)) return _bind_removeChild_overload_1(L);
		if (_lg_typecheck_removeChild_overload_2(L)) return _bind_removeChild_overload_2(L);

		luaL_error(L, "error in function removeChild, cannot match any of the overloads for function removeChild:\n  removeChild(osg::Node *)\n  removeChild(unsigned int, unsigned int)\n");
		return 0;
	}

	// bool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Group::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Group::removeChildren(unsigned int, unsigned int)");
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild)
	static int _bind_replaceChild(lua_State *L) {
		if (!_lg_typecheck_replaceChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild) function, expected prototype:\nbool osg::Group::replaceChild(osg::Node * origChild, osg::Node * newChild)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n");
		}

		osg::Node* origChild=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		osg::Node* newChild=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,3));

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Group::replaceChild(osg::Node *, osg::Node *)");
		}
		bool lret = self->replaceChild(origChild, newChild);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Group::getNumChildren() const
	static int _bind_getNumChildren(lua_State *L) {
		if (!_lg_typecheck_getNumChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Group::getNumChildren() const function, expected prototype:\nunsigned int osg::Group::getNumChildren() const\nClass arguments details:\n");
		}


		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Group::getNumChildren() const");
		}
		unsigned int lret = self->getNumChildren();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::Group::setChild(unsigned int i, osg::Node * node)
	static int _bind_setChild(lua_State *L) {
		if (!_lg_typecheck_setChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Group::setChild(unsigned int i, osg::Node * node) function, expected prototype:\nbool osg::Group::setChild(unsigned int i, osg::Node * node)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);
		osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,3));

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Group::setChild(unsigned int, osg::Node *)");
		}
		bool lret = self->setChild(i, node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::Node * osg::Group::getChild(unsigned int i)
	static int _bind_getChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_getChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Node * osg::Group::getChild(unsigned int i) function, expected prototype:\nosg::Node * osg::Group::getChild(unsigned int i)\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Node * osg::Group::getChild(unsigned int)");
		}
		osg::Node * lret = self->getChild(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osg::Group::getChild(unsigned int i) const
	static int _bind_getChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_getChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Node * osg::Group::getChild(unsigned int i) const function, expected prototype:\nconst osg::Node * osg::Group::getChild(unsigned int i) const\nClass arguments details:\n");
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Node * osg::Group::getChild(unsigned int) const");
		}
		const osg::Node * lret = self->getChild(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Group::getChild
	static int _bind_getChild(lua_State *L) {
		if (_lg_typecheck_getChild_overload_1(L)) return _bind_getChild_overload_1(L);
		if (_lg_typecheck_getChild_overload_2(L)) return _bind_getChild_overload_2(L);

		luaL_error(L, "error in function getChild, cannot match any of the overloads for function getChild:\n  getChild(unsigned int)\n  getChild(unsigned int)\n");
		return 0;
	}

	// bool osg::Group::containsNode(const osg::Node * node) const
	static int _bind_containsNode(lua_State *L) {
		if (!_lg_typecheck_containsNode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Group::containsNode(const osg::Node * node) const function, expected prototype:\nbool osg::Group::containsNode(const osg::Node * node) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Group::containsNode(const osg::Node *) const");
		}
		bool lret = self->containsNode(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::Group::getChildIndex(const osg::Node * node) const
	static int _bind_getChildIndex(lua_State *L) {
		if (!_lg_typecheck_getChildIndex(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Group::getChildIndex(const osg::Node * node) const function, expected prototype:\nunsigned int osg::Group::getChildIndex(const osg::Node * node) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Node* node=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Group::getChildIndex(const osg::Node *) const");
		}
		unsigned int lret = self->getChildIndex(node);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Group::releaseGLObjects(osg::State *  = 0) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Group::releaseGLObjects(osg::State *  = 0) const function, expected prototype:\nvoid osg::Group::releaseGLObjects(osg::State *  = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? dynamic_cast< osg::State* >(Luna< osg::Referenced >::check(L,2)) : (osg::State*)0;

		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Group::releaseGLObjects(osg::State *) const");
		}
		self->releaseGLObjects(_arg1);

		return 0;
	}

	// osg::BoundingSpheref osg::Group::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::BoundingSpheref osg::Group::computeBound() const function, expected prototype:\nosg::BoundingSpheref osg::Group::computeBound() const\nClass arguments details:\n");
		}


		osg::Group* self=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::BoundingSpheref osg::Group::computeBound() const");
		}
		osg::BoundingSpheref stack_lret = self->computeBound();
		osg::BoundingSpheref* lret = new osg::BoundingSpheref(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingSpheref >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::Group* LunaTraits< osg::Group >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Group::_bind_ctor(L);
}

void LunaTraits< osg::Group >::_bind_dtor(osg::Group* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Group >::className[] = "Group";
const char LunaTraits< osg::Group >::fullName[] = "osg::Group";
const char LunaTraits< osg::Group >::moduleName[] = "osg";
const char* LunaTraits< osg::Group >::parents[] = {"osg.Node", 0};
const int LunaTraits< osg::Group >::hash = 78851260;
const int LunaTraits< osg::Group >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Group >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Group::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Group::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Group::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Group::_bind_className},
	{"libraryName", &luna_wrapper_osg_Group::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Group::_bind_accept},
	{"asGroup", &luna_wrapper_osg_Group::_bind_asGroup},
	{"traverse", &luna_wrapper_osg_Group::_bind_traverse},
	{"addChild", &luna_wrapper_osg_Group::_bind_addChild},
	{"insertChild", &luna_wrapper_osg_Group::_bind_insertChild},
	{"removeChild", &luna_wrapper_osg_Group::_bind_removeChild},
	{"removeChildren", &luna_wrapper_osg_Group::_bind_removeChildren},
	{"replaceChild", &luna_wrapper_osg_Group::_bind_replaceChild},
	{"getNumChildren", &luna_wrapper_osg_Group::_bind_getNumChildren},
	{"setChild", &luna_wrapper_osg_Group::_bind_setChild},
	{"getChild", &luna_wrapper_osg_Group::_bind_getChild},
	{"containsNode", &luna_wrapper_osg_Group::_bind_containsNode},
	{"getChildIndex", &luna_wrapper_osg_Group::_bind_getChildIndex},
	{"releaseGLObjects", &luna_wrapper_osg_Group::_bind_releaseGLObjects},
	{"computeBound", &luna_wrapper_osg_Group::_bind_computeBound},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Group >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Group::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Group >::enumValues[] = {
	{0,0}
};


