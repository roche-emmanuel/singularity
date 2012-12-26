#ifndef _WRAPPERS_WRAPPER_OSG_GEOMETRY_H_
#define _WRAPPERS_WRAPPER_OSG_GEOMETRY_H_

#include <plug_common.h>

#include "sgtCommon.h"
#include "lua/LuaObject.h"

#include <osg/Geometry>

class wrapper_osg_Geometry : public osg::Geometry, public luna_wrapper_base {

public:
		

	~wrapper_osg_Geometry() {
		if(_obj.pushFunction("delete")) {
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Geometry(lua_State* L, lua_Table* dum) : osg::Geometry(), luna_wrapper_base(L) { register_protected_methods(L); };
	wrapper_osg_Geometry(lua_State* L, lua_Table* dum, const osg::Geometry & geometry, const osg::CopyOp & copyop = osg::CopyOp::SHALLOW_COPY) : osg::Geometry(geometry, copyop), luna_wrapper_base(L) { register_protected_methods(L); };

	// Public virtual methods:
	// void osg::Object::setName(const std::string & name)
	void setName(const std::string & name) {
		if(_obj.pushFunction("setName")) {
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return Geometry::setName(name);
	};

	// void osg::Object::setUserData(osg::Referenced * obj)
	void setUserData(osg::Referenced * obj) {
		if(_obj.pushFunction("setUserData")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<void>());
		}

		return Geometry::setUserData(obj);
	};

	// osg::Referenced * osg::Object::getUserData()
	osg::Referenced * getUserData() {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Geometry::getUserData();
	};

	// const osg::Referenced * osg::Object::getUserData() const
	const osg::Referenced * getUserData() const {
		if(_obj.pushFunction("getUserData")) {
			return (_obj.callFunction<osg::Referenced*>());
		}

		return Geometry::getUserData();
	};

	// void osg::Drawable::computeDataVariance()
	void computeDataVariance() {
		if(_obj.pushFunction("computeDataVariance")) {
			return (_obj.callFunction<void>());
		}

		return Geometry::computeDataVariance();
	};

	// osg::BoundingBoxd osg::Drawable::computeBound() const
	osg::BoundingBoxd computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			return *(_obj.callFunction<osg::BoundingBoxd*>());
		}

		return Geometry::computeBound();
	};

