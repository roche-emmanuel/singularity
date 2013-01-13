#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <KinectHandler.h>
#include <KinectDataDrawer.h>

template<>
class LunaTraits< osgGA::GUIEventHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventHandler* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::GUIEventHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< KinectHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static KinectHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(KinectHandler* obj);
	typedef osg::Referenced parent_t;
	typedef KinectHandler base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< KinectDataDrawer > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static KinectDataDrawer* _bind_ctor(lua_State *L);
	static void _bind_dtor(KinectDataDrawer* obj);
	typedef osg::Referenced parent_t;
	typedef KinectDataDrawer base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< NUI_IMAGE_FRAME > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static NUI_IMAGE_FRAME* _bind_ctor(lua_State *L);
	static void _bind_dtor(NUI_IMAGE_FRAME* obj);
	typedef NUI_IMAGE_FRAME parent_t;
	typedef NUI_IMAGE_FRAME base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< NUI_SKELETON_DATA > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static NUI_SKELETON_DATA* _bind_ctor(lua_State *L);
	static void _bind_dtor(NUI_SKELETON_DATA* obj);
	typedef NUI_SKELETON_DATA parent_t;
	typedef NUI_SKELETON_DATA base_t;
	static luna_ConverterType converters[];
};



template<>
class LunaType< 29676225 > {
public:
	typedef osgGA::GUIEventHandler type;
	
};

template<>
class LunaType< 23034412 > {
public:
	typedef NUI_IMAGE_FRAME type;
	
};

template<>
class LunaType< 47569100 > {
public:
	typedef NUI_SKELETON_DATA type;
	
};


#endif

