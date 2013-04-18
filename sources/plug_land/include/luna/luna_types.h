#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <math/box2.h>
#include <math/box3.h>
#include <math/mat2.h>
#include <math/mat3.h>
#include <math/mat4.h>
#include <math/quat.h>
#include <math/vec2.h>
#include <math/vec3.h>
#include <math/vec4.h>
#include <taskgraph/Task.h>
#include <math/half.h>
#include <taskgraph/Scheduler.h>
#include <taskgraph/MultithreadScheduler.h>
#include <taskgraph/TaskGraph.h>
#include <terrain/Deformation.h>
#include <terrain/TerrainNode.h>

// Class: std::set< sgtPtr< sgt::Task > >
template<>
class LunaTraits< std::set< sgtPtr< sgt::Task > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::set< sgtPtr< sgt::Task > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::set< sgtPtr< sgt::Task > >* obj);
	typedef std::set< sgtPtr< sgt::Task > > parent_t;
	typedef std::set< sgtPtr< sgt::Task > > base_t;
	static luna_ConverterType converters[];
};

// Class: std::map< sgtPtr< sgt::Task >, sgt::TaskSet >
template<>
class LunaTraits< std::map< sgtPtr< sgt::Task >, sgt::TaskSet > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::map< sgtPtr< sgt::Task >, sgt::TaskSet >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::map< sgtPtr< sgt::Task >, sgt::TaskSet >* obj);
	typedef std::map< sgtPtr< sgt::Task >, sgt::TaskSet > parent_t;
	typedef std::map< sgtPtr< sgt::Task >, sgt::TaskSet > base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::half
template<>
class LunaTraits< sgt::half > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::half* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::half* obj);
	typedef sgt::half parent_t;
	typedef sgt::half base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Object
template<>
class LunaTraits< sgt::Object > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Object* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Object* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Object base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Scheduler
template<>
class LunaTraits< sgt::Scheduler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Scheduler* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Scheduler* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Scheduler base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::MultithreadScheduler
template<>
class LunaTraits< sgt::MultithreadScheduler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::MultithreadScheduler* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::MultithreadScheduler* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::MultithreadScheduler base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Task
template<>
class LunaTraits< sgt::Task > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Task* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Task* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Task base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TaskListener
template<>
class LunaTraits< sgt::TaskListener > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TaskListener* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TaskListener* obj);
	typedef sgt::TaskListener parent_t;
	typedef sgt::TaskListener base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TaskGraph
template<>
class LunaTraits< sgt::TaskGraph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TaskGraph* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TaskGraph* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::TaskGraph base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::SetIterator< sgtPtr< sgt::Task > >
template<>
class LunaTraits< sgt::SetIterator< sgtPtr< sgt::Task > > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::SetIterator< sgtPtr< sgt::Task > >* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::SetIterator< sgtPtr< sgt::Task > >* obj);
	typedef sgt::SetIterator< sgtPtr< sgt::Task > > parent_t;
	typedef sgt::SetIterator< sgtPtr< sgt::Task > > base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::Deformation
template<>
class LunaTraits< sgt::Deformation > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::Deformation* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::Deformation* obj);
	typedef osg::Referenced parent_t;
	typedef sgt::Deformation base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::TerrainNode
template<>
class LunaTraits< sgt::TerrainNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::TerrainNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::TerrainNode* obj);
	typedef sgt::TerrainNode parent_t;
	typedef sgt::TerrainNode base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2h
template<>
class LunaTraits< sgt::vec2h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2h* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2h* obj);
	typedef sgt::vec2h parent_t;
	typedef sgt::vec2h base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2f
template<>
class LunaTraits< sgt::vec2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2f* obj);
	typedef sgt::vec2f parent_t;
	typedef sgt::vec2f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2d
template<>
class LunaTraits< sgt::vec2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2d* obj);
	typedef sgt::vec2d parent_t;
	typedef sgt::vec2d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec2i
template<>
class LunaTraits< sgt::vec2i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec2i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec2i* obj);
	typedef sgt::vec2i parent_t;
	typedef sgt::vec2i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3h
template<>
class LunaTraits< sgt::vec3h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3h* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3h* obj);
	typedef sgt::vec3h parent_t;
	typedef sgt::vec3h base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3f