	// void osg::Drawable::setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	void setUpdateCallback(osg::Drawable::UpdateCallback * ac) {
		if(_obj.pushFunction("setUpdateCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Geometry::setUpdateCallback(ac);
	};

	// void osg::Drawable::setEventCallback(osg::Drawable::EventCallback * ac)
	void setEventCallback(osg::Drawable::EventCallback * ac) {
		if(_obj.pushFunction("setEventCallback")) {
			_obj.pushArg(ac);
			return (_obj.callFunction<void>());
		}

		return Geometry::setEventCallback(ac);
	};

	// void osg::Drawable::setCullCallback(osg::Drawable::CullCallback * cc)
	void setCullCallback(osg::Drawable::CullCallback * cc) {
		if(_obj.pushFunction("setCullCallback")) {
			_obj.pushArg(cc);
			return (_obj.callFunction<void>());
		}

		return Geometry::setCullCallback(cc);
	};

	// void osg::Drawable::setDrawCallback(osg::Drawable::DrawCallback * dc)
	void setDrawCallback(osg::Drawable::DrawCallback * dc) {
		if(_obj.pushFunction("setDrawCallback")) {
			_obj.pushArg(dc);
			return (_obj.callFunction<void>());
		}

		return Geometry::setDrawCallback(dc);
	};

	// osg::Object * osg::Geometry::cloneType() const
	osg::Object * cloneType() const {
		if(_obj.pushFunction("cloneType")) {
			return (_obj.callFunction<osg::Object*>());
		}

		return Geometry::cloneType();
	};

	// osg::Object * osg::Geometry::clone(const osg::CopyOp & arg1) const
	osg::Object * clone(const osg::CopyOp & arg1) const {
		if(_obj.pushFunction("clone")) {
			_obj.pushArg(&arg1);
			return (_obj.callFunction<osg::Object*>());
		}

		return Geometry::clone(arg1);
	};

	// bool osg::Geometry::isSameKindAs(const osg::Object * obj) const
	bool isSameKindAs(const osg::Object * obj) const {
		if(_obj.pushFunction("isSameKindAs")) {
			_obj.pushArg(obj);
			return (_obj.callFunction<bool>());
		}

		return Geometry::isSameKindAs(obj);
	};

	// const char * osg::Geometry::libraryName() const
	const char * libraryName() const {
		if(_obj.pushFunction("libraryName")) {
			return (_obj.callFunction<const char*>());
		}

		return Geometry::libraryName();
	};

	// const char * osg::Geometry::className() const
	const char * className() const {
		if(_obj.pushFunction("className")) {
			return (_obj.callFunction<const char*>());
		}

		return Geometry::className();
	};

	// osg::Geometry * osg::Geometry::asGeometry()
	osg::Geometry * asGeometry() {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Geometry::asGeometry();
	};

	// const osg::Geometry * osg::Geometry::asGeometry() const
	const osg::Geometry * asGeometry() const {
		if(_obj.pushFunction("asGeometry")) {
			return (_obj.callFunction<osg::Geometry*>());
		}

		return Geometry::asGeometry();
	};

	// void osg::Geometry::setUseVertexBufferObjects(bool flag)
	void setUseVertexBufferObjects(bool flag) {
		if(_obj.pushFunction("setUseVertexBufferObjects")) {
			_obj.pushArg(flag);
			return (_obj.callFunction<void>());
		}

		return Geometry::setUseVertexBufferObjects(flag);
	};

	// void osg::Geometry::dirtyDisplayList()
	void dirtyDisplayList() {
		if(_obj.pushFunction("dirtyDisplayList")) {
			return (_obj.callFunction<void>());
		}

		return Geometry::dirtyDisplayList();
	};

	// void osg::Geometry::releaseGLObjects(osg::State * state = 0) const
	void releaseGLObjects(osg::State * state = 0) const {
		if(_obj.pushFunction("releaseGLObjects")) {
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return Geometry::releaseGLObjects(state);
	};

	// unsigned int osg::Geometry::getGLObjectSizeHint() const
	unsigned int getGLObjectSizeHint() const {
		if(_obj.pushFunction("getGLObjectSizeHint")) {
			return (_obj.callFunction<unsigned int>());
		}

		return Geometry::getGLObjectSizeHint();
	};

	// void osg::Geometry::compileGLObjects(osg::RenderInfo & renderInfo) const
	void compileGLObjects(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("compileGLObjects")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Geometry::compileGLObjects(renderInfo);
	};

	// void osg::Geometry::drawImplementation(osg::RenderInfo & renderInfo) const
	void drawImplementation(osg::RenderInfo & renderInfo) const {
		if(_obj.pushFunction("drawImplementation")) {
			_obj.pushArg(&renderInfo);
			return (_obj.callFunction<void>());
		}

		return Geometry::drawImplementation(renderInfo);
	};



	// Protected virtual methods:

	// Protected non-virtual methods:
	// bool osg::Geometry::verifyBindings(const osg::Geometry::ArrayData & arrayData) const
	bool public_verifyBindings(const osg::Geometry::ArrayData & arrayData) const {
		return osg::Geometry::verifyBindings(arrayData);
	};

	// bool osg::Geometry::verifyBindings(const osg::Geometry::Vec3ArrayData & arrayData) const
	bool public_verifyBindings(const osg::Geometry::Vec3ArrayData & arrayData) const {
		return osg::Geometry::verifyBindings(arrayData);
	};

	// void osg::Geometry::computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName)
	void public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName) {
		return osg::Geometry::computeCorrectBindingsAndArraySizes(arrayData, arrayName);
	};

	// void osg::Geometry::computeCorrectBindingsAndArraySizes(osg::Geometry::Vec3ArrayData & arrayData, const char * arrayName)
	void public_computeCorrectBindingsAndArraySizes(osg::Geometry::Vec3ArrayData & arrayData, const char * arrayName) {
		return osg::Geometry::computeCorrectBindingsAndArraySizes(arrayData, arrayName);
	};

	// void osg::Geometry::addVertexBufferObjectIfRequired(osg::Array * array)
	void public_addVertexBufferObjectIfRequired(osg::Array * array) {
		return osg::Geometry::addVertexBufferObjectIfRequired(array);
	};

	// void osg::Geometry::addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet)
	void public_addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet) {
		return osg::Geometry::addElementBufferObjectIfRequired(primitiveSet);
	};

