#include <plug_common.h>

class luna_wrapper_sgt_Buffer_Parameters {
public:
	typedef Luna< sgt::Buffer::Parameters > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82342378) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::Buffer::Parameters*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Buffer::Parameters* rhs =(Luna< sgt::Buffer::Parameters >::check(L,2));
		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::Buffer::Parameters* self= (sgt::Buffer::Parameters*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::Buffer::Parameters >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82342378) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isstring(L,2)==0 ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::Buffer::Parameters");
		
		return luna_dynamicCast(L,converters,"sgt::Buffer::Parameters",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_swapBytes_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_swapBytes_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_leastSignificantBitFirst_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_leastSignificantBitFirst_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_alignment_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_alignment_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compressedSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_compressedSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_subImage2D_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_subImage2D_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnumber(L,4)==0 || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_subImage3D_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_subImage3D_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnumber(L,2)==0 || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnumber(L,3)==0 || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::Buffer::Parameters::Parameters()
	static sgt::Buffer::Parameters* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Buffer::Parameters::Parameters() function, expected prototype:\nsgt::Buffer::Parameters::Parameters()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::Buffer::Parameters();
	}


	// Function binds:
	// bool sgt::Buffer::Parameters::swapBytes() const
	static int _bind_swapBytes_overload_1(lua_State *L) {
		if (!_lg_typecheck_swapBytes_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::Buffer::Parameters::swapBytes() const function, expected prototype:\nbool sgt::Buffer::Parameters::swapBytes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::Buffer::Parameters::swapBytes() const. Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->swapBytes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::Buffer::Parameters & sgt::Buffer::Parameters::swapBytes(bool swapBytes)
	static int _bind_swapBytes_overload_2(lua_State *L) {
		if (!_lg_typecheck_swapBytes_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Buffer::Parameters & sgt::Buffer::Parameters::swapBytes(bool swapBytes) function, expected prototype:\nsgt::Buffer::Parameters & sgt::Buffer::Parameters::swapBytes(bool swapBytes)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool swapBytes=(bool)(lua_toboolean(L,2)==1);

		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::Buffer::Parameters & sgt::Buffer::Parameters::swapBytes(bool). Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::Buffer::Parameters* lret = &self->swapBytes(swapBytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::Buffer::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Buffer::Parameters::swapBytes
	static int _bind_swapBytes(lua_State *L) {
		if (_lg_typecheck_swapBytes_overload_1(L)) return _bind_swapBytes_overload_1(L);
		if (_lg_typecheck_swapBytes_overload_2(L)) return _bind_swapBytes_overload_2(L);

		luaL_error(L, "error in function swapBytes, cannot match any of the overloads for function swapBytes:\n  swapBytes()\n  swapBytes(bool)\n");
		return 0;
	}

	// bool sgt::Buffer::Parameters::leastSignificantBitFirst() const
	static int _bind_leastSignificantBitFirst_overload_1(lua_State *L) {
		if (!_lg_typecheck_leastSignificantBitFirst_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::Buffer::Parameters::leastSignificantBitFirst() const function, expected prototype:\nbool sgt::Buffer::Parameters::leastSignificantBitFirst() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::Buffer::Parameters::leastSignificantBitFirst() const. Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->leastSignificantBitFirst();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// sgt::Buffer::Parameters & sgt::Buffer::Parameters::leastSignificantBitFirst(bool leastSignificantBitFirst)
	static int _bind_leastSignificantBitFirst_overload_2(lua_State *L) {
		if (!_lg_typecheck_leastSignificantBitFirst_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Buffer::Parameters & sgt::Buffer::Parameters::leastSignificantBitFirst(bool leastSignificantBitFirst) function, expected prototype:\nsgt::Buffer::Parameters & sgt::Buffer::Parameters::leastSignificantBitFirst(bool leastSignificantBitFirst)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool leastSignificantBitFirst=(bool)(lua_toboolean(L,2)==1);

		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::Buffer::Parameters & sgt::Buffer::Parameters::leastSignificantBitFirst(bool). Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::Buffer::Parameters* lret = &self->leastSignificantBitFirst(leastSignificantBitFirst);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::Buffer::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Buffer::Parameters::leastSignificantBitFirst
	static int _bind_leastSignificantBitFirst(lua_State *L) {
		if (_lg_typecheck_leastSignificantBitFirst_overload_1(L)) return _bind_leastSignificantBitFirst_overload_1(L);
		if (_lg_typecheck_leastSignificantBitFirst_overload_2(L)) return _bind_leastSignificantBitFirst_overload_2(L);

		luaL_error(L, "error in function leastSignificantBitFirst, cannot match any of the overloads for function leastSignificantBitFirst:\n  leastSignificantBitFirst()\n  leastSignificantBitFirst(bool)\n");
		return 0;
	}

	// int sgt::Buffer::Parameters::alignment() const
	static int _bind_alignment_overload_1(lua_State *L) {
		if (!_lg_typecheck_alignment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::Buffer::Parameters::alignment() const function, expected prototype:\nint sgt::Buffer::Parameters::alignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::Buffer::Parameters::alignment() const. Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->alignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::Buffer::Parameters & sgt::Buffer::Parameters::alignment(int alignment)
	static int _bind_alignment_overload_2(lua_State *L) {
		if (!_lg_typecheck_alignment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Buffer::Parameters & sgt::Buffer::Parameters::alignment(int alignment) function, expected prototype:\nsgt::Buffer::Parameters & sgt::Buffer::Parameters::alignment(int alignment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int alignment=(int)lua_tointeger(L,2);

		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::Buffer::Parameters & sgt::Buffer::Parameters::alignment(int). Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::Buffer::Parameters* lret = &self->alignment(alignment);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::Buffer::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Buffer::Parameters::alignment
	static int _bind_alignment(lua_State *L) {
		if (_lg_typecheck_alignment_overload_1(L)) return _bind_alignment_overload_1(L);
		if (_lg_typecheck_alignment_overload_2(L)) return _bind_alignment_overload_2(L);

		luaL_error(L, "error in function alignment, cannot match any of the overloads for function alignment:\n  alignment()\n  alignment(int)\n");
		return 0;
	}

	// int sgt::Buffer::Parameters::compressedSize() const
	static int _bind_compressedSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_compressedSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int sgt::Buffer::Parameters::compressedSize() const function, expected prototype:\nint sgt::Buffer::Parameters::compressedSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int sgt::Buffer::Parameters::compressedSize() const. Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->compressedSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// sgt::Buffer::Parameters & sgt::Buffer::Parameters::compressedSize(int compressedSize)
	static int _bind_compressedSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_compressedSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Buffer::Parameters & sgt::Buffer::Parameters::compressedSize(int compressedSize) function, expected prototype:\nsgt::Buffer::Parameters & sgt::Buffer::Parameters::compressedSize(int compressedSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int compressedSize=(int)lua_tointeger(L,2);

		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::Buffer::Parameters & sgt::Buffer::Parameters::compressedSize(int). Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::Buffer::Parameters* lret = &self->compressedSize(compressedSize);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::Buffer::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Buffer::Parameters::compressedSize
	static int _bind_compressedSize(lua_State *L) {
		if (_lg_typecheck_compressedSize_overload_1(L)) return _bind_compressedSize_overload_1(L);
		if (_lg_typecheck_compressedSize_overload_2(L)) return _bind_compressedSize_overload_2(L);

		luaL_error(L, "error in function compressedSize, cannot match any of the overloads for function compressedSize:\n  compressedSize()\n  compressedSize(int)\n");
		return 0;
	}

	// sgt::vec3< int > sgt::Buffer::Parameters::subImage2D() const
	static int _bind_subImage2D_overload_1(lua_State *L) {
		if (!_lg_typecheck_subImage2D_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec3< int > sgt::Buffer::Parameters::subImage2D() const function, expected prototype:\nsgt::vec3< int > sgt::Buffer::Parameters::subImage2D() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec3< int > sgt::Buffer::Parameters::subImage2D() const. Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec3< int > stack_lret = self->subImage2D();
		sgt::vec3< int >* lret = new sgt::vec3< int >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec3< int > >::push(L,lret,true);

		return 1;
	}

	// sgt::Buffer::Parameters & sgt::Buffer::Parameters::subImage2D(int skipPixels, int skipRows, int rowLength)
	static int _bind_subImage2D_overload_2(lua_State *L) {
		if (!_lg_typecheck_subImage2D_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Buffer::Parameters & sgt::Buffer::Parameters::subImage2D(int skipPixels, int skipRows, int rowLength) function, expected prototype:\nsgt::Buffer::Parameters & sgt::Buffer::Parameters::subImage2D(int skipPixels, int skipRows, int rowLength)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int skipPixels=(int)lua_tointeger(L,2);
		int skipRows=(int)lua_tointeger(L,3);
		int rowLength=(int)lua_tointeger(L,4);

		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::Buffer::Parameters & sgt::Buffer::Parameters::subImage2D(int, int, int). Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::Buffer::Parameters* lret = &self->subImage2D(skipPixels, skipRows, rowLength);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::Buffer::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Buffer::Parameters::subImage2D
	static int _bind_subImage2D(lua_State *L) {
		if (_lg_typecheck_subImage2D_overload_1(L)) return _bind_subImage2D_overload_1(L);
		if (_lg_typecheck_subImage2D_overload_2(L)) return _bind_subImage2D_overload_2(L);

		luaL_error(L, "error in function subImage2D, cannot match any of the overloads for function subImage2D:\n  subImage2D()\n  subImage2D(int, int, int)\n");
		return 0;
	}

	// sgt::vec2< int > sgt::Buffer::Parameters::subImage3D() const
	static int _bind_subImage3D_overload_1(lua_State *L) {
		if (!_lg_typecheck_subImage3D_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::vec2< int > sgt::Buffer::Parameters::subImage3D() const function, expected prototype:\nsgt::vec2< int > sgt::Buffer::Parameters::subImage3D() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::vec2< int > sgt::Buffer::Parameters::subImage3D() const. Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		sgt::vec2< int > stack_lret = self->subImage3D();
		sgt::vec2< int >* lret = new sgt::vec2< int >(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::vec2< int > >::push(L,lret,true);

		return 1;
	}

	// sgt::Buffer::Parameters & sgt::Buffer::Parameters::subImage3D(int skipImages, int imageHeight)
	static int _bind_subImage3D_overload_2(lua_State *L) {
		if (!_lg_typecheck_subImage3D_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::Buffer::Parameters & sgt::Buffer::Parameters::subImage3D(int skipImages, int imageHeight) function, expected prototype:\nsgt::Buffer::Parameters & sgt::Buffer::Parameters::subImage3D(int skipImages, int imageHeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int skipImages=(int)lua_tointeger(L,2);
		int imageHeight=(int)lua_tointeger(L,3);

		sgt::Buffer::Parameters* self=(Luna< sgt::Buffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call sgt::Buffer::Parameters & sgt::Buffer::Parameters::subImage3D(int, int). Got : '%s'\n%s",typeid(Luna< sgt::Buffer::Parameters >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const sgt::Buffer::Parameters* lret = &self->subImage3D(skipImages, imageHeight);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::Buffer::Parameters >::push(L,lret,false);

		return 1;
	}

	// Overload binder for sgt::Buffer::Parameters::subImage3D
	static int _bind_subImage3D(lua_State *L) {
		if (_lg_typecheck_subImage3D_overload_1(L)) return _bind_subImage3D_overload_1(L);
		if (_lg_typecheck_subImage3D_overload_2(L)) return _bind_subImage3D_overload_2(L);

		luaL_error(L, "error in function subImage3D, cannot match any of the overloads for function subImage3D:\n  subImage3D()\n  subImage3D(int, int)\n");
		return 0;
	}


	// Operator binds:

};

sgt::Buffer::Parameters* LunaTraits< sgt::Buffer::Parameters >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_Buffer_Parameters::_bind_ctor(L);
}

void LunaTraits< sgt::Buffer::Parameters >::_bind_dtor(sgt::Buffer::Parameters* obj) {
	delete obj;
}

const char LunaTraits< sgt::Buffer::Parameters >::className[] = "Buffer_Parameters";
const char LunaTraits< sgt::Buffer::Parameters >::fullName[] = "sgt::Buffer::Parameters";
const char LunaTraits< sgt::Buffer::Parameters >::moduleName[] = "sgt";
const char* LunaTraits< sgt::Buffer::Parameters >::parents[] = {0};
const int LunaTraits< sgt::Buffer::Parameters >::hash = 82342378;
const int LunaTraits< sgt::Buffer::Parameters >::uniqueIDs[] = {82342378,0};

luna_RegType LunaTraits< sgt::Buffer::Parameters >::methods[] = {
	{"swapBytes", &luna_wrapper_sgt_Buffer_Parameters::_bind_swapBytes},
	{"leastSignificantBitFirst", &luna_wrapper_sgt_Buffer_Parameters::_bind_leastSignificantBitFirst},
	{"alignment", &luna_wrapper_sgt_Buffer_Parameters::_bind_alignment},
	{"compressedSize", &luna_wrapper_sgt_Buffer_Parameters::_bind_compressedSize},
	{"subImage2D", &luna_wrapper_sgt_Buffer_Parameters::_bind_subImage2D},
	{"subImage3D", &luna_wrapper_sgt_Buffer_Parameters::_bind_subImage3D},
	{"dynCast", &luna_wrapper_sgt_Buffer_Parameters::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_Buffer_Parameters::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_Buffer_Parameters::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_Buffer_Parameters::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::Buffer::Parameters >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::Buffer::Parameters >::enumValues[] = {
	{0,0}
};


