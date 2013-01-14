#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <Box2DUpdater.h>

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
class LunaTraits< Box2DUpdater > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static Box2DUpdater* _bind_ctor(lua_State *L);
	static void _bind_dtor(Box2DUpdater* obj);
	typedef osg::Referenced parent_t;
	typedef Box2DUpdater base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::Vec2f > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Vec2f* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Vec2f* obj);
	typedef osg::Vec2f parent_t;
	typedef osg::Vec2f base_t;
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

template<>
class LunaTraits< osg::Node > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::Node* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::Node* obj);
	typedef osg::Referenced parent_t;
	typedef osg::Node base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< osg::MatrixTransform > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::MatrixTransform* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::MatrixTransform* obj);
	typedef osg::Referenced parent_t;
	typedef osg::MatrixTransform base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaType< 29676225 > {
public:
	typedef osgGA::GUIEventHandler type;
	
};

template<>
class LunaType< 92303173 > {
public:
	typedef osg::Vec2f type;
	
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
class LunaType< 80168245 > {
public:
	typedef osg::Node type;
	
};

template<>
class LunaType< 11455287 > {
public:
	typedef osg::MatrixTransform type;
	
};


#endif