	// void osg::Drawable::setBound(const osg::BoundingBoxd & bb) const
	void public_setBound(const osg::BoundingBoxd & bb) const {
		return osg::Drawable::setBound(bb);
	};

	// void osg::Drawable::addParent(osg::Node * node)
	void public_addParent(osg::Node * node) {
		return osg::Drawable::addParent(node);
	};

	// void osg::Drawable::removeParent(osg::Node * node)
	void public_removeParent(osg::Node * node) {
		return osg::Drawable::removeParent(node);
	};

	// void osg::Drawable::setNumChildrenRequiringUpdateTraversal(unsigned int num)
	void public_setNumChildrenRequiringUpdateTraversal(unsigned int num) {
		return osg::Drawable::setNumChildrenRequiringUpdateTraversal(num);
	};

	// unsigned int osg::Drawable::getNumChildrenRequiringUpdateTraversal() const
	unsigned int public_getNumChildrenRequiringUpdateTraversal() const {
		return osg::Drawable::getNumChildrenRequiringUpdateTraversal();
	};

	// void osg::Drawable::setNumChildrenRequiringEventTraversal(unsigned int num)
	void public_setNumChildrenRequiringEventTraversal(unsigned int num) {
		return osg::Drawable::setNumChildrenRequiringEventTraversal(num);
	};

	// unsigned int osg::Drawable::getNumChildrenRequiringEventTraversal() const
	unsigned int public_getNumChildrenRequiringEventTraversal() const {
		return osg::Drawable::getNumChildrenRequiringEventTraversal();
	};

	// void osg::Referenced::signalObserversAndDelete(bool signalDelete, bool doDelete) const
	void public_signalObserversAndDelete(bool signalDelete, bool doDelete) const {
		return osg::Referenced::signalObserversAndDelete(signalDelete, doDelete);
	};

