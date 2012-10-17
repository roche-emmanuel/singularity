#include <plug_common.h>

class luna_wrapper_osg_CoordinateSystemNode {
public:
	typedef Luna< osg::CoordinateSystemNode > luna_t;

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
		osg::CoordinateSystemNode* ptr= dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::CoordinateSystemNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,1)==0 ) return false;
		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
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

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCoordinateSystem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCoordinateSystem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEllipsoidModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEllipsoidModel_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEllipsoidModel_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeLocalCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLocalUpVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::CoordinateSystemNode::CoordinateSystemNode()
	static osg::CoordinateSystemNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CoordinateSystemNode::CoordinateSystemNode() function, expected prototype:\nosg::CoordinateSystemNode::CoordinateSystemNode()\nClass arguments details:\n");
		}


		return new osg::CoordinateSystemNode();
	}

	// osg::CoordinateSystemNode::CoordinateSystemNode(const std::string & format, const std::string & cs)
	static osg::CoordinateSystemNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CoordinateSystemNode::CoordinateSystemNode(const std::string & format, const std::string & cs) function, expected prototype:\nosg::CoordinateSystemNode::CoordinateSystemNode(const std::string & format, const std::string & cs)\nClass arguments details:\n");
		}

		std::string format(lua_tostring(L,1),lua_objlen(L,1));
		std::string cs(lua_tostring(L,2),lua_objlen(L,2));

		return new osg::CoordinateSystemNode(format, cs);
	}

	// osg::CoordinateSystemNode::CoordinateSystemNode(const osg::CoordinateSystemNode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::CoordinateSystemNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::CoordinateSystemNode::CoordinateSystemNode(const osg::CoordinateSystemNode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::CoordinateSystemNode::CoordinateSystemNode(const osg::CoordinateSystemNode & , const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::CoordinateSystemNode* _arg1_ptr=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::CoordinateSystemNode::CoordinateSystemNode function");
		}
		const osg::CoordinateSystemNode & _arg1=*_arg1_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CoordinateSystemNode::CoordinateSystemNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::CoordinateSystemNode(_arg1, copyop);
	}

	// Overload binder for osg::CoordinateSystemNode::CoordinateSystemNode
	static osg::CoordinateSystemNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function CoordinateSystemNode, cannot match any of the overloads for function CoordinateSystemNode:\n  CoordinateSystemNode()\n  CoordinateSystemNode(const std::string &, const std::string &)\n  CoordinateSystemNode(const osg::CoordinateSystemNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::CoordinateSystemNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CoordinateSystemNode::cloneType() const function, expected prototype:\nosg::Object * osg::CoordinateSystemNode::cloneType() const\nClass arguments details:\n");
		}


		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::CoordinateSystemNode::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::CoordinateSystemNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::CoordinateSystemNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::CoordinateSystemNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::CoordinateSystemNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::CoordinateSystemNode::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::CoordinateSystemNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::CoordinateSystemNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::CoordinateSystemNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::CoordinateSystemNode::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::CoordinateSystemNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CoordinateSystemNode::className() const function, expected prototype:\nconst char * osg::CoordinateSystemNode::className() const\nClass arguments details:\n");
		}


		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CoordinateSystemNode::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::CoordinateSystemNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::CoordinateSystemNode::libraryName() const function, expected prototype:\nconst char * osg::CoordinateSystemNode::libraryName() const\nClass arguments details:\n");
		}


		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::CoordinateSystemNode::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::CoordinateSystemNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::CoordinateSystemNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::CoordinateSystemNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::CoordinateSystemNode::set(const osg::CoordinateSystemNode & csn)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::set(const osg::CoordinateSystemNode & csn) function, expected prototype:\nvoid osg::CoordinateSystemNode::set(const osg::CoordinateSystemNode & csn)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::CoordinateSystemNode* csn_ptr=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,2));
		if( !csn_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg csn in osg::CoordinateSystemNode::set function");
		}
		const osg::CoordinateSystemNode & csn=*csn_ptr;

		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::set(const osg::CoordinateSystemNode &)");
		}
		self->set(csn);

		return 0;
	}

	// void osg::CoordinateSystemNode::setFormat(const std::string & format)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::setFormat(const std::string & format) function, expected prototype:\nvoid osg::CoordinateSystemNode::setFormat(const std::string & format)\nClass arguments details:\n");
		}

		std::string format(lua_tostring(L,2),lua_objlen(L,2));

		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::setFormat(const std::string &)");
		}
		self->setFormat(format);

		return 0;
	}

	// const std::string & osg::CoordinateSystemNode::getFormat() const
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::CoordinateSystemNode::getFormat() const function, expected prototype:\nconst std::string & osg::CoordinateSystemNode::getFormat() const\nClass arguments details:\n");
		}


		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::CoordinateSystemNode::getFormat() const");
		}
		const std::string & lret = self->getFormat();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::CoordinateSystemNode::setCoordinateSystem(const std::string & cs)
	static int _bind_setCoordinateSystem(lua_State *L) {
		if (!_lg_typecheck_setCoordinateSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::setCoordinateSystem(const std::string & cs) function, expected prototype:\nvoid osg::CoordinateSystemNode::setCoordinateSystem(const std::string & cs)\nClass arguments details:\n");
		}

		std::string cs(lua_tostring(L,2),lua_objlen(L,2));

		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::setCoordinateSystem(const std::string &)");
		}
		self->setCoordinateSystem(cs);

		return 0;
	}

	// const std::string & osg::CoordinateSystemNode::getCoordinateSystem() const
	static int _bind_getCoordinateSystem(lua_State *L) {
		if (!_lg_typecheck_getCoordinateSystem(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const std::string & osg::CoordinateSystemNode::getCoordinateSystem() const function, expected prototype:\nconst std::string & osg::CoordinateSystemNode::getCoordinateSystem() const\nClass arguments details:\n");
		}


		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const std::string & osg::CoordinateSystemNode::getCoordinateSystem() const");
		}
		const std::string & lret = self->getCoordinateSystem();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::CoordinateSystemNode::setEllipsoidModel(osg::EllipsoidModel * ellipsode)
	static int _bind_setEllipsoidModel(lua_State *L) {
		if (!_lg_typecheck_setEllipsoidModel(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::CoordinateSystemNode::setEllipsoidModel(osg::EllipsoidModel * ellipsode) function, expected prototype:\nvoid osg::CoordinateSystemNode::setEllipsoidModel(osg::EllipsoidModel * ellipsode)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::EllipsoidModel* ellipsode=dynamic_cast< osg::EllipsoidModel* >(Luna< osg::Referenced >::check(L,2));

		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::CoordinateSystemNode::setEllipsoidModel(osg::EllipsoidModel *)");
		}
		self->setEllipsoidModel(ellipsode);

		return 0;
	}

	// osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel()
	static int _bind_getEllipsoidModel_overload_1(lua_State *L) {
		if (!_lg_typecheck_getEllipsoidModel_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() function, expected prototype:\nosg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel()\nClass arguments details:\n");
		}


		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel()");
		}
		osg::EllipsoidModel * lret = self->getEllipsoidModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::EllipsoidModel >::push(L,lret,false);

		return 1;
	}

	// const osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() const
	static int _bind_getEllipsoidModel_overload_2(lua_State *L) {
		if (!_lg_typecheck_getEllipsoidModel_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() const function, expected prototype:\nconst osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() const\nClass arguments details:\n");
		}


		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::EllipsoidModel * osg::CoordinateSystemNode::getEllipsoidModel() const");
		}
		const osg::EllipsoidModel * lret = self->getEllipsoidModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::EllipsoidModel >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::CoordinateSystemNode::getEllipsoidModel
	static int _bind_getEllipsoidModel(lua_State *L) {
		if (_lg_typecheck_getEllipsoidModel_overload_1(L)) return _bind_getEllipsoidModel_overload_1(L);
		if (_lg_typecheck_getEllipsoidModel_overload_2(L)) return _bind_getEllipsoidModel_overload_2(L);

		luaL_error(L, "error in function getEllipsoidModel, cannot match any of the overloads for function getEllipsoidModel:\n  getEllipsoidModel()\n  getEllipsoidModel()\n");
		return 0;
	}

	// osg::Matrixd osg::CoordinateSystemNode::computeLocalCoordinateFrame(const osg::Vec3d & position) const
	static int _bind_computeLocalCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_computeLocalCoordinateFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Matrixd osg::CoordinateSystemNode::computeLocalCoordinateFrame(const osg::Vec3d & position) const function, expected prototype:\nosg::Matrixd osg::CoordinateSystemNode::computeLocalCoordinateFrame(const osg::Vec3d & position) const\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::CoordinateSystemNode::computeLocalCoordinateFrame function");
		}
		const osg::Vec3d & position=*position_ptr;

		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Matrixd osg::CoordinateSystemNode::computeLocalCoordinateFrame(const osg::Vec3d &) const");
		}
		osg::Matrixd stack_lret = self->computeLocalCoordinateFrame(position);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3d osg::CoordinateSystemNode::computeLocalUpVector(const osg::Vec3d & position) const
	static int _bind_computeLocalUpVector(lua_State *L) {
		if (!_lg_typecheck_computeLocalUpVector(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::CoordinateSystemNode::computeLocalUpVector(const osg::Vec3d & position) const function, expected prototype:\nosg::Vec3d osg::CoordinateSystemNode::computeLocalUpVector(const osg::Vec3d & position) const\nClass arguments details:\narg 1 ID = 92303202\n");
		}

		const osg::Vec3d* position_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !position_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg position in osg::CoordinateSystemNode::computeLocalUpVector function");
		}
		const osg::Vec3d & position=*position_ptr;

		osg::CoordinateSystemNode* self=dynamic_cast< osg::CoordinateSystemNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::CoordinateSystemNode::computeLocalUpVector(const osg::Vec3d &) const");
		}
		osg::Vec3d stack_lret = self->computeLocalUpVector(position);
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

