#! /bin/sh

. `pwd`/setup.sh

. $DEVTOOLS_DIR/shflags

FLAGS="" 
PREFIX=""

USE_CROSS_FLAGS=1
REMOVE_INSTALL_FOLDER=1
REMOVE_CONFIG_PREFIX=0
DO_CONFIGURE=1
PAUSE_AFTER_CONFIG=0
EXIT_ON_FAILED_MAKE=1
DO_MAKE_INSTALL=1
EXTRACT_SOURCE_PACKAGE=1

# generate a temporary file an return its name.
generateTempFile()
{
	tmpname=$1
	if [ "$tmpname" == "" ]; then
		tmpname="temp_file"
	fi
	tmpfile=$(mktemp /tmp/$tmpname.XXXXXXXXXX)
	#echo "Generating temp file $tmpfile"
	echo "$tmpfile"
}

# Enable or disable the ln copy hack
# arg1= hack enable status (0 or 1)
enableLnHack()
{
    if [ $1 -eq 1 ]; then
        if [ -e /bin/ln.old ]; then
            echo "Ln hack already enabled."
        else
            sudo mv /bin/ln /bin/ln.old
            sudo ln.old -s $SCRIPTS_DIR/no_ln.sh /bin/ln
        fi
    else
        if [ -e /bin/ln.old ]; then
            sudo rm /bin/ln
            sudo mv /bin/ln.old /bin/ln
        else
            echo "Ln hack already disabled."
        fi
    fi
}

# reset the exported variables before finishing a build session:
resetVars()
{
	export PATH=$TMPPATH
	# disable the ln hack:
	enableLnHack 0
	
    unset CROSS
	unset POSTCROSS
	unset EXE
	unset FLAVOR
    
	unset CFLAGS
	unset CPPFLAGS
	unset CXXFLAGS
	unset LDFLAGS

	unset DLLEXT
	unset LIBEXT
	unset EXE
    
    unset PKG_CONFIG_PATH
    
}

# function to check if an error occured during the previous command call.
# arg1 = Message to display in case of error.
checkError()
{
    if [ ! $? -eq 0 ]; then
        echo $1
        read key
        exit 1
    fi
}

# extract a package given a complete file name without extension
# arg1 = filename
extractFile()
{
    filename=$1

    if [ -f ${filename}.tar.gz ]; then
        tar xvzf ${filename}.tar.gz
    elif [ -f ${filename}.tar.bz2 ]; then
        tar xvjf ${filename}.tar.bz2
    elif [ -f ${filename}.tgz ]; then
        tar xvzf ${filename}.tgz
    elif [ -f ${filename}.zip ]; then
        unzip ${filename}.zip
    fi

    checkError "Cannot extract package $filename"
}

# Method a apply a patch on a given folder if the path exists.
applyPatch()
{
	PATCH_NAME=${PATCH_NAME:-"$PACKAGENAME"}
    if [ -e "$SCRIPTS_DIR/patches/$PATCH_NAME.patch" ]; then
        patch -Np1 --ignore-whitespace -i $SCRIPTS_DIR/patches/$PATCH_NAME.patch
    fi
}

# Generate an import def file from a win32 dll file:
# arg1= fullpath to dll file
generateDef()
{
    dllfile=$1
    echo "Generating def file for $dllfile."
    deffile=`echo $dllfile | sed 's/\.dll$/\.def/'` 
    echo "Writing def file $deffile."
    $PEXPORTS -v $dllfile | sed 's/^_//' >  $deffile 
}

# Extract a package given by name
extractPackage()
{
    package=$1
    mkdir -p $BUILD_DIR
    cd $BUILD_DIR
  
    rm -Rf $package/
    extractFile $DEPS_DIR/sources/$package
    cd $package
    
    # apply the patch on the source package:
    applyPatch
}

# Reset the compilation flags
resetFlags()
{
    FLAGS=""
}

# Add a compilation flag to the existing flags
# arg1= flag to add to the list
addFlag()
{
	FLAGS="$FLAGS $1"
}

# Add a compilation flag only when building for a given flavor
# arg1= flavor
# arg1= flag to add
addFlavorFlag()
{
    if [ "$flavor" == "$1" ]; then
        addFlag "$2"
    fi
}

