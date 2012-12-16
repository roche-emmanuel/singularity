#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Vec2Array.h>

class luna_wrapper_osg_Vec2Array {
public:
	typedef Luna< osg::Vec2Array > luna_t;

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
		//osg::Vec2Array* ptr= dynamic_cast< osg::Vec2Array* >(Luna< osg::Referenced >::check(L,1));
		osg::Vec2Array* ptr= luna_caster< osg::Referenced, osg::Vec2Array >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::Vec2Array >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_push_back(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303173) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35264102) ) return false;
		if( (!dynamic_cast< osg::ArrayVisitor* >(Luna< osg::ArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80735172) ) return false;
		if( (!dynamic_cast< osg::ConstArrayVisitor* >(Luna< osg::ConstArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,87991103) ) return false;
		if( (!dynamic_cast< osg::ValueVisitor* >(Luna< osg::ValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_accept_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86989408) ) return false;
		if( (!dynamic_cast< osg::ConstValueVisitor* >(Luna< osg::ConstValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compare(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumElements(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
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

	inline static bool _lg_typecheck_base_trim(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,35264102) ) return false;
		if( (!dynamic_cast< osg::ArrayVisitor* >(Luna< osg::ArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80735172) ) return false;
		if( (!dynamic_cast< osg::ConstArrayVisitor* >(Luna< osg::ConstArrayVisitor >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,87991103) ) return false;
		if( (!dynamic_cast< osg::ValueVisitor* >(Luna< osg::ValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_accept_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86989408) ) return false;
		if( (!dynamic_cast< osg::ConstValueVisitor* >(Luna< osg::ConstValueVisitor >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_compare(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDataPointer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTotalDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getNumElements(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Vec2Array::Vec2Array()
	static osg::Vec2Array* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2Array::Vec2Array() function, expected prototype:\nosg::Vec2Array::Vec2Array()\nClass arguments details:\n");
		}


		return new osg::Vec2Array();
	}

	// osg::Vec2Array::Vec2Array(lua_Table * data)
	static osg::Vec2Array* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec2Array::Vec2Array(lua_Table * data) function, expected prototype:\nosg::Vec2Array::Vec2Array(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_Vec2Array(L,NULL);
	}

	// Overload binder for osg::Vec2Array::Vec2Array
	static osg::Vec2Array* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Vec2Array, cannot match any of the overloads for function Vec2Array:\n  Vec2Array()\n  Vec2Array(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Vec2Array::push_back(const osg::Vec2f & vec)
	static int _bind_push_back(lua_State *L) {
		if (!_lg_typecheck_push_back(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::push_back(const osg::Vec2f & vec) function, expected prototype:\nvoid osg::Vec2Array::push_back(const osg::Vec2f & vec)\nClass arguments details:\narg 1 ID = 92303173\n");
		}

		const osg::Vec2f* vec_ptr=(Luna< osg::Vec2f >::check(L,2));
		if( !vec_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vec in osg::Vec2Array::push_back function");
		}
		const osg::Vec2f & vec=*vec_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::push_back(const osg::Vec2f &)");
		}
		self->push_back(vec);

		return 0;
	}

	// unsigned int osg::Vec2Array::size()
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec2Array::size() function, expected prototype:\nunsigned int osg::Vec2Array::size()\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec2Array::size()");
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Vec2Array::accept(osg::ArrayVisitor & arg1)
	static int _bind_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::accept(osg::ArrayVisitor & arg1) function, expected prototype:\nvoid osg::Vec2Array::accept(osg::ArrayVisitor & arg1)\nClass arguments details:\narg 1 ID = 35264102\n");
		}

		osg::ArrayVisitor* arg1_ptr=(Luna< osg::ArrayVisitor >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec2Array::accept function");
		}
		osg::ArrayVisitor & arg1=*arg1_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::accept(osg::ArrayVisitor &)");
		}
		self->accept(arg1);

		return 0;
	}

	// void osg::Vec2Array::accept(osg::ConstArrayVisitor & arg1) const
	static int _bind_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::accept(osg::ConstArrayVisitor & arg1) const function, expected prototype:\nvoid osg::Vec2Array::accept(osg::ConstArrayVisitor & arg1) const\nClass arguments details:\narg 1 ID = 80735172\n");
		}

		osg::ConstArrayVisitor* arg1_ptr=(Luna< osg::ConstArrayVisitor >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec2Array::accept function");
		}
		osg::ConstArrayVisitor & arg1=*arg1_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::accept(osg::ConstArrayVisitor &) const");
		}
		self->accept(arg1);

		return 0;
	}

	// void osg::Vec2Array::accept(unsigned int index, osg::ValueVisitor & arg2)
	static int _bind_accept_overload_3(lua_State *L) {
		if (!_lg_typecheck_accept_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::accept(unsigned int index, osg::ValueVisitor & arg2) function, expected prototype:\nvoid osg::Vec2Array::accept(unsigned int index, osg::ValueVisitor & arg2)\nClass arguments details:\narg 2 ID = 87991103\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ValueVisitor* arg2_ptr=(Luna< osg::ValueVisitor >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec2Array::accept function");
		}
		osg::ValueVisitor & arg2=*arg2_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::accept(unsigned int, osg::ValueVisitor &)");
		}
		self->accept(index, arg2);

		return 0;
	}

	// void osg::Vec2Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	static int _bind_accept_overload_4(lua_State *L) {
		if (!_lg_typecheck_accept_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const function, expected prototype:\nvoid osg::Vec2Array::accept(unsigned int index, osg::ConstValueVisitor & arg2) const\nClass arguments details:\narg 2 ID = 86989408\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ConstValueVisitor* arg2_ptr=(Luna< osg::ConstValueVisitor >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec2Array::accept function");
		}
		osg::ConstValueVisitor & arg2=*arg2_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::accept(unsigned int, osg::ConstValueVisitor &) const");
		}
		self->accept(index, arg2);

		return 0;
	}

	// Overload binder for osg::Vec2Array::accept
	static int _bind_accept(lua_State *L) {
		if (_lg_typecheck_accept_overload_1(L)) return _bind_accept_overload_1(L);
		if (_lg_typecheck_accept_overload_2(L)) return _bind_accept_overload_2(L);
		if (_lg_typecheck_accept_overload_3(L)) return _bind_accept_overload_3(L);
		if (_lg_typecheck_accept_overload_4(L)) return _bind_accept_overload_4(L);

		luaL_error(L, "error in function accept, cannot match any of the overloads for function accept:\n  accept(osg::ArrayVisitor &)\n  accept(osg::ConstArrayVisitor &)\n  accept(unsigned int, osg::ValueVisitor &)\n  accept(unsigned int, osg::ConstValueVisitor &)\n");
		return 0;
	}

	// int osg::Vec2Array::compare(unsigned int lhs, unsigned int rhs) const
	static int _bind_compare(lua_State *L) {
		if (!_lg_typecheck_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Vec2Array::compare(unsigned int lhs, unsigned int rhs) const function, expected prototype:\nint osg::Vec2Array::compare(unsigned int lhs, unsigned int rhs) const\nClass arguments details:\n");
		}

		unsigned int lhs=(unsigned int)lua_tointeger(L,2);
		unsigned int rhs=(unsigned int)lua_tointeger(L,3);

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Vec2Array::compare(unsigned int, unsigned int) const");
		}
		int lret = self->compare(lhs, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const void * osg::Vec2Array::getDataPointer() const
	static int _bind_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::Vec2Array::getDataPointer() const function, expected prototype:\nconst void * osg::Vec2Array::getDataPointer() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::Vec2Array::getDataPointer() const");
		}
		const void * lret = self->getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Vec2Array::getTotalDataSize() const
	static int _bind_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec2Array::getTotalDataSize() const function, expected prototype:\nunsigned int osg::Vec2Array::getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec2Array::getTotalDataSize() const");
		}
		unsigned int lret = self->getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Vec2Array::getNumElements() const
	static int _bind_getNumElements(lua_State *L) {
		if (!_lg_typecheck_getNumElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec2Array::getNumElements() const function, expected prototype:\nunsigned int osg::Vec2Array::getNumElements() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec2Array::getNumElements() const");
		}
		unsigned int lret = self->getNumElements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Object * osg::Vec2Array::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Vec2Array::cloneType() const function, expected prototype:\nosg::Object * osg::Vec2Array::cloneType() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Vec2Array::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Vec2Array::clone(const osg::CopyOp & arg1) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Vec2Array::clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Vec2Array::clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Vec2Array::clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Vec2Array::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// void osg::Vec2Array::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::base_setName(const std::string & name) function, expected prototype:\nvoid osg::Vec2Array::base_setName(const std::string & name)\nClass arguments details:\n");
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::base_setName(const std::string &)");
		}
		self->Vec2Array::setName(name);

		return 0;
	}

	// void osg::Vec2Array::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::base_computeDataVariance() function, expected prototype:\nvoid osg::Vec2Array::base_computeDataVariance()\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::base_computeDataVariance()");
		}
		self->Vec2Array::computeDataVariance();

		return 0;
	}

	// void osg::Vec2Array::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::Vec2Array::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::base_setUserData(osg::Referenced *)");
		}
		self->Vec2Array::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::Vec2Array::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::Vec2Array::base_getUserData() function, expected prototype:\nosg::Referenced * osg::Vec2Array::base_getUserData()\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::Vec2Array::base_getUserData()");
		}
		osg::Referenced * lret = self->Vec2Array::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::Vec2Array::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::Vec2Array::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::Vec2Array::base_getUserData() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::Vec2Array::base_getUserData() const");
		}
		const osg::Referenced * lret = self->Vec2Array::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::Vec2Array::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::Vec2Array::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osg::Vec2Array::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::base_releaseGLObjects(osg::State *) const");
		}
		self->Vec2Array::releaseGLObjects(state);

		return 0;
	}

	// bool osg::Vec2Array::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Vec2Array::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::Vec2Array::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Vec2Array::base_isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->Vec2Array::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::Vec2Array::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Vec2Array::base_libraryName() const function, expected prototype:\nconst char * osg::Vec2Array::base_libraryName() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Vec2Array::base_libraryName() const");
		}
		const char * lret = self->Vec2Array::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::Vec2Array::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::Vec2Array::base_className() const function, expected prototype:\nconst char * osg::Vec2Array::base_className() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::Vec2Array::base_className() const");
		}
		const char * lret = self->Vec2Array::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::Vec2Array::base_trim()
	static int _bind_base_trim(lua_State *L) {
		if (!_lg_typecheck_base_trim(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::base_trim() function, expected prototype:\nvoid osg::Vec2Array::base_trim()\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::base_trim()");
		}
		self->Vec2Array::trim();

		return 0;
	}

	// void osg::Vec2Array::base_accept(osg::ArrayVisitor & arg1)
	static int _bind_base_accept_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::base_accept(osg::ArrayVisitor & arg1) function, expected prototype:\nvoid osg::Vec2Array::base_accept(osg::ArrayVisitor & arg1)\nClass arguments details:\narg 1 ID = 35264102\n");
		}

		osg::ArrayVisitor* arg1_ptr=(Luna< osg::ArrayVisitor >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec2Array::base_accept function");
		}
		osg::ArrayVisitor & arg1=*arg1_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::base_accept(osg::ArrayVisitor &)");
		}
		self->Vec2Array::accept(arg1);

		return 0;
	}

	// void osg::Vec2Array::base_accept(osg::ConstArrayVisitor & arg1) const
	static int _bind_base_accept_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::base_accept(osg::ConstArrayVisitor & arg1) const function, expected prototype:\nvoid osg::Vec2Array::base_accept(osg::ConstArrayVisitor & arg1) const\nClass arguments details:\narg 1 ID = 80735172\n");
		}

		osg::ConstArrayVisitor* arg1_ptr=(Luna< osg::ConstArrayVisitor >::check(L,2));
		if( !arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg1 in osg::Vec2Array::base_accept function");
		}
		osg::ConstArrayVisitor & arg1=*arg1_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::base_accept(osg::ConstArrayVisitor &) const");
		}
		self->Vec2Array::accept(arg1);

		return 0;
	}

	// void osg::Vec2Array::base_accept(unsigned int index, osg::ValueVisitor & arg2)
	static int _bind_base_accept_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::base_accept(unsigned int index, osg::ValueVisitor & arg2) function, expected prototype:\nvoid osg::Vec2Array::base_accept(unsigned int index, osg::ValueVisitor & arg2)\nClass arguments details:\narg 2 ID = 87991103\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ValueVisitor* arg2_ptr=(Luna< osg::ValueVisitor >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec2Array::base_accept function");
		}
		osg::ValueVisitor & arg2=*arg2_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::base_accept(unsigned int, osg::ValueVisitor &)");
		}
		self->Vec2Array::accept(index, arg2);

		return 0;
	}

	// void osg::Vec2Array::base_accept(unsigned int index, osg::ConstValueVisitor & arg2) const
	static int _bind_base_accept_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_accept_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Vec2Array::base_accept(unsigned int index, osg::ConstValueVisitor & arg2) const function, expected prototype:\nvoid osg::Vec2Array::base_accept(unsigned int index, osg::ConstValueVisitor & arg2) const\nClass arguments details:\narg 2 ID = 86989408\n");
		}

		unsigned int index=(unsigned int)lua_tointeger(L,2);
		osg::ConstValueVisitor* arg2_ptr=(Luna< osg::ConstValueVisitor >::check(L,3));
		if( !arg2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arg2 in osg::Vec2Array::base_accept function");
		}
		osg::ConstValueVisitor & arg2=*arg2_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Vec2Array::base_accept(unsigned int, osg::ConstValueVisitor &) const");
		}
		self->Vec2Array::accept(index, arg2);

		return 0;
	}

	// Overload binder for osg::Vec2Array::base_accept
	static int _bind_base_accept(lua_State *L) {
		if (_lg_typecheck_base_accept_overload_1(L)) return _bind_base_accept_overload_1(L);
		if (_lg_typecheck_base_accept_overload_2(L)) return _bind_base_accept_overload_2(L);
		if (_lg_typecheck_base_accept_overload_3(L)) return _bind_base_accept_overload_3(L);
		if (_lg_typecheck_base_accept_overload_4(L)) return _bind_base_accept_overload_4(L);

		luaL_error(L, "error in function base_accept, cannot match any of the overloads for function base_accept:\n  base_accept(osg::ArrayVisitor &)\n  base_accept(osg::ConstArrayVisitor &)\n  base_accept(unsigned int, osg::ValueVisitor &)\n  base_accept(unsigned int, osg::ConstValueVisitor &)\n");
		return 0;
	}

	// int osg::Vec2Array::base_compare(unsigned int lhs, unsigned int rhs) const
	static int _bind_base_compare(lua_State *L) {
		if (!_lg_typecheck_base_compare(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osg::Vec2Array::base_compare(unsigned int lhs, unsigned int rhs) const function, expected prototype:\nint osg::Vec2Array::base_compare(unsigned int lhs, unsigned int rhs) const\nClass arguments details:\n");
		}

		unsigned int lhs=(unsigned int)lua_tointeger(L,2);
		unsigned int rhs=(unsigned int)lua_tointeger(L,3);

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osg::Vec2Array::base_compare(unsigned int, unsigned int) const");
		}
		int lret = self->Vec2Array::compare(lhs, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const void * osg::Vec2Array::base_getDataPointer() const
	static int _bind_base_getDataPointer(lua_State *L) {
		if (!_lg_typecheck_base_getDataPointer(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const void * osg::Vec2Array::base_getDataPointer() const function, expected prototype:\nconst void * osg::Vec2Array::base_getDataPointer() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const void * osg::Vec2Array::base_getDataPointer() const");
		}
		const void * lret = self->Vec2Array::getDataPointer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::Vec2Array::base_getTotalDataSize() const
	static int _bind_base_getTotalDataSize(lua_State *L) {
		if (!_lg_typecheck_base_getTotalDataSize(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec2Array::base_getTotalDataSize() const function, expected prototype:\nunsigned int osg::Vec2Array::base_getTotalDataSize() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec2Array::base_getTotalDataSize() const");
		}
		unsigned int lret = self->Vec2Array::getTotalDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Vec2Array::base_getNumElements() const
	static int _bind_base_getNumElements(lua_State *L) {
		if (!_lg_typecheck_base_getNumElements(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Vec2Array::base_getNumElements() const function, expected prototype:\nunsigned int osg::Vec2Array::base_getNumElements() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Vec2Array::base_getNumElements() const");
		}
		unsigned int lret = self->Vec2Array::getNumElements();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Object * osg::Vec2Array::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Vec2Array::base_cloneType() const function, expected prototype:\nosg::Object * osg::Vec2Array::base_cloneType() const\nClass arguments details:\n");
		}


		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Vec2Array::base_cloneType() const");
		}
		osg::Object * lret = self->Vec2Array::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::Vec2Array::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::Vec2Array::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::Vec2Array::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::Vec2Array::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::Vec2Array* self=Luna< osg::Referenced >::checkSubType< osg::Vec2Array >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::Vec2Array::base_clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->Vec2Array::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

osg::Vec2Array* LunaTraits< osg::Vec2Array >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Vec2Array::_bind_ctor(L);
}

void LunaTraits< osg::Vec2Array >::_bind_dtor(osg::Vec2Array* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::Vec2Array >::className[] = "Vec2Array";
const char LunaTraits< osg::Vec2Array >::fullName[] = "osg::Vec2Array";
const char LunaTraits< osg::Vec2Array >::moduleName[] = "osg";
const char* LunaTraits< osg::Vec2Array >::parents[] = {"osg.Array", 0};
const int LunaTraits< osg::Vec2Array >::hash = 78575573;
const int LunaTraits< osg::Vec2Array >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::Vec2Array >::methods[] = {
	{"push_back", &luna_wrapper_osg_Vec2Array::_bind_push_back},
	{"size", &luna_wrapper_osg_Vec2Array::_bind_size},
	{"accept", &luna_wrapper_osg_Vec2Array::_bind_accept},
	{"compare", &luna_wrapper_osg_Vec2Array::_bind_compare},
	{"getDataPointer", &luna_wrapper_osg_Vec2Array::_bind_getDataPointer},
	{"getTotalDataSize", &luna_wrapper_osg_Vec2Array::_bind_getTotalDataSize},
	{"getNumElements", &luna_wrapper_osg_Vec2Array::_bind_getNumElements},
	{"cloneType", &luna_wrapper_osg_Vec2Array::_bind_cloneType},
	{"clone", &luna_wrapper_osg_Vec2Array::_bind_clone},
	{"base_setName", &luna_wrapper_osg_Vec2Array::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_Vec2Array::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_Vec2Array::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_Vec2Array::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_Vec2Array::_bind_base_releaseGLObjects},
	{"base_isSameKindAs", &luna_wrapper_osg_Vec2Array::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_Vec2Array::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_Vec2Array::_bind_base_className},
	{"base_trim", &luna_wrapper_osg_Vec2Array::_bind_base_trim},
	{"base_accept", &luna_wrapper_osg_Vec2Array::_bind_base_accept},
	{"base_compare", &luna_wrapper_osg_Vec2Array::_bind_base_compare},
	{"base_getDataPointer", &luna_wrapper_osg_Vec2Array::_bind_base_getDataPointer},
	{"base_getTotalDataSize", &luna_wrapper_osg_Vec2Array::_bind_base_getTotalDataSize},
	{"base_getNumElements", &luna_wrapper_osg_Vec2Array::_bind_base_getNumElements},
	{"base_cloneType", &luna_wrapper_osg_Vec2Array::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_Vec2Array::_bind_base_clone},
	{"__eq", &luna_wrapper_osg_Vec2Array::_bind___eq},
	{"getTable", &luna_wrapper_osg_Vec2Array::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Vec2Array >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_Vec2Array::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Vec2Array >::enumValues[] = {
	{0,0}
};


