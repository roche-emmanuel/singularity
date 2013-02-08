
#include "sgtCommon.h"

// This module will contain only byte conversion methods and register them in lua:
#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( PLUG_LIBRARY_STATIC )
#    define PLUG_EXPORT
#  elif defined( PLUG_LIBRARY )
#    define PLUG_EXPORT   __declspec(dllexport)
#  else
#    define PLUG_EXPORT   __declspec(dllimport)
#  endif
#else
#  define PLUG_EXPORT
#endif

#include "lua.hpp"
#include <sstream>
#include <boost/cstdint.hpp>

enum Endian
{
	BigEndian,
	LittleEndian
};

inline Endian getCpuByteOrder()
{
	union {
		char big_endian_1[2];
		short is_it_really_1;
	} u;
	u.big_endian_1[0] = 0;
	u.big_endian_1[1] = 1;

	if (u.is_it_really_1 == 1)
		return BigEndian;
	else 
		return LittleEndian;
} 

inline void swapBytes( char* in, unsigned int size )
{
	char* start = in;
	char* end = start+size-1;
	while (start<end)
	{
		std::swap(*start++,*end--);
	}
}

template<typename T>
int numberToBytes(lua_State * L) {
	int top = lua_gettop(L);
	CHECK_RET(top>0,0,"Invalid top value"); // check top>0

	// retrieve the short value as an integer,
	T val = (T)lua_tonumber(L,1);
	int tsize = sizeof(T);

	// Retrieve the byte order if specified:
	int order = (top>1 && (lua_toboolean(L,2)!=0)) ? BigEndian : LittleEndian;
	if(getCpuByteOrder()!=order) {
		swapBytes((char*)&val,tsize);
	}

	// now write the value:
	std::ostringstream os;
	os.write((char*)&val,tsize);

	// now write this string back to lua:
	CHECK_EQ_RET(os.str().size(),tsize,0,"Invalid string size");

	lua_pushlstring(L,os.str().c_str(),tsize);
	return 1;
}

template <typename T>
int bytesToNumber(lua_State * L)
{
	int top = lua_gettop(L);
	CHECK_RET(top>0,0,"Invalid top value"); // check top>0

	size_t len;
	const char* ss = lua_tolstring(L,1,&len);
	int tsize = sizeof(T);

	// Ensure we have the correct size:
	CHECK_EQ_RET(len,tsize,0,"Invalid byte array size"); // string as the proper size:

	T val = 0;
	memcpy((void*)&val,ss,tsize);

	// Retrieve the byte order if specified:
	int order = (top>1 && (lua_toboolean(L,2)!=0)) ? BigEndian : LittleEndian;
	if(getCpuByteOrder()!=order) {
		swapBytes((char*)&val,tsize);
	}

	lua_pushnumber(L,val);
	return 1;
}

template <typename Tsrc, typename Tdest>
int convertInteger(lua_State* L)
{
	int top = lua_gettop(L);
	CHECK_RET(top>0,0,"Invalid top value"); // check top>0

	// retrieve the short value as an integer,
	Tsrc val = (Tsrc)lua_tointeger(L,1);
	Tdest result = (Tdest)val;
	lua_pushnumber(L,result);
	return 1;
}

template <typename T>
double readDouble(const char* ss, bool doswap) {
	T val = 0;
	memcpy((void*)&val,ss,sizeof(T));
	if(doswap) swapBytes((char*)&val,sizeof(T));
	return (double)val;
}

template <typename T>
void writeQValue(std::ostringstream& os, int qval, bool doswap) {
	T sval = (T)qval;
	if(doswap) swapBytes((char*)&sval,sizeof(T));
	os.write((char*)&sval,sizeof(T));
}

int bytesToQ(lua_State * L)
{
	int top = lua_gettop(L);
	CHECK_RET(top>2,0,"Invalid top value"); // check top>2

	int ii = lua_tointeger(L,2);
	int ff = lua_tointeger(L,3);

	size_t len;
	const char* ss = lua_tolstring(L,1,&len);

	// We should check that len=ii+ff or len=ii+ff+1
	CHECK_RET((len*8==(ii+ff) || len*8==(ii+ff+1)),0,"Invalid Q format in bytesToQ, len="<<len<<", i="<<ii<<", f="<<ff);

	double result = 0.0;

	// Retrieve the byte order if specified:
	int order = (top>3 && (lua_toboolean(L,4)!=0)) ? BigEndian : LittleEndian;
	bool doswap = getCpuByteOrder()!=order;

	switch(ii+ff) {
	case 7:
		result = readDouble<boost::int8_t>(ss,doswap); break;
	case 8:
		result = readDouble<boost::uint8_t>(ss,doswap); break;
	case 15:
		result = readDouble<boost::int16_t>(ss,doswap); break;
	case 16:
		result = readDouble<boost::uint16_t>(ss,doswap); break;
	case 31:
		result = readDouble<boost::int32_t>(ss,doswap); break;
	case 32:
		result = readDouble<boost::uint32_t>(ss,doswap); break;
	default:
		logERROR("Unhandled bytesToQ conversion: i="<<ii<<", f="<<ff);
		return 0;
	}

	// The factor is OK, apply the division:
	result = result*pow(2,-(double)ff);
	lua_pushnumber(L,result);
	return 1;
}

