#include <plug_common.h>

class luna_wrapper_osgUtil_IntersectVisitor {
public:
	typedef Luna< osgUtil::IntersectVisitor > luna_t;

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
		osgUtil::IntersectVisitor* ptr= dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IntersectVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_addLineSegment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumHits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_hits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLODSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLODSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEyePoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::IntersectVisitor::IntersectVisitor()
	static osgUtil::IntersectVisitor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectVisitor::IntersectVisitor() function, expected prototype:\nosgUtil::IntersectVisitor::IntersectVisitor()\nClass arguments details:\n");
		}


		return new osgUtil::IntersectVisitor();
	}


	// Function binds:
	// const char * osgUtil::IntersectVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IntersectVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::IntersectVisitor::libraryName() const\nClass arguments details:\n");
		}


		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::IntersectVisitor::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::IntersectVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IntersectVisitor::className() const function, expected prototype:\nconst char * osgUtil::IntersectVisitor::className() const\nClass arguments details:\n");
		}


		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osgUtil::IntersectVisitor::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::IntersectVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::reset() function, expected prototype:\nvoid osgUtil::IntersectVisitor::reset()\nClass arguments details:\n");
		}


		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::reset()");
		}
		self->reset();

		return 0;
	}

	// void osgUtil::IntersectVisitor::addLineSegment(osg::LineSegment * seg)
	static int _bind_addLineSegment(lua_State *L) {
		if (!_lg_typecheck_addLineSegment(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::addLineSegment(osg::LineSegment * seg) function, expected prototype:\nvoid osgUtil::IntersectVisitor::addLineSegment(osg::LineSegment * seg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LineSegment* seg=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::addLineSegment(osg::LineSegment *)");
		}
		self->addLineSegment(seg);

		return 0;
	}

	// int osgUtil::IntersectVisitor::getNumHits(const osg::LineSegment * seg)
	static int _bind_getNumHits(lua_State *L) {
		if (!_lg_typecheck_getNumHits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in int osgUtil::IntersectVisitor::getNumHits(const osg::LineSegment * seg) function, expected prototype:\nint osgUtil::IntersectVisitor::getNumHits(const osg::LineSegment * seg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::LineSegment* seg=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call int osgUtil::IntersectVisitor::getNumHits(const osg::LineSegment *)");
		}
		int lret = self->getNumHits(seg);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::IntersectVisitor::hits()
	static int _bind_hits(lua_State *L) {
		if (!_lg_typecheck_hits(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectVisitor::hits() function, expected prototype:\nbool osgUtil::IntersectVisitor::hits()\nClass arguments details:\n");
		}


		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectVisitor::hits()");
		}
		bool lret = self->hits();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectVisitor::setLODSelectionMode(osgUtil::IntersectVisitor::LODSelectionMode mode)
	static int _bind_setLODSelectionMode(lua_State *L) {
		if (!_lg_typecheck_setLODSelectionMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::setLODSelectionMode(osgUtil::IntersectVisitor::LODSelectionMode mode) function, expected prototype:\nvoid osgUtil::IntersectVisitor::setLODSelectionMode(osgUtil::IntersectVisitor::LODSelectionMode mode)\nClass arguments details:\n");
		}

		osgUtil::IntersectVisitor::LODSelectionMode mode=(osgUtil::IntersectVisitor::LODSelectionMode)lua_tointeger(L,2);

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::setLODSelectionMode(osgUtil::IntersectVisitor::LODSelectionMode)");
		}
		self->setLODSelectionMode(mode);

		return 0;
	}

	// osgUtil::IntersectVisitor::LODSelectionMode osgUtil::IntersectVisitor::getLODSelectionMode() const
	static int _bind_getLODSelectionMode(lua_State *L) {
		if (!_lg_typecheck_getLODSelectionMode(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectVisitor::LODSelectionMode osgUtil::IntersectVisitor::getLODSelectionMode() const function, expected prototype:\nosgUtil::IntersectVisitor::LODSelectionMode osgUtil::IntersectVisitor::getLODSelectionMode() const\nClass arguments details:\n");
		}


		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osgUtil::IntersectVisitor::LODSelectionMode osgUtil::IntersectVisitor::getLODSelectionMode() const");
		}
		osgUtil::IntersectVisitor::LODSelectionMode lret = self->getLODSelectionMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::IntersectVisitor::setEyePoint(const osg::Vec3f & eye)
	static int _bind_setEyePoint(lua_State *L) {
		if (!_lg_typecheck_setEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::setEyePoint(const osg::Vec3f & eye) function, expected prototype:\nvoid osgUtil::IntersectVisitor::setEyePoint(const osg::Vec3f & eye)\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* eye_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !eye_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg eye in osgUtil::IntersectVisitor::setEyePoint function");
		}
		const osg::Vec3f & eye=*eye_ptr;

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::setEyePoint(const osg::Vec3f &)");
		}
		self->setEyePoint(eye);

		return 0;
	}

	// osg::Vec3f osgUtil::IntersectVisitor::getEyePoint() const
	static int _bind_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_getEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::IntersectVisitor::getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::IntersectVisitor::getEyePoint() const\nClass arguments details:\n");
		}


		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::IntersectVisitor::getEyePoint() const");
		}
		osg::Vec3f stack_lret = self->getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::IntersectVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	static int _bind_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToEyePoint(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in float osgUtil::IntersectVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const function, expected prototype:\nfloat osgUtil::IntersectVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const\nClass arguments details:\narg 1 ID = 92303204\n");
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgUtil::IntersectVisitor::getDistanceToEyePoint function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		bool withLODScale=(bool)(lua_toboolean(L,3)==1);

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call float osgUtil::IntersectVisitor::getDistanceToEyePoint(const osg::Vec3f &, bool) const");
		}
		float lret = self->getDistanceToEyePoint(pos, withLODScale);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::IntersectVisitor::apply(osg::Node & )
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::apply(osg::Node & ) function, expected prototype:\nvoid osgUtil::IntersectVisitor::apply(osg::Node & )\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* _arg1_ptr=dynamic_cast< osg::Node* >(Luna< osg::Referenced >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::IntersectVisitor::apply function");
		}
		osg::Node & _arg1=*_arg1_ptr;

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::apply(osg::Node &)");
		}
		self->apply(_arg1);

		return 0;
	}

	// void osgUtil::IntersectVisitor::apply(osg::Geode & node)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::IntersectVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Geode* node_ptr=dynamic_cast< osg::Geode* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::apply(osg::Geode &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::IntersectVisitor::apply(osg::Billboard & node)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::apply(osg::Billboard & node) function, expected prototype:\nvoid osgUtil::IntersectVisitor::apply(osg::Billboard & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Billboard* node_ptr=dynamic_cast< osg::Billboard* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectVisitor::apply function");
		}
		osg::Billboard & node=*node_ptr;

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::apply(osg::Billboard &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::IntersectVisitor::apply(osg::Group & node)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::apply(osg::Group & node) function, expected prototype:\nvoid osgUtil::IntersectVisitor::apply(osg::Group & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Group* node_ptr=dynamic_cast< osg::Group* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectVisitor::apply function");
		}
		osg::Group & node=*node_ptr;

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::apply(osg::Group &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::IntersectVisitor::apply(osg::Transform & node)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::apply(osg::Transform & node) function, expected prototype:\nvoid osgUtil::IntersectVisitor::apply(osg::Transform & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Transform* node_ptr=dynamic_cast< osg::Transform* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectVisitor::apply function");
		}
		osg::Transform & node=*node_ptr;

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::apply(osg::Transform &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::IntersectVisitor::apply(osg::Switch & node)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::apply(osg::Switch & node) function, expected prototype:\nvoid osgUtil::IntersectVisitor::apply(osg::Switch & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Switch* node_ptr=dynamic_cast< osg::Switch* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectVisitor::apply function");
		}
		osg::Switch & node=*node_ptr;

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::apply(osg::Switch &)");
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::IntersectVisitor::apply(osg::LOD & node)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectVisitor::apply(osg::LOD & node) function, expected prototype:\nvoid osgUtil::IntersectVisitor::apply(osg::LOD & node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::LOD* node_ptr=dynamic_cast< osg::LOD* >(Luna< osg::Referenced >::check(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectVisitor::apply function");
		}
		osg::LOD & node=*node_ptr;

		osgUtil::IntersectVisitor* self=dynamic_cast< osgUtil::IntersectVisitor* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectVisitor::apply(osg::LOD &)");
		}
		self->apply(node);

		return 0;
	}

	// Overload binder for osgUtil::IntersectVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Billboard &)\n  apply(osg::Group &)\n  apply(osg::Transform &)\n  apply(osg::Switch &)\n  apply(osg::LOD &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::IntersectVisitor* LunaTraits< osgUtil::IntersectVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_IntersectVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::IntersectVisitor >::_bind_dtor(osgUtil::IntersectVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IntersectVisitor >::className[] = "IntersectVisitor";
const char LunaTraits< osgUtil::IntersectVisitor >::fullName[] = "osgUtil::IntersectVisitor";
const char LunaTraits< osgUtil::IntersectVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IntersectVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::IntersectVisitor >::hash = 22410505;
const int LunaTraits< osgUtil::IntersectVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IntersectVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_IntersectVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_IntersectVisitor::_bind_className},
	{"reset", &luna_wrapper_osgUtil_IntersectVisitor::_bind_reset},
	{"addLineSegment", &luna_wrapper_osgUtil_IntersectVisitor::_bind_addLineSegment},
	{"getNumHits", &luna_wrapper_osgUtil_IntersectVisitor::_bind_getNumHits},
	{"hits", &luna_wrapper_osgUtil_IntersectVisitor::_bind_hits},
	{"setLODSelectionMode", &luna_wrapper_osgUtil_IntersectVisitor::_bind_setLODSelectionMode},
	{"getLODSelectionMode", &luna_wrapper_osgUtil_IntersectVisitor::_bind_getLODSelectionMode},
	{"setEyePoint", &luna_wrapper_osgUtil_IntersectVisitor::_bind_setEyePoint},
	{"getEyePoint", &luna_wrapper_osgUtil_IntersectVisitor::_bind_getEyePoint},
	{"getDistanceToEyePoint", &luna_wrapper_osgUtil_IntersectVisitor::_bind_getDistanceToEyePoint},
	{"apply", &luna_wrapper_osgUtil_IntersectVisitor::_bind_apply},
	{"__eq", &luna_wrapper_osgUtil_IntersectVisitor::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IntersectVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IntersectVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IntersectVisitor >::enumValues[] = {
	{"USE_HIGHEST_LEVEL_OF_DETAIL", osgUtil::IntersectVisitor::USE_HIGHEST_LEVEL_OF_DETAIL},
	{"USE_SEGMENT_START_POINT_AS_EYE_POINT_FOR_LOD_LEVEL_SELECTION", osgUtil::IntersectVisitor::USE_SEGMENT_START_POINT_AS_EYE_POINT_FOR_LOD_LEVEL_SELECTION},
	{0,0}
};


