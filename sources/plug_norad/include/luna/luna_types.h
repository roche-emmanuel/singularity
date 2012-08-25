#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>




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
class LunaType< 50169651 > {
public:
    typedef osg::Referenced type;
    
};


#endif

