# Definition of a macro for header precompilation:
MACRO(ADD_PRECOMPILED_HEADER _targetName _input)

    GET_FILENAME_COMPONENT(_name ${_input} NAME)
    SET(_source "${CMAKE_CURRENT_SOURCE_DIR}/${_input}")
    SET(_outdir "${CMAKE_CURRENT_BINARY_DIR}/${_name}.gch")
    MAKE_DIRECTORY(${_outdir})
    SET(_output "${_outdir}/${CMAKE_BUILD_TYPE}.c++")
    STRING(TOUPPER "CMAKE_CXX_FLAGS_${CMAKE_BUILD_TYPE}" _flags_var_name)
    SET(_compiler_FLAGS "${${_flags_var_name}} ${CMAKE_CXX_FLAGS}")
    
    GET_DIRECTORY_PROPERTY(_directory_flags INCLUDE_DIRECTORIES)
    FOREACH(item ${_directory_flags})
    LIST(APPEND _compiler_FLAGS "-I${item}")
    ENDFOREACH(item)

      GET_DIRECTORY_PROPERTY(_directory_flags DEFINITIONS)
    LIST(APPEND _compiler_FLAGS ${_directory_flags})

    SEPARATE_ARGUMENTS(_compiler_FLAGS)
    #MESSAGE("_compiler_FLAGS: ${_compiler_FLAGS}")
    message("${CMAKE_CXX_COMPILER} ${_compiler_FLAGS} -x c++-header -o ${_output} ${_source}")
    ADD_CUSTOM_COMMAND(
        OUTPUT ${_output}
        COMMAND ${CMAKE_CXX_COMPILER}
                                ${_compiler_FLAGS}
                                -x c++-header
                                -o ${_output} ${_source}
		COMMAND echo "Done generating precompiled header for ${_targetName}."
        DEPENDS ${_source} )
        ADD_CUSTOM_TARGET(${_targetName}_gch DEPENDS ${_output})
    ADD_DEPENDENCIES(${_targetName} ${_targetName}_gch)
    # SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-include ${_name} -Winvalid-pch -H")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -include ${_input} -Winvalid-pch")
    # SET_TARGET_PROPERTIES(${_targetName} PROPERTIES
        # COMPILE_FLAGS "-include ${_input} -Winvalid-pch"
    # )
        
ENDMACRO(ADD_PRECOMPILED_HEADER)

