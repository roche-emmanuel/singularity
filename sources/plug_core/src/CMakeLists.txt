SET(TARGET_NAME "core")
SET(TARGET_DIR "bin/${FLAVOR}/modules")

INCLUDE_DIRECTORIES (../include)
INCLUDE_DIRECTORIES (../../sgtLuna/include)
INCLUDE_DIRECTORIES (../../sgtCore/include)


ADD_DEFINITIONS(-DPLUG_LIBRARY)
ADD_DEFINITIONS(-DLUNA_BINDINGS)
ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(${OSG_FLAGS})

FILE(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")

FILE(GLOB_RECURSE SOURCE_FILES "*.cpp" )

ADD_MSVC_PRECOMPILED_HEADER("plug_common.h" "plug_common.cpp" SOURCE_FILES)

ADD_LIBRARY (${TARGET_NAME} SHARED ${PUBLIC_HEADERS} ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(${TARGET_NAME} sgtCore sgtLuna ${LUA_LIBS} ${OSG_LIBS} ${BOOST_LIBS})  

SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES 
	PREFIX ""
	SUFFIX ".sgp")
	
INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})

# step needed for the generation of the XML documentation:
SET(INTF_FILES)
SET(INCLUDE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../sgtCore/include" "${CMAKE_CURRENT_SOURCE_DIR}/../../sgtLuna/include")

ADD_FILES(INTF_FILES "../../sgtCore/include/sgtCommon.h")
ADD_FILES(INTF_FILES "../../sgtLuna/include/lunaCommon.h")
ADD_FILES(INTF_FILES "../../sgtCore/include/base/Object.h")
ADD_FILES(INTF_FILES "../../sgtCore/include/base/Referenced.h")
ADD_FILES(INTF_FILES "../../sgtCore/include/base/TimeProvider.h")
ADD_FILES(INTF_FILES "../../sgtLuna/include/lua/ModuleProvider.h")
#ADD_FILES(INTF_FILES "../../sgtCore/include/base/DataMap.h")
ADD_FILES(INTF_FILES "../../sgtLuna/include/log/*.h")
LIST(APPEND INTF_FILES "${OSG_INC_DIR}/osg/Referenced")
LIST(APPEND INTF_FILES "${OSG_INC_DIR}/osg/Object")
# LIST(APPEND INTF_FILES "${OSG_INC_DIR}/osg/CopyOp")
ADD_FILES(INTF_FILES "../interface/helpers.h")
ADD_FILES(INTF_FILES "../include/plug_extensions.h")

SET(EXPAND_AS_DEFINED META_Object META_Node META_StateAttribute META_NodeVisitor META_Shape Object_META Object_META_DEF)

GENERATE_REFLECTION(${TARGET_NAME} INTF_FILES)

INSTALL_PDB(${TARGET_NAME} "modules/")

COMPRESS_BINARY()