	// void osg::Referenced::deleteUsingDeleteHandler() const
	void public_deleteUsingDeleteHandler() const {
		return osg::Referenced::deleteUsingDeleteHandler();
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_verifyBindings_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		if( (!(Luna< osg::Geometry::ArrayData >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_verifyBindings_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80248523) ) return false;
		if( (!(Luna< osg::Geometry::Vec3ArrayData >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeCorrectBindingsAndArraySizes_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26680564) ) return false;
		if( (!(Luna< osg::Geometry::ArrayData >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_computeCorrectBindingsAndArraySizes_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80248523) ) return false;
		if( (!(Luna< osg::Geometry::Vec3ArrayData >::check(L,2))) ) return false;
		if( lua_isstring(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addVertexBufferObjectIfRequired(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addElementBufferObjectIfRequired(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setBound(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82744897) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_addParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_signalObserversAndDelete(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_deleteUsingDeleteHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Protected non-virtual function binds:
	// bool osg::Geometry::public_verifyBindings(const osg::Geometry::ArrayData & arrayData) const
	static int _bind_public_verifyBindings_overload_1(lua_State *L) {
		if (!_lg_typecheck_public_verifyBindings_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::public_verifyBindings(const osg::Geometry::ArrayData & arrayData) const function, expected prototype:\nbool osg::Geometry::public_verifyBindings(const osg::Geometry::ArrayData & arrayData) const\nClass arguments details:\narg 1 ID = 26680564\n");
		}

		const osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::public_verifyBindings function");
		}
		const osg::Geometry::ArrayData & arrayData=*arrayData_ptr;

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geometry::public_verifyBindings(const osg::Geometry::ArrayData &) const");
		}
		bool lret = self->public_verifyBindings(arrayData);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Geometry::public_verifyBindings(const osg::Geometry::Vec3ArrayData & arrayData) const
	static int _bind_public_verifyBindings_overload_2(lua_State *L) {
		if (!_lg_typecheck_public_verifyBindings_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::Geometry::public_verifyBindings(const osg::Geometry::Vec3ArrayData & arrayData) const function, expected prototype:\nbool osg::Geometry::public_verifyBindings(const osg::Geometry::Vec3ArrayData & arrayData) const\nClass arguments details:\narg 1 ID = 80248523\n");
		}

		const osg::Geometry::Vec3ArrayData* arrayData_ptr=(Luna< osg::Geometry::Vec3ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::public_verifyBindings function");
		}
		const osg::Geometry::Vec3ArrayData & arrayData=*arrayData_ptr;

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::Geometry::public_verifyBindings(const osg::Geometry::Vec3ArrayData &) const");
		}
		bool lret = self->public_verifyBindings(arrayData);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osg::Geometry::public_verifyBindings
	static int _bind_public_verifyBindings(lua_State *L) {
		if (_lg_typecheck_public_verifyBindings_overload_1(L)) return _bind_public_verifyBindings_overload_1(L);
		if (_lg_typecheck_public_verifyBindings_overload_2(L)) return _bind_public_verifyBindings_overload_2(L);

		luaL_error(L, "error in function public_verifyBindings, cannot match any of the overloads for function public_verifyBindings:\n  public_verifyBindings(const osg::Geometry::ArrayData &)\n  public_verifyBindings(const osg::Geometry::Vec3ArrayData &)\n");
		return 0;
	}

	// void osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName)
	static int _bind_public_computeCorrectBindingsAndArraySizes_overload_1(lua_State *L) {
		if (!_lg_typecheck_public_computeCorrectBindingsAndArraySizes_overload_1(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName) function, expected prototype:\nvoid osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData & arrayData, const char * arrayName)\nClass arguments details:\narg 1 ID = 26680564\n");
		}

		osg::Geometry::ArrayData* arrayData_ptr=(Luna< osg::Geometry::ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::public_computeCorrectBindingsAndArraySizes function");
		}
		osg::Geometry::ArrayData & arrayData=*arrayData_ptr;
		const char * arrayName=(const char *)lua_tostring(L,3);

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData &, const char *)");
		}
		self->public_computeCorrectBindingsAndArraySizes(arrayData, arrayName);

		return 0;
	}

	// void osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::Vec3ArrayData & arrayData, const char * arrayName)
	static int _bind_public_computeCorrectBindingsAndArraySizes_overload_2(lua_State *L) {
		if (!_lg_typecheck_public_computeCorrectBindingsAndArraySizes_overload_2(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::Vec3ArrayData & arrayData, const char * arrayName) function, expected prototype:\nvoid osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::Vec3ArrayData & arrayData, const char * arrayName)\nClass arguments details:\narg 1 ID = 80248523\n");
		}

		osg::Geometry::Vec3ArrayData* arrayData_ptr=(Luna< osg::Geometry::Vec3ArrayData >::check(L,2));
		if( !arrayData_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg arrayData in osg::Geometry::public_computeCorrectBindingsAndArraySizes function");
		}
		osg::Geometry::Vec3ArrayData & arrayData=*arrayData_ptr;
		const char * arrayName=(const char *)lua_tostring(L,3);

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Geometry::public_computeCorrectBindingsAndArraySizes(osg::Geometry::Vec3ArrayData &, const char *)");
		}
		self->public_computeCorrectBindingsAndArraySizes(arrayData, arrayName);

		return 0;
	}

	// Overload binder for osg::Geometry::public_computeCorrectBindingsAndArraySizes
	static int _bind_public_computeCorrectBindingsAndArraySizes(lua_State *L) {
		if (_lg_typecheck_public_computeCorrectBindingsAndArraySizes_overload_1(L)) return _bind_public_computeCorrectBindingsAndArraySizes_overload_1(L);
		if (_lg_typecheck_public_computeCorrectBindingsAndArraySizes_overload_2(L)) return _bind_public_computeCorrectBindingsAndArraySizes_overload_2(L);

		luaL_error(L, "error in function public_computeCorrectBindingsAndArraySizes, cannot match any of the overloads for function public_computeCorrectBindingsAndArraySizes:\n  public_computeCorrectBindingsAndArraySizes(osg::Geometry::ArrayData &, const char *)\n  public_computeCorrectBindingsAndArraySizes(osg::Geometry::Vec3ArrayData &, const char *)\n");
		return 0;
	}

	// void osg::Geometry::public_addVertexBufferObjectIfRequired(osg::Array * array)
	static int _bind_public_addVertexBufferObjectIfRequired(lua_State *L) {
		if (!_lg_typecheck_public_addVertexBufferObjectIfRequired(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Geometry::public_addVertexBufferObjectIfRequired(osg::Array * array) function, expected prototype:\nvoid osg::Geometry::public_addVertexBufferObjectIfRequired(osg::Array * array)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Array* array=(Luna< osg::Referenced >::checkSubType< osg::Array >(L,2));

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Geometry::public_addVertexBufferObjectIfRequired(osg::Array *)");
		}
		self->public_addVertexBufferObjectIfRequired(array);

		return 0;
	}

	// void osg::Geometry::public_addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet)
	static int _bind_public_addElementBufferObjectIfRequired(lua_State *L) {
		if (!_lg_typecheck_public_addElementBufferObjectIfRequired(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Geometry::public_addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet) function, expected prototype:\nvoid osg::Geometry::public_addElementBufferObjectIfRequired(osg::PrimitiveSet * primitiveSet)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::PrimitiveSet* primitiveSet=(Luna< osg::Referenced >::checkSubType< osg::PrimitiveSet >(L,2));

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Geometry::public_addElementBufferObjectIfRequired(osg::PrimitiveSet *)");
		}
		self->public_addElementBufferObjectIfRequired(primitiveSet);

		return 0;
	}

	// void osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const
	static int _bind_public_setBound(lua_State *L) {
		if (!_lg_typecheck_public_setBound(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const function, expected prototype:\nvoid osg::Drawable::public_setBound(const osg::BoundingBoxd & bb) const\nClass arguments details:\narg 1 ID = 82744897\n");
		}

		const osg::BoundingBoxd* bb_ptr=(Luna< osg::BoundingBoxd >::check(L,2));
		if( !bb_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bb in osg::Drawable::public_setBound function");
		}
		const osg::BoundingBoxd & bb=*bb_ptr;

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setBound(const osg::BoundingBoxd &) const");
		}
		self->public_setBound(bb);

		return 0;
	}

	// void osg::Drawable::public_addParent(osg::Node * node)
	static int _bind_public_addParent(lua_State *L) {
		if (!_lg_typecheck_public_addParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_addParent(osg::Node * node) function, expected prototype:\nvoid osg::Drawable::public_addParent(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_addParent(osg::Node *)");
		}
		self->public_addParent(node);

		return 0;
	}

	// void osg::Drawable::public_removeParent(osg::Node * node)
	static int _bind_public_removeParent(lua_State *L) {
		if (!_lg_typecheck_public_removeParent(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_removeParent(osg::Node * node) function, expected prototype:\nvoid osg::Drawable::public_removeParent(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_removeParent(osg::Node *)");
		}
		self->public_removeParent(node);

		return 0;
	}

	// void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringUpdateTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num) function, expected prototype:\nvoid osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setNumChildrenRequiringUpdateTraversal(unsigned int)");
		}
		self->public_setNumChildrenRequiringUpdateTraversal(num);

		return 0;
	}

	// unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const
	static int _bind_public_getNumChildrenRequiringUpdateTraversal(lua_State *L) {
		if (!_lg_typecheck_public_getNumChildrenRequiringUpdateTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const function, expected prototype:\nunsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const\nClass arguments details:\n");
		}


		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::public_getNumChildrenRequiringUpdateTraversal() const");
		}
		unsigned int lret = self->public_getNumChildrenRequiringUpdateTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num)
	static int _bind_public_setNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_setNumChildrenRequiringEventTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num) function, expected prototype:\nvoid osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int num)\nClass arguments details:\n");
		}

		unsigned int num=(unsigned int)lua_tointeger(L,2);

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Drawable::public_setNumChildrenRequiringEventTraversal(unsigned int)");
		}
		self->public_setNumChildrenRequiringEventTraversal(num);

