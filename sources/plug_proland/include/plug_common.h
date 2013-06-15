#ifndef PLUG_COMMON_
#define PLUG_COMMON_

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( PLUG_LIBRARY_STATIC )
#    define PLUG_EXPORT
#  elif defined( PLUG_LIBRARY )
#    define PLUG_EXPORT   __declspec(dllexport)
#  else
#    define PLUG_EXPORT   __declspec(dllimport)
#  endif
#else
#  define PLUG_EXPORT
#endif

#pragma warning( disable: 4251 )

#include <lua.hpp>

#include "sgtProland.h"

// Insert your includes here.
#include <ork/math/vec2.h>
#include <ork/math/vec3.h>
#include <ork/math/vec4.h>

#include <ork/math/box2.h>
#include <ork/math/box3.h>

#include <ork/math/mat2.h>
#include <ork/math/mat3.h>
#include <ork/math/mat4.h>

#include <ork/math/quat.h>
#include <ork/math/half.h>

#include <ork/core/Object.h>
#include <ork/render/Types.h>
#include <ork/render/Texture.h>

#include <ork/taskgraph/MultithreadScheduler.h>

#include <core/proland/producer/TileCache.h>
#include <core/proland/producer/TileProducer.h>
#include <core/proland/producer/GPUTileStorage.h>
#include <terrain/proland/dem/ElevationProducer.h>
#include <terrain/proland/dem/NormalProducer.h>
#include <core/proland/terrain/TerrainNode.h>
#include <core/proland/terrain/TerrainQuad.h>

using namespace proland;

// Insert your using namespace commands here.

#include "plug_extensions.h"

#ifdef LUNA_BINDINGS
#include <luna/luna.h>
#include <luna/luna_types.h>
#endif


// Insert your specific caster definition here.
// example: 
/*
LUNA_DEFINE_DIRECT_CAST(MyNamespace::MyNonPolymorphicBaseClass)
*/

// Insert any specific value getter/setter here.
// - use "arg" as a valid pointer on the class.
// - use "L" as lua state
// - use "index" as current stack index
// examples:
/*
LUNA_BEGIN_SETTER(MyClass)
	std::string lret_str = arg->asString();
	lua_pushlstring(L,lret_str.data(),lret_str.size());
LUNA_END_SETTER(MyClass)

LUNA_BEGIN_GETTER(MyClass)
	std::string str = lua_tostring(L,index);
	return MyClass(str);
LUNA_END_GETTER(MyClass)
*/
LUNA_BEGIN_GETTER(osg::Vec3d)
	return *(Luna< osg::Vec3d >::check(L,index));
LUNA_END_GETTER(osg::Vec3d)

LUNA_BEGIN_GETTER(osg::Matrixd)
	return *(Luna< osg::Matrixd >::check(L,index));
LUNA_END_GETTER(osg::Matrixd)

LUNA_BEGIN_GETTER(osg::BoundingSphere)
	return *(Luna< osg::BoundingSphere >::check(L,index));
LUNA_END_GETTER(osg::BoundingSphere)

LUNA_BEGIN_GETTER(ork::SceneManager::visibility)
	return (ork::SceneManager::visibility)lua_tointeger(L,index);
LUNA_END_GETTER(ork::SceneManager::visibility)

#endif
