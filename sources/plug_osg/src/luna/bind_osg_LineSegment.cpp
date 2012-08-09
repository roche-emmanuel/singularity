#include <plug_common.h>

class luna_wrapper_osg_LineSegment {
public:
	typedef Luna< osg::LineSegment > luna_t;

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		osg::LineSegment* ptr= dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::LineSegment >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_start_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_start_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_end_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_valid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82744899) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82744899) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82744899) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54337302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54337302) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_6(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,54337302) ) return false;
		if( lua_isnumber(L,3)==0 ) return false;
		if( lua_isnumber(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_7(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303204) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_intersect_overload_8(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,92303202) ) return false;
		if( lua_isnumber(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mult_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mult_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::LineSegment::LineSegment()
	static osg::LineSegment* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineSegment::LineSegment() function, expected prototype:\nosg::LineSegment::LineSegment()\nClass arguments details:\n");
		}


		return new osg::LineSegment();
	}

	// osg::LineSegment::LineSegment(const osg::LineSegment & seg)
	static osg::LineSegment* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineSegment::LineSegment(const osg::LineSegment & seg) function, expected prototype:\nosg::LineSegment::LineSegment(const osg::LineSegment & seg)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::LineSegment* seg_ptr=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if( !seg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg seg in osg::LineSegment::LineSegment function");
		}
		const osg::LineSegment & seg=*seg_ptr;

		return new osg::LineSegment(seg);
	}

	// osg::LineSegment::LineSegment(const osg::Vec3d & s, const osg::Vec3d & e)
	static osg::LineSegment* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::LineSegment::LineSegment(const osg::Vec3d & s, const osg::Vec3d & e) function, expected prototype:\nosg::LineSegment::LineSegment(const osg::Vec3d & s, const osg::Vec3d & e)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n");
		}

		const osg::Vec3d* s_ptr=(Luna< osg::Vec3d >::check(L,1));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in osg::LineSegment::LineSegment function");
		}
		const osg::Vec3d & s=*s_ptr;
		const osg::Vec3d* e_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in osg::LineSegment::LineSegment function");
		}
		const osg::Vec3d & e=*e_ptr;

		return new osg::LineSegment(s, e);
	}

	// Overload binder for osg::LineSegment::LineSegment
	static osg::LineSegment* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function LineSegment, cannot match any of the overloads for function LineSegment:\n  LineSegment()\n  LineSegment(const osg::LineSegment &)\n  LineSegment(const osg::Vec3d &, const osg::Vec3d &)\n");
		return NULL;
	}


	// Function binds:
	// void osg::LineSegment::set(const osg::Vec3d & s, const osg::Vec3d & e)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LineSegment::set(const osg::Vec3d & s, const osg::Vec3d & e) function, expected prototype:\nvoid osg::LineSegment::set(const osg::Vec3d & s, const osg::Vec3d & e)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\n");
		}

		const osg::Vec3d* s_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in osg::LineSegment::set function");
		}
		const osg::Vec3d & s=*s_ptr;
		const osg::Vec3d* e_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !e_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg e in osg::LineSegment::set function");
		}
		const osg::Vec3d & e=*e_ptr;

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LineSegment::set(const osg::Vec3d &, const osg::Vec3d &)");
		}
		self->set(s, e);

		return 0;
	}

	// osg::Vec3d & osg::LineSegment::start()
	static int _bind_start_overload_1(lua_State *L) {
		if (!_lg_typecheck_start_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d & osg::LineSegment::start() function, expected prototype:\nosg::Vec3d & osg::LineSegment::start()\nClass arguments details:\n");
		}


		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d & osg::LineSegment::start()");
		}
		const osg::Vec3d* lret = &self->start();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3d & osg::LineSegment::start() const
	static int _bind_start_overload_2(lua_State *L) {
		if (!_lg_typecheck_start_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::LineSegment::start() const function, expected prototype:\nconst osg::Vec3d & osg::LineSegment::start() const\nClass arguments details:\n");
		}


		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::LineSegment::start() const");
		}
		const osg::Vec3d* lret = &self->start();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LineSegment::start
	static int _bind_start(lua_State *L) {
		if (_lg_typecheck_start_overload_1(L)) return _bind_start_overload_1(L);
		if (_lg_typecheck_start_overload_2(L)) return _bind_start_overload_2(L);

		luaL_error(L, "error in function start, cannot match any of the overloads for function start:\n  start()\n  start()\n");
		return 0;
	}

	// osg::Vec3d & osg::LineSegment::end()
	static int _bind_end_overload_1(lua_State *L) {
		if (!_lg_typecheck_end_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d & osg::LineSegment::end() function, expected prototype:\nosg::Vec3d & osg::LineSegment::end()\nClass arguments details:\n");
		}


		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d & osg::LineSegment::end()");
		}
		const osg::Vec3d* lret = &self->end();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// const osg::Vec3d & osg::LineSegment::end() const
	static int _bind_end_overload_2(lua_State *L) {
		if (!_lg_typecheck_end_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osg::LineSegment::end() const function, expected prototype:\nconst osg::Vec3d & osg::LineSegment::end() const\nClass arguments details:\n");
		}


		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osg::LineSegment::end() const");
		}
		const osg::Vec3d* lret = &self->end();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::LineSegment::end
	static int _bind_end(lua_State *L) {
		if (_lg_typecheck_end_overload_1(L)) return _bind_end_overload_1(L);
		if (_lg_typecheck_end_overload_2(L)) return _bind_end_overload_2(L);

		luaL_error(L, "error in function end, cannot match any of the overloads for function end:\n  end()\n  end()\n");
		return 0;
	}

	// bool osg::LineSegment::valid() const
	static int _bind_valid(lua_State *L) {
		if (!_lg_typecheck_valid(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineSegment::valid() const function, expected prototype:\nbool osg::LineSegment::valid() const\nClass arguments details:\n");
		}


		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineSegment::valid() const");
		}
		bool lret = self->valid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LineSegment::intersect(const osg::BoundingBoxf & bb) const
	static int _bind_intersect_overload_1(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineSegment::intersect(const osg::BoundingBoxf & bb) const function, expected prototype:\nbool osg::LineSegment::intersect(const osg::BoundingBoxf & bb) const\nClass arguments details:\narg 1 ID = 82744899\n");
		}

		const osg::BoundingBoxf* bb_ptr=(Luna< osg::BoundingBoxf >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::LineSegment::intersect function");
		}
		const osg::BoundingBoxf & bb=*bb_ptr;

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineSegment::intersect(const osg::BoundingBoxf &) const");
		}
		bool lret = self->intersect(bb);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LineSegment::intersect(const osg::BoundingBoxf & bb, float & r1, float & r2) const
	static int _bind_intersect_overload_2(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineSegment::intersect(const osg::BoundingBoxf & bb, float & r1, float & r2) const function, expected prototype:\nbool osg::LineSegment::intersect(const osg::BoundingBoxf & bb, float & r1, float & r2) const\nClass arguments details:\narg 1 ID = 82744899\n");
		}

		const osg::BoundingBoxf* bb_ptr=(Luna< osg::BoundingBoxf >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::LineSegment::intersect function");
		}
		const osg::BoundingBoxf & bb=*bb_ptr;
		float r1=(float)lua_tonumber(L,3);
		float r2=(float)lua_tonumber(L,4);

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineSegment::intersect(const osg::BoundingBoxf &, float &, float &) const");
		}
		bool lret = self->intersect(bb, r1, r2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LineSegment::intersect(const osg::BoundingBoxf & bb, double & r1, double & r2) const
	static int _bind_intersect_overload_3(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineSegment::intersect(const osg::BoundingBoxf & bb, double & r1, double & r2) const function, expected prototype:\nbool osg::LineSegment::intersect(const osg::BoundingBoxf & bb, double & r1, double & r2) const\nClass arguments details:\narg 1 ID = 82744899\n");
		}

		const osg::BoundingBoxf* bb_ptr=(Luna< osg::BoundingBoxf >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::LineSegment::intersect function");
		}
		const osg::BoundingBoxf & bb=*bb_ptr;
		double r1=(double)lua_tonumber(L,3);
		double r2=(double)lua_tonumber(L,4);

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineSegment::intersect(const osg::BoundingBoxf &, double &, double &) const");
		}
		bool lret = self->intersect(bb, r1, r2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LineSegment::intersect(const osg::BoundingSpheref & bs) const
	static int _bind_intersect_overload_4(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineSegment::intersect(const osg::BoundingSpheref & bs) const function, expected prototype:\nbool osg::LineSegment::intersect(const osg::BoundingSpheref & bs) const\nClass arguments details:\narg 1 ID = 54337302\n");
		}

		const osg::BoundingSpheref* bs_ptr=(Luna< osg::BoundingSpheref >::check(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::LineSegment::intersect function");
		}
		const osg::BoundingSpheref & bs=*bs_ptr;

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineSegment::intersect(const osg::BoundingSpheref &) const");
		}
		bool lret = self->intersect(bs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LineSegment::intersect(const osg::BoundingSpheref & bs, float & r1, float & r2) const
	static int _bind_intersect_overload_5(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineSegment::intersect(const osg::BoundingSpheref & bs, float & r1, float & r2) const function, expected prototype:\nbool osg::LineSegment::intersect(const osg::BoundingSpheref & bs, float & r1, float & r2) const\nClass arguments details:\narg 1 ID = 54337302\n");
		}

		const osg::BoundingSpheref* bs_ptr=(Luna< osg::BoundingSpheref >::check(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::LineSegment::intersect function");
		}
		const osg::BoundingSpheref & bs=*bs_ptr;
		float r1=(float)lua_tonumber(L,3);
		float r2=(float)lua_tonumber(L,4);

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineSegment::intersect(const osg::BoundingSpheref &, float &, float &) const");
		}
		bool lret = self->intersect(bs, r1, r2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LineSegment::intersect(const osg::BoundingSpheref & bs, double & r1, double & r2) const
	static int _bind_intersect_overload_6(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineSegment::intersect(const osg::BoundingSpheref & bs, double & r1, double & r2) const function, expected prototype:\nbool osg::LineSegment::intersect(const osg::BoundingSpheref & bs, double & r1, double & r2) const\nClass arguments details:\narg 1 ID = 54337302\n");
		}

		const osg::BoundingSpheref* bs_ptr=(Luna< osg::BoundingSpheref >::check(L,2));
		if( !bs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bs in osg::LineSegment::intersect function");
		}
		const osg::BoundingSpheref & bs=*bs_ptr;
		double r1=(double)lua_tonumber(L,3);
		double r2=(double)lua_tonumber(L,4);

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineSegment::intersect(const osg::BoundingSpheref &, double &, double &) const");
		}
		bool lret = self->intersect(bs, r1, r2);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LineSegment::intersect(const osg::Vec3f & v1, const osg::Vec3f & v2, const osg::Vec3f & v3, float & r)
	static int _bind_intersect_overload_7(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_7(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineSegment::intersect(const osg::Vec3f & v1, const osg::Vec3f & v2, const osg::Vec3f & v3, float & r) function, expected prototype:\nbool osg::LineSegment::intersect(const osg::Vec3f & v1, const osg::Vec3f & v2, const osg::Vec3f & v3, float & r)\nClass arguments details:\narg 1 ID = 92303204\narg 2 ID = 92303204\narg 3 ID = 92303204\n");
		}

		const osg::Vec3f* v1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in osg::LineSegment::intersect function");
		}
		const osg::Vec3f & v1=*v1_ptr;
		const osg::Vec3f* v2_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::LineSegment::intersect function");
		}
		const osg::Vec3f & v2=*v2_ptr;
		const osg::Vec3f* v3_ptr=(Luna< osg::Vec3f >::check(L,4));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::LineSegment::intersect function");
		}
		const osg::Vec3f & v3=*v3_ptr;
		float r=(float)lua_tonumber(L,5);

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineSegment::intersect(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &, float &)");
		}
		bool lret = self->intersect(v1, v2, v3, r);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::LineSegment::intersect(const osg::Vec3d & v1, const osg::Vec3d & v2, const osg::Vec3d & v3, double & r)
	static int _bind_intersect_overload_8(lua_State *L) {
		if (!_lg_typecheck_intersect_overload_8(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::LineSegment::intersect(const osg::Vec3d & v1, const osg::Vec3d & v2, const osg::Vec3d & v3, double & r) function, expected prototype:\nbool osg::LineSegment::intersect(const osg::Vec3d & v1, const osg::Vec3d & v2, const osg::Vec3d & v3, double & r)\nClass arguments details:\narg 1 ID = 92303202\narg 2 ID = 92303202\narg 3 ID = 92303202\n");
		}

		const osg::Vec3d* v1_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !v1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v1 in osg::LineSegment::intersect function");
		}
		const osg::Vec3d & v1=*v1_ptr;
		const osg::Vec3d* v2_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !v2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v2 in osg::LineSegment::intersect function");
		}
		const osg::Vec3d & v2=*v2_ptr;
		const osg::Vec3d* v3_ptr=(Luna< osg::Vec3d >::check(L,4));
		if( !v3_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg v3 in osg::LineSegment::intersect function");
		}
		const osg::Vec3d & v3=*v3_ptr;
		double r=(double)lua_tonumber(L,5);

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::LineSegment::intersect(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, double &)");
		}
		bool lret = self->intersect(v1, v2, v3, r);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::LineSegment::intersect
	static int _bind_intersect(lua_State *L) {
		if (_lg_typecheck_intersect_overload_1(L)) return _bind_intersect_overload_1(L);
		if (_lg_typecheck_intersect_overload_2(L)) return _bind_intersect_overload_2(L);
		if (_lg_typecheck_intersect_overload_3(L)) return _bind_intersect_overload_3(L);
		if (_lg_typecheck_intersect_overload_4(L)) return _bind_intersect_overload_4(L);
		if (_lg_typecheck_intersect_overload_5(L)) return _bind_intersect_overload_5(L);
		if (_lg_typecheck_intersect_overload_6(L)) return _bind_intersect_overload_6(L);
		if (_lg_typecheck_intersect_overload_7(L)) return _bind_intersect_overload_7(L);
		if (_lg_typecheck_intersect_overload_8(L)) return _bind_intersect_overload_8(L);

		luaL_error(L, "error in function intersect, cannot match any of the overloads for function intersect:\n  intersect(const osg::BoundingBoxf &)\n  intersect(const osg::BoundingBoxf &, float &, float &)\n  intersect(const osg::BoundingBoxf &, double &, double &)\n  intersect(const osg::BoundingSpheref &)\n  intersect(const osg::BoundingSpheref &, float &, float &)\n  intersect(const osg::BoundingSpheref &, double &, double &)\n  intersect(const osg::Vec3f &, const osg::Vec3f &, const osg::Vec3f &, float &)\n  intersect(const osg::Vec3d &, const osg::Vec3d &, const osg::Vec3d &, double &)\n");
		return 0;
	}

	// void osg::LineSegment::mult(const osg::LineSegment & seg, const osg::Matrixd & m)
	static int _bind_mult_overload_1(lua_State *L) {
		if (!_lg_typecheck_mult_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LineSegment::mult(const osg::LineSegment & seg, const osg::Matrixd & m) function, expected prototype:\nvoid osg::LineSegment::mult(const osg::LineSegment & seg, const osg::Matrixd & m)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 18903838\n");
		}

		const osg::LineSegment* seg_ptr=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,2));
		if( !seg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg seg in osg::LineSegment::mult function");
		}
		const osg::LineSegment & seg=*seg_ptr;
		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::LineSegment::mult function");
		}
		const osg::Matrixd & m=*m_ptr;

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LineSegment::mult(const osg::LineSegment &, const osg::Matrixd &)");
		}
		self->mult(seg, m);

		return 0;
	}

	// void osg::LineSegment::mult(const osg::Matrixd & m, const osg::LineSegment & seg)
	static int _bind_mult_overload_2(lua_State *L) {
		if (!_lg_typecheck_mult_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::LineSegment::mult(const osg::Matrixd & m, const osg::LineSegment & seg) function, expected prototype:\nvoid osg::LineSegment::mult(const osg::Matrixd & m, const osg::LineSegment & seg)\nClass arguments details:\narg 1 ID = 18903838\narg 2 ID = 50169651\n");
		}

		const osg::Matrixd* m_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !m_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg m in osg::LineSegment::mult function");
		}
		const osg::Matrixd & m=*m_ptr;
		const osg::LineSegment* seg_ptr=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,3));
		if( !seg_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg seg in osg::LineSegment::mult function");
		}
		const osg::LineSegment & seg=*seg_ptr;

		osg::LineSegment* self=dynamic_cast< osg::LineSegment* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::LineSegment::mult(const osg::Matrixd &, const osg::LineSegment &)");
		}
		self->mult(m, seg);

		return 0;
	}

	// Overload binder for osg::LineSegment::mult
	static int _bind_mult(lua_State *L) {
		if (_lg_typecheck_mult_overload_1(L)) return _bind_mult_overload_1(L);
		if (_lg_typecheck_mult_overload_2(L)) return _bind_mult_overload_2(L);

		luaL_error(L, "error in function mult, cannot match any of the overloads for function mult:\n  mult(const osg::LineSegment &, const osg::Matrixd &)\n  mult(const osg::Matrixd &, const osg::LineSegment &)\n");
		return 0;
	}


	// Operator binds:

};

osg::LineSegment* LunaTraits< osg::LineSegment >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_LineSegment::_bind_ctor(L);
}

void LunaTraits< osg::LineSegment >::_bind_dtor(osg::LineSegment* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::LineSegment >::className[] = "LineSegment";
const char LunaTraits< osg::LineSegment >::fullName[] = "osg::LineSegment";
const char LunaTraits< osg::LineSegment >::moduleName[] = "osg";
const char* LunaTraits< osg::LineSegment >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::LineSegment >::hash = 50932003;
const int LunaTraits< osg::LineSegment >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::LineSegment >::methods[] = {
	{"set", &luna_wrapper_osg_LineSegment::_bind_set},
	{"start", &luna_wrapper_osg_LineSegment::_bind_start},
	{"end", &luna_wrapper_osg_LineSegment::_bind_end},
	{"valid", &luna_wrapper_osg_LineSegment::_bind_valid},
	{"intersect", &luna_wrapper_osg_LineSegment::_bind_intersect},
	{"mult", &luna_wrapper_osg_LineSegment::_bind_mult},
	{0,0}
};

luna_ConverterType LunaTraits< osg::LineSegment >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_LineSegment::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::LineSegment >::enumValues[] = {
	{0,0}
};

