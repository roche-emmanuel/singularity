#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>


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
class LunaType< 29676225 > {
public:
	typedef osgGA::GUIEventHandler type;
	
};


#endif

