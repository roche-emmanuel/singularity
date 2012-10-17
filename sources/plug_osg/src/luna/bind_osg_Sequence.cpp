#include <plug_common.h>

class luna_wrapper_osg_Sequence {
public:
	typedef Luna< osg::Sequence > luna_t;

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
		osg::Sequence* ptr= dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Sequence >::push(L,ptr,false);
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
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_insertChild_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTime(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTimeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4564820) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTimeList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDefaultTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDefaultTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLastFrameTime(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLastFrameTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLoopMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLoopMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBegin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBegin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEnd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setInterval(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getInterval(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSpeed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSpeed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumRepeats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumRepeats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDuration(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDuration(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isnumber(L,2)==0 ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSync(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSync(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClearOnStop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getClearOnStop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Sequence::Sequence()
	static osg::Sequence* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Sequence::Sequence() function, expected prototype:\nosg::Sequence::Sequence()\nClass arguments details:\n");
		}


		return new osg::Sequence();
	}

	// osg::Sequence::Sequence(const osg::Sequence & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::Sequence* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Sequence::Sequence(const osg::Sequence & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::Sequence::Sequence(const osg::Sequence & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::Sequence* _arg1_ptr=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sequence::Sequence function");
		}
		const osg::Sequence & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Sequence::Sequence function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::Sequence(_arg1, copyop);
	}

	// Overload binder for osg::Sequence::Sequence
	static osg::Sequence* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Sequence, cannot match any of the overloads for function Sequence:\n  Sequence()\n  Sequence(const osg::Sequence &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::Sequence::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sequence::cloneType() const function, expected prototype:\nosg::Object * osg::Sequence::cloneType() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sequence::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Sequence::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Sequence::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::Sequence::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::Sequence::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Sequence::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::Sequence::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Sequence::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sequence::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Sequence::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Sequence::className() const function, expected prototype:\nconst char * osg::Sequence::className() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Sequence::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Sequence::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Sequence::libraryName() const function, expected prototype:\nconst char * osg::Sequence::libraryName() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Sequence::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Sequence::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::Sequence::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::Sequence::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::Sequence::traverse(osg::NodeVisitor & )
	static int _bind_traverse(lua_State *L) {
		if (!_lg_typecheck_traverse(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::traverse(osg::NodeVisitor & ) function, expected prototype:\nvoid osg::Sequence::traverse(osg::NodeVisitor & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* _arg1_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Sequence::traverse function");
		}
		osg::NodeVisitor & _arg1=*_arg1_ptr;

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::traverse(osg::NodeVisitor &)");
		}
		self->traverse(_arg1);

		return 0;
	}

	// bool osg::Sequence::addChild(osg::Node * child)
	static int _bind_addChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::addChild(osg::Node * child) function, expected prototype:\nbool osg::Sequence::addChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sequence::addChild(osg::Node *)");
		}
		bool lret = self->addChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::addChild(osg::Node * child, double t)
	static int _bind_addChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_addChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::addChild(osg::Node * child, double t) function, expected prototype:\nbool osg::Sequence::addChild(osg::Node * child, double t)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		double t=(double)lua_tonumber(L,3);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sequence::addChild(osg::Node *, double)");
		}
		bool lret = self->addChild(child, t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Sequence::addChild
	static int _bind_addChild(lua_State *L) {
		if (_lg_typecheck_addChild_overload_1(L)) return _bind_addChild_overload_1(L);
		if (_lg_typecheck_addChild_overload_2(L)) return _bind_addChild_overload_2(L);

		luaL_error(L, "error in function addChild, cannot match any of the overloads for function addChild:\n  addChild(osg::Node *)\n  addChild(osg::Node *, double)\n");
		return 0;
	}

	// bool osg::Sequence::insertChild(unsigned int index, osg::Node * child)
	static int _bind_insertChild_overload_1(lua_State *L) {
		if (!_lg_typecheck_insertChild_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::insertChild(unsigned int index, osg::Node * child) function, expected prototype:\nbool osg::Sequence::insertChild(unsigned int index, osg::Node * child)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,3));

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sequence::insertChild(unsigned int, osg::Node *)");
		}
		bool lret = self->insertChild(index, child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::insertChild(unsigned int index, osg::Node * child, double t)
	static int _bind_insertChild_overload_2(lua_State *L) {
		if (!_lg_typecheck_insertChild_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::insertChild(unsigned int index, osg::Node * child, double t) function, expected prototype:\nbool osg::Sequence::insertChild(unsigned int index, osg::Node * child, double t)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,3));
		double t=(double)lua_tonumber(L,4);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sequence::insertChild(unsigned int, osg::Node *, double)");
		}
		bool lret = self->insertChild(index, child, t);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Sequence::insertChild
	static int _bind_insertChild(lua_State *L) {
		if (_lg_typecheck_insertChild_overload_1(L)) return _bind_insertChild_overload_1(L);
		if (_lg_typecheck_insertChild_overload_2(L)) return _bind_insertChild_overload_2(L);

		luaL_error(L, "error in function insertChild, cannot match any of the overloads for function insertChild:\n  insertChild(unsigned int, osg::Node *)\n  insertChild(unsigned int, osg::Node *, double)\n");
		return 0;
	}

	// bool osg::Sequence::removeChild(osg::Node * child)
	static int _bind_removeChild(lua_State *L) {
		if (!_lg_typecheck_removeChild(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::removeChild(osg::Node * child) function, expected prototype:\nbool osg::Sequence::removeChild(osg::Node * child)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* child=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sequence::removeChild(osg::Node *)");
		}
		bool lret = self->removeChild(child);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Sequence::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)
	static int _bind_removeChildren(lua_State *L) {
		if (!_lg_typecheck_removeChildren(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::removeChildren(unsigned int pos, unsigned int numChildrenToRemove) function, expected prototype:\nbool osg::Sequence::removeChildren(unsigned int pos, unsigned int numChildrenToRemove)\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		unsigned int numChildrenToRemove=(unsigned int)lua_tointeger(L,3);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sequence::removeChildren(unsigned int, unsigned int)");
		}
		bool lret = self->removeChildren(pos, numChildrenToRemove);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Sequence::setValue(int value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setValue(int value) function, expected prototype:\nvoid osg::Sequence::setValue(int value)\nClass arguments details:\n");
		}

		int value=(int)lua_tointeger(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setValue(int)");
		}
		self->setValue(value);

		return 0;
	}

	// int osg::Sequence::getValue() const
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Sequence::getValue() const function, expected prototype:\nint osg::Sequence::getValue() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Sequence::getValue() const");
		}
		int lret = self->getValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setTime(unsigned int frame, double t)
	static int _bind_setTime(lua_State *L) {
		if (!_lg_typecheck_setTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setTime(unsigned int frame, double t) function, expected prototype:\nvoid osg::Sequence::setTime(unsigned int frame, double t)\nClass arguments details:\n");
		}

		unsigned int frame=(unsigned int)lua_tointeger(L,2);
		double t=(double)lua_tonumber(L,3);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setTime(unsigned int, double)");
		}
		self->setTime(frame, t);

		return 0;
	}

	// double osg::Sequence::getTime(unsigned int frame) const
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Sequence::getTime(unsigned int frame) const function, expected prototype:\ndouble osg::Sequence::getTime(unsigned int frame) const\nClass arguments details:\n");
		}

		unsigned int frame=(unsigned int)lua_tointeger(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Sequence::getTime(unsigned int) const");
		}
		double lret = self->getTime(frame);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setTimeList(const std::vector< double > & timeList)
	static int _bind_setTimeList(lua_State *L) {
		if (!_lg_typecheck_setTimeList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setTimeList(const std::vector< double > & timeList) function, expected prototype:\nvoid osg::Sequence::setTimeList(const std::vector< double > & timeList)\nClass arguments details:\narg 1 ID = [unknown]\n");
		}

		const std::vector< double >* timeList_ptr=(Luna< std::vector< double > >::check(L,2));
		if( !timeList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg timeList in osg::Sequence::setTimeList function");
		}
		const std::vector< double > & timeList=*timeList_ptr;

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setTimeList(const std::vector< double > &)");
		}
		self->setTimeList(timeList);

		return 0;
	}

	// const std::vector< double > & osg::Sequence::getTimeList() const
	static int _bind_getTimeList(lua_State *L) {
		if (!_lg_typecheck_getTimeList(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::vector< double > & osg::Sequence::getTimeList() const function, expected prototype:\nconst std::vector< double > & osg::Sequence::getTimeList() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::vector< double > & osg::Sequence::getTimeList() const");
		}
		const std::vector< double >* lret = &self->getTimeList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< std::vector< double > >::push(L,lret,false);

		return 1;
	}

	// void osg::Sequence::setDefaultTime(double t)
	static int _bind_setDefaultTime(lua_State *L) {
		if (!_lg_typecheck_setDefaultTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setDefaultTime(double t) function, expected prototype:\nvoid osg::Sequence::setDefaultTime(double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setDefaultTime(double)");
		}
		self->setDefaultTime(t);

		return 0;
	}

	// double osg::Sequence::getDefaultTime() const
	static int _bind_getDefaultTime(lua_State *L) {
		if (!_lg_typecheck_getDefaultTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Sequence::getDefaultTime() const function, expected prototype:\ndouble osg::Sequence::getDefaultTime() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Sequence::getDefaultTime() const");
		}
		double lret = self->getDefaultTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setLastFrameTime(double t)
	static int _bind_setLastFrameTime(lua_State *L) {
		if (!_lg_typecheck_setLastFrameTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setLastFrameTime(double t) function, expected prototype:\nvoid osg::Sequence::setLastFrameTime(double t)\nClass arguments details:\n");
		}

		double t=(double)lua_tonumber(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setLastFrameTime(double)");
		}
		self->setLastFrameTime(t);

		return 0;
	}

	// double osg::Sequence::getLastFrameTime() const
	static int _bind_getLastFrameTime(lua_State *L) {
		if (!_lg_typecheck_getLastFrameTime(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in double osg::Sequence::getLastFrameTime() const function, expected prototype:\ndouble osg::Sequence::getLastFrameTime() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call double osg::Sequence::getLastFrameTime() const");
		}
		double lret = self->getLastFrameTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Sequence::getNumFrames() const
	static int _bind_getNumFrames(lua_State *L) {
		if (!_lg_typecheck_getNumFrames(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Sequence::getNumFrames() const function, expected prototype:\nunsigned int osg::Sequence::getNumFrames() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Sequence::getNumFrames() const");
		}
		unsigned int lret = self->getNumFrames();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setLoopMode(osg::Sequence::LoopMode mode)
	static int _bind_setLoopMode(lua_State *L) {
		if (!_lg_typecheck_setLoopMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setLoopMode(osg::Sequence::LoopMode mode) function, expected prototype:\nvoid osg::Sequence::setLoopMode(osg::Sequence::LoopMode mode)\nClass arguments details:\n");
		}

		osg::Sequence::LoopMode mode=(osg::Sequence::LoopMode)lua_tointeger(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setLoopMode(osg::Sequence::LoopMode)");
		}
		self->setLoopMode(mode);

		return 0;
	}

	// osg::Sequence::LoopMode osg::Sequence::getLoopMode() const
	static int _bind_getLoopMode(lua_State *L) {
		if (!_lg_typecheck_getLoopMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Sequence::LoopMode osg::Sequence::getLoopMode() const function, expected prototype:\nosg::Sequence::LoopMode osg::Sequence::getLoopMode() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Sequence::LoopMode osg::Sequence::getLoopMode() const");
		}
		osg::Sequence::LoopMode lret = self->getLoopMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setBegin(int begin)
	static int _bind_setBegin(lua_State *L) {
		if (!_lg_typecheck_setBegin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setBegin(int begin) function, expected prototype:\nvoid osg::Sequence::setBegin(int begin)\nClass arguments details:\n");
		}

		int begin=(int)lua_tointeger(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setBegin(int)");
		}
		self->setBegin(begin);

		return 0;
	}

	// int osg::Sequence::getBegin() const
	static int _bind_getBegin(lua_State *L) {
		if (!_lg_typecheck_getBegin(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Sequence::getBegin() const function, expected prototype:\nint osg::Sequence::getBegin() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Sequence::getBegin() const");
		}
		int lret = self->getBegin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setEnd(int end)
	static int _bind_setEnd(lua_State *L) {
		if (!_lg_typecheck_setEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setEnd(int end) function, expected prototype:\nvoid osg::Sequence::setEnd(int end)\nClass arguments details:\n");
		}

		int end=(int)lua_tointeger(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setEnd(int)");
		}
		self->setEnd(end);

		return 0;
	}

	// int osg::Sequence::getEnd() const
	static int _bind_getEnd(lua_State *L) {
		if (!_lg_typecheck_getEnd(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Sequence::getEnd() const function, expected prototype:\nint osg::Sequence::getEnd() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Sequence::getEnd() const");
		}
		int lret = self->getEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setInterval(osg::Sequence::LoopMode mode, int begin, int end)
	static int _bind_setInterval(lua_State *L) {
		if (!_lg_typecheck_setInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setInterval(osg::Sequence::LoopMode mode, int begin, int end) function, expected prototype:\nvoid osg::Sequence::setInterval(osg::Sequence::LoopMode mode, int begin, int end)\nClass arguments details:\n");
		}

		osg::Sequence::LoopMode mode=(osg::Sequence::LoopMode)lua_tointeger(L,2);
		int begin=(int)lua_tointeger(L,3);
		int end=(int)lua_tointeger(L,4);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setInterval(osg::Sequence::LoopMode, int, int)");
		}
		self->setInterval(mode, begin, end);

		return 0;
	}

	// void osg::Sequence::getInterval(osg::Sequence::LoopMode & mode, int & begin, int & end) const
	static int _bind_getInterval(lua_State *L) {
		if (!_lg_typecheck_getInterval(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::getInterval(osg::Sequence::LoopMode & mode, int & begin, int & end) const function, expected prototype:\nvoid osg::Sequence::getInterval(osg::Sequence::LoopMode & mode, int & begin, int & end) const\nClass arguments details:\n");
		}

		osg::Sequence::LoopMode mode=(osg::Sequence::LoopMode)lua_tointeger(L,2);
		int begin=(int)lua_tointeger(L,3);
		int end=(int)lua_tointeger(L,4);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::getInterval(osg::Sequence::LoopMode &, int &, int &) const");
		}
		self->getInterval(mode, begin, end);

		return 0;
	}

	// void osg::Sequence::setSpeed(float speed)
	static int _bind_setSpeed(lua_State *L) {
		if (!_lg_typecheck_setSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setSpeed(float speed) function, expected prototype:\nvoid osg::Sequence::setSpeed(float speed)\nClass arguments details:\n");
		}

		float speed=(float)lua_tonumber(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setSpeed(float)");
		}
		self->setSpeed(speed);

		return 0;
	}

	// float osg::Sequence::getSpeed() const
	static int _bind_getSpeed(lua_State *L) {
		if (!_lg_typecheck_getSpeed(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osg::Sequence::getSpeed() const function, expected prototype:\nfloat osg::Sequence::getSpeed() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osg::Sequence::getSpeed() const");
		}
		float lret = self->getSpeed();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setNumRepeats(int nreps)
	static int _bind_setNumRepeats(lua_State *L) {
		if (!_lg_typecheck_setNumRepeats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setNumRepeats(int nreps) function, expected prototype:\nvoid osg::Sequence::setNumRepeats(int nreps)\nClass arguments details:\n");
		}

		int nreps=(int)lua_tointeger(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setNumRepeats(int)");
		}
		self->setNumRepeats(nreps);

		return 0;
	}

	// int osg::Sequence::getNumRepeats() const
	static int _bind_getNumRepeats(lua_State *L) {
		if (!_lg_typecheck_getNumRepeats(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Sequence::getNumRepeats() const function, expected prototype:\nint osg::Sequence::getNumRepeats() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Sequence::getNumRepeats() const");
		}
		int lret = self->getNumRepeats();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setDuration(float speed, int nreps = -1)
	static int _bind_setDuration(lua_State *L) {
		if (!_lg_typecheck_setDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setDuration(float speed, int nreps = -1) function, expected prototype:\nvoid osg::Sequence::setDuration(float speed, int nreps = -1)\nClass arguments details:\n");
		}

		int luatop = lua_gettop(L);

		float speed=(float)lua_tonumber(L,2);
		int nreps=luatop>2 ? (int)lua_tointeger(L,3) : -1;

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setDuration(float, int)");
		}
		self->setDuration(speed, nreps);

		return 0;
	}

	// void osg::Sequence::getDuration(float & speed, int & nreps) const
	static int _bind_getDuration(lua_State *L) {
		if (!_lg_typecheck_getDuration(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::getDuration(float & speed, int & nreps) const function, expected prototype:\nvoid osg::Sequence::getDuration(float & speed, int & nreps) const\nClass arguments details:\n");
		}

		float speed=(float)lua_tonumber(L,2);
		int nreps=(int)lua_tointeger(L,3);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::getDuration(float &, int &) const");
		}
		self->getDuration(speed, nreps);

		return 0;
	}

	// void osg::Sequence::setMode(osg::Sequence::SequenceMode mode)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setMode(osg::Sequence::SequenceMode mode) function, expected prototype:\nvoid osg::Sequence::setMode(osg::Sequence::SequenceMode mode)\nClass arguments details:\n");
		}

		osg::Sequence::SequenceMode mode=(osg::Sequence::SequenceMode)lua_tointeger(L,2);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setMode(osg::Sequence::SequenceMode)");
		}
		self->setMode(mode);

		return 0;
	}

	// osg::Sequence::SequenceMode osg::Sequence::getMode() const
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Sequence::SequenceMode osg::Sequence::getMode() const function, expected prototype:\nosg::Sequence::SequenceMode osg::Sequence::getMode() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Sequence::SequenceMode osg::Sequence::getMode() const");
		}
		osg::Sequence::SequenceMode lret = self->getMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Sequence::setSync(bool sync)
	static int _bind_setSync(lua_State *L) {
		if (!_lg_typecheck_setSync(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setSync(bool sync) function, expected prototype:\nvoid osg::Sequence::setSync(bool sync)\nClass arguments details:\n");
		}

		bool sync=(bool)(lua_toboolean(L,2)==1);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setSync(bool)");
		}
		self->setSync(sync);

		return 0;
	}

	// bool osg::Sequence::getSync() const
	static int _bind_getSync(lua_State *L) {
		if (!_lg_typecheck_getSync(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::getSync() const function, expected prototype:\nbool osg::Sequence::getSync() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sequence::getSync() const");
		}
		bool lret = self->getSync();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Sequence::setClearOnStop(bool clearOnStop)
	static int _bind_setClearOnStop(lua_State *L) {
		if (!_lg_typecheck_setClearOnStop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Sequence::setClearOnStop(bool clearOnStop) function, expected prototype:\nvoid osg::Sequence::setClearOnStop(bool clearOnStop)\nClass arguments details:\n");
		}

		bool clearOnStop=(bool)(lua_toboolean(L,2)==1);

		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Sequence::setClearOnStop(bool)");
		}
		self->setClearOnStop(clearOnStop);

		return 0;
	}

	// bool osg::Sequence::getClearOnStop() const
	static int _bind_getClearOnStop(lua_State *L) {
		if (!_lg_typecheck_getClearOnStop(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Sequence::getClearOnStop() const function, expected prototype:\nbool osg::Sequence::getClearOnStop() const\nClass arguments details:\n");
		}


		osg::Sequence* self=dynamic_cast< osg::Sequence* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Sequence::getClearOnStop() const");
		}
		bool lret = self->getClearOnStop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osg::Sequence* LunaTraits< osg::Sequence >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Sequence::_bind_ctor(L);
}

void LunaTraits< osg::Sequence >::_bind_dtor(osg::Sequence* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Sequence >::className[] = "Sequence";
const char LunaTraits< osg::Sequence >::fullName[] = "osg::Sequence";
const char LunaTraits< osg::Sequence >::moduleName[] = "osg";
const char* LunaTraits< osg::Sequence >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::Sequence >::hash = 28453426;
const int LunaTraits< osg::Sequence >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Sequence >::methods[] = {
	{"cloneType", &luna_wrapper_osg_Sequence::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Sequence::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_Sequence::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_Sequence::_bind_className},
	{"libraryName", &luna_wrapper_osg_Sequence::_bind_libraryName},
	{"accept", &luna_wrapper_osg_Sequence::_bind_accept},
	{"traverse", &luna_wrapper_osg_Sequence::_bind_traverse},
	{"addChild", &luna_wrapper_osg_Sequence::_bind_addChild},
	{"insertChild", &luna_wrapper_osg_Sequence::_bind_insertChild},
	{"removeChild", &luna_wrapper_osg_Sequence::_bind_removeChild},
	{"removeChildren", &luna_wrapper_osg_Sequence::_bind_removeChildren},
	{"setValue", &luna_wrapper_osg_Sequence::_bind_setValue},
	{"getValue", &luna_wrapper_osg_Sequence::_bind_getValue},
	{"setTime", &luna_wrapper_osg_Sequence::_bind_setTime},
	{"getTime", &luna_wrapper_osg_Sequence::_bind_getTime},
	{"setTimeList", &luna_wrapper_osg_Sequence::_bind_setTimeList},
	{"getTimeList", &luna_wrapper_osg_Sequence::_bind_getTimeList},
	{"setDefaultTime", &luna_wrapper_osg_Sequence::_bind_setDefaultTime},
	{"getDefaultTime", &luna_wrapper_osg_Sequence::_bind_getDefaultTime},
	{"setLastFrameTime", &luna_wrapper_osg_Sequence::_bind_setLastFrameTime},
	{"getLastFrameTime", &luna_wrapper_osg_Sequence::_bind_getLastFrameTime},
	{"getNumFrames", &luna_wrapper_osg_Sequence::_bind_getNumFrames},
	{"setLoopMode", &luna_wrapper_osg_Sequence::_bind_setLoopMode},
	{"getLoopMode", &luna_wrapper_osg_Sequence::_bind_getLoopMode},
	{"setBegin", &luna_wrapper_osg_Sequence::_bind_setBegin},
	{"getBegin", &luna_wrapper_osg_Sequence::_bind_getBegin},
	{"setEnd", &luna_wrapper_osg_Sequence::_bind_setEnd},
	{"getEnd", &luna_wrapper_osg_Sequence::_bind_getEnd},
	{"setInterval", &luna_wrapper_osg_Sequence::_bind_setInterval},
	{"getInterval", &luna_wrapper_osg_Sequence::_bind_getInterval},
	{"setSpeed", &luna_wrapper_osg_Sequence::_bind_setSpeed},
	{"getSpeed", &luna_wrapper_osg_Sequence::_bind_getSpeed},
	{"setNumRepeats", &luna_wrapper_osg_Sequence::_bind_setNumRepeats},
	{"getNumRepeats", &luna_wrapper_osg_Sequence::_bind_getNumRepeats},
	{"setDuration", &luna_wrapper_osg_Sequence::_bind_setDuration},
	{"getDuration", &luna_wrapper_osg_Sequence::_bind_getDuration},
	{"setMode", &luna_wrapper_osg_Sequence::_bind_setMode},
	{"getMode", &luna_wrapper_osg_Sequence::_bind_getMode},
	{"setSync", &luna_wrapper_osg_Sequence::_bind_setSync},
	{"getSync", &luna_wrapper_osg_Sequence::_bind_getSync},
	{"setClearOnStop", &luna_wrapper_osg_Sequence::_bind_setClearOnStop},
	{"getClearOnStop", &luna_wrapper_osg_Sequence::_bind_getClearOnStop},
	{"__eq", &luna_wrapper_osg_Sequence::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Sequence >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Sequence::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Sequence >::enumValues[] = {
	{"LOOP", osg::Sequence::LOOP},
	{"SWING", osg::Sequence::SWING},
	{"START", osg::Sequence::START},
	{"STOP", osg::Sequence::STOP},
	{"PAUSE", osg::Sequence::PAUSE},
	{"RESUME", osg::Sequence::RESUME},
	{0,0}
};


