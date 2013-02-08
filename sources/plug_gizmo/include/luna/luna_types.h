#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <GizmoDrawable.h>
#include <IGizmo.h>

// Class: osg::Drawable::EventCallback
template<>
class LunaTraits< osg::Drawable::EventCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable::EventCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable::EventCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable::EventCallback base_t;
	static luna_ConverterType converters[];
};

// Class: gizmo::GizmoDrawable::GizmoEventCallback
template<>
class LunaTraits< gizmo::GizmoDrawable::GizmoEventCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static gizmo::GizmoDrawable::GizmoEventCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(gizmo::GizmoDrawable::GizmoEventCallback* obj);
	typedef osg::Referenced parent_t;
	typedef gizmo::GizmoDrawable::GizmoEventCallback base_t;
	static luna_ConverterType converters[];
};

// Class: IGizmo
template<>
class LunaTraits< IGizmo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static IGizmo* _bind_ctor(lua_State *L);
	static void _bind_dtor(IGizmo* obj);
	typedef IGizmo parent_t;
	typedef IGizmo base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Drawable
template<>
class LunaTraits< osg::Drawable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable base_t;
	static luna_ConverterType converters[];
};

// Class: gizmo::GizmoDrawable
template<>
class LunaTraits< gizmo::GizmoDrawable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static gizmo::GizmoDrawable* _bind_ctor(lua_State *L);
	static void _bind_dtor(gizmo::GizmoDrawable* obj);
	typedef osg::Referenced parent_t;
	typedef gizmo::GizmoDrawable base_t;
	static luna_ConverterType converters[];
};



// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::NodeVisitor
template<>
class LunaTraits< osg::NodeVisitor > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::NodeVisitor* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::NodeVisitor* obj);
	typedef osg::Referenced parent_t;
	typedef osg::NodeVisitor base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Object
template<>
class LunaTraits< osg::Object > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Object* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Object* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Object base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::CopyOp
template<>
class LunaTraits< osg::CopyOp > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::CopyOp* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::CopyOp* obj);
	typedef osg::CopyOp parent_t;
	typedef osg::CopyOp base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::RenderInfo
template<>
class LunaTraits< osg::RenderInfo > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::RenderInfo* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::RenderInfo* obj);
	typedef osg::RenderInfo parent_t;
	typedef osg::RenderInfo base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::MatrixTransform
template<>
class LunaTraits< osg::MatrixTransform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::MatrixTransform* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::MatrixTransform* obj);
	typedef osg::Referenced parent_t;
	typedef osg::MatrixTransform base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 62866000 > {
public:
	typedef osg::Drawable::EventCallback type;
	
};

template<>
class LunaType< 58746675 > {
public:
	typedef IGizmo type;
	
};

template<>
class LunaType< 20484188 > {
public:
	typedef osg::Drawable type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 49057446 > {
public:
	typedef osg::NodeVisitor type;
	
};

template<>
class LunaType< 58481028 > {
public:
	typedef osg::Object type;
	
};

template<>
class LunaType< 27134364 > {
public:
	typedef osg::CopyOp type;
	
};

template<>
class LunaType< 2286263 > {
public:
	typedef osg::RenderInfo type;
	
};

template<>
class LunaType< 11455287 > {
public:
	typedef osg::MatrixTransform type;
	
};


#endif

