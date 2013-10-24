SET(TARGET_NAME "tuio")
SET(TARGET_DIR "bin/${FLAVOR}/modules")

INCLUDE_DIRECTORIES (../include)
INCLUDE_DIRECTORIES (TUIO)
INCLUDE_DIRECTORIES (oscpack)
INCLUDE_DIRECTORIES (../../sgtLuna/include)

ADD_DEFINITIONS(-DPLUG_LIBRARY)
ADD_DEFINITIONS(-DLUNA_BINDINGS)
ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(${OSG_FLAGS})

FILE(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")

FILE(GLOB_RECURSE SOURCE_FILES "luna/*.cpp" )

SET(TUIO_SOURCE_FILES
    #TUIO/DevReceiver.cpp
    #TUIO/DevSender.cpp
    TUIO/FlashSender.cpp
    TUIO/OscReceiver.cpp
    TUIO/OscSender.cpp
    TUIO/TcpReceiver.cpp
    TUIO/TcpSender.cpp
    TUIO/TuioBlob.cpp
    TUIO/TuioClient.cpp
    TUIO/TuioContainer.cpp
    TUIO/TuioCursor.cpp
    TUIO/TuioDispatcher.cpp
    TUIO/TuioManager.cpp
    TUIO/TuioObject.cpp
    TUIO/TuioPoint.cpp
    TUIO/TuioServer.cpp
    TUIO/TuioTime.cpp
    TUIO/UdpReceiver.cpp
    TUIO/UdpSender.cpp
    
    oscpack/osc/OscOutboundPacketStream.cpp
    oscpack/osc/OscPrintReceivedElements.cpp
    oscpack/osc/OscReceivedElements.cpp
    oscpack/osc/OscTypes.cpp
    oscpack/ip/IpEndpointName.cpp
)


IF(WIN32)
    SET(TUIO_SOURCE_FILES ${TUIO_SOURCE_FILES}
        oscpack/ip/win32/NetworkingUtils.cpp
        oscpack/ip/win32/UdpSocket.cpp
    )
ELSE(WIN32)
    SET(TUIO_SOURCE_FILES ${TUIO_SOURCE_FILES}
        oscpack/ip/posix/NetworkingUtils.cpp
        oscpack/ip/posix/UdpSocket.cpp
    )
ENDIF(WIN32)

IF(BUILD_WITH_LITTLE_ENDIAN)
    ADD_DEFINITIONS(-DOSC_HOST_LITTLE_ENDIAN)
ELSEIF(BUILD_WITH_LITTLE_ENDIAN)
    ADD_DEFINITIONS(-DOSC_HOST_BIG_ENDIAN)
ENDIF(BUILD_WITH_LITTLE_ENDIAN)

ADD_MSVC_PRECOMPILED_HEADER("plug_common.h" "plug_common.cpp" SOURCE_FILES)

ADD_LIBRARY (${TARGET_NAME} SHARED ${PUBLIC_HEADERS} ${SOURCE_FILES} ${TUIO_SOURCE_FILES})

TARGET_LINK_LIBRARIES(${TARGET_NAME} sgtLuna ${LUA_LIBS} ${OSG_LIBS} ${GL_LIBS} ${FLAVOR_LIBS})

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})

# step needed for the generation of the XML documentation:
SET(INCLUDE_PATH ${SPICE_INC_DIR})

SET(INTF_FILES)
# LIST(APPEND INTF_FILES "${SPARK_INC_DIR}")
ADD_FILES(INTF_FILES "../include/plug_extensions.h")
ADD_FILES(INTF_FILES "../interface/helpers.h")

SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES 
	PREFIX ""
	IMPORT_PREFIX "plug_"
	SUFFIX ".sgp")

SET(DOXY_PREDEFINED )
SET(FILE_PATTERNS )

SET(DOXY_PREDEFINED ) 
# SET(FILE_PATTERNS *)
# SET(INCLUDE_PATH ${SPARK_INC_DIR} ${OSG_INC_DIR})

GENERATE_REFLECTION(${TARGET_NAME} INTF_FILES)
COMPRESS_BINARY()
INSTALL_PDB(${TARGET_NAME} "modules/")