osg::CoordinateSystemNode* LunaTraits< osg::CoordinateSystemNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_CoordinateSystemNode::_bind_ctor(L);
}

void LunaTraits< osg::CoordinateSystemNode >::_bind_dtor(osg::CoordinateSystemNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::CoordinateSystemNode >::className[] = "CoordinateSystemNode";
const char LunaTraits< osg::CoordinateSystemNode >::fullName[] = "osg::CoordinateSystemNode";
const char LunaTraits< osg::CoordinateSystemNode >::moduleName[] = "osg";
const char* LunaTraits< osg::CoordinateSystemNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::CoordinateSystemNode >::hash = 6002350;
const int LunaTraits< osg::CoordinateSystemNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::CoordinateSystemNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_CoordinateSystemNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_CoordinateSystemNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_CoordinateSystemNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_CoordinateSystemNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_CoordinateSystemNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_CoordinateSystemNode::_bind_accept},
	{"set", &luna_wrapper_osg_CoordinateSystemNode::_bind_set},
	{"setFormat", &luna_wrapper_osg_CoordinateSystemNode::_bind_setFormat},
	{"getFormat", &luna_wrapper_osg_CoordinateSystemNode::_bind_getFormat},
	{"setCoordinateSystem", &luna_wrapper_osg_CoordinateSystemNode::_bind_setCoordinateSystem},
	{"getCoordinateSystem", &luna_wrapper_osg_CoordinateSystemNode::_bind_getCoordinateSystem},
	{"setEllipsoidModel", &luna_wrapper_osg_CoordinateSystemNode::_bind_setEllipsoidModel},
	{"getEllipsoidModel", &luna_wrapper_osg_CoordinateSystemNode::_bind_getEllipsoidModel},
	{"computeLocalCoordinateFrame", &luna_wrapper_osg_CoordinateSystemNode::_bind_computeLocalCoordinateFrame},
	{"computeLocalUpVector", &luna_wrapper_osg_CoordinateSystemNode::_bind_computeLocalUpVector},
	{"__eq", &luna_wrapper_osg_CoordinateSystemNode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::CoordinateSystemNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_CoordinateSystemNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::CoordinateSystemNode >::enumValues[] = {
	{0,0}
};


