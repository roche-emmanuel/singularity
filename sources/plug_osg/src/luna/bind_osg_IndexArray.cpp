#include <plug_common.h>

class luna_wrapper_osg_IndexArray {
public:
	typedef Luna< osg::IndexArray > luna_t;

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
		osg::IndexArray* ptr= dynamic_cast< osg::IndexArray* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::IndexArray >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:
	inline static bool _lg_typecheck_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:
	// bool osg::IndexArray::isSameKindAs(const osg::Object * obj) const
	static int _bind_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_isSameKindAs(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in bool osg::IndexArray::isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::IndexArray::isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n");
		}

		const osg::Object* obj=dynamic_cast< osg::Object* >(Luna< osg::Referenced >::check(L,2));

		osg::IndexArray* self=dynamic_cast< osg::IndexArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call bool osg::IndexArray::isSameKindAs(const osg::Object *) const");
		}
		bool lret = self->isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osg::IndexArray::index(unsigned int pos) const
	static int _bind_index(lua_State *L) {
		if (!_lg_typecheck_index(L)) {
			luna_printStack(L);
			luaL_error(L, "luna typecheck failed in unsigned int osg::IndexArray::index(unsigned int pos) const function, expected prototype:\nunsigned int osg::IndexArray::index(unsigned int pos) const\nClass arguments details:\n");
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		osg::IndexArray* self=dynamic_cast< osg::IndexArray* >(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luna_printStack(L);
			luaL_error(L, "Invalid object in function call unsigned int osg::IndexArray::index(unsigned int) const");
		}
		unsigned int lret = self->index(pos);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::IndexArray* LunaTraits< osg::IndexArray >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// unsigned int osg::IndexArray::index(unsigned int pos) const
	// void osg::Array::accept(osg::ArrayVisitor & )
	// void osg::Array::accept(osg::ConstArrayVisitor & ) const
	// void osg::Array::accept(unsigned int index, osg::ValueVisitor & )
	// void osg::Array::accept(unsigned int index, osg::ConstValueVisitor & ) const
	// int osg::Array::compare(unsigned int lhs, unsigned int rhs) const
	// const void * osg::Array::getDataPointer() const
	// unsigned int osg::Array::getTotalDataSize() const
	// unsigned int osg::Array::getNumElements() const
	// const void * osg::BufferData::getDataPointer() const
	// unsigned int osg::BufferData::getTotalDataSize() const
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & ) const

	// Abstract operators:
}

void LunaTraits< osg::IndexArray >::_bind_dtor(osg::IndexArray* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::IndexArray >::className[] = "IndexArray";
const char LunaTraits< osg::IndexArray >::fullName[] = "osg::IndexArray";
const char LunaTraits< osg::IndexArray >::moduleName[] = "osg";
const char* LunaTraits< osg::IndexArray >::parents[] = {"osg.Array", 0};
const int LunaTraits< osg::IndexArray >::hash = 8373938;
const int LunaTraits< osg::IndexArray >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::IndexArray >::methods[] = {
	{"isSameKindAs", &luna_wrapper_osg_IndexArray::_bind_isSameKindAs},
	{"index", &luna_wrapper_osg_IndexArray::_bind_index},
	{"__eq", &luna_wrapper_osg_IndexArray::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::IndexArray >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_IndexArray::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::IndexArray >::enumValues[] = {
	{0,0}
};


