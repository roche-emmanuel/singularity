SET(TARGET_NAME "proland")
SET(TARGET_DIR "bin/${FLAVOR}/modules")

INCLUDE_DIRECTORIES (../include)
INCLUDE_DIRECTORIES (../../sgtCore/include)
INCLUDE_DIRECTORIES (../../sgtProland/include)
INCLUDE_DIRECTORIES (../../sgtProland/include/core)
INCLUDE_DIRECTORIES (../../sgtProland/include/terrain)

INCLUDE_DIRECTORIES(${GLEW_INC_DIR})
LINK_DIRECTORIES (${GLEW_LIB_DIR})

INCLUDE_DIRECTORIES(${PTHREADS_INC_DIR})
LINK_DIRECTORIES (${PTHREADS_LIB_DIR})

INCLUDE_DIRECTORIES(${GLUT_INC_DIR})
LINK_DIRECTORIES (${GLUT_LIB_DIR})

INCLUDE_DIRECTORIES(${ATB_INC_DIR})
LINK_DIRECTORIES (${ATB_LIB_DIR})

INCLUDE_DIRECTORIES(${TIFF_INC_DIR})
LINK_DIRECTORIES (${TIFF_LIB_DIR})

#INCLUDE_DIRECTORIES(${MYDEP_INC_DIR})
#LINK_DIRECTORIES (${MYDEP_LIB_DIR})

ADD_DEFINITIONS(-DPLUG_LIBRARY)
ADD_DEFINITIONS(-DLUNA_BINDINGS)
ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(-DTIXML_USE_STL)
ADD_DEFINITIONS(${OSG_FLAGS})

FILE(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")

FILE(GLOB_RECURSE SOURCE_FILES "*.cpp" )

ADD_MSVC_PRECOMPILED_HEADER("plug_common.h" "plug_common.cpp" SOURCE_FILES)

ADD_LIBRARY (${TARGET_NAME} SHARED ${PUBLIC_HEADERS} ${SOURCE_FILES} )

TARGET_LINK_LIBRARIES(${TARGET_NAME} sgtCore sgtProland ${LUA_LIBS} ${OSG_LIBS} ${GL_LIBS})

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})

# reflection settings:	
SET(INTF_FILES)


#LIST(APPEND INTF_FILES "${MYDEP_INC_DIR}")
# LIST(APPEND INTF_FILES "${MYDEP_INC_DIR}")
ADD_FILES(INTF_FILES "../include/plug_extensions.h")
ADD_FILES(INTF_FILES "../interface/helpers.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/math/half.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/Types.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/Buffer.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/CPUBuffer.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/GPUBuffer.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/Sampler.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/Texture.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/Texture2D.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/Module.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/Program.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/render/Uniform.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/ork/taskgraph/Task.h")
# ADD_FILES(INTF_FILES "../../sgtProland/include/ork/scenegraph/SceneManager.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/core/proland/terrain/Deformation.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/core/proland/terrain/TerrainNode.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/core/proland/terrain/TileSampler.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/core/proland/terrain/TileSamplerZ.h")
ADD_FILES(INTF_FILES "../../sgtProland/include/core/proland/terrain/TerrainQuad.h")

SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES 
	PREFIX ""
	IMPORT_PREFIX "plug_"
	SUFFIX ".sgp")

SET(DOXY_PREDEFINED ORK_API= SGTPROLAND_EXPORT= PROLAND_API= ) 
SET(FILE_PATTERNS )
SET(INCLUDE_PATH )

GENERATE_REFLECTION(${TARGET_NAME} INTF_FILES)

# misc operations:
COMPRESS_BINARY()
INSTALL_PDB(${TARGET_NAME} "modules/")
