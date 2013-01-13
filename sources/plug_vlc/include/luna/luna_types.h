#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>


template<>
class LunaTraits< osg::ImageStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static osg::ImageStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(osg::ImageStream* obj);
	typedef osg::Referenced parent_t;
	typedef osg::ImageStream base_t;
	static luna_ConverterType converters[];
};

template<>
class LunaTraits< vlc::VLCImageStream > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static vlc::VLCImageStream* _bind_ctor(lua_State *L);
	static void _bind_dtor(vlc::VLCImageStream* obj);
	typedef osg::Referenced parent_t;
	typedef vlc::VLCImageStream base_t;
	static luna_ConverterType converters[];
};



template<>
class LunaType< 46984585 > {
public:
	typedef osg::ImageStream type;
	
};


#endif