MACRO(SETUP_WXWIDGETS)
    # Setup wxWidgets:
    SET(wxWidgets_ROOT_DIR ${DEPS_DIR}/${FLAVOR}/${DEP_WX})
    SET(wxWidgets_CONFIG_EXECUTABLE ${DEPS_DIR}/${FLAVOR}/${DEP_WX}/bin/wx-config)
    SET(wxWidgets_wxrc_EXECUTABLE ${DEPS_DIR}/${FLAVOR}/${DEP_WX}/bin/wxrc-2.9)
    SET(wxWidgets_CONFIGURATION ${WX_PLATFORM})
    SET(wxWidgets_LIB_DIR ${DEPS_DIR}/${FLAVOR}/${DEP_WX}/lib)

    EXECUTE_PROCESS(
        COMMAND sh "${wxWidgets_CONFIG_EXECUTABLE}" --cxxflags
        OUTPUT_VARIABLE wxWidgets_CXX_FLAGS
        RESULT_VARIABLE RET
        ERROR_QUIET
    )
        
    # Message(STATUS "Found wxWidgets CXXFLAGS= ${wxWidgets_CXX_FLAGS}")

    STRING(STRIP "${wxWidgets_CXX_FLAGS}" wxWidgets_CXX_FLAGS)
    SEPARATE_ARGUMENTS(wxWidgets_CXX_FLAGS)

    # DBG_MSG_V("wxWidgets_CXX_FLAGS=${wxWidgets_CXX_FLAGS}")

    # parse definitions from cxxflags; drop -D* from CXXFLAGS and the -D prefix
    STRING(REGEX MATCHALL "-D[^;]+"
      wxWidgets_DEFINITIONS  "${wxWidgets_CXX_FLAGS}")
    STRING(REGEX REPLACE "-D[^;]+;" ""
      wxWidgets_CXX_FLAGS "${wxWidgets_CXX_FLAGS}")
    # STRING(REPLACE "-D" ""
      # wxWidgets_DEFINITIONS "${wxWidgets_DEFINITIONS}")

    # parse include dirs from cxxflags; drop -I prefix
    STRING(REGEX MATCHALL "-I[^;]+"
      WX_INC_DIR "${wxWidgets_CXX_FLAGS}")
    STRING(REGEX REPLACE "-I[^;]+;" ""
      wxWidgets_CXX_FLAGS "${wxWidgets_CXX_FLAGS}")
    STRING(REPLACE "-I" ""
      WX_INC_DIR "${WX_INC_DIR}")

    IF("${CMAKE_BUILD_TYPE}" STREQUAL "Debug")
        LIST(APPEND wxWidgets_DEFINITIONS "-D__WXDEBUG__")
    ENDIF()

    # Message(STATUS "wxWidgets_DEFINITIONS=${wxWidgets_DEFINITIONS}")
    
    # Message(STATUS "wxWidgets_CXX_FLAGS=${wxWidgets_CXX_FLAGS}")

    EXECUTE_PROCESS(
        COMMAND sh "${wxWidgets_CONFIG_EXECUTABLE}" --libs
        OUTPUT_VARIABLE WX_LIBS
        RESULT_VARIABLE RET
        ERROR_QUIET
    )
    # Message(STATUS "Found wxWidgets LIBRARIES= ${WX_LIBS}")
        
    STRING(STRIP "${WX_LIBS}" WX_LIBS)
    SEPARATE_ARGUMENTS(WX_LIBS)
    STRING(REPLACE "-framework;" "-framework "
      WX_LIBS "${WX_LIBS}")
    STRING(REPLACE "-arch;" "-arch "
      WX_LIBS "${WX_LIBS}")
    STRING(REPLACE "-isysroot;" "-isysroot "
      WX_LIBS "${WX_LIBS}")

    # extract linkdirs (-L) for rpath (i.e., LINK_DIRECTORIES)
    STRING(REGEX MATCHALL "-L[^;]+"
      WX_LIB_DIR "${WX_LIBS}")
    STRING(REPLACE "-L" ""
      WX_LIB_DIR "${WX_LIB_DIR}")

    IF(WIN32)
        SET(WX_POSTFIX "-${HOST_MINGW}")
    ELSE()
        SET(WX_POSTFIX "")
    ENDIF()
    
    EXECUTE_PROCESS(
        COMMAND sh "${wxWidgets_CONFIG_EXECUTABLE}" --release
        OUTPUT_VARIABLE WX_VERSION
        RESULT_VARIABLE RET
        ERROR_QUIET
    )
    
    STRING(STRIP "${WX_VERSION}" WX_VERSION)
    
    SET(WX_LIBS "")
    LIST(APPEND WX_LIBS wx_${WX_PLATFORM}-${WX_VERSION}${WX_POSTFIX})
    LIST(APPEND WX_LIBS wx_${WX_PLATFORM}_gl-${WX_VERSION}${WX_POSTFIX})
    LIST(APPEND WX_LIBS wxregexu-${WX_VERSION}${WX_POSTFIX})
    LIST(APPEND WX_LIBS wxscintilla-${WX_VERSION}${WX_POSTFIX})
    LIST(APPEND WX_LIBS wxexpat-${WX_VERSION}${WX_POSTFIX})
    LIST(APPEND WX_LIBS wxjpeg-${WX_VERSION}${WX_POSTFIX})
    LIST(APPEND WX_LIBS wxpng-${WX_VERSION}${WX_POSTFIX})
    LIST(APPEND WX_LIBS wxtiff-${WX_VERSION}${WX_POSTFIX})
    LIST(APPEND WX_LIBS wxzlib-${WX_VERSION}${WX_POSTFIX})
    # Message(STATUS "WX_LIBS=${WX_LIBS}")
    Message(STATUS "WX_LIB_DIR=${WX_LIB_DIR}")

    SET(WX_FLAGS "")
    FOREACH(def ${wxWidgets_DEFINITIONS})
        LIST(APPEND WX_FLAGS "${def}")
    ENDFOREACH()

    SET(WX_INC_DIR "")
    LIST(APPEND WX_INC_DIR "${DEPS_DIR}/${FLAVOR}/${DEP_WX}/lib/wx/include/i686-w64-mingw32-msw-unicode-static-2.9")
    LIST(APPEND WX_INC_DIR "${DEPS_DIR}/${FLAVOR}/${DEP_WX}/include/wx-2.9")
    # Message(STATUS "WX_INC_DIR=${WX_INC_DIR}")
    
    SET(WX_LIB_DIR "")
    LIST(APPEND WX_LIB_DIR "${DEPS_DIR}/${FLAVOR}/${DEP_WX}/lib")
    
    # Message(STATUS "WX_FLAGS=${WX_FLAGS}")
    
    # MESSAGE(STATUS "wx root dir=${wxWidgets_ROOT_DIR}")
    # FIND_PACKAGE(wxWidgets)
    # INCLUDE(${wxWidgets_USE_FILE})
    # Message(STATUS "Ignoring wxWidgets flags: ${wxWidgets_CXX_FLAGS}")