# Add a pkc_config path to find packages:
# arg1= path to add
addPkgPath()
{
    export PKG_CONFIG_PATH="$PKG_CONFIG_PATH $1"
}

# Add a pkg_config path from inside the dependency folder
# arg1= path to add
addDepPkgPath()
{
    addPkgPath "$DEPS_DIR/$flavor/$1/lib/pkgconfig"
}

# Display the configure help for a given dependency package
# arg1= package name
displayConfigHelp()
{
	extractPackage $PACKAGENAME

	if [ "$PRECONFIG_CMD" != "" ]; then
		echo "Executing pre-config command: $PRECONFIG_CMD"
		eval $PRECONFIG_CMD
		checkError "Error during the preconfig phase. Press key to continue."
	fi
	
	if [ -e configure ]; then
		./configure --help
	else
		echo "No configure file found."
	fi
}

cleanBuild() {
    CLEAN=${CLEAN:-1}
    if [ $CLEAN -eq 1 ]; then
        # clean the build folder:
        echo "Cleanning build folder..."
        rm -Rf $BUILD_DIR/$PACKAGENAME*
    fi
}

# Method to build a package with configure and make
buildStdPackage()
{
    # Special case were we only display the configuration help:
    if [ "$flavor" == "" ]; then
        displayConfigHelp
        exit 0
    fi
    
	extractPackage $PACKAGENAME
	
    PREFIX=${PREFIX:-$DEPS_DIR/$flavor/$PACKAGENAME}
    CFG_DIR=${CFG_DIR:-"$BUILD_DIR/${PACKAGENAME}${SUB_DIR}"}
    COMPILE_DIR=${COMPILE_DIR:-$CFG_DIR}
    CPU_CORES=${CPU_CORES:-"-j 8"}

	export FLAVOR="$flavor"
	export EXE=.exe
	export DLLEXT=.dll
	export LIBEXT=.lib
	export TMPPATH=$PATH
    
	if [ "$flavor" == "mingw64" ]; then
		echo Using mingw64 cross-compiler
        if ((USE_CROSS_FLAGS)); then
            addFlag "--build=$BUILD_PLATFORM --host=$HOST_MINGW64"
		fi
        export CROSS="$HOST_MINGW64-"
		export POSTCROSS="-$HOST_MINGW64"
		export PATH=$PATH_MINGW64:$PATH
	elif [ "$flavor" == "mingw32" ]; then
		echo Using mingw32 cross-compiler
		if ((USE_CROSS_FLAGS)); then
            addFlag "--build=$BUILD_PLATFORM --host=$HOST_MINGW32"
		fi
        export CROSS="$HOST_MINGW32-"	
		export POSTCROSS="-$HOST_MINGW32"	
		export PATH=$PATH_MINGW32:$PATH
	else
		# building linux32 or linux64
		export CROSS=
		export POSTCROSS=
		export EXE=
		export DLLEXT=.so
		export LIBEXT=.a
        export CFLAGS="-fPIC $CFLAGS"
        export CXXFLAGS="-fPIC $CXXFLAGS"
	fi
    
	enableLnHack 1
	
	if [ $REMOVE_INSTALL_FOLDER -eq 1 ]; then
		rm -Rf $PREFIX
	fi
	
    mkdir -p $COMPILE_DIR
    cd $COMPILE_DIR
	
	if [ "$PRECONFIG_CMD" != "" ]; then
		echo Executing pre-config command: $PRECONFIG_CMD
		eval $PRECONFIG_CMD
		checkError "Error during the preconfig phase. Press key to continue."
	fi
	
	confprefix="--prefix=$PREFIX"
	if ((REMOVE_CONFIG_PREFIX)); then
		confprefix=""
	fi
	
	if [ -e "$CFG_DIR/configure" -a $DO_CONFIGURE -eq 1 ]; then
		echo "Config flags: $FLAGS"

        cd $COMPILE_DIR
        ./configure $confprefix $FLAGS
		
		if [ ! $? -eq 0 ]; then
			echo Error during the configuration phase.
			echo -n "Print configure help ?  (yes/no)[yes]: "
			read answer
			
			if [ "$answer" == "" ]; then
			  answer="yes";  
			fi
			
			if [ $answer == "yes" ]; then
				$CFG_DIR/configure --help
			fi
			
			export PATH=$TMPPATH
			resetVars
			exit 1;
		fi
	fi
	
	if ((PAUSE_AFTER_CONFIG)); then
		echo Configuration done. Press a key to continue...
		read key
	fi

	if [ "$PREMAKE_CMD" != "" ]; then
		echo Executing pre-make command: $PREMAKE_CMD
		eval $PREMAKE_CMD
		checkError "Error during the premake phase. Press key to continue."
	fi
	
	if [ "$MAKE_CMD" != "" ]; then
		eval $MAKE_CMD
	else
		make $CPU_CORES $MAKE_FLAGS
	fi
	
	if ((EXIT_ON_FAILED_MAKE)); then
		checkError "Error during the build phase. Press key to continue."
	fi

	if [ "$POSTMAKE_CMD" != "" ]; then
		echo Executing post-make command: $POSTMAKE_CMD
		eval $POSTMAKE_CMD
		checkError "Error during the postmake phase. Press key to continue."
	fi
	
	if ((DO_MAKE_INSTALL)); then
		if [ "$INSTALL_CMD" != "" ]; then
			eval $INSTALL_CMD
		else
			make install
		fi

		checkError "Error during the install phase. Press key to continue."
	fi
	
	if [ "$POSTINSTALL_CMD" != "" ]; then
		echo Executing post-install command: $POSTMAKE_CMD
		eval $POSTINSTALL_CMD
		checkError "Error during the postinstall phase. Press key to continue."
	fi
	
    resetVars
	echo "Done building $PACKAGENAME for $flavor"
    
    cleanBuild
}

