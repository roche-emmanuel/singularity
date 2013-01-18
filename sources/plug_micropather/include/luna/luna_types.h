#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <micropather.h>

// Class: micropather::StateCost
template<>
class LunaTraits< micropather::StateCost > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static micropather::StateCost* _bind_ctor(lua_State *L);
	static void _bind_dtor(micropather::StateCost* obj);
	typedef micropather::StateCost parent_t;
	typedef micropather::StateCost base_t;
	static luna_ConverterType converters[];
};

// Class: micropather::Graph
template<>
class LunaTraits< micropather::Graph > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static micropather::Graph* _bind_ctor(lua_State *L);
	static void _bind_dtor(micropather::Graph* obj);
	typedef micropather::Graph parent_t;
	typedef micropather::Graph base_t;
	static luna_ConverterType converters[];
};

// Class: micropather::NodeCost
template<>
class LunaTraits< micropather::NodeCost > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static micropather::NodeCost* _bind_ctor(lua_State *L);
	static void _bind_dtor(micropather::NodeCost* obj);
	typedef micropather::NodeCost parent_t;
	typedef micropather::NodeCost base_t;
	static luna_ConverterType converters[];
};

// Class: micropather::PathNode
template<>
class LunaTraits< micropather::PathNode > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static micropather::PathNode* _bind_ctor(lua_State *L);
	static void _bind_dtor(micropather::PathNode* obj);
	typedef micropather::PathNode parent_t;
	typedef micropather::PathNode base_t;
	static luna_ConverterType converters[];
};

// Class: micropather::PathNodePool
template<>
class LunaTraits< micropather::PathNodePool > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static micropather::PathNodePool* _bind_ctor(lua_State *L);
	static void _bind_dtor(micropather::PathNodePool* obj);
	typedef micropather::PathNodePool parent_t;
	typedef micropather::PathNodePool base_t;
	static luna_ConverterType converters[];
};

// Class: micropather::MicroPather
template<>
class LunaTraits< micropather::MicroPather > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static micropather::MicroPather* _bind_ctor(lua_State *L);
	static void _bind_dtor(micropather::MicroPather* obj);
	typedef micropather::MicroPather parent_t;
	typedef micropather::MicroPather base_t;
	static luna_ConverterType converters[];
};

// Class: osg::Vec2f
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


// Mapped type: std::vector< micropather::StateCost >
template<>
class LunaTraits< std::vector< micropather::StateCost > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< micropather::StateCost >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< micropather::StateCost >* obj);
	typedef std::vector< micropather::StateCost > parent_t;
	typedef std::vector< micropather::StateCost > base_t;
	static luna_ConverterType converters[];
};

// Mapped type: std::vector< void * >
template<>
class LunaTraits< std::vector< void * > > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static std::vector< void * >* _bind_ctor(lua_State *L);
	static void _bind_dtor(std::vector< void * >* obj);
	typedef std::vector< void * > parent_t;
	typedef std::vector< void * > base_t;
	static luna_ConverterType converters[];
};


template<>
class LunaType< 76995717 > {
public:
	typedef micropather::StateCost type;
	
};

template<>
class LunaType< 78970550 > {
public:
	typedef micropather::Graph type;
	
};

template<>
class LunaType< 11696051 > {
public:
	typedef micropather::NodeCost type;
	
};

template<>
class LunaType< 73028343 > {
public:
	typedef micropather::PathNode type;
	
};

template<>
class LunaType< 95991896 > {
public:
	typedef micropather::PathNodePool type;
	
};

template<>
class LunaType< 31476824 > {
public:
	typedef micropather::MicroPather type;
	
};

template<>
class LunaType< 92303173 > {
public:
	typedef osg::Vec2f type;
	
};

template<>
class LunaType< 74098665 > {
public:
	typedef std::vector< micropather::StateCost > type;
	
};

template<>
class LunaType< 87530881 > {
public:
	typedef std::vector< void * > type;
	
};


#endif