ENDMACRO(SETUP_WXWIDGETS)

MACRO(WRITE_WX_HEADERS)
    LIST(GET WX_INC_DIR 1 wx_path)

    MESSAGE(STATUS "WX path is: ${wx_path}")

    FILE(GLOB_RECURSE WX_HEADERS "${wx_path}/*.h")

    SET(HEADERFILE ${CMAKE_CURRENT_SOURCE_DIR}/../include/wx_headers.h)

    file(WRITE ${HEADERFILE} "//Generated headers include\n")

    foreach(header_path ${WX_HEADERS})
        # drop full name for macro name
        string(REPLACE "${wx_path}/" "" header "${header_path}")

        file(APPEND ${HEADERFILE} "#include <${header}>\n")
    endforeach()    
ENDMACRO(WRITE_WX_HEADERS)

MACRO(ADD_MSVC_PRECOMPILED_HEADER PrecompiledHeader PrecompiledSource SourcesVar)
  IF(MSVC)
  	file(GLOB_RECURSE to_remove "*${PrecompiledSource}")
	list(REMOVE_ITEM ${SourcesVar} ${to_remove})
	
    GET_FILENAME_COMPONENT(PrecompiledBasename ${PrecompiledHeader} NAME_WE)
    SET(PrecompiledBinary "${CMAKE_CURRENT_BINARY_DIR}/${PrecompiledBasename}.pch")
    SET(Sources ${${SourcesVar}})

    SET_SOURCE_FILES_PROPERTIES(${PrecompiledSource}
                                PROPERTIES COMPILE_FLAGS "/Yc\"${PrecompiledHeader}\" /Fp\"${PrecompiledBinary}\""
                                           OBJECT_OUTPUTS "${PrecompiledBinary}")
    SET_SOURCE_FILES_PROPERTIES(${Sources}
                                PROPERTIES COMPILE_FLAGS "/Yu\"${PrecompiledBinary}\" /FI\"${PrecompiledBinary}\" /Fp\"${PrecompiledBinary}\""
                                           OBJECT_DEPENDS "${PrecompiledBinary}")  
    # Add precompiled header to SourcesVar
    LIST(APPEND ${SourcesVar} ${PrecompiledSource})
  ENDIF(MSVC)
ENDMACRO(ADD_MSVC_PRECOMPILED_HEADER)

MACRO(ADD_RESSOURCE RessourceFile SourcesVar)
  IF(WIN32)
    IF(MSVC)
        LIST(APPEND ${SourcesVar} ${RessourceFile})
    ELSE(MSVC)
        ADD_CUSTOM_COMMAND(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${RessourceFile}.o
                   COMMAND ${CMAKE_RC_COMPILER} -I${CMAKE_CURRENT_SOURCE_DIR} ${OPTIONS}
                                       -i${CMAKE_CURRENT_SOURCE_DIR}/${RessourceFile}
                                       -o ${CMAKE_CURRENT_BINARY_DIR}/${RessourceFile}.o)
        LIST(APPEND ${SourcesVar} ${CMAKE_CURRENT_BINARY_DIR}/${RessourceFile}.o)
    ENDIF(MSVC)
  ENDIF(WIN32)
ENDMACRO(ADD_RESSOURCE)