# setup the toolchain to use for cmake compilations depending on flavor
setupToolchain()
{
    addFlavorFlag linux32 -DCMAKE_SYSTEM_NAME=Linux
    addFlavorFlag linux64 -DCMAKE_SYSTEM_NAME=Linux
    addFlavorFlag mingw32 -DCMAKE_SYSTEM_NAME=Windows
    addFlavorFlag mingw64 -DCMAKE_SYSTEM_NAME=Windows
    
    addFlag -DDEPS_DIR=$DEPS_DIR
    
    addFlavorFlag linux32 "-DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++"
    addFlavorFlag linux64 "-DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++"
    addFlavorFlag mingw32 "-DCMAKE_C_COMPILER=$PATH_MINGW32/${HOST_MINGW32}-gcc -DCMAKE_CXX_COMPILER=$PATH_MINGW32/${HOST_MINGW32}-g++"
    addFlavorFlag mingw64 "-DCMAKE_C_COMPILER=$PATH_MINGW64/${HOST_MINGW64}-gcc -DCMAKE_CXX_COMPILER=$PATH_MINGW64/${HOST_MINGW64}-g++"
    
    addFlavorFlag mingw32 "-DCMAKE_RC_COMPILER=$PATH_MINGW32/${HOST_MINGW32}-windres"
    addFlavorFlag mingw64 "-DCMAKE_RC_COMPILER=$PATH_MINGW64/${HOST_MINGW64}-windres"
    
    addFlag -DFLAVOR=$flavor
    addFlag -DPLATFORM=$flavor
    addFlag -DCMAKE_CROSSCOMPILING=TRUE
    
    addFlavorFlag mingw32 -DCMAKE_FIND_ROOT_PATH_MODE_PROGRAM=NEVER
    addFlavorFlag mingw32 -DCMAKE_FIND_ROOT_PATH_MODE_LIBRARY=ONLY
    addFlavorFlag mingw32 -DCMAKE_FIND_ROOT_PATH_MODE_INCLUDE=ONLY
    addFlavorFlag mingw32 -DCROSS_MINGW32=TRUE

    addFlavorFlag mingw64 -DCMAKE_FIND_ROOT_PATH_MODE_PROGRAM=NEVER
    addFlavorFlag mingw64 -DCMAKE_FIND_ROOT_PATH_MODE_LIBRARY=ONLY
    addFlavorFlag mingw64 -DCMAKE_FIND_ROOT_PATH_MODE_INCLUDE=ONLY
    addFlavorFlag mingw64 -DCROSS_MINGW64=TRUE
    
    addFlavorFlag linux32 -DCMAKE_FIND_ROOT_PATH_MODE_PROGRAM=NEVER
    addFlavorFlag linux32 -DCMAKE_FIND_ROOT_PATH_MODE_LIBRARY=ONLY
    addFlavorFlag linux32 -DCMAKE_FIND_ROOT_PATH_MODE_INCLUDE=ONLY
    addFlavorFlag linux32 -DCROSS_LINUX32=TRUE
 
    addFlavorFlag linux64 -DCMAKE_FIND_ROOT_PATH_MODE_PROGRAM=NEVER
    addFlavorFlag linux64 -DCMAKE_FIND_ROOT_PATH_MODE_LIBRARY=ONLY
    addFlavorFlag linux64 -DCMAKE_FIND_ROOT_PATH_MODE_INCLUDE=ONLY
    addFlavorFlag linux64 -DCROSS_LINUX64=TRUE
    
    addFlag -DCMAKE_FIND_ROOT_PATH="/dummy/path"
}