		return 0;
	}

	// unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const
	static int _bind_public_getNumChildrenRequiringEventTraversal(lua_State *L) {
		if (!_lg_typecheck_public_getNumChildrenRequiringEventTraversal(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const function, expected prototype:\nunsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const\nClass arguments details:\n");
		}


		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::Drawable::public_getNumChildrenRequiringEventTraversal() const");
		}
		unsigned int lret = self->public_getNumChildrenRequiringEventTraversal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const
	static int _bind_public_signalObserversAndDelete(lua_State *L) {
		if (!_lg_typecheck_public_signalObserversAndDelete(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const function, expected prototype:\nvoid osg::Referenced::public_signalObserversAndDelete(bool signalDelete, bool doDelete) const\nClass arguments details:\n");
		}

		bool signalDelete=(bool)(lua_toboolean(L,2)==1);
		bool doDelete=(bool)(lua_toboolean(L,3)==1);

		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_signalObserversAndDelete(bool, bool) const");
		}
		self->public_signalObserversAndDelete(signalDelete, doDelete);

		return 0;
	}

	// void osg::Referenced::public_deleteUsingDeleteHandler() const
	static int _bind_public_deleteUsingDeleteHandler(lua_State *L) {
		if (!_lg_typecheck_public_deleteUsingDeleteHandler(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in void osg::Referenced::public_deleteUsingDeleteHandler() const function, expected prototype:\nvoid osg::Referenced::public_deleteUsingDeleteHandler() const\nClass arguments details:\n");
		}


		wrapper_osg_Geometry* self=Luna< osg::Referenced >::checkSubType< wrapper_osg_Geometry >(L,1);
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call void osg::Referenced::public_deleteUsingDeleteHandler() const");
		}
		self->public_deleteUsingDeleteHandler();

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"protected_verifyBindings",_bind_public_verifyBindings},
		{"protected_verifyBindings",_bind_public_verifyBindings},
		{"protected_computeCorrectBindingsAndArraySizes",_bind_public_computeCorrectBindingsAndArraySizes},
		{"protected_computeCorrectBindingsAndArraySizes",_bind_public_computeCorrectBindingsAndArraySizes},
		{"protected_addVertexBufferObjectIfRequired",_bind_public_addVertexBufferObjectIfRequired},
		{"protected_addElementBufferObjectIfRequired",_bind_public_addElementBufferObjectIfRequired},
		{"protected_setBound",_bind_public_setBound},
		{"protected_addParent",_bind_public_addParent},
		{"protected_removeParent",_bind_public_removeParent},
		{"protected_setNumChildrenRequiringUpdateTraversal",_bind_public_setNumChildrenRequiringUpdateTraversal},
		{"protected_getNumChildrenRequiringUpdateTraversal",_bind_public_getNumChildrenRequiringUpdateTraversal},
		{"protected_setNumChildrenRequiringEventTraversal",_bind_public_setNumChildrenRequiringEventTraversal},
		{"protected_getNumChildrenRequiringEventTraversal",_bind_public_getNumChildrenRequiringEventTraversal},
		{"protected_signalObserversAndDelete",_bind_public_signalObserversAndDelete},
		{"protected_deleteUsingDeleteHandler",_bind_public_deleteUsingDeleteHandler},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