MACRO(PRECOMPILE_LUA luafile)
	GET_FILENAME_COMPONENT(FileBasename ${luafile} NAME_WE)
	
	IF(MSVC)
		ADD_CUSTOM_TARGET(
			"${TARGET_NAME}_${FileBasename}_lch"
			COMMAND ${LUAC} -o ${FileBasename}.tmp "${CMAKE_CURRENT_SOURCE_DIR}/${luafile}"
			COMMAND ${LUA} ${BIN2C_LUA} ${FileBasename}.tmp -o "${CMAKE_CURRENT_SOURCE_DIR}/${FileBasename}.lch"
			# COMMAND ${BIN2C} ${FileBasename}.tmp > "${CMAKE_CURRENT_SOURCE_DIR}/${FileBasename}.lch"
			COMMAND echo "Done generating ${FileBasename}.lch"
			# OUTPUT ${FileBasename}.lch
		)
	ELSE()
		ADD_CUSTOM_TARGET(
			"${TARGET_NAME}_${FileBasename}_lch"
			COMMAND ${LUAC} -o ${FileBasename}.tmp `cygpath -w "${CMAKE_CURRENT_SOURCE_DIR}/${luafile}"`
			COMMAND ${LUA} ${BIN2C_LUA} ${FileBasename}.tmp -o `cygpath -w "${CMAKE_CURRENT_SOURCE_DIR}/${FileBasename}.lch"`
			# COMMAND ${BIN2C} ${FileBasename}.tmp > `cygpath -w "${CMAKE_CURRENT_SOURCE_DIR}/${FileBasename}.lch"`
			COMMAND echo "Done generating ${FileBasename}.lch"
			# OUTPUT ${FileBasename}.lch
		)
	ENDIF()

	ADD_DEPENDENCIES(${TARGET_NAME} "${TARGET_NAME}_${FileBasename}_lch")
ENDMACRO(PRECOMPILE_LUA)