configureCMakePackage()
{
    # set the cmake toolchain:
    # addFlag -DCMAKE_TOOLCHAIN_FILE=${SCRIPTS_DIR}/toolchains/$flavor.cmake
    setupToolchain    
    
    if [ $EXTRACT_SOURCE_PACKAGE -eq 1 ]; then
        extractPackage $PACKAGENAME
    fi
    
    BUILD_MODE=${BUILD_MODE:-Release}
	
	INSTALL_FOLDER=${INSTALL_FOLDER:-$DEPS_DIR/$flavor/$PACKAGENAME}
	
	folder=$BUILD_DIR/$PACKAGENAME-$flavor-$BUILD_MODE

	rm -Rf $folder
	mkdir -p $folder
	cd $folder
    
	SOURCE_FOLDER=${SOURCE_FOLDER:-$BUILD_DIR/$PACKAGENAME}
    
	addFlag -DCMAKE_INSTALL_PREFIX=$INSTALL_FOLDER
	addFlag -DCMAKE_BUILD_TYPE=$BUILD_MODE
	
    addFlavorFlag mingw32 -DHOST_MINGW=$HOST_MINGW32
    addFlavorFlag mingw64 -DHOST_MINGW=$HOST_MINGW64
    
    VERBOSE=${VERBOSE:-0}
    
    if [ $VERBOSE -eq 1 ]; then
        addFlag -DCMAKE_VERBOSE_MAKEFILE=ON
    fi
    
    if [ $1 -eq 1 ]; then
        ccmake -Wno-dev $SOURCE_FOLDER $FLAGS
	else
        cmake -Wno-dev $SOURCE_FOLDER $FLAGS
    fi
    
	echo "Done configuring $PACKAGENAME for $flavor"
}

makeCmakePackage()
{
    BUILD_MODE=${BUILD_MODE:-Release}
	
	INSTALL_FOLDER=${INSTALL_FOLDER:-$DEPS_DIR/$flavor/$PACKAGENAME}
	
	folder=$BUILD_DIR/$PACKAGENAME-$flavor-$BUILD_MODE
	
	cd $folder
    
	# first remove the existing install folder if any
    if [ $REMOVE_INSTALL_FOLDER -eq 1 ]; then
        rm -Rf $INSTALL_FOLDER
	fi
    
	make -j 8
	make install
	
    # mv lib64 folder if applicable:
	if [ -d $INSTALL_FOLDER/lib64 ]; then
		# rename the library folder:
		mv $INSTALL_FOLDER/lib64 $INSTALL_FOLDER/lib
	fi

	echo "Done building $PACKAGENAME for $flavor"   
    
    cleanBuild
}

buildCmakePackage()
{
    action=$1
    SHOWGUI=${SHOWGUI:-0}
    
    if [ "$flavor" == "" ]; then
        configureCMakePackage 1
    elif [ "$action" == "makeonly" ]; then
        makeCmakePackage     
    else
        configureCMakePackage $SHOWGUI # only display the interface if requested.
        makeCmakePackage 
    fi
}
