CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# The name of this project:
PROJECT(SINGULARITY)

IF(NOT DEFINED FLAVOR)
	SET(FLAVOR win32)	
ENDIF()

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

# Use the "d" postfix for debug binaries
SET(CMAKE_DEBUG_POSTFIX "d")


STRING(TOUPPER "${FLAVOR}" UPPER_FLAVOR)
ADD_DEFINITIONS("-D${UPPER_FLAVOR}")
ADD_DEFINITIONS("-D_FILE_OFFSET_BITS=64")

IF(NOT MSVC)	

    SET(CMAKE_CXX_FLAGS "-std=c++0x -Wno-long-long ${CMAKE_CXX_FLAGS}" )

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
        SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -mthreads") # -Wl,--subsystem,windows -mwindows -static-libstdc++ -static-libgcc 
        SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -mthreads") #-Wl,--subsystem,windows -mwindows -static-libstdc++ -static-libgcc 
    ELSE()
		SET(CMAKE_CXX_FLAGS "-fPIC ${CMAKE_CXX_FLAGS}")
		SET(CMAKE_C_FLAGS "-fPIC ${CMAKE_C_FLAGS}")
        SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pthread -Wl,-E") #-static-libstdc++ -static-libgcc 
        SET(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -pthread -Wl,-E") #-static-libstdc++ -static-libgcc 
    ENDIF()
ELSE()
	ADD_DEFINITIONS(-DCXX_ENABLED) # only on MSVC
ENDIF()

ADD_SUBDIRECTORY(sources)


# Define the packaging structure:
install(DIRECTORY 
	software/assets 
	software/data 
	software/images 
	software/locales 
	software/lua 
	DESTINATION "." COMPONENT Core) # )

install(DIRECTORY software/bin/${FLAVOR} DESTINATION "bin" COMPONENT Core REGEX "upx|\.log" EXCLUDE)

SET(CPACK_GENERATOR "ZIP;TBZ2")

SET(CPACK_OUTPUT_FILE_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/releases)

SET(CPACK_PACKAGE_NAME "singularity")
SET(CPACK_PACKAGE_VERSION_MAJOR "0")
SET(CPACK_PACKAGE_VERSION_MINOR "1")
SET(CPACK_PACKAGE_VERSION_PATCH "0")

# SET(CPACK_PACKAGE_INSTALL_DIRECTORY releases)

INCLUDE(CPack)