MACRO(GENERATE_REFLECTION STUB_NAME INTERFACE_FILES)
    SET(DOXFILE "doxyfile")
	
	SET(SGT_PATH  "${SGT_DIR}/software/bin/win32") # needed to find some dependencies.
	
	IF(CYGWIN_BOX)
		SET(DOX_TEMPLATE  "${SGT_DIR}/sources/sgtLuna/gen_Doxyfile_template")
		
		SET(CAT_EXEC cat)
	ELSE()
		STRING(REPLACE "/" "\\" DOX_TEMPLATE  "${SGT_DIR}/sources/sgtLuna/gen_Doxyfile_template")
		STRING(REPLACE "/" "\\" SGT_PATH  "${SGT_DIR}/software/bin/${FLAVOR}")
		SET(CAT_EXEC type)
	ENDIF()
	
	SET(CFGFILE ../generate.lua)
	
	# STRING(REPLACE "/" "\\" SGT_PATH_WIN  "${SGT_PATH}")
	# SET(ENV{PATH} "$ENV{PATH};${SGT_PATH_WIN}")
	# MESSAGE(STATUS "Current path is: $ENV{PATH}")
	
	IF(MSVC)
		ADD_CUSTOM_TARGET(
			${TARGET_NAME}_gen
			# PRE_BUILD
			COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../include/luna
			COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../src/luna
			COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../include/luna/wrappers
			COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../src/luna/wrappers
			COMMAND echo "Generating doxygen wrapper docs..."
			COMMAND echo INPUT=${${INTERFACE_FILES}} > ${DOXFILE}
			COMMAND echo FILE_PATTERNS=${FILE_PATTERNS} >> ${DOXFILE}
			COMMAND echo EXPAND_AS_DEFINED=${EXPAND_AS_DEFINED} >> ${DOXFILE}
			COMMAND echo PREDEFINED=_DOXYGEN=1 __DOXYGEN__=1 ${DOXY_PREDEFINED} >> ${DOXFILE}
			COMMAND echo INCLUDE_PATH=${${INTERFACE_FILES}} ${INCLUDE_PATH} >> ${DOXFILE}
			COMMAND echo INCLUDE_FILE_PATTERNS= >> ${DOXFILE}
			COMMAND echo EXCLUDE_PATTERNS= >> ${DOXFILE}
			COMMAND echo DOT_PATH=${DOT_DIR} >> ${DOXFILE}
			COMMAND ${CAT_EXEC} "${DOX_TEMPLATE}" >> ${DOXFILE}
			# Call doxygen on this file:
			COMMAND ${DOXYGEN} ${DOXFILE} > ${CMAKE_CURRENT_BINARY_DIR}/doxygen.log 2>&1
			# COMMAND ${DOXYGEN} ${DOXFILE}
			COMMAND echo "Generating lua reflection..."
			# cd ${SGT_PATH} && 
			COMMAND ${LUA} -e "project='${TARGET_NAME}'; xml_path='${CMAKE_CURRENT_BINARY_DIR}/xml/'; sgt_path='${SGT_DIR}/';" ${CMAKE_CURRENT_SOURCE_DIR}/../generate_reflection.lua
			COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt # touch the calling file.
			COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/../CMakeLists.txt # touch the calling file.
			COMMAND echo "Reflection generation done."
		)	
	ELSE()
		ADD_CUSTOM_TARGET(
			${TARGET_NAME}_gen
			# PRE_BUILD
			COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../include/luna
			COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/../src/luna
			COMMAND echo "Generating doxygen wrapper docs..."
			COMMAND echo INPUT=${${INTERFACE_FILES}} > ${DOXFILE}
			COMMAND echo FILE_PATTERNS=${FILE_PATTERNS} >> ${DOXFILE}
			COMMAND echo EXPAND_AS_DEFINED=${EXPAND_AS_DEFINED} >> ${DOXFILE}
			COMMAND echo PREDEFINED=_DOXYGEN=1 __DOXYGEN__=1 ${DOXY_PREDEFINED} >> ${DOXFILE}
			COMMAND echo INCLUDE_PATH=${${INTERFACE_FILES}} ${INCLUDE_PATH} >> ${DOXFILE}
			COMMAND echo INCLUDE_FILE_PATTERNS= >> ${DOXFILE}
			COMMAND echo EXCLUDE_PATTERNS= >> ${DOXFILE}
			COMMAND echo DOT_PATH=${DOT_DIR} >> ${DOXFILE}
			COMMAND ${CAT_EXEC} "${DOX_TEMPLATE}" >> ${DOXFILE}
			# Call doxygen on this file:
			COMMAND ${DOXYGEN} ${DOXFILE} > ${CMAKE_CURRENT_BINARY_DIR}/doxygen.log 2>&1
			# COMMAND ${DOXYGEN} ${DOXFILE}
			COMMAND echo "Generating lua reflection..."
			# COMMAND cd ${SGT_PATH} && ${LUA} -e "project='${MOD_NAME}'; xml_path='${CMAKE_CURRENT_BINARY_DIR}/xml/'; sgt_path='${SGT_DIR}/';" ${CMAKE_CURRENT_SOURCE_DIR}/../generate_reflection.lua
			COMMAND echo "project=\'${TARGET_NAME}\'" > ${CFGFILE}
			COMMAND echo -n "xml_path=\'" >> ${CFGFILE}
			COMMAND echo -n	`cygpath -w "${CMAKE_CURRENT_BINARY_DIR}/xml/"` >> ${CFGFILE}
			COMMAND echo "\'" >> ${CFGFILE}
			COMMAND echo -n "sgt_path=\'" >> ${CFGFILE}
			COMMAND echo -n ${SGT_DIR}/ >> ${CFGFILE}
			COMMAND echo "\'"  >> ${CFGFILE}
			COMMAND echo -n "dofile\(\'" >> ${CFGFILE}
			COMMAND echo -n `cygpath -w "${CMAKE_CURRENT_SOURCE_DIR}/../generate_reflection.lua"`  >> ${CFGFILE}
			COMMAND echo "\'\)" >> ${CFGFILE}
			COMMAND sed -i 's/\\/\//g' ${CFGFILE}
			COMMAND cd ${SGT_PATH} && ${LUA} `cygpath -w "${CMAKE_CURRENT_BINARY_DIR}/${CFGFILE}"`
			COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt # touch the calling file.
			COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/../CMakeLists.txt # touch the calling file.
			COMMAND echo "Reflection generation done."
		)
	ENDIF()
	
	ADD_DEPENDENCIES(${STUB_NAME} ${TARGET_NAME}_gen)
	
ENDMACRO(GENERATE_REFLECTION)

MACRO(ADD_LUNA_FILES FILE_LIST)
    # Do nothing here, this call is deprecated.
	MESSAGE(WARNING "ADD_LUNA_FILES is deprecated and not needed anymore. just link to sgtCore instead.")
	# INCLUDE_DIRECTORIES(${SGT_DIR}/sources/sgtLuna/include)
    # LIST(APPEND ${FILE_LIST} ${SGT_DIR}/sources/sgtLuna/include/luna/luna.h ${SGT_DIR}/sources/sgtLuna/src/luna.cpp)
