#ifndef _LUNA_TYPES_H_
#define _LUNA_TYPES_H_

#include <plug_common.h>

#include <fann_cpp.h>

// Class: FANN::training_data
template<>
class LunaTraits< FANN::training_data > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static FANN::training_data* _bind_ctor(lua_State *L);
	static void _bind_dtor(FANN::training_data* obj);
	typedef FANN::training_data parent_t;
	typedef FANN::training_data base_t;
	static luna_ConverterType converters[];
};

// Class: FANN::neural_net
template<>
class LunaTraits< FANN::neural_net > {
public:
	static const char className[];
	static const char fullName[];
	static const char moduleName[];
	static const char* parents[];
	static const int uniqueIDs[];
	static const int hash;
	static luna_RegType methods[];
	static luna_RegEnumType enumValues[];
	static FANN::neural_net* _bind_ctor(lua_State *L);
	static void _bind_dtor(FANN::neural_net* obj);
	typedef FANN::neural_net parent_t;
	typedef FANN::neural_net base_t;
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

template<>
class LunaType< 45173508 > {
public:
	typedef FANN::training_data type;
	
};

template<>
class LunaType< 71064061 > {
public:
	typedef FANN::neural_net type;
	
};

template<>
class LunaType< 3625364 > {
public:
	typedef void type;
	
};


#endif

