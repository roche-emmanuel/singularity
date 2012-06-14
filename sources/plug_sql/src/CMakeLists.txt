SET(TARGET_DIR "bin/${FLAVOR}/modules/luasql")

INCLUDE_DIRECTORIES(../include)

INCLUDE_DIRECTORIES(${LUA_INC_DIR})
LINK_DIRECTORIES (${LUA_LIB_DIR})

INCLUDE_DIRECTORIES(${MYSQL_INC_DIR})
LINK_DIRECTORIES (${MYSQL_LIB_DIR})

INCLUDE_DIRECTORIES(${FIREBIRD_INC_DIR})
LINK_DIRECTORIES (${FIREBIRD_LIB_DIR})

ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE)

# sqlite3 plugin
SET(TARGET_NAME "sqlite3")

SET(SOURCE_FILES sqlite3.c 
	luasql.c
	ls_sqlite3.c	
	sqlite3.def
	../include/sqlite3.h
	../include/sqlite3ext.h
	../include/luasql.h)
SET(LIBS )

BUILD_LUA_PLUGIN()

# mysql plugin
SET(TARGET_NAME "mysql")

SET(SOURCE_FILES luasql.c
	ls_mysql.c	
	mysql.def
	../include/luasql.h)
SET(LIBS ${MYSQL_LIBS})

BUILD_LUA_PLUGIN()

#firebird plugin
SET(TARGET_NAME "firebird")

SET(SOURCE_FILES luasql.c
	ls_firebird.c	
	firebird.def
	../include/luasql.h)
SET(LIBS ${FIREBIRD_LIBS})

BUILD_LUA_PLUGIN()

