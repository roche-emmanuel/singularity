#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <plug_extensions.h>

template<>
class LunaTraits< osg::Drawable > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Drawable::UpdateCallback > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Drawable::UpdateCallback* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Drawable::UpdateCallback* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Drawable::UpdateCallback base_t;
	static luna_ConverterType converters[];
};

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

template<>
class LunaTraits< osg::Object > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Object* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Object* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Object base_t;
	static luna_ConverterType converters[];
};

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
class LunaTraits< spark::GroupCustomUpdate > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static spark::GroupCustomUpdate* _bind_ctor(lua_State *L);
	static void _bind_dtor(spark::GroupCustomUpdate* obj);
	typedef spark::GroupCustomUpdate parent_t;
	typedef spark::GroupCustomUpdate base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< tuio::TUIOClientHandler > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static tuio::TUIOClientHandler* _bind_ctor(lua_State *L);
	static void _bind_dtor(tuio::TUIOClientHandler* obj);
	typedef osg::Referenced parent_t;
	typedef tuio::TUIOClientHandler base_t;
	static luna_ConverterType converters[];
};


template<>
class LunaTraits< SPK::Oriented3DRendererInterface > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Oriented3DRendererInterface* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Oriented3DRendererInterface* obj);
	typedef SPK::Oriented3DRendererInterface parent_t;
	typedef SPK::Oriented3DRendererInterface base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Group > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Group* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Group* obj);
	typedef SPK::Group parent_t;
	typedef SPK::Group base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< SPK::Vector3D > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static SPK::Vector3D* _bind_ctor(lua_State *L);
	static void _bind_dtor(SPK::Vector3D* obj);
	typedef SPK::Vector3D parent_t;
	typedef SPK::Vector3D base_t;
	static luna_ConverterType converters[];
};


template<>
class LunaType< 20484188 > {
public:
	typedef osg::Drawable type;
	
};

template<>
class LunaType< 5213827 > {
public:
	typedef osg::Drawable::UpdateCallback type;
	
};

template<>
class LunaType< 50169651 > {
public:
	typedef osg::Referenced type;
	
};

template<>
class LunaType< 58481028 > {
public:
	typedef osg::Object type;
	
};

template<>
class LunaType< 29676225 > {
public:
	typedef osgGA::GUIEventHandler type;
	
};

template<>
class LunaType< 7361390 > {
public:
	typedef spark::GroupCustomUpdate type;
	
};

template<>
class LunaType< 95637678 > {
public:
	typedef SPK::Oriented3DRendererInterface type;
	
};

template<>
class LunaType< 36788392 > {
public:
	typedef SPK::Group type;
	
};

template<>
class LunaType< 70092749 > {
public:
	typedef SPK::Vector3D type;
	
};


#endif