template<>
class LunaTraits< sgt::vec3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3f* obj);
	typedef sgt::vec3f parent_t;
	typedef sgt::vec3f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3d
template<>
class LunaTraits< sgt::vec3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3d* obj);
	typedef sgt::vec3d parent_t;
	typedef sgt::vec3d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec3i
template<>
class LunaTraits< sgt::vec3i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec3i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec3i* obj);
	typedef sgt::vec3i parent_t;
	typedef sgt::vec3i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec4h
template<>
class LunaTraits< sgt::vec4h > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec4h* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec4h* obj);
	typedef sgt::vec4h parent_t;
	typedef sgt::vec4h base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec4f
template<>
class LunaTraits< sgt::vec4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec4f* obj);
	typedef sgt::vec4f parent_t;
	typedef sgt::vec4f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec4d
template<>
class LunaTraits< sgt::vec4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec4d* obj);
	typedef sgt::vec4d parent_t;
	typedef sgt::vec4d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::vec4i
template<>
class LunaTraits< sgt::vec4i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::vec4i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::vec4i* obj);
	typedef sgt::vec4i parent_t;
	typedef sgt::vec4i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box2f
template<>
class LunaTraits< sgt::box2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box2f* obj);
	typedef sgt::box2f parent_t;
	typedef sgt::box2f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box2d
template<>
class LunaTraits< sgt::box2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box2d* obj);
	typedef sgt::box2d parent_t;
	typedef sgt::box2d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box2i
template<>
class LunaTraits< sgt::box2i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box2i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box2i* obj);
	typedef sgt::box2i parent_t;
	typedef sgt::box2i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box3f
template<>
class LunaTraits< sgt::box3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box3f* obj);
	typedef sgt::box3f parent_t;
	typedef sgt::box3f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box3d
template<>
class LunaTraits< sgt::box3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box3d* obj);
	typedef sgt::box3d parent_t;
	typedef sgt::box3d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::box3i
template<>
class LunaTraits< sgt::box3i > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::box3i* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::box3i* obj);
	typedef sgt::box3i parent_t;
	typedef sgt::box3i base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat2f
template<>
class LunaTraits< sgt::mat2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat2f* obj);
	typedef sgt::mat2f parent_t;
	typedef sgt::mat2f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat2d
template<>
class LunaTraits< sgt::mat2d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat2d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat2d* obj);
	typedef sgt::mat2d parent_t;
	typedef sgt::mat2d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat3f
template<>
class LunaTraits< sgt::mat3f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat3f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat3f* obj);
	typedef sgt::mat3f parent_t;
	typedef sgt::mat3f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat3d
template<>
class LunaTraits< sgt::mat3d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat3d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat3d* obj);
	typedef sgt::mat3d parent_t;
	typedef sgt::mat3d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat4f
template<>
class LunaTraits< sgt::mat4f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat4f* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat4f* obj);
	typedef sgt::mat4f parent_t;
	typedef sgt::mat4f base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::mat4d
template<>
class LunaTraits< sgt::mat4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::mat4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::mat4d* obj);
	typedef sgt::mat4d parent_t;
	typedef sgt::mat4d base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::quatf
template<>
class LunaTraits< sgt::quatf > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::quatf* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::quatf* obj);
	typedef sgt::quatf parent_t;
	typedef sgt::quatf base_t;
	static luna_ConverterType converters[];
};

// Class: sgt::quatd
template<>
class LunaTraits< sgt::quatd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static sgt::quatd* _bind_ctor(lua_State *L);
	static void _bind_dtor(sgt::quatd* obj);
	typedef sgt::quatd parent_t;
	typedef sgt::quatd base_t;
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

// Referenced external: osg::Matrixd
template<>
class LunaTraits< osg::Matrixd > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Matrixd* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Matrixd* obj);
	typedef osg::Matrixd parent_t;
	typedef osg::Matrixd base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Polytope::PlaneList
template<>
class LunaTraits< osg::Polytope::PlaneList > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Polytope::PlaneList* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Polytope::PlaneList* obj);
	typedef osg::Polytope::PlaneList parent_t;
	typedef osg::Polytope::PlaneList base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Vec4d
