#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <KinectHandler.h>
#include <KinectDataDrawer.h>

// Class: osgGA::GUIEventHandler
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

// Class: KinectHandler
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

// Class: KinectDataDrawer
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

// Class: NUI_IMAGE_FRAME
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

// Class: NUI_SKELETON_DATA
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



// Referenced external: osg::Referenced
template<>
class LunaTraits< osg::Referenced > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Referenced* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Referenced* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Referenced base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osgGA::GUIEventAdapter
template<>
class LunaTraits< osgGA::GUIEventAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIEventAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIEventAdapter* obj);
	typedef osg::Referenced parent_t;
	typedef osgGA::GUIEventAdapter base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osgGA::GUIActionAdapter
template<>
class LunaTraits< osgGA::GUIActionAdapter > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osgGA::GUIActionAdapter* _bind_ctor(lua_State *L);
	static void _bind_dtor(osgGA::GUIActionAdapter* obj);
	typedef osgGA::GUIActionAdapter parent_t;
	typedef osgGA::GUIActionAdapter base_t;
	static luna_ConverterType converters[];
};

// Referenced external: void
template<>
class LunaTraits< void > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static void* _bind_ctor(lua_State *L);
	static void _bind_dtor(void* obj);
	typedef void parent_t;
	typedef void base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Image
template<>
class LunaTraits< osg::Image > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Image* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Image* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Image base_t;
	static luna_ConverterType converters[];
};

// Referenced external: osg::Geometry
template<>
class LunaTraits< osg::Geometry > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Geometry* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Geometry* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Geometry base_t;
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

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 91398620 > {
public:
	typedef osgGA::GUIEventAdapter type;
	
};

template<>
class LunaType< 85302998 > {
public:
	typedef osgGA::GUIActionAdapter type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};

template<>
class LunaType< 80535448 > {
public:
	typedef osg::Image type;
	
};

template<>
class LunaType< 12480632 > {
public:
	typedef osg::Geometry type;
	
};


#endif