int qToBytes(lua_State* L)
{
	int top = lua_gettop(L);
	CHECK_RET(top>2,0,"Invalid top value"); // check top>2

	double val = lua_tonumber(L,1);
	int ii = lua_tointeger(L,2);
	int ff = lua_tointeger(L,3);

	int len = ii+ff;

	// convert the double val to a Q value:
	val *= pow(2,(double)ff);
	int qval = (int)val; // truncation conversion.

	std::ostringstream os;

	// Retrieve the byte order if specified:
	int order = (top>3 && (lua_toboolean(L,4)!=0)) ? BigEndian : LittleEndian;
	bool doswap = getCpuByteOrder()!=order;

	switch(ii+ff) {
	case 7:
		writeQValue<boost::int8_t>(os,qval,doswap); break;
	case 8:
		writeQValue<boost::uint8_t>(os,qval,doswap); break;
	case 15:
		writeQValue<boost::int16_t>(os,qval,doswap); break;
	case 16:
		writeQValue<boost::uint16_t>(os,qval,doswap); break;
	case 31:
		writeQValue<boost::int32_t>(os,qval,doswap); break;
	case 32:
		writeQValue<boost::uint32_t>(os,qval,doswap); break;
	default:
		logERROR("Unhandled qToBytes conversion: i="<<ii<<", f="<<ff);
		return 0;
	}

	lua_pushlstring(L,os.str().c_str(),os.str().size());
	return 1;
}

template <typename T>
double qValueToDouble(int qval) {
	T sval = (T)qval;
	return (double)sval;
}

template <typename T>
double doubleToQValue(int qval) {
	T sval = (T)qval;
	return (double)sval;
}

int qToDouble(lua_State * L)
{
	int top = lua_gettop(L);
	CHECK_RET(top>2,0,"Invalid top value"); // check top>2

	int qval = lua_tointeger(L,1);
	int ii = lua_tointeger(L,2);
	int ff = lua_tointeger(L,3);

	double val = 0.0;
	switch(ii+ff) {
	case 7: 
		val = qValueToDouble<boost::int8_t>(qval); break;
	case 8: 
		val = qValueToDouble<boost::uint8_t>(qval); break;
	case 15: 
		val = qValueToDouble<boost::int16_t>(qval); break;
	case 16: 
		val = qValueToDouble<boost::uint16_t>(qval); break;
	case 31: 
		val = qValueToDouble<boost::int32_t>(qval); break;
	case 32: 
		val = qValueToDouble<boost::uint32_t>(qval); break;
	default:
		logERROR("Unhandled qToDouble conversion: i="<<ii<<", f="<<ff);
		return 0;
	}

	val *= pow(2,-(double)ff);
	lua_pushnumber(L,val);
	return 1;
}

int doubleToQ(lua_State* L)
{
	int top = lua_gettop(L);
	CHECK_RET(top>2,0,"Invalid top value"); // check top>2

	double val = lua_tonumber(L,1);
	int ii = lua_tointeger(L,2);
	int ff = lua_tointeger(L,3);

	// convert the double val to a Q value:
	val *= pow(2,(double)ff);
	int qval = (int)val; // truncation conversion.

	switch(ii+ff) {
	case 7: 
		val = doubleToQValue<boost::int8_t>(qval); break;
	case 8: 
		val = doubleToQValue<boost::uint8_t>(qval); break;
	case 15: 
		val = doubleToQValue<boost::int16_t>(qval); break;
	case 16: 
		val = doubleToQValue<boost::uint16_t>(qval); break;
	case 31: 
		val = doubleToQValue<boost::int32_t>(qval); break;
	case 32: 
		val = doubleToQValue<boost::uint32_t>(qval); break;
	default:
		logERROR("Unhandled qToDouble conversion: i="<<ii<<", f="<<ff);
		return 0;
	}

	lua_pushnumber(L,val);
	return 1;
}

