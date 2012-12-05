#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_TexGenNode.h>

class luna_wrapper_osg_TexGenNode {
public:
	typedef Luna< osg::TexGenNode > luna_t;

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
		osg::TexGenNode* ptr= dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::TexGenNode >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		if( (!dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		if( luatop>1 && (!dynamic_cast< osg::CopyOp* >(Luna< osg::CopyOp >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,2))) ) return false;
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

	inline static bool _lg_typecheck_setReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTextureUnit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTexGen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTexGen_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexGen_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::TexGenNode::TexGenNode()
	static osg::TexGenNode* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode() function, expected prototype:\nosg::TexGenNode::TexGenNode()\nClass arguments details:\n");
		}


		return new osg::TexGenNode();
	}

	// osg::TexGenNode::TexGenNode(osg::TexGen * texgen)
	static osg::TexGenNode* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(osg::TexGen * texgen) function, expected prototype:\nosg::TexGenNode::TexGenNode(osg::TexGen * texgen)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::TexGen* texgen=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,1));

		return new osg::TexGenNode(texgen);
	}

	// osg::TexGenNode::TexGenNode(const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexGenNode* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexGenNode::TexGenNode(const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TexGenNode* tgb_ptr=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if( !tgb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tgb in osg::TexGenNode::TexGenNode function");
		}
		const osg::TexGenNode & tgb=*tgb_ptr;
		const osg::CopyOp* copyop_ptr=luatop>1 ? (Luna< osg::CopyOp >::check(L,2)) : NULL;
		if( luatop>1 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexGenNode::TexGenNode function");
		}
		const osg::CopyOp & copyop=luatop>1 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new osg::TexGenNode(tgb, copyop);
	}

	// osg::TexGenNode::TexGenNode(lua_Table * data)
	static osg::TexGenNode* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(lua_Table * data) function, expected prototype:\nosg::TexGenNode::TexGenNode(lua_Table * data)\nClass arguments details:\n");
		}


		return new wrapper_osg_TexGenNode(L,NULL);
	}

	// osg::TexGenNode::TexGenNode(lua_Table * data, osg::TexGen * texgen)
	static osg::TexGenNode* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(lua_Table * data, osg::TexGen * texgen) function, expected prototype:\nosg::TexGenNode::TexGenNode(lua_Table * data, osg::TexGen * texgen)\nClass arguments details:\narg 2 ID = 50169651\n");
		}

		osg::TexGen* texgen=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,2));

		return new wrapper_osg_TexGenNode(L,NULL, texgen);
	}

	// osg::TexGenNode::TexGenNode(lua_Table * data, const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)
	static osg::TexGenNode* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::TexGenNode(lua_Table * data, const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) function, expected prototype:\nosg::TexGenNode::TexGenNode(lua_Table * data, const osg::TexGenNode & tgb, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 27134364\n");
		}

		int luatop = lua_gettop(L);

		const osg::TexGenNode* tgb_ptr=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,2));
		if( !tgb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tgb in osg::TexGenNode::TexGenNode function");
		}
		const osg::TexGenNode & tgb=*tgb_ptr;
		const osg::CopyOp* copyop_ptr=luatop>2 ? (Luna< osg::CopyOp >::check(L,3)) : NULL;
		if( luatop>2 && !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexGenNode::TexGenNode function");
		}
		const osg::CopyOp & copyop=luatop>2 ? *copyop_ptr : osg::CopyOp::SHALLOW_COPY;

		return new wrapper_osg_TexGenNode(L,NULL, tgb, copyop);
	}

	// Overload binder for osg::TexGenNode::TexGenNode
	static osg::TexGenNode* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function TexGenNode, cannot match any of the overloads for function TexGenNode:\n  TexGenNode()\n  TexGenNode(osg::TexGen *)\n  TexGenNode(const osg::TexGenNode &, const osg::CopyOp &)\n  TexGenNode(lua_Table *)\n  TexGenNode(lua_Table *, osg::TexGen *)\n  TexGenNode(lua_Table *, const osg::TexGenNode &, const osg::CopyOp &)\n");
		return NULL;
	}


	// Function binds:
	// osg::Object * osg::TexGenNode::cloneType() const
	static int _bind_cloneType(lua_State *L) {
		if (!_lg_typecheck_cloneType(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexGenNode::cloneType() const function, expected prototype:\nosg::Object * osg::TexGenNode::cloneType() const\nClass arguments details:\n");
		}


		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexGenNode::cloneType() const");
		}
		osg::Object * lret = self->cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::TexGenNode::clone(const osg::CopyOp & copyop) const
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::Object * osg::TexGenNode::clone(const osg::CopyOp & copyop) const function, expected prototype:\nosg::Object * osg::TexGenNode::clone(const osg::CopyOp & copyop) const\nClass arguments details:\narg 1 ID = 27134364\n");
		}

		const osg::CopyOp* copyop_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !copyop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copyop in osg::TexGenNode::clone function");
		}
		const osg::CopyOp & copyop=*copyop_ptr;

		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::Object * osg::TexGenNode::clone(const osg::CopyOp &) const");
		}
		osg::Object * lret = self->clone(copyop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::TexGenNode::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::TexGenNode::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::TexGenNode::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::TexGenNode::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::TexGenNode::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexGenNode::className() const function, expected prototype:\nconst char * osg::TexGenNode::className() const\nClass arguments details:\n");
		}


		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexGenNode::className() const");
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::TexGenNode::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const char * osg::TexGenNode::libraryName() const function, expected prototype:\nconst char * osg::TexGenNode::libraryName() const\nClass arguments details:\n");
		}


		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const char * osg::TexGenNode::libraryName() const");
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osg::TexGenNode::accept(osg::NodeVisitor & nv)
	static int _bind_accept(lua_State *L) {
		if (!_lg_typecheck_accept(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::accept(osg::NodeVisitor & nv) function, expected prototype:\nvoid osg::TexGenNode::accept(osg::NodeVisitor & nv)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::NodeVisitor* nv_ptr=dynamic_cast< osg::NodeVisitor* >(Luna< osg::Referenced >::check(L,2));
		if( !nv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nv in osg::TexGenNode::accept function");
		}
		osg::NodeVisitor & nv=*nv_ptr;

		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::accept(osg::NodeVisitor &)");
		}
		self->accept(nv);

		return 0;
	}

	// void osg::TexGenNode::setReferenceFrame(osg::TexGenNode::ReferenceFrame rf)
	static int _bind_setReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::setReferenceFrame(osg::TexGenNode::ReferenceFrame rf) function, expected prototype:\nvoid osg::TexGenNode::setReferenceFrame(osg::TexGenNode::ReferenceFrame rf)\nClass arguments details:\n");
		}

		osg::TexGenNode::ReferenceFrame rf=(osg::TexGenNode::ReferenceFrame)lua_tointeger(L,2);

		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::setReferenceFrame(osg::TexGenNode::ReferenceFrame)");
		}
		self->setReferenceFrame(rf);

		return 0;
	}

	// osg::TexGenNode::ReferenceFrame osg::TexGenNode::getReferenceFrame() const
	static int _bind_getReferenceFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceFrame(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGenNode::ReferenceFrame osg::TexGenNode::getReferenceFrame() const function, expected prototype:\nosg::TexGenNode::ReferenceFrame osg::TexGenNode::getReferenceFrame() const\nClass arguments details:\n");
		}


		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::TexGenNode::ReferenceFrame osg::TexGenNode::getReferenceFrame() const");
		}
		osg::TexGenNode::ReferenceFrame lret = self->getReferenceFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexGenNode::setTextureUnit(unsigned int textureUnit)
	static int _bind_setTextureUnit(lua_State *L) {
		if (!_lg_typecheck_setTextureUnit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::setTextureUnit(unsigned int textureUnit) function, expected prototype:\nvoid osg::TexGenNode::setTextureUnit(unsigned int textureUnit)\nClass arguments details:\n");
		}

		unsigned int textureUnit=(unsigned int)lua_tointeger(L,2);

		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::setTextureUnit(unsigned int)");
		}
		self->setTextureUnit(textureUnit);

		return 0;
	}

	// unsigned int osg::TexGenNode::getTextureUnit() const
	static int _bind_getTextureUnit(lua_State *L) {
		if (!_lg_typecheck_getTextureUnit(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::TexGenNode::getTextureUnit() const function, expected prototype:\nunsigned int osg::TexGenNode::getTextureUnit() const\nClass arguments details:\n");
		}


		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::TexGenNode::getTextureUnit() const");
		}
		unsigned int lret = self->getTextureUnit();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::TexGenNode::setTexGen(osg::TexGen * texgen)
	static int _bind_setTexGen(lua_State *L) {
		if (!_lg_typecheck_setTexGen(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::TexGenNode::setTexGen(osg::TexGen * texgen) function, expected prototype:\nvoid osg::TexGenNode::setTexGen(osg::TexGen * texgen)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::TexGen* texgen=dynamic_cast< osg::TexGen* >(Luna< osg::Referenced >::check(L,2));

		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::TexGenNode::setTexGen(osg::TexGen *)");
		}
		self->setTexGen(texgen);

		return 0;
	}

	// osg::TexGen * osg::TexGenNode::getTexGen()
	static int _bind_getTexGen_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTexGen_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in osg::TexGen * osg::TexGenNode::getTexGen() function, expected prototype:\nosg::TexGen * osg::TexGenNode::getTexGen()\nClass arguments details:\n");
		}


		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call osg::TexGen * osg::TexGenNode::getTexGen()");
		}
		osg::TexGen * lret = self->getTexGen();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TexGen >::push(L,lret,false);

		return 1;
	}

	// const osg::TexGen * osg::TexGenNode::getTexGen() const
	static int _bind_getTexGen_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTexGen_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in const osg::TexGen * osg::TexGenNode::getTexGen() const function, expected prototype:\nconst osg::TexGen * osg::TexGenNode::getTexGen() const\nClass arguments details:\n");
		}


		osg::TexGenNode* self=dynamic_cast< osg::TexGenNode* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call const osg::TexGen * osg::TexGenNode::getTexGen() const");
		}
		const osg::TexGen * lret = self->getTexGen();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::TexGen >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::TexGenNode::getTexGen
	static int _bind_getTexGen(lua_State *L) {
		if (_lg_typecheck_getTexGen_overload_1(L)) return _bind_getTexGen_overload_1(L);
		if (_lg_typecheck_getTexGen_overload_2(L)) return _bind_getTexGen_overload_2(L);

		luaL_error(L, "error in function getTexGen, cannot match any of the overloads for function getTexGen:\n  getTexGen()\n  getTexGen()\n");
		return 0;
	}


	// Operator binds:

};

