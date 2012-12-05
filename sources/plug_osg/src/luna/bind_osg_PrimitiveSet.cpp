#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_PrimitiveSet.h>

class luna_wrapper_osg_PrimitiveSet {
public:
	typedef Luna< osg::PrimitiveSet > luna_t;

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
		osg::PrimitiveSet* ptr= dynamic_cast< osg::PrimitiveSet* >(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::PrimitiveSet >::push(L,ptr,false);
		return 1;
	};


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Function binds:

	// Operator binds:

};

osg::PrimitiveSet* LunaTraits< osg::PrimitiveSet >::_bind_ctor(lua_State *L) {
	return NULL; // Class is abstract.
	// Abstract methods:
	// void osg::PrimitiveSet::draw(osg::State & state, bool useVertexBufferObjects) const
	// void osg::PrimitiveSet::accept(PrimitiveFunctor & functor) const
	// void osg::PrimitiveSet::accept(PrimitiveIndexFunctor & functor) const
	// unsigned int osg::PrimitiveSet::index(unsigned int pos) const
	// unsigned int osg::PrimitiveSet::getNumIndices() const
	// void osg::PrimitiveSet::offsetIndices(int offset)
	// osg::Object * osg::Object::cloneType() const
	// osg::Object * osg::Object::clone(const osg::CopyOp & arg1) const
}

void LunaTraits< osg::PrimitiveSet >::_bind_dtor(osg::PrimitiveSet* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::PrimitiveSet >::className[] = "PrimitiveSet";
const char LunaTraits< osg::PrimitiveSet >::fullName[] = "osg::PrimitiveSet";
const char LunaTraits< osg::PrimitiveSet >::moduleName[] = "osg";
const char* LunaTraits< osg::PrimitiveSet >::parents[] = {"osg.BufferData", 0};
const int LunaTraits< osg::PrimitiveSet >::hash = 28181379;
const int LunaTraits< osg::PrimitiveSet >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::PrimitiveSet >::methods[] = {
	{"__eq", &luna_wrapper_osg_PrimitiveSet::_bind___eq},
	{0,0}
};

luna_ConverterType LunaTraits< osg::PrimitiveSet >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_PrimitiveSet::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::PrimitiveSet >::enumValues[] = {
	{"PrimitiveType", osg::PrimitiveSet::PrimitiveType},
	{"DrawArraysPrimitiveType", osg::PrimitiveSet::DrawArraysPrimitiveType},
	{"DrawArrayLengthsPrimitiveType", osg::PrimitiveSet::DrawArrayLengthsPrimitiveType},
	{"DrawElementsUBytePrimitiveType", osg::PrimitiveSet::DrawElementsUBytePrimitiveType},
	{"DrawElementsUShortPrimitiveType", osg::PrimitiveSet::DrawElementsUShortPrimitiveType},
	{"DrawElementsUIntPrimitiveType", osg::PrimitiveSet::DrawElementsUIntPrimitiveType},
	{"POINTS", osg::PrimitiveSet::POINTS},
	{"LINES", osg::PrimitiveSet::LINES},
	{"LINE_STRIP", osg::PrimitiveSet::LINE_STRIP},
	{"LINE_LOOP", osg::PrimitiveSet::LINE_LOOP},
	{"TRIANGLES", osg::PrimitiveSet::TRIANGLES},
	{"TRIANGLE_STRIP", osg::PrimitiveSet::TRIANGLE_STRIP},
	{"TRIANGLE_FAN", osg::PrimitiveSet::TRIANGLE_FAN},
	{"QUADS", osg::PrimitiveSet::QUADS},
	{"QUAD_STRIP", osg::PrimitiveSet::QUAD_STRIP},
	{"POLYGON", osg::PrimitiveSet::POLYGON},
	{"LINES_ADJACENCY", osg::PrimitiveSet::LINES_ADJACENCY},
	{"LINE_STRIP_ADJACENCY", osg::PrimitiveSet::LINE_STRIP_ADJACENCY},
	{"TRIANGLES_ADJACENCY", osg::PrimitiveSet::TRIANGLES_ADJACENCY},
	{"TRIANGLE_STRIP_ADJACENCY", osg::PrimitiveSet::TRIANGLE_STRIP_ADJACENCY},
	{"PATCHES", osg::PrimitiveSet::PATCHES},
	{0,0}
};


