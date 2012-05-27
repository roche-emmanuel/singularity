CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# The name of this project:
PROJECT(SINGULARITY)

# Include the config:
INCLUDE(cmake/Config.cmake)

# Include the macro definitions:
INCLUDE(cmake/Macros.cmake)

# Include the dependencies definitions:
INCLUDE(cmake/Dependencies.cmake)

SET(CMAKE_MODULE_PATH "cmake ${CMAKE_MODULE_PATH}")

SET(BIN_FOLDER ${FLAVOR})
IF("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
    SET(BIN_FOLDER "${BIN_FOLDER}d")
ENDIF()

IF(NOT MSVC)


    # Use the "d" postfix for debug binaries
    SET(CMAKE_DEBUG_POSTFIX "d")

    SET(CMAKE_CXX_FLAGS "-Wno-long-long ${CMAKE_CXX_FLAGS}" )

    SET(CMAKE_CXX_FLAGS_DEBUG "-D_DEBUG -g")
    SET(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG -O3")
    SET(CMAKE_C_FLAGS_DEBUG "-D_DEBUG -g")
    SET(CMAKE_C_FLAGS_RELEASE "-DNDEBUG -O3")

    SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -ffunction-sections -fdata-sections" )
    SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -Wl,--gc-sections -s")
    SET(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} -Wl,--gc-sections -s")

    IF(WIN32)
    SET(CMAKE_CXX_FLAGS "-mthreads ${CMAKE_CXX_FLAGS}")
    SET(CMAKE_C_FLAGS "-mthreads ${CMAKE_C_FLAGS}")
    ELSE()
    SET(CMAKE_CXX_FLAGS "-fPIC ${CMAKE_CXX_FLAGS}")
    SET(CMAKE_C_FLAGS "-fPIC ${CMAKE_C_FLAGS}")
    ENDIF()

    STRING(TOUPPER "${PLATFORM}" _flavor)

    ADD_DEFINITIONS("-DLINUX_BOX")
    ADD_DEFINITIONS("-D${_flavor}")
    ADD_DEFINITIONS("-D_FILE_OFFSET_BITS=64")

    IF(WIN32)
        SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libstdc++ -static-libgcc -mthreads") # -Wl,--subsystem,windows -mwindows
        SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -static-libstdc++ -static-libgcc -mthreads") #-Wl,--subsystem,windows -mwindows
    ELSE()
        SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -pthread -Wl,-E") #-static-libstdc++
        SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -static-libgcc -pthread -Wl,-E") #-static-libstdc++
    ENDIF()

    # install of dependencies:
    # install lua dependency only for windows:
    IF(WIN32)
    install(FILES ${DEPS_DIR}/${FLAVOR}/${DEP_LUA}/bin/lua51jit.dll DESTINATION "bin/${BIN_FOLDER}" COMPONENT Core)
    ENDIF()

    install(FILES ${DEPS_DIR}/${FLAVOR}/${DEP_LUAFILESYSTEM}/lib/lfs.${SHARED_EXT} DESTINATION "bin/${BIN_FOLDER}/libraries" COMPONENT Core)
ENDIF()

ADD_SUBDIRECTORY(sources)