template <typename T>
int bitfieldToUInt(lua_State * L)
{
	//! This helper function is used to convert a short value into a byte array (ie string)
	// A bitfield is a table in lua with the MSB on index 1 and LSB at the end of the table.
	// here a table of size=16 is expected,
	// The allowed bit values are 0 or 1.

	int top = lua_gettop(L);
	CHECK_RET(top>1,0,"Invalid top value"); // check top>1

	int nbits = lua_tointeger(L,2);
	CHECK_RET(nbits<=sizeof(T)*8,0,"too many bits in field"); // check num bits
	
	// Ensure we have a valid table:
	CHECK_EQ_RET(lua_type(L,1),LUA_TTABLE,0,"Invalid lua table in bitfieldToUint with nbits="<<nbits);

	// Prepare the resulting int16 value:
	T result = 0;

	// table is in the stack at index 't'
	int t = -3;
	int count = 0;
	lua_pushnil(L);  // first key 
	while (lua_next(L, t) != 0) {
		// uses 'key' (at index -2) and 'value' (at index -1) 
		result += (lua_tointeger(L,-1))<<((nbits-1) - count++); 
		// removes 'value'; keeps 'key' for next iteration 
		lua_pop(L, 1);
	}

	lua_pop(L, 1); // Pop the last key

	// Ensure we got 16 bits:
	CHECK_EQ_RET(count,nbits,0,"Didn't get enough bits in bitfieldToUint with nbits="<<nbits);

	lua_pushnumber(L,(double)result);
	return 1;
}

template <typename T>
int uintToBitfield(lua_State* L)
{
	//! This helper function is used to convert a short value into a byte array (ie string)
	// Bouml preserved body begin 000B078A
	int top = lua_gettop(L);
	CHECK_RET(top>1,0,"Invalid top value"); // check top>1

	int val = lua_tointeger(L,-2);
	int nbits = lua_tointeger(L,-1);
	CHECK_RET(nbits<=sizeof(T)*8,0,"too many bits in field"); // check num bits

	// prepare the resulting lua table:
	lua_newtable(L); // push a new table on the stack.

	// iterate on the bits:
	for(int i=0;i<nbits;++i) {
		lua_pushinteger(L,i+1); // the lua table key.
		lua_pushinteger(L,(val & (1<<((nbits-1)-i))) != 0 ?  1 : 0);
		lua_settable(L,-3);
	}

	return 1;
}

typedef int (*lua_mfp)(lua_State *L);
typedef struct { const char *name; lua_mfp mfunc; } lua_RegType;


#ifdef __cplusplus
extern "C" {
#endif

int PLUG_EXPORT luaopen_byteconverter(lua_State* L) {
	// create a new table:
	lua_newtable(L);

	lua_RegType methods[] = {
		{"int8ToBytes",numberToBytes<boost::int8_t>},
		{"int16ToBytes",numberToBytes<boost::int16_t>},
		{"int32ToBytes",numberToBytes<boost::int32_t>},
		{"uint8ToBytes",numberToBytes<boost::uint8_t>},
		{"uint16ToBytes",numberToBytes<boost::uint16_t>},
		{"uint32ToBytes",numberToBytes<boost::uint32_t>},
		{"floatToBytes",numberToBytes<float>},
		{"doubleToBytes",numberToBytes<double>},
		{"bytesToInt8",bytesToNumber<boost::int8_t>},
		{"bytesToInt16",bytesToNumber<boost::int16_t>},
		{"bytesToInt32",bytesToNumber<boost::int32_t>},
		{"bytesToUInt8",bytesToNumber<boost::uint8_t>},
		{"bytesToUInt16",bytesToNumber<boost::uint16_t>},
		{"bytesToUInt32",bytesToNumber<boost::uint32_t>},
		{"bytesToFloat",bytesToNumber<float>},
		{"bytesToDouble",bytesToNumber<double>},
		
		{"doubleToQ",doubleToQ},
		{"qToDouble",qToDouble},
		{"qDoubleToBytes",qToBytes},
		{"bytesToQDouble",bytesToQ},

		{"signedToUnsignedInt16",convertInteger<boost::int16_t,boost::uint16_t>},
		
		{"bitfieldToUInt16",bitfieldToUInt<boost::uint16_t>},
		{"uint16ToBitfield",uintToBitfield<boost::uint16_t>},
		{"bitfieldToUInt32",bitfieldToUInt<boost::uint32_t>},
		{"uint32ToBitfield",uintToBitfield<boost::uint32_t>},
		
		{0,0}
	};

	// inject the functions in the table:
	for (const lua_RegType *l = methods; l->name; l++) 
	{
		lua_pushstring(L, l->name);
		lua_pushcfunction(L, l->mfunc);
		lua_settable(L, -3);
	}

	return 1;
}

#ifdef __cplusplus
}
#endif