ENDMACRO(ADD_LUNA_FILES)

MACRO(GENERATE_DOCUMENTATION LIB_NAME FOLDER)
    SET(DOXFILE "doxyfile")
    STRING(REPLACE "/" "\\" DOX_TEMPLATE  "${VBSSim_SOURCE_DIR}/scripts/template_doxyfile")
    STRING(REPLACE "/" "\\" VBSSim_SOURCE_DIR_WIN  "${VBSSim_SOURCE_DIR}")
    STRING(REPLACE "/" "\\" BINARY_DIR_WIN  "${CMAKE_CURRENT_BINARY_DIR}")
    
    ADD_CUSTOM_COMMAND(
        TARGET ${TARGET_NAME}
        POST_BUILD
        COMMAND echo "Generating doxygen documentation..."
        COMMAND echo INPUT=${VBSSim_SOURCE_DIR}/sources/${FOLDER}/ > ${DOXFILE}
        COMMAND echo PROJECT_NAME="${LIB_NAME} Library" >> ${DOXFILE}
        COMMAND echo PROJECT_NUMBER=${PROJECT_VERSION} >> ${DOXFILE}
        COMMAND echo CHM_FILE=${LIB_NAME}.chm >> ${DOXFILE}
        #COMMAND echo OUTPUT_DIRECTORY=${VBSSim_SOURCE_DIR}/software/docs/${LIB_NAME}/ >> ${DOXFILE}
        COMMAND echo PREDEFINED="_DOXYGEN=1 __DOXYGEN__=1" >> ${DOXFILE}
        COMMAND echo INCLUDE_PATH= >> ${DOXFILE}
        COMMAND echo EXCLUDE_PATTERNS= >> ${DOXFILE}
        COMMAND echo DOT_PATH=${DOT_DIR} >> ${DOXFILE}
        COMMAND echo HHC_LOCATION=${HHC_DIR}/hhc.exe >> ${DOXFILE}
        COMMAND type "${DOX_TEMPLATE}" >> ${DOXFILE}
        
        # Call doxygen on this file:
        COMMAND ${DOXYGEN} ${DOXFILE}
        
        COMMAND move "${BINARY_DIR_WIN}\\html\\${LIB_NAME}.chm" "${VBSSim_SOURCE_DIR_WIN}\\software\\docs"
    )
ENDMACRO(GENERATE_DOCUMENTATION)

MACRO(ADD_FILES file_list regex)
    FILE(GLOB_RECURSE TEMP_FILES ${regex})
    LIST(APPEND ${file_list} ${TEMP_FILES})
ENDMACRO(ADD_FILES)

MACRO(REMOVE_FILES file_list regex)
    FILE(GLOB_RECURSE TEMP_FILES ${regex})
    LIST(REMOVE_ITEM ${file_list} ${TEMP_FILES})
ENDMACRO(REMOVE_FILES)

MACRO(COMPRESS_BINARY_TARGET THE_TARGET)
	IF(WIN32)
		# UPX compression only works for windows binaries.
		ADD_CUSTOM_COMMAND(
				TARGET ${THE_TARGET}
				POST_BUILD
				COMMAND echo "Compressing binary..."
				COMMAND ${UPX} --best "$<TARGET_FILE:${THE_TARGET}>"
			)		
	ENDIF()
ENDMACRO(COMPRESS_BINARY_TARGET)


MACRO(COMPRESS_BINARY)
	COMPRESS_BINARY_TARGET(${TARGET_NAME})
ENDMACRO(COMPRESS_BINARY)

MACRO(BUILD_LUA_PLUGIN)
	ADD_LIBRARY (${TARGET_NAME} SHARED 
		${SOURCE_FILES})

	TARGET_LINK_LIBRARIES(${TARGET_NAME} ${LIBS} ${LUA_LIBS})  

	SET_TARGET_PROPERTIES(${TARGET_NAME} PROPERTIES 
		PREFIX ""
		SUFFIX ".sgp")
		
	INSTALL(TARGETS ${TARGET_NAME}
		RUNTIME DESTINATION ${TARGET_DIR}
		LIBRARY DESTINATION ${TARGET_DIR})

	COMPRESS_BINARY()
ENDMACRO(BUILD_LUA_PLUGIN)