osg::TexGenNode* LunaTraits< osg::TexGenNode >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_TexGenNode::_bind_ctor(L);
}

void LunaTraits< osg::TexGenNode >::_bind_dtor(osg::TexGenNode* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::TexGenNode >::className[] = "TexGenNode";
const char LunaTraits< osg::TexGenNode >::fullName[] = "osg::TexGenNode";
const char LunaTraits< osg::TexGenNode >::moduleName[] = "osg";
const char* LunaTraits< osg::TexGenNode >::parents[] = {"osg.Group", 0};
const int LunaTraits< osg::TexGenNode >::hash = 26149945;
const int LunaTraits< osg::TexGenNode >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::TexGenNode >::methods[] = {
	{"cloneType", &luna_wrapper_osg_TexGenNode::_bind_cloneType},
	{"clone", &luna_wrapper_osg_TexGenNode::_bind_clone},
	{"isSameKindAs", &luna_wrapper_osg_TexGenNode::_bind_isSameKindAs},
	{"className", &luna_wrapper_osg_TexGenNode::_bind_className},
	{"libraryName", &luna_wrapper_osg_TexGenNode::_bind_libraryName},
	{"accept", &luna_wrapper_osg_TexGenNode::_bind_accept},
	{"setReferenceFrame", &luna_wrapper_osg_TexGenNode::_bind_setReferenceFrame},
	{"getReferenceFrame", &luna_wrapper_osg_TexGenNode::_bind_getReferenceFrame},
	{"setTextureUnit", &luna_wrapper_osg_TexGenNode::_bind_setTextureUnit},
	{"getTextureUnit", &luna_wrapper_osg_TexGenNode::_bind_getTextureUnit},
	{"setTexGen", &luna_wrapper_osg_TexGenNode::_bind_setTexGen},
	{"getTexGen", &luna_wrapper_osg_TexGenNode::_bind_getTexGen},
	{"__eq", &luna_wrapper_osg_TexGenNode::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::TexGenNode >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_TexGenNode::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TexGenNode >::enumValues[] = {
	{"RELATIVE_RF", osg::TexGenNode::RELATIVE_RF},
	{"ABSOLUTE_RF", osg::TexGenNode::ABSOLUTE_RF},
	{0,0}
};


