SET(TARGET_NAME "SDL")
SET(TARGET_DIR "bin/${FLAVOR}/modules")

INCLUDE_DIRECTORIES (../include)
INCLUDE_DIRECTORIES (../../sgtLuna/include)

INCLUDE_DIRECTORIES(${SDL_INC_DIR})
LINK_DIRECTORIES (${SDL_LIB_DIR})

ADD_DEFINITIONS(-DPLUG_LIBRARY)
ADD_DEFINITIONS(-DLUNA_BINDINGS)
ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)


FILE(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")

FILE(GLOB_RECURSE SOURCE_FILES "*.cpp" )


ADD_MSVC_PRECOMPILED_HEADER("plug_common.h" "plug_common.cpp" SOURCE_FILES)

ADD_LIBRARY (${TARGET_NAME} SHARED ${PUBLIC_HEADERS} ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(${TARGET_NAME} sgtLuna ${LUA_LIBS} ${SDL_LIBS} OpenGL32.lib GLU32.lib)  

INSTALL(TARGETS ${TARGET_NAME}
	RUNTIME DESTINATION ${TARGET_DIR}
	LIBRARY DESTINATION ${TARGET_DIR})

# step needed for the generation of the XML documentation:
SET(INTF_FILES)
ADD_FILES(INTF_FILES "../interface/SDL/SDL.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_active.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_audio.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_cdrom.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_cpuinfo.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_endian.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_error.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_events.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_joystick.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_keyboard.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_keysym.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_loadso.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_main.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_mouse.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_mutex.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_opengl.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_thread.h")
# ADD_FILES(INTF_FILES "../interface/SDL/SDL_timer.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_version.h")
ADD_FILES(INTF_FILES "../interface/SDL/SDL_video.h")
ADD_FILES(INTF_FILES "../include/plug_extensions.h")
ADD_FILES(INTF_FILES "../interface/helpers.h")

SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES 
	PREFIX ""
	IMPORT_PREFIX "plug_"
	SUFFIX ".sgp")

SET(DOXY_PREDEFINED DECLSPEC SDLCALL __inline__) 
SET(FILE_PATTERNS *.h)
GENERATE_REFLECTION(${TARGET_NAME} INTF_FILES)
COMPRESS_BINARY()