template<>
class LunaTraits< osg::Vec4d > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec4d* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec4d* obj);
	typedef osg::Vec4d parent_t;
	typedef osg::Vec4d base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 58086945 > {
public:
	typedef sgt::box2i type;
	
};

template<>
class LunaType< 58086942 > {
public:
	typedef sgt::box2f type;
	
};

template<>
class LunaType< 58086940 > {
public:
	typedef sgt::box2d type;
	
};

template<>
class LunaType< 58086976 > {
public:
	typedef sgt::box3i type;
	
};

template<>
class LunaType< 58086973 > {
public:
	typedef sgt::box3f type;
	
};

template<>
class LunaType< 58086971 > {
public:
	typedef sgt::box3d type;
	
};

template<>
class LunaType< 67824755 > {
public:
	typedef sgt::mat2f type;
	
};

template<>
class LunaType< 67824753 > {
public:
	typedef sgt::mat2d type;
	
};

template<>
class LunaType< 67824786 > {
public:
	typedef sgt::mat3f type;
	
};

template<>
class LunaType< 67824784 > {
public:
	typedef sgt::mat3d type;
	
};

template<>
class LunaType< 67824817 > {
public:
	typedef sgt::mat4f type;
	
};

template<>
class LunaType< 67824815 > {
public:
	typedef sgt::mat4d type;
	
};

template<>
class LunaType< 72098446 > {
public:
	typedef sgt::quatf type;
	
};

template<>
class LunaType< 72098444 > {
public:
	typedef sgt::quatd type;
	
};

template<>
class LunaType< 76239273 > {
public:
	typedef sgt::vec2h type;
	
};

template<>
class LunaType< 76239271 > {
public:
	typedef sgt::vec2f type;
	
};

template<>
class LunaType< 76239269 > {
public:
	typedef sgt::vec2d type;
	
};

template<>
class LunaType< 76239274 > {
public:
	typedef sgt::vec2i type;
	
};

template<>
class LunaType< 76239304 > {
public:
	typedef sgt::vec3h type;
	
};

template<>
class LunaType< 76239302 > {
public:
	typedef sgt::vec3f type;
	
};

template<>
class LunaType< 76239300 > {
public:
	typedef sgt::vec3d type;
	
};

template<>
class LunaType< 76239305 > {
public:
	typedef sgt::vec3i type;
	
};

template<>
class LunaType< 76239335 > {
public:
	typedef sgt::vec4h type;
	
};

template<>
class LunaType< 76239333 > {
public:
	typedef sgt::vec4f type;
	
};

template<>
class LunaType< 76239331 > {
public:
	typedef sgt::vec4d type;
	
};

template<>
class LunaType< 76239336 > {
public:
	typedef sgt::vec4i type;
	
};

template<>
class LunaType< 92752339 > {
public:
	typedef sgt::TaskSet type;
	
};

template<>
class LunaType< 30363468 > {
public:
	typedef sgt::TaskDependencyMap type;
	
};

template<>
class LunaType< 31071002 > {
public:
	typedef sgt::half type;
	
};

template<>
class LunaType< 44367388 > {
public:
	typedef sgt::Object type;
	
};

template<>
class LunaType< 16284073 > {
public:
	typedef sgt::TaskListener type;
	
};

template<>
class LunaType< 76306638 > {
public:
	typedef sgt::TaskGraph::TaskIterator type;
	
};

template<>
class LunaType< 32276046 > {
public:
	typedef sgt::TerrainNode type;
	
};

template<>
class LunaType< 24456226 > {
public:
	typedef std::set< sgtPtr< sgt::Task > > type;
	
};

template<>
class LunaType< 61782390 > {
public:
	typedef std::map< sgtPtr< sgt::Task >, sgt::TaskSet > type;
	
};

template<>
class LunaType< 25781455 > {
public:
	typedef sgt::SetIterator< sgtPtr< sgt::Task > > type;
	
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
class LunaType< 18903838 > {
public:
	typedef osg::Matrixd type;
	
};

template<>
class LunaType< 33161232 > {
public:
	typedef osg::Polytope::PlaneList type;
	
};

template<>
class LunaType< 92303233 > {
public:
	typedef osg::Vec4d type;
	
};


#endif

